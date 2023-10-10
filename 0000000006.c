#include "w2c2_base.h"

#include "rustpython.h"

U32 f630(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l0;
si1=32U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=1U;
l1=si0;
si0=l0;
si1=127U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=131072U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=-205744U;
si0+=si1;
si1=712016U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=0U;
goto L0;
L6:;
si0=l0;
si1=-201547U;
si0+=si1;
si1=5U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=0U;
goto L0;
L7:;
si0=l0;
si1=-195102U;
si0+=si1;
si1=1506U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=0U;
goto L0;
L8:;
si0=l0;
si1=-191457U;
si0+=si1;
si1=3103U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=0U;
goto L0;
L9:;
si0=l0;
si1=-183970U;
si0+=si1;
si1=14U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=0U;
goto L0;
L10:;
si0=l0;
si1=-2U;
si0&=si1;
si1=178206U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
goto L0;
L11:;
si0=l0;
si1=-32U;
si0&=si1;
si1=173792U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
goto L0;
L5:;
si0=l0;
si1=1104916U;
si2=44U;
si3=1105004U;
si4=196U;
si5=1105200U;
si6=450U;
si0=f699(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L4:;
si0=0U;
l1=si0;
si0=l0;
si1=-177978U;
si0+=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=-1114112U;
si0+=si1;
si1=-196112U;
si0=si0 < si1;
l1=si0;
L3:;
si0=l1;
goto L0;
L2:;
si0=l0;
si1=1105650U;
si2=40U;
si3=1105730U;
si4=287U;
si5=1106017U;
si6=303U;
si0=f699(i,si0,si1,si2,si3,si4,si5,si6);
L0:;
return si0;
}

U32 f631(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=-1114111U;
si0+=si1;
si1=0U;
si2=l3;
si3=-1114112U;
si2+=si3;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L1;
case 3:
goto L2;
default:
goto L4;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
l0=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l5;
si1=l4;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l5;
si1=l3;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
l0=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l5;
si1=l3;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l2=si0;
L2:;
si0=l2;
goto L0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

U32 f632(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=128U;
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=128U;
l4=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=8U;
si0>>=(si1&31);
l5=si0;
si0=l0;
si1=13U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
L1:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
si1=128U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+14U);
l3=si0;
si1=8U;
si0>>=(si1&31);
l8=si0;
si0=l0;
si1=19U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l0;
si1=18U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si1=l8;
i32_store16(&i->m0,(U64)si0+27U,si1);
si0=l2;
si1=29U;
si0+=si1;
si1=l8;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store16(&i->m0,(U64)si0+21U,si1);
si0=l2;
si1=23U;
si0+=si1;
si1=l5;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l9;
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l2;
si1=l10;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l2;
si1=l6;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=255U;
si0&=si1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=20U;
si0+=si1;
l13=si0;
si0=l7;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si2=l0;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si0=l6;
si1=255U;
si0&=si1;
l5=si0;
si1=l0;
si2=l5;
si3=l0;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l15=si0;
L10:;
{
si0=l8;
si1=l0;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=l0;
si2=1U;
si1+=si2;
l5=si1;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l0;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l13;
si1=l0;
si0+=si1;
l4=si0;
si0=l5;
l0=si0;
si0=l15;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l14;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L10;
}
}
si0=1U;
l16=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=l6;
si2=255U;
si1&=si2;
si0=si0 < si1;
if(si0){
goto L8;
}
L9:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l12;
si1=l11;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
l17=si0;
L12:;
{
si0=116U;
l8=si0;
si0=92U;
l0=si0;
si0=0U;
l13=si0;
si0=0U;
l14=si0;
si0=0U;
l5=si0;
si0=1U;
l7=si0;
si0=0U;
l15=si0;
si0=2U;
l4=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l16=si0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L20;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L21;
case 5:
goto L22;
case 6:
goto L22;
case 7:
goto L22;
case 8:
goto L22;
case 9:
goto L22;
case 10:
goto L22;
case 11:
goto L22;
case 12:
goto L22;
case 13:
goto L22;
case 14:
goto L22;
case 15:
goto L22;
case 16:
goto L22;
case 17:
goto L22;
case 18:
goto L22;
case 19:
goto L22;
case 20:
goto L22;
case 21:
goto L22;
case 22:
goto L22;
case 23:
goto L22;
case 24:
goto L22;
case 25:
goto L17;
case 26:
goto L22;
case 27:
goto L22;
case 28:
goto L22;
case 29:
goto L22;
case 30:
goto L18;
default:
goto L23;
}
L23:;
si0=l16;
si1=92U;
si0=si0 == si1;
if(si0){
goto L19;
}
L22:;
si0=l16;
si0=(U32)(U32)(I8)(U8)(si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=l16;
si1=32U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l16;
si1=127U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=1U;
l5=si0;
si0=0U;
l8=si0;
si0=l16;
l0=si0;
si0=0U;
l13=si0;
si0=0U;
l14=si0;
si0=0U;
l7=si0;
si0=0U;
l15=si0;
si0=1U;
l4=si0;
goto L13;
L21:;
si0=0U;
l13=si0;
si0=114U;
l8=si0;
goto L15;
L20:;
si0=0U;
l13=si0;
si0=110U;
l8=si0;
goto L15;
L19:;
si0=0U;
l13=si0;
si0=92U;
l0=si0;
si0=92U;
l8=si0;
goto L14;
L18:;
si0=0U;
l13=si0;
si0=39U;
l8=si0;
goto L15;
L17:;
si0=0U;
l13=si0;
si0=34U;
l8=si0;
goto L15;
L16:;
si0=4U;
l4=si0;
si0=l16;
si1=4U;
si0>>=(si1&31);
si1=1106440U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0<<=(si1&31);
l13=si0;
si0=l16;
si1=15U;
si0&=si1;
si1=1106440U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=24U;
si0<<=(si1&31);
l14=si0;
si0=1U;
l15=si0;
si0=0U;
l5=si0;
si0=120U;
l8=si0;
si0=92U;
l0=si0;
si0=0U;
l7=si0;
goto L13;
L15:;
si0=92U;
l0=si0;
L14:;
si0=0U;
l14=si0;
si0=0U;
l5=si0;
si0=1U;
l7=si0;
si0=0U;
l15=si0;
si0=2U;
l4=si0;
L13:;
si0=l6;
si1=l0;
si2=l17;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L24;
}
si0=1U;
l16=si0;
goto L8;
L24:;
si0=1U;
l16=si0;
si0=1U;
l0=si0;
si0=l5;
if(si0){
goto L25;
}
si0=l7;
si1=l6;
si2=l8;
si3=l17;
si1=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32))(i,si1,si2);
l0=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L26;
}
si0=1U;
si1=2U;
si2=l0;
si0=si2?si0:si1;
l0=si0;
goto L25;
L26:;
si0=2U;
l0=si0;
si0=l6;
si1=l13;
si2=16U;
si1>>=(si2&31);
si2=l17;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L25;
}
si0=l15;
si1=l6;
si2=l14;
si3=24U;
si2>>=(si3&31);
si3=l17;
si1=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32))(i,si1,si2);
l0=si1;
si0|=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=3U;
si1=4U;
si2=l0;
si0=si2?si0:si1;
l0=si0;
L25:;
si0=l0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l3;
si1=255U;
si0&=si1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l2;
si1=26U;
si0+=si1;
l7=si0;
si0=l10;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si2=l0;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l9;
si1=255U;
si0&=si1;
l5=si0;
si1=l0;
si2=l5;
si3=l0;
si2=si2 > si3;
si0=si2?si0:si1;
l12=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l14=si0;
L28:;
{
si0=l12;
si1=l0;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l2;
si1=l0;
si2=1U;
si1+=si2;
l5=si1;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=l8;
si1=l0;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si1=l0;
si0+=si1;
l4=si0;
si0=l5;
l0=si0;
si0=l14;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l13;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L28;
}
}
si0=1U;
l16=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=l9;
si2=255U;
si1&=si2;
si0=si0 < si1;
if(si0){
goto L8;
}
L27:;
si0=0U;
l16=si0;
L8:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l16;
goto L0;
L7:;
si0=l8;
si1=4U;
si2=1106504U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=4U;
si2=1106504U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=4U;
si1=4U;
si2=1106504U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f633(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l3=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=l1;
si0-=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
l4=si0;
L8:;
{
si0=l1;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=l3;
si1=l2;
si2=-8U;
si1+=si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
goto L5;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=0U;
l4=si0;
goto L3;
L9:;
si0=1U;
l4=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si0=!(si0);
if(si0){
goto L3;
}
si0=2U;
l4=si0;
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si0=!(si0);
if(si0){
goto L3;
}
si0=3U;
l4=si0;
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si0=!(si0);
if(si0){
goto L3;
}
si0=4U;
l4=si0;
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=5U;
l4=si0;
si0=l2;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si0=!(si0);
if(si0){
goto L3;
}
si0=6U;
l4=si0;
si0=l2;
si1=6U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L6:;
si0=l2;
si1=-8U;
si0+=si1;
l5=si0;
si0=0U;
l3=si0;
L5:;
L10:;
{
si0=l1;
si1=l3;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0^=si1;
si1=l4;
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
l4=si0;
si1=-1U;
si0^=si1;
si1=l4;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L10;
}
}
L4:;
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
L11:;
{
si0=l1;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l3;
l4=si0;
goto L3;
L12:;
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L2;
}
L3:;
si0=l4;
si1=1U;
si0+=si1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f634(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=250U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=1102120U;
si2=1U;
si3=l3;
si4=40U;
si3+=si4;
si4=1U;
f613(i,si0,si1,si2,si3,si4);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f635(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

U32 f636(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=1102156U;
si2=12U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l5=si3;
si3=i32_load(&i->m0,(U64)si3+12U);
l6=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=60U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1102132U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=250U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=1102168U;
si2=2U;
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
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
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+12U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-4493808902380553279ULL;
sj0^=sj1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-163230743173927068ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=1102168U;
si2=2U;
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l6;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=0U;
l3=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f637(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=255U;
si0&=si1;
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
si0=l7;
si1=1102272U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=2U;
l2=si0;
goto L1;
L3:;
si0=l7;
si1=1102274U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=2U;
l2=si0;
goto L1;
L2:;
si0=l7;
si1=1102276U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=7U;
l2=si0;
L1:;
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l7;
si1=76U;
si0+=si1;
si1=251U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=68U;
si0+=si1;
si1=251U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=250U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l7;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=88U;
si0+=si1;
si1=1102332U;
si2=3U;
si3=l7;
si4=56U;
si3+=si4;
si4=3U;
f613(i,si0,si1,si2,si3,si4);
si0=l7;
si1=88U;
si0+=si1;
si1=l6;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l7;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=84U;
si0+=si1;
si1=251U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=76U;
si0+=si1;
si1=251U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=68U;
si0+=si1;
si1=252U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=250U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l7;
si1=l7;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l7;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=88U;
si0+=si1;
si1=1102384U;
si2=4U;
si3=l7;
si4=56U;
si3+=si4;
si4=4U;
f613(i,si0,si1,si2,si3,si4);
si0=l7;
si1=88U;
si0+=si1;
si1=l6;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f638(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l3;
si2=8U;
si1+=si2;
si2=1117316U;
si3=l3;
si4=12U;
si3+=si4;
si4=1117316U;
si5=l2;
si6=1103168U;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f639(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f640(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si0=f621(i,si0,si1,si2);
L0:;
return si0;
}

void f641(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=60U;
si0+=si1;
si1=251U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=250U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=1102420U;
si2=2U;
si3=l5;
si4=48U;
si3+=si4;
si4=2U;
f613(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l4;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f642(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si0+=si1;
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
l8=si0;
L4:;
{
si0=l8;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l4;
si1=1U;
si0+=si1;
l8=si0;
si0=l9;
si1=255U;
si0&=si1;
l9=si0;
goto L5;
L6:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l10=si0;
si0=l9;
si1=31U;
si0&=si1;
l8=si0;
si0=l9;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l9=si0;
si0=l4;
si1=2U;
si0+=si1;
l8=si0;
goto L5;
L7:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l9;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l10;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
si0=l4;
si1=3U;
si0+=si1;
l8=si0;
goto L5;
L8:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l4;
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
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
l8=si0;
L5:;
si0=l7;
si1=l4;
si0-=si1;
si1=l8;
si0+=si1;
l7=si0;
si0=l9;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
si0=l8;
si1=-32U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l8;
si1=-16U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=63U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si2=63U;
si1&=si2;
si2=12U;
si1<<=(si2&31);
si0|=si1;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l8;
si2=255U;
si1&=si2;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l2;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=0U;
l4=si0;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L10;
L12:;
si0=0U;
l4=si0;
si0=l1;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
L11:;
si0=l1;
l4=si0;
L10:;
si0=l7;
si1=l2;
si2=l4;
si0=si2?si0:si1;
l2=si0;
si0=l4;
si1=l1;
si2=l4;
si0=si2?si0:si1;
l1=si0;
L2:;
si0=l3;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l1;
si1=l2;
si0=f663(i,si0,si1);
l8=si0;
goto L14;
L15:;
si0=l2;
if(si0){
goto L16;
}
si0=0U;
l8=si0;
goto L14;
L16:;
si0=l2;
si1=3U;
si0&=si1;
l9=si0;
si0=l2;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=0U;
l8=si0;
si0=0U;
l4=si0;
goto L17;
L18:;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l2;
si1=-4U;
si0&=si1;
l4=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l8;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l4;
si1=8U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l8;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
L17:;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=l4;
si0+=si1;
l4=si0;
L19:;
{
si0=l8;
si1=l4;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L19;
}
}
L14:;
si0=l6;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l6;
si1=l8;
si0-=si1;
l7=si0;
si0=0U;
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L22;
case 1:
goto L24;
case 2:
goto L23;
case 3:
goto L22;
default:
goto L22;
}
L24:;
si0=l7;
l4=si0;
si0=0U;
l7=si0;
goto L22;
L23:;
si0=l7;
si1=1U;
si0>>=(si1&31);
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l7=si0;
L22:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
L25:;
{
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l9;
si1=l6;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L25;
}
}
si0=1U;
goto L0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L20:;
si0=1U;
l4=si0;
si0=l9;
si1=l1;
si2=l2;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L26;
}
si0=0U;
l4=si0;
L28:;
{
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l7;
l4=si0;
goto L27;
L29:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l9;
si1=l6;
si2=l8;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L28;
}
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
L27:;
si0=l4;
si1=l7;
si0=si0 < si1;
l4=si0;
L26:;
si0=l4;
goto L0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f643(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
L2:;
{
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l8;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
L5:;
{
si0=l1;
si1=l8;
si0+=si1;
l10=si0;
si0=l2;
si1=l8;
si0-=si1;
l11=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l10;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l0=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=l10;
si0-=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
l0=si0;
L11:;
{
si0=l10;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l12;
si1=l0;
si2=1U;
si1+=si2;
l0=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l12;
si1=l11;
si2=-8U;
si1+=si2;
l13=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l11;
si1=-8U;
si0+=si1;
l13=si0;
si0=0U;
l12=si0;
L9:;
L12:;
{
si0=l10;
si1=l12;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0^=si1;
si1=l0;
si2=168430090U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0^=si1;
si1=l0;
si2=168430090U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L12;
}
}
L8:;
si0=l12;
si1=l11;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
l8=si0;
goto L4;
L13:;
L14:;
{
si0=l10;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l12;
l0=si0;
goto L6;
L15:;
si0=l11;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l2;
l8=si0;
goto L4;
L7:;
si0=l2;
si1=l8;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
l8=si0;
goto L4;
L16:;
si0=0U;
l0=si0;
L17:;
{
si0=l10;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l11;
si1=l0;
si2=1U;
si1+=si2;
l0=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
si0=l2;
l8=si0;
goto L4;
L6:;
si0=l0;
si1=l8;
si0+=si1;
l0=si0;
si1=1U;
si0+=si1;
l8=si0;
si0=l0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l1;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=0U;
l9=si0;
si0=l8;
l13=si0;
si0=l8;
l0=si0;
goto L3;
L18:;
si0=l8;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L5;
}
}
L4:;
si0=1U;
l9=si0;
si0=l7;
l13=si0;
si0=l2;
l0=si0;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
L3:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si1=1102460U;
si2=4U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L19;
}
L20:;
si0=l1;
si1=l7;
si0+=si1;
l12=si0;
si0=l0;
si1=l7;
si0-=si1;
l10=si0;
si0=0U;
l11=si0;
si0=l0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l10;
si1=l12;
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
l11=si0;
L21:;
si0=l5;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
l7=si0;
si0=l4;
si1=l12;
si2=l10;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
L19:;
}
si0=1U;
l6=si0;
L1:;
si0=l6;
L0:;
return si0;
}

U32 f644(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=1U;
l6=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102467U;
si2=1102464U;
si3=l7;
si4=255U;
si3&=si4;
l7=si3;
si1=si3?si1:si2;
si2=2U;
si3=3U;
si4=l7;
si2=si4?si2:si3;
si3=l8;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102416U;
si2=2U;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=l8;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l6=si0;
goto L1;
L2:;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=1U;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102469U;
si2=3U;
si3=l8;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
L3:;
si0=1U;
l6=si0;
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l5;
si1=52U;
si0+=si1;
si1=1102436U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l5;
si1=l5;
si2=27U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l5;
sj1=l10;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=12U;
si0+=si1;
si1=l1;
si2=l2;
si0=f643(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l5;
si1=12U;
si0+=si1;
si1=1102416U;
si2=2U;
si0=f643(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=l5;
si2=28U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1102472U;
si2=2U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+52U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l6=si0;
L1:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f645(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=1U;
l5=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102467U;
si2=1102484U;
si3=l4;
si1=si3?si1:si2;
si2=2U;
si3=1U;
si4=l4;
si2=si4?si2:si3;
si3=l6;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=l6;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l5=si0;
goto L1;
L2:;
si0=l4;
if(si0){
goto L3;
}
si0=1U;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102485U;
si2=2U;
si3=l6;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L3:;
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l3;
si1=52U;
si0+=si1;
si1=1102436U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l3;
si2=27U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l3;
si2=28U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1102472U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+52U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f646(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l4;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102467U;
si2=2U;
si3=l5;
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
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L4;
}
si0=1U;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102488U;
si2=1U;
si3=l5;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
L4:;
si0=1U;
l4=si0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l3;
si1=52U;
si0+=si1;
si1=1102436U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l3;
si2=27U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l3;
si2=28U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1102472U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+52U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
goto L1;
L2:;
si0=l1;
si1=l5;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l4=si0;
L1:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f647(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L7;
}
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102467U;
si2=2U;
si3=l6;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L7:;
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l3;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=1102580U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1096476U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=1102620U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102488U;
si2=1U;
si3=l6;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L4:;
si0=1U;
l4=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
si1=36U;
si0+=si1;
si1=1102436U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=1102416U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+36U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l1;
si1=l6;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102416U;
si2=2U;
si3=l6;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f648(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=1U;
l4=si0;
si0=l1;
si1=l5;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l3;
si1=36U;
si0+=si1;
si1=1102436U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=1102684U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1096476U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=1102692U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=1102472U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+36U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=1U;
l4=si0;
goto L1;
L2:;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+6U,si1);
L1:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f649(rustpythonInstance*i,U32 l0,F32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2;
F32 sf0,sf1;
si0=i->g0;
si1=1136U;
si0-=si1;
l4=si0;
i->g0=si0;
sf0=l1;
si0=i32_reinterpret_f32(sf0);
l5=si0;
sf0=l1;
sf0=fabsf(sf0);
sf1=INFINITY;
si0=sf0 != sf1;
if(si0){
goto L2;
}
si0=3U;
l6=si0;
goto L1;
L2:;
sf0=l1;
sf1=l1;
si0=sf0 == sf1;
if(si0){
goto L3;
}
si0=2U;
l6=si0;
goto L1;
L3:;
si0=l5;
si1=8388607U;
si0&=si1;
si1=8388608U;
si0|=si1;
si1=l5;
si2=1U;
si1<<=(si2&31);
si2=16777214U;
si1&=si2;
si2=l5;
si3=23U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
sj0=(U64)(si0);
l9=sj0;
sj1=1ULL;
sj0&=sj1;
l10=sj0;
si0=4U;
l6=si0;
si0=4U;
si1=3U;
si2=l5;
si3=2139095040U;
si2&=si3;
si0=si2?si0:si1;
si1=2U;
si2=l5;
si3=2147483647U;
si2&=si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
default:
goto L1;
}
L5:;
si0=l7;
si1=-150U;
si0+=si1;
l11=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l12=sj0;
goto L1;
L4:;
sj0=33554432ULL;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
si2=l8;
si3=8388608U;
si2=si2 == si3;
l6=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l6;
sj0=si2?sj0:sj1;
l12=sj0;
si0=-152U;
si1=-151U;
si2=l6;
si0=si2?si0:si1;
si1=l7;
si0+=si1;
l11=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
L1:;
si0=l4;
si1=l11;
i32_store16(&i->m0,(U64)si0+1128U,si1);
si0=l4;
sj1=l12;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+1112U,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+1104U,sj1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+1130U,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=3U;
si2=l6;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=1101592U;
si1=1101593U;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
l6=si2;
si0=si2?si0:si1;
si1=1101592U;
si2=1096476U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l7=si0;
si0=1U;
l6=si0;
si0=1U;
si1=l5;
si2=31U;
si1>>=(si2&31);
si2=l2;
si0=si2?si0:si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
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
L11:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101594U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
si0=0U;
l5=si0;
si0=1096476U;
l7=si0;
goto L6;
L10:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101597U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
goto L6;
L9:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=1056U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+1052U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101432U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
goto L6;
L8:;
si0=-12U;
si1=5U;
si2=l11;
si2=(U32)(I32)(I16)(U16)(si2);
l6=si2;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=l6;
si0*=si1;
l6=si0;
si1=16063U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l4;
si1=1040U;
si0+=si1;
si1=l4;
si2=1104U;
si1+=si2;
si2=l4;
si3=16U;
si2+=si3;
si3=l6;
si4=4U;
si3>>=(si4&31);
si4=21U;
si3+=si4;
l11=si3;
si4=0U;
si5=l3;
si4-=si5;
si5=-32768U;
si6=l3;
si7=32768U;
si6=si6 < si7;
si4=si6?si4:si5;
l6=si4;
f608(i,si0,si1,si2,si3,si4);
si0=l6;
si0=(U32)(I32)(I16)(U16)(si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+1040U);
if(si0){
goto L14;
}
si0=l4;
si1=1088U;
si0+=si1;
si1=l4;
si2=1104U;
si1+=si2;
si2=l4;
si3=16U;
si2+=si3;
si3=l11;
si4=l6;
f605(i,si0,si1,si2,si3,si4);
goto L13;
L14:;
si0=l4;
si1=1088U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=1040U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+1040U);
i64_store(&i->m0,(U64)si0+1088U,sj1);
L13:;
si0=l4;
si0=i32_load16_s(&i->m0,(U64)si0+1096U);
l11=si0;
si1=l6;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+1088U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+1092U);
si3=l11;
si4=l3;
si5=l4;
si6=1040U;
si5+=si6;
si6=4U;
f610(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
goto L6;
L15:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l3;
if(si0){
goto L16;
}
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101600U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
goto L6;
L16:;
si0=l4;
si1=1056U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+1052U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101432U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
goto L6;
L12:;
si0=1101756U;
si1=37U;
si2=1101796U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101600U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
L6:;
si0=l4;
si1=1100U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+1092U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+1088U,si1);
si0=l0;
si1=l4;
si2=1088U;
si1+=si2;
si0=f650(i,si0,si1);
l5=si0;
si0=l4;
si1=1136U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f650(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l8;
l9=si0;
si0=l7;
l10=si0;
si0=l6;
l1=si0;
goto L3;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l6;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=1U;
l10=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=48U;
l9=si0;
si0=l0;
si1=48U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
l1=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1096476U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=l3;
si2=l6;
si1-=si2;
l6=si1;
si2=l6;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l1;
si0=f665(i,si0,si1,si2);
l5=si0;
goto L1;
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
L7:;
{
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L11;
case 1:
goto L9;
case 2:
goto L10;
default:
goto L11;
}
L11:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L8;
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L8;
L9:;
si0=l5;
si1=2U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l11=si0;
si1=1000U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=4U;
si1=5U;
si2=l11;
si3=10000U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
goto L8;
L12:;
si0=1U;
l6=si0;
si0=l11;
si1=10U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=2U;
si1=3U;
si2=l11;
si3=100U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
L8:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=l1;
si0+=si1;
l1=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l3;
si1=l1;
si0-=si1;
l4=si0;
si0=l10;
si1=255U;
si0&=si1;
l5=si0;
switch(si0){
case 0:
goto L16;
case 1:
goto L18;
case 2:
goto L17;
case 3:
goto L18;
default:
goto L16;
}
L18:;
si0=l4;
l5=si0;
si0=0U;
l4=si0;
goto L16;
L17:;
si0=l4;
si1=1U;
si0>>=(si1&31);
l5=si0;
si0=l4;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l4=si0;
L16:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
L19:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
si1=l9;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
goto L2;
}
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l2;
si0=f665(i,si0,si1,si2);
l5=si0;
goto L13;
L14:;
si0=l6;
si1=l1;
si2=l2;
si0=f665(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=0U;
l5=si0;
L21:;
{
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
l5=si0;
goto L20;
L22:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=l9;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L21;
}
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
L20:;
si0=l5;
si1=l4;
si0=si0 < si1;
l5=si0;
L13:;
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L1;
L2:;
si0=1U;
l5=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f651(rustpythonInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1;
si0=i->g0;
si1=1136U;
si0-=si1;
l4=si0;
i->g0=si0;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l5=sj0;
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
if(si0){
goto L2;
}
si0=2U;
l6=si0;
goto L1;
L2:;
sj0=l5;
sj1=4503599627370495ULL;
sj0&=sj1;
l7=sj0;
sj1=4503599627370496ULL;
sj0|=sj1;
sj1=l5;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=9007199254740990ULL;
sj1&=sj2;
sj2=l5;
sj3=52ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=2047U;
si2&=si3;
l8=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj1=1ULL;
sj0&=sj1;
l10=sj0;
si0=3U;
l6=si0;
si0=1U;
si1=2U;
si2=4U;
sj3=l5;
sj4=9218868437227405312ULL;
sj3&=sj4;
l11=sj3;
si3=!(sj3);
l12=si3;
si1=si3?si1:si2;
sj2=l11;
sj3=9218868437227405312ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
si1=3U;
si2=4U;
si3=l12;
si1=si3?si1:si2;
sj2=l7;
si2=!(sj2);
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
default:
goto L1;
}
L5:;
si0=4U;
l6=si0;
goto L1;
L4:;
si0=l8;
si1=-1075U;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l14=sj0;
goto L1;
L3:;
sj0=18014398509481984ULL;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l9;
sj3=4503599627370496ULL;
si2=sj2 == sj3;
l6=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l6;
sj0=si2?sj0:sj1;
l14=sj0;
si0=-1077U;
si1=-1076U;
si2=l6;
si0=si2?si0:si1;
si1=l8;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
L1:;
si0=l4;
si1=l13;
i32_store16(&i->m0,(U64)si0+1128U,si1);
si0=l4;
sj1=l14;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+1112U,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+1104U,sj1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+1130U,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=3U;
si2=l6;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=1101592U;
si1=1101593U;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l6=si2;
si0=si2?si0:si1;
si1=1101592U;
si2=1096476U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l12=si0;
si0=1U;
l6=si0;
si0=1U;
sj1=l5;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l8;
si1=-1U;
si0+=si1;
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
L11:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101594U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=1040U;
si0+=si1;
l13=si0;
si0=0U;
l2=si0;
si0=1096476U;
l12=si0;
goto L6;
L10:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101597U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l13=si0;
goto L6;
L9:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=1056U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+1052U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101432U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l13=si0;
goto L6;
L8:;
si0=-12U;
si1=5U;
si2=l13;
si2=(U32)(I32)(I16)(U16)(si2);
l6=si2;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=l6;
si0*=si1;
l6=si0;
si1=16063U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l4;
si1=1040U;
si0+=si1;
si1=l4;
si2=1104U;
si1+=si2;
si2=l4;
si3=16U;
si2+=si3;
si3=l6;
si4=4U;
si3>>=(si4&31);
si4=21U;
si3+=si4;
l13=si3;
si4=0U;
si5=l3;
si4-=si5;
si5=-32768U;
si6=l3;
si7=32768U;
si6=si6 < si7;
si4=si6?si4:si5;
l6=si4;
f608(i,si0,si1,si2,si3,si4);
si0=l6;
si0=(U32)(I32)(I16)(U16)(si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+1040U);
if(si0){
goto L14;
}
si0=l4;
si1=1088U;
si0+=si1;
si1=l4;
si2=1104U;
si1+=si2;
si2=l4;
si3=16U;
si2+=si3;
si3=l13;
si4=l6;
f605(i,si0,si1,si2,si3,si4);
goto L13;
L14:;
si0=l4;
si1=1088U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=1040U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+1040U);
i64_store(&i->m0,(U64)si0+1088U,sj1);
L13:;
si0=l4;
si0=i32_load16_s(&i->m0,(U64)si0+1096U);
l13=si0;
si1=l6;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+1088U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+1092U);
si3=l13;
si4=l3;
si5=l4;
si6=1040U;
si5+=si6;
si6=4U;
f610(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
goto L6;
L15:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l3;
if(si0){
goto L16;
}
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101600U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l13=si0;
goto L6;
L16:;
si0=l4;
si1=1056U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+1052U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101432U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l13=si0;
goto L6;
L12:;
si0=1101756U;
si1=37U;
si2=1101796U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1101600U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l13=si0;
L6:;
si0=l4;
si1=1100U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+1092U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+1088U,si1);
si0=l0;
si1=l4;
si2=1088U;
si1+=si2;
si0=f650(i,si0,si1);
l6=si0;
si0=l4;
si1=1136U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f652(rustpythonInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l5=sj0;
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
if(si0){
goto L2;
}
si0=2U;
l6=si0;
goto L1;
L2:;
sj0=l5;
sj1=4503599627370495ULL;
sj0&=sj1;
l7=sj0;
sj1=4503599627370496ULL;
sj0|=sj1;
sj1=l5;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=9007199254740990ULL;
sj1&=sj2;
sj2=l5;
sj3=52ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=2047U;
si2&=si3;
l8=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj1=1ULL;
sj0&=sj1;
l10=sj0;
si0=3U;
l6=si0;
si0=1U;
si1=2U;
si2=4U;
sj3=l5;
sj4=9218868437227405312ULL;
sj3&=sj4;
l11=sj3;
si3=!(sj3);
l12=si3;
si1=si3?si1:si2;
sj2=l11;
sj3=9218868437227405312ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
si1=3U;
si2=4U;
si3=l12;
si1=si3?si1:si2;
sj2=l7;
si2=!(sj2);
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
default:
goto L1;
}
L5:;
si0=4U;
l6=si0;
goto L1;
L4:;
si0=l8;
si1=-1075U;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l14=sj0;
goto L1;
L3:;
sj0=18014398509481984ULL;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l9;
sj3=4503599627370496ULL;
si2=sj2 == sj3;
l6=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l6;
sj0=si2?sj0:sj1;
l14=sj0;
si0=-1077U;
si1=-1076U;
si2=l6;
si0=si2?si0:si1;
si1=l8;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
L1:;
si0=l4;
si1=l13;
i32_store16(&i->m0,(U64)si0+120U,si1);
si0=l4;
sj1=l14;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+122U,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=3U;
si2=l6;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=1101592U;
si1=1101593U;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l6=si2;
si0=si2?si0:si1;
si1=1101592U;
si2=1096476U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l13=si0;
si0=1U;
l6=si0;
si0=1U;
sj1=l5;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l12;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L10;
default:
goto L8;
}
L10:;
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=l4;
si3=15U;
si2+=si3;
si3=17U;
f606(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L12;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=l4;
si3=15U;
si2+=si3;
si3=17U;
f602(i,si0,si1,si2,si3);
goto L11;
L12:;
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+80U,sj1);
L11:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+84U);
si3=l4;
si3=i32_load16_u(&i->m0,(U64)si3+88U);
si4=l3;
si5=l4;
si6=32U;
si5+=si6;
si6=4U;
f610(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
goto L6;
L9:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1101594U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=32U;
si0+=si1;
l12=si0;
si0=0U;
l2=si0;
si0=1096476U;
l13=si0;
goto L6;
L8:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1101597U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=32U;
si0+=si1;
l12=si0;
goto L6;
L7:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=48U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1101432U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l12=si0;
goto L6;
L13:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1101600U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l12=si0;
L6:;
si0=l4;
si1=92U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l4;
si2=80U;
si1+=si2;
si0=f650(i,si0,si1);
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f653(rustpythonInstance*i,U32 l0,F32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
F32 sf0,sf1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
sf0=l1;
si0=i32_reinterpret_f32(sf0);
l5=si0;
sf0=l1;
sf0=fabsf(sf0);
sf1=INFINITY;
si0=sf0 != sf1;
if(si0){
goto L2;
}
si0=3U;
l6=si0;
goto L1;
L2:;
sf0=l1;
sf1=l1;
si0=sf0 == sf1;
if(si0){
goto L3;
}
si0=2U;
l6=si0;
goto L1;
L3:;
si0=l5;
si1=8388607U;
si0&=si1;
si1=8388608U;
si0|=si1;
si1=l5;
si2=1U;
si1<<=(si2&31);
si2=16777214U;
si1&=si2;
si2=l5;
si3=23U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
sj0=(U64)(si0);
l9=sj0;
sj1=1ULL;
sj0&=sj1;
l10=sj0;
si0=4U;
l6=si0;
si0=4U;
si1=3U;
si2=l5;
si3=2139095040U;
si2&=si3;
si0=si2?si0:si1;
si1=2U;
si2=l5;
si3=2147483647U;
si2&=si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
default:
goto L1;
}
L5:;
si0=l7;
si1=-150U;
si0+=si1;
l11=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l12=sj0;
goto L1;
L4:;
sj0=33554432ULL;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
si2=l8;
si3=8388608U;
si2=si2 == si3;
l6=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l6;
sj0=si2?sj0:sj1;
l12=sj0;
si0=-152U;
si1=-151U;
si2=l6;
si0=si2?si0:si1;
si1=l7;
si0+=si1;
l11=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
L1:;
si0=l4;
si1=l11;
i32_store16(&i->m0,(U64)si0+120U,si1);
si0=l4;
sj1=l12;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+122U,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=3U;
si2=l6;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=1101592U;
si1=1101593U;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
l6=si2;
si0=si2?si0:si1;
si1=1101592U;
si2=1096476U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l11=si0;
si0=1U;
l6=si0;
si0=1U;
si1=l5;
si2=31U;
si1>>=(si2&31);
si2=l2;
si0=si2?si0:si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L10;
default:
goto L8;
}
L10:;
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=l4;
si3=15U;
si2+=si3;
si3=17U;
f606(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L12;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=l4;
si3=15U;
si2+=si3;
si3=17U;
f602(i,si0,si1,si2,si3);
goto L11;
L12:;
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+80U,sj1);
L11:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+84U);
si3=l4;
si3=i32_load16_u(&i->m0,(U64)si3+88U);
si4=l3;
si5=l4;
si6=32U;
si5+=si6;
si6=4U;
f610(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L6;
L9:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1101594U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
si0=0U;
l5=si0;
si0=1096476U;
l11=si0;
goto L6;
L8:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1101597U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
goto L6;
L7:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=48U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1101432U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
goto L6;
L13:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1101600U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
L6:;
si0=l4;
si1=92U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l4;
si2=80U;
si1+=si2;
si0=f650(i,si0,si1);
l5=si0;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f654(rustpythonInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1;
si0=i->g0;
si1=1152U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l5=sj0;
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
if(si0){
goto L13;
}
si0=2U;
l6=si0;
goto L12;
L13:;
sj0=l5;
sj1=4503599627370495ULL;
sj0&=sj1;
l7=sj0;
sj1=4503599627370496ULL;
sj0|=sj1;
sj1=l5;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=9007199254740990ULL;
sj1&=sj2;
sj2=l5;
sj3=52ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=2047U;
si2&=si3;
l8=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj1=1ULL;
sj0&=sj1;
l10=sj0;
si0=3U;
l6=si0;
si0=1U;
si1=2U;
si2=4U;
sj3=l5;
sj4=9218868437227405312ULL;
sj3&=sj4;
l11=sj3;
si3=!(sj3);
l12=si3;
si1=si3?si1:si2;
sj2=l11;
sj3=9218868437227405312ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
si1=3U;
si2=4U;
si3=l12;
si1=si3?si1:si2;
sj2=l7;
si2=!(sj2);
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L14;
default:
goto L12;
}
L16:;
si0=4U;
l6=si0;
goto L12;
L15:;
si0=l8;
si1=-1075U;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l14=sj0;
goto L12;
L14:;
sj0=18014398509481984ULL;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l9;
sj3=4503599627370496ULL;
si2=sj2 == sj3;
l6=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l6;
sj0=si2?sj0:sj1;
l14=sj0;
si0=-1077U;
si1=-1076U;
si2=l6;
si0=si2?si0:si1;
si1=l8;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
L12:;
si0=l4;
si1=l13;
i32_store16(&i->m0,(U64)si0+1144U,si1);
si0=l4;
sj1=l14;
i64_store(&i->m0,(U64)si0+1136U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+1128U,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+1146U,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=3U;
si2=l6;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=1101592U;
si1=1101593U;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l6=si2;
si0=si2?si0:si1;
si1=1101592U;
si2=1096476U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l12=si0;
si0=1U;
l6=si0;
si0=1U;
sj1=l5;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l8;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L10;
default:
goto L9;
}
L11:;
si0=1101708U;
si1=29U;
si2=1101740U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=-12U;
si1=5U;
si2=l13;
si2=(U32)(I32)(I16)(U16)(si2);
l6=si2;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=l6;
si0*=si1;
l6=si0;
si0=l3;
si1=1025U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l6;
si1=16063U;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=1101628U;
si1=61U;
si2=1101692U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1101597U;
i32_store(&i->m0,(U64)si0+1036U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1032U,si1);
goto L1;
L8:;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1032U,si1);
si0=l3;
si1=1U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1101601U;
i32_store(&i->m0,(U64)si0+1036U,si1);
si0=1U;
l6=si0;
goto L1;
L17:;
si0=l4;
si1=1064U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1060U;
si0+=si1;
si1=1101607U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1048U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1056U,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1101432U;
i32_store(&i->m0,(U64)si0+1036U,si1);
si0=3U;
l6=si0;
goto L1;
L7:;
si0=l6;
si1=4U;
si0>>=(si1&31);
si1=21U;
si0+=si1;
l6=si0;
si1=l3;
si2=l6;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1025U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=1032U;
si0+=si1;
si1=l4;
si2=1120U;
si1+=si2;
si2=l4;
si3=8U;
si2+=si3;
si3=l6;
si4=32768U;
f608(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+1032U);
if(si0){
goto L19;
}
si0=l4;
si1=1104U;
si0+=si1;
si1=l4;
si2=1120U;
si1+=si2;
si2=l4;
si3=8U;
si2+=si3;
si3=l6;
si4=32768U;
f605(i,si0,si1,si2,si3,si4);
goto L18;
L19:;
si0=l4;
si1=1104U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=1032U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+1032U);
i64_store(&i->m0,(U64)si0+1104U,sj1);
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+1108U);
l13=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+1104U);
l15=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=49U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load16_s(&i->m0,(U64)si0+1112U);
l8=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+1036U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1032U,si1);
si0=1U;
l6=si0;
si0=l13;
si1=l3;
si0|=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si1=1064U;
si0+=si1;
si1=l13;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1060U;
si0+=si1;
si1=l15;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1052U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1048U;
si0+=si1;
si1=1101431U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1056U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1044U,si1);
si0=3U;
l6=si0;
si0=l3;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si1=1072U;
si0+=si1;
si1=l3;
si2=l13;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+1068U,si1);
si0=4U;
l6=si0;
goto L2;
L6:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1101594U;
i32_store(&i->m0,(U64)si0+1036U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1032U,si1);
si0=1U;
l6=si0;
si0=0U;
l2=si0;
si0=1096476U;
l12=si0;
goto L1;
L5:;
si0=l6;
si1=1024U;
si2=1101612U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1101143U;
si1=33U;
si2=1101576U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1101484U;
si1=33U;
si2=1101560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l8;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l4;
si1=1032U;
si0+=si1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l3=si0;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1101552U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=2U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l8;
si1=-1U;
si0+=si1;
l13=si0;
goto L20;
L21:;
si0=l4;
si1=1032U;
si0+=si1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l3=si0;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1101554U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=2U;
i32_store16(&i->m0,(U64)si0,si1);
si0=1U;
si1=l8;
si0-=si1;
l13=si0;
L20:;
si0=l6;
si1=12U;
si0*=si1;
si1=l4;
si2=1032U;
si1+=si2;
si0+=si1;
l3=si0;
si1=14U;
si0+=si1;
si1=l13;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
L1:;
si0=l4;
si1=1116U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+1108U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+1104U,si1);
si0=l4;
si1=l4;
si2=1032U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1112U,si1);
si0=l0;
si1=l4;
si2=1104U;
si1+=si2;
si0=f650(i,si0,si1);
l6=si0;
si0=l4;
si1=1152U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f655(rustpythonInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l5=sj0;
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
if(si0){
goto L2;
}
si0=2U;
l6=si0;
goto L1;
L2:;
sj0=l5;
sj1=4503599627370495ULL;
sj0&=sj1;
l7=sj0;
sj1=4503599627370496ULL;
sj0|=sj1;
sj1=l5;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=9007199254740990ULL;
sj1&=sj2;
sj2=l5;
sj3=52ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=2047U;
si2&=si3;
l8=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj1=1ULL;
sj0&=sj1;
l10=sj0;
si0=3U;
l6=si0;
si0=1U;
si1=2U;
si2=4U;
sj3=l5;
sj4=9218868437227405312ULL;
sj3&=sj4;
l11=sj3;
si3=!(sj3);
l12=si3;
si1=si3?si1:si2;
sj2=l11;
sj3=9218868437227405312ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
si1=3U;
si2=4U;
si3=l12;
si1=si3?si1:si2;
sj2=l7;
si2=!(sj2);
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
default:
goto L1;
}
L5:;
si0=4U;
l6=si0;
goto L1;
L4:;
si0=l8;
si1=-1075U;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l14=sj0;
goto L1;
L3:;
sj0=18014398509481984ULL;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l9;
sj3=4503599627370496ULL;
si2=sj2 == sj3;
l6=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l6;
sj0=si2?sj0:sj1;
l14=sj0;
si0=-1077U;
si1=-1076U;
si2=l6;
si0=si2?si0:si1;
si1=l8;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
L1:;
si0=l4;
si1=l13;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l4;
sj1=l14;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+138U,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=3U;
si2=l6;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l12=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=1101592U;
si1=1101593U;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l6=si2;
si0=si2?si0:si1;
si1=1101592U;
si2=1096476U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l13=si0;
si0=1U;
l6=si0;
si0=1U;
sj1=l5;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l12;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L14;
default:
goto L12;
}
L14:;
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=l4;
si3=7U;
si2+=si3;
si3=17U;
f606(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L16;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=l4;
si3=7U;
si2+=si3;
si3=17U;
f602(i,si0,si1,si2,si3);
goto L15;
L16:;
si0=l4;
si1=96U;
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
i64_store(&i->m0,(U64)si0+96U,sj1);
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l8=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l15=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=49U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load16_s(&i->m0,(U64)si0+104U);
l12=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=1U;
l6=si0;
si0=l8;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L8;
}
goto L7;
L13:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1101594U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=1U;
l6=si0;
si0=0U;
l2=si0;
si0=1096476U;
l13=si0;
goto L6;
L12:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1101597U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
goto L6;
L11:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1101604U;
si2=1101601U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L6;
L10:;
si0=1101143U;
si1=33U;
si2=1101576U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1101484U;
si1=33U;
si2=1101560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=56U;
si0+=si1;
si1=l8;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l15;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=1101431U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+36U,si1);
si0=3U;
l6=si0;
L7:;
si0=l12;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=1101553U;
si2=1101552U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=2U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l12;
si1=-1U;
si0+=si1;
l8=si0;
goto L17;
L18:;
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=1101556U;
si2=1101554U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=2U;
i32_store16(&i->m0,(U64)si0,si1);
si0=1U;
si1=l12;
si0-=si1;
l8=si0;
L17:;
si0=l6;
si1=12U;
si0*=si1;
si1=l4;
si2=24U;
si1+=si2;
si0+=si1;
l12=si0;
si1=14U;
si0+=si1;
si1=l8;
i32_store16(&i->m0,(U64)si0,si1);
si0=l12;
si1=12U;
si0+=si1;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
L6:;
si0=l4;
si1=108U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l4;
si2=96U;
si1+=si2;
si0=f650(i,si0,si1);
l6=si0;
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f656(rustpythonInstance*i,U32 l0,F32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F32 sf0,sf1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
sf0=l1;
si0=i32_reinterpret_f32(sf0);
l5=si0;
sf0=l1;
sf0=fabsf(sf0);
sf1=INFINITY;
si0=sf0 != sf1;
if(si0){
goto L2;
}
si0=3U;
l6=si0;
goto L1;
L2:;
sf0=l1;
sf1=l1;
si0=sf0 == sf1;
if(si0){
goto L3;
}
si0=2U;
l6=si0;
goto L1;
L3:;
si0=l5;
si1=8388607U;
si0&=si1;
si1=8388608U;
si0|=si1;
si1=l5;
si2=1U;
si1<<=(si2&31);
si2=16777214U;
si1&=si2;
si2=l5;
si3=23U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
sj0=(U64)(si0);
l9=sj0;
sj1=1ULL;
sj0&=sj1;
l10=sj0;
si0=4U;
l6=si0;
si0=4U;
si1=3U;
si2=l5;
si3=2139095040U;
si2&=si3;
si0=si2?si0:si1;
si1=2U;
si2=l5;
si3=2147483647U;
si2&=si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
default:
goto L1;
}
L5:;
si0=l7;
si1=-150U;
si0+=si1;
l11=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l12=sj0;
goto L1;
L4:;
sj0=33554432ULL;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
si2=l8;
si3=8388608U;
si2=si2 == si3;
l6=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l6;
sj0=si2?sj0:sj1;
l12=sj0;
si0=-152U;
si1=-151U;
si2=l6;
si0=si2?si0:si1;
si1=l7;
si0+=si1;
l11=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
L1:;
si0=l4;
si1=l11;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l4;
sj1=l12;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+138U,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=3U;
si2=l6;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=1101592U;
si1=1101593U;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
l6=si2;
si0=si2?si0:si1;
si1=1101592U;
si2=1096476U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l11=si0;
si0=1U;
l6=si0;
si0=1U;
si1=l5;
si2=31U;
si1>>=(si2&31);
si2=l2;
si0=si2?si0:si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L14;
default:
goto L12;
}
L14:;
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=l4;
si3=7U;
si2+=si3;
si3=17U;
f606(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L16;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si2=l4;
si3=7U;
si2+=si3;
si3=17U;
f602(i,si0,si1,si2,si3);
goto L15;
L16:;
si0=l4;
si1=96U;
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
i64_store(&i->m0,(U64)si0+96U,sj1);
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=49U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load16_s(&i->m0,(U64)si0+104U);
l2=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=1U;
l6=si0;
si0=l7;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L8;
}
goto L7;
L13:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1101594U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=1U;
l6=si0;
si0=0U;
l5=si0;
si0=1096476U;
l11=si0;
goto L6;
L12:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1101597U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
goto L6;
L11:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1101604U;
si2=1101601U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L6;
L10:;
si0=1101143U;
si1=33U;
si2=1101576U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1101484U;
si1=33U;
si2=1101560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=56U;
si0+=si1;
si1=l7;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=1101431U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+36U,si1);
si0=3U;
l6=si0;
L7:;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=1101553U;
si2=1101552U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=2U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
goto L17;
L18:;
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=1101556U;
si2=1101554U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=2U;
i32_store16(&i->m0,(U64)si0,si1);
si0=1U;
si1=l2;
si0-=si1;
l7=si0;
L17:;
si0=l6;
si1=12U;
si0*=si1;
si1=l4;
si2=24U;
si1+=si2;
si0+=si1;
l2=si0;
si1=14U;
si0+=si1;
si1=l7;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
L6:;
si0=l4;
si1=108U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l4;
si2=96U;
si1+=si2;
si0=f650(i,si0,si1);
l5=si0;
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f657(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+12U,si1);
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
l1=si0;
L1:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f643(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f658(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1103032U;
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

U32 f659(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f643(i,si0,si1,si2);
L0:;
return si0;
}

U32 f660(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+12U,si1);
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
l1=si0;
L1:;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f643(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f661(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1103032U;
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

U32 f662(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=43U;
si1=1114112U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+28U);
l6=si2;
si3=1U;
si2&=si3;
l1=si2;
si0=si2?si0:si1;
l7=si0;
si0=l1;
si1=l5;
si0+=si1;
l8=si0;
goto L1;
L2:;
si0=l5;
si1=1U;
si0+=si1;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=45U;
l7=si0;
L1:;
si0=l6;
si1=4U;
si0&=si1;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
goto L3;
L4:;
si0=l3;
si1=16U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
si0=f663(i,si0,si1);
l9=si0;
goto L5;
L6:;
si0=l3;
if(si0){
goto L7;
}
si0=0U;
l9=si0;
goto L5;
L7:;
si0=l3;
si1=3U;
si0&=si1;
l10=si0;
si0=l3;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=0U;
l9=si0;
si0=0U;
l1=si0;
goto L8;
L9:;
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l9=si0;
si0=l3;
si1=-4U;
si0&=si1;
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l9;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l9=si0;
si0=l1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l9;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l9=si0;
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
L10:;
{
si0=l9;
si1=l1;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l9=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L10;
}
}
L5:;
si0=l9;
si1=l8;
si0+=si1;
l8=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
l0=si1;
si2=l7;
si3=l2;
si4=l3;
si0=f664(i,si0,si1,si2,si3,si4);
if(si0){
goto L11;
}
si0=l9;
si1=l4;
si2=l5;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=1U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
l0=si1;
si2=l7;
si3=l2;
si4=l3;
si0=f664(i,si0,si1,si2,si3,si4);
if(si0){
goto L11;
}
si0=l9;
si1=l4;
si2=l5;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L13:;
si0=l6;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l0;
si1=48U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
l12=si0;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
l10=si1;
si2=l7;
si3=l2;
si4=l3;
si0=f664(i,si0,si1,si2,si3,si4);
if(si0){
goto L11;
}
si0=l11;
si1=l8;
si0-=si1;
si1=1U;
si0+=si1;
l1=si0;
L16:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=48U;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L16;
}
}
si0=1U;
goto L0;
L15:;
si0=1U;
l1=si0;
si0=l9;
si1=l4;
si2=l5;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L11;
}
si0=l0;
si1=l12;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
l1=si0;
goto L11;
L14:;
si0=l11;
si1=l8;
si0-=si1;
l8=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
l1=si0;
switch(si0){
case 0:
goto L17;
case 1:
goto L19;
case 2:
goto L18;
case 3:
goto L19;
default:
goto L17;
}
L19:;
si0=l8;
l1=si0;
si0=0U;
l8=si0;
goto L17;
L18:;
si0=l8;
si1=1U;
si0>>=(si1&31);
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l8=si0;
L17:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
L21:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si1=l10;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L21;
}
}
si0=1U;
goto L0;
L20:;
si0=1U;
l1=si0;
si0=l0;
si1=l9;
si2=l7;
si3=l2;
si4=l3;
si0=f664(i,si0,si1,si2,si3,si4);
if(si0){
goto L11;
}
si0=l0;
si1=l4;
si2=l5;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L11;
}
si0=0U;
l1=si0;
L22:;
{
si0=l8;
si1=l1;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l8;
si1=l8;
si0=si0 < si1;
goto L0;
L23:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=l10;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L22;
}
}
si0=l1;
si1=-1U;
si0+=si1;
si1=l8;
si0=si0 < si1;
goto L0;
L11:;
si0=l1;
L0:;
return si0;
}

U32 f663(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=l0;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l2=si1;
si2=l0;
si1-=si2;
l3=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si0-=si1;
l4=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
si0=l2;
si1=l0;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=0U;
l7=si0;
si0=l2;
si1=l0;
si2=-1U;
si1^=si2;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
l7=si0;
si0=0U;
l1=si0;
L5:;
{
si0=l7;
si1=l0;
si2=l1;
si1+=si2;
l8=si1;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=1U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=2U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=3U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l7=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l2;
si0-=si1;
l1=si0;
si0=l0;
l8=si0;
L6:;
{
si0=l7;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l7=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
if(si0){
goto L6;
}
}
L3:;
si0=l0;
si1=l3;
si0+=si1;
l1=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l4;
si2=-4U;
si1&=si2;
si0+=si1;
l8=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
l6=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l8;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l6;
si0+=si1;
l6=si0;
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l6;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
L7:;
si0=l4;
si1=2U;
si0>>=(si1&31);
l2=si0;
si0=l6;
si1=l7;
si0+=si1;
l3=si0;
L8:;
{
si0=l1;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=192U;
si2=l2;
si3=192U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si1=3U;
si0&=si1;
l5=si0;
si0=l4;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l4;
si1=252U;
si0&=si1;
l10=si0;
if(si0){
goto L10;
}
si0=0U;
l8=si0;
goto L9;
L10:;
si0=l6;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=0U;
l8=si0;
si0=l6;
l7=si0;
L11:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l1;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l8;
si0+=si1;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1^=si2;
si2=7U;
si1>>=(si2&31);
si2=l8;
si3=6U;
si2>>=(si3&31);
si1|=si2;
si2=16843009U;
si1&=si2;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1^=si2;
si2=7U;
si1>>=(si2&31);
si2=l8;
si3=6U;
si2>>=(si3&31);
si1|=si2;
si2=16843009U;
si1&=si2;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1^=si2;
si2=7U;
si1>>=(si2&31);
si2=l8;
si3=6U;
si2>>=(si3&31);
si1|=si2;
si2=16843009U;
si1&=si2;
si0+=si1;
l8=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L9:;
si0=l2;
si1=l4;
si0-=si1;
l2=si0;
si0=l6;
si1=l9;
si0+=si1;
l1=si0;
si0=l8;
si1=8U;
si0>>=(si1&31);
si1=16711935U;
si0&=si1;
si1=l8;
si2=16711935U;
si1&=si2;
si0+=si1;
si1=65537U;
si0*=si1;
si1=16U;
si0>>=(si1&31);
si1=l3;
si0+=si1;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
}
si0=l6;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l7;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
l7=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l1;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l7;
si0+=si1;
l7=si0;
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l8;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l7;
si0+=si1;
l7=si0;
L12:;
si0=l7;
si1=8U;
si0>>=(si1&31);
si1=459007U;
si0&=si1;
si1=l7;
si2=16711935U;
si1&=si2;
si0+=si1;
si1=65537U;
si0*=si1;
si1=16U;
si0>>=(si1&31);
si1=l3;
si0+=si1;
l3=si0;
goto L1;
L2:;
si0=l1;
if(si0){
goto L13;
}
si0=0U;
goto L0;
L13:;
si0=l1;
si1=3U;
si0&=si1;
l8=si0;
si0=l1;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=0U;
l3=si0;
si0=0U;
l2=si0;
goto L14;
L15:;
si0=0U;
l3=si0;
si0=l0;
l7=si0;
si0=l1;
si1=-4U;
si0&=si1;
l2=si0;
l1=si0;
L16:;
{
si0=l3;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si2=1U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si2=3U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l3=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L16;
}
}
L14:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si0+=si1;
l7=si0;
L17:;
{
si0=l3;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
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
L1:;
si0=l3;
L0:;
return si0;
}

U32 f664(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l2;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
L3:;
si0=l3;
if(si0){
goto L1;
}
si0=0U;
l5=si0;
L2:;
si0=l5;
goto L0;
L1:;
si0=l0;
si1=l3;
si2=l4;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f665(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l3;
si1=7U;
si0+=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=4U;
si0+=si1;
l9=si0;
L4:;
{
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L8;
case 1:
goto L6;
case 2:
goto L7;
default:
goto L8;
}
L8:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=65U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L11:;
{
si0=l0;
si1=1103072U;
si2=64U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L12;
}
si0=1U;
l5=si0;
goto L1;
L12:;
si0=l2;
si1=-64U;
si0+=si1;
l2=si0;
si1=64U;
si0=si0 > si1;
if(si0){
goto L11;
}
goto L9;
}
L10:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L9:;
si0=l0;
si1=1103072U;
si2=l2;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l5=si0;
goto L1;
L7:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l5=si0;
goto L1;
L6:;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l2=si0;
si0=l9;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L18;
case 1:
goto L19;
case 2:
goto L20;
default:
goto L18;
}
L20:;
si0=l6;
si1=8U;
si0+=si1;
l5=si0;
goto L17;
L19:;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l5=si0;
si1=1000U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=4U;
si1=5U;
si2=l5;
si3=10000U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
goto L16;
L21:;
si0=1U;
l10=si0;
si0=l5;
si1=10U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=2U;
si1=3U;
si2=l5;
si3=100U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
goto L16;
L18:;
si0=l6;
si1=4U;
si0+=si1;
l5=si0;
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l10;
if(si0){
goto L16;
}
si0=0U;
l2=si0;
goto L13;
L22:;
si0=l10;
si1=5U;
si2=1103136U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L15;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l10;
si0+=si1;
l4=si0;
si0=l2;
l5=si0;
goto L14;
L15:;
si0=l8;
si1=l10;
si0+=si1;
l4=si0;
si1=l2;
si2=65535U;
si1&=si2;
si2=10U;
si1=DIV_U(si1,si2);
l5=si1;
si2=246U;
si1*=si2;
si2=l2;
si1+=si2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L14:;
si0=1U;
l2=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=-2U;
si0+=si1;
l2=si0;
L23:;
{
si0=l2;
si1=l5;
si2=65535U;
si1&=si2;
l4=si1;
si2=10U;
si1=DIV_U(si1,si2);
l11=si1;
si2=10U;
si1=REM_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0+=si1;
si1=l11;
si2=246U;
si1*=si2;
si2=l5;
si1+=si2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=100U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l2;
si1=l3;
si2=8U;
si1+=si2;
si0=si0 == si1;
l4=si0;
si0=l2;
si1=-2U;
si0+=si1;
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L23;
}
}
si0=l10;
l2=si0;
L13:;
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si2=l2;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l5=si0;
goto L1;
L5:;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=0U;
l5=si0;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f666(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f667(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f621(i,si0,si1,si2);
L0:;
return si0;
}

U32 f668(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
si0=l7;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si1=l2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=l5;
si4=l6;
si0=f644(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l2;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
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
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l7;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f669(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
si0=l11;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l11;
si1=l2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=l5;
si4=l6;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l7;
si2=l8;
si3=l9;
si4=l10;
si0=f644(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l2;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
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
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l11;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f670(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12,U32 l13,U32 l14) {
U32 l15=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l15=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
si0=l15;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l15;
si1=l2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l15;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l15;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=l5;
si4=l6;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l7;
si2=l8;
si3=l9;
si4=l10;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l11;
si2=l12;
si3=l13;
si4=l14;
si0=f644(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l15;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l15;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l2;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
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
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l15;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f671(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12,U32 l13,U32 l14,U32 l15,U32 l16,U32 l17,U32 l18) {
U32 l19=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l19=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
si0=l19;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l19;
si1=l2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l19;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l19;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=l5;
si4=l6;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l7;
si2=l8;
si3=l9;
si4=l10;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l11;
si2=l12;
si3=l13;
si4=l14;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l15;
si2=l16;
si3=l17;
si4=l18;
si0=f644(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l19;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l2;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
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
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l19;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f672(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12,U32 l13,U32 l14,U32 l15,U32 l16,U32 l17,U32 l18,U32 l19,U32 l20,U32 l21,U32 l22) {
U32 l23=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l23=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
si0=l23;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l23;
si1=l2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l23;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l23;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=l5;
si4=l6;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l7;
si2=l8;
si3=l9;
si4=l10;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l11;
si2=l12;
si3=l13;
si4=l14;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l15;
si2=l16;
si3=l17;
si4=l18;
si0=f644(i,si0,si1,si2,si3,si4);
si1=l19;
si2=l20;
si3=l21;
si4=l22;
si0=f644(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l23;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l23;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L2;
}
si0=l2;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
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
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l23;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f673(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l6=si0;
si0=l7;
si1=0U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si1=l6;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
{
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l5;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
l0=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l6=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L3;
}
L4:;
si0=l6;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l3=si0;
goto L2;
L3:;
si0=1U;
l3=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102482U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L2;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L2:;
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L1:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l7;
si2=4U;
si1+=si2;
si2=l7;
si3=8U;
si2+=si3;
f638(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f674(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l1;
si3=l2;
si4=l0;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l2;
si1=!(si1);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=4U;
si0+=si1;
si1=l3;
si2=l4;
si0=f645(i,si0,si1,si2);
si1=l5;
si2=l6;
si0=f645(i,si0,si1,si2);
l0=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L2;
}
si0=l2;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=1U;
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102487U;
si2=1U;
si3=l2;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l2;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l7;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f675(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l0;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

U32 f676(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si1=1103184U;
si2=5U;
si0=f642(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si1=1103189U;
si2=4U;
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

U32 f677(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=34U;
si2=l2;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
l7=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
si0=0U;
l1=si0;
goto L3;
L4:;
si0=l0;
si1=l1;
si0+=si1;
l8=si0;
si0=0U;
l2=si0;
si0=l0;
l9=si0;
si0=0U;
l10=si0;
L7:;
{
si0=l9;
l11=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l11;
si1=1U;
si0+=si1;
l9=si0;
si0=l12;
si1=255U;
si0&=si1;
l13=si0;
goto L8;
L9:;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l12;
si1=31U;
si0&=si1;
l15=si0;
si0=l12;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l13=si0;
si0=l11;
si1=2U;
si0+=si1;
l9=si0;
goto L8;
L10:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l11;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l11;
si1=3U;
si0+=si1;
l9=si0;
si0=l12;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l14;
si1=l15;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l13=si0;
goto L8;
L11:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=63U;
si1&=si2;
si0|=si1;
si1=l15;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l13=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l11;
si1=4U;
si0+=si1;
l9=si0;
L8:;
si0=l3;
si1=4U;
si0+=si1;
si1=l13;
si2=65537U;
f628(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=128U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+14U);
si0-=si1;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l10;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=l1;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L6;
L15:;
si0=l0;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
si1=l1;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l10;
si1=l1;
si0=si0 == si1;
if(si0){
goto L16;
}
goto L6;
L17:;
si0=l0;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
L16:;
si0=l5;
si1=l0;
si2=l2;
si1+=si2;
si2=l10;
si3=l2;
si2-=si3;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L19;
}
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
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
l16=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l16;
si0=(U32)(sj0);
si1=255U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=128U;
l14=si0;
L21:;
{
si0=l14;
si1=255U;
si0&=si1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+26U);
l12=si0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+27U);
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l3;
si1=l12;
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l12;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
goto L22;
L23:;
si0=0U;
l14=si0;
si0=l15;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
L22:;
si0=l5;
si1=l2;
si2=l7;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L21;
}
goto L19;
}
L20:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+26U);
l2=si0;
si1=10U;
si2=l2;
si3=10U;
si2=si2 > si3;
si0=si2?si0:si1;
l12=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+27U);
l14=si0;
si1=l2;
si2=l14;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l17=si0;
L24:;
{
si0=l17;
si1=l2;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
l14=si1;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l12;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
l15=si0;
si0=l14;
l2=si0;
si0=l5;
si1=l15;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l7;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L24;
}
}
L19:;
si0=1U;
l4=si0;
goto L2;
L18:;
si0=1U;
l2=si0;
si0=l13;
si1=128U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=2U;
l2=si0;
si0=l13;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=3U;
si1=4U;
si2=l13;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
L25:;
si0=l2;
si1=l10;
si0+=si1;
l2=si0;
L13:;
si0=l10;
si1=l11;
si0-=si1;
si1=l9;
si0+=si1;
l10=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
L12:;
}
si0=l12;
si1=10U;
si2=1106504U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l10;
si4=1103212U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l2;
if(si0){
goto L26;
}
si0=0U;
l2=si0;
goto L3;
L26:;
si0=l1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0-=si1;
l12=si0;
si0=l1;
l2=si0;
si0=l12;
l1=si0;
goto L3;
L27:;
si0=l0;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0-=si1;
l1=si0;
L3:;
si0=l5;
si1=l0;
si2=l2;
si1+=si2;
si2=l1;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l5;
si1=34U;
si2=l7;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l4=si0;
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=1103196U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f678(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f694(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f679(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=39U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
l5=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=257U;
f628(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
l6=si0;
si0=128U;
l7=si0;
L5:;
{
si0=l7;
si1=255U;
si0&=si1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l0=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l2;
si1=l0;
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l0;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
goto L6;
L7:;
si0=0U;
l7=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l4;
si1=l1;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L5;
}
goto L2;
}
L4:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l1=si0;
si1=10U;
si2=l1;
si3=10U;
si2=si2 > si3;
si0=si2?si0:si1;
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l7=si0;
si1=l1;
si2=l7;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
L8:;
{
si0=l8;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l7=si1;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si0+=si1;
l6=si0;
si0=l7;
l1=si0;
si0=l4;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L8;
}
goto L2;
}
L3:;
si0=l4;
si1=39U;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l3=si0;
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L1:;
si0=l0;
si1=10U;
si2=1106504U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f680(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si0|=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l2;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l0;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l0=si0;
goto L3;
L6:;
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=1U;
l0=si0;
goto L3;
L5:;
si0=l2;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l0=si0;
goto L3;
L4:;
si0=l2;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=l0;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l0;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=4U;
l0=si0;
L3:;
si0=l1;
si1=l2;
si2=12U;
si1+=si2;
si2=l0;
si0=f642(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
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

void f681(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l2;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l4=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l2;
si0-=si1;
l4=si0;
si1=l3;
si2=l4;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l5=si0;
si0=l1;
si1=255U;
si0&=si1;
l6=si0;
si0=1U;
l7=si0;
L5:;
{
si0=l2;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l4;
si1=l3;
si2=-8U;
si1+=si2;
l8=si1;
si0=si0 > si1;
if(si0){
goto L2;
}
goto L3;
L4:;
si0=l3;
si1=-8U;
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
L3:;
si0=l1;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l5=si0;
L6:;
{
si0=l2;
si1=l4;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0^=si1;
l6=si0;
si1=-1U;
si0^=si1;
si1=l6;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L2;
}
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0^=si1;
l6=si0;
si1=-1U;
si0^=si1;
si1=l6;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L6;
}
}
L2:;
si0=0U;
l7=si0;
si0=l4;
si1=l3;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=255U;
si0&=si1;
l5=si0;
L8:;
{
si0=l2;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
l5=si0;
si0=1U;
l7=si0;
goto L1;
L9:;
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f682(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=l3;
l4=si0;
si0=l3;
l5=si0;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
si2=l2;
si1-=si2;
l6=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l3;
si1=l3;
si2=l6;
si1-=si2;
si2=7U;
si1&=si2;
l7=si1;
si0-=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
l5=si0;
L5:;
si0=0U;
si1=l4;
si0-=si1;
l8=si0;
si0=l2;
si1=-1U;
si0+=si1;
l9=si0;
si0=l1;
si1=255U;
si0&=si1;
l10=si0;
si0=l3;
l6=si0;
L6:;
{
si0=l8;
si1=l6;
si0+=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si1=l6;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L2;
}
L4:;
si0=l4;
si1=l3;
si2=1103280U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l7=si0;
L8:;
{
si0=l4;
l6=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l6;
si0+=si1;
l9=si0;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
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
goto L7;
}
si0=l6;
si1=-8U;
si0+=si1;
l4=si0;
si0=l9;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
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
si0=!(si0);
if(si0){
goto L8;
}
}
L7:;
si0=l6;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=-1U;
si0+=si1;
l8=si0;
si0=l1;
si1=255U;
si0&=si1;
l9=si0;
L10:;
{
si0=l6;
if(si0){
goto L11;
}
si0=0U;
l7=si0;
goto L1;
L11:;
si0=l8;
si1=l6;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l9;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L10;
}
L9:;
si0=l6;
si1=l3;
si2=1103264U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
l7=si0;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f683(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
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
si1=1103432U;
si2=2U;
si3=l3;
si4=32U;
si3+=si4;
si4=2U;
f613(i,si0,si1,si2,si3,si4);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f684(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1103492U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1096476U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f685(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
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
si1=1103564U;
si2=3U;
si3=l3;
si4=32U;
si3+=si4;
si4=2U;
f613(i,si0,si1,si2,si3,si4);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f686(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si1=l2;
si2=-7U;
si1+=si2;
l3=si1;
si2=l3;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si0=l1;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
si1=l1;
si0-=si1;
l5=si0;
si0=0U;
l3=si0;
L2:;
{
si0=l1;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l7=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si1=l3;
si0-=si1;
si1=3U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L4;
}
L7:;
{
si0=l1;
si1=l3;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L7;
}
L6:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L3;
L5:;
sj0=1099511627776ULL;
l8=sj0;
sj0=4294967296ULL;
l9=sj0;
si0=l6;
si1=1103752U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L18;
case 2:
goto L17;
default:
goto L9;
}
L19:;
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L16;
}
sj0=0ULL;
l8=sj0;
sj0=0ULL;
l9=sj0;
goto L9;
L18:;
sj0=0ULL;
l8=sj0;
si0=l3;
si1=1U;
si0+=si1;
l10=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L15;
}
sj0=0ULL;
l9=sj0;
goto L9;
L17:;
sj0=0ULL;
l8=sj0;
si0=l3;
si1=1U;
si0+=si1;
l10=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L14;
}
sj0=0ULL;
l9=sj0;
goto L9;
L16:;
sj0=1099511627776ULL;
l8=sj0;
sj0=4294967296ULL;
l9=sj0;
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
goto L8;
L15:;
si0=l1;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=-224U;
si0+=si1;
switch(si0){
case 0:
goto L22;
case 1:
goto L20;
case 2:
goto L20;
case 3:
goto L20;
case 4:
goto L20;
case 5:
goto L20;
case 6:
goto L20;
case 7:
goto L20;
case 8:
goto L20;
case 9:
goto L20;
case 10:
goto L20;
case 11:
goto L20;
case 12:
goto L20;
case 13:
goto L21;
default:
goto L20;
}
L22:;
si0=l10;
si1=-32U;
si0&=si1;
si1=-96U;
si0=si0 == si1;
if(si0){
goto L12;
}
goto L13;
L21:;
si0=l10;
si1=-97U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
goto L12;
L20:;
si0=l7;
si1=31U;
si0+=si1;
si1=255U;
si0&=si1;
si1=12U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l7;
si1=-2U;
si0&=si1;
si1=-18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l10;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
goto L13;
L23:;
si0=l10;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
goto L13;
L14:;
si0=l1;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=-240U;
si0+=si1;
switch(si0){
case 0:
goto L26;
case 1:
goto L27;
case 2:
goto L27;
case 3:
goto L27;
case 4:
goto L25;
default:
goto L27;
}
L27:;
si0=l7;
si1=15U;
si0+=si1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l10;
si1=-64U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L13;
}
goto L24;
L26:;
si0=l10;
si1=112U;
si0+=si1;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 >= si1;
if(si0){
goto L13;
}
goto L24;
L25:;
si0=l10;
si1=-113U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
L24:;
si0=l3;
si1=2U;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L28;
}
sj0=0ULL;
l9=sj0;
goto L9;
L28:;
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
sj0=0ULL;
l9=sj0;
si0=l3;
si1=3U;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
sj0=3298534883328ULL;
l8=sj0;
goto L10;
L13:;
sj0=1099511627776ULL;
l8=sj0;
goto L10;
L12:;
sj0=0ULL;
l9=sj0;
si0=l3;
si1=2U;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
L11:;
sj0=2199023255552ULL;
l8=sj0;
L10:;
sj0=4294967296ULL;
l9=sj0;
L9:;
si0=l0;
sj1=l8;
si2=l3;
sj2=(U64)(si2);
sj1|=sj2;
sj2=l9;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l6;
si1=1U;
si0+=si1;
l3=si0;
goto L3;
L4:;
si0=l3;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L3;
}
L29:;
{
si0=l1;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L29;
}
goto L1;
}
L3:;
si0=l3;
si1=l2;
si0=si0 < si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f687(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l1;
si1=3U;
si0&=si1;
l2=si0;
si0=l1;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
si0=0U;
l4=si0;
goto L2;
L3:;
si0=0U;
l3=si0;
si0=l0;
l5=si0;
si0=l1;
si1=-4U;
si0&=si1;
l4=si0;
l1=si0;
L4:;
{
si0=l3;
si1=l5;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l5;
si2=1U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l5;
si2=2U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l5;
si2=3U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l3=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L4;
}
}
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l4;
si0+=si1;
l5=si0;
L6:;
{
si0=l3;
si1=l5;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l3=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l3;
L0:;
return si0;
}

U32 f688(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
L0:;
return si0;
}

void f689(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1103744U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1096476U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f690(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l0;
si1=257U;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=1U;
l5=si0;
si0=0U;
l6=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=1U;
l7=si0;
si0=0U;
l8=si0;
goto L2;
L3:;
si0=1U;
l9=si0;
si0=0U;
l10=si0;
si0=1U;
l11=si0;
si0=0U;
l6=si0;
si0=1U;
l5=si0;
L4:;
{
si0=l11;
l12=si0;
si0=l6;
si1=l10;
si0+=si1;
l11=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l9=si0;
si1=l3;
si2=l11;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l11=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l9;
si1=l11;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=1U;
l5=si0;
si0=l12;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l6=si0;
si0=l12;
l10=si0;
goto L5;
L8:;
si0=0U;
si1=l6;
si2=1U;
si1+=si2;
l11=si1;
si2=l11;
si3=l5;
si2=si2 == si3;
l9=si2;
si0=si2?si0:si1;
l6=si0;
si0=l11;
si1=0U;
si2=l9;
si0=si2?si0:si1;
si1=l12;
si0+=si1;
l11=si0;
goto L5;
L7:;
si0=l11;
si1=l4;
si2=1104072U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l12;
si1=l6;
si0+=si1;
si1=1U;
si0+=si1;
l11=si0;
si1=l10;
si0-=si1;
l5=si0;
si0=0U;
l6=si0;
L5:;
si0=l11;
si1=l6;
si0+=si1;
l9=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L4;
}
}
si0=1U;
l9=si0;
si0=0U;
l8=si0;
si0=1U;
l11=si0;
si0=0U;
l6=si0;
si0=1U;
l7=si0;
L9:;
{
si0=l11;
l12=si0;
si0=l6;
si1=l8;
si0+=si1;
l11=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l9=si0;
si1=l3;
si2=l11;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l11=si1;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l9;
si1=l11;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=1U;
l7=si0;
si0=l12;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l6=si0;
si0=l12;
l8=si0;
goto L10;
L13:;
si0=0U;
si1=l6;
si2=1U;
si1+=si2;
l11=si1;
si2=l11;
si3=l7;
si2=si2 == si3;
l9=si2;
si0=si2?si0:si1;
l6=si0;
si0=l11;
si1=0U;
si2=l9;
si0=si2?si0:si1;
si1=l12;
si0+=si1;
l11=si0;
goto L10;
L12:;
si0=l11;
si1=l4;
si2=1104072U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l12;
si1=l6;
si0+=si1;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0-=si1;
l7=si0;
si0=0U;
l6=si0;
L10:;
si0=l11;
si1=l6;
si0+=si1;
l9=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L9;
}
}
si0=l10;
l6=si0;
L2:;
si0=l4;
si1=l6;
si2=l8;
si3=l6;
si4=l8;
si3=si3 > si4;
l11=si3;
si1=si3?si1:si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l5;
si1=l7;
si2=l11;
si0=si2?si0:si1;
l11=si0;
si1=l13;
si0+=si1;
l6=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l6;
si1=l4;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l3;
si1=l3;
si2=l11;
si1+=si2;
si2=l13;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L23;
}
si0=l13;
si1=l4;
si2=l13;
si1-=si2;
l9=si1;
si0=si0 > si1;
l8=si0;
si0=l4;
si1=3U;
si0&=si1;
l11=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=0U;
l10=si0;
sj0=0ULL;
l14=sj0;
goto L15;
L24:;
sj0=0ULL;
l14=sj0;
si0=l3;
l6=si0;
si0=l4;
si1=-4U;
si0&=si1;
l10=si0;
l12=si0;
L25:;
{
sj0=1ULL;
si1=l6;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
sj1=1ULL;
si2=l6;
si3=1U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj1<<=(sj2&63);
sj0|=sj1;
sj1=1ULL;
si2=l6;
si3=2U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj1<<=(sj2&63);
sj0|=sj1;
sj1=1ULL;
si2=l6;
si3=3U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj1<<=(sj2&63);
sj0|=sj1;
l14=sj0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L25;
}
goto L15;
}
L23:;
si0=1U;
l8=si0;
si0=0U;
l6=si0;
si0=1U;
l9=si0;
si0=0U;
l5=si0;
L27:;
{
si0=l9;
l12=si0;
si1=l6;
si0+=si1;
l7=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l4;
si1=l6;
si0-=si1;
si1=l12;
si2=-1U;
si1^=si2;
si0+=si1;
l9=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l6;
si1=-1U;
si0^=si1;
si1=l4;
si0+=si1;
si1=l5;
si0-=si1;
l10=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l9=si0;
si1=l3;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l9;
si1=l10;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l12;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l6=si0;
si0=1U;
l8=si0;
si0=l12;
l5=si0;
goto L28;
L30:;
si0=l7;
si1=1U;
si0+=si1;
l9=si0;
si1=l5;
si0-=si1;
l8=si0;
si0=0U;
l6=si0;
goto L28;
L29:;
si0=0U;
si1=l6;
si2=1U;
si1+=si2;
l9=si1;
si2=l9;
si3=l8;
si2=si2 == si3;
l10=si2;
si0=si2?si0:si1;
l6=si0;
si0=l9;
si1=0U;
si2=l10;
si0=si2?si0:si1;
si1=l12;
si0+=si1;
l9=si0;
L28:;
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L26:;
si0=1U;
l8=si0;
si0=0U;
l6=si0;
si0=1U;
l9=si0;
si0=0U;
l7=si0;
L32:;
{
si0=l9;
l12=si0;
si1=l6;
si0+=si1;
l15=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l4;
si1=l6;
si0-=si1;
si1=l12;
si2=-1U;
si1^=si2;
si0+=si1;
l9=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l6;
si1=-1U;
si0^=si1;
si1=l4;
si0+=si1;
si1=l7;
si0-=si1;
l10=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l9=si0;
si1=l3;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l9;
si1=l10;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l12;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l6=si0;
si0=1U;
l8=si0;
si0=l12;
l7=si0;
goto L33;
L35:;
si0=l15;
si1=1U;
si0+=si1;
l9=si0;
si1=l7;
si0-=si1;
l8=si0;
si0=0U;
l6=si0;
goto L33;
L34:;
si0=0U;
si1=l6;
si2=1U;
si1+=si2;
l9=si1;
si2=l9;
si3=l8;
si2=si2 == si3;
l10=si2;
si0=si2?si0:si1;
l6=si0;
si0=l9;
si1=0U;
si2=l10;
si0=si2?si0:si1;
si1=l12;
si0+=si1;
l9=si0;
L33:;
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L32;
}
}
L31:;
si0=l4;
si1=l5;
si2=l7;
si3=l5;
si4=l7;
si3=si3 > si4;
si1=si3?si1:si2;
si0-=si1;
l10=si0;
si0=l11;
if(si0){
goto L37;
}
sj0=0ULL;
l14=sj0;
si0=0U;
l11=si0;
si0=0U;
l8=si0;
goto L36;
L37:;
si0=l11;
si1=3U;
si0&=si1;
l12=si0;
si0=0U;
l8=si0;
si0=l11;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L39;
}
sj0=0ULL;
l14=sj0;
si0=0U;
l5=si0;
goto L38;
L39:;
sj0=0ULL;
l14=sj0;
si0=l3;
l6=si0;
si0=l11;
si1=-4U;
si0&=si1;
l5=si0;
l9=si0;
L40:;
{
sj0=1ULL;
si1=l6;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
sj1=1ULL;
si2=l6;
si3=1U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj1<<=(sj2&63);
sj0|=sj1;
sj1=1ULL;
si2=l6;
si3=2U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj1<<=(sj2&63);
sj0|=sj1;
sj1=1ULL;
si2=l6;
si3=3U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj1<<=(sj2&63);
sj0|=sj1;
l14=sj0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
if(si0){
goto L40;
}
}
L38:;
si0=l12;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si1=l5;
si0+=si1;
l6=si0;
L41:;
{
sj0=1ULL;
si1=l6;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L41;
}
}
L36:;
si0=l4;
l6=si0;
goto L14;
L22:;
si0=l13;
si1=l4;
si2=1104040U;
f597(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l11;
si1=l6;
si2=1104056U;
f683(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l6;
si1=l4;
si2=1104056U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l9;
si1=l4;
si2=1104088U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l10;
si1=l4;
si2=1104104U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l9;
si1=l4;
si2=1104088U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l10;
si1=l4;
si2=1104104U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l13;
si1=l9;
si2=l8;
si0=si2?si0:si1;
l12=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
si1=l10;
si0+=si1;
l6=si0;
L43:;
{
sj0=1ULL;
si1=l6;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L43;
}
}
L42:;
si0=l12;
si1=1U;
si0+=si1;
l11=si0;
si0=-1U;
l8=si0;
si0=l13;
l10=si0;
si0=-1U;
l6=si0;
L14:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f691(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l18=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=34U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
l6=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=12U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
f692(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
if(si0){
goto L7;
}
si0=0U;
l1=si0;
si0=0U;
l10=si0;
goto L6;
L7:;
si0=l7;
si1=l10;
si0+=si1;
l11=si0;
si0=0U;
l1=si0;
si0=0U;
l12=si0;
si0=l7;
l13=si0;
L10:;
{
si0=l13;
l14=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l14;
si1=1U;
si0+=si1;
l13=si0;
si0=l3;
si1=255U;
si0&=si1;
l15=si0;
goto L11;
L12:;
si0=l14;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l16=si0;
si0=l3;
si1=31U;
si0&=si1;
l0=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l0;
si1=6U;
si0<<=(si1&31);
si1=l16;
si0|=si1;
l15=si0;
si0=l14;
si1=2U;
si0+=si1;
l13=si0;
goto L11;
L13:;
si0=l16;
si1=6U;
si0<<=(si1&31);
si1=l14;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l16=si0;
si0=l14;
si1=3U;
si0+=si1;
l13=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l16;
si1=l0;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l15=si0;
goto L11;
L14:;
si0=l16;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=63U;
si1&=si2;
si0|=si1;
si1=l0;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l15=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l14;
si1=4U;
si0+=si1;
l13=si0;
L11:;
si0=l2;
si1=32U;
si0+=si1;
si1=l15;
si2=65793U;
f628(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si1=128U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+43U);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+42U);
si0-=si1;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L17;
}
goto L9;
L18:;
si0=l7;
si1=l1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
L17:;
si0=l12;
si0=!(si0);
if(si0){
goto L19;
}
si0=l12;
si1=l10;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l12;
si1=l10;
si0=si0 == si1;
if(si0){
goto L19;
}
goto L9;
L20:;
si0=l7;
si1=l12;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
L19:;
si0=l4;
si1=l7;
si2=l1;
si1+=si2;
si2=l12;
si3=l1;
si2-=si3;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l2;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l2;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
l17=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
sj0=l17;
si0=(U32)(sj0);
si1=255U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=128U;
l0=si0;
L23:;
{
si0=l0;
si1=255U;
si0&=si1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+74U);
l3=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+75U);
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+74U,si1);
si0=l3;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l2;
si1=64U;
si0+=si1;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
goto L24;
L25:;
si0=0U;
l0=si0;
si0=l16;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
L24:;
si0=l4;
si1=l1;
si2=l6;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
goto L23;
}
L22:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+74U);
l1=si0;
si1=10U;
si2=l1;
si3=10U;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+75U);
l0=si0;
si1=l1;
si2=l0;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
L26:;
{
si0=l18;
si1=l1;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l0=si1;
i32_store8(&i->m0,(U64)si0+74U,si1);
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l2;
si1=64U;
si0+=si1;
si1=l1;
si0+=si1;
l16=si0;
si0=l0;
l1=si0;
si0=l4;
si1=l16;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l6;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
goto L26;
}
L21:;
si0=1U;
l1=si0;
si0=l15;
si1=128U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=2U;
l1=si0;
si0=l15;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=3U;
si1=4U;
si2=l15;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L27:;
si0=l1;
si1=l12;
si0+=si1;
l1=si0;
L16:;
si0=l12;
si1=l14;
si0-=si1;
si1=l13;
si0+=si1;
l12=si0;
si0=l13;
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L8;
L15:;
}
si0=l3;
si1=10U;
si2=1106504U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si1=l10;
si2=l1;
si3=l12;
si4=1104180U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l1;
if(si0){
goto L28;
}
si0=0U;
l1=si0;
goto L6;
L28:;
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l10;
si1=l1;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l10;
si1=l1;
si0-=si1;
l3=si0;
si0=l10;
l1=si0;
si0=l3;
l10=si0;
goto L6;
L29:;
si0=l7;
si1=l1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l10;
si1=l1;
si0-=si1;
l10=si0;
L6:;
si0=l4;
si1=l7;
si2=l1;
si1+=si2;
si2=l10;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l8;
si0=!(si0);
if(si0){
goto L30;
}
L31:;
{
si0=l2;
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+31U,si1);
si0=l2;
si1=253U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1104172U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=31U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=32U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l2;
si1=12U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
f692(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si1=34U;
si2=l6;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l3=si0;
goto L2;
L3:;
si0=1U;
l3=si0;
L2:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L1:;
si0=l7;
si1=l10;
si2=l1;
si3=l10;
si4=1104152U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f692(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l4=si0;
L3:;
{
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l7=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l6;
si1=1103752U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L2;
}
L16:;
si0=l3;
si1=l5;
si0+=si1;
si1=1104196U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
goto L4;
L15:;
si0=l3;
si1=l5;
si0+=si1;
si1=1104196U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=-224U;
si0+=si1;
switch(si0){
case 0:
goto L13;
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
goto L11;
case 7:
goto L11;
case 8:
goto L11;
case 9:
goto L11;
case 10:
goto L11;
case 11:
goto L11;
case 12:
goto L11;
case 13:
goto L12;
default:
goto L11;
}
L14:;
si0=l3;
si1=l5;
si0+=si1;
si1=1104196U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=-240U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L8;
default:
goto L10;
}
L13:;
si0=l8;
si1=-32U;
si0&=si1;
si1=-96U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L6;
L12:;
si0=l8;
si1=-97U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
goto L6;
L11:;
si0=l7;
si1=31U;
si0+=si1;
si1=255U;
si0&=si1;
si1=12U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l7;
si1=-2U;
si0&=si1;
si1=-18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l8;
si1=-64U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
goto L6;
L17:;
si0=l8;
si1=-64U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
goto L6;
L10:;
si0=l7;
si1=15U;
si0+=si1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l8;
si1=-64U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
goto L7;
L9:;
si0=l8;
si1=112U;
si0+=si1;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 >= si1;
if(si0){
goto L2;
}
goto L7;
L8:;
si0=l8;
si1=-113U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
L7:;
si0=l3;
si1=l4;
si2=2U;
si1+=si2;
l5=si1;
si0+=si1;
si1=1104196U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=l4;
si2=3U;
si1+=si2;
l5=si1;
si0+=si1;
si1=1104196U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
goto L4;
L6:;
si0=l3;
si1=l4;
si2=2U;
si1+=si2;
l5=si1;
si0+=si1;
si1=1104196U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0+=si1;
l4=si0;
L4:;
si0=l4;
l5=si0;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L1:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f693(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l0=si0;
L1:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=55U;
si3=l3;
si4=15U;
si3&=si4;
l4=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l3=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L1;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f694(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=257U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=256U;
l6=si0;
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0+256U);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=255U;
l6=si0;
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0+255U);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=254U;
l6=si0;
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0+254U);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=253U;
l6=si0;
L3:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=5U;
l6=si0;
si0=1104197U;
l7=si0;
goto L1;
L2:;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
l6=si0;
si0=1096476U;
l7=si0;
L1:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
si0=si0 > si1;
l6=si0;
if(si0){
goto L8;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l0;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
L10:;
si0=l3;
l2=si0;
L9:;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
l3=si0;
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=0U;
si1=l2;
si2=-3U;
si1+=si2;
l3=si1;
si2=l3;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l2;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=l6;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
si1=l6;
si0+=si1;
si1=l0;
si2=l3;
si1+=si2;
l8=si1;
si0-=si1;
l6=si0;
si0=l0;
si1=l2;
si0+=si1;
l9=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l6;
si1=-1U;
si0+=si1;
l7=si0;
goto L12;
L13:;
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l9;
si1=-1U;
si0+=si1;
l2=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l6;
si1=-2U;
si0+=si1;
l7=si0;
goto L12;
L14:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l9;
si1=-2U;
si0+=si1;
l2=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l6;
si1=-3U;
si0+=si1;
l7=si0;
goto L12;
L15:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l9;
si1=-3U;
si0+=si1;
l2=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l6;
si1=-4U;
si0+=si1;
l7=si0;
goto L12;
L16:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si1=-5U;
si0+=si1;
l7=si0;
L12:;
si0=l7;
si1=l3;
si0+=si1;
l3=si0;
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L5;
L18:;
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
L17:;
si0=l0;
si1=l1;
si2=l3;
si3=l1;
si4=l4;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l5;
si1=l2;
si2=l3;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=250U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=84U;
si0+=si1;
si1=250U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=1104400U;
si2=3U;
si3=l5;
si4=72U;
si3+=si4;
si4=3U;
f613(i,si0,si1,si2,si3,si4);
si0=l5;
si1=48U;
si0+=si1;
si1=l4;
f614(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si1=l6;
si2=1104452U;
f683(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=100U;
si0+=si1;
si1=250U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=250U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=84U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=1104344U;
si2=4U;
si3=l5;
si4=72U;
si3+=si4;
si4=4U;
f613(i,si0,si1,si2,si3,si4);
si0=l5;
si1=48U;
si0+=si1;
si1=l4;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l1;
si1=l3;
si0-=si1;
l1=si0;
L4:;
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=l3;
si0+=si1;
l1=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l0=si0;
si0=l2;
si1=31U;
si0&=si1;
l6=si0;
si0=l2;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l0;
si0|=si1;
l1=si0;
goto L21;
L23:;
si0=l5;
si1=l2;
si2=255U;
si1&=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=1U;
l2=si0;
goto L20;
L22:;
si0=l0;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l0=si0;
si0=l2;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l0;
si1=l6;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L21;
L24:;
si0=l0;
si1=6U;
si0<<=(si1&31);
si1=l1;
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
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L19;
}
L21:;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=1U;
l2=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=2U;
l2=si0;
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=3U;
si1=4U;
si2=l1;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
L20:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=108U;
si0+=si1;
si1=250U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=100U;
si0+=si1;
si1=250U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=254U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=84U;
si0+=si1;
si1=255U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=1104268U;
si2=5U;
si3=l5;
si4=72U;
si3+=si4;
si4=5U;
f613(i,si0,si1,si2,si3,si4);
si0=l5;
si1=48U;
si0+=si1;
si1=l4;
f614(i,si0,si1);
UNREACHABLE;
L19:;
si0=1101100U;
si1=43U;
si2=l4;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f695(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1;
si0=1101593U;
si1=1096476U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=1U;
si2&=si3;
l2=si2;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l4;
si1=999999U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=999U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
sj1=(U64)(si1);
si2=0U;
si3=1U;
si4=l3;
si5=l2;
si6=1104596U;
si7=2U;
si0=f696(i,si0,sj1,si2,si3,si4,si5,si6,si7);
goto L0;
L3:;
si0=l1;
si1=l4;
si2=1000U;
si1=DIV_U(si1,si2);
l0=si1;
sj1=(U64)(si1);
si2=l0;
si3=-1000U;
si2*=si3;
si3=l4;
si2+=si3;
si3=100U;
si4=l3;
si5=l2;
si6=1104598U;
si7=3U;
si0=f696(i,si0,sj1,si2,si3,si4,si5,si6,si7);
goto L0;
L2:;
si0=l1;
sj1=l5;
si2=l4;
si3=100000000U;
si4=l3;
si5=l2;
si6=1104603U;
si7=1U;
si0=f696(i,si0,sj1,si2,si3,si4,si5,si6,si7);
goto L0;
L1:;
si0=l1;
si1=l4;
si2=1000000U;
si1=DIV_U(si1,si2);
l0=si1;
sj1=(U64)(si1);
si2=l0;
si3=-1000000U;
si2*=si3;
si3=l4;
si2+=si3;
si3=100000U;
si4=l3;
si5=l2;
si6=1104601U;
si7=2U;
si0=f696(i,si0,sj1,si2,si3,si4,si5,si6,si7);
L0:;
return si0;
}

U32 f696(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=80U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=48U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
sj1=3472328296227680304ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l2;
if(si0){
goto L4;
}
si0=0U;
l11=si0;
goto L3;
L4:;
si0=l9;
si1=9U;
si2=l10;
si0=si2?si0:si1;
l12=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=l2;
si2=l3;
si1=DIV_U(si1,si2);
l11=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=10U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l2;
si1=l11;
si2=l3;
si1*=si2;
si0-=si1;
l2=si0;
if(si0){
goto L11;
}
si0=1U;
l11=si0;
goto L3;
L12:;
si0=0U;
l11=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=5U;
si0*=si1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
goto L8;
L11:;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=10U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l2;
si2=l4;
si1=DIV_U(si1,si2);
l11=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l3;
si1=100U;
si0=DIV_U(si0,si1);
l13=si0;
si0=l2;
si1=l11;
si2=l4;
si1*=si2;
si0-=si1;
l2=si0;
if(si0){
goto L13;
}
si0=2U;
l11=si0;
goto L3;
L13:;
si0=l12;
si1=2U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l13;
l4=si0;
goto L9;
L14:;
si0=l3;
si1=100U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l2;
si2=l13;
si1=DIV_U(si1,si2);
l11=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l3;
si1=1000U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l2;
si1=l11;
si2=l13;
si1*=si2;
si0-=si1;
l2=si0;
if(si0){
goto L15;
}
si0=3U;
l11=si0;
goto L3;
L15:;
si0=l12;
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=1000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l2;
si2=l4;
si1=DIV_U(si1,si2);
l11=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l3;
si1=10000U;
si0=DIV_U(si0,si1);
l13=si0;
si0=l2;
si1=l11;
si2=l4;
si1*=si2;
si0-=si1;
l2=si0;
if(si0){
goto L16;
}
si0=4U;
l11=si0;
goto L3;
L16:;
si0=l12;
si1=4U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l13;
l4=si0;
goto L9;
L17:;
si0=l3;
si1=10000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l2;
si2=l13;
si1=DIV_U(si1,si2);
l11=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=100000U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l2;
si1=l11;
si2=l13;
si1*=si2;
si0-=si1;
l2=si0;
if(si0){
goto L18;
}
si0=5U;
l11=si0;
goto L3;
L18:;
si0=l12;
si1=5U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=100000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l2;
si2=l4;
si1=DIV_U(si1,si2);
l11=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l3;
si1=1000000U;
si0=DIV_U(si0,si1);
l13=si0;
si0=l2;
si1=l11;
si2=l4;
si1*=si2;
si0-=si1;
l2=si0;
if(si0){
goto L19;
}
si0=6U;
l11=si0;
goto L3;
L19:;
si0=l12;
si1=6U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l13;
l4=si0;
goto L9;
L20:;
si0=l3;
si1=1000000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l2;
si2=65535U;
si1&=si2;
si2=l13;
si1=DIV_U(si1,si2);
l11=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+22U,si1);
si0=l3;
si1=10000000U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l2;
si1=l11;
si2=l13;
si1*=si2;
si0-=si1;
l11=si0;
si1=65535U;
si0&=si1;
l2=si0;
if(si0){
goto L21;
}
si0=7U;
l11=si0;
goto L3;
L21:;
si0=l12;
si1=7U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=10000000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l11;
si2=65535U;
si1&=si2;
si2=l4;
si1=DIV_U(si1,si2);
l2=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l3;
si1=100000000U;
si0=DIV_U(si0,si1);
l13=si0;
si0=l11;
si1=l2;
si2=l4;
si1*=si2;
si0-=si1;
l4=si0;
si1=65535U;
si0&=si1;
l2=si0;
if(si0){
goto L22;
}
si0=8U;
l11=si0;
goto L3;
L22:;
si0=l12;
si1=8U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l13;
l4=si0;
goto L9;
L23:;
si0=l3;
si1=100000000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l4;
si2=65535U;
si1&=si2;
si2=l13;
si1=DIV_U(si1,si2);
l2=si1;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l2;
si2=l13;
si1*=si2;
si0-=si1;
si1=65535U;
si0&=si1;
l2=si0;
if(si0){
goto L24;
}
si0=9U;
l11=si0;
goto L3;
L24:;
si0=l3;
si1=1000000000U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l12;
si1=9U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=1000000000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=9U;
si1=9U;
si2=1104620U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1100880U;
si1=25U;
si2=1104604U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l4;
si2=5U;
si1*=si2;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l12;
l11=si0;
goto L2;
L25:;
si0=l12;
si1=-1U;
si0+=si1;
l3=si0;
L27:;
{
si0=l8;
si1=16U;
si0+=si1;
si1=l3;
si0+=si1;
l2=si0;
si1=48U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=1U;
si2+=si3;
si3=l2;
si4=56U;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=57U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l3;
si1=0U;
si0=si0 != si1;
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
if(si0){
goto L27;
}
}
L26:;
si0=l2;
si1=56U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L7;
L8:;
sj0=l1;
sj1=1ULL;
sj0+=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
L7:;
si0=l8;
sj1=l1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=0U;
l13=si0;
goto L5;
L6:;
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=1U;
l13=si0;
L5:;
si0=l12;
l11=si0;
goto L1;
L3:;
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
L2:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
sj1=l1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=0U;
l13=si0;
L1:;
si0=l8;
si1=l9;
si2=9U;
si3=l9;
si4=9U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l11;
si3=l10;
si1=si3?si1:si2;
l12=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l8;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l8;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l8;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l8;
si1=l8;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=l8;
si1=56U;
si0+=si1;
si1=l0;
si0=f697(i,si0,si1);
l3=si0;
goto L28;
L29:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l7;
si1=16U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l6;
si1=l7;
si0=f663(i,si0,si1);
l2=si0;
goto L30;
L31:;
si0=l7;
if(si0){
goto L32;
}
si0=0U;
l2=si0;
goto L30;
L32:;
si0=l7;
si1=3U;
si0&=si1;
l4=si0;
si0=l7;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=0U;
l2=si0;
si0=0U;
l3=si0;
goto L33;
L34:;
si0=l6;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l2=si0;
si0=l7;
si1=-4U;
si0&=si1;
l3=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l2;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l2;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l6;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l2=si0;
L33:;
si0=l4;
si0=!(si0);
if(si0){
goto L30;
}
si0=l6;
si1=l3;
si0+=si1;
l3=si0;
L35:;
{
si0=l2;
si1=l3;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l2=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L35;
}
}
L30:;
si0=20U;
l3=si0;
si0=l13;
if(si0){
goto L36;
}
sj0=l1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L37;
}
si0=1U;
l3=si0;
goto L36;
L37:;
si0=10U;
si1=0U;
sj2=l1;
sj3=9999999999ULL;
si2=sj2 > sj3;
l3=si2;
si0=si2?si0:si1;
l4=si0;
sj0=l1;
sj1=10000000000ULL;
sj0=DIV_U(sj0,sj1);
sj1=l1;
si2=l3;
sj0=si2?sj0:sj1;
l1=sj0;
sj1=100000ULL;
si0=sj0 < sj1;
if(si0){
goto L38;
}
si0=l4;
si1=5U;
si0|=si1;
l4=si0;
sj0=l1;
sj1=100000ULL;
sj0=DIV_U(sj0,sj1);
l1=sj0;
L38:;
si0=l4;
sj1=l1;
si1=(U32)(sj1);
l3=si1;
si2=393206U;
si1+=si2;
si2=l3;
si3=524188U;
si2+=si3;
si1&=si2;
si2=l3;
si3=916504U;
si2+=si3;
si3=l3;
si4=514288U;
si3+=si4;
si2&=si3;
si1^=si2;
si2=17U;
si1>>=(si2&31);
si0+=si1;
si1=1U;
si0+=si1;
l3=si0;
L36:;
si0=0U;
l4=si0;
si0=l14;
si1=l9;
si2=l11;
si3=l10;
si1=si3?si1:si2;
si2=1U;
si1+=si2;
si2=0U;
si3=l12;
si1=si3?si1:si2;
si2=l5;
si1+=si2;
si2=l2;
si1+=si2;
si2=l3;
si1+=si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l14;
si1=l3;
si0-=si1;
l7=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L42;
case 1:
goto L44;
case 2:
goto L43;
case 3:
goto L42;
default:
goto L42;
}
L44:;
si0=l7;
l4=si0;
si0=0U;
l7=si0;
goto L42;
L43:;
si0=l7;
si1=1U;
si0>>=(si1&31);
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l7=si0;
L42:;
si0=l4;
si1=1U;
si0+=si1;
l3=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
L45:;
{
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l9;
si1=l4;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L45;
}
goto L39;
}
L41:;
si0=l8;
si1=56U;
si0+=si1;
si1=l0;
si0=f697(i,si0,si1);
l3=si0;
goto L28;
L40:;
si0=l8;
si1=56U;
si0+=si1;
si1=l0;
si0=f697(i,si0,si1);
if(si0){
goto L39;
}
si0=0U;
l3=si0;
L47:;
{
si0=l7;
si1=l3;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l7;
l3=si0;
goto L46;
L48:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l9;
si1=l4;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L47;
}
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
L46:;
si0=l3;
si1=l7;
si0=si0 < si1;
l3=si0;
goto L28;
L39:;
si0=1U;
l3=si0;
L28:;
si0=l8;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f697(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=64U;
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
si1=256U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1104636U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=250U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=l3;
si2=l2;
si3=64U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1104672U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=250U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=l3;
si2=l2;
si3=64U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=10U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=9U;
si2=1104688U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=12U;
si1+=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l1;
si3=i32_load(&i->m0,(U64)si3+8U);
si1=si3?si1:si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=248U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l2;
si1=44U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=250U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=92U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1104704U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l2;
si1=48U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l3;
si2=l2;
si3=24U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
L4:;
si0=l2;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1102120U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=250U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
si2=l2;
si3=64U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l4=si0;
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f698(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f699(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2;
si0=l1;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l0;
si1=65280U;
si0&=si1;
si1=8U;
si0>>=(si1&31);
l8=si0;
si0=0U;
l9=si0;
si0=l0;
si1=255U;
si0&=si1;
l10=si0;
L5:;
{
si0=l1;
si1=2U;
si0+=si1;
l11=si0;
si0=l9;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
l2=si1;
si0+=si1;
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=l8;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l12;
l9=si0;
si0=l11;
l1=si0;
si0=l11;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L2;
L6:;
si0=l9;
si1=l12;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l12;
si1=l4;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
si1=l9;
si0+=si1;
l1=si0;
L7:;
{
si0=l2;
if(si0){
goto L8;
}
si0=l12;
l9=si0;
si0=l11;
l1=si0;
si0=l11;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L2;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L7;
}
}
}
si0=0U;
l2=si0;
goto L1;
L4:;
si0=l9;
si1=l12;
si2=1104900U;
f683(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=l4;
si2=1104900U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=65535U;
si0&=si1;
l9=si0;
si0=l5;
si1=l6;
si0+=si1;
l12=si0;
si0=1U;
l2=si0;
L9:;
{
si0=l5;
si1=1U;
si0+=si1;
l10=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l10;
l5=si0;
goto L10;
L11:;
si0=l10;
si1=l12;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l11;
si1=127U;
si0&=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0|=si1;
l1=si0;
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
goto L10;
L12:;
si0=1101100U;
si1=43U;
si2=1104884U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l9;
si1=l1;
si0-=si1;
l9=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0^=si1;
l2=si0;
si0=l5;
si1=l12;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L1:;
si0=l2;
si1=1U;
si0&=si1;
L0:;
return si0;
}

void f700(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=848U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L11;
default:
goto L10;
}
L11:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L10:;
si0=l3;
si1=64U;
si0+=si1;
si1=l1;
si2=l2;
f599(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+81U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L3;
case 5:
goto L14;
default:
goto L3;
}
L14:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
goto L4;
L13:;
si0=l1;
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=l1;
sj1=i64_load8_u(&i->m0,(U64)si1+2U);
sj2=16ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l6=sj0;
goto L4;
L12:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+64U);
l6=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+72U);
l7=sj0;
si0=l5;
if(si0){
goto L15;
}
sj0=l6;
sj1=22ULL;
sj0+=sj1;
sj1=59ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
sj0=l7;
sj1=9007199254740992ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
sj0=l6;
sj1=23ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L18;
}
si0=l3;
si1=16U;
si0+=si1;
sj1=l7;
sj2=0ULL;
sj3=l6;
si3=(U32)(sj3);
si4=3U;
si3<<=(si4&31);
si4=1098184U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
sj1=9007199254740993ULL;
si0=sj0 < sj1;
if(si0){
goto L17;
}
L19:;
si0=l3;
sj1=l6;
sj2=l7;
f598(i,si0,sj1,sj2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
goto L7;
L18:;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
sj0=l7;
sd0=(F64)(sj0);
l10=sd0;
sj0=l6;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L20;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=1098104U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l10;
sd0*=sd1;
l10=sd0;
goto L16;
L20:;
sd0=l10;
si1=1098104U;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1-=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0/=sd1;
l10=sd0;
goto L16;
L17:;
sj0=l8;
sd0=(F64)(sj0);
sd1=1e+22;
sd0*=sd1;
l10=sd0;
L16:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
sd1=l10;
sd1=-(sd1);
sd2=l10;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L1;
L15:;
si0=l3;
si1=48U;
si0+=si1;
sj1=l6;
sj2=l7;
f598(i,si0,sj1,sj2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+48U);
l8=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l3;
si1=32U;
si0+=si1;
sj1=l6;
sj2=l7;
sj3=1ULL;
sj2+=sj3;
f598(i,si0,sj1,sj2);
sj0=l8;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
si0=sj0 != sj1;
si1=l9;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+40U);
si1=si1 != si2;
si0|=si1;
if(si0){
goto L6;
}
goto L5;
L9:;
si0=l0;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l0;
si1=257U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l9;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L5;
}
L6:;
si0=l3;
si1=64U;
si0+=si1;
si1=l1;
si2=l2;
f596(i,si0,si1,si2);
si0=0U;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=-324U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l2;
si1=309U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L22;
}
si0=2047U;
l9=si0;
sj0=0ULL;
l8=sj0;
goto L5;
L22:;
si0=l2;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L24;
}
si0=0U;
l1=si0;
goto L23;
L24:;
si0=0U;
l1=si0;
L25:;
{
si0=60U;
l5=si0;
si0=l2;
si1=18U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l2;
si1=1098084U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
L26:;
si0=l3;
si1=64U;
si0+=si1;
si1=l5;
f595(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=-2047U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L27;
}
si0=l5;
si1=l1;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L23;
}
goto L25;
L27:;
}
si0=0U;
l9=si0;
goto L21;
L23:;
L29:;
{
si0=l2;
if(si0){
goto L31;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=2U;
si1=1U;
si2=l2;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
goto L30;
L31:;
si0=60U;
l5=si0;
si0=0U;
si1=l2;
si0-=si1;
l2=si0;
si1=18U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l2;
si1=1098084U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
L30:;
si0=l3;
si1=64U;
si0+=si1;
si1=l5;
f592(i,si0,si1);
si0=2047U;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si1=2047U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L21;
}
si0=l1;
si1=l5;
si0-=si1;
l1=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L29;
}
}
L28:;
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si1=-1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L32;
}
L33:;
{
si0=l3;
si1=64U;
si0+=si1;
si1=-1022U;
si2=l2;
si1-=si2;
l1=si1;
si2=60U;
si3=l1;
si4=60U;
si3=si3 < si4;
si1=si3?si1:si2;
l1=si1;
f595(i,si0,si1);
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
si1=-1022U;
si0=si0 < si1;
if(si0){
goto L33;
}
}
L32:;
si0=l2;
si1=1023U;
si0+=si1;
l9=si0;
si1=2046U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L34;
}
si0=2047U;
l9=si0;
sj0=0ULL;
l8=sj0;
goto L5;
L34:;
si0=l3;
si1=64U;
si0+=si1;
si1=53U;
f592(i,si0,si1);
sj0=0ULL;
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L36;
}
si0=l11;
si1=18U;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l11;
if(si0){
goto L40;
}
sj0=0ULL;
l6=sj0;
goto L39;
L40:;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L42;
}
sj0=0ULL;
l6=sj0;
si0=0U;
l12=si0;
goto L41;
L42:;
si0=l11;
si1=1U;
si0&=si1;
l13=si0;
si0=l11;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l1=si0;
sj0=0ULL;
l6=sj0;
L43:;
{
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L44;
}
sj0=l6;
si1=l3;
si2=64U;
si1+=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L44:;
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=1U;
si0+=si1;
l14=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L45;
}
sj0=l6;
si1=l3;
si2=64U;
si1+=si2;
si2=l1;
si1+=si2;
si2=9U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L45:;
si0=l14;
si1=1U;
si0+=si1;
l1=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L43;
}
}
si0=l13;
si0=!(si0);
if(si0){
goto L39;
}
L41:;
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l12;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L39;
}
sj0=l6;
si1=l3;
si2=64U;
si1+=si2;
si2=l12;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L39:;
si0=l11;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l11;
si1=1U;
si0+=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+840U);
if(si0){
goto L47;
}
si0=l11;
si0=!(si0);
if(si0){
goto L46;
}
si0=l11;
si1=l3;
si2=64U;
si1+=si2;
si0+=si1;
si1=7U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L47;
}
goto L46;
L48:;
si0=l1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L46;
}
L47:;
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
L46:;
sj0=l6;
sj1=9007199254740991ULL;
si0=sj0 <= sj1;
if(si0){
goto L37;
}
L38:;
si0=l3;
si1=64U;
si0+=si1;
si1=1U;
f595(i,si0,si1);
sj0=0ULL;
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L49;
}
sj0=-1ULL;
l6=sj0;
si0=l12;
si1=18U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l12;
if(si0){
goto L51;
}
sj0=0ULL;
l6=sj0;
goto L50;
L51:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L53;
}
sj0=0ULL;
l6=sj0;
si0=0U;
l14=si0;
goto L52;
L53:;
si0=l12;
si1=1U;
si0&=si1;
l11=si0;
si0=l12;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l1=si0;
sj0=0ULL;
l6=sj0;
L54:;
{
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L55;
}
sj0=l6;
si1=l3;
si2=64U;
si1+=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L55:;
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L56;
}
sj0=l6;
si1=l3;
si2=64U;
si1+=si2;
si2=l1;
si1+=si2;
si2=9U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L56:;
si0=l9;
si1=1U;
si0+=si1;
l1=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L54;
}
}
si0=l11;
si0=!(si0);
if(si0){
goto L50;
}
L52:;
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L50;
}
sj0=l6;
si1=l3;
si2=64U;
si1+=si2;
si2=l14;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L50:;
si0=l12;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l12;
si1=1U;
si0+=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+840U);
if(si0){
goto L57;
}
si0=l12;
si0=!(si0);
if(si0){
goto L49;
}
si0=l12;
si1=l3;
si2=64U;
si1+=si2;
si0+=si1;
si1=7U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L57;
}
goto L49;
L58:;
si0=l1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L49;
}
L57:;
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
L49:;
si0=2047U;
l9=si0;
si0=l2;
si1=1024U;
si0+=si1;
l1=si0;
si1=2046U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L21;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
l9=si0;
L37:;
sj0=l6;
sj1=4503599627370495ULL;
si0=sj0 > sj1;
if(si0){
goto L35;
}
L36:;
si0=l2;
si1=1022U;
si0+=si1;
l9=si0;
L35:;
sj0=l6;
sj1=4503599627370495ULL;
sj0&=sj1;
l8=sj0;
goto L5;
L21:;
sj0=0ULL;
l8=sj0;
L5:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj2=l8;
sj1|=sj2;
sd1=f64_reinterpret_i64(sj1);
l10=sd1;
sd1=-(sd1);
sd2=l10;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
goto L1;
L4:;
sj0=l6;
sj1=-2314885530818453537ULL;
sj0&=sj1;
l6=sj0;
sj1=4607561ULL;
si0=sj0 == sj1;
if(si0){
goto L59;
}
sj0=l6;
sj1=5128526ULL;
si0=sj0 == sj1;
if(si0){
goto L60;
}
sj0=l6;
sj1=6436850368004902473ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
sd0=INFINITY;
l10=sd0;
si0=l2;
si1=8U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L3;
L60:;
sd0=INFINITY;
l10=sd0;
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L2;
L59:;
sd0=INFINITY;
l10=sd0;
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
sd1=l10;
sd1=-(sd1);
sd2=l10;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=848U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f701(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1117072U;
si2=15U;
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
si1=1117087U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1117092U;
si0=f644(i,si0,si1,si2,si3,si4);
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
si1=1102482U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
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

U32 f702(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1117140U;
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
si2=1117156U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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

U32 f703(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1117172U;
si2=13U;
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
si1=1117087U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1117188U;
si0=f644(i,si0,si1,si2,si3,si4);
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
si1=1102482U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
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

U32 f704(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si0=f620(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f705(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1117254U;
si3=17U;
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
si2=1117156U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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

U32 f706(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1117271U;
si2=16U;
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
si1=1117287U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1117124U;
si0=f644(i,si0,si1,si2,si3,si4);
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
si1=1102482U;
si2=2U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
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

U32 f707(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f708(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f708(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=l4;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l5=sj1;
sj0^=sj1;
sj1=l5;
sj0-=sj1;
sj1=l4;
sj2=-1ULL;
si1=(U64)((I64)sj1>(I64)sj2);
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L6:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
sj3=l4;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l3=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l4;
sj1=16ULL;
si0=sj0 < sj1;
l3=si0;
sj0=l4;
sj1=4ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L7:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=55U;
sj3=l4;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l3=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l4;
sj1=16ULL;
si0=sj0 < sj1;
l3=si0;
sj0=l4;
sj1=4ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f709(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f651(i,si0,sd1,si2,si3);
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
si0=f652(i,si0,sd1,si2,si3);
goto L0;
L2:;
si0=l1;
sd1=l4;
si2=l2;
si3=0U;
si0=f655(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f710(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f651(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l1;
sd1=l3;
si2=l2;
si3=0U;
si0=f652(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f711(rustpythonInstance*i,U32 l0,U32 l1) {
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
si4=1U;
si3+=si4;
si0=f654(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l1;
sd1=l3;
si2=l2;
si3=0U;
si0=f655(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f712(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l0=si0;
L1:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
si3=l3;
si4=15U;
si3&=si4;
l4=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l3=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L1;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f713(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l0=si0;
L1:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=55U;
si3=l3;
si4=15U;
si3&=si4;
l4=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l3;
si1=65535U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l3=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L1;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f714(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L1:;
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
goto L1;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f715(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L1:;
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
goto L1;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f716(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=0U;
l0=si0;
L1:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
sj3=l3;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l4=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l3;
sj1=16ULL;
si0=sj0 < sj1;
l4=si0;
sj0=l3;
sj1=4ULL;
sj0>>=(sj1&63);
l3=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
}
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f717(rustpythonInstance*i,U64 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=39U;
l4=si0;
sj0=l0;
sj1=10000ULL;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
sj0=l0;
l5=sj0;
goto L1;
L2:;
si0=39U;
l4=si0;
L3:;
{
si0=l3;
si1=9U;
si0+=si1;
si1=l4;
si0+=si1;
l6=si0;
si1=-4U;
si0+=si1;
sj1=l0;
sj2=10000ULL;
sj1=DIV_U(sj1,sj2);
l5=sj1;
sj2=55536ULL;
sj1*=sj2;
sj2=l0;
sj1+=sj2;
si1=(U32)(sj1);
l7=si1;
si2=65535U;
si1&=si2;
si2=100U;
si1=DIV_U(si1,si2);
l8=si1;
si2=1U;
si1<<=(si2&31);
si2=1102832U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=l8;
si2=-100U;
si1*=si2;
si2=l7;
si1+=si2;
si2=65535U;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si2=1102832U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
sj0=l0;
sj1=99999999ULL;
si0=sj0 > sj1;
l6=si0;
sj0=l5;
l0=sj0;
si0=l6;
if(si0){
goto L3;
}
}
L1:;
sj0=l5;
si0=(U32)(sj0);
l6=si0;
si1=99U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si1=9U;
si0+=si1;
si1=l4;
si2=-2U;
si1+=si2;
l4=si1;
si0+=si1;
sj1=l5;
si1=(U32)(sj1);
l7=si1;
si2=65535U;
si1&=si2;
si2=100U;
si1=DIV_U(si1,si2);
l6=si1;
si2=-100U;
si1*=si2;
si2=l7;
si1+=si2;
si2=65535U;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si2=1102832U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
L4:;
si0=l6;
si1=10U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=9U;
si0+=si1;
si1=l4;
si2=-2U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l6;
si2=1U;
si1<<=(si2&31);
si2=1102832U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l3;
si1=9U;
si0+=si1;
si1=l4;
si2=-1U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l6;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
L5:;
si0=l2;
si1=l1;
si2=1096476U;
si3=0U;
si4=l3;
si5=9U;
si4+=si5;
si5=l4;
si4+=si5;
si5=39U;
si6=l4;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f718(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load16_s(&i->m0,(U64)si0);
l0=si0;
sj0=(U64)(si0);
sj1=65535ULL;
sj0&=sj1;
sj1=0ULL;
si2=l0;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l0;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l0=si2;
sj0=si2?sj0:sj1;
si1=l0;
si2=l1;
si0=f717(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f719(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f720(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
sj0=(U64)(si0);
sj1=0ULL;
si2=l0;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l0;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l0=si2;
sj0=si2?sj0:sj1;
si1=l0;
si2=l1;
si0=f717(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f721(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U64 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
sj1=l2;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l3=sj1;
sj0^=sj1;
sj1=l3;
sj0-=sj1;
sj1=l2;
sj2=-1ULL;
si1=(U64)((I64)sj1>(I64)sj2);
si2=l1;
si0=f717(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f722(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1117332U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f723(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
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
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=257U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1101932U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=258U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=I32_CTZ(si1);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f724(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load16_u(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=(U64)(si0);
sj1=65535ULL;
sj0&=sj1;
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
si1=65535U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=0U;
l3=si0;
L7:;
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
si1=65535U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f725(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1117108U;
si2=5U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1117113U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f726(rustpythonInstance*i,U32 l0,U32 l1) {
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
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1117291U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1117295U;
si3=4U;
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
si2=1102492U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L3;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L3:;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
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
si0=l3;
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
si1=1102487U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1101931U;
si2=1U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
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

U32 f727(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f620(i,si0,si1);
L0:;
return si0;
}

U32 f728(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
si1=255U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=0U;
l3=si0;
L7:;
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
si1=255U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f729(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1148304U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1148284U;
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


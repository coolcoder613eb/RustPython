#include "w2c2_base.h"

#include "rustpython.h"

U32 f14630(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
l0=si0;
si1=1U;
si0&=si1;
if(si0){
goto L24;
}
si0=l0;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L20;
L25:;
si0=l0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L18;
L24:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=17675839U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l4=si3;
si3=i32_load(&i->m0,(U64)si3+12U);
l5=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si1=17675836U;
si2=3U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L20;
}
goto L1;
L23:;
si0=l0;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L16;
L22:;
si0=l0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
goto L19;
L21:;
si0=l0;
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L14;
L26:;
si0=l0;
si1=32U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L12;
L27:;
si0=l0;
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L10;
L28:;
si0=l0;
si1=128U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L8;
L29:;
si0=l0;
si1=256U;
si0&=si1;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L5;
L30:;
si0=l2;
si1=l0;
si2=65024U;
si1&=si2;
l0=si1;
i32_store16(&i->m0,(U64)si0+14U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
goto L3;
L31:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675904U;
si2=7U;
si3=l1;
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
L20:;
si0=l6;
si1=17675847U;
si2=10U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
L19:;
si0=l6;
si1=17675836U;
si2=3U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L18:;
si0=l6;
si1=17675857U;
si2=6U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L17:;
si0=l0;
si1=8U;
si0&=si1;
if(si0){
goto L32;
}
si0=l0;
si1=16U;
si0&=si1;
if(si0){
goto L15;
}
goto L13;
L32:;
si0=l6;
si1=17675836U;
si2=3U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L16:;
si0=l6;
si1=17675863U;
si2=9U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
L15:;
si0=l6;
si1=17675836U;
si2=3U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L14:;
si0=l6;
si1=17675872U;
si2=6U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L13:;
si0=l0;
si1=32U;
si0&=si1;
if(si0){
goto L33;
}
si0=l0;
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
goto L11;
L33:;
si0=l6;
si1=17675836U;
si2=3U;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
l5=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L12:;
si0=l6;
si1=17675878U;
si2=7U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
L11:;
si0=l6;
si1=17675836U;
si2=3U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L10:;
si0=l6;
si1=17675885U;
si2=7U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L9:;
si0=l0;
si1=128U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=17675836U;
si2=3U;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
l5=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L8:;
si0=l6;
si1=17675892U;
si2=5U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=256U;
si0&=si1;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l0;
si1=256U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L6:;
si0=l6;
si1=17675836U;
si2=3U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L5:;
si0=l6;
si1=17675897U;
si2=5U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L4:;
si0=l2;
si1=l0;
si2=65024U;
si1&=si2;
l0=si1;
i32_store16(&i->m0,(U64)si0+14U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=17675836U;
si2=3U;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+12U);
l0=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
L3:;
si0=l6;
si1=17675902U;
si2=2U;
si3=l0;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=14U;
si0+=si1;
si1=l1;
si0=f626(i,si0,si1);
if(si0){
goto L1;
}
L2:;
si0=0U;
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

void f14631(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=2U;
si1=I32_DIV_S(si1,si2);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
L1:;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L3:;
si0=l3;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si2=l3;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l3;
si2=l6;
f14625(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l6;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l5;
l6=si0;
goto L5;
L6:;
si0=l4;
si1=255U;
si2=l1;
si3=l3;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
si0=l6;
si1=l5;
si0+=si1;
si1=-1U;
si0+=si1;
l6=si0;
si0=l7;
si1=l5;
si2=l1;
si1+=si2;
si2=l3;
si1-=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L5:;
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=l2;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=17676032U;
si1=30U;
si2=17676160U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l3;
si2=17676016U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f14632(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=4U;
l2=si0;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
l3=si0;
L3:;
si0=l2;
si1=l1;
si2=l3;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
f14627(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14633(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=4U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l1;
si2=-1U;
si1+=si2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
l5=si0;
L4:;
si0=l2;
si1=l4;
si2=l5;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
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
L3:;
si0=17676176U;
si1=43U;
si2=17676236U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=4U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14634(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
L1:;
L0:;
}

void f14635(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=20U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
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
si1=16U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

U32 f14636(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
l0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l3;
si1=l1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L3:;
si0=l4;
si1=l1;
si0-=si1;
l0=si0;
L2:;
si0=l2;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=l1;
si0+=si1;
l3=si0;
si1=l0;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L6:;
{
si0=l3;
l0=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
si0=l2;
si1=255U;
si0&=si1;
l2=si0;
goto L7;
L8:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l2;
si1=31U;
si0&=si1;
l3=si0;
si0=l2;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l2=si0;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L7;
L9:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l2;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l8;
si1=l3;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
si0=l0;
si1=3U;
si0+=si1;
l3=si0;
goto L7;
L10:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l3;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l2=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
L7:;
si0=l7;
si1=l0;
si0-=si1;
si1=l3;
si0+=si1;
l7=si0;
si0=l2;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L1;
}
L5:;
si0=l0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l3;
si1=255U;
si0&=si1;
l0=si0;
goto L11;
L12:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l3;
si1=31U;
si0&=si1;
l2=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l0=si0;
goto L11;
L13:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l5;
si1=l2;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l0=si0;
goto L11;
L14:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l2;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l0=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
L11:;
si0=l0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si0+=si1;
l4=si0;
L1:;
si0=l4;
L0:;
return si0;
}

U32 f14637(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
l1=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l0;
si1=31U;
si0&=si1;
l3=si0;
si0=l0;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
goto L0;
L4:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l0;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=l3;
si2=12U;
si1<<=(si2&31);
si0|=si1;
goto L0;
L5:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l3;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l0=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=17676176U;
si1=43U;
si2=17676252U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
L0:;
return si0;
}

U32 f14638(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=l1;
si0=f14639(i,si0,si1,si2);
si1=-1U;
si0^=si1;
si1=l1;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L9;
case 3:
goto L8;
default:
goto L12;
}
L12:;
si0=17676428U;
si1=40U;
si2=17676468U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
goto L0;
L10:;
si0=l1;
si1=-2U;
si0+=si1;
l3=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l0;
si2=17676284U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=17676300U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=-3U;
si0+=si1;
l3=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=-2U;
si0+=si1;
l4=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l4;
si1=l0;
si2=17676332U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l0;
si2=17676348U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=-4U;
si0+=si1;
l3=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=-3U;
si0+=si1;
l4=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=-2U;
si0+=si1;
l5=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l5;
si1=l0;
si2=17676396U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l0;
si2=17676412U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l0;
si2=17676268U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l0;
si2=17676316U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l0;
si2=17676364U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l0;
si2=17676380U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=24U;
si0<<=(si1&31);
si1=l2;
si2=l4;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=l2;
si2=l5;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=16U;
si1<<=(si2&31);
si2=8U;
si1>>=(si2&31);
si2=l2;
si3=l1;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1|=si2;
si0|=si1;
goto L0;
L2:;
si0=l2;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0<<=(si1&31);
si1=l2;
si2=l4;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=16U;
si1<<=(si2&31);
si2=8U;
si1>>=(si2&31);
si2=l2;
si3=l1;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1|=si2;
si0|=si1;
goto L0;
L1:;
si0=l2;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0<<=(si1&31);
si1=8U;
si0>>=(si1&31);
si1=l2;
si2=l1;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0|=si1;
L0:;
return si0;
}

U32 f14639(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l2;
si1=-1U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=-3U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=17676804U;
si1=20U;
si2=17676824U;
f14623(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l1;
si2=17676740U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
goto L0;
L3:;
si0=l3;
si1=l1;
si2=17676756U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l1;
si2=17676772U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=l1;
si2=17676788U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f14640(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=1U;
l3=si0;
si0=l0;
si1=l1;
si2=l2;
si0=f14641(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=0U;
si1=l2;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l2;
si3=255U;
si2=si2 > si3;
l4=si2;
si0=si2?si0:si1;
si1=l2;
si0^=si1;
l5=si0;
si1=0U;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si3=5U;
si2<<=(si3&31);
si3=l4;
si1=si3?si1:si2;
si2=l2;
si1|=si2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l5;
si0=f14641(i,si0,si1,si2);
l3=si0;
L1:;
si0=l3;
L0:;
return si0;
}

U32 f14641(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l1;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L2:;
si0=l2;
si1=1114112U;
si0=si0 == si1;
si1=l2;
si2=55296U;
si1^=si2;
si2=-1114112U;
si1+=si2;
si2=-1112064U;
si1=si1 < si2;
si0|=si1;
l4=si0;
si0=1U;
si1=l2;
si0<<=(si1&31);
l5=si0;
si0=l2;
si1=224U;
si0&=si1;
l6=si0;
si0=l2;
si1=8U;
si0>>=(si1&31);
l7=si0;
si0=l0;
si1=l2;
si2=5U;
si1>>=(si2&31);
l8=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l2;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l2;
si0^=si1;
l10=si0;
si0=0U;
l3=si0;
si0=l2;
si1=256U;
si0=si0 < si1;
l11=si0;
si0=l2;
si1=65536U;
si0=si0 < si1;
l12=si0;
si0=l2;
si1=128U;
si0=si0 < si1;
l13=si0;
si0=1U;
l14=si0;
si0=0U;
l15=si0;
L3:;
{
si0=l0;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L18;
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
goto L24;
case 10:
goto L23;
case 11:
goto L22;
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
goto L21;
case 18:
goto L1;
case 19:
goto L1;
case 20:
goto L1;
case 21:
goto L1;
case 22:
goto L25;
case 23:
goto L20;
case 24:
goto L1;
case 25:
goto L1;
case 26:
goto L1;
case 27:
goto L1;
case 28:
goto L1;
case 29:
goto L1;
case 30:
goto L1;
case 31:
goto L1;
case 32:
goto L1;
case 33:
goto L1;
case 34:
goto L1;
case 35:
goto L1;
case 36:
goto L1;
case 37:
goto L1;
case 38:
goto L1;
case 39:
goto L1;
case 40:
goto L19;
default:
goto L1;
}
L25:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l14;
si1=1U;
si0^=si1;
l14=si0;
goto L4;
L24:;
si0=l15;
si1=1U;
si0+=si1;
l16=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l16;
si1=l1;
si2=17676516U;
f594(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l11;
if(si0){
goto L8;
}
goto L7;
L22:;
si0=l15;
si1=1U;
si0+=si1;
l16=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l0;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l15;
si2=2U;
si1+=si2;
l17=si1;
si0-=si1;
l18=si0;
si1=64U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l7;
si1=l18;
si2=2U;
si1<<=(si2&31);
l19=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l0;
si1=l17;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=8U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
si1=5U;
si0>>=(si1&31);
l17=si0;
si1=l18;
si2=-64U;
si1+=si2;
l18=si1;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l19;
si1=256U;
si0+=si1;
si1=l17;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l14;
l3=si0;
goto L1;
L26:;
si0=l17;
si1=l18;
si2=17676580U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l15;
si1=1U;
si0+=si1;
l16=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l16;
si1=l1;
si2=17676612U;
f594(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l15;
si1=1U;
si0+=si1;
l16=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l16;
si1=l1;
si2=17676628U;
f594(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l0;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L12;
}
goto L11;
L19:;
si0=l15;
si1=1U;
si0+=si1;
l16=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l16;
si1=l1;
si2=17676660U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l0;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L14;
}
goto L13;
L18:;
si0=l14;
si1=1U;
si0^=si1;
l3=si0;
goto L1;
L17:;
si0=l16;
si1=l1;
si2=17676548U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=64U;
si1=l18;
si2=17676596U;
f593(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l7;
si1=l19;
si2=17676564U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l15;
si1=2U;
si0+=si1;
l16=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l0;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l14;
l3=si0;
goto L1;
L29:;
si0=l16;
si1=l1;
si2=17676676U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l2;
l16=si0;
si0=l4;
if(si0){
goto L31;
}
si0=1114113U;
l21=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L33;
}
si0=l10;
l16=si0;
goto L32;
L33:;
si0=0U;
l16=si0;
si0=1499U;
l17=si0;
si0=1499U;
l18=si0;
L35:;
{
si0=-1U;
si1=l17;
si2=1U;
si1>>=(si2&31);
si2=l16;
si1+=si2;
l19=si1;
si2=3U;
si1<<=(si2&31);
l22=si1;
si2=1135012U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=l2;
si1=si1 != si2;
si2=l17;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l17=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l19;
l18=si0;
goto L36;
L37:;
si0=l17;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l19;
si1=1U;
si0+=si1;
l16=si0;
L36:;
si0=l18;
si1=l16;
si0-=si1;
l17=si0;
si0=l18;
si1=l16;
si0=si0 > si1;
if(si0){
goto L35;
}
}
si0=l2;
l16=si0;
goto L32;
L34:;
si0=l22;
si1=1135016U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l16;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 > si1;
if(si0){
goto L32;
}
L38:;
si0=l16;
si1=4194303U;
si0&=si1;
l18=si0;
si0=l2;
l16=si0;
si0=l18;
si1=12U;
si0*=si1;
l18=si0;
si1=1147004U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l18;
si1=1147008U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l21=si0;
if(si0){
goto L39;
}
si0=1114112U;
si1=1114113U;
sj2=l23;
si2=(U32)(sj2);
si0=si2?si0:si1;
l21=si0;
L39:;
si0=l17;
l16=si0;
L32:;
si0=l21;
si1=1114114U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l16;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L30;
}
L31:;
si0=l20;
si1=l16;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l15;
si1=2U;
si0+=si1;
l18=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l16;
si1=l0;
si2=l18;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l14;
l3=si0;
goto L1;
L41:;
si0=l18;
si1=l1;
si2=17676692U;
f594(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l15;
si1=3U;
si0+=si1;
l15=si0;
goto L4;
L30:;
si0=17676176U;
si1=43U;
si2=17676724U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l15;
si1=2U;
si0+=si1;
l16=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l0;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l14;
l3=si0;
goto L1;
L42:;
si0=l16;
si1=l1;
si2=17676644U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l15;
si1=3U;
si0+=si1;
l15=si0;
goto L4;
L10:;
si0=l0;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l14;
l3=si0;
goto L1;
L9:;
si0=l15;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=66U;
si0+=si1;
l15=si0;
goto L4;
L8:;
si0=l8;
si1=l1;
si2=l15;
si3=1U;
si2+=si3;
l16=si2;
si1-=si2;
l18=si1;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l9;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l14;
l3=si0;
goto L1;
L43:;
si0=l8;
si1=l18;
si2=17676532U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l15;
si1=9U;
si0+=si1;
l15=si0;
goto L4;
L6:;
si0=l0;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=18U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l16;
si1=l2;
si0=f14642(i,si0,si1);
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
l3=si0;
goto L1;
L5:;
si0=l15;
si1=2U;
si0+=si1;
l15=si0;
L4:;
si0=l15;
si1=l1;
si0=si0 < si1;
if(si0){
goto L3;
}
}
L1:;
si0=l3;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f14642(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
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
default:
goto L27;
}
L27:;
si0=l1;
si1=256U;
si0=si0 < si1;
si1=l1;
si2=-48U;
si1+=si2;
si2=255U;
si1&=si2;
si2=10U;
si1=si1 < si2;
si0&=si1;
goto L0;
L26:;
si0=l1;
si1=255U;
si0=si0 > si1;
si1=l1;
si2=-58U;
si1+=si2;
si2=255U;
si1&=si2;
si2=246U;
si1=si1 < si2;
si0|=si1;
goto L0;
L25:;
si0=0U;
l0=si0;
si0=l1;
si1=255U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=255U;
si0&=si1;
si1=33U;
si0=si0 >= si1;
if(si0){
goto L1;
}
sj0=4294983168ULL;
si1=l1;
si2=255U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
goto L0;
L24:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=255U;
si0&=si1;
si1=33U;
si0=si0 >= si1;
if(si0){
goto L1;
}
sj0=4294951423ULL;
si1=l1;
si2=255U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
goto L0;
L23:;
si0=l1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=1U;
goto L0;
L28:;
si0=0U;
l0=si0;
si0=l1;
si1=255U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=1U;
goto L0;
L29:;
si0=1U;
l0=si0;
si0=l1;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
goto L0;
L22:;
si0=l1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
l0=si0;
si0=l1;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=-123U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
goto L0;
L21:;
si0=l1;
si1=10U;
si0=si0 == si1;
goto L0;
L20:;
si0=l1;
si1=10U;
si0=si0 != si1;
goto L0;
L19:;
si0=l1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=1U;
goto L0;
L30:;
si0=0U;
l0=si0;
si0=l1;
si1=255U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=1U;
goto L0;
L31:;
si0=1U;
l0=si0;
si0=l1;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
goto L0;
L18:;
si0=l1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
l0=si0;
si0=l1;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=-123U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
goto L0;
L17:;
si0=l1;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
si1=l1;
si2=55296U;
si1^=si2;
si2=-2048U;
si1+=si2;
si2=1112064U;
si1=si1 < si2;
si0&=si1;
goto L0;
L16:;
si0=l1;
si1=-58U;
si0+=si1;
si1=-10U;
si0=si0 < si1;
si1=l1;
si2=55296U;
si1^=si2;
si2=-1114112U;
si1+=si2;
si2=-1112064U;
si1=si1 < si2;
si0|=si1;
goto L0;
L15:;
si0=l1;
si0=f14643(i,si0);
goto L0;
L14:;
si0=l1;
si0=f14643(i,si0);
si1=1U;
si0^=si1;
goto L0;
L13:;
si0=l1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=1U;
goto L0;
L32:;
si0=0U;
l0=si0;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112064U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=-33U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=1U;
goto L0;
L33:;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=1U;
l0=si0;
si0=l1;
si0=f733(i,si0);
if(si0){
goto L1;
}
si0=l1;
si0=f737(i,si0);
goto L0;
L12:;
si0=1U;
l0=si0;
si0=l1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=0U;
l0=si0;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l1;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112064U;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=1U;
l0=si0;
si0=l1;
si1=-33U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=1U;
l0=si0;
si0=l1;
si0=f733(i,si0);
if(si0){
goto L34;
}
si0=l1;
si0=f737(i,si0);
l0=si0;
L34:;
si0=l0;
si1=1U;
si0^=si1;
goto L0;
L11:;
si0=l1;
si1=30U;
si0=si0 <= si1;
if(si0){
goto L7;
}
goto L3;
L10:;
si0=l1;
si1=30U;
si0=si0 <= si1;
if(si0){
goto L6;
}
goto L5;
L9:;
si0=l1;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
goto L0;
L8:;
si0=l1;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
si1=1U;
si0^=si1;
goto L0;
L7:;
si0=1U;
si1=l1;
si0<<=(si1&31);
si1=1879063552U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L6:;
si0=1U;
si1=l1;
si0<<=(si1&31);
si1=1879063552U;
si0&=si1;
if(si0){
goto L4;
}
L5:;
si0=l1;
si1=-8232U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=1U;
l0=si0;
si0=l1;
si1=133U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
si0=0U;
l0=si0;
goto L1;
L3:;
si0=l1;
si1=-8232U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=0U;
l0=si0;
si0=l1;
si1=133U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=1U;
goto L0;
L1:;
si0=l0;
L0:;
return si0;
}

U32 f14643(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=255U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=-9U;
si0+=si1;
l1=si0;
si1=255U;
si0&=si1;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
si0=8388639U;
si1=l1;
si2=255U;
si1&=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
L2:;
si0=0U;
l2=si0;
si0=l0;
si1=5759U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
si0=l0;
si1=-9U;
si0+=si1;
l1=si0;
si1=23U;
si0=si0 <= si1;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l0;
si1=-8192U;
si0+=si1;
switch(si0){
case 0:
goto L3;
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
goto L3;
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
goto L1;
case 27:
goto L1;
case 28:
goto L1;
case 29:
goto L1;
case 30:
goto L1;
case 31:
goto L1;
case 32:
goto L1;
case 33:
goto L1;
case 34:
goto L1;
case 35:
goto L1;
case 36:
goto L1;
case 37:
goto L1;
case 38:
goto L1;
case 39:
goto L1;
case 40:
goto L3;
case 41:
goto L3;
case 42:
goto L1;
case 43:
goto L1;
case 44:
goto L1;
case 45:
goto L1;
case 46:
goto L1;
case 47:
goto L3;
case 48:
goto L1;
case 49:
goto L1;
case 50:
goto L1;
case 51:
goto L1;
case 52:
goto L1;
case 53:
goto L1;
case 54:
goto L1;
case 55:
goto L1;
case 56:
goto L1;
case 57:
goto L1;
case 58:
goto L1;
case 59:
goto L1;
case 60:
goto L1;
case 61:
goto L1;
case 62:
goto L1;
case 63:
goto L1;
case 64:
goto L1;
case 65:
goto L1;
case 66:
goto L1;
case 67:
goto L1;
case 68:
goto L1;
case 69:
goto L1;
case 70:
goto L1;
case 71:
goto L1;
case 72:
goto L1;
case 73:
goto L1;
case 74:
goto L1;
case 75:
goto L1;
case 76:
goto L1;
case 77:
goto L1;
case 78:
goto L1;
case 79:
goto L1;
case 80:
goto L1;
case 81:
goto L1;
case 82:
goto L1;
case 83:
goto L1;
case 84:
goto L1;
case 85:
goto L1;
case 86:
goto L1;
case 87:
goto L1;
case 88:
goto L1;
case 89:
goto L1;
case 90:
goto L1;
case 91:
goto L1;
case 92:
goto L1;
case 93:
goto L1;
case 94:
goto L1;
case 95:
goto L3;
default:
goto L7;
}
L7:;
si0=l0;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=5760U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L3;
L5:;
si0=1U;
si1=l1;
si0<<=(si1&31);
si1=16252959U;
si0&=si1;
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=133U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=160U;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
si0=1U;
goto L0;
L1:;
si0=l2;
L0:;
return si0;
}

U32 f14644(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=95U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1U;
goto L0;
L1:;
si0=0U;
l1=si0;
si0=l0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112064U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=-33U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=1U;
goto L0;
L4:;
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l1=si0;
si0=l0;
si0=f733(i,si0);
if(si0){
goto L3;
}
si0=l0;
si0=f737(i,si0);
l1=si0;
L3:;
si0=l1;
goto L0;
L2:;
si0=l0;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
L0:;
return si0;
}

U32 f14645(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112064U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
l1=si0;
si0=1407U;
l2=si0;
si0=1407U;
l3=si0;
L4:;
{
si0=-1U;
si1=l2;
si2=1U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
l2=si1;
si2=3U;
si1<<=(si2&31);
si2=1123756U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l0;
si1=si1 != si2;
si2=l4;
si3=l0;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
l3=si0;
goto L5;
L6:;
si0=l4;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
L5:;
si0=l3;
si1=l1;
si0-=si1;
l2=si0;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L4;
}
}
si0=l0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=17676176U;
si1=43U;
si2=17676708U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l0;
si0|=si1;
l0=si0;
L2:;
si0=l0;
goto L0;
L1:;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=1123760U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=105U;
si2=l1;
si3=55296U;
si2^=si3;
si3=-2048U;
si2+=si3;
si3=1112064U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=105U;
si2=l1;
si3=1114112U;
si2=si2 != si3;
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f14646(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112064U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
l1=si0;
si0=1499U;
l2=si0;
si0=1499U;
l3=si0;
L6:;
{
si0=-1U;
si1=l2;
si2=1U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
l2=si1;
si2=3U;
si1<<=(si2&31);
si2=1135012U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l0;
si1=si1 != si2;
si2=l4;
si3=l0;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
l3=si0;
goto L7;
L8:;
si0=l4;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
L7:;
si0=l3;
si1=l1;
si0-=si1;
l2=si0;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L6;
}
}
si0=1114113U;
l1=si0;
goto L2;
L5:;
si0=1114113U;
l1=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=1135016U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l3;
l0=si0;
goto L2;
L4:;
si0=l0;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l0;
si0^=si1;
l0=si0;
si0=1114113U;
l1=si0;
goto L2;
L3:;
si0=l3;
si1=4194303U;
si0&=si1;
si1=12U;
si0*=si1;
l3=si0;
si1=1147004U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=1147008U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
if(si0){
goto L9;
}
si0=1114112U;
si1=1114113U;
sj2=l5;
si2=(U32)(sj2);
si0=si2?si0:si1;
l1=si0;
L9:;
si0=l2;
l0=si0;
L2:;
si0=l1;
si1=1114114U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L1;
}
L10:;
si0=17676176U;
si1=43U;
si2=17676724U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
L0:;
return si0;
}

void f14647(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-163230743173927068ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=-4493808902380553279ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f14648(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-5271289035626326621ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=4229549200774708044ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f14649(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-7290354011656258087ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1724245560170728293ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f14650(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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
l0=si0;
goto L3;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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

U32 f14651(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17681796U;
si2=8U;
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
si1=17683284U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=17683288U;
si0=f644(i,si0,si1,si2,si3,si4);
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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

U32 f14652(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1049400U;
si2=8U;
si3=l0;
si4=12U;
si3+=si4;
si4=1049408U;
si5=l2;
si6=12U;
si5+=si6;
si6=1049424U;
si0=f674(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f14653(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si0;
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

U32 f14654(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si0=f677(i,si0,si1,si2);
L0:;
return si0;
}

U32 f14655(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=17681771U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
l1=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=1102474U;
si2=7U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

U32 f14656(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1102104U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1526U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=128U;
i32_store8(&i->m0,(U64)si0+58U,si1);
si0=l2;
si1=128U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l3;
si2=l0;
si1+=si2;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f14657(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f695(i,si0,si1);
L0:;
return si0;
}

U32 f14658(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=17676840U;
si2=2U;
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

U32 f14659(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f14895(i,si0,si1);
L0:;
return si0;
}

U32 f14660(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l0;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

U32 f14661(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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

U32 f14662(rustpythonInstance*i,U32 l0,U32 l1) {
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
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
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
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1102132U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=250U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f14663(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f14664(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
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
l0=si0;
goto L3;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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

U32 f14665(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
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
goto L8;
}
si0=l6;
f15024(i,si0);
L8:;
si0=l3;
f15024(i,si0);
L6:;
si0=l0;
sj1=l4;
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

void f14666(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
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
goto L8;
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
goto L9;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
goto L10;
L11:;
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
goto L10;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
L10:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0-=si1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l5;
si2=l2;
si3=l3;
f14755(i,si0,si1,si2,si3);
goto L1;
L9:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L15;
}
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
l8=si0;
si0=l7;
l6=si0;
L16:;
{
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
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
l9=si0;
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L18;
}
si0=17679916U;
l9=si0;
si0=2U;
l6=si0;
goto L2;
L18:;
si0=l6;
si1=l9;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l8;
si1=l9;
si0+=si1;
l8=si0;
si0=l6;
si1=l9;
si0-=si1;
l6=si0;
if(si0){
goto L16;
}
goto L5;
L19:;
si0=l9;
si1=l6;
si2=17679928U;
f593(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l9;
si1=65535U;
si0&=si1;
l9=si0;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
if(si0){
goto L16;
}
goto L5;
}
L15:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0-=si1;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si0+=si1;
si1=l2;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l6;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
goto L12;
L14:;
si0=0U;
l6=si0;
si0=l9;
si1=8U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L5;
L13:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l2;
si3=l7;
f14755(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L6;
}
L12:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
f14753(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
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
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=17679400U;
si1=16U;
si2=l4;
si3=31U;
si2+=si3;
si3=17679416U;
si4=17679508U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=17677216U;
si1=35U;
si2=17678476U;
f604(i,si0,si1,si2);
UNREACHABLE;
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
si0=l2;
si1=l7;
si0+=si1;
l9=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l8=si1;
si0-=si1;
si1=l3;
si2=l7;
si1-=si2;
l6=si1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l0;
si1=l5;
si2=l9;
si3=l6;
f14755(i,si0,si1,si2,si3);
goto L1;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l8;
si0+=si1;
si1=l9;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l8;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
goto L1;
L4:;
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
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si0+=si1;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=0U;
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

U32 f14667(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f14668(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14668(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=-12U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=0U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
{
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
si1=l3;
si2=1U;
si3=l3;
si4=8U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L9;
}
si0=17679916U;
l6=si0;
sj0=2ULL;
l7=sj0;
goto L2;
L9:;
si0=l2;
si1=l6;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=l6;
si0+=si1;
l1=si0;
si0=l2;
si1=l6;
si0-=si1;
l2=si0;
goto L7;
L10:;
si0=l6;
si1=l2;
si2=17679928U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l6;
si1=65535U;
si0&=si1;
l6=si0;
si0=f14744(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L4;
}
L7:;
si0=l2;
if(si0){
goto L6;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l6=si0;
L5:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
sj0=0ULL;
l7=sj0;
si0=l6;
si1=8U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l5=si0;
goto L1;
L3:;
si0=17679400U;
si1=16U;
si2=l3;
si3=15U;
si2+=si3;
si3=17679416U;
si4=17679540U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L11;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
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
goto L13;
}
si0=l6;
f15024(i,si0);
L13:;
si0=l1;
f15024(i,si0);
L11:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
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

U32 f14669(rustpythonInstance*i,U32 l0,U32 l1) {
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
f14670(i,si0,si1,si2);
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

void f14670(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f14714(i,si0,si1,si2,si3);
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

U32 f14671(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f14672(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14672(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
{
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=2U;
si1=l3;
si2=4U;
si1+=si2;
si2=1U;
si3=l3;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L6;
}
si0=2U;
l2=si0;
si0=17679916U;
l5=si0;
goto L2;
L7:;
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
goto L5;
}
si0=0U;
l2=si0;
goto L2;
L6:;
si0=l2;
si1=l5;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l5;
si0+=si1;
l1=si0;
si0=l2;
si1=l5;
si0-=si1;
l2=si0;
L5:;
si0=l2;
if(si0){
goto L4;
}
goto L1;
}
L3:;
si0=l5;
si1=l2;
si2=17679928U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L8;
}
L9:;
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
goto L10;
}
si0=l6;
f15024(i,si0);
L10:;
si0=l4;
f15024(i,si0);
L8:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f14673(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676844U;
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

U32 f14674(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676868U;
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

U32 f14675(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676892U;
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

U32 f14676(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676916U;
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

void f14677(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=17676992U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=17677076U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14678(rustpythonInstance*i,U32 l0) {
L0:;
}

void f14679(rustpythonInstance*i,U32 l0) {
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

void f14680(rustpythonInstance*i,U32 l0) {
L0:;
}

void f14681(rustpythonInstance*i,U32 l0) {
L0:;
}

void f14682(rustpythonInstance*i,U32 l0) {
L0:;
}

void f14683(rustpythonInstance*i,U32 l0) {
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

void f14684(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=255U;
si0&=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
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
goto L2;
}
si0=l2;
f15024(i,si0);
L2:;
si0=l1;
f15024(i,si0);
L1:;
L0:;
}

void f14685(rustpythonInstance*i,U32 l0) {
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

void f14686(rustpythonInstance*i,U32 l0) {
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

void f14687(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
L1:;
L0:;
}

void f14688(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
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
goto L3;
}
si0=l2;
f15024(i,si0);
L3:;
si0=l1;
f15024(i,si0);
L1:;
L0:;
}

void f14689(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
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
goto L3;
}
si0=l2;
f15024(i,si0);
L3:;
si0=l1;
f15024(i,si0);
L1:;
L0:;
}

void f14690(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f14691(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
L0:;
}

void f14692(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=7607939959351458981ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=2788679675523221309ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f14693(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=17677092U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l2;
si2=8U;
si1+=si2;
si2=17677252U;
si3=l2;
si4=12U;
si3+=si4;
si4=17677252U;
si5=l1;
si6=17680440U;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f14694(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=17680620U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l2;
si2=8U;
si1+=si2;
si2=17677268U;
si3=l2;
si4=12U;
si3+=si4;
si4=17677268U;
si5=l1;
si6=17682412U;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f14695(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f14672(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14696(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f14665(i,si0,si1);
L0:;
return si0;
}

U32 f14697(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f14668(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14698(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f14669(i,si0,si1);
si0=0U;
L0:;
return si0;
}

U32 f14699(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
f14700(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
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
f14670(i,si0,si1,si2);
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

void f14700(rustpythonInstance*i,U32 l0,U32 l1) {
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
f14714(i,si0,si1,si2,si3);
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

U32 f14701(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676940U;
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

U32 f14702(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676916U;
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

U32 f14703(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676844U;
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

U32 f14704(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676868U;
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

U32 f14705(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17676892U;
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

U32 f14706(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
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

U32 f14707(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f14672(i,si0,si1,si2);
L0:;
return si0;
}

U32 f14708(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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

U32 f14709(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f14668(i,si0,si1,si2);
L0:;
return si0;
}

U32 f14710(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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

U32 f14711(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si0=f677(i,si0,si1,si2);
L0:;
return si0;
}

void f14712(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
L1:;
si0=l0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
f15024(i,si0);
L2:;
L0:;
}

void f14713(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
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
L1:;
si0=l0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
f15024(i,si0);
L2:;
L0:;
}

void f14714(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f14715(rustpythonInstance*i,U32 l0,U32 l1) {
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
f14714(i,si0,si1,si2,si3);
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

void f14716(rustpythonInstance*i,U32 l0,U32 l1) {
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
f14714(i,si0,si1,si2,si3);
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

U32 f14717(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f14718(rustpythonInstance*i,U32 l0,U32 l1) {
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
if(si0){
goto L3;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=17677460U;
si3=2U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+24U);
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
si2=17677464U;
si0=f645(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
if(si0){
goto L4;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L4:;
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
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L2;
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
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=17677480U;
si3=3U;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+24U);
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
si2=17677484U;
si0=f645(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
if(si0){
goto L5;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L5:;
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
goto L6;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L6;
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
L6:;
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
goto L1;
L2:;
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

void f14719(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663088U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l0;
si1=15U;
si0+=si1;
f14720(i,si0);
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f14720(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663088U);
switch(si0){
case 0:
goto L7;
case 1:
goto L5;
case 2:
goto L1;
case 3:
goto L6;
default:
goto L7;
}
L7:;
si0=0U;
si1=2U;
i32_store8(&i->m0,(U64)si0+18663088U,si1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+30U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663152U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=18663120U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si2=31U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si2=30U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=4U;
si0+=si1;
f14835(i,si0);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+30U);
if(si0){
goto L8;
}
L9:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663120U);
si1=18663232U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663148U);
l2=si0;
si0=1U;
l0=si0;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+18663148U,si1);
si0=l2;
if(si0){
goto L8;
}
si0=0U;
si1=18663232U;
i32_store(&i->m0,(U64)si0+18663120U,si1);
goto L10;
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663124U);
si1=1U;
si0+=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
L10:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663124U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663128U);
if(si0){
goto L2;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+18663128U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663144U);
if(si0){
goto L12;
}
si0=l1;
si1=4U;
si0+=si1;
si1=18663132U;
f14753(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L12;
}
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
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
goto L14;
}
si0=l3;
f15024(i,si0);
L14:;
si0=l2;
f15024(i,si0);
L12:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663136U);
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663132U);
f15024(i,si0);
L15:;
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+18663136U,sj1);
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+18663132U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663128U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663128U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663124U);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+18663124U,si1);
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+18663144U,si1);
si0=l0;
if(si0){
goto L8;
}
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+18663148U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18663120U,si1);
L8:;
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+18663088U,si1);
L6:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=l1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=17683404U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=17677604U;
f614(i,si0,si1);
UNREACHABLE;
L4:;
si0=17677284U;
si1=43U;
si2=17680484U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=17680532U;
si1=38U;
si2=17680604U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=17679400U;
si1=16U;
si2=l1;
si3=31U;
si2+=si3;
si3=17679416U;
si4=17679460U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=17683468U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=17677604U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f14721(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=17677500U;
si2=4U;
f60(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=24U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663208U);
l9=sj0;
L4:;
{
sj0=l9;
sj1=1ULL;
sj0+=sj1;
l10=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
si0=0U;
sj1=l10;
si2=0U;
sj2=i64_load(&i->m0,(U64)si2+18663208U);
l11=sj2;
sj3=l11;
sj4=l9;
si3=sj3 == sj4;
l6=si3;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+18663208U,sj1);
sj0=l11;
l9=sj0;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
}
si0=l8;
sj1=l10;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l8;
f14722(i,si0);
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18663088U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=28U;
si0+=si1;
f14720(i,si0);
L5:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L3:;
f14723(i);
UNREACHABLE;
L2:;
si0=l5;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=7281U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=17677564U;
si2=2U;
si3=l5;
si4=52U;
si3+=si4;
si4=1U;
f14677(i,si0,si1,si2,si3,si4);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=63U;
si1+=si2;
si2=l5;
si3=28U;
si2+=si3;
f14724(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
f14688(i,si0,si1);
f14725(i);
UNREACHABLE;
L1:;
si0=8U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f14722(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663224U);
if(si0){
goto L2;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+18663224U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663228U);
if(si0){
goto L1;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18663228U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18663224U,si1);
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17679400U;
si1=16U;
si2=l1;
si3=44U;
si2+=si3;
si3=17679416U;
si4=17681036U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
si1=17681028U;
si2=1U;
si3=l1;
si4=44U;
si3+=si4;
si4=0U;
f14677(i,si0,si1,si2,si3,si4);
si0=l1;
si1=12U;
si0+=si1;
si1=l1;
si2=44U;
si1+=si2;
si2=l1;
si3=20U;
si2+=si3;
f14724(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
f14688(i,si0,si1);
f14725(i);
UNREACHABLE;
L0:;
}

void f14723(rustpythonInstance*i) {
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
si1=17677924U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=17677000U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=17677932U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14724(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=17680020U;
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

void f14725(rustpythonInstance*i) {
f15065(i);
UNREACHABLE;
L0:;
}

U32 f14726(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17677716U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f14727(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663224U);
if(si0){
goto L4;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+18663224U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663228U);
l1=si0;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663208U);
l2=sj0;
L6:;
{
sj0=l2;
sj1=1ULL;
sj0+=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=0U;
sj1=l3;
si2=0U;
sj2=i64_load(&i->m0,(U64)si2+18663208U);
l4=sj2;
sj3=l4;
sj4=l2;
si3=sj3 == sj4;
l5=si3;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+18663208U,sj1);
sj0=l4;
l2=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+18663228U,si1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
UNREACHABLE;
L4:;
si0=17679400U;
si1=16U;
si2=l0;
si3=15U;
si2+=si3;
si3=17679416U;
si4=17680948U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663224U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663224U,si1);
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L2:;
si0=8U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14723(i);
UNREACHABLE;
L0:;
return si0;
}

void f14728(rustpythonInstance*i,U64 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
sj1=l0;
sj2=0ULL;
sj3=1000000000ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l0=sj1;
si2=l1;
sj2=(U64)(si2);
sj1+=sj2;
l3=sj1;
sj2=l0;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l2;
si1=64U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=24U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=305419896ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
si2=1U;
si3=l2;
si4=104U;
si3+=si4;
si0=wasi_snapshot_preview1__poll_oneoff(i,si0,si1,si2,si3);
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+82U);
if(si0){
goto L1;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+72U);
sj1=305419896ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=l4;
si2=0U;
si1=si1 != si2;
si0|=si1;
si1=65535U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17683040U;
si1=43U;
si2=17683084U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=17682980U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=17677000U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=17683024U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f14729(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=512U;
l2=si0;
si0=512U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=512U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=512U;
si0=f15076(i,si0,si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663788U);
l2=si0;
si1=68U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=512U;
l2=si0;
goto L6;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L6:;
L8:;
{
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=1U;
f14670(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0=f15076(i,si0,si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663788U);
l4=si0;
si1=68U;
si0=si0 == si1;
if(si0){
goto L8;
}
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l3;
f15024(i,si0);
goto L2;
L4:;
si0=1U;
si1=512U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si1=l3;
si1=f15152(i,si1);
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l4;
if(si0){
goto L11;
}
si0=l3;
f15024(i,si0);
si0=1U;
l3=si0;
goto L10;
L11:;
si0=l3;
si1=l4;
si0=f15027(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L9:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}


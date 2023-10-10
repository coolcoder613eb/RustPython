#include "w2c2_base.h"

#include "rustpython.h"

void f130(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=4U;
l5=si0;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=3U;
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l6=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=-48U;
si0+=si1;
l7=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=-48U;
si0+=si1;
l8=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=0U;
l10=si0;
si0=l3;
si1=5U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l2;
si1=l3;
si2=4U;
si3=l3;
si4=4U;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l3;
si1=l5;
si0-=si1;
l10=si0;
L15:;
si0=l6;
si1=255U;
si0&=si1;
si1=10U;
si0*=si1;
si1=l7;
si2=255U;
si1&=si2;
si0+=si1;
si1=10U;
si0*=si1;
si1=l8;
si2=255U;
si1&=si2;
si0+=si1;
si1=10U;
si0*=si1;
si1=l9;
si2=255U;
si1&=si2;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L13;
}
si0=1U;
l5=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L12;
}
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L13:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=20U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L12:;
si0=l10;
if(si0){
goto L16;
}
si0=4U;
l5=si0;
goto L2;
L16:;
si0=3U;
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=4U;
l5=si0;
si0=l10;
si1=2U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0+5U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
si1=5U;
si0+=si1;
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l3=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=3U;
l5=si0;
goto L9;
L18:;
si0=3U;
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=-48U;
si0+=si1;
l7=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L10;
}
goto L9;
L17:;
si0=l2;
si1=4U;
si0+=si1;
si1=l10;
si2=1U;
si3=l10;
si4=1080076U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l2;
si1=l3;
si2=l5;
si3=l3;
si4=1076760U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=0U;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l5=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l6;
si1=l5;
si2=2U;
si3=l5;
si4=2U;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si1=l8;
si0-=si1;
l8=si0;
L19:;
si0=l3;
si1=255U;
si0&=si1;
si1=10U;
si0*=si1;
si1=l7;
si2=255U;
si1&=si2;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L21;
}
si0=1U;
l5=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L9;
L21:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=68U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L20:;
si0=l8;
if(si0){
goto L22;
}
si0=4U;
l5=si0;
goto L3;
L22:;
si0=3U;
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=45U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l8;
si1=2U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0+8U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l8;
si1=-1U;
si0+=si1;
l5=si0;
L23:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l5;
si3=2U;
si4=2U;
f129(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=0U;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l11=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
sj0=l11;
si0=(U32)(sj0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L27;
}
si0=1U;
l5=si0;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L26;
}
goto L24;
L27:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l1;
si1=108U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L26:;
si0=l6;
if(si0){
goto L30;
}
si0=4U;
l5=si0;
goto L29;
L30:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=116U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=3U;
l5=si0;
L29:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L28:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l6;
si3=1076524U;
f107(i,si0,si1,si2,si3);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=2U;
si4=2U;
f129(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+23U);
l2=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+21U);
l6=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l7=si0;
si0=l1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
si0=f121(i,si0,sj1);
si1=255U;
si0&=si1;
l5=si0;
si1=8U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l6;
si3=l2;
si4=16U;
si3<<=(si4&31);
si2|=si3;
si3=8U;
si2<<=(si3&31);
si3=l7;
si2|=si3;
si3=58U;
f187(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+20U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
l5=si2;
si0=si2?si0:si1;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l3;
si3=2U;
si4=2U;
f129(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=0U;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l11=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L33;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
sj0=l11;
si0=(U32)(sj0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L36;
}
si0=1U;
l5=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L35;
}
goto L33;
L36:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L35:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l6;
si3=58U;
f187(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+20U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
l5=si2;
si0=si2?si0:si1;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l3;
si3=2U;
si4=2U;
f129(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=0U;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l11=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L37;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
sj0=l11;
si0=(U32)(sj0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L40;
}
si0=1U;
l5=si0;
si0=l1;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L39;
}
goto L37;
L40:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l1;
si1=140U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L39:;
si0=l2;
if(si0){
goto L41;
}
si0=0U;
l2=si0;
goto L4;
L41:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=l3;
si2=l2;
si3=1076540U;
f107(i,si0,si1,si2,si3);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
f182(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=0U;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l11=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L44;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
sj0=l11;
si0=(U32)(sj0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L43;
}
si0=1U;
l5=si0;
si0=l1;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L4;
}
L44:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L43:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l1;
si1=148U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L42:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l5=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L38:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l5=si0;
L37:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L34:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l5=si0;
L33:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L32:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l5=si0;
L31:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L25:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l5=si0;
L24:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l2;
si1=7U;
si0+=si1;
si1=l8;
si2=1U;
si3=l8;
si4=1080076U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=l6;
si1=l5;
si2=l8;
si3=l5;
si4=1076760U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f190(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si1=-86400U;
si0+=si1;
si1=-172799U;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L46:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l5=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L45:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L48:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l1;
si1=156U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L47:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f131(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
U64 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=208U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=136U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=136U;
si1+=si2;
f162(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+176U);
l5=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+180U);
l6=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+177U);
l7=si0;
si0=6U;
l8=si0;
si0=l5;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L78;
case 1:
goto L72;
case 2:
goto L77;
case 3:
goto L73;
case 4:
goto L76;
case 5:
goto L75;
case 6:
goto L2;
default:
goto L78;
}
L78:;
si0=l2;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L74;
}
si0=4U;
l8=si0;
goto L2;
L77:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f219(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
goto L5;
L76:;
si0=2U;
l9=si0;
si0=27U;
l8=si0;
si0=28U;
l10=si0;
si0=l7;
switch(si0){
case 0:
goto L52;
case 1:
goto L54;
case 2:
goto L71;
case 3:
goto L53;
case 4:
goto L70;
case 5:
goto L69;
case 6:
goto L68;
case 7:
goto L67;
case 8:
goto L66;
case 9:
goto L65;
case 10:
goto L64;
case 11:
goto L63;
case 12:
goto L62;
case 13:
goto L61;
case 14:
goto L60;
case 15:
goto L59;
case 16:
goto L58;
case 17:
goto L57;
case 18:
goto L56;
case 19:
goto L55;
default:
goto L52;
}
L75:;
si0=l7;
si1=-4U;
si0+=si1;
si1=255U;
si0&=si1;
l3=si0;
si1=19U;
si2=l3;
si3=19U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L48;
case 1:
goto L47;
case 2:
goto L46;
case 3:
goto L45;
case 4:
goto L51;
case 5:
goto L51;
case 6:
goto L50;
case 7:
goto L50;
case 8:
goto L50;
case 9:
goto L50;
case 10:
goto L41;
case 11:
goto L40;
case 12:
goto L40;
case 13:
goto L40;
case 14:
goto L39;
case 15:
goto L40;
case 16:
goto L39;
case 17:
goto L38;
case 18:
goto L37;
case 19:
goto L49;
default:
goto L48;
}
L74:;
si0=l6;
si1=l1;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L79;
}
si0=3U;
l8=si0;
goto L2;
L79:;
si0=l3;
si0=!(si0);
if(si0){
goto L80;
}
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L82;
}
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L81;
}
goto L1;
L82:;
si0=l1;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L81:;
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
L80:;
si0=l1;
si1=l3;
si0+=si1;
l1=si0;
goto L5;
L73:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f219(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l3;
if(si0){
goto L6;
}
goto L5;
L72:;
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L84;
}
si0=l6;
si1=l1;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L83;
}
si0=3U;
l8=si0;
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+192U,si1);
goto L10;
L84:;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+192U,si1);
goto L9;
L83:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L86;
}
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L85;
L86:;
si0=l1;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
L85:;
si0=l1;
si1=l2;
si2=l3;
si3=l2;
si4=1076572U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L71:;
si0=29U;
l8=si0;
goto L54;
L70:;
si0=30U;
l8=si0;
goto L54;
L69:;
si0=31U;
l8=si0;
goto L54;
L68:;
si0=32U;
l8=si0;
goto L54;
L67:;
si0=33U;
l8=si0;
goto L54;
L66:;
si0=34U;
l8=si0;
goto L54;
L65:;
si0=35U;
l8=si0;
goto L54;
L64:;
si0=36U;
l8=si0;
goto L54;
L63:;
si0=1U;
l9=si0;
si0=37U;
l8=si0;
goto L54;
L62:;
si0=1U;
l9=si0;
si0=38U;
l8=si0;
goto L54;
L61:;
si0=3U;
l9=si0;
si0=39U;
l8=si0;
goto L54;
L60:;
si0=40U;
l8=si0;
goto L54;
L59:;
si0=41U;
l8=si0;
goto L54;
L58:;
si0=42U;
l8=si0;
goto L54;
L57:;
si0=43U;
l8=si0;
goto L54;
L56:;
si0=9U;
l9=si0;
si0=44U;
l8=si0;
goto L54;
L55:;
si0=-1U;
l9=si0;
si0=45U;
l8=si0;
L54:;
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
si2=l2;
f219(i,si0,si1,si2);
si0=l4;
si1=192U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+68U);
si3=1U;
si4=l9;
f129(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+200U);
l11=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
si0=l8;
l10=si0;
goto L14;
L53:;
si0=46U;
l10=si0;
L52:;
si0=l4;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
f219(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l12=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L87;
case 1:
goto L88;
case 2:
goto L89;
default:
goto L88;
}
L89:;
si0=l12;
si1=2U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l9;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L28;
}
si0=l12;
si1=-1U;
si0+=si1;
l13=si0;
si0=l9;
si1=1U;
si0+=si1;
l14=si0;
si0=l9;
si1=l12;
si0+=si1;
l15=si0;
si0=0U;
l2=si0;
sj0=0ULL;
l11=sj0;
si0=0U;
l7=si0;
L93:;
{
si0=l13;
si1=l7;
si0=si0 == si1;
l8=si0;
if(si0){
goto L92;
}
si0=l14;
si1=l7;
si0+=si1;
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l16=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L91;
}
si0=l4;
si1=24U;
si0+=si1;
sj1=l11;
sj2=l11;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=10ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=0U;
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l17=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l16;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l11=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
sj1=l17;
sj2=l11;
sj1+=sj2;
l11=sj1;
sj2=l17;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
if(si0){
goto L12;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L93;
}
}
si0=0U;
l2=si0;
L92:;
si0=l15;
l1=si0;
goto L90;
L91:;
si0=l7;
if(si0){
goto L94;
}
si0=3U;
l8=si0;
goto L12;
L94:;
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L96;
}
si0=l8;
if(si0){
goto L95;
}
goto L17;
L96:;
si0=l14;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
L95:;
si0=l13;
si1=l7;
si0-=si1;
l2=si0;
L90:;
sj0=l11;
sj1=0ULL;
si0=(U64)((I64)sj0>(I64)sj1);
sj1=0ULL;
sj2=l11;
sj1-=sj2;
l11=sj1;
sj2=0ULL;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=l2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=0U;
l8=si0;
goto L11;
L88:;
si0=l2;
si1=-48U;
si0+=si1;
l2=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L97;
}
si0=3U;
l8=si0;
goto L12;
L97:;
si0=l2;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l11=sj0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=1U;
l2=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=-48U;
si0+=si1;
l1=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L98;
}
sj0=l11;
sj1=10ULL;
sj0*=sj1;
si1=l1;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l11=sj0;
si0=l12;
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=2U;
l2=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=-48U;
si0+=si1;
l1=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L98;
}
sj0=l11;
sj1=10ULL;
sj0*=sj1;
si1=l1;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l11=sj0;
si0=l12;
si1=3U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=3U;
l2=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=-48U;
si0+=si1;
l1=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L98;
}
sj0=l11;
sj1=10ULL;
sj0*=sj1;
si1=l1;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l11=sj0;
goto L19;
L98:;
si0=l9;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
goto L18;
L87:;
si0=l12;
si1=2U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l9;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L26;
}
si0=l12;
si1=-1U;
si0+=si1;
l13=si0;
si0=l9;
si1=1U;
si0+=si1;
l14=si0;
si0=l9;
si1=l12;
si0+=si1;
l15=si0;
si0=0U;
l2=si0;
sj0=0ULL;
l11=sj0;
si0=0U;
l7=si0;
L99:;
{
si0=l13;
si1=l7;
si0=si0 == si1;
l8=si0;
if(si0){
goto L15;
}
si0=l14;
si1=l7;
si0+=si1;
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l16=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L100;
}
si0=l4;
si1=40U;
si0+=si1;
sj1=l11;
sj2=l11;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=10ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=0U;
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+48U);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
l17=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l16;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l11=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
sj1=l17;
sj2=l11;
sj1+=sj2;
l11=sj1;
sj2=l17;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
if(si0){
goto L12;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L16;
}
goto L99;
L100:;
}
si0=l7;
if(si0){
goto L101;
}
si0=3U;
l8=si0;
goto L12;
L101:;
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L103;
}
si0=l8;
if(si0){
goto L102;
}
goto L20;
L103:;
si0=l14;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L20;
}
L102:;
si0=l13;
si1=l7;
si0-=si1;
l2=si0;
goto L14;
L51:;
si0=l2;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=4U;
l8=si0;
goto L2;
L50:;
si0=l2;
if(si0){
goto L104;
}
si0=0U;
l2=si0;
goto L5;
L104:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l3=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L105;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L43;
}
si0=l2;
si1=-1U;
si0+=si1;
l3=si0;
L105:;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si2=l3;
f182(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+200U);
l11=sj0;
sj1=4294967295ULL;
si0=sj0 <= sj1;
if(si0){
goto L42;
}
si0=0U;
l8=si0;
goto L2;
L49:;
si0=l7;
switch(si0){
case 0:
goto L36;
case 1:
goto L35;
case 2:
goto L34;
case 3:
goto L33;
default:
goto L36;
}
L48:;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
f183(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+200U);
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L106;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L106:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L5;
L47:;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
f185(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+200U);
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L107;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L107:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L5;
L46:;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
f184(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+200U);
l3=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L108;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l5=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L109;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L109:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+160U,si1);
goto L5;
L108:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+192U);
l8=si0;
goto L2;
L45:;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
f186(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+200U);
l3=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L110;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l5=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L111;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L111:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+160U,si1);
goto L5;
L110:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+192U);
l8=si0;
goto L2;
L44:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=32U;
si0|=si1;
l3=si0;
si0=3U;
l8=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L114;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L2;
case 5:
goto L2;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L2;
case 9:
goto L2;
case 10:
goto L2;
case 11:
goto L2;
case 12:
goto L2;
case 13:
goto L2;
case 14:
goto L2;
case 15:
goto L113;
default:
goto L2;
}
L114:;
si0=0U;
l5=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=109U;
si0=si0 == si1;
if(si0){
goto L112;
}
goto L2;
L113:;
si0=1U;
l5=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=109U;
si0=si0 != si1;
if(si0){
goto L2;
}
L112:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
si0=!(si0);
if(si0){
goto L116;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
si1=l5;
si0=si0 == si1;
if(si0){
goto L115;
}
si0=1U;
l8=si0;
goto L2;
L116:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+112U,si1);
L115:;
si0=0U;
l3=si0;
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L117;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+2U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L25;
}
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
L117:;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l3;
l2=si0;
goto L5;
L43:;
si0=l1;
si1=l2;
si2=1U;
si3=l2;
si4=1076636U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L42:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
sj0=l11;
si0=(U32)(sj0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L118;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+148U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L118:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L5;
L41:;
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l2;
f221(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l1=si0;
goto L5;
L40:;
si0=l4;
si1=80U;
si0+=si1;
si1=l1;
si2=l2;
f219(i,si0,si1,si2);
si0=l4;
si1=192U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+84U);
si3=0U;
f188(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
si0=!(si0);
if(si0){
goto L119;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L119:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+152U,si1);
goto L5;
L39:;
si0=l4;
si1=88U;
si0+=si1;
si1=l1;
si2=l2;
f219(i,si0,si1,si2);
si0=l4;
si1=192U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+92U);
f189(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
si0=!(si0);
if(si0){
goto L120;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L120:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+152U,si1);
goto L5;
L38:;
si0=l4;
si1=192U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
f128(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
goto L5;
L37:;
si0=l4;
si1=192U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
f130(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
goto L5;
L36:;
si0=l4;
si1=96U;
si0+=si1;
si1=l1;
si2=l2;
f219(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l1=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=122U;
si0=si0 != si1;
if(si0){
goto L121;
}
si0=0U;
l5=si0;
si0=0U;
l2=si0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L122;
}
si0=l3;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
L122:;
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
goto L21;
L121:;
si0=l4;
si1=192U;
si0+=si1;
si1=l3;
si2=l1;
si3=1U;
f188(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+200U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l2=si0;
goto L21;
L35:;
si0=l2;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=4U;
l8=si0;
goto L2;
L34:;
si0=l2;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=4U;
l8=si0;
goto L2;
L33:;
si0=l2;
si1=9U;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=4U;
l8=si0;
goto L2;
L32:;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si4=3U;
f181(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+196U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=104U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+200U);
l11=sj1;
sj2=l11;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=1000000ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=0U;
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+112U);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+104U);
l11=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L2;
}
sj0=l11;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+199U);
si1=24U;
si0<<=(si1&31);
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+197U);
si2=8U;
si1<<=(si2&31);
si0|=si1;
si1=l3;
si0|=si1;
l2=si0;
sj0=l11;
si0=(U32)(sj0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L123;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+148U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L123:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L5;
L31:;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
si3=6U;
si4=6U;
f181(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+196U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+200U);
l11=sj1;
sj2=l11;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=1000ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=0U;
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+128U);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+120U);
l11=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L2;
}
sj0=l11;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+199U);
si1=24U;
si0<<=(si1&31);
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+197U);
si2=8U;
si1<<=(si2&31);
si0|=si1;
si1=l3;
si0|=si1;
l2=si0;
sj0=l11;
si0=(U32)(sj0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L124;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+148U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L124:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L5;
L30:;
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
si3=9U;
si4=9U;
f181(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+196U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+200U);
l11=sj0;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L125;
}
si0=0U;
l8=si0;
goto L2;
L125:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+199U);
si1=24U;
si0<<=(si1&31);
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+197U);
si2=8U;
si1<<=(si2&31);
si0|=si1;
si1=l8;
si0|=si1;
l2=si0;
sj0=l11;
si0=(U32)(sj0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L126;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+148U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L126:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L5;
L29:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+196U);
l8=si0;
goto L2;
L28:;
si0=l9;
si1=l12;
si2=1U;
si3=l12;
si4=1076604U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l9;
si1=l12;
si2=l2;
si3=l12;
si4=1076776U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L26:;
si0=l9;
si1=l12;
si2=1U;
si3=l12;
si4=1076588U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L25:;
si0=l1;
si1=l2;
si2=2U;
si3=l2;
si4=1076620U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L24:;
si0=l3;
si1=l1;
si2=1U;
si3=l1;
si4=1080172U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=l3;
l8=si0;
goto L2;
L22:;
si0=l3;
l8=si0;
goto L2;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
si0=!(si0);
if(si0){
goto L127;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+156U);
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
goto L2;
L127:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+152U,si1);
goto L5;
L20:;
si0=l14;
si1=l13;
si2=l7;
si3=l13;
si4=1076776U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L19:;
si0=l12;
si1=4U;
si2=l12;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=l12;
si1=5U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l9;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L18;
}
si0=l9;
si1=l12;
si2=l2;
si3=l12;
si4=1076760U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L18:;
si0=l9;
si1=l2;
si0+=si1;
l1=si0;
si0=l12;
si1=l2;
si0-=si1;
l2=si0;
goto L14;
L17:;
si0=l14;
si1=l13;
si2=l7;
si3=l13;
si4=1076776U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=0U;
l2=si0;
L15:;
si0=l15;
l1=si0;
L14:;
si0=l0;
sj1=l11;
si2=l10;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U64))(i,si0,sj1);
si1=255U;
si0&=si1;
l8=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+192U,sj1);
goto L11;
L13:;
si0=4U;
l8=si0;
L12:;
si0=l4;
si1=l8;
i32_store8(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+196U,si1);
L11:;
si0=l5;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L2;
case 2:
goto L10;
default:
goto L2;
}
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
L9:;
si0=l6;
f15271(i,si0);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+200U);
l8=si0;
goto L2;
L8:;
si0=l1;
si1=l3;
si0+=si1;
l1=si0;
goto L5;
L7:;
si0=l1;
si1=l3;
si0+=si1;
l1=si0;
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
L6:;
si0=l6;
f15271(i,si0);
L5:;
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=136U;
si1+=si2;
f162(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+176U);
l5=si0;
si1=7U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=5U;
si1=8U;
si2=l2;
si0=si2?si0:si1;
l8=si0;
L2:;
si0=l4;
si1=208U;
si0+=si1;
i->g0=si0;
si0=l8;
goto L0;
L1:;
si0=l1;
si1=l2;
si2=l3;
si3=l2;
si4=1076556U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f132(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1077748U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1077716U;
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

void f133(rustpythonInstance*i,U32 l0) {
L0:;
}

void f134(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

U32 f135(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L53;
case 1:
goto L52;
case 2:
goto L53;
case 3:
goto L56;
case 4:
goto L55;
case 5:
goto L54;
case 6:
goto L3;
default:
goto L53;
}
L56:;
si0=l4;
si1=4U;
si0+=si1;
l1=si0;
goto L51;
L55:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l7=si0;
switch(si0){
case 0:
goto L49;
case 1:
goto L48;
case 2:
goto L47;
case 3:
goto L46;
case 4:
goto L45;
case 5:
goto L44;
case 6:
goto L43;
case 7:
goto L42;
case 8:
goto L41;
case 9:
goto L40;
case 10:
goto L39;
case 11:
goto L38;
case 12:
goto L37;
case 13:
goto L36;
case 14:
goto L35;
case 15:
goto L34;
case 16:
goto L33;
case 17:
goto L32;
case 18:
goto L31;
case 19:
goto L50;
default:
goto L49;
}
L54:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l7=si0;
si1=-4U;
si0+=si1;
si1=255U;
si0&=si1;
l4=si0;
si1=19U;
si2=l4;
si3=19U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L24;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L21;
case 4:
goto L20;
case 5:
goto L19;
case 6:
goto L18;
case 7:
goto L17;
case 8:
goto L16;
case 9:
goto L15;
case 10:
goto L14;
case 11:
goto L13;
case 12:
goto L12;
case 13:
goto L11;
case 14:
goto L10;
case 15:
goto L9;
case 16:
goto L8;
case 17:
goto L27;
case 18:
goto L26;
case 19:
goto L25;
default:
goto L24;
}
L53:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l0;
si1=l1;
si2=l4;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L57:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l2;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l4=si0;
goto L1;
L52:;
si0=l4;
si1=4U;
si0+=si1;
l1=si0;
L51:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L58;
}
si0=l0;
si1=l4;
si2=l1;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L58:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l4=si0;
goto L1;
L50:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
if(si0){
goto L30;
}
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
sj0=(U64)(si0);
si1=l6;
si2=56U;
si1+=si2;
si1=f178(i,si1);
sj1=(U64)(I64)(I32)(si1);
sj2=86400ULL;
sj1*=sj2;
sj0+=sj1;
sj1=-62135683200ULL;
sj0+=sj1;
l8=sj0;
goto L29;
L49:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
sj0=(U64)(I64)(I32)(si0);
l8=sj0;
si0=4U;
l2=si0;
goto L28;
L48:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
l1=si0;
si1=l1;
si2=100U;
si1=I32_DIV_S(si1,si2);
l1=si1;
si2=100U;
si1*=si2;
si0-=si1;
si1=31U;
si0=(U32)((I32)si0>>(si1&31));
si1=l1;
si0+=si1;
sj0=(U64)(I64)(I32)(si0);
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L47:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
si1=100U;
si0=I32_REM_S(si0,si1);
l1=si0;
sj0=(U64)(I64)(I32)(si0);
l8=sj0;
sj1=100ULL;
sj0+=sj1;
sj1=l8;
si2=l1;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
sj0=si2?sj0:sj1;
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L46:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
si1=l1;
si2=8191U;
si1&=si2;
si0=f229(i,si0,si1);
si1=10U;
si0=(U32)((I32)si0>>(si1&31));
sj0=(U64)(I64)(I32)(si0);
l8=sj0;
si0=4U;
l2=si0;
goto L28;
L45:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=2U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
sj0=f136(i,si0);
l8=sj0;
goto L28;
L44:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=2U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
sj0=f137(i,si0);
l8=sj0;
goto L28;
L43:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=2U;
l2=si0;
sj0=0ULL;
l8=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=8191U;
si0&=si1;
l1=si0;
si1=5863U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l1;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=9U;
si0>>=(si1&31);
sj0=(U64)(si0);
l8=sj0;
goto L28;
L42:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=2U;
l2=si0;
sj0=0ULL;
l8=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=8191U;
si0&=si1;
l3=si0;
si1=5863U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l3;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=4U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
sj0=(U64)(si0);
l8=sj0;
goto L28;
L41:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=f138(i,si0);
sj0=(U64)(si0);
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L40:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=f139(i,si0);
sj0=(U64)(si0);
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L39:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
si1=l1;
si2=8191U;
si1&=si2;
si0=f229(i,si0,si1);
si1=4U;
si0>>=(si1&31);
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L38:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
sj0=f140(i,si0);
l8=sj0;
goto L28;
L37:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
sj0=f141(i,si0);
l8=sj0;
goto L28;
L36:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load32_u(&i->m0,(U64)si0);
sj1=4ULL;
sj0>>=(sj1&63);
sj1=511ULL;
sj0&=sj1;
l8=sj0;
si0=3U;
l2=si0;
goto L28;
L35:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=3600U;
si0=DIV_U(si0,si1);
sj0=(U64)(si0);
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L34:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=3600U;
si0=DIV_U(si0,si1);
si1=12U;
si0=REM_U(si0,si1);
l1=si0;
si1=12U;
si2=l1;
si0=si2?si0:si1;
sj0=(U64)(si0);
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L33:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=60U;
si0=DIV_U(si0,si1);
si1=60U;
si0=REM_U(si0,si1);
sj0=(U64)(si0);
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L32:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1000000000U;
si0=DIV_U(si0,si1);
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=60U;
si1=REM_U(si1,si2);
si0+=si1;
sj0=(U64)(si0);
l8=sj0;
si0=2U;
l2=si0;
goto L28;
L31:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1000000000U;
si0=REM_U(si0,si1);
sj0=(U64)(si0);
l8=sj0;
si0=9U;
l2=si0;
goto L28;
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l6;
si1=88U;
si0+=si1;
si1=l6;
si2=48U;
si1+=si2;
si2=0U;
si3=l3;
si2-=si3;
f209(i,si0,si1,si2);
si0=l6;
si1=96U;
si0+=si1;
si0=f178(i,si0);
sj0=(U64)(I64)(I32)(si0);
sj1=86400ULL;
sj0*=sj1;
si1=l6;
sj1=i64_load32_u(&i->m0,(U64)si1+88U);
sj0+=sj1;
sj1=-62135683200ULL;
sj0+=sj1;
l8=sj0;
L29:;
si0=1U;
l2=si0;
L28:;
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
sj1=l8;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
switch(si0){
case 0:
goto L67;
case 1:
goto L66;
case 2:
goto L66;
case 3:
goto L67;
default:
goto L66;
}
L67:;
sj0=l8;
sj1=9999ULL;
si0=sj0 > sj1;
if(si0){
goto L65;
}
L66:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
switch(si0){
case 0:
goto L63;
case 1:
goto L59;
case 2:
goto L64;
default:
goto L63;
}
L65:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
switch(si0){
case 0:
goto L62;
case 1:
goto L61;
case 2:
goto L60;
default:
goto L62;
}
L64:;
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=44U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l6;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=1077448U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=1077456U;
si2=l6;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L63:;
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=48U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=1077448U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=1077456U;
si2=l6;
si3=48U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L62:;
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=48U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=1077448U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=1077456U;
si2=l6;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L61:;
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=44U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l6;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=9U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=1077448U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=1077456U;
si2=l6;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L60:;
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=44U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l6;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=1077448U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=1077456U;
si2=l6;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L3;
}
goto L2;
L59:;
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=44U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l6;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=1077448U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=1077456U;
si2=l6;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L27:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=1077432U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=7U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=1077372U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=7U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si1=1077264U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=12U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=1077144U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=12U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=1076976U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
l4=si0;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si5=l6;
si6=48U;
si5+=si6;
si0=f142(i,si0,si1,si2,si3,si4,si5);
if(si0){
goto L3;
}
goto L1;
L26:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=0U;
l4=si0;
si0=l0;
si1=l6;
si2=48U;
si1+=si2;
si2=l3;
si0=f143(i,si0,si1,si2);
if(si0){
goto L3;
}
goto L1;
L25:;
si0=l7;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
case 3:
goto L4;
default:
goto L7;
}
L24:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
f144(i,si0,si1);
si0=0U;
l4=si0;
goto L1;
L23:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
f145(i,si0,si1);
si0=0U;
l4=si0;
goto L1;
L22:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
f146(i,si0,si1);
si0=0U;
l4=si0;
goto L1;
L21:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
f147(i,si0,si1);
si0=0U;
l4=si0;
goto L1;
L20:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
f148(i,si0,si1);
si0=0U;
l4=si0;
goto L1;
L19:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
f149(i,si0,si1);
si0=0U;
l4=si0;
goto L1;
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f150(i,si0,si1);
if(si0){
goto L3;
}
goto L1;
L17:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f151(i,si0,si1);
if(si0){
goto L3;
}
goto L1;
L16:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f152(i,si0,si1);
if(si0){
goto L3;
}
goto L1;
L15:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f153(i,si0,si1);
if(si0){
goto L3;
}
goto L1;
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f228(i,si0,si1,si2);
si0=0U;
l4=si0;
goto L1;
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=0U;
si3=1U;
si0=f154(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
goto L1;
L12:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=0U;
si3=2U;
si0=f154(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
goto L1;
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=0U;
si3=3U;
si0=f154(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
goto L1;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si3=1U;
si0=f154(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
goto L1;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=0U;
si3=0U;
si0=f154(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
goto L1;
L8:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si3=0U;
si0=f154(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
goto L1;
L7:;
si0=1077480U;
si1=39U;
si2=1077520U;
f202(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f155(i,si0,si1);
if(si0){
goto L3;
}
goto L1;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f156(i,si0,si1);
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f157(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=1U;
l4=si0;
goto L1;
L2:;
si0=0U;
l4=si0;
L1:;
si0=l6;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U64 f136(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj0;
si0=l0;
si1=7U;
si0&=si1;
l1=si0;
si1=7U;
si0+=si1;
si1=l1;
si2=l1;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l0;
si2=4U;
si1>>=(si2&31);
si2=511U;
si1&=si2;
si0+=si1;
l1=si0;
si1=7U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=832U;
l1=si0;
si0=-1U;
l2=si0;
goto L1;
L2:;
si0=16U;
si1=l1;
si2=7U;
si1=DIV_U(si1,si2);
l1=si1;
si2=4U;
si1<<=(si2&31);
si2=1030U;
si3=l0;
si4=15U;
si3&=si4;
si2>>=(si3&31);
si3=1U;
si2&=si3;
si3=52U;
si2|=si3;
si3=l1;
si2=si2 < si3;
l2=si2;
si0=si2?si0:si1;
l1=si0;
L1:;
si0=l1;
si1=l0;
si2=13U;
si1=(U32)((I32)si1>>(si2&31));
si2=l2;
si1+=si2;
si2=10U;
si1<<=(si2&31);
si0|=si1;
si1=10U;
si0=(U32)((I32)si0>>(si1&31));
l0=si0;
si1=l0;
si2=100U;
si1=I32_DIV_S(si1,si2);
l0=si1;
si2=100U;
si1*=si2;
si0-=si1;
si1=31U;
si0=(U32)((I32)si0>>(si1&31));
si1=l0;
si0+=si1;
sj0=(U64)(I64)(I32)(si0);
L0:;
return sj0;
}

U64 f137(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l0;
si1=7U;
si0&=si1;
l1=si0;
si1=7U;
si0+=si1;
si1=l1;
si2=l1;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l0;
si2=4U;
si1>>=(si2&31);
si2=511U;
si1&=si2;
si0+=si1;
l1=si0;
si1=7U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=832U;
l1=si0;
si0=-1U;
l2=si0;
goto L1;
L2:;
si0=16U;
si1=l1;
si2=7U;
si1=DIV_U(si1,si2);
l1=si1;
si2=4U;
si1<<=(si2&31);
si2=1030U;
si3=l0;
si4=15U;
si3&=si4;
si2>>=(si3&31);
si3=1U;
si2&=si3;
si3=52U;
si2|=si3;
si3=l1;
si2=si2 < si3;
l2=si2;
si0=si2?si0:si1;
l1=si0;
L1:;
si0=l1;
si1=l0;
si2=13U;
si1=(U32)((I32)si1>>(si2&31));
si2=l2;
si1+=si2;
si2=10U;
si1<<=(si2&31);
si0|=si1;
si1=10U;
si0=(U32)((I32)si0>>(si1&31));
si1=100U;
si0=I32_REM_S(si0,si1);
l0=si0;
sj0=(U64)(I64)(I32)(si0);
l3=sj0;
sj1=100ULL;
sj0+=sj1;
sj1=l3;
si2=l0;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
sj0=si2?sj0:sj1;
L0:;
return sj0;
}

U32 f138(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si1=4U;
si0>>=(si1&31);
si1=511U;
si0&=si1;
l1=si0;
si1=l0;
si2=7U;
si1&=si2;
si0+=si1;
si1=7U;
si0=REM_U(si0,si1);
si1=2U;
si0<<=(si1&31);
si1=1077780U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=7U;
si0+=si1;
si1=65535U;
si0&=si1;
si1=7U;
si0=DIV_U(si0,si1);
L0:;
return si0;
}

U32 f139(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=4U;
si0>>=(si1&31);
si1=511U;
si0&=si1;
l1=si0;
si1=l1;
si2=l0;
si3=7U;
si2&=si3;
si1+=si2;
si2=7U;
si1=REM_U(si1,si2);
si0-=si1;
si1=7U;
si0+=si1;
si1=65535U;
si0&=si1;
si1=7U;
si0=DIV_U(si0,si1);
L0:;
return si0;
}

U64 f140(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
si1=4U;
si0>>=(si1&31);
si1=511U;
si0&=si1;
si1=l0;
si2=7U;
si1&=si2;
si0+=si1;
si1=7U;
si0=REM_U(si0,si1);
si1=3U;
si0<<=(si1&31);
si1=1077808U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
L0:;
return sj0;
}

U64 f141(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
si1=4U;
si0>>=(si1&31);
si1=511U;
si0&=si1;
si1=l0;
si2=7U;
si1&=si2;
si0+=si1;
si1=7U;
si0=REM_U(si0,si1);
si1=1U;
si0+=si1;
sj0=(U64)(si0);
L0:;
return sj0;
}

U32 f142(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=1U;
l6=si0;
si0=l1;
si1=81919999U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=8191U;
si0&=si1;
l6=si0;
si1=4U;
si0>>=(si1&31);
si1=l1;
si2=7U;
si1&=si2;
si0+=si1;
si1=7U;
si0=REM_U(si0,si1);
si1=2U;
si0<<=(si1&31);
si1=1077864U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0-=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l7;
si2=l8;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l9;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l7;
si2=l8;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0-=si1;
si1=1U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
si1=l7;
si2=2U;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=8236U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l8=si0;
si0=l6;
si1=5863U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l6;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
l8=si0;
L6:;
si0=l8;
si1=4U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
l8=si0;
si1=l8;
si2=10U;
si1=DIV_U(si1,si2);
l8=si1;
si2=10U;
si1*=si2;
si0-=si1;
l9=si0;
si0=l8;
si1=48U;
si0|=si1;
l8=si0;
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=l7;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L7:;
si0=l9;
si1=48U;
si0|=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=l7;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=l7;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=32U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l8=si0;
si0=l6;
si1=5863U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l6;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
l8=si0;
L10:;
si0=l8;
si1=9U;
si0>>=(si1&31);
si1=-1U;
si0+=si1;
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0-=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l0;
si1=l7;
si2=l5;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L11:;
si0=l1;
si1=13U;
si0>>=(si1&31);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=l8;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l7;
si2=l5;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=32U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=65535U;
si0&=si1;
si1=100U;
si0=DIV_U(si0,si1);
l5=si0;
si1=l5;
si2=255U;
si1&=si2;
si2=10U;
si1=DIV_U(si1,si2);
l7=si1;
si2=10U;
si1*=si2;
si0-=si1;
l8=si0;
si0=l7;
si1=48U;
si0+=si1;
l7=si0;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L13:;
si0=l8;
si1=48U;
si0|=si1;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L14;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l5;
si2=100U;
si1*=si2;
si0-=si1;
l5=si0;
si1=l5;
si2=255U;
si1&=si2;
si2=10U;
si1=DIV_U(si1,si2);
l5=si1;
si2=10U;
si1*=si2;
si0-=si1;
l6=si0;
si0=l5;
si1=48U;
si0|=si1;
l5=si0;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L15:;
si0=l6;
si1=48U;
si0|=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L16;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
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
goto L17;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=32U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=60U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l2;
si1=3600U;
si0=DIV_U(si0,si1);
l7=si0;
si1=255U;
si0&=si1;
l8=si0;
si1=99U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l8;
si1=10U;
si0=DIV_U(si0,si1);
l6=si0;
si1=48U;
si0+=si1;
l8=si0;
si0=l7;
si1=l6;
si2=10U;
si1*=si2;
si0-=si1;
l6=si0;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L18:;
si0=l6;
si1=48U;
si0|=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L19;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L20;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=58U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=60U;
si0=REM_U(si0,si1);
l6=si0;
si1=l6;
si2=255U;
si1&=si2;
si2=10U;
si1=DIV_U(si1,si2);
l6=si1;
si2=10U;
si1*=si2;
si0-=si1;
l7=si0;
si0=l6;
si1=48U;
si0|=si1;
l6=si0;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L21:;
si0=l7;
si1=48U;
si0|=si1;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L22;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L23;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=58U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1000000000U;
si0=DIV_U(si0,si1);
si1=l2;
si2=l5;
si3=60U;
si2*=si3;
si1-=si2;
si0+=si1;
l5=si0;
si1=l5;
si2=255U;
si1&=si2;
si2=10U;
si1=DIV_U(si1,si2);
l5=si1;
si2=10U;
si1*=si2;
si0-=si1;
l6=si0;
si0=l5;
si1=48U;
si0|=si1;
l5=si0;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L24:;
si0=l6;
si1=48U;
si0|=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L25;
}
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=32U;
f134(i,si0,si1);
si0=l0;
si1=l4;
si2=0U;
si3=0U;
si0=f154(i,si0,si1,si2,si3);
l6=si0;
L3:;
si0=l6;
goto L0;
L2:;
si0=l7;
si1=l8;
si2=1077580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=l8;
si2=1077596U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f143(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=49U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l1=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1077448U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=1077456U;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=0U;
si3=1U;
si0=f154(i,si0,si1,si2,si3);
l1=si0;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f144(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si1=8191U;
si0&=si1;
l1=si0;
si1=5863U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=-1U;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=9U;
si0>>=(si1&31);
si1=-1U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=1076976U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0-=si1;
si1=l2;
si2=1076980U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si2=l2;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L1:;
si0=l1;
si1=12U;
si2=1077536U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f145(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si1=8191U;
si0&=si1;
l1=si0;
si1=5863U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=-1U;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=9U;
si0>>=(si1&31);
si1=-1U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=1077144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0-=si1;
si1=l2;
si2=1077148U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si2=l2;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L1:;
si0=l1;
si1=12U;
si2=1077552U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f146(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si1=4U;
si0>>=(si1&31);
si1=511U;
si0&=si1;
si1=l1;
si2=7U;
si1&=si2;
si0+=si1;
si1=7U;
si0=REM_U(si0,si1);
si1=2U;
si0<<=(si1&31);
si1=1077864U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=1077264U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0-=si1;
si1=l2;
si2=1077268U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f147(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si1=4U;
si0>>=(si1&31);
si1=511U;
si0&=si1;
si1=l1;
si2=7U;
si1&=si2;
si0+=si1;
si1=7U;
si0=REM_U(si0,si1);
si1=2U;
si0<<=(si1&31);
si1=1077864U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=1077372U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0-=si1;
si1=l2;
si2=1077376U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l3;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f148(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si0=1077430U;
si1=1077428U;
si2=l1;
si3=43199U;
si2=si2 > si3;
l1=si2;
si0=si2?si0:si1;
l2=si0;
si0=1077432U;
si1=1077430U;
si2=l1;
si0=si2?si0:si1;
l3=si0;
L2:;
{
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=255U;
si0&=si1;
l4=si0;
goto L5;
L6:;
si0=l2;
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
goto L8;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l4=si0;
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
goto L7;
L8:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
si0=l1;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l4;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
si0=l2;
si1=3U;
si0+=si1;
l2=si0;
goto L7;
L9:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
L7:;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=1407U;
l6=si0;
si0=1407U;
l5=si0;
L11:;
{
si0=-1U;
si1=l6;
si2=1U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
l8=si1;
si2=1124748U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l4;
si1=si1 != si2;
si2=l6;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l7;
l5=si0;
goto L12;
L13:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
si1=1U;
si0+=si1;
l1=si0;
L12:;
si0=l5;
si1=l1;
si0-=si1;
l6=si0;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L11;
}
goto L4;
}
L10:;
si0=l8;
si1=1124752U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj0=(U64)(si0);
sj1=3328599654400ULL;
sj0|=sj1;
sj1=3328599654505ULL;
si2=l1;
si3=1114112U;
si2=si2 != si3;
si3=l1;
si4=55296U;
si3^=si4;
si4=-2048U;
si3+=si4;
si4=1112064U;
si3=si3 < si4;
si2&=si3;
l1=si2;
sj0=si2?sj0:sj1;
l9=sj0;
si0=1114113U;
si1=1114112U;
si2=l1;
si0=si2?si0:si1;
l1=si0;
goto L3;
L5:;
si0=l4;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l4=si0;
L4:;
si0=l4;
sj0=(U64)(si0);
sj1=3328599654400ULL;
sj0|=sj1;
l9=sj0;
si0=1114113U;
l1=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=1114114U;
si2=l1;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l0;
si1=l4;
si2=l5;
f212(i,si0,si1,si2);
L14:;
sj0=l9;
l10=sj0;
L16:;
{
si0=l1;
si1=-1114112U;
si0+=si1;
l4=si0;
si0=1114114U;
l1=si0;
si0=l4;
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
case 2:
goto L15;
default:
goto L18;
}
L18:;
sj0=l9;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l9;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l10=sj0;
si0=1114113U;
l1=si0;
L17:;
sj0=l9;
si0=(U32)(sj0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l0;
si1=l4;
f225(i,si0,si1);
sj0=l10;
l9=sj0;
goto L16;
}
L15:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f149(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0-=si1;
si1=1U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=2U;
f212(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=19792U;
si2=19777U;
si3=l1;
si4=43199U;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

U32 f150(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si2=1000000000U;
si1=REM_U(si1,si2);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=l1;
si2=1000000U;
si1=DIV_U(si1,si2);
l3=si1;
si2=1000000U;
si1*=si2;
si0-=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l1;
si2=1000U;
si1=DIV_U(si1,si2);
l3=si1;
si2=1000U;
si1*=si2;
si0-=si1;
if(si0){
goto L4;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=25769803776ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077572U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=38654705664ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077572U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=12884901888ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077572U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f151(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=1000000000U;
si1=REM_U(si1,si2);
si2=1000000U;
si1=DIV_U(si1,si2);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=12884901888ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077572U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f152(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=1000000000U;
si1=REM_U(si1,si2);
si2=1000U;
si1=DIV_U(si1,si2);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=25769803776ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077572U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f153(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si2=1000000000U;
si1=REM_U(si1,si2);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=38654705664ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077572U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f154(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l1;
if(si0){
goto L5;
}
si0=l2;
if(si0){
goto L4;
}
L5:;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=l2;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=43U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l4=si0;
goto L6;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si1=l2;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L9:;
si0=0U;
si1=l1;
si0-=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=45U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l4=si0;
L6:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l2=si0;
si0=l1;
si1=3600U;
si0=I32_DIV_S(si0,si1);
l5=si0;
si1=255U;
si0&=si1;
l6=si0;
si1=99U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l6;
si1=10U;
si0=DIV_U(si0,si1);
l2=si0;
si1=48U;
si0+=si1;
l6=si0;
si0=l5;
si1=l2;
si2=10U;
si1*=si2;
si0-=si1;
l2=si0;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=l4;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L10:;
si0=l2;
si1=48U;
si0|=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si1=l2;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l2=si0;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L12;
case 3:
goto L1;
default:
goto L14;
}
L14:;
si0=1U;
l2=si0;
si0=l1;
si1=60U;
si0=I32_DIV_S(si0,si1);
si1=60U;
si0=I32_REM_S(si0,si1);
l1=si0;
si1=255U;
si0&=si1;
si1=99U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=255U;
si0&=si1;
si1=10U;
si0=DIV_U(si0,si1);
l2=si0;
si1=48U;
si0+=si1;
l3=si0;
si0=l1;
si1=l2;
si2=10U;
si1*=si2;
si0-=si1;
l1=si0;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l0;
si1=l4;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L15:;
si0=l1;
si1=48U;
si0|=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L13:;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=l4;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=58U;
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=60U;
si0=I32_DIV_S(si0,si1);
si1=60U;
si0=I32_REM_S(si0,si1);
l1=si0;
si1=255U;
si0&=si1;
l3=si0;
si1=99U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=10U;
si0=DIV_U(si0,si1);
l2=si0;
si1=48U;
si0+=si1;
l3=si0;
si0=l1;
si1=l2;
si2=10U;
si1*=si2;
si0-=si1;
l1=si0;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l0;
si1=l4;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L17:;
si0=l1;
si1=48U;
si0|=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L12:;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l0;
si1=l4;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=58U;
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=60U;
si0=I32_DIV_S(si0,si1);
l3=si0;
si1=60U;
si0=I32_REM_S(si0,si1);
l5=si0;
si1=255U;
si0&=si1;
l6=si0;
si1=99U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l6;
si1=10U;
si0=DIV_U(si0,si1);
l2=si0;
si1=48U;
si0+=si1;
l6=si0;
si0=l5;
si1=l2;
si2=10U;
si1*=si2;
si0-=si1;
l2=si0;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si1=l4;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L19:;
si0=l2;
si1=48U;
si0|=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l0;
si1=l2;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l0;
si1=l2;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=58U;
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l3;
si2=60U;
si1*=si2;
si0-=si1;
l1=si0;
si1=255U;
si0&=si1;
l3=si0;
si1=99U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=10U;
si0=DIV_U(si0,si1);
l2=si0;
si1=48U;
si0+=si1;
l3=si0;
si0=l1;
si1=l2;
si2=10U;
si1*=si2;
si0-=si1;
l1=si0;
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l0;
si1=l4;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L22:;
si0=l1;
si1=48U;
si0|=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=90U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=l1;
f211(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

U32 f155(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=1000000000U;
si1=REM_U(si1,si2);
si2=1000000U;
si1=DIV_U(si1,si2);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=12884901888ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077448U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f156(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=1000000000U;
si1=REM_U(si1,si2);
si2=1000U;
si1=DIV_U(si1,si2);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=25769803776ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077448U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f157(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si2=1000000000U;
si1=REM_U(si1,si2);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=38654705664ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1077448U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1077456U;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f158(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1077612U;
si3=10U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=1077624U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
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
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
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
si1=1103467U;
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
si1=1102923U;
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
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f159(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L1;
case 2:
goto L3;
default:
goto L1;
}
L4:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
L0:;
}

void f160(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L2:;
si0=1U;
l3=si0;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l4;
si1=31U;
si0&=si1;
l6=si0;
si0=l4;
si1=223U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l4=si0;
goto L1;
L3:;
si0=l1;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l4;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
si1=l6;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
goto L1;
L4:;
si0=l1;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f161(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3,si4;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
L2:;
si0=l2;
si1=l3;
si2=l1;
si3=l3;
si4=l4;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
si2=l1;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f162(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=176U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
goto L16;
L17:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l5;
si1=31U;
si0&=si1;
l7=si0;
si0=l5;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l5=si0;
goto L16;
L18:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l6;
si1=l7;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
goto L16;
L19:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l7;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l5=si0;
L16:;
si0=l3;
si1=l4;
si0+=si1;
l8=si0;
si0=l5;
si1=-32U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L13;
case 5:
goto L14;
default:
goto L20;
}
L20:;
si0=l5;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L13;
}
L15:;
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L14:;
si0=l3;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
si1=1U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L22;
L23:;
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=63U;
si0&=si1;
l9=si0;
si0=l6;
si1=31U;
si0&=si1;
l8=si0;
si0=l6;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l9=si0;
goto L4;
L24:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l9;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
goto L4;
L25:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
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
si0=si0 != si1;
if(si0){
goto L4;
}
L22:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L21:;
si0=l6;
si1=255U;
si0&=si1;
l9=si0;
si0=1U;
l6=si0;
goto L3;
L13:;
si0=l5;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
l6=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L26;
case 1:
goto L5;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L5;
case 5:
goto L5;
case 6:
goto L5;
case 7:
goto L5;
case 8:
goto L5;
case 9:
goto L5;
case 10:
goto L28;
case 11:
goto L5;
case 12:
goto L5;
case 13:
goto L5;
case 14:
goto L5;
case 15:
goto L5;
case 16:
goto L5;
case 17:
goto L5;
case 18:
goto L5;
case 19:
goto L5;
case 20:
goto L5;
case 21:
goto L5;
case 22:
goto L5;
case 23:
goto L5;
case 24:
goto L5;
case 25:
goto L5;
case 26:
goto L29;
default:
goto L27;
}
L29:;
si0=l5;
si1=12288U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L12;
L28:;
si0=l5;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
goto L12;
L27:;
si0=l6;
if(si0){
goto L5;
}
si0=l5;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L12;
}
goto L5;
L26:;
si0=l5;
si1=5760U;
si0=si0 != si1;
if(si0){
goto L5;
}
L12:;
si0=0U;
l9=si0;
si0=l3;
l5=si0;
L32:;
{
si0=l5;
l6=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L34;
}
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L33;
L34:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l7;
si1=31U;
si0&=si1;
l10=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l7=si0;
si0=l6;
si1=2U;
si0+=si1;
l5=si0;
goto L33;
L35:;
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
goto L36;
}
si0=l5;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l6;
si1=3U;
si0+=si1;
l5=si0;
goto L33;
L36:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l10;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l6;
si1=4U;
si0+=si1;
l5=si0;
L33:;
si0=l7;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l7;
si1=32U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l7;
si1=128U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l7;
si1=8U;
si0>>=(si1&31);
l10=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L40;
case 1:
goto L30;
case 2:
goto L30;
case 3:
goto L30;
case 4:
goto L30;
case 5:
goto L30;
case 6:
goto L30;
case 7:
goto L30;
case 8:
goto L30;
case 9:
goto L30;
case 10:
goto L38;
case 11:
goto L30;
case 12:
goto L30;
case 13:
goto L30;
case 14:
goto L30;
case 15:
goto L30;
case 16:
goto L30;
case 17:
goto L30;
case 18:
goto L30;
case 19:
goto L30;
case 20:
goto L30;
case 21:
goto L30;
case 22:
goto L30;
case 23:
goto L30;
case 24:
goto L30;
case 25:
goto L30;
case 26:
goto L39;
default:
goto L41;
}
L41:;
si0=l10;
if(si0){
goto L30;
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
goto L37;
}
goto L30;
L40:;
si0=l7;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L37;
}
goto L30;
L39:;
si0=l7;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L37;
}
goto L30;
L38:;
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
goto L30;
}
L37:;
si0=l9;
si1=l6;
si0-=si1;
si1=l5;
si0+=si1;
l9=si0;
si0=l5;
si1=l8;
si0=si0 != si1;
if(si0){
goto L32;
}
}
L31:;
si0=l4;
l9=si0;
L30:;
si0=l9;
if(si0){
goto L42;
}
si0=1078868U;
si1=30U;
si2=1078932U;
f673(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l4;
si1=l9;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l4;
si1=l9;
si0=si0 == si1;
if(si0){
goto L43;
}
goto L6;
L44:;
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
L43:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=l9;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L11:;
si0=6U;
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L51;
case 1:
goto L50;
case 2:
goto L49;
case 3:
goto L48;
case 4:
goto L47;
case 5:
goto L46;
case 6:
goto L45;
default:
goto L51;
}
L51:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l10=si0;
goto L45;
L50:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=1U;
l10=si0;
si0=1U;
l7=si0;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
L52:;
si0=l7;
si1=l9;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L45;
L49:;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=2U;
l10=si0;
goto L45;
L48:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L54;
}
si0=1U;
l7=si0;
goto L53;
L54:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
L53:;
si0=l7;
si1=l9;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=3U;
l10=si0;
goto L45;
L47:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l9=si0;
si0=4U;
l10=si0;
goto L45;
L46:;
si0=5U;
l10=si0;
si0=4U;
l9=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l11=si0;
si1=-4U;
si0+=si1;
si1=255U;
si0&=si1;
l4=si0;
si1=19U;
si2=l4;
si3=19U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L45;
case 1:
goto L73;
case 2:
goto L72;
case 3:
goto L71;
case 4:
goto L70;
case 5:
goto L69;
case 6:
goto L68;
case 7:
goto L67;
case 8:
goto L66;
case 9:
goto L65;
case 10:
goto L64;
case 11:
goto L63;
case 12:
goto L62;
case 13:
goto L61;
case 14:
goto L60;
case 15:
goto L59;
case 16:
goto L58;
case 17:
goto L57;
case 18:
goto L56;
case 19:
goto L55;
default:
goto L45;
}
L73:;
si0=5U;
l9=si0;
si0=5U;
l10=si0;
goto L45;
L72:;
si0=6U;
l9=si0;
goto L45;
L71:;
si0=7U;
l9=si0;
goto L45;
L70:;
si0=8U;
l9=si0;
goto L45;
L69:;
si0=9U;
l9=si0;
goto L45;
L68:;
si0=10U;
l9=si0;
goto L45;
L67:;
si0=11U;
l9=si0;
goto L45;
L66:;
si0=12U;
l9=si0;
goto L45;
L65:;
si0=13U;
l9=si0;
goto L45;
L64:;
si0=14U;
l9=si0;
goto L45;
L63:;
si0=15U;
l9=si0;
goto L45;
L62:;
si0=16U;
l9=si0;
goto L45;
L61:;
si0=17U;
l9=si0;
goto L45;
L60:;
si0=18U;
l9=si0;
goto L45;
L59:;
si0=19U;
l9=si0;
goto L45;
L58:;
si0=20U;
l9=si0;
goto L45;
L57:;
si0=21U;
l9=si0;
goto L45;
L56:;
si0=22U;
l9=si0;
goto L45;
L55:;
si0=l11;
l9=si0;
L45:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l9;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l6;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L10:;
si0=l3;
si1=l4;
si2=1U;
si3=l4;
si4=1078288U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l3;
si1=l4;
si2=0U;
si3=l9;
si4=1078916U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=0U;
l9=si0;
si0=l3;
l6=si0;
L76:;
{
si0=l6;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L78;
}
si0=l7;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
goto L77;
L78:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l5;
si1=31U;
si0&=si1;
l10=si0;
si0=l5;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L79;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l5=si0;
si0=l7;
si1=2U;
si0+=si1;
l6=si0;
goto L77;
L79:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L80;
}
si0=l6;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
si0=l7;
si1=3U;
si0+=si1;
l6=si0;
goto L77;
L80:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l10;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l7;
si1=4U;
si0+=si1;
l6=si0;
L77:;
si0=l5;
si1=-9U;
si0+=si1;
l10=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L81;
}
si0=1U;
si1=l10;
si0<<=(si1&31);
si1=8388639U;
si0&=si1;
if(si0){
goto L74;
}
L81:;
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L84;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
l10=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L87;
case 1:
goto L82;
case 2:
goto L82;
case 3:
goto L82;
case 4:
goto L82;
case 5:
goto L82;
case 6:
goto L82;
case 7:
goto L82;
case 8:
goto L82;
case 9:
goto L82;
case 10:
goto L85;
case 11:
goto L82;
case 12:
goto L82;
case 13:
goto L82;
case 14:
goto L82;
case 15:
goto L82;
case 16:
goto L82;
case 17:
goto L82;
case 18:
goto L82;
case 19:
goto L82;
case 20:
goto L82;
case 21:
goto L82;
case 22:
goto L82;
case 23:
goto L82;
case 24:
goto L82;
case 25:
goto L82;
case 26:
goto L86;
default:
goto L83;
}
L87:;
si0=l5;
si1=5760U;
si0=si0 != si1;
if(si0){
goto L82;
}
goto L74;
L86:;
si0=l5;
si1=12288U;
si0=si0 != si1;
if(si0){
goto L82;
}
goto L74;
L85:;
si0=l5;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L82;
}
goto L74;
L84:;
si0=l5;
si1=37U;
si0=si0 != si1;
if(si0){
goto L82;
}
goto L74;
L83:;
si0=l10;
if(si0){
goto L82;
}
si0=l5;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L74;
}
L82:;
si0=l9;
si1=l7;
si0-=si1;
si1=l6;
si0+=si1;
l9=si0;
si0=l6;
si1=l8;
si0=si0 != si1;
if(si0){
goto L76;
}
}
L75:;
si0=l4;
l9=si0;
L74:;
si0=l9;
if(si0){
goto L88;
}
si0=1078868U;
si1=30U;
si2=1078900U;
f673(i,si0,si1,si2);
UNREACHABLE;
L88:;
si0=l4;
si1=l9;
si0=si0 > si1;
if(si0){
goto L91;
}
si0=l4;
si1=l9;
si0=si0 == si1;
if(si0){
goto L90;
}
goto L89;
L91:;
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L89;
}
L90:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=l9;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L89:;
si0=l3;
si1=l4;
si2=0U;
si3=l9;
si4=1078852U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
l6=si0;
si0=l9;
si1=128U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=2U;
l6=si0;
si0=l9;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=3U;
si1=4U;
si2=l9;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
L3:;
si0=l7;
si1=l6;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L92;
}
goto L1;
L93:;
si0=l5;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L92:;
si0=l1;
si1=l7;
si2=l6;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
si2=l6;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=0U;
l8=si0;
si0=3U;
l11=si0;
si0=0U;
l10=si0;
si0=l9;
si1=-35U;
si0+=si1;
switch(si0){
case 0:
goto L167;
case 1:
goto L164;
case 2:
goto L164;
case 3:
goto L164;
case 4:
goto L164;
case 5:
goto L164;
case 6:
goto L164;
case 7:
goto L164;
case 8:
goto L164;
case 9:
goto L164;
case 10:
goto L165;
case 11:
goto L164;
case 12:
goto L164;
case 13:
goto L166;
default:
goto L168;
}
L168:;
si0=l9;
si1=95U;
si0=si0 != si1;
if(si0){
goto L164;
}
si0=2U;
l10=si0;
si0=0U;
l8=si0;
goto L165;
L167:;
si0=0U;
l4=si0;
si0=3U;
l10=si0;
si0=1U;
l8=si0;
goto L165;
L166:;
si0=1U;
l10=si0;
si0=0U;
l8=si0;
si0=1U;
l4=si0;
L165:;
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L171;
}
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L173;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l6;
si1=31U;
si0&=si1;
l9=si0;
si0=l6;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L172;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l9=si0;
goto L170;
L173:;
si0=l6;
si1=255U;
si0&=si1;
l9=si0;
si0=1U;
l6=si0;
goto L169;
L172:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L174;
}
si0=l7;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
goto L170;
L174:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l5;
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
l9=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L170;
}
L171:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L170:;
si0=1U;
l6=si0;
si0=l9;
si1=128U;
si0=si0 < si1;
if(si0){
goto L169;
}
si0=2U;
l6=si0;
si0=l9;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L169;
}
si0=3U;
si1=4U;
si2=l9;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
L169:;
si0=l2;
si1=136U;
si0+=si1;
si1=l6;
si2=l5;
si3=l3;
si4=1078320U;
f161(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+136U);
l5=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+140U);
l3=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L163;
}
si0=l4;
l8=si0;
si0=l10;
l11=si0;
L164:;
si0=l9;
si1=-37U;
si0+=si1;
switch(si0){
case 0:
goto L118;
case 1:
goto L162;
case 2:
goto L162;
case 3:
goto L162;
case 4:
goto L162;
case 5:
goto L162;
case 6:
goto L124;
case 7:
goto L162;
case 8:
goto L162;
case 9:
goto L122;
case 10:
goto L162;
case 11:
goto L162;
case 12:
goto L162;
case 13:
goto L162;
case 14:
goto L121;
case 15:
goto L162;
case 16:
goto L162;
case 17:
goto L120;
case 18:
goto L162;
case 19:
goto L162;
case 20:
goto L119;
case 21:
goto L123;
case 22:
goto L162;
case 23:
goto L162;
case 24:
goto L162;
case 25:
goto L162;
case 26:
goto L162;
case 27:
goto L162;
case 28:
goto L117;
case 29:
goto L161;
case 30:
goto L160;
case 31:
goto L159;
case 32:
goto L162;
case 33:
goto L158;
case 34:
goto L157;
case 35:
goto L156;
case 36:
goto L155;
case 37:
goto L162;
case 38:
goto L162;
case 39:
goto L162;
case 40:
goto L154;
case 41:
goto L162;
case 42:
goto L162;
case 43:
goto L153;
case 44:
goto L162;
case 45:
goto L152;
case 46:
goto L151;
case 47:
goto L150;
case 48:
goto L149;
case 49:
goto L148;
case 50:
goto L147;
case 51:
goto L146;
case 52:
goto L145;
case 53:
goto L144;
case 54:
goto L162;
case 55:
goto L162;
case 56:
goto L162;
case 57:
goto L162;
case 58:
goto L162;
case 59:
goto L162;
case 60:
goto L143;
case 61:
goto L142;
case 62:
goto L141;
case 63:
goto L140;
case 64:
goto L139;
case 65:
goto L138;
case 66:
goto L137;
case 67:
goto L142;
case 68:
goto L162;
case 69:
goto L136;
case 70:
goto L135;
case 71:
goto L134;
case 72:
goto L133;
case 73:
goto L132;
case 74:
goto L162;
case 75:
goto L131;
case 76:
goto L162;
case 77:
goto L104;
case 78:
goto L105;
case 79:
goto L130;
case 80:
goto L129;
case 81:
goto L128;
case 82:
goto L127;
case 83:
goto L126;
case 84:
goto L125;
case 85:
goto L113;
default:
goto L162;
}
L163:;
si0=l9;
si1=122U;
si0=si0 == si1;
if(si0){
goto L112;
}
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L162:;
si0=l2;
si1=6U;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L161:;
si0=l2;
si1=1285U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L160:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=260U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L159:;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1078336U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=1540U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L96;
L158:;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1078388U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=4U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L96;
L157:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=772U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L156:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3588U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L155:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3844U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L154:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=4100U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L153:;
si0=l2;
si1=2053U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L152:;
si0=l1;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1078436U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3588U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L96;
L151:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=4356U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L150:;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1078460U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3588U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L96;
L149:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=2052U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L148:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=2564U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L147:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=2308U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L146:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L116;
}
si0=1U;
si1=0U;
si2=1078508U;
f662(i,si0,si1,si2);
UNREACHABLE;
L145:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=4U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L144:;
si0=l2;
si1=3589U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L143:;
si0=l2;
si1=1541U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L142:;
si0=l2;
si1=1029U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L141:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L115;
}
si0=1U;
si1=0U;
si2=1078524U;
f662(i,si0,si1,si2);
UNREACHABLE;
L140:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=1796U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L139:;
si0=l2;
si1=2U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=1796U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L138:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=4612U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L137:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=1284U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L136:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3332U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L135:;
si0=l2;
si1=2U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3588U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L134:;
si0=l2;
si1=2U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3844U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L133:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=1540U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L132:;
si0=l2;
si1=152U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1078540U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l2;
si1=2U;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L131:;
si0=l2;
si1=2309U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L130:;
si0=l2;
si1=152U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1078616U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l2;
si1=2U;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L129:;
si0=0U;
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3076U;
i32_store16(&i->m0,(U64)si0+144U,si1);
si0=l8;
if(si0){
goto L97;
}
goto L95;
L128:;
si0=l1;
si1=4U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1078620U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=2U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=1796U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L96;
L127:;
si0=0U;
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=2820U;
i32_store16(&i->m0,(U64)si0+144U,si1);
si0=l8;
if(si0){
goto L97;
}
goto L95;
L126:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L114;
}
si0=1U;
si1=0U;
si2=1078668U;
f662(i,si0,si1,si2);
UNREACHABLE;
L125:;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=516U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L124:;
si0=l2;
si1=5637U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L123:;
si0=l3;
si1=3U;
si0=si0 < si1;
if(si0){
goto L111;
}
si0=1078684U;
si1=l5;
si2=3U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L110;
}
goto L103;
L122:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=l2;
si2=160U;
si1+=si2;
f160(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L175;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L109;
}
L175:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L121:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=l2;
si2=168U;
si1+=si2;
f160(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L176;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+100U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L108;
}
L176:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L120:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=l2;
si2=168U;
si1+=si2;
f160(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
si0=!(si0);
if(si0){
goto L177;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L107;
}
L177:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L119:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l5;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=128U;
si0+=si1;
si1=l2;
si2=168U;
si1+=si2;
f160(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L178;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+132U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L106;
}
L178:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L118:;
si0=l2;
si1=152U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1078848U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=0U;
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+144U,si1);
si0=l8;
if(si0){
goto L97;
}
goto L95;
L117:;
si0=l2;
si1=1797U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L116:;
si0=l1;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+32U);
l6=si1;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=l6;
f163(i,si0,si1);
si0=l8;
if(si0){
goto L97;
}
goto L95;
L115:;
si0=l1;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
l6=si1;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=l6;
f163(i,si0,si1);
si0=l8;
if(si0){
goto L97;
}
goto L95;
L114:;
si0=l1;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l6=si1;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=l6;
f163(i,si0,si1);
si0=l8;
if(si0){
goto L97;
}
goto L95;
L113:;
si0=l2;
si1=4869U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L112:;
si0=l2;
si1=5U;
i32_store16(&i->m0,(U64)si0+144U,si1);
si0=0U;
l5=si0;
si0=l10;
l11=si0;
si0=l4;
if(si0){
goto L97;
}
goto L95;
L111:;
si0=l3;
switch(si0){
case 0:
goto L101;
case 1:
goto L102;
case 2:
goto L103;
default:
goto L102;
}
L110:;
si0=l2;
si1=16U;
si0+=si1;
si1=3U;
si2=l5;
si3=l3;
si4=1078720U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4357U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L109:;
si0=1U;
l7=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L179;
}
si0=2U;
l7=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L179;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L179:;
si0=l2;
si1=72U;
si0+=si1;
si1=l7;
si2=l5;
si3=l3;
si4=1078736U;
f161(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
l5=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+76U);
l7=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L186;
case 1:
goto L187;
case 2:
goto L187;
case 3:
goto L185;
case 4:
goto L187;
case 5:
goto L187;
case 6:
goto L184;
default:
goto L188;
}
L188:;
si0=l6;
si1=102U;
si0=si0 == si1;
if(si0){
goto L183;
}
L187:;
si0=l2;
si1=6U;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L186:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l5;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=168U;
si1+=si2;
f160(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L189;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L182;
}
L189:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L185:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l5;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=168U;
si1+=si2;
f160(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L190;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L181;
}
L190:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L184:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l5;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=168U;
si1+=si2;
f160(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L191;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L180;
}
L191:;
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L183:;
si0=l2;
si1=2565U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L182:;
si0=1U;
l9=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L192;
}
si0=2U;
l9=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L192;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
L192:;
si0=l2;
si1=24U;
si0+=si1;
si1=l9;
si2=l5;
si3=l7;
si4=1078752U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=6U;
l5=si0;
si0=l6;
si1=102U;
si0=si0 != si1;
if(si0){
goto L193;
}
si0=l2;
si1=11U;
i32_store8(&i->m0,(U64)si0+145U,si1);
si0=5U;
l5=si0;
L193:;
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L181:;
si0=1U;
l9=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L194;
}
si0=2U;
l9=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L194;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
L194:;
si0=l2;
si1=40U;
si0+=si1;
si1=l9;
si2=l5;
si3=l7;
si4=1078768U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
si0=6U;
l5=si0;
si0=l6;
si1=102U;
si0=si0 != si1;
if(si0){
goto L195;
}
si0=l2;
si1=12U;
i32_store8(&i->m0,(U64)si0+145U,si1);
si0=5U;
l5=si0;
L195:;
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L180:;
si0=1U;
l9=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L196;
}
si0=2U;
l9=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L196;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
L196:;
si0=l2;
si1=56U;
si0+=si1;
si1=l9;
si2=l5;
si3=l7;
si4=1078784U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
si0=6U;
l5=si0;
si0=l6;
si1=102U;
si0=si0 != si1;
if(si0){
goto L197;
}
si0=l2;
si1=13U;
i32_store8(&i->m0,(U64)si0+145U,si1);
si0=5U;
l5=si0;
L197:;
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L108:;
si0=1U;
l7=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L198;
}
si0=2U;
l7=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L198;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L198:;
si0=l2;
si1=88U;
si0+=si1;
si1=l7;
si2=l5;
si3=l3;
si4=1078800U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0,sj1);
si0=6U;
l5=si0;
si0=l6;
si1=102U;
si0=si0 != si1;
if(si0){
goto L199;
}
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+145U,si1);
si0=5U;
l5=si0;
L199:;
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L107:;
si0=1U;
l7=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L200;
}
si0=2U;
l7=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L200;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L200:;
si0=l2;
si1=104U;
si0+=si1;
si1=l7;
si2=l5;
si3=l3;
si4=1078816U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
si0=6U;
l5=si0;
si0=l6;
si1=102U;
si0=si0 != si1;
if(si0){
goto L201;
}
si0=l2;
si1=2U;
i32_store8(&i->m0,(U64)si0+145U,si1);
si0=5U;
l5=si0;
L201:;
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L106:;
si0=1U;
l7=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L202;
}
si0=2U;
l7=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L202;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L202:;
si0=l2;
si1=120U;
si0+=si1;
si1=l7;
si2=l5;
si3=l3;
si4=1078832U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=6U;
l5=si0;
si0=l6;
si1=102U;
si0=si0 != si1;
if(si0){
goto L203;
}
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+145U,si1);
si0=5U;
l5=si0;
L203:;
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L105:;
si0=0U;
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=4868U;
i32_store16(&i->m0,(U64)si0+144U,si1);
si0=l8;
if(si0){
goto L97;
}
goto L95;
L104:;
si0=6U;
l6=si0;
si0=l1;
si1=6U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1078544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+146U,si1);
si0=l2;
si1=3844U;
i32_store16(&i->m0,(U64)si0+144U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L95;
}
goto L94;
L103:;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=31290U;
si0=si0 == si1;
if(si0){
goto L100;
}
L102:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=122U;
si0=si0 == si1;
if(si0){
goto L99;
}
L101:;
si0=l2;
si1=6U;
i32_store8(&i->m0,(U64)si0+144U,si1);
goto L98;
L100:;
si0=l2;
si1=8U;
si0+=si1;
si1=2U;
si2=l5;
si3=l3;
si4=1078704U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4101U;
i32_store16(&i->m0,(U64)si0+144U,si1);
goto L98;
L99:;
si0=l2;
si1=1U;
si2=l5;
si3=l3;
si4=1078688U;
f161(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=3845U;
i32_store16(&i->m0,(U64)si0+144U,si1);
L98:;
si0=0U;
l5=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L95;
}
L97:;
si0=6U;
l6=si0;
si0=l5;
if(si0){
goto L94;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+144U);
si1=255U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L94;
}
si0=l0;
si1=l11;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+145U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=4U;
l6=si0;
goto L94;
L96:;
si0=6U;
l6=si0;
si0=l8;
if(si0){
goto L94;
}
L95:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+144U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L94:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=144U;
si0+=si1;
f159(i,si0);
L2:;
si0=l2;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=l7;
si2=l6;
si3=l7;
si4=1078304U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f163(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=6U;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
case 4:
goto L6;
case 5:
goto L5;
case 6:
goto L4;
default:
goto L10;
}
L10:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
L11:;
si0=l2;
si1=l3;
si2=l1;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L13;
}
si0=1U;
l3=si0;
goto L12;
L13:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
L12:;
si0=l3;
si1=l2;
si2=l1;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l0;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+1U);
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=4U;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
si1=-4U;
si0+=si1;
si1=255U;
si0&=si1;
l1=si0;
si1=19U;
si2=l1;
si3=19U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L33;
case 2:
goto L32;
case 3:
goto L31;
case 4:
goto L30;
case 5:
goto L29;
case 6:
goto L28;
case 7:
goto L27;
case 8:
goto L26;
case 9:
goto L25;
case 10:
goto L24;
case 11:
goto L23;
case 12:
goto L22;
case 13:
goto L21;
case 14:
goto L20;
case 15:
goto L19;
case 16:
goto L18;
case 17:
goto L17;
case 18:
goto L16;
case 19:
goto L15;
default:
goto L14;
}
L33:;
si0=5U;
l2=si0;
goto L14;
L32:;
si0=6U;
l2=si0;
goto L14;
L31:;
si0=7U;
l2=si0;
goto L14;
L30:;
si0=8U;
l2=si0;
goto L14;
L29:;
si0=9U;
l2=si0;
goto L14;
L28:;
si0=10U;
l2=si0;
goto L14;
L27:;
si0=11U;
l2=si0;
goto L14;
L26:;
si0=12U;
l2=si0;
goto L14;
L25:;
si0=13U;
l2=si0;
goto L14;
L24:;
si0=14U;
l2=si0;
goto L14;
L23:;
si0=15U;
l2=si0;
goto L14;
L22:;
si0=16U;
l2=si0;
goto L14;
L21:;
si0=17U;
l2=si0;
goto L14;
L20:;
si0=18U;
l2=si0;
goto L14;
L19:;
si0=19U;
l2=si0;
goto L14;
L18:;
si0=20U;
l2=si0;
goto L14;
L17:;
si0=21U;
l2=si0;
goto L14;
L16:;
si0=22U;
l2=si0;
goto L14;
L15:;
si0=l3;
l2=si0;
L14:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=5U;
l2=si0;
L4:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f164(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
l10=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
if(si0){
goto L6;
}
si0=l10;
if(si0){
goto L5;
}
si0=0U;
l8=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si1=100U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
si0=2000U;
si1=1900U;
si2=l3;
si3=70U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l3;
si0+=si1;
l6=si0;
goto L4;
L6:;
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l8=si0;
si0=l3;
si1=100U;
si0=si0 >= si1;
if(si0){
goto L2;
}
L7:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=1U;
l8=si0;
si0=l10;
si0=!(si0);
si1=l5;
si2=100U;
si1=DIV_U(si1,si2);
l11=si1;
si2=l4;
si1=si1 == si2;
si0|=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
l6=si0;
si0=l9;
si0=!(si0);
si1=l5;
si2=l11;
si3=100U;
si2*=si3;
si1-=si2;
si2=l3;
si1=si1 == si2;
si0|=si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l9;
if(si0){
goto L8;
}
si0=2U;
l8=si0;
goto L2;
L8:;
si0=0U;
l8=si0;
si0=l3;
si1=99U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=0U;
l8=si0;
si0=l4;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l4;
sj0=(U64)(I64)(I32)(si0);
sj1=100ULL;
sj0*=sj1;
l12=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l12;
si1=(U32)(sj1);
l11=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
l8=si0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l11;
si2=l3;
si1+=si2;
l6=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L2;
}
L4:;
si0=1U;
l8=si0;
L3:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l14=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
l15=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l11;
if(si0){
goto L13;
}
si0=l15;
if(si0){
goto L12;
}
si0=0U;
l11=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L9;
}
si0=l16;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l16;
si1=100U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L9;
}
si0=2000U;
si1=1900U;
si2=l16;
si3=70U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l16;
si0+=si1;
l13=si0;
goto L11;
L13:;
si0=l14;
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
l11=si0;
si0=l16;
si1=100U;
si0=si0 >= si1;
if(si0){
goto L9;
}
L14:;
si0=0U;
l11=si0;
si0=l13;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=1U;
l11=si0;
si0=l15;
si0=!(si0);
si1=l13;
si2=100U;
si1=DIV_U(si1,si2);
l15=si1;
si2=l17;
si1=si1 == si2;
si0|=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l14;
si0=!(si0);
si1=l13;
si2=l15;
si3=100U;
si2*=si3;
si1-=si2;
si2=l16;
si1=si1 == si2;
si0|=si1;
if(si0){
goto L10;
}
goto L9;
L12:;
si0=l14;
if(si0){
goto L15;
}
si0=2U;
l11=si0;
goto L9;
L15:;
si0=0U;
l11=si0;
si0=l16;
si1=99U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=0U;
l11=si0;
si0=l17;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l17;
sj0=(U64)(I64)(I32)(si0);
sj1=100ULL;
sj0*=sj1;
l12=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l12;
si1=(U32)(sj1);
l14=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l11=si0;
si0=l16;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l14;
si2=l16;
si1+=si2;
l13=si1;
si2=l14;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L9;
}
L11:;
si0=1U;
l11=si0;
L10:;
si0=l8;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+104U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l14=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
if(si0){
goto L26;
}
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=366U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l6;
si1=400U;
si0=I32_REM_S(si0,si1);
l11=si0;
si0=l6;
si1=262144U;
si0+=si1;
si1=524287U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l13;
si1=4U;
si0<<=(si1&31);
si1=l11;
si2=400U;
si1+=si2;
si2=l11;
si3=l11;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0|=si1;
l13=si0;
si1=-16U;
si0+=si1;
si1=5848U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l13;
si1=l6;
si2=13U;
si1<<=(si2&31);
si0|=si1;
l11=si0;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
l6=si0;
si0=l11;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L25;
}
goto L24;
L26:;
si0=l6;
si1=400U;
si0=I32_REM_S(si0,si1);
l8=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=12U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=31U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
si1=l3;
si2=9U;
si1<<=(si2&31);
si0|=si1;
si1=l8;
si2=400U;
si1+=si2;
si2=l8;
si3=l8;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l8=si1;
si0|=si1;
l1=si0;
si1=6655U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l6;
si1=262144U;
si0+=si1;
si1=524287U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l1;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=1082912U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si2=8184U;
si1&=si2;
si0-=si1;
l1=si0;
si1=-16U;
si0+=si1;
si1=5847U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l1;
si2=l6;
si3=13U;
si2<<=(si3&31);
si1|=si2;
l11=si1;
si0=f165(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=4U;
si0>>=(si1&31);
l1=si0;
si1=l1;
si2=l8;
si3=7U;
si2&=si3;
si1+=si2;
si2=65535U;
si1&=si2;
si2=7U;
si1=REM_U(si1,si2);
l8=si1;
si0-=si1;
si1=7U;
si0+=si1;
si1=65535U;
si0&=si1;
si1=7U;
si0=DIV_U(si0,si1);
l9=si0;
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=1079172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=7U;
si0+=si1;
si1=65535U;
si0&=si1;
si1=7U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L28;
}
si0=l8;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L19;
}
L28:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L29;
}
si0=l8;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L19;
}
L29:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L17;
L25:;
si0=l6;
si1=l6;
si2=100U;
si1=I32_DIV_S(si1,si2);
l17=si1;
si2=100U;
si1*=si2;
si0-=si1;
l16=si0;
L24:;
si0=l13;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
L30:;
si0=l10;
if(si0){
goto L35;
}
si0=l11;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L34;
}
L35:;
si0=l11;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
si0=l10;
si0=!(si0);
si1=l4;
si2=l17;
si1=si1 == si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l16;
l7=si0;
si0=l9;
if(si0){
goto L33;
}
goto L32;
L34:;
si0=l9;
si0=!(si0);
if(si0){
goto L31;
}
L33:;
si0=l3;
l7=si0;
L32:;
si0=l11;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
si0=l7;
si1=l16;
si0=si0 != si1;
if(si0){
goto L19;
}
L31:;
si0=l15;
si1=3U;
si0<<=(si1&31);
si1=l13;
si0+=si1;
l3=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=9U;
si1>>=(si2&31);
si0=si0 != si1;
if(si0){
goto L19;
}
L36:;
si0=l8;
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=4U;
si1>>=(si2&31);
si2=31U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L19;
}
L37:;
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f165(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f166(i,si0,si1);
if(si0){
goto L17;
}
goto L19;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l8=si0;
si1=7U;
si0=si0 != si1;
if(si0){
goto L39;
}
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l8=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=1U;
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
si2=1U;
f172(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si1=8191U;
si0&=si1;
si0=f167(i,si0);
l7=si0;
si0=l3;
si1=53U;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l9;
si2=l8;
si3=l3;
si4=7U;
si3*=si4;
si2+=si3;
si3=l7;
si4=255U;
si3&=si4;
si4=2U;
si3<<=(si4&31);
si4=1079144U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2+=si3;
si3=-7U;
si2+=si3;
sj2=(U64)(I64)(I32)(si2);
sj3=86400ULL;
sj2*=sj3;
si3=0U;
f175(i,si0,si1,sj2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
si1=l6;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f168(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f165(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f166(i,si0,si1);
if(si0){
goto L17;
}
goto L19;
L39:;
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=1U;
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l6;
si2=1U;
f172(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si1=8191U;
si0&=si1;
si0=f167(i,si0);
l7=si0;
si0=l3;
si1=53U;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l9;
si2=l3;
si3=7U;
si2*=si3;
si3=6U;
si4=l7;
si5=255U;
si4&=si5;
si3-=si4;
si4=255U;
si3&=si4;
si2+=si3;
si3=l8;
si4=2U;
si3<<=(si4&31);
si4=1079116U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2+=si3;
si3=-7U;
si2+=si3;
sj2=(U64)(I64)(I32)(si2);
sj3=86400ULL;
sj2*=sj3;
si3=0U;
f175(i,si0,si1,sj2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
si1=l6;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f168(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f165(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f166(i,si0,si1);
if(si0){
goto L17;
}
goto L19;
L41:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L38:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L22:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=1U;
l1=si0;
goto L1;
L21:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=1U;
l1=si0;
goto L1;
L20:;
si0=l11;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l8=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=l13;
si2=l1;
si3=92U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l8;
f173(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l11=si1;
si0=f168(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l11;
si0=f166(i,si0,si1);
if(si0){
goto L17;
}
L19:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L18:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=1U;
l1=si0;
goto L1;
L17:;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L16:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=1U;
l1=si0;
goto L1;
L9:;
si0=l0;
si1=l11;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=1U;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f165(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=l1;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
l2=si0;
si0=l1;
si1=7U;
si0&=si1;
l3=si0;
si1=7U;
si0+=si1;
si1=l3;
si2=l3;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=511U;
si1&=si2;
l4=si1;
si0+=si1;
l5=si0;
si1=7U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
si1=l5;
si2=7U;
si1=DIV_U(si1,si2);
l5=si1;
si2=1030U;
si3=l1;
si4=15U;
si3&=si4;
l1=si3;
si2>>=(si3&31);
si3=1U;
si2&=si3;
si3=52U;
si2|=si3;
si3=l5;
si2=si2 < si3;
l5=si2;
si0=si2?si0:si1;
l6=si0;
si0=l2;
si1=l5;
si0+=si1;
l2=si0;
goto L1;
L2:;
si0=1030U;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si2=400U;
si1=I32_REM_S(si1,si2);
l5=si1;
si2=400U;
si1+=si2;
si2=l5;
si3=l5;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=52U;
si0|=si1;
l6=si0;
si0=l1;
si1=15U;
si0&=si1;
l1=si0;
L1:;
si0=l2;
si1=10U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
si1=l6;
si2=4U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
si1=10U;
si0=(U32)((I32)si0>>(si1&31));
l5=si0;
si0=l4;
si1=l3;
si0+=si1;
si1=7U;
si0=REM_U(si0,si1);
l7=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
goto L3;
L4:;
si0=l5;
si1=l5;
si2=100U;
si1=I32_DIV_S(si1,si2);
l4=si1;
si2=100U;
si1*=si2;
si0-=si1;
l8=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
l3=si0;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L5;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L11;
L12:;
si0=l4;
l5=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
L11:;
si0=0U;
l3=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l8;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L7;
}
L9:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L8:;
si0=0U;
l3=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si1=l8;
si0=si0 != si1;
if(si0){
goto L5;
}
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l3=si0;
si0=l1;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=63U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L5;
}
L13:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+160U);
l1=si0;
si1=7U;
si0=si0 == si1;
si1=l1;
si2=l7;
si1=si1 == si2;
si0|=si1;
l3=si0;
L5:;
si0=l3;
L0:;
return si0;
}

U32 f166(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=4U;
si0>>=(si1&31);
si1=511U;
si0&=si1;
l2=si0;
si1=l2;
si2=l1;
si3=7U;
si2&=si3;
si1+=si2;
si2=7U;
si1=REM_U(si1,si2);
l1=si1;
si0-=si1;
si1=7U;
si0+=si1;
si1=65535U;
si0&=si1;
si1=7U;
si0=DIV_U(si0,si1);
l3=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=1079172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
si1=7U;
si0+=si1;
si1=65535U;
si0&=si1;
si1=7U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l0=si0;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l0=si0;
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
si1=l1;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si1=si1 == si2;
si0|=si1;
l0=si0;
L1:;
si0=l0;
L0:;
return si0;
}

U32 f167(rustpythonInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=4U;
si0>>=(si1&31);
si1=l0;
si2=7U;
si1&=si2;
si0+=si1;
si1=7U;
si0=REM_U(si0,si1);
L0:;
return si0;
}

U32 f168(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=l1;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
l2=si0;
si0=0U;
l3=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l2;
si1=l2;
si2=100U;
si1=I32_DIV_S(si1,si2);
l4=si1;
si2=100U;
si1*=si2;
si0-=si1;
l5=si0;
L1:;
si0=0U;
l6=si0;
si0=l1;
si1=8191U;
si0&=si1;
l7=si0;
si1=5863U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=l7;
si0+=si1;
si1=9U;
si0>>=(si1&31);
l3=si0;
si0=l6;
si1=l1;
si0+=si1;
si1=4U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
l6=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l7=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L4;
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L10;
L11:;
si0=l4;
l2=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
L10:;
si0=0U;
l7=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L7:;
si0=0U;
l7=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si0=si0 != si1;
if(si0){
goto L4;
}
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
l7=si0;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L4;
}
L12:;
si0=l6;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L13:;
si0=l1;
si1=l6;
si0=si0 == si1;
l7=si0;
L4:;
si0=l7;
L0:;
return si0;
}

void f169(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L2;
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+120U);
if(si0){
goto L4;
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L4:;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=12U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
if(si0){
goto L6;
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L6:;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=60U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L7:;
si0=0U;
l5=si0;
si0=l1;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+136U);
l6=si2;
si0=si2?si0:si1;
l7=si0;
si1=60U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=0U;
l8=si0;
goto L9;
L10:;
si0=l7;
si1=60U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=59U;
l7=si0;
si0=1000000000U;
l8=si0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=1000000000U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l0;
si1=l5;
si2=1000000000U;
si1=si1 < si2;
si2=1U;
si1<<=(si2&31);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L11:;
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=60U;
si1*=si2;
si2=l3;
si3=l2;
si4=12U;
si3*=si4;
si2+=si3;
si3=3600U;
si2*=si3;
si1+=si2;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f170(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=224U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
f164(i,si0,si1);
si0=2U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=0U;
l4=si0;
goto L15;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=11U;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=0U;
l4=si0;
goto L15;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
l4=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=59U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=0U;
l8=si0;
si0=l1;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+136U);
l9=si2;
si0=si2?si0:si1;
l10=si0;
si1=60U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=0U;
l4=si0;
goto L18;
L19:;
si0=0U;
l4=si0;
si0=l10;
si1=60U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=59U;
l10=si0;
si0=1000000000U;
l4=si0;
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=1000000000U;
si0=si0 < si1;
if(si0){
goto L14;
}
L20:;
si0=l8;
si1=1000000000U;
si0=si0 < si1;
si1=1U;
si0<<=(si1&31);
l4=si0;
L15:;
si0=1U;
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=1U;
si0&=si1;
if(si0){
goto L13;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L8;
}
si0=1U;
l5=si0;
si0=0U;
l6=si0;
goto L12;
L14:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l5=si0;
L13:;
si0=1U;
l6=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L9;
}
L12:;
si0=0U;
l8=si0;
si0=l6;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+17U);
l7=si1;
si1=!(si1);
si0&=si1;
if(si0){
goto L21;
}
si0=l5;
si1=l4;
si2=255U;
si1&=si2;
si1=!(si1);
si0&=si1;
if(si0){
goto L21;
}
si0=1U;
l8=si0;
si0=l6;
si1=l7;
si2=1U;
si1=si1 == si2;
si0&=si1;
if(si0){
goto L21;
}
si0=l5;
si1=l4;
si2=255U;
si1&=si2;
si2=1U;
si1=si1 == si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
L21:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l3;
si1=l8;
si2=l4;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l7;
si2=60U;
si1*=si2;
si2=l6;
si3=l5;
si4=12U;
si3*=si4;
si2+=si3;
si3=3600U;
si2*=si3;
si1+=si2;
si2=l10;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=32U;
si0+=si1;
l4=si0;
si0=f178(i,si0);
l6=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
si1=l5;
sj1=(U64)(si1);
si2=l2;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l6;
sj2=(U64)(I64)(I32)(si2);
sj3=86400ULL;
sj2*=sj3;
sj1+=sj2;
sj2=-62135683200ULL;
sj1+=sj2;
l12=sj1;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l8;
si1=1000000000U;
si0=si0 < si1;
if(si0){
goto L22;
}
sj0=l11;
sj1=l12;
sj2=1ULL;
sj1+=sj2;
si0=sj0 == sj1;
if(si0){
goto L2;
}
L22:;
si0=l0;
si1=257U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l2;
sj0=(U64)(I64)(I32)(si0);
l11=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l12=sj1;
sj2=l11;
sj1+=sj2;
l11=sj1;
sj2=l12;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
if(si0){
goto L7;
}
sj0=l11;
sj1=l11;
sj2=86400ULL;
sj1=I64_DIV_S(sj1,sj2);
l12=sj1;
sj2=86400ULL;
sj1*=sj2;
sj0-=sj1;
l13=sj0;
sj1=63ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l12;
sj0+=sj1;
l11=sj0;
sj1=-2147483648ULL;
sj0+=sj1;
sj1=-4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L6;
}
sj0=l11;
si0=(U32)(sj0);
l4=si0;
si1=719163U;
si0+=si1;
l5=si0;
si1=l4;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
f174(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
f171(i,si0,si1);
sj0=l13;
sj1=86400ULL;
sj0+=sj1;
sj1=l13;
sj2=l13;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
sj0=si2?sj0:sj1;
si0=(U32)(sj0);
l6=si0;
si1=60U;
si0=REM_U(si0,si1);
l5=si0;
si0=l3;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+160U);
l1=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
si1=60U;
si0=si0 == si1;
if(si0){
goto L23;
}
L24:;
si0=l1;
si0=!(si0);
if(si0){
goto L25;
}
si0=1U;
l1=si0;
si0=l8;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L25:;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L4;
L23:;
si0=l5;
si0=!(si0);
if(si0){
goto L26;
}
si0=1U;
l1=si0;
si0=l5;
si1=59U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L4;
L26:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l3;
si1=192U;
si0+=si1;
si1=l3;
si2=208U;
si1+=si2;
sj2=1ULL;
si3=0U;
f195(i,si0,si1,sj2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+192U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+196U);
l6=si0;
goto L4;
L9:;
si0=l0;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+17U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L7:;
si0=l0;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=1078948U;
si1=37U;
si2=1079100U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L28;
}
si0=1U;
l1=si0;
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L27;
L28:;
si0=l3;
si1=44U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
L27:;
si0=l4;
si1=4U;
si0>>=(si1&31);
si1=511U;
si0&=si1;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
si0=!(si0);
if(si0){
goto L30;
}
si0=1U;
l1=si0;
si0=l3;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L29;
L30:;
si0=l3;
si1=124U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+120U,si1);
L29:;
si0=l6;
si1=43200U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l6;
si1=3600U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l6;
si1=60U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L32;
}
si0=1U;
l1=si0;
si0=l3;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L31;
L32:;
si0=l3;
si1=140U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+136U,si1);
L31:;
si0=l5;
si1=12U;
si0=REM_U(si0,si1);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L34;
}
si0=1U;
l1=si0;
si0=l3;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L33;
L34:;
si0=l3;
si1=148U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+144U,si1);
L33:;
si0=l6;
si1=60U;
si0=REM_U(si0,si1);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+152U);
si0=!(si0);
if(si0){
goto L36;
}
si0=1U;
l1=si0;
si0=l3;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L35;
L36:;
si0=l3;
si1=156U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+152U,si1);
L35:;
si0=l3;
si1=192U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f164(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+192U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+193U);
l1=si0;
goto L3;
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si0=l3;
si1=192U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f169(i,si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+192U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+193U);
l1=si0;
goto L3;
L38:;
si0=l3;
si1=192U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+196U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=224U;
si0+=si1;
i->g0=si0;
L0:;
}

void f171(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U64 l3=0;
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
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U32 si0,si1;
U64 sj0,sj1;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+152U);
l4=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+96U);
l5=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+104U);
l6=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+112U);
l7=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+120U);
l8=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+128U);
l9=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+136U);
l10=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+144U);
l11=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l12=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l13=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
l14=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
l15=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+48U);
l16=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+56U);
l17=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+64U);
l18=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+72U);
l19=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+80U);
l20=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+88U);
l21=sj0;
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+160U);
i32_store8(&i->m0,(U64)si0+160U,si1);
si0=l0;
sj1=l21;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
sj1=l19;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l0;
sj1=l18;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f172(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
si1=366U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L2:;
si0=l1;
si1=400U;
si0=I32_REM_S(si0,si1);
l4=si0;
si0=0U;
l3=si0;
si0=l1;
si1=262144U;
si0+=si1;
si1=524287U;
si0=si0 <= si1;
if(si0){
goto L3;
}
goto L1;
L3:;
si0=l2;
si1=4U;
si0<<=(si1&31);
si1=l4;
si2=400U;
si1+=si2;
si2=l4;
si3=l4;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0|=si1;
l2=si0;
si1=-16U;
si0+=si1;
si1=5847U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si2=13U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
si0=1U;
l3=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f173(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l1;
si1=400U;
si0=I32_REM_S(si0,si1);
l4=si0;
si0=0U;
l5=si0;
si0=l2;
if(si0){
goto L2;
}
goto L1;
L2:;
si0=1030U;
si1=l4;
si2=400U;
si1+=si2;
si2=l4;
si3=l4;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=52U;
si0|=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L3;
}
goto L1;
L3:;
si0=l2;
si1=7U;
si0*=si1;
si1=l3;
si2=255U;
si1&=si2;
si0+=si1;
l3=si0;
si1=l4;
si2=7U;
si1&=si2;
l2=si1;
si2=7U;
si1+=si2;
si2=l2;
si3=l2;
si4=3U;
si3=si3 < si4;
si1=si3?si1:si2;
l2=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l3;
si1=l2;
si0-=si1;
l3=si0;
si1=366U;
si2=l4;
si3=3U;
si2>>=(si3&31);
si1-=si2;
l6=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l3;
si1=l6;
si0-=si1;
l3=si0;
si1=366U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si1=400U;
si0=I32_REM_S(si0,si1);
l4=si0;
si0=0U;
l5=si0;
si0=l1;
si1=262145U;
si0+=si1;
si1=524287U;
si0=si0 <= si1;
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l1;
si1=-1U;
si0+=si1;
l6=si0;
si1=400U;
si0=I32_REM_S(si0,si1);
l4=si0;
si0=0U;
l5=si0;
si0=l1;
si1=262143U;
si0+=si1;
si1=524287U;
si0=si0 <= si1;
if(si0){
goto L9;
}
goto L1;
L9:;
si0=l3;
si1=l2;
si2=l4;
si3=400U;
si2+=si3;
si3=l4;
si4=l4;
si5=0U;
si4=(U32)((I32)si4<(I32)si5);
si2=si4?si2:si3;
si3=1082512U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=3U;
si2>>=(si3&31);
si1+=si2;
si0-=si1;
si1=366U;
si0+=si1;
l1=si0;
si1=366U;
si0=si0 <= si1;
if(si0){
goto L5;
}
goto L1;
L7:;
si0=l3;
si1=4U;
si0<<=(si1&31);
si1=l4;
si2=400U;
si1+=si2;
si2=l4;
si3=l4;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0|=si1;
l4=si0;
si1=-16U;
si0+=si1;
si1=5847U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=l6;
si2=13U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
goto L4;
L6:;
si0=l1;
si1=262144U;
si0+=si1;
si1=524287U;
si0=si0 <= si1;
if(si0){
goto L10;
}
goto L1;
L10:;
si0=l3;
si1=4U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l4=si0;
si1=-16U;
si0+=si1;
si1=5847U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=13U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
goto L4;
L5:;
si0=l1;
si1=4U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l4=si0;
si1=-16U;
si0+=si1;
si1=5848U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l6;
si2=13U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
L4:;
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f174(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=365U;
si0+=si1;
l1=si0;
si1=l1;
si2=146097U;
si1=I32_DIV_S(si1,si2);
l2=si1;
si2=146097U;
si1*=si2;
si0-=si1;
l3=si0;
si1=146097U;
si0+=si1;
si1=l3;
si2=l3;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l4=si0;
si1=l4;
si2=365U;
si1=DIV_U(si1,si2);
l1=si1;
si2=365U;
si1*=si2;
si0-=si1;
l5=si0;
si1=l1;
si2=1081984U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=400U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
si1=l1;
si2=1081984U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0-=si1;
si1=365U;
si0+=si1;
l5=si0;
goto L4;
L6:;
si0=-1U;
si1=401U;
si2=1082496U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=145999U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=l6;
si0-=si1;
l5=si0;
L4:;
si0=0U;
l4=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si1=367U;
si0=si0 < si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
si1=400U;
si2=1079444U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l3;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=l2;
si1+=si2;
si2=400U;
si1*=si2;
si0+=si1;
l2=si0;
si1=262144U;
si0+=si1;
si1=524287U;
si0=si0 <= si1;
if(si0){
goto L7;
}
goto L1;
L7:;
si0=l5;
si1=4U;
si0<<=(si1&31);
si1=l1;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0|=si1;
l1=si0;
si1=-16U;
si0+=si1;
si1=5847U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=13U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
si0=1U;
l4=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f175(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=l1;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
l4=si0;
si1=400U;
si0=I32_DIV_S(si0,si1);
l5=si0;
si0=0U;
l6=si0;
sj0=l2;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
si1=l3;
si2=0U;
si1=(U32)((I32)si1>(I32)si2);
si0&=si1;
sj0=(U64)(si0);
sj1=l2;
sj0+=sj1;
sj1=86400ULL;
sj0=I64_DIV_S(sj0,sj1);
l2=sj0;
sj1=2147483648ULL;
sj0+=sj1;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
si0=0U;
l6=si0;
sj0=l2;
si0=(U32)(sj0);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=511U;
si1&=si2;
si2=l4;
si3=l5;
si4=400U;
si3*=si4;
si2-=si3;
l1=si2;
si3=400U;
si2+=si3;
si3=l1;
si4=l1;
si5=0U;
si4=(U32)((I32)si4<(I32)si5);
si2=si4?si2:si3;
l4=si2;
si3=365U;
si2*=si3;
si1+=si2;
si2=l4;
si3=1081984U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
si2=-1U;
si1+=si2;
l4=si1;
si2=l3;
si1+=si2;
l3=si1;
si2=l4;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L1;
}
si0=l3;
si1=l3;
si2=146097U;
si1=I32_DIV_S(si1,si2);
l7=si1;
si2=146097U;
si1*=si2;
si0-=si1;
l8=si0;
si1=146097U;
si0+=si1;
si1=l8;
si2=l8;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l6=si0;
si1=l6;
si2=365U;
si1=DIV_U(si1,si2);
l3=si1;
si2=365U;
si1*=si2;
si0-=si1;
l4=si0;
si1=l3;
si2=1081984U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si1=400U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=l3;
si2=1081984U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0-=si1;
si1=365U;
si0+=si1;
l4=si0;
goto L4;
L6:;
si0=-1U;
si1=401U;
si2=1082496U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=145999U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l9;
si0-=si1;
l4=si0;
L4:;
si0=0U;
l6=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=367U;
si0=si0 < si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=400U;
si2=1079444U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=l5;
si1+=si2;
si2=l7;
si1+=si2;
si2=l8;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
si2=400U;
si1*=si2;
si0+=si1;
l1=si0;
si1=262144U;
si0+=si1;
si1=524287U;
si0=si0 <= si1;
if(si0){
goto L7;
}
goto L1;
L7:;
si0=l4;
si1=4U;
si0<<=(si1&31);
si1=l3;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0|=si1;
l3=si0;
si1=-16U;
si0+=si1;
si1=5847U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=13U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f176(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=l1;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
l4=si0;
si1=400U;
si0=I32_DIV_S(si0,si1);
l5=si0;
si0=0U;
l6=si0;
sj0=l2;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
si1=l3;
si2=0U;
si1=(U32)((I32)si1>(I32)si2);
si0&=si1;
sj0=(U64)(si0);
sj1=l2;
sj0+=sj1;
sj1=86400ULL;
sj0=I64_DIV_S(sj0,sj1);
l2=sj0;
sj1=2147483648ULL;
sj0+=sj1;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
si0=0U;
l6=si0;
sj0=l2;
si0=(U32)(sj0);
l3=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=511U;
si1&=si2;
si2=l4;
si3=l5;
si4=400U;
si3*=si4;
si2-=si3;
l1=si2;
si3=400U;
si2+=si3;
si3=l1;
si4=l1;
si5=0U;
si4=(U32)((I32)si4<(I32)si5);
si2=si4?si2:si3;
l4=si2;
si3=365U;
si2*=si3;
si1+=si2;
si2=l4;
si3=1081984U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1+=si2;
si2=-1U;
si1+=si2;
l4=si1;
si2=l3;
si1-=si2;
l3=si1;
si2=l4;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L1;
}
si0=l3;
si1=l3;
si2=146097U;
si1=I32_DIV_S(si1,si2);
l7=si1;
si2=146097U;
si1*=si2;
si0-=si1;
l8=si0;
si1=146097U;
si0+=si1;
si1=l8;
si2=l8;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l6=si0;
si1=l6;
si2=365U;
si1=DIV_U(si1,si2);
l3=si1;
si2=365U;
si1*=si2;
si0-=si1;
l4=si0;
si1=l3;
si2=1081984U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si1=400U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=l3;
si2=1081984U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0-=si1;
si1=365U;
si0+=si1;
l4=si0;
goto L4;
L6:;
si0=-1U;
si1=401U;
si2=1082496U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=145999U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l9;
si0-=si1;
l4=si0;
L4:;
si0=0U;
l6=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=367U;
si0=si0 < si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=400U;
si2=1079444U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=l5;
si1+=si2;
si2=l7;
si1+=si2;
si2=l8;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
si2=400U;
si1*=si2;
si0+=si1;
l1=si0;
si1=262144U;
si0+=si1;
si1=524287U;
si0=si0 <= si1;
if(si0){
goto L7;
}
goto L1;
L7:;
si0=l4;
si1=4U;
si0<<=(si1&31);
si1=l3;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0|=si1;
l3=si0;
si1=-16U;
si0+=si1;
si1=5847U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=13U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f177(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=13U;
si1=(U32)((I32)si1>>(si2&31));
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l4=si0;
si0=l0;
si1=8191U;
si0&=si1;
l5=si0;
si1=5863U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l5;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
l4=si0;
L1:;
si0=l0;
si1=81920000U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=55U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=9U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=21474836480ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1079476U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
goto L4;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si1=l3;
si2=65535U;
si1&=si2;
si2=100U;
si1=DIV_U(si1,si2);
l6=si1;
si2=255U;
si1&=si2;
si2=10U;
si1=DIV_U(si1,si2);
l7=si1;
si2=48U;
si1+=si2;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
l5=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l0;
si1=l6;
si2=l7;
si3=10U;
si2*=si3;
si1-=si2;
si2=48U;
si1|=si2;
si2=255U;
si1&=si2;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l3;
si1=100U;
si0=I32_REM_S(si0,si1);
l3=si0;
si1=255U;
si0&=si1;
l1=si0;
si1=99U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si2=10U;
si1=DIV_U(si1,si2);
l1=si1;
si2=48U;
si1+=si2;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=l1;
si3=10U;
si2*=si3;
si1-=si2;
si2=48U;
si1|=si2;
si2=255U;
si1&=si2;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=45U;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l0;
si1=49U;
si2=48U;
si3=l4;
si4=9U;
si3>>=(si4&31);
l1=si3;
si4=255U;
si3&=si4;
l3=si3;
si4=9U;
si3=si3 > si4;
si1=si3?si1:si2;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si2=l1;
si3=246U;
si2+=si3;
si3=l3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=207U;
si1&=si2;
si2=48U;
si1|=si2;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l0;
si1=45U;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=1U;
l1=si0;
si0=l0;
si1=l4;
si2=4U;
si1>>=(si2&31);
si2=31U;
si1&=si2;
l4=si1;
si2=10U;
si1=DIV_U(si1,si2);
l3=si1;
si2=48U;
si1|=si2;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=l3;
si3=10U;
si2*=si3;
si1-=si2;
si2=48U;
si1|=si2;
si2=255U;
si1&=si2;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l1=si0;
goto L2;
L3:;
si0=1U;
l1=si0;
L2:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f178(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=13U;
si0=(U32)((I32)si0>>(si1&31));
l2=si0;
si1=-1U;
si0+=si1;
l0=si0;
si0=0U;
l3=si0;
si0=l1;
si1=8192U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L1;
}
si0=1U;
si1=l2;
si0-=si1;
si1=400U;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l2=si0;
si1=-146097U;
si0*=si1;
l3=si0;
si0=l2;
si1=400U;
si0*=si1;
si1=l0;
si0+=si1;
l0=si0;
L1:;
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=511U;
si1&=si2;
si0+=si1;
si1=l0;
si2=100U;
si1=I32_DIV_S(si1,si2);
l1=si1;
si0-=si1;
si1=l0;
si2=1461U;
si1*=si2;
si2=2U;
si1=(U32)((I32)si1>>(si2&31));
si0+=si1;
si1=l1;
si2=2U;
si1=(U32)((I32)si1>>(si2&31));
si0+=si1;
L0:;
return si0;
}

void f179(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3,si4;
si0=l2;
si1=2U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+2U);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=l2;
si2=2U;
si3=l2;
si4=1080124U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
si2=-2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f180(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
si1=3U;
si0+=si1;
l3=si0;
L1:;
{
si0=l1;
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si0=si0 == si1;
si1=l2;
si1=!(si1);
si0|=si1;
goto L0;
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l2;
si1=l2;
si2=l3;
si1=si1 != si2;
si0+=si1;
l2=si0;
si0=l5;
si1=l4;
si2=32U;
si1+=si2;
si2=l4;
si3=l4;
si4=-65U;
si3+=si4;
si4=255U;
si3&=si4;
si4=26U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L1;
}
L3:;
}
si0=0U;
L0:;
return si0;
}

void f181(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si1=l4;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
if(si0){
goto L7;
}
sj0=0ULL;
l6=sj0;
goto L3;
L7:;
si0=0U;
l7=si0;
sj0=0ULL;
l6=sj0;
L11:;
{
si0=l2;
si1=l7;
si0=si0 == si1;
l8=si0;
if(si0){
goto L3;
}
si0=l1;
si1=l7;
si0+=si1;
l9=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l7;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=l2;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l8;
if(si0){
goto L10;
}
goto L5;
L13:;
si0=l5;
sj1=l6;
sj2=l6;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=10ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l10;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
sj1=l11;
sj2=l6;
sj1+=sj2;
l6=sj1;
sj2=l11;
si1=(U64)((I64)sj1<(I64)sj2);
si0=si0 == si1;
if(si0){
goto L14;
}
L15:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L2;
L14:;
si0=l4;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L3;
L12:;
}
si0=l9;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
L10:;
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
L9:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L2;
L6:;
si0=1079624U;
si1=28U;
si2=1079652U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l2;
si2=l7;
si3=l2;
si4=1079608U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l4;
si1=l2;
si2=l4;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l1;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L17:;
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
L16:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l1;
si1=l2;
si2=l7;
si3=l2;
si4=1079592U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f182(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L3;
}
si0=4U;
l4=si0;
goto L2;
L3:;
si0=3U;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l6=sj0;
si0=1U;
l4=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l6=sj0;
si0=2U;
l4=si0;
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l6=sj0;
si0=3U;
l4=si0;
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l6=sj0;
si0=4U;
l4=si0;
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l6=sj0;
si0=5U;
l4=si0;
si0=l2;
si1=5U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l6=sj0;
si0=6U;
l4=si0;
si0=l2;
si1=6U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l6=sj0;
si0=7U;
l4=si0;
si0=l2;
si1=7U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l6=sj0;
si0=8U;
l4=si0;
si0=l2;
si1=8U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l6=sj0;
goto L5;
L6:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L7;
L8:;
si0=l1;
si1=l4;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
L7:;
si0=l1;
si1=l2;
si2=l4;
si3=l2;
si4=1079608U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l2;
si1=9U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=l2;
si1=10U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=l4;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si2=l4;
si3=l2;
si4=1079592U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l3;
sj1=l6;
sj2=0ULL;
si3=l4;
si4=3U;
si3<<=(si4&31);
si4=1079672U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l7=sj3;
sj4=l7;
sj5=63ULL;
sj4=(U64)((I64)sj4>>(sj5&63));
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l2;
si1=l4;
si0-=si1;
l8=si0;
si0=l1;
si1=l2;
si0+=si1;
l9=si0;
si0=0U;
l2=si0;
si0=l1;
si1=l4;
si0+=si1;
l10=si0;
l1=si0;
L11:;
{
si0=l2;
l5=si0;
si0=l1;
l2=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l8;
l5=si0;
goto L10;
L12:;
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
goto L13;
L14:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l4;
si1=31U;
si0&=si1;
l11=si0;
si0=l4;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l4=si0;
si0=l2;
si1=2U;
si0+=si1;
l1=si0;
goto L13;
L15:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l1=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l1;
si1=l11;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
si0=l2;
si1=3U;
si0+=si1;
l1=si0;
goto L13;
L16:;
si0=l1;
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
l4=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l8;
l5=si0;
goto L10;
L17:;
si0=l2;
si1=4U;
si0+=si1;
l1=si0;
L13:;
si0=l5;
si1=l2;
si0-=si1;
si1=l1;
si0+=si1;
l2=si0;
si0=l4;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l8;
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f183(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
si1=2U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=32U;
si0|=si1;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=32U;
si0|=si1;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L9;
case 4:
goto L2;
case 5:
goto L14;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L2;
case 9:
goto L15;
case 10:
goto L2;
case 11:
goto L2;
case 12:
goto L6;
case 13:
goto L10;
case 14:
goto L11;
case 15:
goto L2;
case 16:
goto L2;
case 17:
goto L2;
case 18:
goto L12;
default:
goto L2;
}
L15:;
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
si1=97U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=117U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=5U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=-108U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L2;
case 2:
goto L3;
default:
goto L2;
}
L14:;
si0=l4;
si1=255U;
si0&=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=1U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=98U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L13:;
si0=l4;
si1=255U;
si0&=si1;
si1=-112U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L2;
case 5:
goto L4;
default:
goto L2;
}
L12:;
si0=l4;
si1=255U;
si0&=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=8U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=112U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L11:;
si0=l4;
si1=255U;
si0&=si1;
si1=99U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=9U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L10:;
si0=l4;
si1=255U;
si0&=si1;
si1=111U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=10U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=118U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L9:;
si0=l4;
si1=255U;
si0&=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=11U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=99U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L8:;
si0=0U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=110U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L7:;
si0=6U;
l4=si0;
goto L3;
L6:;
si0=l4;
si1=255U;
si0&=si1;
si1=97U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=2U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=-114U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L2;
case 5:
goto L2;
case 6:
goto L2;
case 7:
goto L16;
default:
goto L2;
}
L16:;
si0=4U;
l4=si0;
goto L3;
L5:;
si0=3U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=114U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L4:;
si0=7U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=103U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=0U;
l3=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+3U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l2;
si1=-3U;
si0+=si1;
l3=si0;
L18:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L17:;
si0=l1;
si1=l2;
si2=3U;
si3=l2;
si4=1079752U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f184(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
si1=2U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=32U;
si0|=si1;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=32U;
si0|=si1;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=-102U;
si0+=si1;
switch(si0){
case 0:
goto L9;
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
goto L12;
case 8:
goto L3;
case 9:
goto L3;
case 10:
goto L3;
case 11:
goto L3;
case 12:
goto L3;
case 13:
goto L8;
case 14:
goto L11;
case 15:
goto L3;
case 16:
goto L3;
case 17:
goto L10;
default:
goto L3;
}
L12:;
si0=l4;
si1=255U;
si0&=si1;
si1=111U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=110U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L3;
L11:;
si0=l4;
si1=255U;
si0&=si1;
si1=-104U;
si0+=si1;
switch(si0){
case 0:
goto L6;
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
goto L3;
case 12:
goto L3;
case 13:
goto L7;
default:
goto L3;
}
L10:;
si0=l4;
si1=255U;
si0&=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=2U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=100U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L3;
L9:;
si0=l4;
si1=255U;
si0&=si1;
si1=114U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=4U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=105U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L2;
L8:;
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
si1=97U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=117U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L7:;
si0=1U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=101U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L3;
L6:;
si0=3U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=117U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L3;
L5:;
si0=5U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L3;
L4:;
si0=6U;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=110U;
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=0U;
l3=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+3U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l2;
si1=-3U;
si0+=si1;
l3=si0;
L14:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=l1;
si1=l2;
si2=3U;
si3=l2;
si4=1079768U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f185(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l3;
si1=l1;
si2=l2;
f183(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l2=si1;
si2=1079872U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
l8=si0;
goto L3;
L6:;
si0=l5;
si1=12U;
si2=1079784U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=1079868U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l6;
si1=l7;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l4;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L7:;
si0=l2;
si1=l7;
si0+=si1;
l9=si0;
si0=l4;
si1=l7;
si0+=si1;
l8=si0;
si0=0U;
l1=si0;
L10:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
if(si0){
goto L11;
}
si0=l4;
l8=si0;
goto L3;
L11:;
si0=l2;
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
l8=si0;
goto L3;
L12:;
si0=l4;
si1=l1;
si0+=si1;
l10=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=l2;
si2=l9;
si1=si1 != si2;
si0+=si1;
l2=si0;
si0=l11;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=32U;
si1+=si2;
si2=l10;
si3=l10;
si4=-65U;
si3+=si4;
si4=255U;
si3&=si4;
si4=26U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L10;
}
}
si0=l4;
l8=si0;
goto L3;
L9:;
si0=l4;
si1=l8;
si2=l2;
si3=l9;
si2=si2 != si3;
si3=l2;
si4=0U;
si3=si3 != si4;
si2&=si3;
l2=si2;
si0=si2?si0:si1;
l1=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l1;
l8=si0;
goto L3;
L13:;
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=l7;
si0-=si1;
l6=si0;
goto L3;
L16:;
si0=l8;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l6;
si1=l7;
si0-=si1;
l6=si0;
goto L3;
L15:;
si0=l4;
si1=l6;
si2=l7;
si3=l6;
si4=1079816U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
si1=l6;
si2=0U;
si3=l7;
si4=1079800U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f186(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l3;
si1=l1;
si2=l2;
f184(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l4=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
l2=si1;
si2=1080024U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=1080020U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l6;
si1=l7;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L1;
L7:;
si0=l5;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L6:;
si0=l2;
si1=l7;
si0+=si1;
l8=si0;
si0=l5;
si1=l7;
si0+=si1;
l9=si0;
si0=0U;
l1=si0;
L9:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l8;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l1;
si0+=si1;
l10=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=l2;
si2=l8;
si1=si1 != si2;
si0+=si1;
l2=si0;
si0=l11;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=32U;
si1+=si2;
si2=l10;
si3=l10;
si4=-65U;
si3+=si4;
si4=255U;
si3&=si4;
si4=26U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L3;
}
L8:;
si0=l5;
si1=l9;
si2=l2;
si3=l8;
si2=si2 != si3;
si3=l2;
si4=0U;
si3=si3 != si4;
si2&=si3;
l2=si2;
si0=si2?si0:si1;
l1=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=l1;
l5=si0;
goto L3;
L10:;
si0=l6;
si1=l7;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L4;
L13:;
si0=l9;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
L12:;
si0=l5;
si1=l6;
si2=l7;
si3=l6;
si4=1079980U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l6;
si1=l7;
si0-=si1;
l6=si0;
si0=l9;
l5=si0;
L3:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=l6;
si2=0U;
si3=l7;
si4=1079964U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f187(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3,si4;
si0=l2;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=0U;
l3=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=-1U;
si0+=si1;
l3=si0;
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l1;
si1=l2;
si2=1U;
si3=l2;
si4=1080076U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f188(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L3;
}
si0=4U;
l5=si0;
goto L2;
L3:;
si0=0U;
l6=si0;
si0=3U;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L2;
case 2:
goto L5;
default:
goto L2;
}
L5:;
si0=1U;
l6=si0;
L4:;
si0=4U;
l5=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
l7=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l7;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=3U;
l5=si0;
goto L6;
L10:;
si0=3U;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=0U;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l9=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+3U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l2;
si1=-3U;
si0+=si1;
l5=si0;
L11:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=3U;
si1+=si2;
si2=l5;
f220(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l2;
si2=255U;
si1&=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
l2=si2;
si0=si2?si0:si1;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
si1=-54U;
si0+=si1;
si1=255U;
si0&=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L16:;
si0=l5;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L13;
}
L15:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L14:;
si0=l3;
if(si0){
goto L17;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L17:;
si0=l1;
if(si0){
goto L18;
}
si0=0U;
l1=si0;
si0=0U;
l5=si0;
goto L12;
L18:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L13:;
si0=l4;
si1=l2;
si2=l1;
f179(i,si0,si1,si2);
si0=l5;
si1=l3;
si2=10U;
si1*=si2;
si0+=si1;
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=60U;
si0*=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L12:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=l1;
si3=l7;
si4=10U;
si3*=si4;
si4=l8;
si3+=si4;
si4=-16U;
si3+=si4;
si4=255U;
si3&=si4;
si4=3600U;
si3*=si4;
si2+=si3;
l2=si2;
si1-=si2;
si2=l2;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L9:;
si0=l1;
si1=l2;
si2=1U;
si3=l2;
si4=1080092U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si0+=si1;
si1=l9;
si2=2U;
si3=l9;
si4=1080108U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f189(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-85U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L5;
case 2:
goto L5;
case 3:
goto L5;
case 4:
goto L5;
case 5:
goto L6;
case 6:
goto L5;
case 7:
goto L5;
case 8:
goto L5;
case 9:
goto L5;
case 10:
goto L5;
case 11:
goto L5;
case 12:
goto L5;
case 13:
goto L5;
case 14:
goto L5;
case 15:
goto L5;
case 16:
goto L5;
case 17:
goto L5;
case 18:
goto L5;
case 19:
goto L5;
case 20:
goto L5;
case 21:
goto L5;
case 22:
goto L5;
case 23:
goto L5;
case 24:
goto L5;
case 25:
goto L5;
case 26:
goto L5;
case 27:
goto L5;
case 28:
goto L5;
case 29:
goto L5;
case 30:
goto L5;
case 31:
goto L5;
case 32:
goto L4;
case 33:
goto L5;
case 34:
goto L5;
case 35:
goto L5;
case 36:
goto L5;
case 37:
goto L6;
default:
goto L5;
}
L6:;
si0=0U;
l3=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=-1U;
si0+=si1;
l3=si0;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l0;
si1=l1;
si2=l2;
si3=0U;
f188(i,si0,si1,si2,si3);
goto L0;
L4:;
si0=l2;
si1=2U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L0;
L8:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=223U;
si0&=si1;
si1=84U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=-33U;
si0&=si1;
si1=255U;
si0&=si1;
si1=67U;
si0=si0 == si1;
if(si0){
goto L9;
}
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L0;
L9:;
si0=0U;
l3=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+3U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=-3U;
si0+=si1;
l3=si0;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l1;
si1=l2;
si2=1U;
si3=l2;
si4=1080140U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
si2=3U;
si3=l2;
si4=1080156U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f190(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L3;
}
si0=4U;
l4=si0;
goto L2;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-85U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L13;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L13;
case 5:
goto L12;
case 6:
goto L13;
case 7:
goto L13;
case 8:
goto L13;
case 9:
goto L13;
case 10:
goto L13;
case 11:
goto L13;
case 12:
goto L13;
case 13:
goto L13;
case 14:
goto L13;
case 15:
goto L13;
case 16:
goto L13;
case 17:
goto L13;
case 18:
goto L13;
case 19:
goto L13;
case 20:
goto L13;
case 21:
goto L13;
case 22:
goto L13;
case 23:
goto L13;
case 24:
goto L13;
case 25:
goto L13;
case 26:
goto L13;
case 27:
goto L13;
case 28:
goto L13;
case 29:
goto L13;
case 30:
goto L13;
case 31:
goto L13;
case 32:
goto L10;
case 33:
goto L13;
case 34:
goto L13;
case 35:
goto L13;
case 36:
goto L13;
case 37:
goto L12;
default:
goto L13;
}
L13:;
si0=0U;
l6=si0;
si0=3U;
l4=si0;
si0=l5;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L2;
case 2:
goto L15;
default:
goto L2;
}
L15:;
si0=1U;
l6=si0;
L14:;
si0=4U;
l4=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
l5=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=3U;
l4=si0;
goto L4;
L16:;
si0=3U;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l7=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=4U;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l8=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+3U);
l9=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=3U;
l4=si0;
si0=l9;
si1=58U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=-3U;
si0+=si1;
l4=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+4U);
l8=si0;
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L18;
}
si0=l1;
si1=3U;
si0+=si1;
si1=l4;
si2=1U;
si3=l4;
si4=1080076U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L18:;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L5;
}
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L12:;
si0=0U;
l4=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
L19:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L10:;
si0=l2;
si1=2U;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L20:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=223U;
si0&=si1;
si1=84U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=-33U;
si0&=si1;
si1=255U;
si0&=si1;
si1=67U;
si0=si0 == si1;
if(si0){
goto L21;
}
L22:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L21:;
si0=0U;
l4=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+3U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l2;
si1=-3U;
si0+=si1;
l4=si0;
L23:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l1;
si1=l2;
si2=1U;
si3=l2;
si4=1080092U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si0+=si1;
si1=l8;
si2=2U;
si3=l8;
si4=1080108U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l1;
si1=l2;
si2=1U;
si3=l2;
si4=1080140U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l1;
si1=l2;
si2=3U;
si3=l2;
si4=1080156U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l4=si0;
si0=l8;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l8;
si1=-54U;
si0+=si1;
si1=255U;
si0&=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l4;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L26:;
si0=l4;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L24;
}
L25:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L24:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=l2;
f179(i,si0,si1,si2);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
si2=l8;
si3=10U;
si2*=si3;
si3=l4;
si2+=si3;
si3=-16U;
si2+=si3;
si3=255U;
si2&=si3;
si3=60U;
si2*=si3;
si3=l5;
si4=10U;
si3*=si4;
si4=l7;
si3+=si4;
si4=-16U;
si3+=si4;
si4=255U;
si3&=si4;
si4=3600U;
si3*=si4;
si2+=si3;
l2=si2;
si1-=si2;
si2=l2;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f191(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L10;
}
si0=4U;
l4=si0;
goto L9;
L10:;
si0=0U;
l4=si0;
L12:;
{
si0=l1;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=223U;
si0&=si1;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l2;
l4=si0;
L11:;
si0=l4;
if(si0){
goto L14;
}
si0=0U;
l5=si0;
si0=3U;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L9;
case 2:
goto L16;
default:
goto L9;
}
L16:;
si0=1U;
l5=si0;
L15:;
si0=l2;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=4U;
l4=si0;
goto L9;
L17:;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
l6=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=3U;
l4=si0;
si0=l2;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=4U;
l4=si0;
goto L9;
L18:;
si0=l6;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l7=si0;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=4U;
l4=si0;
goto L9;
L19:;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+3U);
l8=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=4U;
l4=si0;
si0=l2;
si1=-3U;
si0+=si1;
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l9=si0;
si0=l8;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=0U;
si1=3U;
si2=l9;
si3=-48U;
si2+=si3;
si3=255U;
si2&=si3;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=3U;
si2=l8;
si3=-54U;
si2+=si3;
si3=255U;
si2&=si3;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
goto L9;
L14:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L1;
L13:;
si0=3U;
l4=si0;
si0=l9;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L3;
}
L9:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L8:;
si0=l1;
si1=l4;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L7:;
si0=l1;
si1=l4;
si0+=si1;
l5=si0;
si0=l2;
si1=l4;
si0-=si1;
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=103U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=109U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l4;
si1=3U;
si0=si0 == si1;
if(si0){
goto L25;
}
L26:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=117U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
L27:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=100U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l4;
si1=3U;
si0=si0 == si1;
if(si0){
goto L24;
}
L28:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=115U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
si1=3U;
si0=si0 == si1;
if(si0){
goto L23;
}
L29:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=99U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=100U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l4;
si1=3U;
si0=si0 == si1;
if(si0){
goto L23;
}
L30:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=99U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=115U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l4;
si1=3U;
si0=si0 != si1;
if(si0){
goto L31;
}
L32:;
si0=l4;
si1=1080204U;
si0+=si1;
l2=si0;
si1=1080207U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l2;
si0=!(si0);
if(si0){
goto L22;
}
L31:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=109U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=100U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l4;
si1=3U;
si0=si0 != si1;
if(si0){
goto L33;
}
L34:;
si0=l4;
si1=1080207U;
si0+=si1;
l2=si0;
si1=1080210U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l2;
si0=!(si0);
if(si0){
goto L22;
}
L33:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=109U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=115U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si1=32U;
si0+=si1;
si1=l2;
si2=l2;
si3=-65U;
si2+=si3;
si3=255U;
si2&=si3;
si3=26U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
si1=116U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l4;
si1=3U;
si0=si0 != si1;
if(si0){
goto L35;
}
L36:;
si0=l4;
si1=1080210U;
si0+=si1;
l2=si0;
si1=1080213U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
L35:;
si0=l1;
si1=l4;
si2=1080213U;
si0=f180(i,si0,si1,si2);
if(si0){
goto L21;
}
si0=l1;
si1=l4;
si2=1080216U;
si0=f180(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L20;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L25:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L24:;
si0=l0;
sj1=-61847529062399ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L23:;
si0=l0;
sj1=-77309411327999ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L22:;
si0=l0;
sj1=-92771293593599ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L21:;
si0=l0;
sj1=-108233175859199ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L20:;
si0=l0;
sj1=-123695058124799ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L6:;
si0=l1;
si1=l2;
si2=1U;
si3=l2;
si4=1080092U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l1;
si1=1U;
si0+=si1;
si1=l4;
si2=2U;
si3=l4;
si4=1080108U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=3U;
si1+=si2;
si2=l2;
f179(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l10=sj0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
si2=l8;
si3=10U;
si2*=si3;
si3=l9;
si2+=si3;
si3=-16U;
si2+=si3;
si3=255U;
si2&=si3;
si3=60U;
si2*=si3;
si3=l6;
si4=10U;
si3*=si4;
si4=l7;
si3+=si4;
si4=-16U;
si3+=si4;
si4=255U;
si3&=si4;
si4=3600U;
si3*=si4;
si2+=si3;
l4=si2;
si1-=si2;
si2=l4;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l1;
si1=l2;
si2=0U;
si3=l4;
si4=1080188U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f192(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f219(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=0U;
l1=si0;
si0=0U;
l2=si0;
L4:;
{
si0=l5;
si1=l2;
si0+=si1;
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=l1;
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
case 2:
goto L7;
default:
goto L10;
}
L11:;
si0=l7;
si1=-40U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
default:
goto L12;
}
L12:;
si0=2U;
l1=si0;
si0=l7;
si1=92U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L7;
L10:;
si0=1U;
l1=si0;
si0=1U;
l8=si0;
si0=l7;
si1=40U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L5;
L9:;
si0=1U;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
goto L5;
L8:;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
L7:;
si0=1U;
l1=si0;
goto L5;
L6:;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l4;
si1=-1U;
si0+=si1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=l6;
si1=1U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
L14:;
si0=l0;
si1=l2;
si2=-1U;
si1^=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l5;
si1=l4;
si2=l1;
si3=l4;
si4=1080220U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f193(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
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
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f194(rustpythonInstance*i,U32 l0) {
L0:;
}

void f195(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
sj2=l2;
sj3=-1ULL;
sj2^=sj3;
sj3=0ULL;
sj4=l2;
sj3-=sj4;
si4=l3;
sj2=si4?sj2:sj3;
si3=1000000000U;
si4=l3;
si3-=si4;
si4=0U;
si5=l3;
si3=si5?si3:si4;
f213(i,si0,si1,sj2,si3);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l2=sj0;
sj1=-17592186044416ULL;
sj0+=sj1;
sj1=-35184372088831ULL;
si0=sj0 < sj1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=0U;
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
sj2=0ULL;
sj3=l2;
sj2-=sj3;
si3=0U;
f176(i,si0,si1,sj2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f196(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=1U;
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si0=f177(i,si0,si1);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=84U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si0=f214(i,si0,si1);
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

void f197(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
sj1=1ULL;
si2=l1;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l2=si0;
if(si0){
goto L2;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l4=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l1;
sj1=l3;
sj2=l4;
sj3=3294967296ULL;
sj2*=sj3;
sj1+=sj2;
i64_store32(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=l1;
si2=48U;
si1+=si2;
sj2=0ULL;
si3=0U;
f15046(i,si0,si1,sj2,si3);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f198(i,si0,sj1,si2);
si0=l0;
si1=l1;
f199(i,si0,si1);
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l1;
si1=l2;
i32_store16(&i->m0,(U64)si0,si1);
si0=1986890U;
si1=43U;
si2=l1;
si3=1992124U;
si4=1992172U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1080564U;
si1=29U;
si2=l1;
si3=64U;
si2+=si3;
si3=1080596U;
si4=1080612U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f198(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=1970U;
l3=si0;
sj0=l1;
sj1=86400ULL;
sj0=I64_DIV_S(sj0,sj1);
l4=sj0;
l5=sj0;
L1:;
{
sj0=365ULL;
l6=sj0;
si0=l3;
si1=3U;
si0&=si1;
l7=si0;
if(si0){
goto L2;
}
sj0=366ULL;
sj1=365ULL;
sj2=366ULL;
si3=l3;
si4=400U;
si3=I32_REM_S(si3,si4);
sj1=si3?sj1:sj2;
si2=l3;
si3=100U;
si2=I32_REM_S(si2,si3);
sj0=si2?sj0:sj1;
l6=sj0;
L2:;
sj0=l5;
sj1=l6;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L4;
}
si0=l3;
si1=100U;
si0=I32_REM_S(si0,si1);
l8=si0;
si0=0U;
l9=si0;
si0=l3;
si1=400U;
si0=I32_REM_S(si0,si1);
l10=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
sj0=l5;
l6=sj0;
sj0=l5;
sj1=31ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=1U;
l9=si0;
sj0=l5;
sj1=-31ULL;
sj0+=sj1;
l6=sj0;
sj1=28ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=2U;
l9=si0;
sj0=l5;
sj1=-59ULL;
sj0+=sj1;
l6=sj0;
sj1=31ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=3U;
l9=si0;
sj0=l5;
sj1=-90ULL;
sj0+=sj1;
l6=sj0;
sj1=30ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=4U;
l9=si0;
sj0=l5;
sj1=-120ULL;
sj0+=sj1;
l6=sj0;
sj1=31ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=5U;
l9=si0;
sj0=l5;
sj1=-151ULL;
sj0+=sj1;
l6=sj0;
sj1=30ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=6U;
l9=si0;
sj0=l5;
sj1=-181ULL;
sj0+=sj1;
l6=sj0;
sj1=31ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=7U;
l9=si0;
sj0=l5;
sj1=-212ULL;
sj0+=sj1;
l6=sj0;
sj1=31ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=8U;
l9=si0;
sj0=l5;
sj1=-243ULL;
sj0+=sj1;
l6=sj0;
sj1=30ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=9U;
l9=si0;
sj0=l5;
sj1=-273ULL;
sj0+=sj1;
l6=sj0;
sj1=31ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=10U;
l9=si0;
sj0=l5;
sj1=-304ULL;
sj0+=sj1;
l6=sj0;
sj1=30ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=11U;
l9=si0;
sj0=l5;
sj1=-334ULL;
sj0+=sj1;
l6=sj0;
sj1=30ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
goto L3;
L6:;
sj0=l5;
l6=sj0;
sj0=l5;
si1=l8;
si2=0U;
si1=si1 != si2;
si2=l10;
si2=!(si2);
si1|=si2;
l8=si1;
si2=96U;
si1*=si2;
l7=si1;
si2=1080648U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=1U;
l9=si0;
sj0=l5;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l7;
si2=1080656U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=2U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l8;
si2=96U;
si1*=si2;
l7=si1;
si2=1080664U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=3U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l7;
si2=1080672U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=4U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l8;
si2=96U;
si1*=si2;
l7=si1;
si2=1080680U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=5U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l7;
si2=1080688U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=6U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l8;
si2=96U;
si1*=si2;
l7=si1;
si2=1080696U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=7U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l7;
si2=1080704U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=8U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l8;
si2=96U;
si1*=si2;
l7=si1;
si2=1080712U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=9U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l7;
si2=1080720U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=10U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l8;
si2=96U;
si1*=si2;
l7=si1;
si2=1080728U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
si0=11U;
l9=si0;
sj0=l6;
sj1=l11;
sj0-=sj1;
l6=sj0;
si1=l7;
si2=1080736U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
L5:;
si0=12U;
si1=12U;
si2=1080628U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
sj0=l5;
sj1=l6;
sj0-=sj1;
l5=sj0;
goto L1;
L3:;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
sj1=l5;
i64_store32(&i->m0,(U64)si0+28U,sj1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l3;
si2=-1900U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
sj1=l4;
sj2=4ULL;
sj1+=sj2;
sj2=7ULL;
sj1=I64_REM_S(sj1,sj2);
i64_store32(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l6;
si1=(U32)(sj1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=l1;
sj2=l4;
sj3=86400ULL;
sj2*=sj3;
sj1-=sj2;
si1=(U32)(sj1);
l3=si1;
si2=3600U;
si1=I32_DIV_S(si1,si2);
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
si2=60U;
si1=I32_REM_S(si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=l7;
si3=3600U;
si2*=si3;
si1-=si2;
si1=(U32)(I32)(I16)(U16)(si1);
si2=60U;
si1=I32_DIV_S(si1,si2);
si1=(U32)(I32)(I16)(U16)(si1);
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f199(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=59U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=59U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l4;
l3=si0;
goto L1;
L2:;
si0=l1;
si1=59U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=1000000000U;
si1*=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+40U);
si1+=si2;
si2=1129542144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0+=si1;
l5=si0;
si1=366U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=1900U;
si0+=si1;
l7=si0;
si1=400U;
si0=I32_REM_S(si0,si1);
l4=si0;
si0=l6;
si1=264044U;
si0+=si1;
si1=524287U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
si1=4U;
si0<<=(si1&31);
si1=l4;
si2=400U;
si1+=si2;
si2=l4;
si3=l4;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0|=si1;
l4=si0;
si1=-16U;
si0+=si1;
si1=5848U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si1=1999999999U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=59U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=59U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si1=-86400U;
si0+=si1;
si1=-172800U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l2;
si1=l4;
si2=l7;
si3=13U;
si2<<=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l5;
si2=3600U;
si1*=si2;
si2=l3;
si1+=si2;
si2=l6;
si3=60U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=0U;
si3=l1;
si2-=si3;
sj2=(U64)(I64)(I32)(si2);
si3=0U;
f213(i,si0,si1,sj2,si3);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
sj1=-17592186044416ULL;
sj0+=sj1;
sj1=-35184372088831ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
sj2=l9;
si3=0U;
f175(i,si0,si1,sj2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=1079200U;
si1=28U;
si2=1079460U;
f703(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1080412U;
si1=12U;
si2=1080532U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1080236U;
si1=43U;
si2=1080548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1081036U;
si1=37U;
si2=1081188U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f200(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=3600U;
si0=DIV_U(si0,si1);
l5=si0;
si0=l4;
si1=60U;
si0=DIV_U(si0,si1);
l6=si0;
si1=60U;
si0=REM_U(si0,si1);
l7=si0;
si0=l4;
si1=l6;
si2=60U;
si1*=si2;
si0-=si1;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=8191U;
si0&=si1;
l4=si0;
si1=5863U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=-1U;
l4=si0;
sj0=0ULL;
l9=sj0;
goto L1;
L2:;
si0=l4;
si1=3U;
si0>>=(si1&31);
si1=1083744U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=l4;
si0+=si1;
si1=9U;
si0>>=(si1&31);
si1=-1U;
si0+=si1;
l4=si0;
si0=l10;
si1=l6;
si0+=si1;
si1=4U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
sj0=(U64)(si0);
l9=sj0;
L1:;
si0=l3;
si1=l8;
sj1=(U64)(si1);
sj2=-62170070400ULL;
sj1|=sj2;
si2=l5;
sj2=(U64)(si2);
sj3=3600ULL;
sj2*=sj3;
sj1+=sj2;
si2=l7;
si3=60U;
si2*=si3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=1899ULL;
sj3=1900ULL;
si4=l4;
si5=2U;
si4=(U32)((I32)si4<(I32)si5);
l5=si4;
sj2=si4?sj2:sj3;
si3=l6;
si4=13U;
si3=(U32)((I32)si3>>(si4&31));
si4=-1900U;
si3+=si4;
sj3=(U64)(I64)(I32)(si3);
sj2+=sj3;
l11=sj2;
sj3=365ULL;
sj2*=sj3;
sj3=l9;
sj2+=sj3;
sj3=13ULL;
sj4=1ULL;
si5=l5;
sj3=si5?sj3:sj4;
si4=l4;
sj4=(U64)(I64)(I32)(si4);
sj3+=sj4;
l9=sj3;
sj4=30ULL;
sj3*=sj4;
sj2+=sj3;
sj3=l11;
si3=(U32)(sj3);
l4=si3;
si4=4U;
si3=I32_DIV_S(si3,si4);
sj3=(U64)(I64)(I32)(si3);
sj2+=sj3;
si3=l4;
si4=-100U;
si3=I32_DIV_S(si3,si4);
sj3=(U64)(I64)(I32)(si3);
sj2+=sj3;
si3=l4;
si4=400U;
si3=I32_DIV_S(si3,si4);
sj3=(U64)(I64)(I32)(si3);
sj2+=sj3;
sj3=l9;
si3=(U32)(sj3);
si4=3U;
si3*=si4;
si4=3U;
si3+=si4;
si4=255U;
si3&=si4;
si4=5U;
si3=DIV_U(si3,si4);
sj3=(U64)(si3);
sj2+=sj3;
sj3=86400ULL;
sj2*=sj3;
sj1+=sj2;
si2=0U;
f198(i,si0,sj1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L3;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f199(i,si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
si1=l3;
si2=40U;
si1+=si2;
si2=1080280U;
si3=l3;
si4=48U;
si3+=si4;
si4=1080396U;
f222(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f201(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
sj1=1ULL;
si2=l1;
si3=8U;
si2+=si3;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l2=si0;
if(si0){
goto L3;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l3=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l4=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=l3;
sj2=l4;
sj3=3294967296ULL;
sj2*=sj3;
sj1+=sj2;
i64_store32(&i->m0,(U64)si0+40U,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj2=0ULL;
si3=0U;
f15046(i,si0,si1,sj2,si3);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l3=sj0;
sj1=l3;
sj2=86400ULL;
sj1=I64_DIV_S(sj1,sj2);
l4=sj1;
sj2=86400ULL;
sj1*=sj2;
sj0-=sj1;
l3=sj0;
sj1=63ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l4;
sj0+=sj1;
l4=sj0;
sj1=-2147483648ULL;
sj0+=sj1;
sj1=-4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l4;
si0=(U32)(sj0);
l2=si0;
si1=719163U;
si0+=si1;
l5=si0;
si1=l2;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=l5;
f174(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l3;
sj2=86400ULL;
sj1+=sj2;
sj2=l3;
sj3=l3;
sj4=0ULL;
si3=(U64)((I64)sj3<(I64)sj4);
sj1=si3?sj1:sj2;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l1;
si1=l2;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=1986890U;
si1=43U;
si2=l1;
si3=8U;
si2+=si3;
si3=1992124U;
si4=1992172U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=1080564U;
si1=29U;
si2=l1;
si3=48U;
si2+=si3;
si3=1080596U;
si4=1080960U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1080236U;
si1=43U;
si2=1080944U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f202(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
f216(i,si0);
UNREACHABLE;
L0:;
}

void f203(rustpythonInstance*i,U32 l0) {
L0:;
}

void f204(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l0;
si1=1080976U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f205(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1080976U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f206(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
sj0=i64_load32_s(&i->m0,(U64)si0+12U);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj2=l4;
si3=0U;
f213(i,si0,si1,sj2,si3);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l4=sj0;
sj1=-17592186044416ULL;
sj0+=sj1;
sj1=-35184372088831ULL;
si0=sj0 < sj1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+40U);
sj2=l4;
si3=0U;
f175(i,si0,si1,sj2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=2000000000U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si0=f177(i,si0,si1);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=84U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=1U;
l3=si0;
goto L3;
L4:;
si0=1U;
l3=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si0=f214(i,si0,si1);
if(si0){
goto L3;
}
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si0=f207(i,si0,si1);
l3=si0;
L3:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L2:;
si0=1081036U;
si1=37U;
si2=1081188U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1080992U;
si1=43U;
si2=1081368U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f207(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=45U;
si2=43U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3);
l0=si3;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=l0;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l3=si2;
si1^=si2;
si2=l3;
si1-=si2;
l0=si1;
si2=l0;
si3=60U;
si2=I32_DIV_S(si2,si3);
l3=si2;
si3=60U;
si2*=si3;
si1-=si2;
l0=si1;
si2=60U;
si1+=si2;
si2=l0;
si3=l0;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=l3;
si1+=si2;
l0=si1;
si2=l0;
si3=60U;
si2=I32_DIV_S(si2,si3);
l3=si2;
si3=60U;
si2*=si3;
si1-=si2;
l0=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si2=60U;
si1+=si2;
si2=l0;
si3=l0;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
if(si0){
goto L2;
}
si0=l2;
si1=204U;
si0+=si1;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=196U;
si0+=si1;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l2;
si1=148U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=128U;
si0+=si1;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=60U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=104U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1081312U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l2;
si1=52U;
si0+=si1;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=180U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=176U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=168U;
si0+=si1;
sj1=12884901920ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=160U;
si0+=si1;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=148U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=128U;
si0+=si1;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=60U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=104U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l2;
si1=1081336U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=184U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
L1:;
si0=l2;
si1=208U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f208(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
sj2=0ULL;
si3=0U;
f15046(i,si0,si1,sj2,si3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l1=sj0;
goto L1;
L2:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l1=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=0ULL;
sj2=l1;
sj1-=sj2;
si2=l3;
si3=48U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
sj0=si2?sj0:sj1;
l1=sj0;
si0=1000000000U;
si1=l2;
si0-=si1;
si1=0U;
si2=l2;
si0=si2?si0:si1;
l4=si0;
L1:;
sj0=l1;
sj1=l1;
sj2=86400ULL;
sj1=I64_DIV_S(sj1,sj2);
l5=sj1;
sj2=86400ULL;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj1=63ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l5;
sj0+=sj1;
l5=sj0;
sj1=-2147483648ULL;
sj0+=sj1;
sj1=-4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
sj0=l5;
si0=(U32)(sj0);
l2=si0;
si1=719163U;
si0+=si1;
l6=si0;
si1=l2;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
f174(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=l1;
sj2=86400ULL;
sj1+=sj2;
sj2=l1;
sj3=l1;
sj4=0ULL;
si3=(U64)((I64)sj3<(I64)sj4);
sj1=si3?sj1:sj2;
i64_store32(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=0U;
f200(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
switch(si0){
case 0:
goto L6;
case 1:
goto L7;
case 2:
goto L5;
default:
goto L6;
}
L7:;
UNREACHABLE;
L6:;
si0=1081384U;
si1=18U;
si2=1081508U;
f202(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=128U;
si0+=si1;
si1=12U;
si0+=si1;
si1=58U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1081564U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=58U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l3;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=1081580U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1081384U;
si1=18U;
si2=1081508U;
f202(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f209(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
sj2=(U64)(I64)(I32)(si2);
si3=0U;
f213(i,si0,si1,sj2,si3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l6=sj0;
sj1=-17592186044416ULL;
sj0+=sj1;
sj1=-35184372088831ULL;
si0=sj0 < sj1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
sj2=l6;
si3=0U;
f175(i,si0,si1,sj2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=2000000000U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1081036U;
si1=37U;
si2=1081188U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1080992U;
si1=43U;
si2=1081368U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f210(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f211(rustpythonInstance*i,U32 l0,U32 l1) {
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
f210(i,si0,si1,si2,si3);
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

void f212(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f210(i,si0,si1,si2,si3);
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

void f213(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=999999999U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=2000000000U;
si1=l1;
si0-=si1;
l6=si0;
si1=1000000000U;
si0=DIV_U(si0,si1);
l7=si0;
sj0=(U64)(si0);
l8=sj0;
sj1=l2;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L3;
}
si0=l6;
si1=l7;
si2=1000000000U;
si1*=si2;
si0-=si1;
l6=si0;
si1=l3;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
sj0=l8;
sj1=l2;
si0=sj0 == sj1;
if(si0){
goto L3;
}
L4:;
si0=0U;
l1=si0;
si0=l3;
si1=l6;
si0-=si1;
l6=si0;
si1=1000000000U;
si0+=si1;
si1=l6;
si2=l6;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l3=si0;
sj0=l2;
sj1=l8;
sj0-=sj1;
si1=l6;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
sj1=(U64)(I64)(I32)(si1);
sj0+=sj1;
l2=sj0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
goto L2;
L3:;
sj0=0ULL;
si1=l1;
si2=l1;
si3=1000000000U;
si2=DIV_U(si2,si3);
l7=si2;
si3=1000000000U;
si2*=si3;
si1-=si2;
l6=si1;
sj1=(U64)(si1);
l9=sj1;
sj0-=sj1;
l10=sj0;
sj1=63ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
si1=l7;
sj1=(U64)(si1);
l8=sj1;
sj0-=sj1;
l11=sj0;
sj1=l2;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L6;
}
sj0=l11;
sj1=l2;
si0=sj0 != sj1;
if(si0){
goto L7;
}
sj0=1000000000ULL;
sj1=l9;
sj0-=sj1;
sj1=l10;
si2=l6;
sj0=si2?sj0:sj1;
si0=(U32)(sj0);
si1=l3;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
L7:;
si0=l4;
sj1=l2;
sj2=0ULL;
si1=(U64)((I64)sj1<(I64)sj2);
si2=l3;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si1&=si2;
l6=si1;
sj1=(U64)(si1);
sj2=l2;
sj1+=sj2;
l2=sj1;
sj2=l2;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=1000000000ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l3;
si1=-1000000000U;
si0+=si1;
si1=l3;
si2=l6;
si0=si2?si0:si1;
sj0=(U64)(I64)(I32)(si0);
l8=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
sj1=l2;
sj2=l8;
sj1+=sj2;
l8=sj1;
sj2=l2;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
if(si0){
goto L5;
}
si0=l1;
sj1=l8;
si1=(U32)(sj1);
si0+=si1;
l3=si0;
sj0=0ULL;
l2=sj0;
goto L1;
L6:;
si0=l6;
si1=l3;
si0+=si1;
l3=si0;
si1=-1000000000U;
si0+=si1;
si1=l3;
si2=l3;
si3=999999999U;
si2=(U32)((I32)si2>(I32)si3);
l1=si2;
si0=si2?si0:si1;
l3=si0;
sj0=l8;
sj1=l2;
sj0+=sj1;
si1=l1;
sj1=(U64)(si1);
sj0+=sj1;
l2=sj0;
si0=0U;
l1=si0;
goto L2;
L5:;
si0=1081744U;
si1=43U;
si2=1081896U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l2;
si1=l3;
si2=0U;
si1=(U32)((I32)si1>(I32)si2);
sj2=l2;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
si1&=si2;
sj1=(U64)(si1);
l8=sj1;
sj0+=sj1;
l2=sj0;
sj1=9223372036854775ULL;
sj0+=sj1;
sj1=18446744073709551ULL;
si0=sj0 < sj1;
if(si0){
goto L8;
}
si0=1081696U;
si1=31U;
si2=1081728U;
f202(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l5;
sj1=l2;
sj2=86400ULL;
sj1=I64_REM_S(sj1,sj2);
l11=sj1;
si1=(U32)(sj1);
si0+=si1;
l5=si0;
si0=l3;
si1=1000000000U;
si0+=si1;
si1=l3;
si2=l3;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l6=si0;
si1=-1000000000U;
si0+=si1;
si1=l6;
si2=l3;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
sj2=(U64)(I64)(I32)(si2);
sj3=l8;
sj2-=sj3;
l8=sj2;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
si3=l6;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si2&=si3;
l3=si2;
si0=si2?si0:si1;
si1=l1;
si0+=si1;
sj1=l8;
si2=l3;
sj2=(U64)(si2);
sj1+=sj2;
si1=(U32)(sj1);
si2=1000000000U;
si1*=si2;
si0+=si1;
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l3;
si1=999999999U;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=-1000000000U;
si0+=si1;
l3=si0;
goto L9;
L10:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l3;
si1=1000000000U;
si0+=si1;
l3=si0;
L9:;
sj0=l2;
sj1=l11;
sj0-=sj1;
l2=sj0;
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l5;
si1=86399U;
si0=si0 <= si1;
if(si0){
goto L1;
}
sj0=l2;
sj1=86400ULL;
sj0+=sj1;
l2=sj0;
si0=l5;
si1=-86400U;
si0+=si1;
l5=si0;
goto L1;
L11:;
sj0=l2;
sj1=-86400ULL;
sj0+=sj1;
l2=sj0;
si0=l5;
si1=86400U;
si0+=si1;
l5=si0;
L1:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f214(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l0=si1;
si2=-1000000000U;
si1+=si2;
si2=l0;
si3=l0;
si4=999999999U;
si3=si3 > si4;
l4=si3;
si1=si3?si1:si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=60U;
si0=DIV_U(si0,si1);
l6=si0;
si1=60U;
si0=REM_U(si0,si1);
l7=si0;
si0=l3;
si1=3600U;
si0=DIV_U(si0,si1);
l8=si0;
si1=255U;
si0&=si1;
l0=si0;
si1=99U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si1=l0;
si2=10U;
si1=DIV_U(si1,si2);
l10=si1;
si2=48U;
si1+=si2;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
l0=si2;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l9;
si1=l8;
si2=l10;
si3=10U;
si2*=si3;
si1-=si2;
si2=48U;
si1|=si2;
si2=255U;
si1&=si2;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l9;
si1=58U;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l9;
si1=l7;
si2=10U;
si1=DIV_U(si1,si2);
l8=si1;
si2=48U;
si1|=si2;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l9;
si1=l7;
si2=l8;
si3=10U;
si2*=si3;
si1-=si2;
si2=48U;
si1|=si2;
si2=255U;
si1&=si2;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l9;
si1=58U;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l9;
si1=l3;
si2=l6;
si3=60U;
si2*=si3;
si1-=si2;
si2=l4;
si1+=si2;
l3=si1;
si2=255U;
si1&=si2;
si2=10U;
si1=DIV_U(si1,si2);
l8=si1;
si2=48U;
si1|=si2;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l9;
si1=l3;
si2=l8;
si3=10U;
si2*=si3;
si1-=si2;
si2=48U;
si1|=si2;
si2=255U;
si1&=si2;
si2=l0;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L3;
}
si0=l5;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
goto L1;
L4:;
si0=l5;
si1=l5;
si2=1000000U;
si1=DIV_U(si1,si2);
l3=si1;
si2=1000000U;
si1*=si2;
si0-=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si2=1000U;
si1=DIV_U(si1,si2);
l3=si1;
si2=1000U;
si1*=si2;
si0-=si1;
if(si0){
goto L5;
}
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=25769803776ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1081916U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l9;
si1=l1;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L5:;
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=38654705664ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1081916U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l9;
si1=l1;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L3:;
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=12884901888ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1081916U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l9;
si1=l1;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f215(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f216(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f217(i,si0);
UNREACHABLE;
L0:;
}

void f217(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=1081924U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f218(rustpythonInstance*i,U32 l0) {
L0:;
}

void f219(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f220(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=32U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=58U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
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

void f221(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l8=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=1U;
si1=l8;
si0<<=(si1&31);
si1=8388639U;
si0&=si1;
if(si0){
goto L1;
}
L9:;
si0=l7;
si1=128U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l7;
si1=8U;
si0>>=(si1&31);
l8=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L10;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L10;
case 5:
goto L10;
case 6:
goto L10;
case 7:
goto L10;
case 8:
goto L10;
case 9:
goto L10;
case 10:
goto L12;
case 11:
goto L10;
case 12:
goto L10;
case 13:
goto L10;
case 14:
goto L10;
case 15:
goto L10;
case 16:
goto L10;
case 17:
goto L10;
case 18:
goto L10;
case 19:
goto L10;
case 20:
goto L10;
case 21:
goto L10;
case 22:
goto L10;
case 23:
goto L10;
case 24:
goto L10;
case 25:
goto L10;
case 26:
goto L13;
default:
goto L11;
}
L14:;
si0=l7;
si1=5760U;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L1;
L13:;
si0=l7;
si1=12288U;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L1;
L12:;
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
goto L10;
}
goto L1;
L11:;
si0=l8;
if(si0){
goto L10;
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
goto L1;
}
L10:;
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

void f222(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
si2=1081944U;
si3=l5;
si4=4U;
si3+=si4;
si4=1081944U;
si5=l5;
si6=8U;
si5+=si6;
si6=l4;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f223(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f224(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
f225(i,si0,si1);
si0=0U;
L0:;
return si0;
}

void f225(rustpythonInstance*i,U32 l0,U32 l1) {
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
f211(i,si0,si1);
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
f212(i,si0,si1,si2);
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
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f226(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
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
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1081960U;
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

U32 f227(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f212(i,si0,si1,si2);
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
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

void f228(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f212(i,si0,si1,si2);
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
L0:;
}

U32 f229(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l1;
si1=7U;
si0&=si1;
l2=si0;
si1=7U;
si0+=si1;
si1=l2;
si2=l2;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l1;
si2=4U;
si1>>=(si2&31);
si0+=si1;
l2=si0;
si1=7U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
si1=l2;
si2=7U;
si1=DIV_U(si1,si2);
l2=si1;
si2=l2;
si3=1030U;
si4=l1;
si5=15U;
si4&=si5;
l1=si4;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=52U;
si3|=si4;
si2=si2 > si3;
l3=si2;
si0=si2?si0:si1;
l2=si0;
si0=l3;
si1=l0;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=1030U;
si1=l0;
si2=-1U;
si1+=si2;
l0=si1;
si2=400U;
si1=I32_REM_S(si1,si2);
l2=si1;
si2=400U;
si1+=si2;
si2=l2;
si3=l2;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=1082512U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=52U;
si0|=si1;
l2=si0;
si0=l1;
si1=15U;
si0&=si1;
l1=si0;
L1:;
si0=l0;
si1=10U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0|=si1;
L0:;
return si0;
}


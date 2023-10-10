#include "w2c2_base.h"

#include "rustpython.h"

void f430(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=184U;
si0+=si1;
f427(i,si0);
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
f428(i,si0);
L0:;
}

void f431(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=152U;
si0+=si1;
f427(i,si0);
si0=l0;
f428(i,si0);
L0:;
}

U32 f432(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f433(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f434(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l19=0;
U32 l20=0;
U64 l21=0;
U32 l22=0;
U32 l23=0;
U64 l24=0;
U64 l25=0;
U32 l26=0;
U32 l27=0;
U64 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U64 l32=0;
U64 l33=0;
U64 l34=0;
U64 l35=0;
U64 l36=0;
U64 l37=0;
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
U64 l48=0;
U32 l49=0;
U64 l50=0;
U64 l51=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7,sj8,sj9,sj10,sj11,sj12;
si0=i->g0;
si1=560U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l4;
f275(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
f274(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l6;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+224U);
l10=si0;
si0=l1;
si1=272U;
si0*=si1;
l11=si0;
si0=0U;
l1=si0;
L11:;
{
si0=l10;
si1=l1;
si0+=si1;
l2=si0;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l9;
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
L12:;
si0=l11;
si1=l1;
si2=272U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=1090048U;
si1=99U;
si2=1090252U;
f703(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l2;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l2;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l2;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l2;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=0U;
l1=si0;
si0=l2;
si1=208U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L15;
}
si0=0U;
l17=si0;
goto L14;
L15:;
si0=l2;
si1=216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L17;
}
si0=4U;
l17=si0;
si0=0U;
l11=si0;
goto L16;
L17:;
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l10;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l18=si0;
si0=l11;
if(si0){
goto L19;
}
si0=l18;
l17=si0;
goto L18;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l18;
si1=l11;
si0=f15277(i,si0,si1);
l17=si0;
goto L18;
L20:;
si0=l11;
si0=f15269(i,si0);
l17=si0;
L18:;
si0=l17;
si0=!(si0);
if(si0){
goto L13;
}
L16:;
si0=l17;
si1=l9;
si2=l11;
si0=f15390(i,si0,si1,si2);
si0=l10;
sj0=(U64)(si0);
l19=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l19;
sj0|=sj1;
l19=sj0;
L14:;
si0=l2;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l2;
si1=224U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L23;
}
goto L22;
L23:;
si0=l2;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L25;
}
si0=4U;
l1=si0;
si0=0U;
l11=si0;
goto L24;
L25:;
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l10;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l18=si0;
si0=l11;
if(si0){
goto L27;
}
si0=l18;
l1=si0;
goto L26;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l18;
si1=l11;
si0=f15277(i,si0,si1);
l1=si0;
goto L26;
L28:;
si0=l11;
si0=f15269(i,si0);
l1=si0;
L26:;
si0=l1;
si0=!(si0);
if(si0){
goto L21;
}
L24:;
si0=l1;
si1=l9;
si2=l11;
si0=f15390(i,si0,si1,si2);
si0=l10;
sj0=(U64)(si0);
l21=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l21;
sj0|=sj1;
l21=sj0;
L22:;
si0=0U;
l10=si0;
si0=l2;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
if(si0){
goto L31;
}
si0=0U;
l22=si0;
goto L30;
L31:;
si0=l2;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L33;
}
si0=4U;
l22=si0;
si0=0U;
l9=si0;
goto L32;
L33:;
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l11;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l23=si0;
si0=l9;
if(si0){
goto L35;
}
si0=l23;
l22=si0;
goto L34;
L35:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l23;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l23;
si1=l9;
si0=f15277(i,si0,si1);
l22=si0;
goto L34;
L36:;
si0=l9;
si0=f15269(i,si0);
l22=si0;
L34:;
si0=l22;
si0=!(si0);
if(si0){
goto L29;
}
L32:;
si0=l22;
si1=l18;
si2=l9;
si0=f15390(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l24=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l24;
sj0|=sj1;
l24=sj0;
L30:;
si0=l2;
si1=248U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
if(si0){
goto L39;
}
goto L38;
L39:;
si0=l2;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L41;
}
si0=4U;
l10=si0;
si0=0U;
l9=si0;
goto L40;
L41:;
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l11;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l23=si0;
si0=l9;
if(si0){
goto L43;
}
si0=l23;
l10=si0;
goto L42;
L43:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l23;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L44;
}
si0=l23;
si1=l9;
si0=f15277(i,si0,si1);
l10=si0;
goto L42;
L44:;
si0=l9;
si0=f15269(i,si0);
l10=si0;
L42:;
si0=l10;
si0=!(si0);
if(si0){
goto L37;
}
L40:;
si0=l10;
si1=l18;
si2=l9;
si0=f15390(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l25=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l25;
sj0|=sj1;
l25=sj0;
L38:;
si0=0U;
l11=si0;
si0=l2;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
if(si0){
goto L47;
}
si0=0U;
l23=si0;
goto L46;
L47:;
si0=l2;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L49;
}
si0=4U;
l23=si0;
si0=0U;
l18=si0;
goto L48;
L49:;
si0=l9;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l9;
si1=4U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l9;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l27=si0;
si0=l18;
if(si0){
goto L51;
}
si0=l27;
l23=si0;
goto L50;
L51:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l27;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L52;
}
si0=l27;
si1=l18;
si0=f15277(i,si0,si1);
l23=si0;
goto L50;
L52:;
si0=l18;
si0=f15269(i,si0);
l23=si0;
L50:;
si0=l23;
si0=!(si0);
if(si0){
goto L45;
}
L48:;
si0=l23;
si1=l26;
si2=l18;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l28=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l28;
sj0|=sj1;
l28=sj0;
L46:;
si0=l5;
si1=344U;
si0+=si1;
si1=l2;
si2=152U;
si1+=si2;
f533(i,si0,si1);
si0=l2;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
if(si0){
goto L55;
}
goto L54;
L55:;
si0=l2;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L57;
}
si0=4U;
l11=si0;
si0=0U;
l18=si0;
goto L56;
L57:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l27=si0;
si0=l18;
if(si0){
goto L59;
}
si0=l27;
l11=si0;
goto L58;
L59:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l27;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L60;
}
si0=l27;
si1=l18;
si0=f15277(i,si0,si1);
l11=si0;
goto L58;
L60:;
si0=l18;
si0=f15269(i,si0);
l11=si0;
L58:;
si0=l11;
si0=!(si0);
if(si0){
goto L53;
}
L56:;
si0=l11;
si1=l26;
si2=l18;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l29=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l29;
sj0|=sj1;
l29=sj0;
L54:;
si0=l2;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
if(si0){
goto L63;
}
si0=0U;
l26=si0;
goto L62;
L63:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L65;
}
si0=4U;
l26=si0;
si0=0U;
l18=si0;
goto L64;
L65:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l31=si0;
si0=l18;
if(si0){
goto L67;
}
si0=l31;
l26=si0;
goto L66;
L67:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l31;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L68;
}
si0=l31;
si1=l18;
si0=f15277(i,si0,si1);
l26=si0;
goto L66;
L68:;
si0=l18;
si0=f15269(i,si0);
l26=si0;
L66:;
si0=l26;
si0=!(si0);
if(si0){
goto L61;
}
L64:;
si0=l26;
si1=l27;
si2=l18;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l32=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l32;
sj0|=sj1;
l32=sj0;
L62:;
si0=l2;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
si0=l2;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l34=sj0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l35=sj0;
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l36=sj0;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l37=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L71;
}
goto L70;
L71:;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l39=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si0=!(si0);
if(si0){
goto L69;
}
L70:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
if(si0){
goto L73;
}
goto L72;
L73:;
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l40=si0;
si0=l18;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l27=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si0=!(si0);
if(si0){
goto L69;
}
L72:;
si0=l2;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l41=si0;
si0=l2;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l42=si0;
si0=l2;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l43=si0;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l44=si0;
if(si0){
goto L76;
}
si0=0U;
l27=si0;
goto L75;
L76:;
si0=l2;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l45=si0;
si0=l2;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l31=si0;
if(si0){
goto L78;
}
si0=4U;
l27=si0;
si0=0U;
l46=si0;
goto L77;
L78:;
si0=l31;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l31;
si1=24U;
si0*=si1;
l46=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l31;
si1=89478486U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l47=si0;
si0=l46;
if(si0){
goto L80;
}
si0=l47;
l27=si0;
goto L79;
L80:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l47;
si1=l46;
si0=si0 <= si1;
if(si0){
goto L81;
}
si0=l47;
si1=l46;
si0=f15277(i,si0,si1);
l27=si0;
goto L79;
L81:;
si0=l46;
si0=f15269(i,si0);
l27=si0;
L79:;
si0=l27;
si0=!(si0);
if(si0){
goto L74;
}
L77:;
si0=l27;
si1=l44;
si2=l46;
si0=f15390(i,si0,si1,si2);
si0=l31;
sj0=(U64)(si0);
l48=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l48;
sj0|=sj1;
l48=sj0;
L75:;
si0=l2;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l46=si0;
if(si0){
goto L84;
}
goto L83;
L84:;
si0=l2;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l44=si0;
si0=l2;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l49=si0;
if(si0){
goto L85;
}
si0=0U;
l31=si0;
goto L83;
L85:;
si0=l2;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l47=si0;
if(si0){
goto L87;
}
si0=1U;
l31=si0;
goto L86;
L87:;
si0=l47;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l47;
si0=f15269(i,si0);
l31=si0;
si0=!(si0);
if(si0){
goto L82;
}
L86:;
si0=l31;
si1=l49;
si2=l47;
si0=f15390(i,si0,si1,si2);
si0=l47;
sj0=(U64)(si0);
l50=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l50;
sj0|=sj1;
l50=sj0;
L83:;
si0=l2;
si1=104U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l51=sj0;
si0=l5;
si1=288U;
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=284U;
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=276U;
si0+=si1;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=272U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=264U;
si0+=si1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=260U;
si0+=si1;
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=252U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=248U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=244U;
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=236U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=232U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=228U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=224U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=220U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=216U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=212U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l5;
si1=184U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=8U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=192U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=16U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=200U;
si0+=si1;
si1=l5;
si2=368U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l38;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
sj1=l37;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
sj1=l36;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
sj1=l35;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
sj1=l34;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
sj1=l33;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=l26;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
sj1=l32;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l5;
si1=l30;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l39;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=l40;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=l42;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
si1=l41;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=l27;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
sj1=l48;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l5;
si1=l45;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l5;
si1=l43;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l5;
sj1=l29;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l5;
si1=l46;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l44;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l5;
si1=l31;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
sj1=l50;
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l5;
sj1=l51;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+344U);
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=l6;
si2=l4;
f435(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+368U);
l8=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L88;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+208U);
l12=si1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+212U);
l1=si2;
sj0=f443(i,si0,si1,si2);
l19=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=-40U;
si0+=si1;
l11=si0;
sj0=l19;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l24=sj0;
sj0=l19;
si0=(U32)(sj0);
l2=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l18=si0;
L89:;
{
si0=l17;
si1=l2;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=l24;
sj0^=sj1;
l19=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l19;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L90;
}
L92:;
{
si0=l11;
si1=0U;
sj2=l19;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l8;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
l9=si1;
si2=40U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0=si0 != si1;
if(si0){
goto L93;
}
si0=l12;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L91;
}
L93:;
sj0=l19;
sj1=-1ULL;
sj0+=sj1;
sj1=l19;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L90;
}
goto L92;
}
L91:;
si0=l17;
si1=l9;
si2=40U;
si1*=si2;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L94;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+56U);
si0=!(sj0);
if(si0){
goto L88;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+64U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L88;
}
L94:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+232U);
l1=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+236U);
si0=!(si0);
if(si0){
goto L95;
}
si0=l1;
f15271(i,si0);
L95:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+248U);
l1=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+252U);
si0=!(si0);
if(si0){
goto L96;
}
si0=l1;
f15271(i,si0);
L96:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+260U);
l1=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+264U);
si0=!(si0);
if(si0){
goto L97;
}
si0=l1;
f15271(i,si0);
L97:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+272U);
l1=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L98;
}
si0=l1;
f15271(i,si0);
L98:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+284U);
l1=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+288U);
si0=!(si0);
if(si0){
goto L99;
}
si0=l1;
f15271(i,si0);
L99:;
si0=l5;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L100;
}
si0=l5;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L100;
}
si0=l1;
f15271(i,si0);
L100:;
si0=l5;
si1=24U;
si0+=si1;
f428(i,si0);
goto L4;
L90:;
sj0=l21;
sj1=l21;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L88;
}
si0=l8;
si1=l18;
si2=8U;
si1+=si2;
l18=si1;
si0+=si1;
l2=si0;
goto L89;
}
L88:;
si0=l5;
si1=344U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l5;
si2=24U;
si1+=si2;
si2=1090312U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+344U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+352U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l19=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l19;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f591(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+348U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
f15271(i,si0);
goto L5;
L82:;
si0=1U;
si1=l47;
f52(i,si0,si1);
UNREACHABLE;
L74:;
si0=l47;
si1=l46;
f52(i,si0,si1);
UNREACHABLE;
L69:;
UNREACHABLE;
L61:;
si0=l31;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L53:;
si0=l27;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L45:;
si0=l27;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L37:;
si0=l23;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L29:;
si0=l23;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=l18;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=l18;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=320U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=320U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+320U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L7:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=296U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=296U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+296U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L6:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+369U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=376U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=376U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+344U);
l24=sj1;
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+232U);
l1=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+236U);
si0=!(si0);
if(si0){
goto L101;
}
si0=l1;
f15271(i,si0);
L101:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+248U);
l1=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+252U);
si0=!(si0);
if(si0){
goto L102;
}
si0=l1;
f15271(i,si0);
L102:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+260U);
l1=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+264U);
si0=!(si0);
if(si0){
goto L103;
}
si0=l1;
f15271(i,si0);
L103:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+272U);
l1=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+276U);
si0=!(si0);
if(si0){
goto L104;
}
si0=l1;
f15271(i,si0);
L104:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+284U);
l1=si0;
si0=!(si0);
if(si0){
goto L105;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+288U);
si0=!(si0);
if(si0){
goto L105;
}
si0=l1;
f15271(i,si0);
L105:;
si0=l5;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l5;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L106;
}
si0=l1;
f15271(i,si0);
L106:;
si0=l5;
si1=24U;
si0+=si1;
f428(i,si0);
goto L1;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l42=si0;
if(si0){
goto L112;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L111;
}
L112:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+536U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+528U,sj1);
si0=l6;
si1=232U;
si0+=si1;
l16=si0;
si0=l6;
si1=224U;
si0+=si1;
l40=si0;
si0=l6;
si1=220U;
si0+=si1;
l20=si0;
si0=l6;
si1=212U;
si0+=si1;
l41=si0;
si0=l6;
si1=256U;
si0+=si1;
l14=si0;
si0=l6;
si1=248U;
si0+=si1;
l30=si0;
si0=l42;
si0=!(si0);
if(si0){
goto L110;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=8U;
si0+=si1;
l15=si0;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l32=sj0;
si0=l5;
si1=24U;
si0+=si1;
si1=48U;
si0+=si1;
l27=si0;
si0=l4;
si1=24U;
si0+=si1;
l31=si0;
si0=l4;
si1=4U;
si0+=si1;
l46=si0;
L113:;
{
sj0=l32;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L114;
}
si0=l15;
l1=si0;
L115:;
{
si0=l13;
si1=-320U;
si0+=si1;
l13=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
l1=si0;
sj0=l19;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l32=sj0;
si0=!(sj0);
if(si0){
goto L115;
}
}
L114:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l13;
si3=0U;
sj4=l32;
sj4=I64_CTZ(sj4);
si4=(U32)(sj4);
si5=3U;
si4>>=(si5&31);
si3-=si4;
si4=40U;
si3*=si4;
si2+=si3;
si3=-40U;
si2+=si3;
l1=si2;
si2=i32_load(&i->m0,(U64)si2);
l17=si2;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+4U);
l12=si3;
f268(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l23=si0;
si0=!(si0);
if(si0){
goto L116;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l26=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l23;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l23;
l18=si0;
L118:;
{
si0=l18;
l9=si0;
si1=8U;
si0+=si1;
l18=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l30;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=48U;
si0*=si1;
l11=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l1=si0;
L121:;
{
si0=l10;
si1=l1;
si0+=si1;
l2=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L122;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L120;
}
L122:;
si0=l11;
si1=l1;
si2=48U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L121;
}
goto L119;
}
L120:;
si0=l2;
si1=45U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L123;
}
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L123;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L124:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L126;
}
si0=l10;
si1=l17;
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L125;
}
L126:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+532U);
si0=si0 != si1;
if(si0){
goto L127;
}
si0=l5;
si1=528U;
si0+=si1;
si1=l8;
f568(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l8=si0;
L127:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+528U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+536U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+536U,si1);
L125:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L124;
}
}
L123:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+536U);
l1=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L128;
}
si0=l5;
si1=528U;
si0+=si1;
si1=l1;
si2=l2;
f576(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l1=si0;
L128:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+528U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l10;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+536U,si1);
L119:;
si0=l18;
si1=l22;
si0=si0 != si1;
if(si0){
goto L118;
}
}
L117:;
si0=l26;
si0=!(si0);
if(si0){
goto L116;
}
si0=l23;
f15271(i,si0);
L116:;
si0=0U;
l18=si0;
si0=0U;
l2=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L129;
}
si0=l41;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=120U;
si0*=si1;
l1=si0;
L130:;
{
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L131;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L129;
}
L131:;
si0=l2;
si1=120U;
si0+=si1;
l2=si0;
si0=l1;
si1=-120U;
si0+=si1;
l1=si0;
if(si0){
goto L130;
}
}
si0=0U;
l2=si0;
L129:;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L132;
}
si0=l40;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l8;
si1=272U;
si0*=si1;
l8=si0;
L133:;
{
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L134;
}
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si2=l12;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L134;
}
si0=l1;
l18=si0;
goto L132;
L134:;
si0=l1;
si1=272U;
si0+=si1;
l1=si0;
si0=l8;
si1=-272U;
si0+=si1;
l8=si0;
if(si0){
goto L133;
}
}
L132:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L136;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l9;
si2=248U;
si1*=si2;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
L137:;
{
si0=l10;
l8=si0;
si0=l1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L139;
}
si0=l1;
si1=248U;
si0+=si1;
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L138;
}
L139:;
si0=l8;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L137;
}
goto L136;
L138:;
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L140;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l17;
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L135;
}
L140:;
si0=l8;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L137;
}
}
L136:;
si0=0U;
l1=si0;
L135:;
si0=l2;
si1=l18;
si2=l1;
si3=l18;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L142;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=1090600U;
si3=1090312U;
si4=1090476U;
si5=l18;
si3=si5?si3:si4;
si4=l2;
si2=si4?si2:si3;
si2=i32_load(&i->m0,(U64)si2+32U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L141;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L141;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l2=si0;
L143:;
{
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
l8=si2;
si2=i32_load(&i->m0,(U64)si2);
si0=f640(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L144;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+532U);
si0=si0 != si1;
if(si0){
goto L145;
}
si0=l5;
si1=528U;
si0+=si1;
si1=l8;
f568(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l8=si0;
L145:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+528U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+536U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+536U,si1);
L144:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L143;
}
goto L141;
}
L142:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l17;
si3=l12;
f271(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
l43=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+552U);
l1=si0;
si0=!(si0);
if(si0){
goto L146;
}
si0=l43;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l39=si0;
si0=l43;
l17=si0;
L147:;
{
si0=0U;
l18=si0;
si0=0U;
l2=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L148;
}
si0=l41;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=120U;
si0*=si1;
l1=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
L149:;
{
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L150;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L148;
}
L150:;
si0=l2;
si1=120U;
si0+=si1;
l2=si0;
si0=l1;
si1=-120U;
si0+=si1;
l1=si0;
if(si0){
goto L149;
}
}
si0=0U;
l2=si0;
L148:;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L151;
}
si0=l40;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l8;
si1=272U;
si0*=si1;
l8=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
L152:;
{
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L153;
}
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L153;
}
si0=l1;
l18=si0;
goto L151;
L153:;
si0=l1;
si1=272U;
si0+=si1;
l1=si0;
si0=l8;
si1=-272U;
si0+=si1;
l8=si0;
if(si0){
goto L152;
}
}
L151:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L155;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l9;
si2=248U;
si1*=si2;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
L156:;
{
si0=l10;
l8=si0;
si0=l1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L158;
}
si0=l1;
si1=248U;
si0+=si1;
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L157;
}
L158:;
si0=l8;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L156;
}
goto L155;
L157:;
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L159;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L154;
}
L159:;
si0=l8;
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L156;
}
}
L155:;
si0=0U;
l1=si0;
L154:;
si0=l2;
si1=l18;
si2=l1;
si3=l18;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L161;
}
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=1090600U;
si3=1090312U;
si4=1090476U;
si5=l18;
si3=si5?si3:si4;
si4=l2;
si2=si4?si2:si3;
si2=i32_load(&i->m0,(U64)si2+32U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=!(si0);
if(si0){
goto L160;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L160;
}
si0=l12;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L163;
}
si0=1U;
l1=si0;
goto L162;
L163:;
si0=l1;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l2=si0;
si0=l1;
si1=7U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L164;
}
L165:;
{
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L165;
}
}
L164:;
si0=l2;
si1=7U;
si0=si0 < si1;
if(si0){
goto L160;
}
L166:;
{
si0=l12;
si1=64U;
si0+=si1;
l12=si0;
si1=l26;
si0=si0 != si1;
if(si0){
goto L166;
}
goto L160;
}
L162:;
L167:;
{
si0=l12;
si1=8U;
si0+=si1;
l23=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L168;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l27;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
l19=sj1;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
sj1=l19;
sj2=7816392313619706465ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
sj1=l19;
sj2=8317987319222330741ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
sj1=l21;
sj2=8387220255154660723ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
sj1=l21;
sj2=7237128888997146477ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l9;
si2=l1;
f442(i,si0,si1,si2);
si0=l5;
si1=255U;
i32_store8(&i->m0,(U64)si0+512U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=512U;
si1+=si2;
si2=1U;
f442(i,si0,si1,si2);
si0=l5;
sj0=i64_load32_u(&i->m0,(U64)si0+80U);
sj1=56ULL;
sj0<<=(sj1&63);
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+72U);
sj0|=sj1;
l19=sj0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
sj0^=sj1;
l21=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l21;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l21=sj1;
sj0^=sj1;
l24=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l24;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+40U);
l25=sj2;
si3=l5;
sj3=i64_load(&i->m0,(U64)si3+24U);
sj2+=sj3;
l28=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l24=sj1;
sj0^=sj1;
l29=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l29;
sj2=l21;
sj3=l25;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l28;
sj3^=sj4;
l25=sj3;
sj2+=sj3;
l21=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=255ULL;
sj2^=sj3;
sj1+=sj2;
l28=sj1;
sj0^=sj1;
l29=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l29;
sj2=l24;
sj3=l19;
sj2^=sj3;
sj3=l21;
sj4=l25;
sj5=17ULL;
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l19=sj3;
sj2+=sj3;
l21=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l24=sj1;
sj0^=sj1;
l25=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l25;
sj2=l21;
sj3=l19;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l19=sj2;
sj3=l28;
sj2+=sj3;
l21=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l25=sj1;
sj0^=sj1;
l28=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l28;
sj2=l21;
sj3=l19;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l19=sj2;
sj3=l24;
sj2+=sj3;
l21=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l24=sj1;
sj0^=sj1;
l28=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l28;
sj2=l19;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l21;
sj2^=sj3;
l19=sj2;
sj3=l25;
sj2+=sj3;
l21=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l25=sj1;
sj0^=sj1;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l19;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l21;
sj1^=sj2;
l19=sj1;
sj2=13ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l19;
sj3=l24;
sj2+=sj3;
sj1^=sj2;
l19=sj1;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l19;
sj2=l25;
sj1+=sj2;
l19=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0^=sj1;
sj1=l19;
sj0^=sj1;
l19=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l24=sj0;
sj0=l19;
si0=(U32)(sj0);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=-40U;
si0+=si1;
l11=si0;
si0=l46;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l18=si0;
L169:;
{
si0=l22;
si1=l2;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=l24;
sj0^=sj1;
l19=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l19;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L170;
}
L172:;
{
si0=l11;
si1=0U;
sj2=l19;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l8;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0=si0 != si1;
if(si0){
goto L173;
}
si0=l9;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L171;
}
L173:;
sj0=l19;
sj1=-1ULL;
sj0+=sj1;
sj1=l19;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L170;
}
goto L172;
}
L171:;
si0=l12;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+532U);
si0=si0 != si1;
if(si0){
goto L174;
}
si0=l5;
si1=528U;
si0+=si1;
si1=l1;
f568(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l1=si0;
L174:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+528U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+536U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+536U,si1);
goto L168;
L170:;
sj0=l21;
sj1=l21;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L168;
}
si0=l8;
si1=l18;
si2=8U;
si1+=si2;
l18=si1;
si0+=si1;
l2=si0;
goto L169;
}
L168:;
si0=l23;
si1=l26;
si0=si0 == si1;
if(si0){
goto L160;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l23;
l12=si0;
goto L167;
}
L161:;
si0=1090268U;
si1=43U;
si2=1090756U;
f673(i,si0,si1,si2);
UNREACHABLE;
L160:;
si0=l17;
si1=l39;
si0=si0 != si1;
if(si0){
goto L147;
}
}
L146:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L141;
}
si0=l43;
f15271(i,si0);
L141:;
sj0=l32;
sj1=-1ULL;
sj0+=sj1;
sj1=l32;
sj0&=sj1;
l32=sj0;
si0=l42;
si1=-1U;
si0+=si1;
l42=si0;
if(si0){
goto L113;
}
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+536U);
l1=si0;
si0=!(si0);
if(si0){
goto L110;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+528U);
l11=si0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L175:;
{
si0=l11;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L179;
}
si0=l30;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=48U;
si0*=si1;
l2=si0;
L180:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L181;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L178;
}
L181:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-48U;
si0+=si1;
l2=si0;
if(si0){
goto L180;
}
}
L179:;
si0=l4;
si1=l10;
si2=l8;
si0=f640(i,si0,si1,si2);
l1=si0;
si0=!(si0);
if(si0){
goto L176;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L176;
}
si0=l5;
si1=344U;
si0+=si1;
si1=l6;
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
si3=l11;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
f436(i,si0,si1,si2,si3,si4);
goto L177;
L178:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l10;
si3=l8;
f271(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l18=si0;
l1=si0;
L182:;
{
si0=l2;
if(si0){
goto L183;
}
si0=l12;
si0=!(si0);
if(si0){
goto L176;
}
si0=l18;
f15271(i,si0);
goto L176;
L183:;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
si1=l10;
si2=l8;
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L182;
}
}
si0=l5;
si1=344U;
si0+=si1;
si1=l6;
si2=l10;
si3=l8;
si4=l4;
f436(i,si0,si1,si2,si3,si4);
si0=l12;
si0=!(si0);
if(si0){
goto L177;
}
si0=l18;
f15271(i,si0);
L177:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
si0=!(si0);
if(si0){
goto L184;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+528U);
f15271(i,si0);
L184:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+368U);
l1=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L109;
}
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+369U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=424U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=424U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+344U);
l24=sj1;
i64_store(&i->m0,(U64)si0+424U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L176:;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L110;
}
goto L175;
}
L111:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0&=si1;
if(si0){
goto L108;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+536U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+528U,sj1);
si0=l6;
si1=232U;
si0+=si1;
l16=si0;
si0=l6;
si1=224U;
si0+=si1;
l40=si0;
si0=l6;
si1=220U;
si0+=si1;
l20=si0;
si0=l6;
si1=212U;
si0+=si1;
l41=si0;
si0=l6;
si1=256U;
si0+=si1;
l14=si0;
si0=l6;
si1=248U;
si0+=si1;
l30=si0;
L110:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+532U);
si0=!(si0);
if(si0){
goto L109;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+528U);
f15271(i,si0);
L109:;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L107;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L185;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L107;
}
L185:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
f435(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L107;
}
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=448U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=448U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+448U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L108:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+544U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=544U;
si1+=si2;
si2=1090436U;
si3=l6;
si4=1U;
si5=0U;
f387(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l1=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L187;
}
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+49U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=400U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=400U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l24=sj1;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
goto L186;
L187:;
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+544U);
si2=l5;
si2=i32_load(&i->m0,(U64)si2+552U);
f62(i,si0,si1,si2);
si0=l5;
si1=344U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f629(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+344U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=12U;
l1=si0;
L186:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
f15271(i,si0);
goto L1;
L107:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l27=si0;
si0=!(si0);
if(si0){
goto L189;
}
si0=l5;
si1=49U;
si0+=si1;
l47=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=8U;
si0+=si1;
l17=si0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l19=sj0;
si0=l6;
si1=18U;
si0+=si1;
l15=si0;
L190:;
{
sj0=l19;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L191;
}
si0=l17;
l1=si0;
L192:;
{
si0=l11;
si1=-320U;
si0+=si1;
l11=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
l1=si0;
sj0=l19;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L192;
}
}
L191:;
si0=l11;
si1=0U;
sj2=l19;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l1=si0;
si1=-32U;
si0+=si1;
l26=si0;
si0=l1;
si1=-40U;
si0+=si1;
l10=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L195;
}
si0=l40;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=272U;
si0*=si1;
l12=si0;
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l1=si0;
L196:;
{
si0=l9;
si1=l1;
si0+=si1;
l2=si0;
si1=188U;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L197;
}
si0=l2;
si1=184U;
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L194;
}
L197:;
si0=l12;
si1=l1;
si2=272U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L196;
}
}
L195:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L199;
}
si0=l41;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=120U;
si0*=si1;
l12=si0;
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=0U;
l1=si0;
L200:;
{
si0=l9;
si1=l1;
si0+=si1;
l8=si0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L201;
}
si0=l8;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L198;
}
L201:;
si0=l12;
si1=l1;
si2=120U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L200;
}
}
L199:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=!(si0);
if(si0){
goto L215;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l12;
si2=248U;
si1*=si2;
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
L216:;
{
si0=l8;
l2=si0;
si0=l1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L218;
}
si0=l1;
si1=248U;
si0+=si1;
l2=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L217;
}
L218:;
si0=l2;
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L216;
}
goto L215;
L217:;
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l10;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L219;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L214;
}
L219:;
si0=l2;
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L216;
}
}
L215:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L220;
}
si0=l30;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=48U;
si0*=si1;
l2=si0;
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L221:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L222;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L213;
}
L222:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l2;
si1=-48U;
si0+=si1;
l2=si0;
if(si0){
goto L221;
}
}
L220:;
si0=1090048U;
si1=99U;
si2=1090772U;
f703(i,si0,si1,si2);
UNREACHABLE;
L214:;
si0=l26;
si1=28U;
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l26;
si1=20U;
si0+=si1;
l39=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L223;
}
si0=l2;
sj0=(U64)(si0);
l24=sj0;
goto L210;
L223:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l21=sj0;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L228;
}
sj0=l21;
si0=!(sj0);
if(si0){
goto L227;
}
si0=l2;
sj0=(U64)(si0);
l24=sj0;
sj1=l21;
sj0=REM_U(sj0,sj1);
si0=!(sj0);
if(si0){
goto L210;
}
sj0=l21;
si0=(U32)(sj0);
l8=si0;
si0=!(si0);
if(si0){
goto L225;
}
si0=l2;
si1=l8;
si0=REM_U(si0,si1);
l12=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L224;
}
si0=l12;
l8=si0;
goto L212;
L228:;
sj0=l21;
si1=l2;
sj1=(U64)(si1);
si0=sj0 != sj1;
if(si0){
goto L226;
}
sj0=l21;
l24=sj0;
goto L210;
L227:;
si0=1090816U;
si1=57U;
si2=1090788U;
f673(i,si0,si1,si2);
UNREACHABLE;
L226:;
si0=1U;
l8=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L212;
}
si0=1090892U;
l10=si0;
si0=3U;
l9=si0;
si0=l2;
l8=si0;
goto L211;
L225:;
si0=1090816U;
si1=57U;
si2=1090876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L224:;
si0=1U;
l8=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L212;
}
si0=1090892U;
l10=si0;
si0=3U;
l9=si0;
si0=l12;
l8=si0;
goto L211;
L213:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L193;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l1=si0;
L229:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L193;
}
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l4;
si1=l10;
si2=l8;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
if(si0){
goto L229;
}
}
si0=l5;
si1=344U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f437(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+368U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L189;
L212:;
si0=1090895U;
l10=si0;
si0=2U;
l9=si0;
L211:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1090476U;
sj3=l21;
si4=l8;
si5=l10;
si6=l9;
si7=l5;
si7=i32_load(&i->m0,(U64)si7+544U);
l2=si7;
si8=l5;
si8=i32_load(&i->m0,(U64)si8+552U);
si9=l6;
sj9=i64_load(&i->m0,(U64)si9+16U);
l24=sj9;
si9=(U32)(sj9);
si10=23U;
si9>>=(si10&31);
si10=1U;
si9&=si10;
si10=2U;
sj11=l24;
sj12=33554432ULL;
sj11&=sj12;
si11=!(sj11);
si9=si11?si9:si10;
f601(i,si0,si1,si2,sj3,si4,si5,si6,si7,si8,si9);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L209;
}
si0=l2;
f15271(i,si0);
goto L209;
L210:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L234;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l24;
si0=sj0 < sj1;
if(si0){
goto L233;
}
L234:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L232;
}
si0=1U;
l8=si0;
goto L231;
L233:;
si0=l2;
si0=!(si0);
if(si0){
goto L205;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l8;
si2=l2;
si3=12U;
si2*=si3;
si1+=si2;
si2=-12U;
si1+=si2;
l2=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
if(si0){
goto L206;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
l2=si0;
si0=!(si0);
if(si0){
goto L206;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+552U);
l8=si0;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=l8;
si3=l1;
si4=1090476U;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+544U);
l10=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+552U);
si7=l6;
sj7=i64_load(&i->m0,(U64)si7+16U);
l21=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l21;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f598(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L209;
}
si0=l10;
f15271(i,si0);
goto L209;
L232:;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=l24;
si0=sj0 > sj1;
if(si0){
goto L230;
}
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
L231:;
si0=l8;
si0=!(si0);
if(si0){
goto L208;
}
si0=l2;
if(si0){
goto L208;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1090476U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+544U);
l2=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+552U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f591(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L209;
}
si0=l2;
f15271(i,si0);
goto L209;
L230:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1090476U;
sj3=l21;
si4=l2;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+544U);
l8=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+552U);
si7=l6;
sj7=i64_load(&i->m0,(U64)si7+16U);
l24=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l24;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f599(i,si0,si1,si2,sj3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L209;
}
si0=l8;
f15271(i,si0);
L209:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L207;
}
L208:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L235;
}
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L235;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1090476U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+544U);
l2=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+552U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f602(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L236;
}
si0=l2;
f15271(i,si0);
L236:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L202;
}
L235:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L237;
}
si0=l39;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l42=si0;
L238:;
{
si0=l15;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L247;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si2=i32_load(&i->m0,(U64)si2+8U);
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
if(si0){
goto L246;
}
L247:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+116U);
l23=si0;
si0=!(si0);
if(si0){
goto L241;
}
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=l5;
si1=512U;
si0+=si1;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si2=i32_load(&i->m0,(U64)si2+8U);
f62(i,si0,si1,si2);
si0=l1;
si1=190U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L244;
}
si0=l26;
if(si0){
goto L245;
}
si0=0U;
l26=si0;
goto L243;
L246:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+544U);
l2=si1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+552U);
si3=l6;
sj3=i64_load(&i->m0,(U64)si3+16U);
l21=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l21;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f597(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L240;
}
si0=l2;
f15271(i,si0);
goto L240;
L245:;
si0=l23;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l46=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
l31=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+516U);
l43=si1;
si2=l31;
si0=si2?si0:si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+520U);
l10=si0;
si0=l23;
l22=si0;
L248:;
{
si0=l10;
si1=l22;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L249;
}
si0=l10;
if(si0){
goto L251;
}
si0=0U;
l2=si0;
goto L250;
L251:;
si0=l22;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l2=si0;
L252:;
{
si0=l9;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
si1=255U;
si0&=si1;
si1=l12;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l8=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l8;
si1|=si2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L250;
}
si0=l10;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L252;
}
goto L242;
}
L250:;
si0=l2;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L242;
}
L249:;
si0=l22;
si1=8U;
si0+=si1;
l22=si0;
si1=l46;
si0=si0 != si1;
if(si0){
goto L248;
}
goto L243;
}
L244:;
si0=l26;
if(si0){
goto L253;
}
si0=0U;
l26=si0;
goto L243;
L253:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
l31=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+516U);
l43=si1;
si2=l31;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+520U);
l10=si0;
si0=l26;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l23;
l2=si0;
L254:;
{
si0=l10;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L255;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l10;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L242;
}
L255:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L254;
}
}
L243:;
si0=l5;
si1=528U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=512U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+512U);
i64_store(&i->m0,(U64)si0+528U,sj1);
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=528U;
si1+=si2;
si2=l23;
si3=l26;
si4=l1;
si5=1090476U;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+544U);
l2=si6;
si7=l5;
si7=i32_load(&i->m0,(U64)si7+552U);
si8=l6;
sj8=i64_load(&i->m0,(U64)si8+16U);
l21=sj8;
si8=(U32)(sj8);
si9=23U;
si8>>=(si9&31);
si9=1U;
si8&=si9;
si9=2U;
sj10=l21;
sj11=33554432ULL;
sj10&=sj11;
si10=!(sj10);
si8=si10?si8:si9;
f592(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L240;
}
si0=l2;
f15271(i,si0);
goto L240;
L242:;
si0=l31;
si0=!(si0);
if(si0){
goto L241;
}
si0=l43;
si0=!(si0);
if(si0){
goto L241;
}
si0=l31;
f15271(i,si0);
L241:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+188U);
si1=4U;
si0&=si1;
if(si0){
goto L259;
}
si0=l18;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L259;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+152U);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+156U);
si0=f643(i,si0,si1,si2);
if(si0){
goto L258;
}
L259:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l2=si0;
if(si0){
goto L257;
}
goto L256;
L258:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1090476U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+544U);
l2=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+552U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f591(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L240;
}
si0=l2;
f15271(i,si0);
goto L240;
L257:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si1=544U;
si0+=si1;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si2=i32_load(&i->m0,(U64)si2+8U);
f62(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
if(si0){
goto L262;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+552U);
l9=si0;
if(si0){
goto L264;
}
si0=1U;
l22=si0;
goto L263;
L264:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l22=si0;
si0=!(si0);
if(si0){
goto L260;
}
L263:;
si0=l22;
si1=l12;
si2=l9;
si0=f15390(i,si0,si1,si2);
l12=si0;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+536U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+532U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+528U,si1);
goto L261;
L262:;
si0=l5;
si1=528U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=544U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+544U);
i64_store(&i->m0,(U64)si0+528U,sj1);
L261:;
si0=l5;
si1=512U;
si0+=si1;
si1=l10;
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l2;
si1+=si2;
si2=8U;
si1+=si2;
si2=l5;
si3=528U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+20U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
si0=!(si0);
if(si0){
goto L256;
}
si0=l5;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=512U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+512U);
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1090476U;
si3=l5;
si4=496U;
si3+=si4;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l21=sj4;
si4=(U32)(sj4);
si5=23U;
si4>>=(si5&31);
si5=1U;
si4&=si5;
si5=2U;
sj6=l21;
sj7=33554432ULL;
sj6&=sj7;
si6=!(sj6);
si4=si6?si4:si5;
f600(i,si0,si1,si2,si3,si4);
goto L240;
L260:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L256:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=!(si0);
if(si0){
goto L239;
}
si0=l5;
si1=512U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+76U);
l8=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l2;
si1+=si2;
si2=8U;
si1+=si2;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
si3=l18;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l8;
si4=i32_load(&i->m0,(U64)si4+20U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
l2=si0;
si0=!(si0);
if(si0){
goto L239;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+516U);
l9=si0;
si0=l5;
si1=544U;
si0+=si1;
si1=l2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+520U);
f62(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
l8=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+552U);
l10=si1;
si2=0U;
f562(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l12;
si3=l8;
si1=si3?si1:si2;
si2=l10;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+536U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+532U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+528U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=1090476U;
si3=l5;
si4=528U;
si3+=si4;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l21=sj4;
si4=(U32)(sj4);
si5=23U;
si4>>=(si5&31);
si5=1U;
si4&=si5;
si5=2U;
sj6=l21;
sj7=33554432ULL;
sj6&=sj7;
si6=!(sj6);
si4=si6?si4:si5;
f600(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
l8=si0;
si0=!(si0);
if(si0){
goto L265;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L265;
}
si0=l8;
f15271(i,si0);
L265:;
si0=l9;
si0=!(si0);
if(si0){
goto L240;
}
si0=l2;
f15271(i,si0);
L240:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L237;
}
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L239:;
si0=l18;
si1=12U;
si0+=si1;
l18=si0;
si1=l42;
si0=si0 != si1;
if(si0){
goto L238;
}
}
L237:;
si0=l1;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L193;
}
si0=l1;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=4U;
si0<<=(si1&31);
l12=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L267;
}
si0=l39;
si0=i32_load(&i->m0,(U64)si0);
l31=si0;
si0=l10;
si1=l12;
si0+=si1;
l26=si0;
si0=l1;
si1=12U;
si0*=si1;
l46=si0;
si0=l10;
l23=si0;
L268:;
{
si0=l23;
l1=si0;
si1=l26;
si0=si0 == si1;
if(si0){
goto L266;
}
si0=l1;
si1=16U;
si0+=si1;
l23=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L268;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l46;
l2=si0;
si0=l31;
l1=si0;
L269:;
{
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L270;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l8;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L270;
}
si0=l4;
si1=l22;
si2=l18;
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L204;
}
L270:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=-12U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L268;
}
goto L269;
}
}
L267:;
si0=l2;
si1=4U;
si0<<=(si1&31);
l1=si0;
si0=l10;
l2=si0;
L271:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L266;
}
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
goto L271;
}
L266:;
L272:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L193;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L273;
}
si0=l4;
si1=l10;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l10;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si0=f643(i,si0,si1,si2);
if(si0){
goto L273;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=l1;
si4=l2;
f437(i,si0,si1,si2,si3,si4);
goto L203;
L273:;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=-16U;
si0+=si1;
l12=si0;
goto L272;
}
L207:;
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L206:;
si0=1090916U;
si1=35U;
si2=1090952U;
f703(i,si0,si1,si2);
UNREACHABLE;
L205:;
si0=1090048U;
si1=99U;
si2=1090900U;
f703(i,si0,si1,si2);
UNREACHABLE;
L204:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f437(i,si0,si1,si2,si3,si4);
L203:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L193;
}
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L202:;
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L198:;
si0=l8;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L275;
}
si0=l8;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=4U;
si0<<=(si1&31);
l18=si0;
si0=l26;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L279;
}
si0=l26;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l9;
si1=l18;
si0+=si1;
l46=si0;
si0=l1;
si1=12U;
si0*=si1;
l39=si0;
si0=l9;
l31=si0;
L280:;
{
si0=l31;
l1=si0;
si1=l46;
si0=si0 == si1;
if(si0){
goto L278;
}
si0=l1;
si1=16U;
si0+=si1;
l31=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L280;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l23=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l39;
l2=si0;
si0=l13;
l1=si0;
L281:;
{
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L282;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=l10;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L282;
}
si0=l4;
si1=l23;
si2=l22;
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L277;
}
L282:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l2;
si1=-12U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L280;
}
goto L281;
}
}
L279:;
si0=l2;
si1=4U;
si0<<=(si1&31);
l1=si0;
si0=l9;
l2=si0;
L283:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L278;
}
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
goto L283;
}
L278:;
L284:;
{
si0=l18;
si0=!(si0);
if(si0){
goto L275;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L285;
}
si0=l4;
si1=l9;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l9;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si0=f643(i,si0,si1,si2);
if(si0){
goto L285;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=l1;
si4=l2;
f437(i,si0,si1,si2,si3,si4);
goto L276;
L285:;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l18;
si1=-16U;
si0+=si1;
l18=si0;
goto L284;
}
L277:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f437(i,si0,si1,si2,si3,si4);
L276:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L274;
}
L275:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L193;
}
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L193;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l8;
si2=1090600U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+544U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+552U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f602(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L286;
}
si0=l1;
f15271(i,si0);
L286:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L193;
}
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L274:;
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L194:;
si0=l26;
si1=28U;
si0+=si1;
l43=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l26;
si1=20U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L296;
}
si0=l1;
sj0=(U64)(si0);
l24=sj0;
goto L295;
L296:;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l2;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L303;
}
sj0=l21;
si0=!(sj0);
if(si0){
goto L302;
}
si0=l1;
sj0=(U64)(si0);
l24=sj0;
sj1=l21;
sj0=REM_U(sj0,sj1);
si0=!(sj0);
if(si0){
goto L295;
}
sj0=l21;
si0=(U32)(sj0);
l8=si0;
si0=!(si0);
if(si0){
goto L300;
}
si0=l1;
si1=l8;
si0=REM_U(si0,si1);
l12=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L299;
}
si0=l12;
l8=si0;
goto L298;
L303:;
sj0=l21;
si1=l1;
sj1=(U64)(si1);
si0=sj0 != sj1;
if(si0){
goto L301;
}
sj0=l21;
l24=sj0;
goto L295;
L302:;
si0=1090816U;
si1=57U;
si2=1090788U;
f673(i,si0,si1,si2);
UNREACHABLE;
L301:;
si0=1U;
l8=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L298;
}
si0=1090892U;
l10=si0;
si0=3U;
l9=si0;
si0=l1;
l8=si0;
goto L297;
L300:;
si0=1090816U;
si1=57U;
si2=1090876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L299:;
si0=1U;
l8=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L298;
}
si0=1090892U;
l10=si0;
si0=3U;
l9=si0;
si0=l12;
l8=si0;
goto L297;
L298:;
si0=1090895U;
l10=si0;
si0=2U;
l9=si0;
L297:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1090312U;
sj3=l21;
si4=l8;
si5=l10;
si6=l9;
si7=l5;
si7=i32_load(&i->m0,(U64)si7+544U);
l1=si7;
si8=l5;
si8=i32_load(&i->m0,(U64)si8+552U);
si9=l6;
sj9=i64_load(&i->m0,(U64)si9+16U);
l24=sj9;
si9=(U32)(sj9);
si10=23U;
si9>>=(si10&31);
si10=1U;
si9&=si10;
si10=2U;
sj11=l24;
sj12=33554432ULL;
sj11&=sj12;
si11=!(sj11);
si9=si11?si9:si10;
f601(i,si0,si1,si2,sj3,si4,si5,si6,si7,si8,si9);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L294;
}
si0=l1;
f15271(i,si0);
goto L294;
L295:;
si0=l2;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L308;
}
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l24;
si0=sj0 < sj1;
if(si0){
goto L307;
}
L308:;
si0=l2;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L306;
}
si0=1U;
l8=si0;
goto L305;
L307:;
si0=l1;
si0=!(si0);
if(si0){
goto L291;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l8;
si2=l1;
si3=12U;
si2*=si3;
si1+=si2;
si2=-12U;
si1+=si2;
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
if(si0){
goto L292;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
l1=si0;
si0=!(si0);
if(si0){
goto L292;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+552U);
l8=si0;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l8;
si3=l2;
si4=1090312U;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+544U);
l10=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+552U);
si7=l6;
sj7=i64_load(&i->m0,(U64)si7+16U);
l21=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l21;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f598(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L294;
}
si0=l10;
f15271(i,si0);
goto L294;
L306:;
si0=l2;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=l24;
si0=sj0 > sj1;
if(si0){
goto L304;
}
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
L305:;
si0=l8;
si0=!(si0);
if(si0){
goto L293;
}
si0=l1;
if(si0){
goto L293;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1090312U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+544U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+552U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f591(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L294;
}
si0=l1;
f15271(i,si0);
goto L294;
L304:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1090312U;
sj3=l21;
si4=l1;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+544U);
l8=si5;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+552U);
si7=l6;
sj7=i64_load(&i->m0,(U64)si7+16U);
l24=sj7;
si7=(U32)(sj7);
si8=23U;
si7>>=(si8&31);
si8=1U;
si7&=si8;
si8=2U;
sj9=l24;
sj10=33554432ULL;
sj9&=sj10;
si9=!(sj9);
si7=si9?si7:si8;
f599(i,si0,si1,si2,sj3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L294;
}
si0=l8;
f15271(i,si0);
L294:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L290;
}
L293:;
si0=l43;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L310;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l45=si0;
L311:;
{
si0=l15;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L320;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
si2=l23;
si2=i32_load(&i->m0,(U64)si2+8U);
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
if(si0){
goto L319;
}
L320:;
si0=l2;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l46=si0;
si0=!(si0);
if(si0){
goto L314;
}
si0=l2;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l5;
si1=512U;
si0+=si1;
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
si2=l23;
si2=i32_load(&i->m0,(U64)si2+8U);
f62(i,si0,si1,si2);
si0=l2;
si1=222U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L317;
}
si0=l13;
if(si0){
goto L318;
}
si0=0U;
l13=si0;
goto L316;
L319:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+544U);
l1=si1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+552U);
si3=l6;
sj3=i64_load(&i->m0,(U64)si3+16U);
l21=sj3;
si3=(U32)(sj3);
si4=23U;
si3>>=(si4&31);
si4=1U;
si3&=si4;
si4=2U;
sj5=l21;
sj6=33554432ULL;
sj5&=sj6;
si5=!(sj5);
si3=si5?si3:si4;
f597(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L313;
}
si0=l1;
f15271(i,si0);
goto L313;
L318:;
si0=l46;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l42=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
l39=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+516U);
l44=si1;
si2=l39;
si0=si2?si0:si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+520U);
l10=si0;
si0=l46;
l31=si0;
L321:;
{
si0=l10;
si1=l31;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L322;
}
si0=l10;
if(si0){
goto L324;
}
si0=0U;
l1=si0;
goto L323;
L324:;
si0=l31;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l1=si0;
L325:;
{
si0=l9;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
si1=255U;
si0&=si1;
si1=l12;
si2=l1;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l8=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l8;
si1|=si2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L323;
}
si0=l10;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L325;
}
goto L315;
}
L323:;
si0=l1;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L315;
}
L322:;
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si1=l42;
si0=si0 != si1;
if(si0){
goto L321;
}
goto L316;
}
L317:;
si0=l13;
if(si0){
goto L326;
}
si0=0U;
l13=si0;
goto L316;
L326:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
l39=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+516U);
l44=si1;
si2=l39;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+520U);
l10=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l46;
l1=si0;
L327:;
{
si0=l10;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L328;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l10;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L315;
}
L328:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L327;
}
}
L316:;
si0=l5;
si1=528U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=512U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+512U);
i64_store(&i->m0,(U64)si0+528U,sj1);
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=528U;
si1+=si2;
si2=l46;
si3=l13;
si4=l2;
si5=1090312U;
si6=l5;
si6=i32_load(&i->m0,(U64)si6+544U);
l1=si6;
si7=l5;
si7=i32_load(&i->m0,(U64)si7+552U);
si8=l6;
sj8=i64_load(&i->m0,(U64)si8+16U);
l21=sj8;
si8=(U32)(sj8);
si9=23U;
si8>>=(si9&31);
si9=1U;
si8&=si9;
si9=2U;
sj10=l21;
sj11=33554432ULL;
sj10&=sj11;
si10=!(sj10);
si8=si10?si8:si9;
f592(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L313;
}
si0=l1;
f15271(i,si0);
goto L313;
L315:;
si0=l39;
si0=!(si0);
if(si0){
goto L314;
}
si0=l44;
si0=!(si0);
if(si0){
goto L314;
}
si0=l39;
f15271(i,si0);
L314:;
si0=l2;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0&=si1;
if(si0){
goto L332;
}
si0=l23;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L332;
}
si0=l4;
si1=l22;
si1=i32_load(&i->m0,(U64)si1);
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
if(si0){
goto L331;
}
L332:;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L330;
}
goto L329;
L331:;
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1090312U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+544U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+552U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f591(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L313;
}
si0=l1;
f15271(i,si0);
goto L313;
L330:;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si1=544U;
si0+=si1;
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
si2=l23;
si2=i32_load(&i->m0,(U64)si2+8U);
f62(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
if(si0){
goto L335;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+552U);
l9=si0;
if(si0){
goto L337;
}
si0=1U;
l31=si0;
goto L336;
L337:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l31=si0;
si0=!(si0);
if(si0){
goto L333;
}
L336:;
si0=l31;
si1=l12;
si2=l9;
si0=f15390(i,si0,si1,si2);
l12=si0;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+536U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+532U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+528U,si1);
goto L334;
L335:;
si0=l5;
si1=528U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=544U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+544U);
i64_store(&i->m0,(U64)si0+528U,sj1);
L334:;
si0=l5;
si1=512U;
si0+=si1;
si1=l10;
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
si2=l5;
si3=528U;
si2+=si3;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+20U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
si0=!(si0);
if(si0){
goto L329;
}
si0=l5;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=512U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+512U);
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1090312U;
si3=l5;
si4=496U;
si3+=si4;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l21=sj4;
si4=(U32)(sj4);
si5=23U;
si4>>=(si5&31);
si5=1U;
si4&=si5;
si5=2U;
sj6=l21;
sj7=33554432ULL;
sj6&=sj7;
si6=!(sj6);
si4=si6?si4:si5;
f600(i,si0,si1,si2,si3,si4);
goto L313;
L333:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L329:;
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L312;
}
si0=l5;
si1=512U;
si0+=si1;
si1=l2;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
si2=l23;
si2=i32_load(&i->m0,(U64)si2);
si3=l23;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l8;
si4=i32_load(&i->m0,(U64)si4+20U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+512U);
l1=si0;
si0=!(si0);
if(si0){
goto L312;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+516U);
l12=si0;
si0=l5;
si1=544U;
si0+=si1;
si1=l1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+520U);
f62(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+544U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+552U);
l8=si0;
if(si0){
goto L339;
}
si0=1U;
l18=si0;
goto L338;
L339:;
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L309;
}
L338:;
si0=l18;
si1=l10;
si2=l9;
si3=l10;
si1=si3?si1:si2;
si2=l8;
si0=f15390(i,si0,si1,si2);
l18=si0;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+536U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+532U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+528U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1090312U;
si3=l5;
si4=528U;
si3+=si4;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l21=sj4;
si4=(U32)(sj4);
si5=23U;
si4>>=(si5&31);
si5=1U;
si4&=si5;
si5=2U;
sj6=l21;
sj7=33554432ULL;
sj6&=sj7;
si6=!(sj6);
si4=si6?si4:si5;
f600(i,si0,si1,si2,si3,si4);
si0=l10;
si0=!(si0);
if(si0){
goto L340;
}
si0=l9;
si0=!(si0);
if(si0){
goto L340;
}
si0=l10;
f15271(i,si0);
L340:;
si0=l12;
si0=!(si0);
if(si0){
goto L313;
}
si0=l1;
f15271(i,si0);
L313:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L310;
}
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L312:;
si0=l23;
si1=12U;
si0+=si1;
l23=si0;
si1=l45;
si0=si0 != si1;
if(si0){
goto L311;
}
}
L310:;
si0=l2;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L287;
}
si0=l2;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=4U;
si0<<=(si1&31);
l18=si0;
si0=l43;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L342;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l9;
si1=l18;
si0+=si1;
l46=si0;
si0=l1;
si1=12U;
si0*=si1;
l39=si0;
si0=l9;
l31=si0;
L343:;
{
si0=l31;
l1=si0;
si1=l46;
si0=si0 == si1;
if(si0){
goto L341;
}
si0=l1;
si1=16U;
si0+=si1;
l31=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L343;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l23=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l39;
l8=si0;
si0=l13;
l1=si0;
L344:;
{
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L345;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=l10;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L345;
}
si0=l4;
si1=l23;
si2=l22;
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L289;
}
L345:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l8;
si1=-12U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L343;
}
goto L344;
}
}
L342:;
si0=l8;
si1=4U;
si0<<=(si1&31);
l1=si0;
si0=l9;
l8=si0;
L346:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L341;
}
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
goto L346;
}
L341:;
L347:;
{
si0=l18;
si0=!(si0);
if(si0){
goto L287;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L348;
}
si0=l4;
si1=l9;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l9;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si0=f643(i,si0,si1,si2);
if(si0){
goto L348;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=l1;
si4=l8;
f437(i,si0,si1,si2,si3,si4);
goto L288;
L348:;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l18;
si1=-16U;
si0+=si1;
l18=si0;
goto L347;
}
L309:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L292:;
si0=1090916U;
si1=35U;
si2=1090952U;
f703(i,si0,si1,si2);
UNREACHABLE;
L291:;
si0=1090048U;
si1=99U;
si2=1090900U;
f703(i,si0,si1,si2);
UNREACHABLE;
L290:;
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L289:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f437(i,si0,si1,si2,si3,si4);
L288:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 != si1;
if(si0){
goto L188;
}
L287:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L193;
}
si0=l2;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L193;
}
si0=l5;
si1=544U;
si0+=si1;
si1=l6;
si2=l4;
si3=0U;
si4=l1;
f558(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=1090312U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+544U);
l1=si3;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+552U);
si5=l6;
sj5=i64_load(&i->m0,(U64)si5+16U);
l21=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l21;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f602(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+548U);
si0=!(si0);
if(si0){
goto L349;
}
si0=l1;
f15271(i,si0);
L349:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l10=si0;
si1=20U;
si0=si0 == si1;
if(si0){
goto L193;
}
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L193:;
sj0=l19;
sj1=-1ULL;
sj0+=sj1;
sj1=l19;
sj0&=sj1;
l19=sj0;
si0=l27;
si1=-1U;
si0+=si1;
l27=si0;
if(si0){
goto L190;
}
}
L189:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=1090048U;
si3=0U;
f556(i,si0,si1,si2,si3);
si0=l4;
si1=36U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L350;
}
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L350;
}
si0=l2;
f15271(i,si0);
L350:;
si0=l1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
goto L1;
L188:;
si0=l5;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=371U;
si0+=si1;
si1=l47;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l5;
si1=l47;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0+369U,si1);
goto L2;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+369U);
i32_store16(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=472U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=472U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=27U;
si0+=si1;
si1=l5;
si2=344U;
si1+=si2;
si2=27U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+344U);
l24=sj1;
i64_store(&i->m0,(U64)si0+472U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+24U,si1);
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L351;
}
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L351;
}
si0=l1;
f15271(i,si0);
L351:;
si0=l5;
si1=560U;
si0+=si1;
i->g0=si0;
L0:;
}

void f435(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l5=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L5:;
{
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=4U;
si2+=si3;
l7=si2;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L8:;
{
si0=l9;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L8;
}
}
L7:;
si0=0U;
l11=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l8=si0;
si0=l4;
si1=120U;
si0*=si1;
l4=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L11:;
{
si0=l8;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l8;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L10;
}
L12:;
si0=l8;
si1=120U;
si0+=si1;
l8=si0;
si0=l4;
si1=-120U;
si0+=si1;
l4=si0;
if(si0){
goto L11;
}
}
si0=0U;
l8=si0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l9=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l4=si0;
si0=l9;
si1=272U;
si0*=si1;
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L14:;
{
si0=l4;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l4;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L15;
}
si0=l4;
l11=si0;
goto L13;
L15:;
si0=l4;
si1=272U;
si0+=si1;
l4=si0;
si0=l9;
si1=-272U;
si0+=si1;
l9=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l12;
si2=248U;
si1*=si2;
si0+=si1;
l10=si0;
si0=0U;
l13=si0;
L18:;
{
si0=l10;
l9=si0;
si0=l4;
si1=l10;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=248U;
si0+=si1;
l9=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
L20:;
si0=l9;
l4=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L17;
L19:;
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l14;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L16;
}
L21:;
si0=l9;
l4=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L18;
}
}
L17:;
si0=0U;
l4=si0;
L16:;
si0=l8;
si1=l11;
si2=l4;
si3=l11;
si1=si3?si1:si2;
si2=l8;
si0=si2?si0:si1;
l12=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l12;
si2=1090600U;
si3=1090312U;
si4=1090476U;
si5=l11;
si3=si5?si3:si4;
si4=l8;
si2=si4?si2:si3;
l7=si2;
si3=32U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l13;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L25:;
{
si0=l2;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si0=f643(i,si0,si1,si2);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l8=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l4=si0;
si0=l8;
si1=48U;
si0*=si1;
l8=si0;
L28:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L27;
}
L29:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l8;
si1=-48U;
si0+=si1;
l8=si0;
if(si0){
goto L28;
}
goto L26;
}
L27:;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L30:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L26;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l4;
si1=4U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=l10;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L30;
}
goto L23;
}
L26:;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L24:;
si0=l12;
si1=18U;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
l8=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l12;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l8;
if(si0){
goto L31;
}
si0=l13;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=!(si0);
if(si0){
goto L22;
}
si0=l13;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L32:;
{
si0=l2;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si0=f643(i,si0,si1,si2);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l8=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l4=si0;
si0=l8;
si1=48U;
si0*=si1;
l8=si0;
L35:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L34;
}
L36:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l8;
si1=-48U;
si0+=si1;
l8=si0;
if(si0){
goto L35;
}
goto L33;
}
L34:;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L37:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L33;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l4;
si1=4U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=l10;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L37;
}
goto L23;
}
L33:;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L22;
}
L31:;
si0=l13;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=!(si0);
if(si0){
goto L23;
}
si0=l13;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L38:;
{
si0=l2;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si0=f643(i,si0,si1,si2);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+256U);
l8=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+248U);
l4=si0;
si0=l8;
si1=48U;
si0*=si1;
l8=si0;
L41:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L40;
}
L42:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l8;
si1=-48U;
si0+=si1;
l8=si0;
if(si0){
goto L41;
}
goto L22;
}
L40:;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L43:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L22;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l4;
si1=4U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=l10;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L43;
}
}
L39:;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L38;
}
}
L23:;
si0=l3;
si1=8U;
si0+=si1;
si1=l12;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
f568(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l12;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+28U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0<<=(si1&31);
l8=si0;
L45:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L46;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l9;
f568(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
L47:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
L46:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l8;
si1=-16U;
si0+=si1;
l8=si0;
goto L45;
}
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+280U);
l5=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
L49:;
{
si0=l12;
l13=si0;
si1=8U;
si0+=si1;
l12=si0;
si0=l5;
if(si0){
goto L51;
}
si0=0U;
l5=si0;
goto L50;
L51:;
si0=l5;
si1=-1U;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l11=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=-8U;
si0+=si1;
l4=si0;
si0=l13;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
l8=si0;
L53:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L52;
}
L54:;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L50;
}
goto L53;
}
L52:;
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l4;
si1=l11;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
l5=si0;
L50:;
si0=l12;
si1=l14;
si0=si0 != si1;
if(si0){
goto L49;
}
}
L48:;
si0=l0;
si1=l1;
si2=l2;
si3=0U;
si4=l4;
f437(i,si0,si1,si2,si3,si4);
goto L3;
L6:;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+284U);
l8=si0;
si1=l4;
si2=24U;
si1*=si2;
si0+=si1;
l7=si0;
L55:;
{
si0=l8;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l2;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f640(i,si0,si1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l2;
si1=l12;
si2=l5;
si0=f640(i,si0,si1,si2);
if(si0){
goto L56;
}
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l9;
si1=12U;
si0*=si1;
l9=si0;
L58:;
{
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si0=si0 != si1;
if(si0){
goto L59;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l10;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L57;
}
L59:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l9;
si1=-12U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L56;
}
goto L58;
}
L57:;
si0=l0;
si1=l1;
si2=l2;
si3=l12;
si4=l5;
f437(i,si0,si1,si2,si3,si4);
goto L3;
L56:;
si0=l8;
si1=24U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L55;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L1;
L2:;
si0=l0;
si1=20U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f436(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj6,sj8,sj9;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l6;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si1+=si2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f305(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
if(si0){
goto L2;
}
si0=0U;
l9=si0;
goto L1;
L2:;
si0=l7;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=0U;
l9=si0;
si0=l7;
l11=si0;
L3:;
{
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+220U);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l14=si0;
si0=l6;
si1=120U;
si0*=si1;
l15=si0;
si0=0U;
l6=si0;
L7:;
{
si0=l14;
si1=l6;
si0+=si1;
l16=si0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l16;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l15;
si1=l6;
si2=120U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
si0=l16;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l16;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
l14=si0;
L10:;
{
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
L11:;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
goto L10;
}
L9:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L15;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
si1=21U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1093384U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=1089860U;
si2=l5;
si3=48U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
goto L12;
L15:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l16;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=66U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=l5;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1093372U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=1089860U;
si2=l5;
si3=48U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L12;
}
L14:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+36U);
l17=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l15=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
sj0=l18;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l9;
f15271(i,si0);
goto L4;
L13:;
si0=1093392U;
si1=43U;
si2=1093548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1089884U;
si1=55U;
si2=l5;
si3=104U;
si2+=si3;
si3=1089940U;
si4=1090032U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
sj0=l18;
l17=sj0;
si0=l9;
l15=si0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+232U);
l16=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l6=si0;
si0=l16;
si1=272U;
si0*=si1;
l16=si0;
L19:;
{
si0=l6;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l6;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L18;
}
L20:;
si0=l6;
si1=272U;
si0+=si1;
l6=si0;
si0=l16;
si1=-272U;
si0+=si1;
l16=si0;
if(si0){
goto L19;
}
goto L17;
}
L18:;
si0=l6;
si1=208U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
l14=si0;
L22:;
{
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L21;
}
L23:;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L17;
}
goto L22;
}
L21:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=32U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=1089860U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si1=l5;
si2=48U;
si1+=si2;
si0=f474(i,si0,si1);
if(si0){
goto L24;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+36U);
l18=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l19=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L16;
}
sj0=l17;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L16;
}
si0=l15;
f15271(i,si0);
goto L16;
L24:;
si0=1089884U;
si1=55U;
si2=l5;
si3=104U;
si2+=si3;
si3=1089940U;
si4=1090032U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
sj0=l17;
l18=sj0;
si0=l15;
l19=si0;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l9;
si2=248U;
si1*=si2;
si0+=si1;
l14=si0;
si0=0U;
l15=si0;
L27:;
{
si0=l14;
l16=si0;
si0=l6;
si1=l14;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l6;
si1=248U;
si0+=si1;
l16=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
L29:;
si0=l16;
l6=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L27;
}
goto L26;
L28:;
si0=l6;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
l20=si0;
si1=l13;
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L30;
}
L31:;
si0=l16;
l6=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L27;
}
goto L26;
L30:;
}
si0=l6;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l6=si0;
L33:;
{
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L32;
}
L34:;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L26;
}
goto L33;
}
L32:;
si0=l12;
if(si0){
goto L38;
}
si0=1U;
l9=si0;
goto L37;
L38:;
si0=l12;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L36;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l12;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L35;
}
L37:;
si0=l9;
si1=l20;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l19;
si0=!(si0);
if(si0){
goto L39;
}
sj0=l18;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L39;
}
si0=l19;
f15271(i,si0);
L39:;
si0=l12;
sj0=(U64)(si0);
l18=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l18;
sj0|=sj1;
l18=sj0;
goto L25;
L36:;
f53(i);
UNREACHABLE;
L35:;
si0=1U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L26:;
si0=l19;
l9=si0;
L25:;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L1:;
si0=l8;
si0=!(si0);
if(si0){
goto L40;
}
si0=l7;
f15271(i,si0);
L40:;
si0=l9;
if(si0){
goto L42;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f276(i,si0,si1,si2,si3);
si0=0U;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+28U);
si2=i32_load(&i->m0,(U64)si2+32U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=3U;
si0<<=(si1&31);
l12=si0;
L43:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L41;
}
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l6;
si1=12U;
si0+=si1;
l16=si0;
si0=l4;
si1=l6;
si2=8U;
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l16;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L43;
}
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
si3=l6;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f276(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1090732U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=216U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=l5;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
goto L41;
L42:;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0+36U,sj1);
L41:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+36U);
l18=sj0;
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
si2=l4;
si3=0U;
si4=l6;
f558(i,si0,si1,si2,si3,si4);
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+212U);
l6=si0;
si0=l12;
si1=120U;
si0*=si1;
l12=si0;
L47:;
{
si0=l6;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l6;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L45;
}
L48:;
si0=l6;
si1=120U;
si0+=si1;
l6=si0;
si0=l12;
si1=-120U;
si0+=si1;
l12=si0;
if(si0){
goto L47;
}
}
L46:;
si0=l1;
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+224U);
l6=si0;
si0=l12;
si1=272U;
si0*=si1;
l12=si0;
L51:;
{
si0=l6;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l6;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L49;
}
L52:;
si0=l6;
si1=272U;
si0+=si1;
l6=si0;
si0=l12;
si1=-272U;
si0+=si1;
l12=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l15;
si2=248U;
si1*=si2;
si0+=si1;
l16=si0;
si0=0U;
l14=si0;
L55:;
{
si0=l16;
l12=si0;
si0=l6;
si1=l16;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l6;
si1=248U;
si0+=si1;
l12=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L56;
}
L57:;
si0=l12;
l6=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l15;
si0=si0 != si1;
if(si0){
goto L55;
}
goto L54;
L56:;
si0=l6;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
si1=l2;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L53;
}
L58:;
si0=l12;
l6=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l15;
si0=si0 < si1;
if(si0){
goto L55;
}
}
L54:;
si0=l5;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1090732U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=66U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si1=1090724U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=l5;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=1090740U;
f683(i,si0,si1);
UNREACHABLE;
L53:;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l6;
si2=1090476U;
si3=l5;
si4=48U;
si3+=si4;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+32U);
l12=si4;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+40U);
si6=l1;
sj6=i64_load(&i->m0,(U64)si6+16U);
l18=sj6;
si6=(U32)(sj6);
si7=23U;
si6>>=(si7&31);
si7=1U;
si6&=si7;
si7=2U;
sj8=l18;
sj9=33554432ULL;
sj8&=sj9;
si8=!(sj8);
si6=si8?si6:si7;
f590(i,si0,si1,si2,si3,si4,si5,si6);
goto L44;
L49:;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l6;
si2=1090312U;
si3=l5;
si4=48U;
si3+=si4;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+32U);
l12=si4;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+40U);
si6=l1;
sj6=i64_load(&i->m0,(U64)si6+16U);
l18=sj6;
si6=(U32)(sj6);
si7=23U;
si6>>=(si7&31);
si7=1U;
si6&=si7;
si7=2U;
sj8=l18;
sj9=33554432ULL;
sj8&=sj9;
si8=!(sj8);
si6=si8?si6:si7;
f590(i,si0,si1,si2,si3,si4,si5,si6);
goto L44;
L45:;
si0=l5;
sj1=l18;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l6;
si2=1090600U;
si3=l5;
si4=48U;
si3+=si4;
si4=l5;
si4=i32_load(&i->m0,(U64)si4+32U);
l12=si4;
si5=l5;
si5=i32_load(&i->m0,(U64)si5+40U);
si6=l1;
sj6=i64_load(&i->m0,(U64)si6+16U);
l18=sj6;
si6=(U32)(sj6);
si7=23U;
si6>>=(si7&31);
si7=1U;
si6&=si7;
si7=2U;
sj8=l18;
sj9=33554432ULL;
sj8&=sj9;
si8=!(sj8);
si6=si8?si6:si7;
f590(i,si0,si1,si2,si3,si4,si5,si6);
L44:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L59;
}
si0=l12;
f15271(i,si0);
L59:;
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f437(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj5,sj7,sj8;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l5;
si1=24U;
si0+=si1;
si1=1093564U;
si2=4U;
f14979(i,si0,si1,si2);
sj0=l6;
si0=(U32)(sj0);
si1=23U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=2U;
sj2=l6;
sj3=33554432ULL;
sj2&=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l5;
si1=64U;
si0+=si1;
si1=l8;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+32U);
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=72U;
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
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
f15271(i,si0);
goto L1;
L3:;
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
f15271(i,si0);
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L1:;
si0=l5;
si1=l7;
si2=2U;
si3=l7;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+272U);
l11=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=-1U;
si0^=si1;
si1=26U;
si0>>=(si1&31);
si1=4U;
si0&=si1;
l8=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l12=si0;
goto L11;
L12:;
si0=l7;
si0=f15269(i,si0);
l12=si0;
L11:;
si0=l12;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=1U;
si0&=si1;
l13=si0;
si0=0U;
l8=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l10;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l7=si0;
si0=0U;
l8=si0;
L14:;
{
si0=l12;
si1=l7;
si0+=si1;
l9=si0;
si1=l11;
si2=l7;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l14;
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
si0=l13;
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
si1=l8;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l11;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
if(si0){
goto L9;
}
si0=l10;
l15=si0;
goto L8;
L10:;
si0=0U;
l15=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l9=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
L9:;
si0=l5;
si1=8U;
si0+=si1;
si1=l10;
f568(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
L8:;
si0=l15;
if(si0){
goto L17;
}
si0=0U;
l12=si0;
si0=0U;
l7=si0;
si0=0U;
l9=si0;
goto L16;
L17:;
si0=0U;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L19:;
{
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
if(si0){
goto L18;
}
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l15;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
}
si0=0U;
l9=si0;
goto L7;
L18:;
si0=1U;
l9=si0;
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
si0=l15;
l12=si0;
L16:;
si0=l7;
si1=l12;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l15;
si1=l7;
si0-=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L21:;
{
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f643(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L23;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
goto L22;
L23:;
si0=l7;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L22:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l12;
l15=si0;
L7:;
si0=l5;
si1=l15;
si2=l9;
si1-=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=2U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si1=8U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0^=si1;
si1=l15;
si0+=si1;
l9=si0;
si0=1U;
l8=si0;
L25:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si2=l14;
si1+=si2;
l15=si1;
si2=-8U;
si1+=si2;
l11=si1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L26;
}
L27:;
si0=l15;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
L26:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L25;
}
}
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
L24:;
si0=1U;
l12=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l8;
si4=l2;
si5=l3;
si6=l4;
si7=1U;
f559(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
if(si0){
goto L29;
}
si0=0U;
l14=si0;
si0=1U;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=0U;
l10=si0;
goto L28;
L29:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l5;
si1=l5;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=0U;
l14=si0;
si0=0U;
l10=si0;
si0=l7;
si1=0U;
si2=l9;
si3=l7;
si4=l9;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l7=si0;
si1=l9;
si2=l7;
si3=l15;
si2+=si3;
si3=l15;
si4=l9;
si5=l7;
si4-=si5;
l13=si4;
si3=si3 > si4;
si1=si3?si1:si2;
l8=si1;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l11;
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
si1=l11;
si2=l7;
si3=12U;
si2*=si3;
si1+=si2;
l7=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l8=si0;
L31:;
{
si0=l5;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si2=l5;
si3=64U;
si2+=si3;
si3=l7;
f424(i,si0,si1,si2,si3);
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L31;
}
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
L30:;
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l15;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=0U;
si1=l15;
si2=l13;
si1-=si2;
l7=si1;
si2=l7;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l14;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l11;
l7=si0;
L33:;
{
si0=l5;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si2=l5;
si3=64U;
si2+=si3;
si3=l7;
f424(i,si0,si1,si2,si3);
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L33;
}
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
L32:;
si0=l15;
si0=!(si0);
if(si0){
goto L28;
}
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
l7=si1;
si2=0U;
si3=l9;
si4=l7;
si5=l9;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l7=si1;
si2=l15;
si1+=si2;
si2=l15;
si3=l9;
si4=l7;
si3-=si4;
l13=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l8;
si1=l7;
si0-=si1;
l8=si0;
si0=l11;
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
L35:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l15;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=0U;
si1=l15;
si2=l13;
si1-=si2;
l7=si1;
si2=l7;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l11;
l7=si0;
L37:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L38:;
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L37;
}
}
L28:;
si0=l9;
si0=!(si0);
if(si0){
goto L39;
}
si0=l11;
f15271(i,si0);
L39:;
si0=l5;
si1=64U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f558(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l12;
si2=l10;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+64U);
si4=l5;
si4=i32_load(&i->m0,(U64)si4+72U);
si5=l1;
sj5=i64_load(&i->m0,(U64)si5+16U);
l6=sj5;
si5=(U32)(sj5);
si6=23U;
si5>>=(si6&31);
si6=1U;
si5&=si6;
si6=2U;
sj7=l6;
sj8=33554432ULL;
sj7&=sj8;
si7=!(sj7);
si5=si7?si5:si6;
f595(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si0=!(si0);
if(si0){
goto L40;
}
si0=l12;
f15271(i,si0);
L40:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L41:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
f15271(i,si0);
L42:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f438(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
F64 l21=0;
F64 l22=0;
U32 l23=0;
U32 l24=0;
U64 l25=0;
U64 l26=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj3;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
l7=si0;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
l8=si0;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l9=si0;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
si0-=si1;
si1=312U;
si0=DIV_U(si0,si1);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
if(si0){
goto L3;
}
si0=0U;
l13=si0;
L5:;
{
si0=l4;
si1=l13;
si2=312U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+224U);
l2=si0;
si1=l5;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=272U;
si1*=si2;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+212U);
l1=si0;
si1=l5;
si2=220U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=120U;
si1*=si2;
si0+=si1;
l14=si0;
L7:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
{
si0=l1;
si1=l14;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
si0=l1;
si1=120U;
si0+=si1;
l15=si0;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
}
si0=l15;
si1=-112U;
si0+=si1;
l16=si0;
si0=l15;
l1=si0;
goto L8;
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
L11:;
{
si0=l2;
si1=l6;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=156U;
si0+=si1;
l1=si0;
si0=l2;
si1=272U;
si0+=si1;
l15=si0;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
}
si0=l15;
si1=-112U;
si0+=si1;
l16=si0;
si0=0U;
l1=si0;
si0=l15;
l2=si0;
L8:;
si0=l12;
si1=l11;
si2=l5;
si3=l16;
si3=i32_load(&i->m0,(U64)si3);
sd0=f15086(i,si0,si1,si2,si3);
goto L7;
}
L6:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L2;
}
L4:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
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
L3:;
si0=l3;
si1=164U;
si0+=si1;
l17=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l19=si0;
si0=0U;
l20=si0;
L12:;
{
si0=l4;
si1=l20;
si2=312U;
si1*=si2;
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0+224U);
l2=si0;
si1=l16;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=272U;
si1*=si2;
si0+=si1;
l6=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0+212U);
l1=si0;
si1=l16;
si2=220U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=120U;
si1*=si2;
si0+=si1;
l14=si0;
si0=0U;
l5=si0;
L13:;
{
sd0=l22;
l21=sd0;
si0=l5;
l23=si0;
si0=l15;
l24=si0;
L15:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
{
si0=l1;
si1=l14;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
si0=l1;
si1=120U;
si0+=si1;
l15=si0;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
}
si0=l15;
si1=-112U;
si0+=si1;
l13=si0;
si0=l15;
l1=si0;
goto L16;
L17:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L19:;
{
si0=l2;
si1=l6;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l2;
si1=156U;
si0+=si1;
l1=si0;
si0=l2;
si1=272U;
si0+=si1;
l15=si0;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L19;
}
}
si0=l15;
si1=-112U;
si0+=si1;
l13=si0;
si0=0U;
l1=si0;
si0=l15;
l2=si0;
L16:;
si0=l12;
si1=l11;
si2=l5;
si3=l13;
si3=i32_load(&i->m0,(U64)si3);
l15=si3;
sd0=f15086(i,si0,si1,si2,si3);
l22=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l23;
si0=!(si0);
sd1=l21;
sd2=l22;
si1=sd1 < sd2;
si0|=si1;
if(si0){
goto L13;
}
goto L15;
}
L14:;
}
si0=l23;
si0=!(si0);
if(si0){
goto L22;
}
si0=l16;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l1=si0;
si0=l19;
l5=si0;
si0=l18;
l2=si0;
L24:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l16;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=l6;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L23;
}
L25:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L24;
}
goto L22;
}
L23:;
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l23;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1091192U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l16;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=l3;
si1=l16;
si1=i32_load(&i->m0,(U64)si1+80U);
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=178U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=178U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=178U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=1091228U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l3;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=120U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l5=si0;
if(si0){
goto L21;
}
L22:;
si0=l3;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L20;
L21:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+124U);
l25=sj0;
si0=l3;
si1=136U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l3;
sj1=l25;
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l17;
si2=l3;
si3=136U;
si2+=si3;
sj3=l26;
si3=(U32)(sj3);
si4=l1;
si3=si3 > si4;
l1=si3;
si1=si3?si1:si2;
l2=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l23;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l24;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+148U);
sj1=l25;
si1=(U32)(sj1);
si2=l1;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
si1=l5;
si2=l1;
si0=si2?si0:si1;
f15271(i,si0);
L20:;
si0=l7;
si1=l3;
si2=32U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=1U;
si0+=si1;
l20=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L2:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f439(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L3:;
{
si0=l8;
l2=si0;
L5:;
{
si0=l7;
l8=si0;
si0=l2;
si1=l7;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=l2;
si2=248U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
L6:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
l2=si0;
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L2;
}
L4:;
si0=l1;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=4U;
si0=f344(i,si0,si1);
if(si0){
goto L7;
}
si0=l2;
si1=17U;
si0=f344(i,si0,si1);
l10=si0;
si0=l9;
si1=255U;
si0&=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l2;
si1=16U;
si0=f344(i,si0,si1);
l10=si0;
si0=l9;
if(si0){
goto L9;
}
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l2;
si1=7U;
si0=f344(i,si0,si1);
if(si0){
goto L1;
}
L7:;
si0=l3;
si1=l4;
si0=si0 < si1;
if(si0){
goto L3;
}
}
L2:;
si0=0U;
l2=si0;
L1:;
si0=l0;
si1=1088280U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f440(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l7=si0;
L3:;
{
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1094880U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=68U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l5;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l2;
si0+=si1;
si1=l9;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=l2;
si2=l5;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
f15271(i,si0);
L5:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L3;
}
}
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l7=si0;
L8:;
{
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1094880U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=68U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l5;
f580(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l2;
si0+=si1;
si1=l9;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=l2;
si2=l5;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l9;
f15271(i,si0);
L10:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L8;
}
}
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
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
L6:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f441(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=64U;
si0+=si1;
l3=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
sj1=l4;
sj2=7816392313619706465ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
sj1=l4;
sj2=8317987319222330741ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=l5;
sj2=8387220255154660723ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=l5;
sj2=7237128888997146477ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f442(i,si0,si1,si2);
si0=l2;
si1=255U;
i32_store8(&i->m0,(U64)si0+79U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=79U;
si1+=si2;
si2=1U;
f442(i,si0,si1,si2);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+24U);
l4=sj0;
si0=l3;
sj0=i64_load32_u(&i->m0,(U64)si0);
l6=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+32U);
l8=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
sj0=l8;
sj1=l7;
sj2=l6;
sj3=56ULL;
sj2<<=(sj3&63);
sj1|=sj2;
l6=sj1;
sj0^=sj1;
l7=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l7;
sj2=l9;
sj1+=sj2;
l7=sj1;
sj0^=sj1;
l8=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l4;
sj3=l5;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l9=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l9;
sj2=l7;
sj3=l4;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l5;
sj3^=sj4;
l4=sj3;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=255ULL;
sj2^=sj3;
sj1+=sj2;
l7=sj1;
sj0^=sj1;
l9=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l9;
sj2=l8;
sj3=l6;
sj2^=sj3;
sj3=l5;
sj4=l4;
sj5=17ULL;
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l4=sj3;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l6=sj1;
sj0^=sj1;
l8=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l5;
sj3=l4;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l4=sj2;
sj3=l7;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
l8=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l5;
sj3=l4;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l4=sj2;
sj3=l6;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l6=sj1;
sj0^=sj1;
l8=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l4;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l5;
sj2^=sj3;
l4=sj2;
sj3=l7;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l4;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l5;
sj1^=sj2;
l4=sj1;
sj2=13ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l4;
sj3=l6;
sj2+=sj3;
sj1^=sj2;
l4=sj1;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l4;
sj2=l7;
sj1+=sj2;
l4=sj1;
sj2=32ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l4;
sj0^=sj1;
L0:;
return sj0;
}

void f442(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l3=si0;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l2;
si1=8U;
si2=l3;
si1-=si2;
l4=si1;
si2=l2;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
sj0=0ULL;
l7=sj0;
goto L3;
L4:;
si0=l1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l7=sj0;
si0=4U;
l6=si0;
L3:;
si0=l6;
si1=1U;
si0|=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=l6;
si0+=si1;
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=l6;
si2=3U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
si0=l6;
si1=2U;
si0|=si1;
l6=si0;
L5:;
si0=l6;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=l6;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=l6;
si2=3U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
L6:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+48U);
sj2=l7;
si3=l3;
si4=3U;
si3<<=(si4&31);
si4=56U;
si3&=si4;
sj3=(U64)(si3);
sj2<<=(sj3&63);
sj1|=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+24U);
sj3=l7;
sj2^=sj3;
l8=sj2;
sj1+=sj2;
l9=sj1;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+16U);
l10=sj2;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l10;
si4=l0;
sj4=i64_load(&i->m0,(U64)si4);
sj3+=sj4;
l10=sj3;
sj2^=sj3;
l11=sj2;
sj1+=sj2;
l12=sj1;
sj2=l11;
sj3=17ULL;
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l12;
sj2=32ULL;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l9;
sj2=l8;
sj3=16ULL;
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
l8=sj1;
sj2=21ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l8;
sj3=l10;
sj4=32ULL;
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l8=sj2;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l8;
sj2=l7;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L0;
L1:;
si0=l2;
si1=l4;
si0-=si1;
l2=si0;
si1=7U;
si0&=si1;
l6=si0;
si0=l4;
si1=l2;
si2=-8U;
si1&=si2;
l2=si1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+24U);
l9=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
L9:;
{
si0=l1;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=l9;
sj0^=sj1;
l9=sj0;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj1=l10;
sj2=l7;
sj1+=sj2;
l10=sj1;
sj2=l7;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
l7=sj1;
sj0+=sj1;
l12=sj0;
sj1=l7;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l7=sj0;
sj0=l8;
sj1=l9;
sj2=16ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l8=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l10;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l10=sj1;
sj0^=sj1;
l9=sj0;
sj0=l12;
sj1=32ULL;
sj0=I64_ROTL(sj0,sj1);
l8=sj0;
sj0=l10;
sj1=l11;
sj0^=sj1;
l10=sj0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L9;
}
}
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l6;
si1=3U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=0U;
l2=si0;
sj0=0ULL;
l7=sj0;
goto L10;
L11:;
si0=l1;
si1=l4;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l7=sj0;
si0=4U;
l2=si0;
L10:;
si0=l2;
si1=1U;
si0|=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l1;
si1=l2;
si2=l4;
si1+=si2;
si0+=si1;
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=l2;
si2=3U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
si0=l2;
si1=2U;
si0|=si1;
l2=si0;
L12:;
si0=l2;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
si1=l2;
si2=l4;
si1+=si2;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=3U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l7;
sj0|=sj1;
l7=sj0;
L13:;
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
L0:;
}

U64 f443(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=64U;
si0+=si1;
l4=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=l5;
sj2=7816392313619706465ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l5;
sj2=8317987319222330741ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
sj1=l6;
sj2=8387220255154660723ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=l6;
sj2=7237128888997146477ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f442(i,si0,si1,si2);
si0=l3;
si1=255U;
i32_store8(&i->m0,(U64)si0+79U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=79U;
si1+=si2;
si2=1U;
f442(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l5=sj0;
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+56U);
l8=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+32U);
l9=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
sj0=l9;
sj1=l8;
sj2=l7;
sj3=56ULL;
sj2<<=(sj3&63);
sj1|=sj2;
l7=sj1;
sj0^=sj1;
l8=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l10;
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l9=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l9;
sj2=l5;
sj3=l6;
sj2+=sj3;
l6=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l9=sj1;
sj0^=sj1;
l10=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l8;
sj3=l5;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l6;
sj3^=sj4;
l5=sj3;
sj2+=sj3;
l6=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=255ULL;
sj2^=sj3;
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l10=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l9;
sj3=l7;
sj2^=sj3;
sj3=l6;
sj4=l5;
sj5=17ULL;
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l5=sj3;
sj2+=sj3;
l6=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
l9=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l9;
sj2=l6;
sj3=l5;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l5=sj2;
sj3=l8;
sj2+=sj3;
l6=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l9=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l9;
sj2=l6;
sj3=l5;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l5=sj2;
sj3=l7;
sj2+=sj3;
l6=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
l9=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l9;
sj2=l5;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l6;
sj2^=sj3;
l5=sj2;
sj3=l8;
sj2+=sj3;
l6=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l8=sj1;
sj0^=sj1;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l5;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l6;
sj1^=sj2;
l5=sj1;
sj2=13ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l5;
sj3=l7;
sj2+=sj3;
sj1^=sj2;
l5=sj1;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l5;
sj2=l8;
sj1+=sj2;
l5=sj1;
sj2=32ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l5;
sj0^=sj1;
L0:;
return sj0;
}

void f444(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=236U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=48U;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
l9=si0;
goto L2;
L4:;
si0=l5;
l9=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0-=si1;
si1=l8;
si2=1U;
si1+=si2;
l10=si1;
si2=l5;
si1-=si2;
l11=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=48U;
si0+=si1;
si1=l5;
si2=l11;
f576(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
L5:;
si0=l10;
si1=l5;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l11;
si1=3U;
si0&=si1;
l10=si0;
si0=l8;
si1=l5;
si0-=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l11;
si1=-4U;
si0&=si1;
l11=si0;
si0=l7;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
L8:;
{
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
L9:;
{
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L9;
}
}
L6:;
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L2;
L3:;
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=0U;
si2=1U;
f576(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L11;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L11:;
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
f15271(i,si0);
L12:;
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=0U;
si1=0U;
si2=1086616U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l9;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+60U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
goto L1;
L13:;
si0=l8;
si1=l9;
si2=1086616U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f445(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
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
U32 l25=0;
U32 l26=0;
U64 l27=0;
U32 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U64 l32=0;
U64 l33=0;
U32 l34=0;
U32 l35=0;
U64 l36=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
f446(i,si0,si1);
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+116U);
l4=si0;
if(si0){
goto L9;
}
si0=0U;
l5=si0;
goto L8;
L9:;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L11;
}
si0=4U;
l5=si0;
si0=0U;
l7=si0;
goto L10;
L11:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L13;
}
si0=l8;
l5=si0;
goto L12;
L13:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l5=si0;
goto L12;
L14:;
si0=l7;
si0=f15269(i,si0);
l5=si0;
L12:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
L10:;
si0=l5;
si1=l4;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
l9=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l9;
sj0|=sj1;
l9=sj0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
if(si0){
goto L16;
}
goto L15;
L16:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L18;
}
si0=4U;
l3=si0;
si0=0U;
l7=si0;
goto L17;
L18:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L20;
}
si0=l8;
l3=si0;
goto L19;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l3=si0;
goto L19;
L21:;
si0=l7;
si0=f15269(i,si0);
l3=si0;
L19:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
L17:;
si0=l3;
si1=l4;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
l11=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l11;
sj0|=sj1;
l11=sj0;
L15:;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
l14=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l15=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l16=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
if(si0){
goto L23;
}
goto L22;
L23:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
L22:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
if(si0){
goto L25;
}
goto L24;
L25:;
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
L24:;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l21=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l23=si0;
if(si0){
goto L27;
}
si0=0U;
l4=si0;
goto L26;
L27:;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L29;
}
si0=4U;
l4=si0;
si0=0U;
l25=si0;
goto L28;
L29:;
si0=l8;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l8;
si1=24U;
si0*=si1;
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l8;
si1=89478486U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l26=si0;
si0=l25;
if(si0){
goto L31;
}
si0=l26;
l4=si0;
goto L30;
L31:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l26;
si1=l25;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l26;
si1=l25;
si0=f15277(i,si0,si1);
l4=si0;
goto L30;
L32:;
si0=l25;
si0=f15269(i,si0);
l4=si0;
L30:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
L28:;
si0=l4;
si1=l23;
si2=l25;
si0=f15390(i,si0,si1,si2);
si0=l8;
sj0=(U64)(si0);
l27=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l27;
sj0|=sj1;
l27=sj0;
L26:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
l26=si0;
if(si0){
goto L34;
}
goto L33;
L34:;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l28=si0;
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
if(si0){
goto L35;
}
si0=0U;
l25=si0;
goto L33;
L35:;
si0=l1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L37;
}
si0=1U;
l25=si0;
goto L36;
L37:;
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l25=si0;
si0=!(si0);
if(si0){
goto L3;
}
L36:;
si0=l25;
si1=l23;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l8;
sj0=(U64)(si0);
l29=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l29;
sj0|=sj1;
l29=sj0;
L33:;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+104U);
l31=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
si2=168U;
si1+=si2;
f533(i,si0,si1);
si0=l1;
si1=160U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+152U);
l33=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l34=si0;
if(si0){
goto L39;
}
si0=0U;
l1=si0;
goto L38;
L39:;
si0=l1;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L41;
}
si0=4U;
l1=si0;
si0=0U;
l23=si0;
goto L40;
L41:;
si0=l8;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l8;
si1=4U;
si0<<=(si1&31);
l23=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l8;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l35=si0;
si0=l23;
if(si0){
goto L43;
}
si0=l35;
l1=si0;
goto L42;
L43:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l35;
si1=l23;
si0=si0 <= si1;
if(si0){
goto L44;
}
si0=l35;
si1=l23;
si0=f15277(i,si0,si1);
l1=si0;
goto L42;
L44:;
si0=l23;
si0=f15269(i,si0);
l1=si0;
L42:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
L40:;
si0=l1;
si1=l34;
si2=l23;
si0=f15390(i,si0,si1,si2);
si0=l8;
sj0=(U64)(si0);
l36=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l36;
sj0|=sj1;
l36=sj0;
L38:;
si0=l0;
si1=200U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=88U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=292U;
si0+=si1;
sj1=l36;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l0;
si1=160U;
si0+=si1;
sj1=l32;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l33;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l0;
sj1=l29;
i64_store(&i->m0,(U64)si0+140U,sj1);
si0=l0;
si1=l25;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l0;
si1=l28;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l0;
si1=l26;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l30;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l31;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l0;
si1=l24;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l0;
sj1=l27;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=192U;
si0+=si1;
si1=l2;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=184U;
si0+=si1;
si1=l2;
si2=112U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=176U;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
UNREACHABLE;
L4:;
si0=l26;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l35;
si1=l23;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f446(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l14=0;
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L8;
}
si0=0U;
l10=si0;
goto L7;
L8:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L10;
}
si0=4U;
l10=si0;
si0=0U;
l12=si0;
goto L9;
L10:;
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l11;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=l12;
if(si0){
goto L12;
}
si0=l13;
l10=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l13;
si1=l12;
si0=f15277(i,si0,si1);
l10=si0;
goto L11;
L13:;
si0=l12;
si0=f15269(i,si0);
l10=si0;
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l10;
si1=l9;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l14=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
if(si0){
goto L15;
}
goto L14;
L15:;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L17;
}
si0=4U;
l8=si0;
si0=0U;
l12=si0;
goto L16;
L17:;
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l11;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=l12;
if(si0){
goto L19;
}
si0=l13;
l8=si0;
goto L18;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l13;
si1=l12;
si0=f15277(i,si0,si1);
l8=si0;
goto L18;
L20:;
si0=l12;
si0=f15269(i,si0);
l8=si0;
L18:;
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
L16:;
si0=l8;
si1=l9;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l11;
sj0=(U64)(si0);
l16=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l16;
sj0|=sj1;
l16=sj0;
L14:;
si0=0U;
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l17=si0;
if(si0){
goto L22;
}
si0=0U;
l12=si0;
goto L21;
L22:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L24;
}
si0=4U;
l12=si0;
si0=0U;
l13=si0;
goto L23;
L24:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l18=si0;
si0=l13;
if(si0){
goto L26;
}
si0=l18;
l12=si0;
goto L25;
L26:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l18;
si1=l13;
si0=f15277(i,si0,si1);
l12=si0;
goto L25;
L27:;
si0=l13;
si0=f15269(i,si0);
l12=si0;
L25:;
si0=l12;
si0=!(si0);
if(si0){
goto L4;
}
L23:;
si0=l12;
si1=l17;
si2=l13;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l19=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l19;
sj0|=sj1;
l19=sj0;
L21:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l17=si0;
if(si0){
goto L29;
}
goto L28;
L29:;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L31;
}
si0=4U;
l11=si0;
si0=0U;
l13=si0;
goto L30;
L31:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l18=si0;
si0=l13;
if(si0){
goto L33;
}
si0=l18;
l11=si0;
goto L32;
L33:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l18;
si1=l13;
si0=f15277(i,si0,si1);
l11=si0;
goto L32;
L34:;
si0=l13;
si0=f15269(i,si0);
l11=si0;
L32:;
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
L30:;
si0=l11;
si1=l17;
si2=l13;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l20=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l20;
sj0|=sj1;
l20=sj0;
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l17=si0;
if(si0){
goto L36;
}
si0=0U;
l1=si0;
goto L35;
L36:;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L38;
}
si0=4U;
l1=si0;
si0=0U;
l13=si0;
goto L37;
L38:;
si0=l9;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=4U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l18=si0;
si0=l13;
if(si0){
goto L40;
}
si0=l18;
l1=si0;
goto L39;
L40:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l18;
si1=l13;
si0=f15277(i,si0,si1);
l1=si0;
goto L39;
L41:;
si0=l13;
si0=f15269(i,si0);
l1=si0;
L39:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
L37:;
si0=l1;
si1=l17;
si2=l13;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l21=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l21;
sj0|=sj1;
l21=sj0;
L35:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=80U;
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=56U;
si0+=si1;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l13;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l13;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l18;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l18;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l18;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f447(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=1328U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l7=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=1U;
l8=si0;
si0=4U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=5U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
l7=si0;
si0=l9;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L21;
default:
goto L22;
}
L22:;
si0=l9;
si1=-7U;
si0+=si1;
l9=si0;
si0=0U;
l8=si0;
si0=6U;
l7=si0;
goto L20;
L21:;
si0=0U;
l8=si0;
si0=5U;
l7=si0;
si0=0U;
l9=si0;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=3576U;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l5;
si1=584U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=3436U;
si1+=si2;
l12=si1;
si2=l7;
si3=12U;
si2*=si3;
si1+=si2;
l13=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=656U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=l7;
si3=312U;
si2*=si3;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=656U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
l14=si1;
si2=l7;
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l5;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+584U,sj1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l16=si0;
si0=l5;
si1=1072U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l15;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l14;
si1=l7;
si2=1U;
si1+=si2;
l1=si1;
si0-=si1;
si1=l15;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l11;
si1=3436U;
si0+=si1;
si1=l12;
si2=l1;
si3=12U;
si2*=si3;
si1+=si2;
si2=l15;
si3=12U;
si2*=si3;
si0=f15390(i,si0,si1,si2);
si0=l11;
si1=l6;
si2=l1;
si3=312U;
si2*=si3;
si1+=si2;
si2=l15;
si3=312U;
si2*=si3;
si0=f15390(i,si0,si1,si2);
l15=si0;
si0=l6;
si1=l7;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=584U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=672U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=64U;
si0+=si1;
si1=l5;
si2=656U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+656U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=732U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=1072U;
si0+=si1;
si1=l5;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l15;
si2=l8;
si0=si2?si0:si1;
l17=si0;
si1=3436U;
si0+=si1;
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l9;
si1=l17;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
l7=si1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L19:;
si0=l6;
si1=3436U;
si0+=si1;
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l9=si1;
si2=12U;
si1*=si2;
si0+=si1;
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si0=l9;
si1=1U;
si0+=si1;
l1=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l15;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L23;
L24:;
si0=l8;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
si1=l15;
si2=l7;
si3=l9;
si2-=si3;
l8=si2;
si3=12U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
si0=l15;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
si2=312U;
si1*=si2;
si0+=si1;
si1=l6;
si2=l9;
si3=312U;
si2*=si3;
si1+=si2;
si2=l8;
si3=312U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
L23:;
si0=l6;
si1=l9;
si2=312U;
si1*=si2;
si0+=si1;
si1=l3;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3570U,si1);
goto L16;
L18:;
si0=l1;
si1=12U;
si0+=si1;
si1=l1;
si2=l7;
si3=l9;
si2-=si3;
l13=si2;
si3=12U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l9;
si2=312U;
si1*=si2;
si0+=si1;
l1=si0;
si1=312U;
si0+=si1;
si1=l1;
si2=l13;
si3=312U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
L17:;
si0=l10;
si1=0U;
si2=l8;
si0=si2?si0:si1;
l18=si0;
si0=l17;
si1=l9;
si2=312U;
si1*=si2;
si0+=si1;
si1=l3;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l17;
si1=l7;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l5;
si1=984U;
si0+=si1;
si1=l5;
si2=1072U;
si1+=si2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=332U;
si0+=si1;
si1=l5;
si2=732U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l16;
si1=2U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l17;
l6=si0;
L16:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L14;
L15:;
si0=l5;
si1=256U;
si0+=si1;
si1=l5;
si2=984U;
si1+=si2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l5;
si2=332U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+3432U);
l1=si0;
if(si0){
goto L27;
}
si0=0U;
l10=si0;
goto L26;
L27:;
si0=l3;
si1=984U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si0=l3;
si1=256U;
si0+=si1;
si1=16U;
si0+=si1;
l14=si0;
si0=l15;
l19=si0;
si0=0U;
l7=si0;
si0=l16;
l20=si0;
L28:;
{
si0=l1;
l13=si0;
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
si1=3568U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l6=si0;
si0=l13;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l21=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=1U;
l22=si0;
si0=l6;
si1=5U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l6;
l8=si0;
si0=4U;
l6=si0;
goto L32;
L33:;
si0=l6;
l8=si0;
si0=l6;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L32;
case 1:
goto L34;
default:
goto L35;
}
L35:;
si0=l6;
si1=-7U;
si0+=si1;
l8=si0;
si0=0U;
l22=si0;
si0=6U;
l6=si0;
goto L32;
L34:;
si0=0U;
l22=si0;
si0=5U;
l6=si0;
si0=0U;
l8=si0;
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=3624U;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l11;
si1=0U;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l3;
si1=1056U;
si0+=si1;
si1=8U;
si0+=si1;
l23=si0;
si1=l13;
si2=3436U;
si1+=si2;
l24=si1;
si2=l6;
si3=12U;
si2*=si3;
si1+=si2;
l2=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=656U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
si1=l13;
si2=l6;
si3=312U;
si2*=si3;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=656U;
si0+=si1;
si1=16U;
si0+=si1;
l26=si0;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=656U;
si0+=si1;
si1=24U;
si0+=si1;
l27=si0;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=656U;
si0+=si1;
si1=32U;
si0+=si1;
l28=si0;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=656U;
si0+=si1;
si1=40U;
si0+=si1;
l29=si0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=656U;
si0+=si1;
si1=48U;
si0+=si1;
l30=si0;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l13;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
l31=si1;
si2=l6;
si3=-1U;
si2^=si3;
si1+=si2;
l7=si1;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1056U,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l16=si0;
si0=l3;
si1=1072U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l31;
si1=l6;
si2=1U;
si1+=si2;
l15=si1;
si0-=si1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
si1=3436U;
si0+=si1;
si1=l24;
si2=l15;
si3=12U;
si2*=si3;
si1+=si2;
si2=l7;
si3=12U;
si2*=si3;
si0=f15390(i,si0,si1,si2);
si0=l11;
si1=l13;
si2=l15;
si3=312U;
si2*=si3;
si1+=si2;
si2=l7;
si3=312U;
si2*=si3;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l13;
si1=l6;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l3;
si1=984U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+656U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=16U;
si0+=si1;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=24U;
si0+=si1;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=32U;
si0+=si1;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=40U;
si0+=si1;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=48U;
si0+=si1;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+1056U);
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l3;
si1=732U;
si0+=si1;
si1=l3;
si2=1072U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l1=si0;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l21;
si1=l6;
si0-=si1;
l6=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l2;
si1=3576U;
si0+=si1;
si1=l13;
si2=l15;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=3576U;
si1+=si2;
si2=l6;
si3=2U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l15=si0;
si0=0U;
l6=si0;
L37:;
{
si0=l15;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l6;
si1=l6;
si2=l1;
si1=si1 < si2;
si0+=si1;
l6=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L37;
}
}
L36:;
si0=l3;
si1=656U;
si0+=si1;
si1=l3;
si2=984U;
si1+=si2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=1072U;
si0+=si1;
si1=l3;
si2=732U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l13;
si1=l2;
si2=l22;
si0=si2?si0:si1;
l6=si0;
si1=3436U;
si0+=si1;
l15=si0;
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
l22=si1;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+256U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=256U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L29;
L31:;
si0=l13;
si1=3436U;
si0+=si1;
l2=si0;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
si0=l21;
si1=l6;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+256U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=256U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L38;
L39:;
si0=l2;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
si1=l7;
si2=l21;
si3=l6;
si2-=si3;
l2=si2;
si3=12U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=256U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+256U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l1;
si2=312U;
si1*=si2;
si0+=si1;
si1=l13;
si2=l6;
si3=312U;
si2*=si3;
si1+=si2;
si2=l2;
si3=312U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
L38:;
si0=l21;
si1=1U;
si0+=si1;
l2=si0;
si0=l13;
si1=l6;
si2=312U;
si1*=si2;
si0+=si1;
l7=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l20;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=48U;
si0+=si1;
si1=l14;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l14;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l14;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l14;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l14;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=60U;
si0+=si1;
si1=l3;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l13;
si1=3576U;
si0+=si1;
l7=si0;
si0=l21;
si1=2U;
si0+=si1;
l15=si0;
si0=l21;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L40;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l21;
si3=l6;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
L40:;
si0=l13;
si1=l2;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l7;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l21;
si1=l6;
si0-=si1;
l15=si0;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l13;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3580U;
si0+=si1;
l6=si0;
L42:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l2;
si1=l13;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L42;
}
}
L41:;
si0=l15;
si1=3U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l1;
si1=3U;
si0+=si1;
l6=si0;
si0=-2U;
si1=l21;
si0-=si1;
l2=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=l13;
si0+=si1;
si1=3588U;
si0+=si1;
l1=si0;
L43:;
{
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
si2=-3U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
si2=-2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=l6;
si2=4U;
si1+=si2;
l6=si1;
si0+=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L43;
}
goto L25;
}
L30:;
si0=l15;
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
si1=l1;
si2=l22;
si3=l8;
si2-=si3;
l15=si2;
si3=12U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=256U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+256U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l7;
si2=312U;
si1*=si2;
si0+=si1;
si1=l6;
si2=l8;
si3=312U;
si2*=si3;
si1+=si2;
si2=l15;
si3=312U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
L29:;
si0=l22;
si1=1U;
si0+=si1;
l15=si0;
si0=l6;
si1=l8;
si2=312U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l20;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=48U;
si0+=si1;
si1=l14;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l14;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l14;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l14;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l14;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=60U;
si0+=si1;
si1=l3;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=3576U;
si0+=si1;
l1=si0;
si0=l8;
si1=2U;
si0+=si1;
l20=si0;
si1=l22;
si2=2U;
si1+=si2;
l21=si1;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l1;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l22;
si3=l8;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
L44:;
si0=l1;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l15;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l7;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l22;
si1=l8;
si0-=si1;
l21=si0;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l6;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3580U;
si0+=si1;
l1=si0;
L47:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l7;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L47;
}
}
L46:;
si0=l21;
si1=3U;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l7;
si1=3U;
si0+=si1;
l1=si0;
si0=-2U;
si1=l22;
si0-=si1;
l8=si0;
si0=l6;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3588U;
si0+=si1;
l7=si0;
L48:;
{
si0=l7;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
si2=-3U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l15;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
si2=-2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l15;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l15;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l15;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l8;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
si0+=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L48;
}
}
L45:;
si0=l3;
si1=584U;
si0+=si1;
si1=l3;
si2=656U;
si1+=si2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=332U;
si0+=si1;
si1=l3;
si2=1072U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l16;
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l3;
si1=256U;
si0+=si1;
si1=l3;
si2=584U;
si1+=si2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l3;
si2=332U;
si1+=si2;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l13;
l6=si0;
si0=l2;
l19=si0;
si0=l10;
l7=si0;
si0=l16;
l20=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+3432U);
l1=si0;
if(si0){
goto L28;
}
}
L26:;
si0=l3;
si1=1072U;
si0+=si1;
si1=l3;
si2=256U;
si1+=si2;
si2=72U;
si0=f15390(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=3624U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+3576U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l10;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l1=si0;
si1=10U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si2=1U;
si1+=si2;
l7=si1;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l6;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l2=si0;
si1=3444U;
si0+=si1;
si1=l3;
si2=256U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3436U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+256U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
si2=312U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+1088U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=1072U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=1072U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=1072U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=1072U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=1128U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
si1=l3;
si2=1136U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l16;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=60U;
si0+=si1;
si1=l3;
si2=252U;
si0=f15390(i,si0,si1,si2);
si0=l11;
si1=l7;
i32_store16(&i->m0,(U64)si0+3568U,si1);
si0=l11;
si1=l6;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l6;
si1=3576U;
si0+=si1;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L25:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
L14:;
si0=l5;
si1=1328U;
si0+=si1;
i->g0=si0;
goto L0;
L13:;
si0=8U;
si1=3576U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l15;
si1=11U;
si2=1091664U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1091608U;
si1=40U;
si2=1091648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1091696U;
si1=53U;
si2=1091752U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=8U;
si1=3624U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l7;
si1=11U;
si2=1091664U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1091608U;
si1=40U;
si2=1091648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=12U;
si2=1091680U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1091608U;
si1=40U;
si2=1091648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1091248U;
si1=43U;
si2=1091388U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=8U;
si1=3624U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1091544U;
si1=48U;
si2=1091592U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1091404U;
si1=32U;
si2=1091528U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f448(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l8=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=1U;
l9=si0;
si0=4U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=5U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l10;
l8=si0;
si0=l10;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L21;
default:
goto L22;
}
L22:;
si0=l10;
si1=-7U;
si0+=si1;
l10=si0;
si0=0U;
l9=si0;
si0=6U;
l8=si0;
goto L20;
L21:;
si0=0U;
l9=si0;
si0=5U;
l8=si0;
si0=0U;
l10=si0;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=184U;
si0=f15269(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l12;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
l13=si1;
si2=l8;
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l1;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l13;
si1=l8;
si2=1U;
si1+=si2;
l14=si1;
si0-=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l7;
si1=88U;
si0+=si1;
l15=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l7;
si1=l16;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l12;
si1=l7;
si2=l14;
si3=3U;
si2<<=(si3&31);
l14=si2;
si1+=si2;
si2=l1;
si3=3U;
si2<<=(si3&31);
l1=si2;
si0=f15390(i,si0,si1,si2);
l19=si0;
si1=88U;
si0+=si1;
si1=l15;
si2=l14;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=l8;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l10;
si1=l7;
si2=l19;
si3=l9;
si1=si3?si1:si2;
l20=si1;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l20;
si1=l10;
si2=3U;
si1<<=(si2&31);
l1=si1;
si2=8U;
si1+=si2;
l14=si1;
si0+=si1;
si1=l20;
si2=l1;
si1+=si2;
si2=l8;
si3=l10;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l15=si2;
si0=f15391(i,si0,si1,si2);
si0=l20;
si1=88U;
si0+=si1;
l19=si0;
si1=l14;
si0+=si1;
si1=l19;
si2=l1;
si1+=si2;
si2=l15;
si0=f15391(i,si0,si1,si2);
L23:;
si0=l11;
si1=0U;
si2=l9;
si0=si2?si0:si1;
l21=si0;
si0=l20;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=92U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l8;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+176U);
l1=si0;
if(si0){
goto L18;
}
si0=0U;
l11=si0;
goto L17;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l21=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=1U;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l7;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l7;
si2=l10;
si3=3U;
si2<<=(si3&31);
l12=si2;
si1+=si2;
si2=l8;
si3=l10;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l9=si2;
si0=f15391(i,si0,si1,si2);
si0=l7;
si1=88U;
si0+=si1;
l11=si0;
si1=l1;
si0+=si1;
si1=l11;
si2=l12;
si1+=si2;
si2=l9;
si0=f15391(i,si0,si1,si2);
L24:;
si0=l7;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=92U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l8;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+182U,si1);
goto L14;
L18:;
si0=0U;
l8=si0;
L25:;
{
si0=l12;
l14=si0;
si0=l13;
l15=si0;
si0=l17;
l19=si0;
si0=l16;
l22=si0;
si0=l18;
l23=si0;
si0=l7;
l5=si0;
si0=l1;
l7=si0;
si0=l11;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=180U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l3=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=1U;
l9=si0;
si0=l1;
si1=5U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l1;
l2=si0;
si0=4U;
l1=si0;
goto L26;
L27:;
si0=l1;
l2=si0;
si0=l1;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L26;
case 1:
goto L28;
default:
goto L29;
}
L29:;
si0=l1;
si1=-7U;
si0+=si1;
l2=si0;
si0=0U;
l9=si0;
si0=6U;
l1=si0;
goto L26;
L28:;
si0=0U;
l9=si0;
si0=5U;
l1=si0;
si0=0U;
l2=si0;
L26:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=232U;
si0=f15269(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l12;
si1=0U;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l12;
si1=l7;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
l4=si1;
si2=l1;
si3=-1U;
si2^=si3;
si1+=si2;
l8=si1;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l8;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l4;
si1=l1;
si2=1U;
si1+=si2;
l5=si1;
si0-=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l7;
si1=88U;
si0+=si1;
l24=si0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l7;
si1=l4;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l12;
si1=l7;
si2=l5;
si3=3U;
si2<<=(si3&31);
l25=si2;
si1+=si2;
si2=l8;
si3=3U;
si2<<=(si3&31);
l8=si2;
si0=f15390(i,si0,si1,si2);
l4=si0;
si1=88U;
si0+=si1;
si1=l24;
si2=l25;
si1+=si2;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=l1;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l8=si0;
si1=1U;
si0+=si1;
l24=si0;
si0=l8;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l3;
si1=l1;
si0-=si1;
l1=si0;
si1=l24;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l4;
si1=184U;
si0+=si1;
si1=l7;
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=184U;
si1+=si2;
si2=l1;
si3=2U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=0U;
l1=si0;
L31:;
{
si0=l3;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l1;
si1=l1;
si2=l8;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L31;
}
}
L30:;
si0=l2;
si1=1U;
si0+=si1;
l8=si0;
si1=l7;
si2=l4;
si3=l9;
si1=si3?si1:si2;
l5=si1;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
l9=si1;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l5;
si1=l8;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l5;
si2=l2;
si3=3U;
si2<<=(si3&31);
l4=si2;
si1+=si2;
si2=l9;
si3=l2;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l3=si2;
si0=f15391(i,si0,si1,si2);
si0=l5;
si1=88U;
si0+=si1;
l24=si0;
si1=l1;
si0+=si1;
si1=l24;
si2=l4;
si1+=si2;
si2=l3;
si0=f15391(i,si0,si1,si2);
L32:;
si0=l9;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l22;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=92U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=88U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=184U;
si0+=si1;
l1=si0;
si0=l2;
si1=2U;
si0+=si1;
l15=si0;
si1=l9;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l1;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l9;
si3=l2;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
L33:;
si0=l1;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l8;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l9;
si1=l2;
si0-=si1;
l14=si0;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l5;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=188U;
si0+=si1;
l1=si0;
L36:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l8;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l14;
si1=3U;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l8;
si1=3U;
si0+=si1;
l1=si0;
si0=-2U;
si1=l9;
si0-=si1;
l3=si0;
si0=l5;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=196U;
si0+=si1;
l8=si0;
L37:;
{
si0=l8;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=-3U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=-2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
si0+=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L37;
}
}
L34:;
si0=l11;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+176U);
l1=si0;
if(si0){
goto L25;
}
}
L17:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=232U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l1;
si1=0U;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l11;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l8=si0;
si1=10U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
l5=si1;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l16;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=92U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=88U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l1;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l12;
si1=l5;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l1;
si1=184U;
si0+=si1;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
goto L15;
L16:;
si0=l1;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
si1=l1;
si0=si0 <= si1;
l4=si0;
if(si0){
goto L38;
}
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
si1=l7;
si2=l1;
si3=3U;
si2<<=(si3&31);
l12=si2;
si1+=si2;
si2=l3;
si3=l1;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l2=si2;
si0=f15391(i,si0,si1,si2);
si0=l7;
si1=88U;
si0+=si1;
l9=si0;
si1=l5;
si0+=si1;
si1=l9;
si2=l12;
si1+=si2;
si2=l2;
si0=f15391(i,si0,si1,si2);
L38:;
si0=l3;
si1=1U;
si0+=si1;
l12=si0;
si0=l7;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l22;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=88U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=184U;
si0+=si1;
l5=si0;
si0=l3;
si1=2U;
si0+=si1;
l2=si0;
si0=l4;
if(si0){
goto L39;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si3=l1;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
L39:;
si0=l7;
si1=l12;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l5;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l3;
si1=l1;
si0-=si1;
l12=si0;
si1=1U;
si0+=si1;
si1=3U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l7;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=188U;
si0+=si1;
l1=si0;
L41:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l8;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l12;
si1=3U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l8;
si1=3U;
si0+=si1;
l1=si0;
si0=-2U;
si1=l3;
si0-=si1;
l4=si0;
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=196U;
si0+=si1;
l8=si0;
L42:;
{
si0=l8;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=-3U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=-2U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
i32_store16(&i->m0,(U64)si0+180U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l4;
si1=l1;
si2=4U;
si1+=si2;
l1=si1;
si0+=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L42;
}
}
L15:;
si0=l20;
l7=si0;
L14:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=4U;
si1=184U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l1;
si1=11U;
si2=1091664U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1091608U;
si1=40U;
si2=1091648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1091696U;
si1=53U;
si2=1091752U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=4U;
si1=232U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l8;
si1=11U;
si2=1091664U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1091608U;
si1=40U;
si2=1091648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l24;
si1=12U;
si2=1091680U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1091608U;
si1=40U;
si2=1091648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1091248U;
si1=43U;
si2=1091388U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=4U;
si1=232U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1091544U;
si1=48U;
si2=1091592U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1091404U;
si1=32U;
si2=1091528U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f449(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=3U;
si0&=si1;
l6=si0;
if(si0){
goto L3;
}
si0=l5;
l7=si0;
goto L2;
L3:;
si0=l5;
l7=si0;
L4:;
{
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L4;
}
}
L2:;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
L5:;
{
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
}
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l13=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
l7=si0;
L7:;
{
si0=l7;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
goto L8;
L9:;
sj0=l13;
l15=sj0;
si0=l12;
l14=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=0U;
l12=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l8;
l9=si0;
goto L10;
L11:;
si0=l9;
si1=16U;
si0+=si1;
l7=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
sj0=l15;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si0=sj0 == sj1;
if(si0){
goto L12;
}
si0=l7;
l9=si0;
si0=l6;
l12=si0;
goto L10;
L12:;
si0=l7;
si1=l8;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l8;
l9=si0;
sj0=l15;
l13=sj0;
si0=l6;
l14=si0;
goto L10;
L13:;
si0=l9;
si1=32U;
si0+=si1;
l7=si0;
si0=l9;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
sj0=l15;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+16U);
l13=sj1;
si0=sj0 == sj1;
if(si0){
goto L14;
}
si0=l7;
l9=si0;
si0=l6;
l14=si0;
goto L10;
L14:;
L15:;
{
si0=l12;
l14=si0;
si0=l7;
si1=l8;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l8;
l9=si0;
si0=0U;
l12=si0;
sj0=l15;
l13=sj0;
goto L10;
L16:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=16U;
si0+=si1;
l9=si0;
l7=si0;
sj0=l15;
sj1=l13;
si0=sj0 == sj1;
if(si0){
goto L15;
}
}
L10:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l7=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=0U;
l5=si0;
L26:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
si1=11U;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L24;
}
L25:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=192U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l6;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
L24:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=144U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
L27:;
{
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=192U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l7;
si1=0U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=0U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
l6=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
goto L27;
}
L23:;
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l3;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=92U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
goto L18;
L22:;
si0=8U;
si1=192U;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=8U;
si1=144U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=8U;
si1=192U;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l7=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l1=si1;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l3;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=92U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=3U;
si0&=si1;
l6=si0;
if(si0){
goto L29;
}
si0=l5;
l7=si0;
goto L28;
L29:;
si0=l5;
l7=si0;
L30:;
{
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L30;
}
}
L28:;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L18;
}
L31:;
{
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L31;
}
}
L18:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
goto L7;
L17:;
}
si0=1091404U;
si1=32U;
si2=1091528U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l10;
si0=!(si0);
if(si0){
goto L32;
}
si0=l11;
f15271(i,si0);
L32:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L34:;
{
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
si1=144U;
si0+=si1;
l12=si0;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load16_u(&i->m0,(U64)si0+138U);
l3=si0;
si1=5U;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=5U;
si1=l3;
si0-=si1;
l9=si0;
si1=l12;
si2=l1;
si3=-1U;
si2+=si3;
l0=si2;
si3=2U;
si2<<=(si3&31);
l4=si2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
l8=si1;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l1;
si1=l8;
si2=l9;
si1-=si2;
l12=si1;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l7;
si1=5U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l7;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l7;
si1=92U;
si0+=si1;
l14=si0;
si1=l9;
si2=2U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
si1=l14;
si2=l3;
si3=2U;
si2<<=(si3&31);
l16=si2;
si0=f15391(i,si0,si1,si2);
si0=l8;
si1=l12;
si2=1U;
si1+=si2;
l9=si1;
si0-=si1;
l8=si0;
si1=4U;
si2=l3;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l7;
si1=l1;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l8;
si3=3U;
si2<<=(si3&31);
l10=si2;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l14;
si1=l1;
si2=92U;
si1+=si2;
l11=si1;
si2=l9;
si3=2U;
si2<<=(si3&31);
l17=si2;
si1+=si2;
si2=l8;
si3=2U;
si2<<=(si3&31);
l9=si2;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l11;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l6;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l0;
si1=l1;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
si0+=si1;
si1=92U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l9;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l3;
si1=144U;
si0+=si1;
l6=si0;
si1=l2;
si0+=si1;
si1=l6;
si2=l16;
si3=4U;
si2+=si3;
si0=f15391(i,si0,si1,si2);
si0=l6;
si1=l1;
si2=l17;
si1+=si2;
si2=144U;
si1+=si2;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l6=si0;
si1=0U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=2U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=3U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=4U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=5U;
i32_store16(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
goto L35;
L38:;
si0=1091824U;
si1=25U;
si2=1091852U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1091608U;
si1=40U;
si2=1091648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1091768U;
si1=39U;
si2=1091808U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l7;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L34;
}
}
L33:;
L0:;
}

U32 f450(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L4;
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=7U;
si0&=si1;
l4=si0;
if(si0){
goto L9;
}
si0=l5;
l2=si0;
goto L8;
L9:;
si0=l5;
l2=si0;
L10:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+3576U);
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L10;
}
}
L8:;
si0=l5;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
L11:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L11;
}
}
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=0U;
l4=si0;
L4:;
si0=l3;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
l2=si0;
goto L12;
L13:;
L14:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+3432U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=3568U;
si0+=si1;
l5=si0;
si0=l2;
l1=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
si0=si0 >= si1;
if(si0){
goto L14;
}
}
L12:;
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
if(si0){
goto L16;
}
si0=l2;
l1=si0;
goto L15;
L16:;
si0=l2;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3576U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=-2U;
si0+=si1;
l7=si0;
si0=l5;
si1=7U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+3576U);
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l7;
si1=7U;
si0=si0 < si1;
if(si0){
goto L15;
}
L19:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
l1=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L19;
}
}
L15:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
si2=312U;
si1*=si2;
si0+=si1;
goto L0;
L3:;
si0=1091996U;
si1=43U;
si2=1092136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1091248U;
si1=43U;
si2=1091980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f451(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L4;
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=7U;
si0&=si1;
l4=si0;
if(si0){
goto L9;
}
si0=l5;
l2=si0;
goto L8;
L9:;
si0=l5;
l2=si0;
L10:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L10;
}
}
L8:;
si0=l5;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
L11:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L11;
}
}
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=0U;
l4=si0;
L4:;
si0=l3;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
l2=si0;
goto L12;
L13:;
L14:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=136U;
si0+=si1;
l5=si0;
si0=l2;
l1=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si0=si0 >= si1;
if(si0){
goto L14;
}
}
L12:;
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
if(si0){
goto L16;
}
si0=l2;
l1=si0;
goto L15;
L16:;
si0=l2;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=-2U;
si0+=si1;
l7=si0;
si0=l5;
si1=7U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l7;
si1=7U;
si0=si0 < si1;
if(si0){
goto L15;
}
L19:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L19;
}
}
L15:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=92U;
si0+=si1;
goto L0;
L3:;
si0=1091996U;
si1=43U;
si2=1092136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1091248U;
si1=43U;
si2=1091980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f452(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L4;
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=7U;
si0&=si1;
l4=si0;
if(si0){
goto L9;
}
si0=l5;
l2=si0;
goto L8;
L9:;
si0=l5;
l2=si0;
L10:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L10;
}
}
L8:;
si0=l5;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
L11:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L11;
}
}
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=0U;
l4=si0;
L4:;
si0=l3;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
l2=si0;
goto L12;
L13:;
L14:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+176U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=180U;
si0+=si1;
l5=si0;
si0=l2;
l1=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
si0=si0 >= si1;
if(si0){
goto L14;
}
}
L12:;
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
if(si0){
goto L16;
}
si0=l2;
l1=si0;
goto L15;
L16:;
si0=l2;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=-2U;
si0+=si1;
l7=si0;
si0=l5;
si1=7U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l7;
si1=7U;
si0=si0 < si1;
if(si0){
goto L15;
}
L19:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L19;
}
}
L15:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=88U;
si0+=si1;
goto L0;
L3:;
si0=1091996U;
si1=43U;
si2=1092136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1091248U;
si1=43U;
si2=1091980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f453(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
f308(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=0U;
l1=si0;
si0=0U;
l4=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=l2;
si3=32U;
si2+=si3;
f543(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=144U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l1;
si2=l3;
si3=4U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=l2;
si3=28U;
si2+=si3;
f449(i,si0,si1,si2);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=144U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f454(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
f312(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=0U;
l1=si0;
si0=0U;
l4=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=l2;
si3=32U;
si2+=si3;
f543(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=144U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=0U;
i32_store16(&i->m0,(U64)si0+138U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l1;
si2=l3;
si3=4U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=l2;
si3=28U;
si2+=si3;
f449(i,si0,si1,si2);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=8U;
si1=144U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f455(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f456(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
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
si1=4U;
si0+=si1;
si1=1092152U;
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

void f457(rustpythonInstance*i,U32 l0) {
L0:;
}

void f458(rustpythonInstance*i,U32 l0) {
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

void f459(rustpythonInstance*i,U32 l0) {
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

void f460(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=184U;
si0+=si1;
f458(i,si0);
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
f459(i,si0);
L0:;
}

U32 f461(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f462(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1092152U;
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

U32 f463(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f464(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+4U);
l6=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l5=si0;
goto L3;
L4:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
L6:;
{
si0=l5;
si1=3436U;
si0+=si1;
l10=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+3570U);
l11=si0;
si1=12U;
si0*=si1;
l12=si0;
si0=-1U;
l13=si0;
L9:;
{
si0=l12;
if(si0){
goto L10;
}
si0=l11;
l13=si0;
goto L8;
L10:;
si0=l10;
si1=8U;
si0+=si1;
l14=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l12;
si1=-12U;
si0+=si1;
l12=si0;
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
si0=-1U;
si1=l7;
si2=l15;
si3=l8;
si4=l14;
si4=i32_load(&i->m0,(U64)si4);
l14=si4;
si5=l8;
si6=l14;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15389(i,si1,si2,si3);
l15=si1;
si2=l8;
si3=l14;
si2-=si3;
si3=l15;
si1=si3?si1:si2;
l14=si1;
si2=0U;
si1=si1 != si2;
si2=l14;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l14=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
}
si0=l14;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l9;
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l5;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3576U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L6;
L7:;
}
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+64U);
l6=sj0;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f15271(i,si0);
goto L2;
L5:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+4U);
l6=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+68U);
l16=sj0;
L3:;
si0=l7;
if(si0){
goto L11;
}
si0=l1;
l13=si0;
goto L2;
L11:;
si0=l4;
sj1=l16;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L14;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=3576U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l10;
si1=1U;
i32_store16(&i->m0,(U64)si0+3570U,si1);
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+3432U,si1);
si0=l10;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+3436U,sj1);
si0=l10;
si1=3444U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l3;
si2=312U;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l1;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L13;
L14:;
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
l10=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=l4;
si3=48U;
si2+=si3;
si3=l3;
si4=l4;
si5=12U;
si4+=si5;
f447(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L13:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L1;
L12:;
si0=8U;
si1=3576U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
sj1=l6;
si1=(U32)(sj1);
si2=l13;
si3=312U;
si2*=si3;
si1+=si2;
l10=si1;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l10;
si1=l3;
si2=312U;
si0=f15390(i,si0,si1,si2);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f465(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L4;
}
si0=0U;
l7=si0;
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
L5:;
{
si0=l7;
si0=i32_load16_u(&i->m0,(U64)si0+182U);
l9=si0;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=-1U;
l11=si0;
si0=0U;
l12=si0;
si0=l7;
l13=si0;
L8:;
{
si0=l10;
si1=l12;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l9;
l11=si0;
goto L7;
L9:;
si0=l13;
si1=4U;
si0+=si1;
l14=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=-1U;
si1=l2;
si2=l15;
si3=l3;
si4=l14;
si4=i32_load(&i->m0,(U64)si4);
l14=si4;
si5=l3;
si6=l14;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15389(i,si1,si2,si3);
l15=si1;
si2=l3;
si3=l14;
si2-=si3;
si3=l15;
si1=si3?si1:si2;
l14=si1;
si2=0U;
si1=si1 != si2;
si2=l14;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l14=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
}
si0=l14;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l7;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L5;
L6:;
}
si0=l7;
si1=l12;
si0+=si1;
l13=si0;
si1=84U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=80U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l6;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
if(si0){
goto L10;
}
si0=0U;
l13=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=184U;
si0=f15269(i,si0);
l12=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=1U;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l12;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l12;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l12;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=92U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l6;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=20U;
si1+=si2;
l13=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=8U;
si6+=si7;
si7=8U;
si6+=si7;
f448(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l13=si0;
L2:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=184U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f466(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l4;
sj0=(U64)(si0);
si1=l2;
si2=-1U;
si1+=si2;
si2=536870911U;
si1&=si2;
sj1=(U64)(si1);
sj0*=sj1;
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l8=si0;
sj0=l6;
si0=(U32)(sj0);
l9=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l1;
l11=si0;
L5:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l9;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
l12=si0;
si1=l9;
si0=si0 >= si1;
l13=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l12;
l9=si0;
si0=l13;
if(si0){
goto L5;
}
}
L4:;
si0=1092211U;
si1=53U;
si2=1092336U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l9;
if(si0){
goto L21;
}
si0=1U;
l11=si0;
goto L20;
L21:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L18;
}
L20:;
si0=0U;
l10=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l9;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l12=si1;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l5;
si1=0U;
si2=l12;
f580(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L22:;
si0=l11;
si1=l10;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l9;
si1=l10;
si2=l12;
si1+=si2;
l12=si1;
si0-=si1;
l10=si0;
si0=l11;
si1=l12;
si0+=si1;
l11=si0;
si0=l4;
switch(si0){
case 0:
goto L24;
case 1:
goto L25;
case 2:
goto L26;
case 3:
goto L27;
case 4:
goto L28;
default:
goto L23;
}
L28:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L29:;
{
si0=l10;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=4U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L29;
}
goto L6;
}
L27:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L30:;
{
si0=l10;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l11;
si1=2U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=-3U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=3U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L6;
}
L26:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L31:;
{
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=2U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L31;
}
goto L6;
}
L25:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L32:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=1U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L6;
}
L24:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=12U;
si0+=si1;
l12=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l8=si0;
L33:;
{
si0=l10;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l12;
si1=-4U;
si0+=si1;
l3=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l10;
si1=l13;
si0-=si1;
l10=si0;
si0=l11;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si0=f15390(i,si0,si1,si2);
si1=l13;
si0+=si1;
l11=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L33;
}
goto L6;
}
L23:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L34:;
{
si0=l10;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
l11=si0;
si0=l10;
si1=l4;
si0-=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=l4;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L34;
}
L19:;
f53(i);
UNREACHABLE;
L18:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l9;
si2=l10;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f467(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l4;
sj0=(U64)(si0);
si1=l2;
si2=12U;
si1*=si2;
l6=si1;
si2=-12U;
si1+=si2;
si2=12U;
si1=DIV_U(si1,si2);
sj1=(U64)(si1);
sj0*=sj1;
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=l6;
si0+=si1;
l8=si0;
si0=l1;
si1=12U;
si0+=si1;
l9=si0;
sj0=l7;
si0=(U32)(sj0);
l6=si0;
si0=l2;
si1=12U;
si0*=si1;
l10=si0;
si0=l1;
l11=si0;
L5:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=-12U;
si0+=si1;
l10=si0;
si0=l6;
si1=l11;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
l12=si0;
si1=l6;
si0=si0 >= si1;
l13=si0;
si0=l11;
si1=12U;
si0+=si1;
l11=si0;
si0=l12;
l6=si0;
si0=l13;
if(si0){
goto L5;
}
}
L4:;
si0=1092211U;
si1=53U;
si2=1092336U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l6;
if(si0){
goto L21;
}
si0=1U;
l11=si0;
goto L20;
L21:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L18;
}
L20:;
si0=0U;
l12=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l6;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l5;
si1=0U;
si2=l10;
f580(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L22:;
si0=l11;
si1=l12;
si0+=si1;
si1=l13;
si2=l10;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l12;
si2=l10;
si1+=si2;
l12=si1;
si0-=si1;
l10=si0;
si0=l11;
si1=l12;
si0+=si1;
l11=si0;
si0=l4;
switch(si0){
case 0:
goto L24;
case 1:
goto L25;
case 2:
goto L26;
case 3:
goto L27;
case 4:
goto L28;
default:
goto L23;
}
L28:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L29:;
{
si0=l10;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=4U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L29;
}
goto L6;
}
L27:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L30:;
{
si0=l10;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l11;
si1=2U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=-3U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=3U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L6;
}
L26:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L31:;
{
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=2U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L31;
}
goto L6;
}
L25:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L32:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=1U;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L6;
}
L24:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=20U;
si0+=si1;
l12=si0;
si0=l2;
si1=12U;
si0*=si1;
si1=-12U;
si0+=si1;
l9=si0;
L33:;
{
si0=l10;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l12;
si1=-8U;
si0+=si1;
l3=si0;
si0=l12;
si1=12U;
si0+=si1;
l12=si0;
si0=l10;
si1=l13;
si0-=si1;
l10=si0;
si0=l11;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si0=f15390(i,si0,si1,si2);
si1=l13;
si0+=si1;
l11=si0;
si0=l9;
si1=-12U;
si0+=si1;
l9=si0;
if(si0){
goto L33;
}
goto L6;
}
L23:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L34:;
{
si0=l10;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
l11=si0;
si0=l10;
si1=l4;
si0-=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l10;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=l4;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si1=l12;
si0+=si1;
l11=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L34;
}
L19:;
f53(i);
UNREACHABLE;
L18:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1092176U;
si1=35U;
si2=1092352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=l10;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f468(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=l1;
l4=si0;
goto L3;
L4:;
si0=0U;
l4=si0;
L5:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
l5=si0;
si0=l2;
l6=si0;
si0=l4;
l1=si0;
goto L6;
L7:;
si0=0U;
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
l0=si0;
si0=l2;
si1=7U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
{
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+3576U);
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L8;
}
L11:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
l1=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
if(si0){
goto L11;
}
}
L8:;
si0=0U;
l6=si0;
L6:;
si0=l6;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
si0=si0 < si1;
if(si0){
goto L14;
}
L15:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+3432U);
l0=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=3568U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l6=si0;
si0=l1;
f15271(i,si0);
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l0;
l1=si0;
si0=l6;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+3570U);
si0=si0 >= si1;
if(si0){
goto L15;
}
}
si0=l0;
l1=si0;
L14:;
si0=l6;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
if(si0){
goto L16;
}
si0=l1;
l4=si0;
goto L12;
L16:;
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=3576U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=-2U;
si0+=si1;
l7=si0;
si0=l0;
si1=7U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
{
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+3576U);
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l7;
si1=7U;
si0=si0 < si1;
if(si0){
goto L12;
}
L19:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
l4=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
if(si0){
goto L19;
}
goto L12;
}
L13:;
si0=l1;
f15271(i,si0);
si0=1091248U;
si1=43U;
si2=1091964U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l0=si0;
si1=3440U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si1=3436U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L20:;
si0=l1;
si1=l6;
si2=312U;
si1*=si2;
si0+=si1;
l5=si0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L21:;
si0=l5;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
f15271(i,si0);
L22:;
si0=l5;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l5;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
f15271(i,si0);
L23:;
si0=l5;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
f15271(i,si0);
L24:;
si0=l5;
si1=212U;
si0+=si1;
l1=si0;
f284(i,si0);
si0=l5;
si1=216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L25:;
si0=l5;
si1=224U;
si0+=si1;
l1=si0;
f285(i,si0);
si0=l5;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l5;
f286(i,si0);
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
si0=l5;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+236U);
l1=si0;
L29:;
{
si0=l1;
f283(i,si0);
si0=l1;
si1=312U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L29;
}
}
L28:;
si0=l5;
si1=240U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+236U);
f15271(i,si0);
L30:;
si0=l5;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+248U);
si1=20U;
si0+=si1;
l1=si0;
L32:;
{
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L33:;
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
f15271(i,si0);
L34:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L35;
}
si0=l6;
f15271(i,si0);
L35:;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l5;
si1=252U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+248U);
f15271(i,si0);
L36:;
si0=l5;
si1=260U;
si0+=si1;
l1=si0;
f287(i,si0);
si0=l5;
si1=264U;
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
si0=l5;
si1=276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+272U);
f15271(i,si0);
L38:;
si0=l5;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+284U);
f15271(i,si0);
L39:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l5;
si1=300U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+296U);
f15271(i,si0);
L40:;
si0=0U;
l1=si0;
si0=l3;
if(si0){
goto L5;
}
}
si0=l4;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=7U;
si0&=si1;
l0=si0;
if(si0){
goto L42;
}
si0=l2;
l1=si0;
goto L41;
L42:;
si0=l2;
l1=si0;
L43:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+3576U);
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L43;
}
}
L41:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L2;
}
L44:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
si0=i32_load(&i->m0,(U64)si0+3576U);
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L44;
}
}
L2:;
L45:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+3432U);
l1=si0;
si0=l4;
f15271(i,si0);
si0=l1;
l4=si0;
si0=l1;
if(si0){
goto L45;
}
}
L1:;
L0:;
}

void f469(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l0=si0;
L4:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
l4=si0;
si0=l0;
l1=si0;
goto L5;
L6:;
si0=0U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l0=si0;
si0=l2;
si1=7U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
L10:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
if(si0){
goto L10;
}
}
L7:;
si0=0U;
l2=si0;
L5:;
si0=l2;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
si0=si0 < si1;
if(si0){
goto L13;
}
L14:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+176U);
l0=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
f15271(i,si0);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
l1=si0;
si0=l2;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+182U);
si0=si0 >= si1;
if(si0){
goto L14;
}
}
si0=l0;
l1=si0;
L13:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
if(si0){
goto L15;
}
si0=l1;
l0=si0;
goto L11;
L15:;
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=-2U;
si0+=si1;
l5=si0;
si0=l1;
si1=7U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L16;
}
L17:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+184U);
l0=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l5;
si1=7U;
si0=si0 < si1;
if(si0){
goto L11;
}
L18:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
l0=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L11;
}
L12:;
si0=l1;
f15271(i,si0);
si0=1091248U;
si1=43U;
si2=1091964U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=0U;
l1=si0;
si0=l3;
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l2;
if(si0){
goto L19;
}
si0=l1;
l0=si0;
goto L2;
L19:;
si0=l2;
si1=7U;
si0&=si1;
l4=si0;
if(si0){
goto L21;
}
si0=l1;
l0=si0;
si0=l2;
l1=si0;
goto L20;
L21:;
si0=l1;
l0=si0;
si0=l2;
l1=si0;
L22:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+184U);
l0=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L22;
}
}
L20:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L2;
}
L23:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
si0=i32_load(&i->m0,(U64)si0+184U);
l0=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L23;
}
}
L2:;
L24:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+176U);
l1=si0;
si0=l0;
f15271(i,si0);
si0=l1;
l0=si0;
si0=l1;
if(si0){
goto L24;
}
}
L1:;
L0:;
}

void f470(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l0=si0;
L4:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
l4=si0;
si0=l0;
l1=si0;
goto L5;
L6:;
si0=0U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
l0=si0;
si0=l2;
si1=7U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
L10:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
if(si0){
goto L10;
}
}
L7:;
si0=0U;
l2=si0;
L5:;
si0=l2;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si0=si0 < si1;
if(si0){
goto L13;
}
L14:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l0=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
f15271(i,si0);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
l1=si0;
si0=l2;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+138U);
si0=si0 >= si1;
if(si0){
goto L14;
}
}
si0=l0;
l1=si0;
L13:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
if(si0){
goto L15;
}
si0=l1;
l0=si0;
goto L11;
L15:;
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l2=si0;
si0=l4;
si1=-1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=-2U;
si0+=si1;
l5=si0;
si0=l1;
si1=7U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L16;
}
L17:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
l0=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l5;
si1=7U;
si0=si0 < si1;
if(si0){
goto L11;
}
L18:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
l0=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L18;
}
goto L11;
}
L12:;
si0=l1;
f15271(i,si0);
si0=1091248U;
si1=43U;
si2=1091964U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=0U;
l1=si0;
si0=l3;
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l2;
if(si0){
goto L19;
}
si0=l1;
l0=si0;
goto L2;
L19:;
si0=l2;
si1=7U;
si0&=si1;
l4=si0;
if(si0){
goto L21;
}
si0=l1;
l0=si0;
si0=l2;
l1=si0;
goto L20;
L21:;
si0=l1;
l0=si0;
si0=l2;
l1=si0;
L22:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
l0=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L22;
}
}
L20:;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L2;
}
L23:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
si0=i32_load(&i->m0,(U64)si0+144U);
l0=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L23;
}
}
L2:;
L24:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l0;
f15271(i,si0);
si0=l1;
l0=si0;
si0=l1;
if(si0){
goto L24;
}
}
L1:;
L0:;
}

void f471(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1092368U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f472(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
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
U32 l28=0;
U64 l29=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+116U);
l3=si0;
if(si0){
goto L8;
}
si0=0U;
l4=si0;
goto L7;
L8:;
si0=l1;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L10;
}
si0=4U;
l4=si0;
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L12;
}
si0=l7;
l4=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l4=si0;
goto L11;
L13:;
si0=l6;
si0=f15269(i,si0);
l4=si0;
L11:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l4;
si1=l3;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
l8=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l8;
sj0|=sj1;
l9=sj0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
if(si0){
goto L15;
}
goto L14;
L15:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L17;
}
si0=4U;
l2=si0;
si0=0U;
l3=si0;
goto L16;
L17:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l3;
if(si0){
goto L19;
}
si0=l7;
l2=si0;
goto L18;
L19:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l7;
si1=l3;
si0=f15277(i,si0,si1);
l2=si0;
goto L18;
L20:;
si0=l3;
si0=f15269(i,si0);
l2=si0;
L18:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
L16:;
si0=l2;
si1=l5;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
l8=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l8;
sj0|=sj1;
l11=sj0;
L14:;
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
l14=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l15=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
if(si0){
goto L22;
}
goto L21;
L22:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
L21:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l3=si0;
if(si0){
goto L24;
}
goto L23;
L24:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
L23:;
si0=l1;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l20=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
l21=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l22=si0;
if(si0){
goto L26;
}
si0=0U;
l7=si0;
goto L25;
L26:;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
if(si0){
goto L28;
}
si0=4U;
l7=si0;
si0=0U;
l25=si0;
goto L27;
L28:;
si0=l24;
si1=89478485U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l24;
si1=24U;
si0*=si1;
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l24;
si1=89478486U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l26=si0;
si0=l25;
if(si0){
goto L30;
}
si0=l26;
l7=si0;
goto L29;
L30:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l26;
si1=l25;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l26;
si1=l25;
si0=f15277(i,si0,si1);
l7=si0;
goto L29;
L31:;
si0=l25;
si0=f15269(i,si0);
l7=si0;
L29:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
L27:;
si0=l7;
si1=l22;
si2=l25;
si0=f15390(i,si0,si1,si2);
si0=l24;
sj0=(U64)(si0);
l27=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l27;
sj0|=sj1;
l27=sj0;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+128U);
l25=si0;
if(si0){
goto L33;
}
goto L32;
L33:;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l28=si0;
if(si0){
goto L34;
}
si0=0U;
l24=si0;
goto L32;
L34:;
si0=l1;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
if(si0){
goto L36;
}
si0=1U;
l24=si0;
goto L35;
L36:;
si0=l26;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l26;
si0=f15269(i,si0);
l24=si0;
si0=!(si0);
if(si0){
goto L1;
}
L35:;
si0=l24;
si1=l28;
si2=l26;
si0=f15390(i,si0,si1,si2);
si0=l26;
sj0=(U64)(si0);
l29=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l29;
sj0|=sj1;
l29=sj0;
L32:;
si0=l0;
sj1=l29;
i64_store(&i->m0,(U64)si0+140U,sj1);
si0=l0;
si1=l24;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l0;
si1=l22;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l0;
si1=l25;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l0;
si1=l21;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l23;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l0;
sj1=l27;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
sj1=l14;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
sj1=l13;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l0;
si1=l1;
si2=60U;
si1+=si2;
sj1=i64_load32_u(&i->m0,(U64)si1);
l9=sj1;
sj2=l8;
sj3=l9;
sj4=1ULL;
si3=sj3 > sj4;
l1=si3;
sj1=si3?sj1:sj2;
sj2=l8;
si3=l5;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1ULL;
sj2=l16;
si3=l1;
sj1=si3?sj1:sj2;
sj2=l16;
si3=l5;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L6:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l7;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L4:;
UNREACHABLE;
L3:;
si0=l26;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l26;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f473(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
L1:;
si0=l0;
si1=184U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
l2=si1;
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
si1=1092176U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+168U);
l3=sj0;
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l1;
si1=176U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l1;
si1=180U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=160U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=168U;
si0+=si1;
si1=l1;
si2=184U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=192U;
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l4;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=176U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
si2=152U;
si0=f15390(i,si0,si1,si2);
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
si0=l2;
f458(i,si0);
si0=l1;
f459(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
f15271(i,si0);
L2:;
L0:;
}

U32 f474(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1092493U;
si2=1092492U;
si3=l0;
si4=220U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l3=si3;
si4=8192U;
si3&=si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l0;
si2=160U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=66U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092496U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L2;
}
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=28U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092516U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
goto L2;
L5:;
si0=1091996U;
si1=43U;
si2=1092648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=32U;
l1=si0;
si0=l3;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=l0;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
si0=1U;
l9=si0;
L11:;
{
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L7;
}
L15:;
{
si0=l8;
l10=si0;
si0=l1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=8U;
si0+=si1;
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
L16:;
si0=l10;
l1=si0;
si0=l7;
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
L14:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
l11=si0;
si0=l10;
l1=si0;
goto L12;
L13:;
si0=l11;
si0=!(si0);
if(si0){
goto L7;
}
L12:;
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=165U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092784U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=0U;
l9=si0;
si0=l4;
si1=l7;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=0U;
l11=si0;
goto L11;
L17:;
si0=l1;
l11=si0;
L19:;
{
si0=l8;
l10=si0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l11;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
si0=l1;
l10=si0;
L20:;
si0=l10;
l11=si0;
si0=l7;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
}
si0=0U;
l11=si0;
si0=l7;
l4=si0;
goto L11;
L18:;
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092800U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L11;
}
L10:;
si0=l0;
si1=184U;
si0+=si1;
l1=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L21;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
sj0=0ULL;
l13=sj0;
sj0=2ULL;
l14=sj0;
L23:;
{
sj0=l14;
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L22;
}
sj0=l14;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L24;
case 1:
goto L25;
default:
goto L24;
}
L25:;
sj0=l13;
sj1=l12;
si0=sj0 >= sj1;
if(si0){
goto L22;
}
sj0=l13;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
L24:;
si0=l2;
si1=66U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092784U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L2;
}
sj0=0ULL;
l14=sj0;
sj0=l13;
sj1=l12;
si0=sj0 >= sj1;
if(si0){
goto L23;
}
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092800U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L2;
}
sj0=1ULL;
l14=sj0;
sj0=l13;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
goto L23;
}
L22:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
sj0=l12;
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1092176U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092812U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L21:;
si0=l2;
si1=28U;
si0+=si1;
si1=66U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=66U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1092808U;
si2=1092176U;
si3=l3;
si4=2U;
si3&=si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l3;
si2=30U;
si1<<=(si2&31);
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=3U;
si1&=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092784U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L8:;
si0=1092664U;
si1=99U;
si2=1092764U;
f703(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1092176U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1092812U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l5;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L2;
}
L6:;
si0=0U;
l1=si0;
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f475(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f476(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=244U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=236U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f477(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=268U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=260U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f478(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=216U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=208U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f479(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=224U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f480(rustpythonInstance*i,U32 l0) {
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

U32 f481(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
si2=1092820U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0&=si1;
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f482(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f483(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si1=220U;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=(U32)(U32)(I8)(U8)(si2);
si3=2U;
si2<<=(si3&31);
si3=1092820U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f484(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f485(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f486(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f487(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f488(rustpythonInstance*i,U32 l0) {
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

U32 f489(rustpythonInstance*i,U32 l0) {
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

void f490(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f491(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
L0:;
return si0;
}

void f492(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=156U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f493(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
L0:;
return si0;
}

void f494(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=192U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f495(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=200U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f496(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f497(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f498(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f499(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=164U;
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
si4=172U;
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

U32 f500(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
L0:;
return si0;
}

U32 f501(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=231U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=1U;
l4=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1049712U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l0;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l5;
si1=si3?si1:si2;
si2=l0;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=232U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1049712U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l4=si0;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f502(rustpythonInstance*i,U32 l0) {
L0:;
}

void f503(rustpythonInstance*i,U32 l0) {
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

void f504(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=32U;
si0+=si1;
f503(i,si0);
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

void f505(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1093244U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f506(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
f446(i,si0,si1);
si0=l1;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+168U);
l5=si0;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L4;
}
si0=0U;
l7=si0;
goto L3;
L4:;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L6;
}
si0=4U;
l7=si0;
si0=0U;
l9=si0;
goto L5;
L6:;
si0=l8;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l8;
si1=12U;
si0*=si1;
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l8;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=l9;
if(si0){
goto L8;
}
si0=l10;
l7=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l10;
si1=l9;
si0=f15277(i,si0,si1);
l7=si0;
goto L7;
L9:;
si0=l9;
si0=f15269(i,si0);
l7=si0;
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l7;
si1=l6;
si2=l9;
si0=f15390(i,si0,si1,si2);
si0=l8;
sj0=(U64)(si0);
l11=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l11;
sj0|=sj1;
l11=sj0;
L3:;
si0=l1;
si1=192U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l0;
si1=32U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=88U;
si0=f15390(i,si0,si1,si2);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l10;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f507(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l0;
si1=32U;
si0+=si1;
si1=l1;
si2=200U;
si1+=si2;
l2=si1;
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
si1=1093244U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+168U);
l3=sj0;
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=176U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l1;
si1=180U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=184U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=192U;
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l4;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
f503(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+116U);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15271(i,si0);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
f15271(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=-1U;
si0+=si1;
si1=-8U;
si0&=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
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
si0=l5;
si1=4U;
si2=l5;
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
si0=l0;
f15271(i,si0);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L4;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=-1U;
si0+=si1;
si1=-8U;
si0&=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
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
si0=l5;
si1=4U;
si2=l5;
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
si0=l0;
f15271(i,si0);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l0=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=92U;
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
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+288U);
l0=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
f15271(i,si0);
L7:;
L0:;
}

U32 f508(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=66U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1093372U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1093384U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
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
L3:;
si0=1093392U;
si1=43U;
si2=1093548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f509(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f510(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=92U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f511(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=116U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=108U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f512(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f513(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=80U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=72U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f514(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
si2=1093744U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0&=si1;
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f515(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

U32 f516(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f517(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si1=68U;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=(U32)(U32)(I8)(U8)(si2);
si3=2U;
si2<<=(si3&31);
si3=1093744U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f518(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f519(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 f520(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 f521(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
L0:;
return si0;
}

void f522(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f523(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1114112U;
L0:;
return si0;
}

void f524(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f525(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f526(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f527(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f528(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f529(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}


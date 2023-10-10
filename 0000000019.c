#include "w2c2_base.h"

#include "rustpython.h"

U32 f1930(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16966280U;
si2=8U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966288U;
si8=2U;
si9=l0;
si10=16U;
si9+=si10;
si10=16964288U;
si11=16966258U;
si12=3U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966264U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1931(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16965800U;
si2=7U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965807U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=16965812U;
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

U32 f1932(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16967466U;
si2=13U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966100U;
si8=6U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16965852U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966300U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1933(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16966912U;
si2=10U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966169U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16966924U;
si11=16965756U;
si12=4U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966300U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1934(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=12U;
si0+=si1;
si1=52U;
si0+=si1;
si1=16967312U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=16966176U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=16965760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=28U;
si0+=si1;
si1=16967296U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=16966176U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=12U;
si0+=si1;
si1=16964288U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l0;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l0;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=16964268U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967328U;
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
i32_store8(&i->m0,(U64)si0+77U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=72U;
si0+=si1;
si1=16964260U;
si2=5U;
si3=l2;
si4=12U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964244U;
si2=4U;
si3=l2;
si4=12U;
si3+=si4;
si4=8U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967263U;
si2=5U;
si3=l2;
si4=12U;
si3+=si4;
si4=16U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966192U;
si2=8U;
si3=l2;
si4=12U;
si3+=si4;
si4=24U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965756U;
si2=4U;
si3=l2;
si4=44U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967268U;
si2=14U;
si3=l2;
si4=12U;
si3+=si4;
si4=40U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16967282U;
si2=11U;
si3=l2;
si4=60U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
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
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1935(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16967524U;
si2=13U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966348U;
si8=5U;
si9=l0;
si10=16U;
si9+=si10;
si10=16966356U;
si11=16965756U;
si12=4U;
si13=l0;
si14=28U;
si13+=si14;
si14=16965760U;
si15=16964332U;
si16=12U;
si17=l2;
si18=12U;
si17+=si18;
si18=16964344U;
si0=f671(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1936(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=16968280U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=16968268U;
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

U32 f1937(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16965700U;
si2=5U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16964244U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16964288U;
si11=16965705U;
si12=6U;
si13=l2;
si14=12U;
si13+=si14;
si14=16965712U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1938(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16966980U;
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
si1=16964260U;
si2=5U;
si3=l0;
si4=16964268U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966990U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=16966996U;
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

U32 f1939(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L56;
case 1:
goto L55;
case 2:
goto L54;
case 3:
goto L53;
case 4:
goto L52;
case 5:
goto L51;
case 6:
goto L50;
case 7:
goto L49;
case 8:
goto L48;
case 9:
goto L47;
case 10:
goto L46;
case 11:
goto L45;
case 12:
goto L44;
case 13:
goto L43;
case 14:
goto L42;
case 15:
goto L41;
case 16:
goto L40;
case 17:
goto L39;
case 18:
goto L38;
case 19:
goto L37;
case 20:
goto L36;
case 21:
goto L35;
case 22:
goto L34;
case 23:
goto L33;
case 24:
goto L32;
case 25:
goto L31;
case 26:
goto L30;
case 27:
goto L29;
default:
goto L56;
}
L56:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965020U;
si3=11U;
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
si2=16965032U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L57;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L57:;
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
L55:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965048U;
si3=16U;
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
si2=16965064U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L58;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L58:;
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
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L54:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965080U;
si3=8U;
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
si2=16965088U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L59;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L59:;
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
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L53:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965104U;
si3=6U;
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
si2=16965112U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L60;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L60:;
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
goto L5;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L5;
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
goto L5;
}
goto L1;
L52:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965128U;
si3=6U;
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
si2=16965136U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L61;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L61:;
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
si0=!(si0);
if(si0){
goto L6;
}
goto L1;
L51:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965152U;
si3=6U;
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
si2=16965160U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L62;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L62:;
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
goto L7;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L7;
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
goto L7;
}
goto L1;
L50:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965176U;
si3=9U;
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
si2=16965188U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L63;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L63:;
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
goto L8;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L8;
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
goto L8;
}
goto L1;
L49:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965204U;
si3=9U;
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
si2=16965216U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L64;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L64:;
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
goto L9;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L9;
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
goto L9;
}
goto L1;
L48:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965232U;
si3=9U;
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
si2=16965244U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L65;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L65:;
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
goto L10;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L10;
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
goto L10;
}
goto L1;
L47:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965260U;
si3=3U;
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
si2=16965264U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L66;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L66:;
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
goto L11;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L11;
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
goto L11;
}
goto L1;
L46:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965280U;
si3=8U;
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
si2=16965288U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L67;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L67:;
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
goto L12;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L12;
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
goto L12;
}
goto L1;
L45:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965304U;
si3=5U;
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
si2=16965312U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L68;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L68:;
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
goto L13;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L13;
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
goto L13;
}
goto L1;
L44:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965328U;
si3=2U;
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
si2=16965332U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L69;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L69:;
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
goto L14;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L14;
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
goto L14;
}
goto L1;
L43:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965348U;
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
si2=16965352U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L70;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L70:;
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
goto L15;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L15;
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
goto L15;
}
goto L1;
L42:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965368U;
si3=9U;
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
si2=16965380U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L71;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L71:;
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
goto L16;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L16;
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
goto L16;
}
goto L1;
L41:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965396U;
si3=5U;
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
si2=16965404U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L72;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L72:;
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
goto L17;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L17;
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
goto L17;
}
goto L1;
L40:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965420U;
si3=5U;
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
si2=16965428U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L73;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L73:;
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
goto L18;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L18;
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
goto L18;
}
goto L1;
L39:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965444U;
si3=3U;
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
si2=16965448U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L74;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L74:;
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
goto L19;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L19;
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
goto L19;
}
goto L1;
L38:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965464U;
si3=7U;
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
si2=16965472U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L75;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L75:;
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
goto L20;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L20;
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
goto L20;
}
goto L1;
L37:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965488U;
si3=6U;
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
si2=16965496U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L76;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L76:;
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
goto L21;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L21;
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
goto L21;
}
goto L1;
L36:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965512U;
si3=6U;
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
si2=16965520U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L77;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L77:;
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
goto L22;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L22;
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
goto L22;
}
goto L1;
L35:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965536U;
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
si2=16965548U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L78;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L78:;
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
goto L23;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L23;
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
goto L23;
}
goto L1;
L34:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965564U;
si3=6U;
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
si2=16965572U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L79;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L79:;
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
goto L24;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L24;
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
goto L24;
}
goto L1;
L33:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965588U;
si3=8U;
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
si2=16965596U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L80;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L80:;
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
goto L25;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L25;
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
goto L25;
}
goto L1;
L32:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965612U;
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
si2=16965616U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L81;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L81:;
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
goto L26;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L26;
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
goto L26;
}
goto L1;
L31:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965632U;
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
si2=16965636U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L82;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L82:;
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
goto L27;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L27;
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
goto L27;
}
goto L1;
L30:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965652U;
si3=5U;
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
si2=16965660U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L83;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L83:;
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
goto L28;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L28;
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
goto L28;
}
goto L1;
L29:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16965676U;
si3=8U;
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
si2=16965684U;
si0=f645(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L84;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L84:;
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
goto L85;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L85;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L85;
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
L85:;
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
L28:;
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
L27:;
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
L26:;
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
L25:;
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
L24:;
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
L23:;
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
L22:;
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
L21:;
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
L20:;
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
L19:;
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
L18:;
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
L17:;
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
L16:;
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
L15:;
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
L14:;
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
L13:;
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
L12:;
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
L11:;
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
L10:;
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
L9:;
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
L8:;
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
L7:;
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
L5:;
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
goto L1;
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

U32 f1940(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16966157U;
si2=8U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966165U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16966169U;
si12=4U;
si13=l0;
si14=20U;
si13+=si14;
si14=16966176U;
si15=16966192U;
si16=8U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966200U;
si0=f671(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1941(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966372U;
si2=8U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16966380U;
si7=16966396U;
si8=12U;
si9=l0;
si10=16966408U;
si11=16966424U;
si12=13U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966440U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1942(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16967623U;
si2=14U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966700U;
si8=7U;
si9=l0;
si10=16U;
si9+=si10;
si10=16967640U;
si11=16964244U;
si12=4U;
si13=l2;
si14=12U;
si13+=si14;
si14=16965712U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1943(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=48U;
si0+=si1;
si1=16964344U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=36U;
si0+=si1;
si1=16965760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=16965760U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=20U;
si0+=si1;
si1=16965740U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=16965740U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=16964268U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16967251U;
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
si1=16964260U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966100U;
si2=6U;
si3=l2;
si4=12U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16966106U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=16U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965756U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=24U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16965776U;
si2=6U;
si3=l2;
si4=36U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=16964332U;
si2=12U;
si3=l2;
si4=44U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
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
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1944(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16966602U;
si2=9U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966611U;
si8=4U;
si9=l0;
si10=16U;
si9+=si10;
si10=16965740U;
si11=16966615U;
si12=2U;
si13=l0;
si14=24U;
si13+=si14;
si14=16966620U;
si15=16966636U;
si16=5U;
si17=l2;
si18=12U;
si17+=si18;
si18=16966300U;
si0=f671(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1945(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16966776U;
si2=9U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16966785U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=16964316U;
si11=16966788U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=16966440U;
si0=f670(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1946(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f1947(i,si0);
si0=l1;
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15024(i,si0);
L3:;
L0:;
}

void f1947(rustpythonInstance*i,U32 l0) {
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
goto L29;
case 1:
goto L28;
case 2:
goto L27;
case 3:
goto L26;
case 4:
goto L25;
case 5:
goto L24;
case 6:
goto L23;
case 7:
goto L22;
case 8:
goto L21;
case 9:
goto L20;
case 10:
goto L19;
case 11:
goto L18;
case 12:
goto L17;
case 13:
goto L16;
case 14:
goto L15;
case 15:
goto L14;
case 16:
goto L13;
case 17:
goto L12;
case 18:
goto L11;
case 19:
goto L10;
case 20:
goto L9;
case 21:
goto L8;
case 22:
goto L7;
case 23:
goto L6;
case 24:
goto L5;
case 25:
goto L4;
default:
goto L30;
}
L30:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
f1947(i,si0);
si0=l2;
f15024(i,si0);
L31:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
f1947(i,si0);
si0=l2;
f15024(i,si0);
L32:;
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
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L29:;
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
goto L33;
}
si0=l3;
l2=si0;
L34:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L28:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L27:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L26:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L25:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1841(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L35:;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
f1841(i,si0);
si0=l2;
si1=16U;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L38:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
f1947(i,si0);
si0=l3;
f15024(i,si0);
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
f15024(i,si0);
L40:;
si0=l1;
f15024(i,si0);
L37:;
si0=l2;
si1=24U;
si0+=si1;
l1=si0;
f1841(i,si0);
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L41:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L43:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
f1947(i,si0);
si0=l3;
f15024(i,si0);
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
f15024(i,si0);
L45:;
si0=l1;
f15024(i,si0);
L42:;
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L24:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
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
goto L46;
}
si0=l3;
l2=si0;
L47:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l2;
f1813(i,si0);
L48:;
si0=l2;
si1=56U;
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
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l3;
f15024(i,si0);
L49:;
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
goto L50;
}
si0=l3;
l2=si0;
L51:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L51;
}
}
L50:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L22:;
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
goto L52;
}
si0=l3;
l2=si0;
L53:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L53;
}
}
L52:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L21:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
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
goto L54;
}
si0=0U;
l6=si0;
L55:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f1813(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L57:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
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
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L58;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L58:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L55;
}
}
L54:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L20:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
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
goto L59;
}
si0=0U;
l6=si0;
L60:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f1813(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L62:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
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
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L63;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L63:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L60;
}
}
L59:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
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
goto L64;
}
si0=0U;
l6=si0;
L65:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f1813(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L67:;
{
si0=l2;
f1813(i,si0);
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
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L68;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L68:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L65;
}
}
L64:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
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
goto L69;
}
si0=0U;
l6=si0;
L70:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f1813(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L72:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L72;
}
}
L71:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L73;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L73:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L70;
}
}
L69:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L16:;
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
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L74;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L74:;
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
goto L75;
}
si0=l3;
l2=si0;
L76:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
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
si0=l3;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
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
goto L77;
}
si0=l3;
l2=si0;
L78:;
{
si0=l2;
f1813(i,si0);
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
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L79;
}
si0=l3;
f15024(i,si0);
L79:;
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
goto L80;
}
si0=l6;
l2=si0;
L81:;
{
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L82;
}
si0=l3;
f15024(i,si0);
L82:;
si0=l2;
f1813(i,si0);
si0=l2;
si1=88U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
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
si0=l6;
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
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
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L11:;
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
goto L83;
}
si0=l3;
l2=si0;
L84:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L10:;
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
goto L88;
case 1:
goto L87;
case 2:
goto L86;
case 3:
goto L85;
default:
goto L2;
}
L88:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
goto L3;
L87:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
goto L3;
L86:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
goto L3;
L85:;
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
f1815(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f1947(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L6:;
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
f15024(i,si0);
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
goto L89;
}
si0=l3;
l2=si0;
L90:;
{
si0=l2;
f1813(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
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
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L4:;
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
goto L91;
}
si0=l3;
l2=si0;
L92:;
{
si0=l2;
f1813(i,si0);
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f1948(rustpythonInstance*i,U32 l0) {
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
f1819(i,si0);
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
f15024(i,si0);
goto L0;
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1947(i,si0);
si0=l3;
f15024(i,si0);
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
l3=si0;
goto L1;
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
l3=si0;
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
l3=si0;
goto L1;
L13:;
si0=l0;
si1=12U;
si0+=si1;
l3=si0;
f1815(i,si0);
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
goto L17;
}
si0=l1;
l3=si0;
L18:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
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
goto L19;
}
si0=l1;
l3=si0;
L20:;
{
si0=l3;
f1813(i,si0);
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
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
f15024(i,si0);
L21:;
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
goto L22;
}
si0=l1;
l3=si0;
L23:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
f15024(i,si0);
L24:;
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
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f1947(i,si0);
si0=l3;
f15024(i,si0);
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
goto L25;
}
si0=l1;
l3=si0;
L26:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L26;
}
}
L25:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
f15024(i,si0);
L27:;
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
goto L28;
}
si0=l1;
l3=si0;
L29:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L30:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
}
L28:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
f15024(i,si0);
L31:;
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
goto L32;
}
si0=l1;
l3=si0;
L33:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L33;
}
}
L32:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L3:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
f1948(i,si0);
si0=l3;
f15024(i,si0);
L34:;
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
f15024(i,si0);
L2:;
goto L0;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L0:;
}

void f1949(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1950(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1951(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
l3=si0;
L2:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15024(i,si0);
L3:;
L0:;
}

void f1952(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
l3=si0;
L2:;
{
si0=l3;
f1816(i,si0);
si0=l3;
si1=92U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15024(i,si0);
L3:;
L0:;
}

void f1953(rustpythonInstance*i,U32 l0) {
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
si1=32U;
si0+=si1;
l3=si0;
L2:;
{
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
f15024(i,si0);
L4:;
si0=l3;
si1=40U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
f15024(i,si0);
L5:;
L0:;
}

void f1954(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1947(i,si0);
si0=l0;
f15024(i,si0);
L0:;
}

void f1955(rustpythonInstance*i,U32 l0) {
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
l3=si0;
L2:;
{
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15024(i,si0);
L3:;
si0=l3;
f1813(i,si0);
si0=l3;
si1=88U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
L0:;
}

void f1956(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
l3=si0;
L2:;
{
si0=l3;
f1819(i,si0);
si0=l3;
si1=64U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15024(i,si0);
L3:;
L0:;
}

void f1957(rustpythonInstance*i,U32 l0) {
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
l3=si0;
L2:;
{
si0=l3;
f1813(i,si0);
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f1813(i,si0);
si0=l4;
f15024(i,si0);
L3:;
si0=l3;
si1=64U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
L0:;
}

void f1958(rustpythonInstance*i,U32 l0) {
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
l3=si0;
L2:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L7;
}
L7:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L4;
L6:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f1813(i,si0);
goto L4;
L5:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
si0=l4;
f15024(i,si0);
L3:;
si0=l3;
si1=36U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
f15024(i,si0);
L9:;
L0:;
}

void f1959(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f1841(i,si0);
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
si0=l0;
si1=12U;
si0+=si1;
l1=si0;
f1841(i,si0);
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
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f1947(i,si0);
si0=l2;
f15024(i,si0);
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f15024(i,si0);
L6:;
si0=l1;
f15024(i,si0);
L3:;
si0=l0;
si1=24U;
si0+=si1;
l1=si0;
f1841(i,si0);
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
f15024(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
f1947(i,si0);
si0=l2;
f15024(i,si0);
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
f15024(i,si0);
L11:;
si0=l1;
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f1960(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f1842(i,si0);
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

void f1961(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f1841(i,si0);
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

void f1962(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
l3=si0;
L2:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
f1813(i,si0);
L3:;
si0=l3;
si1=56U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
L0:;
}

void f1963(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f1947(i,si0);
si0=l1;
f15024(i,si0);
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f1964(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f1947(i,si0);
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f1965(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f1948(i,si0);
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f1966(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1967(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L5;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L6;
default:
goto L1;
}
L6:;
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
f1815(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
goto L2;
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
si1=4U;
si0+=si1;
l2=si0;
goto L2;
L3:;
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
si1=4U;
si0+=si1;
l2=si0;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
L0:;
}

void f1968(rustpythonInstance*i,U32 l0) {
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

void f1969(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0;
si0=l0;
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

void f1970(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
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
l3=si0;
L2:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l3;
si1=12U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
L0:;
}

U32 f1971(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16964257U;
si2=3U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16964284U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=16964288U;
si11=16964304U;
si12=10U;
si13=l0;
si14=28U;
si13+=si14;
si14=16964316U;
si15=16964332U;
si16=12U;
si17=l2;
si18=12U;
si17+=si18;
si18=16964344U;
si0=f671(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1972(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=16966884U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1973(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=l1;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l6;
si3=1U;
si2+=si3;
l7=si2;
si3=3U;
si2>>=(si3&31);
l8=si2;
si3=7U;
si2*=si3;
si3=l6;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l9;
si3=1U;
si2+=si3;
l8=si2;
si3=l1;
si4=l8;
si3=si3 > si4;
si1=si3?si1:si2;
f1974(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0-=si1;
l12=si0;
si0=l6;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-4U;
si0+=si1;
l14=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l13;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l14;
si1=l7;
si2=2U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l11;
si1=l2;
si2=l1;
si3=4U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+12U);
l16=si1;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=8U;
l1=si0;
L13:;
{
si0=l8;
si1=l1;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=l8;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
}
L12:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l10;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L14:;
si0=l11;
si1=l1;
si0+=si1;
si1=l16;
si2=25U;
si1>>=(si2&31);
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
si1=l13;
si2=l15;
si1-=si2;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l7;
si1=l6;
si0=si0 == si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
}
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L8;
}
goto L2;
L9:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l13;
si1=l6;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
goto L2;
L7:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l7;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l1=si0;
L17:;
{
si0=l11;
si1=l1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l13;
si0=!(si0);
if(si0){
goto L15;
}
si0=l11;
si1=l1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l7;
si1=8U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l11;
si1=l7;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L18:;
si0=l11;
si1=8U;
si0+=si1;
si1=l11;
si2=l7;
si0=f15144(i,si0,si1,si2);
si0=l6;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L6:;
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1170500U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1170508U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1170612U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l1;
si1=l3;
si2=16968396U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=-4U;
si0+=si1;
l18=si0;
si0=0U;
l1=si0;
L19:;
{
si0=l11;
si1=l1;
l16=si1;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l18;
si1=l16;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l11;
si1=l8;
si0-=si1;
si1=-4U;
si0+=si1;
l10=si0;
L24:;
{
si0=l2;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si1=l6;
si0&=si1;
l7=si0;
l8=si0;
si0=l11;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=8U;
l1=si0;
si0=l7;
l8=si0;
L26:;
{
si0=l8;
si1=l1;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L26;
}
}
L25:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l8=si0;
L27:;
si0=l8;
si1=l7;
si0-=si1;
si1=l16;
si2=l7;
si1-=si2;
si0^=si1;
si1=l6;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l11;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l11;
si1=l8;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si1=l13;
si2=25U;
si1>>=(si2&31);
l13=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=255U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l8=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L23:;
si0=l1;
si1=l3;
si2=16968396U;
f594(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l12;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L20;
L21:;
si0=l12;
si1=l13;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L20:;
si0=l16;
si1=1U;
si0+=si1;
l1=si0;
si0=l16;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L3:;
si0=l0;
si1=l9;
si2=l5;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=-2147483647U;
l10=si0;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l10;
L0:;
return si0;
}

void f1974(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=1U;
l3=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=14U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=-1U;
si1=l1;
si2=7U;
si1=DIV_U(si1,si2);
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
l3=si0;
si1=1073741822U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L6:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1170500U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1170508U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1170612U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=4U;
si1=8U;
si2=l1;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L4:;
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=7U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=-8U;
si0&=si1;
l4=si0;
si1=l3;
si2=8U;
si1+=si2;
l5=si1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si1=7U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=8U;
si1=l1;
si0=f15030(i,si0,si1);
l6=si0;
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l1;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l6;
si1=l4;
si0+=si1;
si1=255U;
si2=l5;
si0=f15145(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=l3;
si3=3U;
si2>>=(si3&31);
si3=7U;
si2*=si3;
si3=l3;
si4=9U;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1170500U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1170508U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1170612U;
f614(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1170500U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1170508U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1170612U;
f614(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1975(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l6;
si3=1U;
si2+=si3;
l7=si2;
si3=3U;
si2>>=(si3&31);
l8=si2;
si3=7U;
si2*=si3;
si3=l6;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=l9;
si3=1U;
si2+=si3;
l8=si2;
si3=l5;
si4=l8;
si3=si3 > si4;
si1=si3?si1:si2;
f1974(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0-=si1;
l12=si0;
si0=l6;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-4U;
si0+=si1;
l14=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l13;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l14;
si1=l7;
si2=2U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l11;
si1=l1;
si2=l5;
si3=5U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=8U;
l5=si0;
L13:;
{
si0=l8;
si1=l5;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
}
L12:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l10;
si1&=si2;
l5=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l5=si0;
L14:;
si0=l11;
si1=l5;
si0+=si1;
si1=l16;
si2=25U;
si1>>=(si2&31);
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
si1=l13;
si2=l15;
si1-=si2;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l7;
si1=l6;
si0=si0 == si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
}
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L8;
}
goto L2;
L9:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l13;
si1=l6;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
goto L2;
L7:;
si0=0U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l7;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l5=si0;
L17:;
{
si0=l11;
si1=l5;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l13;
si0=!(si0);
if(si0){
goto L15;
}
si0=l11;
si1=l5;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l7;
si1=8U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l11;
si1=l7;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L18:;
si0=l11;
si1=8U;
si0+=si1;
si1=l11;
si2=l7;
si0=f15144(i,si0,si1,si2);
si0=l6;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L6:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1170500U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170508U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1170612U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=16968396U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=-4U;
si0+=si1;
l18=si0;
si0=0U;
l5=si0;
L19:;
{
si0=l11;
si1=l5;
l16=si1;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l18;
si1=l16;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l11;
si1=l8;
si0-=si1;
si1=-4U;
si0+=si1;
l10=si0;
L24:;
{
si0=l1;
si1=l5;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l6;
si0&=si1;
l7=si0;
l8=si0;
si0=l11;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=8U;
l5=si0;
si0=l7;
l8=si0;
L26:;
{
si0=l8;
si1=l5;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L26;
}
}
L25:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l8=si0;
L27:;
si0=l8;
si1=l7;
si0-=si1;
si1=l16;
si2=l7;
si1-=si2;
si0^=si1;
si1=l6;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l11;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si1=l13;
si2=25U;
si1>>=(si2&31);
l13=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=255U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L23:;
si0=l5;
si1=l2;
si2=16968396U;
f594(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l12;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L20;
L21:;
si0=l12;
si1=l13;
si2=25U;
si1>>=(si2&31);
l5=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
L20:;
si0=l16;
si1=1U;
si0+=si1;
l5=si0;
si0=l16;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L3:;
si0=l0;
si1=l9;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=-2147483647U;
l10=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l10;
L0:;
return si0;
}

U32 f1976(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l6;
si3=1U;
si2+=si3;
l7=si2;
si3=3U;
si2>>=(si3&31);
l8=si2;
si3=7U;
si2*=si3;
si3=l6;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=l9;
si3=1U;
si2+=si3;
l8=si2;
si3=l5;
si4=l8;
si3=si3 > si4;
si1=si3?si1:si2;
f1974(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0-=si1;
l12=si0;
si0=l6;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-4U;
si0+=si1;
l14=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l13;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l14;
si1=l7;
si2=2U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l11;
si1=l1;
si2=l5;
si3=5U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1+24U);
l16=si1;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=8U;
l5=si0;
L13:;
{
si0=l8;
si1=l5;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si2=l10;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
}
L12:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l10;
si1&=si2;
l5=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l5=si0;
L14:;
si0=l11;
si1=l5;
si0+=si1;
si1=l16;
si2=25U;
si1>>=(si2&31);
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
si1=l13;
si2=l15;
si1-=si2;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l7;
si1=l6;
si0=si0 == si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
}
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L8;
}
goto L2;
L9:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l13;
si1=l6;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
goto L2;
L7:;
si0=0U;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l7;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l5=si0;
L17:;
{
si0=l11;
si1=l5;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l13;
si0=!(si0);
if(si0){
goto L15;
}
si0=l11;
si1=l5;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l17;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L15:;
si0=l7;
si1=8U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l11;
si1=l7;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L18:;
si0=l11;
si1=8U;
si0+=si1;
si1=l11;
si2=l7;
si0=f15144(i,si0,si1,si2);
si0=l6;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L6:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1170500U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170508U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1170612U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=16968396U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=-4U;
si0+=si1;
l18=si0;
si0=0U;
l5=si0;
L19:;
{
si0=l11;
si1=l5;
l16=si1;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l18;
si1=l16;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l11;
si1=l8;
si0-=si1;
si1=-4U;
si0+=si1;
l10=si0;
L24:;
{
si0=l1;
si1=l5;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si1=l6;
si0&=si1;
l7=si0;
l8=si0;
si0=l11;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=8U;
l5=si0;
si0=l7;
l8=si0;
L26:;
{
si0=l8;
si1=l5;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l17=sj0;
si0=!(sj0);
if(si0){
goto L26;
}
}
L25:;
si0=l11;
sj1=l17;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l8=si0;
L27:;
si0=l8;
si1=l7;
si0-=si1;
si1=l16;
si2=l7;
si1-=si2;
si0^=si1;
si1=l6;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l11;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
l5=si0;
si0=l11;
si1=l8;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l7;
si1=l13;
si2=25U;
si1>>=(si2&31);
l13=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=255U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l8=si0;
si0=l10;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l5;
si1=l8;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L23:;
si0=l5;
si1=l2;
si2=16968396U;
f594(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l12;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L20;
L21:;
si0=l12;
si1=l13;
si2=25U;
si1>>=(si2&31);
l5=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
L20:;
si0=l16;
si1=1U;
si0+=si1;
l5=si0;
si0=l16;
si1=l6;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L3:;
si0=l0;
si1=l9;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=-2147483647U;
l10=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l10;
L0:;
return si0;
}

U32 f1977(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
sj2=l1;
si2=(U32)(sj2);
l7=si2;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=8U;
l9=si0;
L2:;
{
si0=l8;
si1=l9;
si0+=si1;
l8=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
}
L1:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
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
l9=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l8;
si1=1U;
si0&=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l0;
si1=1U;
si2=l3;
si3=l4;
si0=f1973(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l7;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=8U;
l9=si0;
L6:;
{
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l4;
si2=l6;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l4;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l9=si0;
L4:;
si0=l5;
si1=l9;
si0+=si1;
si1=l7;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l9=si0;
si1=-4U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
L0:;
return si0;
}

U32 f1978(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
sj2=l1;
si2=(U32)(sj2);
l7=si2;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=8U;
l9=si0;
L2:;
{
si0=l8;
si1=l9;
si0+=si1;
l8=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
}
L1:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
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
l9=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l8;
si1=1U;
si0&=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l0;
si1=l3;
si2=l4;
si0=f1976(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l7;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=8U;
l9=si0;
L6:;
{
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l4;
si2=l6;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l4;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l9=si0;
L4:;
si0=l5;
si1=l9;
si0+=si1;
si1=l7;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l9=si0;
si1=-4U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
L0:;
return si0;
}

U32 f1979(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
sj2=l1;
si2=(U32)(sj2);
l7=si2;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=8U;
l9=si0;
L2:;
{
si0=l8;
si1=l9;
si0+=si1;
l8=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l8;
si2=l6;
si1&=si2;
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
}
L1:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l8;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
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
l9=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l8;
si1=1U;
si0&=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l0;
si1=l3;
si2=l4;
si0=f1975(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l7;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=8U;
l9=si0;
L6:;
{
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l4;
si2=l6;
si1&=si2;
l4=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj1=l1;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l4;
si1+=si2;
si2=l6;
si1&=si2;
l9=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l9=si0;
L4:;
si0=l5;
si1=l9;
si0+=si1;
si1=l7;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=-8U;
si0+=si1;
si1=l6;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l9=si0;
si1=-4U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
L0:;
return si0;
}

U32 f1980(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16968872U;
si3=8U;
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
si2=16968492U;
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

void f1981(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1982(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=16968492U;
si3=l5;
si4=12U;
si3+=si4;
si4=16968492U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1983(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=16968508U;
si3=l5;
si4=12U;
si3+=si4;
si4=16968508U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1984(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=16968524U;
si3=l5;
si4=12U;
si3+=si4;
si4=16968524U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1985(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=16968540U;
si1=53U;
si2=16968668U;
f634(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
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
si1=4U;
si0+=si1;
si1=0U;
si2=l10;
f1803(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
L22:;
si0=l11;
si1=l12;
si0+=si1;
si1=l13;
si2=l10;
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=16968455U;
si1=35U;
si2=16968684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+4U);
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

void f1986(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l23=0;
U32 l24=0;
U32 l25=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=-1U;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=268435455U;
si0&=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
l7=si0;
l8=si0;
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=20U;
si0*=si1;
l2=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L3:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l11=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-20U;
si0+=si1;
l2=si0;
si0=l10;
si1=20U;
si0+=si1;
l10=si0;
si0=l11;
si1=-36U;
si0+=si1;
l11=si0;
si1=29U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=1U;
si1=l11;
si0<<=(si1&31);
si1=536936455U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
}
si0=l9;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l7;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L4:;
{
si0=l8;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=20U;
si0*=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=-1U;
l5=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l11=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-20U;
si0+=si1;
l2=si0;
si0=l10;
si1=20U;
si0+=si1;
l10=si0;
si0=l11;
si1=-36U;
si0+=si1;
l11=si0;
si1=29U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=1U;
si1=l11;
si0<<=(si1&31);
si1=536936455U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l8;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L5:;
si0=l4;
si1=32U;
si0+=si1;
l8=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=20U;
si0*=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=-1U;
l5=si0;
L8:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l11=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-20U;
si0+=si1;
l2=si0;
si0=l10;
si1=20U;
si0+=si1;
l10=si0;
si0=l11;
si1=-36U;
si0+=si1;
l11=si0;
si1=29U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=1U;
si1=l11;
si0<<=(si1&31);
si1=536936455U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
}
si0=l7;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
L7:;
si0=l8;
si1=l6;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L1:;
si0=l1;
si1=368U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l12;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l2;
if(si0){
goto L20;
}
si0=4U;
l10=si0;
goto L19;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L10;
}
L19:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l12;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l9=si0;
si0=l12;
si1=2U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l6;
si1=255U;
si2=l12;
si3=2U;
si2<<=(si3&31);
si3=-4U;
si2+=si3;
l2=si2;
si0=f15145(i,si0,si1,si2);
si1=l2;
si0+=si1;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
l9=si0;
L21:;
si0=0U;
l13=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+84U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l3;
si1=80U;
si0+=si1;
si1=l2;
f1789(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l13=si0;
goto L17;
L18:;
si0=0U;
si1=0U;
si2=16968760U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
L23:;
{
si0=l3;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+368U);
l10=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l6;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si1=20U;
si0*=si1;
l4=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0+=si1;
l2=si0;
L33:;
{
si0=l2;
si1=l2;
si2=-8U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=0U;
si0=f2304(i,si0,si1,si2);
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l10;
l5=si1;
si2=l11;
si1+=si2;
l10=si1;
si2=l5;
si1=si1 < si2;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l10;
si1=l13;
si2=l10;
si3=l13;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si0=l2;
si1=-4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=126U;
si0&=si1;
si1=36U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l2;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f2304(i,si0,si1,si2);
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l5;
si2=l11;
si1+=si2;
l11=si1;
si2=l5;
si1=si1 < si2;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l11;
si1=l13;
si2=l11;
si3=l13;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si0=l6;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l8;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L35;
}
L36:;
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+84U);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l3;
si1=80U;
si0+=si1;
si1=l11;
f1789(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
L37:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
L35:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
L34:;
si0=l11;
si1=255U;
si0&=si1;
si1=-36U;
si0+=si1;
l5=si0;
si1=29U;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=1U;
si1=l5;
si0<<=(si1&31);
si1=536936455U;
si0&=si1;
if(si0){
goto L25;
}
L38:;
si0=l2;
si1=20U;
si0+=si1;
l2=si0;
si0=l4;
si1=-20U;
si0+=si1;
l4=si0;
if(si0){
goto L33;
}
}
L32:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l6;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l11;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L24;
}
L39:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+84U);
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l3;
si1=80U;
si0+=si1;
si1=l2;
f1789(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
L40:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+88U,si1);
goto L24;
L31:;
si0=l2;
si1=l10;
si2=16968792U;
f594(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l5;
si1=l9;
si2=16968840U;
f594(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=16968412U;
si1=43U;
si2=16968808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=16968412U;
si1=43U;
si2=16968824U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l5;
si1=l9;
si2=16968840U;
f594(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l2;
si1=l9;
si2=16968776U;
f594(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
L24:;
si0=l2;
if(si0){
goto L23;
}
}
si0=l12;
si0=!(si0);
if(si0){
goto L15;
}
L16:;
si0=l6;
f15024(i,si0);
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
L41:;
si0=l1;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L43;
}
si0=0U;
l15=si0;
goto L42;
L43:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+328U);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+324U);
si1+=si2;
si2=l1;
si2=i32_load16_u(&i->m0,(U64)si2+376U);
l2=si2;
si3=3U;
si2>>=(si3&31);
si3=1U;
si2&=si3;
si1+=si2;
si2=l2;
si3=4U;
si2>>=(si3&31);
si3=1U;
si2&=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+79U,si1);
si0=l1;
si1=240U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=248U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l2;
si2=l10;
si3=4U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=79U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=100U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f1844(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
l16=si1;
si0=si0 <= si1;
if(si0){
goto L44;
}
si0=l16;
if(si0){
goto L45;
}
si0=l2;
f15024(i,si0);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+79U);
si1=2U;
si0<<=(si1&31);
l15=si0;
goto L42;
L45:;
si0=l2;
si1=l16;
si2=2U;
si1<<=(si2&31);
l10=si1;
si0=f15027(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
L44:;
si0=l2;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+79U);
l10=si2;
si0=si2?si0:si1;
l15=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L42;
}
si0=l10;
if(si0){
goto L42;
}
si0=l2;
f15024(i,si0);
L42:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=356U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+336U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+348U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l1;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si1=164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=l1;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l27=si0;
si0=l1;
si1=224U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l28=si0;
si0=l1;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l29=si0;
si0=l1;
si1=240U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l30=si0;
si0=l1;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l31=si0;
si0=l1;
si1=248U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l32=si0;
si0=l1;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l33=si0;
si0=l1;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l34=si0;
si0=l1;
si1=304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l35=si0;
si0=l1;
si1=308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l36=si0;
si0=l1;
si1=312U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l37=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+328U);
l38=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+324U);
l39=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+320U);
l40=si0;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+376U);
l41=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+372U);
l42=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+360U);
l43=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+368U);
l44=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l45=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l46=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l47=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l48=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l49=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=4U;
l50=si0;
si0=l44;
si0=!(si0);
if(si0){
goto L46;
}
si0=l44;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l44;
si1=2U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l2;
if(si0){
goto L48;
}
si0=4U;
l50=si0;
goto L47;
L48:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l50=si0;
si0=!(si0);
if(si0){
goto L13;
}
L47:;
si0=l50;
l10=si0;
si0=l44;
si1=2U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l50;
si1=0U;
si2=l2;
si3=-4U;
si2+=si3;
l2=si2;
si0=f15145(i,si0,si1,si2);
si1=l2;
si0+=si1;
l10=si0;
L49:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L46:;
si0=4U;
l51=si0;
si0=0U;
l9=si0;
L50:;
{
si0=0U;
l5=si0;
si0=0U;
l4=si0;
L53:;
{
si0=l4;
l2=si0;
si1=l44;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l43;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l50;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=20U;
si0*=si1;
l8=si0;
si1=-20U;
si0+=si1;
l11=si0;
si1=20U;
si0=DIV_U(si0,si1);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L56;
}
si0=l10;
l2=si0;
goto L55;
L56:;
si0=l5;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si2=65535U;
si1=si1 > si2;
si0+=si1;
si1=l2;
si2=255U;
si1=si1 > si2;
si0+=si1;
si1=l2;
si2=16777215U;
si1=si1 > si2;
si0+=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=l10;
si1=20U;
si0+=si1;
l2=si0;
L55:;
si0=l11;
si1=20U;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l10;
si1=l8;
si0+=si1;
l11=si0;
L57:;
{
si0=l5;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=65535U;
si1=si1 > si2;
si0+=si1;
si1=l10;
si2=255U;
si1=si1 > si2;
si0+=si1;
si1=l10;
si2=16777215U;
si1=si1 > si2;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=65535U;
si1=si1 > si2;
si0+=si1;
si1=l10;
si2=255U;
si1=si1 > si2;
si0+=si1;
si1=l10;
si2=16777215U;
si1=si1 > si2;
si0+=si1;
si1=2U;
si0+=si1;
l5=si0;
si0=l2;
si1=40U;
si0+=si1;
l2=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L57;
}
}
L54:;
si0=l4;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L53;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
l2=si1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l2;
si1=l5;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l11;
si1=1073741824U;
si0=si0 < si1;
l2=si0;
si0=l11;
si1=1U;
si0<<=(si1&31);
l4=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L59;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l10;
si2=1U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+88U,si1);
goto L58;
L59:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
L58:;
si0=l3;
si1=100U;
si0+=si1;
si1=l2;
si2=l4;
si3=l3;
si4=80U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
if(si0){
goto L60;
}
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L51;
L60:;
si0=l2;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
f52(i,si0,si1);
UNREACHABLE;
L52:;
si0=l2;
si1=l44;
si2=16968856U;
f594(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L63;
}
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l51;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+88U,si1);
goto L62;
L63:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
L62:;
si0=l3;
si1=100U;
si0+=si1;
si1=l2;
si2=l5;
si3=3U;
si2<<=(si3&31);
si3=l3;
si4=80U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
if(si0){
goto L64;
}
si0=l2;
l51=si0;
si0=l5;
l9=si0;
goto L61;
L64:;
si0=l2;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
f52(i,si0,si1);
UNREACHABLE;
L61:;
si0=0U;
l4=si0;
si0=0U;
l2=si0;
si0=0U;
l52=si0;
L65:;
{
si0=l44;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L67;
}
si0=l43;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l53=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l53;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
l54=si0;
L68:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l14=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L70;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
goto L69;
L70:;
si0=l10;
si1=l44;
si0=si0 >= si1;
if(si0){
goto L71;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si1=l50;
si2=l10;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l52;
si1=l7;
si2=255U;
si1=si1 > si2;
si2=l7;
si3=65535U;
si2=si2 > si3;
si1+=si2;
si2=l7;
si3=16777215U;
si2=si2 > si3;
si1+=si2;
si2=l2;
si3=255U;
si2=si2 > si3;
si3=l2;
si4=65535U;
si3=si3 > si4;
si2+=si3;
si3=l2;
si4=16777215U;
si3=si3 > si4;
si2+=si3;
si1=si1 != si2;
si0|=si1;
l52=si0;
goto L69;
L71:;
si0=l10;
si1=l44;
si2=16968744U;
f594(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l9;
si1=l4;
si0-=si1;
si1=2U;
si2=1U;
si3=l7;
si4=65535U;
si3=si3 > si4;
l2=si3;
si1=si3?si1:si2;
si2=l7;
si3=255U;
si2=si2 > si3;
l11=si2;
si1+=si2;
l55=si1;
si2=l7;
si3=16777215U;
si2=si2 > si3;
l6=si2;
si1+=si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L72;
}
si0=l4;
si1=l8;
si0+=si1;
l12=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l9;
si1=1U;
si0<<=(si1&31);
l56=si0;
si1=l12;
si2=l56;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l12=si0;
si1=4U;
si2=l12;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l12=si0;
si1=3U;
si0<<=(si1&31);
l56=si0;
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l57=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L74;
}
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l51;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+88U,si1);
goto L73;
L74:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
L73:;
si0=l3;
si1=100U;
si0+=si1;
si1=l57;
si2=l56;
si3=l3;
si4=80U;
si3+=si4;
f1787(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l56=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
if(si0){
goto L75;
}
si0=l56;
l51=si0;
si0=l12;
l9=si0;
goto L72;
L75:;
si0=l56;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l56;
si0=!(si0);
if(si0){
goto L14;
}
si0=l56;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
f52(i,si0,si1);
UNREACHABLE;
L72:;
si0=l11;
si1=l2;
si0+=si1;
l12=si0;
si0=l8;
si1=-1U;
si0+=si1;
l56=si0;
si0=l8;
si1=3U;
si0&=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L76;
}
si0=l4;
si1=l11;
si0+=si1;
l57=si0;
si0=l51;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l55;
si1=l6;
si0+=si1;
si1=l11;
si0-=si1;
l8=si0;
L77:;
{
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L77;
}
}
si0=l57;
l4=si0;
L76:;
si0=l12;
si1=l6;
si0+=si1;
l11=si0;
si0=l56;
si1=3U;
si0=si0 < si1;
if(si0){
goto L78;
}
si0=l51;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
L79:;
{
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
l2=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l3;
si1=l7;
i32_store8(&i->m0,(U64)si0+73U,si1);
si0=l3;
si1=l14;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f1843(i,si0,si1);
si0=l1;
si1=20U;
si0+=si1;
l1=si0;
si1=l54;
si0=si0 != si1;
if(si0){
goto L68;
}
goto L66;
}
L67:;
si0=l2;
si1=l44;
si2=16968728U;
f594(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l53;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L65;
}
}
si0=l52;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
goto L50;
}
L14:;
f53(i);
UNREACHABLE;
L13:;
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=4U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
l1=si1;
si0=si0 <= si1;
if(si0){
goto L87;
}
si0=l1;
if(si0){
goto L88;
}
si0=l2;
f15024(i,si0);
si0=1U;
l2=si0;
goto L87;
L88:;
si0=l2;
si1=l1;
si2=1U;
si1<<=(si2&31);
l10=si1;
si0=f15027(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L86;
}
L87:;
si0=l9;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L89;
}
si0=l4;
if(si0){
goto L90;
}
si0=l51;
f15024(i,si0);
si0=4U;
l51=si0;
goto L89;
L90:;
si0=l51;
si1=l4;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0=f15027(i,si0,si1);
l51=si0;
si0=!(si0);
if(si0){
goto L85;
}
L89:;
si0=l46;
si0=!(si0);
if(si0){
goto L91;
}
si0=l45;
si1=l46;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L91:;
si0=l3;
si1=l47;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l48;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l47;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l47;
si2=l49;
si3=5U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=100U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f1824(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L92;
}
si0=l6;
if(si0){
goto L93;
}
si0=l10;
f15024(i,si0);
si0=8U;
l10=si0;
goto L92;
L93:;
si0=l10;
si1=l6;
si2=24U;
si1*=si2;
l5=si1;
si0=f15027(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L84;
}
L92:;
si0=l19;
si0=!(si0);
if(si0){
goto L94;
}
si0=l18;
si1=l19;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L94:;
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l20;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l20;
si2=l22;
si3=4U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=100U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f1823(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
l9=si1;
si0=si0 <= si1;
if(si0){
goto L95;
}
si0=l9;
if(si0){
goto L96;
}
si0=l5;
f15024(i,si0);
si0=4U;
l5=si0;
goto L95;
L96:;
si0=l5;
si1=l9;
si2=12U;
si1*=si2;
l11=si1;
si0=f15027(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L83;
}
L95:;
si0=l24;
si0=!(si0);
if(si0){
goto L97;
}
si0=l23;
si1=l24;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L97:;
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l26;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l25;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l25;
si2=l27;
si3=4U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=100U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f1823(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
l14=si1;
si0=si0 <= si1;
if(si0){
goto L98;
}
si0=l14;
if(si0){
goto L99;
}
si0=l11;
f15024(i,si0);
si0=4U;
l11=si0;
goto L98;
L99:;
si0=l11;
si1=l14;
si2=12U;
si1*=si2;
l8=si1;
si0=f15027(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L82;
}
L98:;
si0=l29;
si0=!(si0);
if(si0){
goto L100;
}
si0=l28;
si1=l29;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L100:;
si0=l3;
si1=l30;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l31;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l30;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l30;
si2=l32;
si3=4U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=100U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f1823(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
l12=si1;
si0=si0 <= si1;
if(si0){
goto L101;
}
si0=l12;
if(si0){
goto L102;
}
si0=l8;
f15024(i,si0);
si0=4U;
l8=si0;
goto L101;
L102:;
si0=l8;
si1=l12;
si2=12U;
si1*=si2;
l7=si1;
si0=f15027(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L81;
}
L101:;
si0=l34;
si0=!(si0);
if(si0){
goto L103;
}
si0=l33;
si1=l34;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L103:;
si0=l3;
si1=l35;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l36;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l35;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l35;
si2=l37;
si3=4U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=100U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f1823(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
l56=si1;
si0=si0 <= si1;
if(si0){
goto L104;
}
si0=l56;
if(si0){
goto L105;
}
si0=l7;
f15024(i,si0);
si0=4U;
l7=si0;
goto L104;
L105:;
si0=l7;
si1=l56;
si2=12U;
si1*=si2;
l55=si1;
si0=f15027(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L80;
}
L104:;
si0=l0;
si1=l41;
i32_store16(&i->m0,(U64)si0+108U,si1);
si0=l0;
si1=l51;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l38;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
si1=l39;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l0;
si1=l40;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=l42;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=104U;
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=52U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=60U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=68U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=76U;
si0+=si1;
si1=l56;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
f15024(i,si0);
si0=l43;
l2=si0;
L106:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L107;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L107:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l44;
si1=-1U;
si0+=si1;
l44=si0;
if(si0){
goto L106;
}
}
si0=l17;
si0=!(si0);
if(si0){
goto L108;
}
si0=l43;
f15024(i,si0);
L108:;
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L86:;
si0=1U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L85:;
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L84:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L83:;
si0=4U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L82:;
si0=4U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L81:;
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L80:;
si0=4U;
si1=l55;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1987(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
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
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l3;
si0+=si1;
l5=si0;
si0=34U;
si1=39U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+8U);
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
L3:;
{
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
goto L4;
L5:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l0;
si1=31U;
si0&=si1;
l3=si0;
si0=l0;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l0=si0;
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
goto L4;
L6:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l1=si0;
si0=l0;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l0=si0;
si0=l4;
si1=3U;
si0+=si1;
l4=si0;
goto L4;
L7:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l4;
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
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
L4:;
si0=l0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L12;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L14;
default:
goto L13;
}
L15:;
si0=l8;
si1=16968882U;
si2=2U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L14:;
si0=l8;
si1=16968884U;
si2=2U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L13:;
si0=l0;
si1=-32U;
si0+=si1;
si1=95U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
si0=3054U;
l9=si0;
si0=3054U;
l3=si0;
L20:;
{
si0=l9;
si1=1U;
si0>>=(si1&31);
si1=l1;
si0+=si1;
l10=si0;
si1=12U;
si0*=si1;
l9=si0;
si1=17726396U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l9;
si2=17726400U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=-1U;
si1=l11;
si2=l0;
si1=si1 > si2;
si2=l12;
si3=l0;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l10;
l3=si0;
goto L22;
L23:;
si0=l11;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l10;
si1=1U;
si0+=si1;
l1=si0;
L22:;
si0=l3;
si1=l1;
si0-=si1;
l9=si0;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L20;
}
goto L19;
L21:;
}
si0=l9;
si1=17726404U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=22U;
si0=si0 < si1;
if(si0){
goto L18;
}
L19:;
si0=l0;
si1=256U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l0;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l2;
si1=482U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=1U;
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16968888U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=34359738368ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l7;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L18:;
si0=l8;
si1=l0;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L17:;
si0=l2;
si1=482U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=1U;
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16968912U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l7;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L16:;
si0=l2;
si1=482U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=1U;
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16968900U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l7;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
goto L1;
L12:;
si0=l8;
si1=16968880U;
si2=2U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L11:;
si0=l2;
si1=483U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=1U;
l0=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16968912U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l7;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L8;
L10:;
si0=17687380U;
si1=37U;
si2=17687524U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l0;
si1=92U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l6;
si1=l0;
si0=si0 != si1;
if(si0){
goto L24;
}
L25:;
si0=l8;
si1=92U;
si2=l1;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L24;
}
si0=1U;
l0=si0;
goto L1;
L24:;
si0=l8;
si1=l0;
si2=l1;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l0=si0;
goto L1;
L8:;
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=0U;
l0=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1988(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1989(rustpythonInstance*i,U32 l0) {
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
f1821(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L11:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
f15024(i,si0);
L12:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
f15024(i,si0);
L13:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L15:;
{
si0=l2;
f1989(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L15;
}
}
si0=l3;
f15024(i,si0);
L14:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L17:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L18:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L17;
}
}
si0=l3;
f15024(i,si0);
L16:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L20:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L21:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L20;
}
}
si0=l3;
f15024(i,si0);
L19:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L23:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L24:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L23;
}
}
si0=l3;
f15024(i,si0);
L22:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
l2=si0;
L26:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L27:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L26;
}
}
si0=l3;
f15024(i,si0);
L25:;
si0=l0;
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f1990(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l6;
si2=l5;
f2027(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+48U);
l8=sj0;
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj2=l8;
sj3=l7;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l7;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l7;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l7;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l7;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l7;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l7;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l7;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l8;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l8;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l8;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l8;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l8;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l8;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l8;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l8;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l7;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l7=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l7;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l7;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l7;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l7;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l7;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l7;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l7;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=8U;
si3+=si4;
f2063(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
if(si0){
goto L2;
}
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L1;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si0=f2053(i,si0);
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1991(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l3;
f1994(i,si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l4=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l5=sj0;
si0=l3;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
l6=si0;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l1;
si2=32U;
si1+=si2;
sj2=l5;
sj3=l4;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l4;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l4;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l4;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l4;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l4;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l4;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l4;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l5;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l5;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l5;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l5;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l5;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l5;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l5;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l5;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l4;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l4=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l4;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l4;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l4;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l4;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l4;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l4;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l4;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l5;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=48U;
si3+=si4;
f2064(i,si0,si1,si2,si3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=8U;
si0+=si1;
f1989(i,si0);
goto L1;
L2:;
si0=l6;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l3;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=f2054(i,si0);
L1:;
si0=l0;
sj1=l5;
i64_store8(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1992(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=1048712U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si1=16969088U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l1;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l1;
l1=si0;
L4:;
si0=l1;
goto L0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
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
si0=l4;
f15024(i,si0);
L5:;
si0=l1;
f15024(i,si0);
si0=l2;
goto L0;
L2:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f1993(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
si1=l2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
l3=sj0;
si0=l2;
si1=8U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=1U;
si0=si0 > si1;
if(si0){
goto L4;
}
sj0=0ULL;
l4=sj0;
sj0=0ULL;
l5=sj0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l4=sj0;
l5=sj0;
goto L3;
L4:;
si0=l2;
si1=3U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si0+=si1;
si1=-1U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l4=sj0;
si0=l1;
sj0=i64_load16_u(&i->m0,(U64)si0);
l5=sj0;
goto L3;
L5:;
si0=l2;
si1=l1;
si0+=si1;
si1=-4U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l4=sj0;
si0=l1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l5=sj0;
L3:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=l5;
sj0^=sj1;
l5=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l5;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l5;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l7=sj1;
sj2=l4;
sj1^=sj2;
l4=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0*=sj1;
l6=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+24U);
sj2=l3;
sj1+=sj2;
sj0^=sj1;
sj1=l4;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l4;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l4;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l7;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l7;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l7;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l7;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj1*=sj2;
sj0^=sj1;
sj1=23ULL;
sj0=I64_ROTL(sj0,sj1);
l4=sj0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
l6=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l6;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l6;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l6;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l6;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l6;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+8U);
si3=l2;
si4=l1;
si3+=si4;
si4=-8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
l5=sj2;
sj3=-1ULL;
sj2^=sj3;
sj1*=sj2;
l7=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l7;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l7;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l7;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l7;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l7;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l7;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l7;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+24U);
sj3=l3;
sj2+=sj3;
sj1^=sj2;
sj2=l5;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l5;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l5;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l5;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l5;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l5;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l5;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
sj3=l6;
sj2*=sj3;
sj1^=sj2;
sj2=23ULL;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L0;
L6:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si1=l2;
si2=l1;
si1+=si2;
si2=-16U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l6=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l10=sj1;
si2=l9;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
l5=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0*=sj1;
l7=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l7;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l7;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l7;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l7;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l7;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l7;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l7;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+24U);
l11=sj1;
sj2=l3;
sj1+=sj2;
sj0^=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj1*=sj2;
sj0^=sj1;
sj1=23ULL;
sj0=I64_ROTL(sj0,sj1);
l4=sj0;
L7:;
{
sj0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l6=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
sj1=l10;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
l5=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0*=sj1;
l7=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l7;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l7;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l7;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l7;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l7;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l7;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l7;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
sj1=l4;
sj2=l11;
sj1+=sj2;
sj0^=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj1*=sj2;
sj0^=sj1;
sj1=23ULL;
sj0=I64_ROTL(sj0,sj1);
l4=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si1=16U;
si0=si0 > si1;
if(si0){
goto L7;
}
}
L1:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
L0:;
}

void f1994(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
l2=sj1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=-2U;
si2+=si3;
l4=si2;
si3=1U;
si4=l4;
si5=10U;
si4=si4 < si5;
si2=si4?si2:si3;
l4=si2;
sj2=(U64)(si2);
sj1^=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
l2=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
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
case 7:
goto L2;
case 8:
goto L1;
case 9:
goto L1;
default:
goto L9;
}
L9:;
si0=l1;
sj1=l2;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
sj2=(U64)(si2);
sj1^=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l4;
si1=24U;
si0*=si1;
l4=si0;
L10:;
{
si0=l0;
si1=l1;
f1994(i,si0,si1);
si0=l0;
si1=24U;
si0+=si1;
l0=si0;
si0=l4;
si1=-24U;
si0+=si1;
l4=si0;
if(si0){
goto L10;
}
goto L1;
}
L8:;
sj0=l2;
si1=l0;
sj1=i64_load8_u(&i->m0,(U64)si1+16U);
sj0^=sj1;
l5=sj0;
sj1=3278503208170049880ULL;
sj0*=sj1;
si1=l3;
sj1=(U64)(si1);
sj0^=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0^=sj1;
l2=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l2;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l2;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l2;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l2;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l2;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l2;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
sj1=-6364136223846793006ULL;
sj0*=sj1;
l5=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l5;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l5;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l5;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l5;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l5;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l5;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
sj1=l2;
sj2=3278503208170049880ULL;
sj1*=sj2;
sj0^=sj1;
l2=sj0;
si0=l3;
if(si0){
goto L11;
}
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l2;
sj1^=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L0;
L11:;
si0=l1;
sj1=l2;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
sj2=(U64)(si2);
sj1^=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si3=3U;
si2<<=(si3&31);
f1993(i,si0,si1,si2);
goto L0;
L7:;
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l2;
sj1^=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L0;
L6:;
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=l2;
sj1^=sj2;
l2=sj1;
sj2=3278503208170049880ULL;
sj1*=sj2;
si2=l0;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=l2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l2;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l2;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l2;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l2;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l2;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l2;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
sj3=-6364136223846793006ULL;
sj2*=sj3;
l2=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l2;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l2;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l2;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l2;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l2;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l2;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
sj1^=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L0;
L5:;
si0=l1;
sj1=l2;
si2=l0;
sj2=i64_load8_u(&i->m0,(U64)si2+4U);
sj1^=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L0;
L4:;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f1993(i,si0,si1,si2);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
l2=sj1;
sj2=255ULL;
sj1^=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L0;
L3:;
si0=l1;
sj1=l2;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
sj2=(U64)(si2);
sj1^=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
f1993(i,si0,si1,si2);
goto L0;
L2:;
si0=l1;
sj1=l2;
si2=l0;
sj2=i64_load32_u(&i->m0,(U64)si2+4U);
sj1^=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L1:;
L0:;
}

U32 f1995(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=49U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
si1=696U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=502U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+92U);
l0=si1;
si2=-1U;
si3=l0;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l2;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16969140U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1996(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=32U;
si0+=si1;
l4=si0;
si0=l2;
si1=24U;
si0+=si1;
l5=si0;
L4:;
{
si0=l0;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L8;
}
si0=1U;
l8=si0;
goto L7;
L8:;
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
L7:;
si0=l8;
si1=l6;
si2=l7;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l6;
si2=l7;
f2027(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+32U);
l10=sj0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
sj2=l10;
sj3=l9;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l10;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l9=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=16U;
si3+=si4;
f2057(i,si0,si1,si2,si3);
L5:;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
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

void f1997(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=32U;
si0+=si1;
l4=si0;
si0=l2;
si1=24U;
si0+=si1;
l5=si0;
L4:;
{
si0=l0;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L7;
}
si0=1U;
l8=si0;
goto L6;
L7:;
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
L6:;
si0=l8;
si1=l6;
si2=l7;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l6;
si2=l7;
f2027(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+40U);
l9=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+32U);
l10=sj0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
sj2=l10;
sj3=l9;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2*=sj3;
sj3=l10;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l10;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l10;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l10;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l10;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l10;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l10;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l10;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l9=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l9;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l9;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l9;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l9;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l9;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l9;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l10;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=16U;
si3+=si4;
f2057(i,si0,si1,si2,si3);
L5:;
si0=l0;
si1=32U;
si0+=si1;
l0=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
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

U32 f1998(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f677(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1999(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

U32 f2000(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16969360U;
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

void f2001(rustpythonInstance*i,U32 l0) {
L0:;
}

void f2002(rustpythonInstance*i,U32 l0) {
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

void f2003(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f2004(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1795(i,si0,si1);
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
f1803(i,si0,si1,si2);
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

U32 f2005(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=16969360U;
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

U32 f2006(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1803(i,si0,si1,si2);
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

U32 f2007(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1795(i,si0,si1);
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
f1803(i,si0,si1,si2);
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

U32 f2008(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1803(i,si0,si1,si2);
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

U32 f2009(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f1876(i,si0,si1);
L0:;
return si0;
}

U32 f2010(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f1897(i,si0,si1);
L0:;
return si0;
}

U32 f2011(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=16964257U;
si2=3U;
si3=16964260U;
si4=5U;
si5=l0;
si6=16964268U;
si7=16964284U;
si8=3U;
si9=l0;
si10=16U;
si9+=si10;
si10=16964288U;
si11=16964304U;
si12=10U;
si13=l0;
si14=28U;
si13+=si14;
si14=16964316U;
si15=16964332U;
si16=12U;
si17=l2;
si18=12U;
si17+=si18;
si18=16964344U;
si0=f671(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f2012(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si0=f1849(i,si0,si1,si2);
L0:;
return si0;
}

void f2013(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f2014(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f1897(i,si0,si1);
L0:;
return si0;
}

U32 f2015(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=16966568U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=36U;
si0+=si1;
si1=16966536U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16966552U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=16966536U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=12U;
si0+=si1;
si1=16966536U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l0;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=16966380U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l2;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=16966584U;
si2=9U;
si3=16966488U;
si4=6U;
si5=l2;
si6=12U;
si5+=si6;
si6=6U;
si0=f673(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f2016(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
l4=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=l0;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1-=si2;
si0=si0 > si1;
if(si0){
goto L2;
}
L4:;
si0=l0;
si1=45U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l0;
si0=f2017(i,si0,si1);
l3=si0;
goto L1;
L5:;
si0=l0;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+45U,si1);
goto L6;
L7:;
si0=l0;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=44U;
si0+=si1;
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+72U);
si1=!(si1);
l6=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=l5;
si2=0U;
si1=si1 != si2;
si0^=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L6:;
si0=0U;
l3=si0;
goto L1;
L3:;
si0=16969384U;
si1=16U;
si2=l2;
si3=15U;
si2+=si3;
si3=16969400U;
si4=16969540U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l4;
si1=l1;
si0=f2018(i,si0,si1);
l3=si0;
L1:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f2017(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=4U;
si0+=si1;
si1=0U;
f1789(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
{
si0=l0;
si1=l3;
si2=88U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l7=si0;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+72U);
si1=!(si1);
l8=si1;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l8;
si1=l7;
si2=0U;
si1=si1 != si2;
si0^=si1;
if(si0){
goto L2;
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
l3=si0;
goto L6;
L7:;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l4;
f1789(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L6:;
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+41U,si1);
si0=0U;
l3=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 == si1;
l9=si0;
if(si0){
goto L9;
}
si0=l0;
si1=28U;
si0+=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l8;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si0-=si1;
si1=l0;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L10;
}
L11:;
{
si0=l7;
if(si0){
goto L13;
}
si0=l0;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
l7=si0;
goto L12;
L13:;
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+32U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
si1=l7;
f1791(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L12:;
si0=l8;
si1=l5;
si0-=si1;
si1=l7;
si0=si0 > si1;
if(si0){
goto L11;
}
}
L10:;
si0=l7;
si1=l0;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=l7;
f1791(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l11;
si2=l4;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L16:;
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L17:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f2018(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=28U;
si0+=si1;
l5=si0;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si0-=si1;
l7=si0;
si1=l0;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=8U;
si0+=si1;
si1=l9;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
si1=l6;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=28U;
si0+=si1;
l3=si0;
si0=0U;
si1=l6;
si0-=si1;
l10=si0;
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
L4:;
{
si0=l10;
si1=l4;
l1=si1;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=-4U;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l9;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
si2=l6;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l8;
si2=1U;
si1>>=(si2&31);
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l2;
si2=8U;
si1+=si2;
f1822(i,si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+20U,si1);
L5:;
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

void f2019(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=l2;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=l1;
si3=28U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1-=si2;
si0=si0 > si1;
if(si0){
goto L2;
}
L5:;
si0=l1;
si1=49U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l5;
si2=l1;
f2020(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l4=si0;
goto L1;
L6:;
si0=l1;
si1=12U;
si0+=si1;
l7=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l7;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L1;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+49U,si1);
goto L8;
L9:;
si0=l1;
si1=l7;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=48U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=33U;
si1=si1 == si2;
l4=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
si2=l4;
si0=si2?si0:si1;
l7=si0;
si0=l6;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l6;
si2=0U;
si1=si1 != si2;
si0^=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l4;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
L8:;
si0=2U;
l4=si0;
L4:;
goto L1;
L3:;
si0=16969384U;
si1=16U;
si2=l3;
si3=31U;
si2+=si3;
si3=16969400U;
si4=16969540U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=l2;
f2021(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l4=si0;
L1:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2020(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=0U;
l5=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
f1792(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l4;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
{
si0=l1;
si1=l4;
si2=56U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
l7=si0;
si0=l1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=33U;
si1=si1 == si2;
l6=si1;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l10;
si1=l4;
si2=l6;
si0=si2?si0:si1;
l10=si0;
si0=l7;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=l7;
si2=0U;
si1=si1 != si2;
si0^=si1;
if(si0){
goto L2;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l9;
l4=si0;
goto L6;
L7:;
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l5;
f1792(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
L6:;
si0=l4;
si1=l8;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+45U,si1);
si0=2U;
l6=si0;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
l11=si0;
if(si0){
goto L9;
}
si0=l1;
si1=32U;
si0+=si1;
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l8;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si0-=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L10;
}
L11:;
{
si0=l4;
if(si0){
goto L13;
}
si0=l1;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=0U;
l4=si0;
goto L12;
L13:;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l9;
si1=l4;
f1791(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
L12:;
si0=l8;
si1=l7;
si0-=si1;
si1=l4;
si0=si0 > si1;
if(si0){
goto L11;
}
}
L10:;
si0=l4;
si1=l1;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l9;
si1=l4;
f1791(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l13;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
L9:;
si0=l6;
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L16:;
si0=l11;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L17:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2021(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=2U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=32U;
si0+=si1;
l6=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si0-=si1;
l8=si0;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l10;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
goto L1;
L3:;
si0=l5;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0<<=(si1&31);
si1=l7;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=28U;
si0+=si1;
l5=si0;
si0=0U;
si1=l7;
si0-=si1;
l11=si0;
si0=l2;
si1=1U;
si0+=si1;
l8=si0;
L5:;
{
si0=l11;
si1=l8;
l2=si1;
si0+=si1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l2;
si1=1U;
si0+=si1;
l8=si0;
si0=l5;
si1=-4U;
si0+=si1;
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l12;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L5;
}
}
L4:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l2;
si2=l7;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l9;
si2=1U;
si1>>=(si2&31);
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l3;
si2=8U;
si1+=si2;
f1822(i,si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+24U,si1);
L2:;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2022(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
i->g0=si0;
si0=18657636U;
si0=f1992(i,si0);
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
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=8U;
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
i32_store(&i->m0,(U64)si0+76U,si1);
si0=16968920U;
si1=30U;
si2=l3;
si3=76U;
si2+=si3;
si3=16968952U;
si4=16969072U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=56U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
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
si1=8U;
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
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
l4=si0;
si1=16969616U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
f2061(i,si0,si1);
si0=l1;
si1=l2;
si2=l3;
si3=8U;
si2+=si3;
f1996(i,si0,si1,si2);
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
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
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2023(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
i->g0=si0;
si0=18657636U;
si0=f1992(i,si0);
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
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=8U;
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
i32_store(&i->m0,(U64)si0+76U,si1);
si0=16968920U;
si1=30U;
si2=l3;
si3=76U;
si2+=si3;
si3=16968952U;
si4=16969072U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=56U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
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
si1=8U;
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
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
l4=si0;
si1=16969616U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
f2061(i,si0,si1);
si0=l1;
si1=l2;
si2=l3;
si3=8U;
si2+=si3;
f1997(i,si0,si1,si2);
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
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
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2024(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16957824U;
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
si2=16957836U;
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

U32 f2025(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f1639(i,si0,si1);
L0:;
return si0;
}

U32 f2026(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=16957852U;
si3=3U;
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
si2=16957856U;
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

void f2027(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
si1=l2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
l3=sj0;
si0=l2;
si1=8U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=1U;
si0=si0 > si1;
if(si0){
goto L4;
}
sj0=0ULL;
l4=sj0;
sj0=0ULL;
l5=sj0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l4=sj0;
l5=sj0;
goto L3;
L4:;
si0=l2;
si1=3U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si0+=si1;
si1=-1U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l4=sj0;
si0=l1;
sj0=i64_load16_u(&i->m0,(U64)si0);
l5=sj0;
goto L3;
L5:;
si0=l2;
si1=l1;
si0+=si1;
si1=-4U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l4=sj0;
si0=l1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l5=sj0;
L3:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=l5;
sj0^=sj1;
l5=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l5;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l5;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l7=sj1;
sj2=l4;
sj1^=sj2;
l4=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0*=sj1;
l6=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+24U);
sj2=l3;
sj1+=sj2;
sj0^=sj1;
sj1=l4;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l4;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l4;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l7;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l7;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l7;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l7;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj1*=sj2;
sj0^=sj1;
sj1=23ULL;
sj0=I64_ROTL(sj0,sj1);
l4=sj0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l6=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=l1;
si2+=si3;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
l5=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0*=sj1;
l7=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l7;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l7;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l7;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l7;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l7;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l7;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l7;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+24U);
sj2=l3;
sj1+=sj2;
sj0^=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj1*=sj2;
sj0^=sj1;
sj1=23ULL;
sj0=I64_ROTL(sj0,sj1);
l4=sj0;
goto L1;
L6:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si1=l2;
si2=l1;
si1+=si2;
si2=-16U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l6=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l10=sj1;
si2=l9;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
l5=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0*=sj1;
l7=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l7;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l7;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l7;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l7;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l7;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l7;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l7;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+24U);
l11=sj1;
sj2=l3;
sj1+=sj2;
sj0^=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj1*=sj2;
sj0^=sj1;
sj1=23ULL;
sj0=I64_ROTL(sj0,sj1);
l4=sj0;
L7:;
{
sj0=l8;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l6=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
sj1=l10;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
l5=sj1;
sj2=-1ULL;
sj1^=sj2;
sj0*=sj1;
l7=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l7;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l7;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l7;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l7;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l7;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l7;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l7;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
sj1=l4;
sj2=l11;
sj1+=sj2;
sj0^=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj1*=sj2;
sj0^=sj1;
sj1=23ULL;
sj0=I64_ROTL(sj0,sj1);
l4=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si1=16U;
si0=si0 > si1;
if(si0){
goto L7;
}
}
L1:;
si0=l0;
sj1=l4;
sj2=255ULL;
sj1^=sj2;
l5=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l4;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l4;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l4;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l4;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l6=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l6;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l6;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l6;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l6;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l6;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
L0:;
}

void f2028(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0-=si1;
l6=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l6;
si1=l3;
si2=-1U;
si1^=si2;
si0+=si1;
l3=si0;
si1=l5;
si0-=si1;
si1=0U;
si2=l0;
si3=l5;
si4=l3;
si3-=si4;
si4=l6;
si5=l3;
si4=si4 < si5;
si2=si4?si2:si3;
l5=si2;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
L2:;
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l5;
si1=l0;
si0-=si1;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l5;
l7=si0;
goto L3;
L4:;
si0=l4;
si1=l3;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=93U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
si2=12U;
si1+=si2;
si2=l5;
si3=-1U;
si2+=si3;
l7=si2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L3:;
si0=l5;
si1=l6;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l7;
si0-=si1;
l6=si0;
si0=l7;
si1=l2;
si2=4U;
si1+=si2;
si0+=si1;
si1=6U;
si0+=si1;
l5=si0;
si0=l4;
si1=l3;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
L6:;
{
si0=l0;
si1=93U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
si0+=si1;
si1=93U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
si1=l5;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=-2U;
si0+=si1;
l5=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
L0:;
}

U32 f2029(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f3549(i,si0,si1);
L0:;
return si0;
}


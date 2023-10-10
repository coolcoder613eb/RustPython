#include "w2c2_base.h"

#include "rustpython.h"

void f1330(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1331(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=1U;
si1=l3;
si2=8U;
si1+=si2;
si2=1277192U;
si3=l3;
si4=12U;
si3+=si4;
si4=1277192U;
si5=l2;
si6=1277456U;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1332(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l8=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=9U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=0U;
l6=si0;
si0=l5;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l12=si0;
L6:;
{
si0=l2;
si1=51U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l11;
si1=l2;
si2=3U;
si1<<=(si2&31);
si2=-8U;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L7:;
si0=l4;
si1=l6;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=0U;
l13=si0;
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l6;
si1=l4;
si2=1277328U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l7;
si1=8U;
si0+=si1;
si1=l10;
si2=l3;
si3=l6;
si2+=si3;
si3=l4;
si4=l6;
si3-=si4;
f1334(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si2=-1U;
si3=l2;
si1=si3?si1:si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-1U;
si2=l11;
si3=l5;
si2+=si3;
l13=si2;
si3=l13;
si4=l11;
si3=si3 < si4;
si1=si3?si1:si2;
l11=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l6;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l6;
si1=l8;
si0-=si1;
l5=si0;
si1=l9;
si0+=si1;
l13=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l3;
si1=l13;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L2;
}
L10:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
goto L6;
}
L5:;
si0=l8;
si1=l6;
si2=1277472U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l9;
si1=l6;
si2=1277488U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=l6;
si2=l8;
si1-=si2;
l4=si1;
si2=l4;
si3=l6;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
L2:;
si0=1U;
l13=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1333(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=0U;
l5=si0;
si0=l2;
si1=-256U;
si0+=si1;
si1=-254U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l6=si0;
si1=1277504U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l7=si1;
si2=1277504U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=1U;
l4=si0;
si0=l6;
l8=si0;
goto L2;
L3:;
si0=1U;
l5=si0;
si0=0U;
l4=si0;
si0=l7;
l8=si0;
si0=l6;
l7=si0;
L2:;
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l6=si0;
si1=1277504U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=l7;
si2=1277504U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
si0=2U;
l5=si0;
si0=l7;
l8=si0;
si0=l6;
l7=si0;
goto L4;
L5:;
si0=l6;
si1=l7;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si1=l8;
si2=l9;
si3=l8;
si4=1277504U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l8=si0;
si0=2U;
si1=l4;
si2=l9;
si0=si2?si0:si1;
l4=si0;
L4:;
si0=3U;
l6=si0;
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
l10=si0;
goto L6;
L7:;
si0=l5;
l10=si0;
L8:;
{
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=1277504U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=l7;
si2=255U;
si1&=si2;
l12=si1;
si2=1277504U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l9;
si1=l12;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l11;
si1=l8;
si2=255U;
si1&=si2;
si2=1277504U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l6;
l4=si0;
si0=l9;
l8=si0;
goto L9;
L10:;
si0=l6;
l10=si0;
si0=l5;
l4=si0;
si0=l6;
l5=si0;
si0=l7;
l8=si0;
si0=l9;
l7=si0;
L9:;
si0=l2;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L6:;
si0=l3;
si1=l10;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l5;
si1=255U;
si0&=si1;
si1=l4;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=6U;
si0+=si1;
si1=l3;
si2=7U;
si1+=si2;
si2=l3;
si3=8U;
si2+=si3;
f1331(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1334(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si2=16843009U;
si1*=si2;
l4=si1;
si0^=si1;
l5=si0;
si1=-1U;
si0^=si1;
si1=l5;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si0+=si1;
l6=si0;
si0=l2;
si1=-4U;
si0&=si1;
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=8U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l6;
si2=-8U;
si1+=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
L6:;
{
si0=l5;
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
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l8=si0;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si1=l2;
si0-=si1;
l4=si0;
si0=l1;
si1=255U;
si0&=si1;
l2=si0;
L7:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=1U;
l8=si0;
goto L1;
L8:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L2;
}
L4:;
si0=l3;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=0U;
l4=si0;
si0=l1;
si1=255U;
si0&=si1;
l5=si0;
L10:;
{
si0=l2;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=1U;
l8=si0;
goto L1;
L11:;
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=0U;
l8=si0;
goto L2;
L3:;
si0=0U;
l8=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
goto L12;
L13:;
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0+=si1;
l4=si0;
L12:;
si0=l4;
si1=l2;
si0-=si1;
l4=si0;
si0=1U;
l8=si0;
goto L1;
L2:;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1335(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=255U;
si1&=si2;
si2=16843009U;
si1*=si2;
l6=si1;
si0^=si1;
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l5;
si1=l2;
si2=255U;
si1&=si2;
si2=16843009U;
si1*=si2;
l8=si1;
si0^=si1;
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=-4U;
si0&=si1;
si1=4U;
si0+=si1;
l5=si0;
si1=l3;
si2=l4;
si1+=si2;
l9=si1;
si2=-4U;
si1+=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
L6:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l6;
si0^=si1;
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L5;
}
si0=l11;
si1=l8;
si0^=si1;
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L5;
}
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l6=si0;
si0=l5;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si1=l3;
si0-=si1;
l7=si0;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
L7:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=1U;
l6=si0;
goto L1;
L8:;
si0=l3;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=1U;
l6=si0;
goto L1;
L9:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L2;
}
L4:;
si0=l4;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=0U;
l7=si0;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
L11:;
{
si0=1U;
l6=si0;
si0=l3;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=0U;
l6=si0;
goto L2;
L3:;
si0=0U;
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
l5=si0;
si0=l7;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l7=si0;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l7;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=2U;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l4=si0;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l4;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L1;
}
L12:;
si0=l5;
si1=l3;
si0-=si1;
l7=si0;
si0=1U;
l6=si0;
goto L1;
L2:;
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1336(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=l1;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si1=3U;
si0=si0 > si1;
if(si0){
goto L3;
}
L4:;
{
si0=l2;
si1=l3;
si0+=si1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=1U;
l2=si0;
goto L1;
L3:;
si0=l2;
si1=l3;
si0+=si1;
l5=si0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=16843009U;
si1*=si2;
l6=si1;
si0^=si1;
l4=si0;
si1=-1U;
si0^=si1;
si1=l4;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=255U;
si0&=si1;
l4=si0;
L6:;
{
si0=l2;
si1=l3;
si0+=si1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=1U;
l2=si0;
goto L1;
L5:;
si0=l5;
si1=-4U;
si0&=si1;
l4=si0;
si0=l3;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=8U;
si0+=si1;
l7=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=-8U;
si0+=si1;
l5=si0;
si0=0U;
si1=l3;
si2=8U;
si3=l3;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l8=si0;
L8:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0^=si1;
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=8U;
si0+=si1;
l4=si0;
goto L7;
L9:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0^=si1;
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L7;
}
si0=l4;
si1=l8;
si0+=si1;
l4=si0;
si0=l5;
si1=l8;
si0+=si1;
l5=si0;
si1=8U;
si0+=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L8;
}
}
si0=l5;
si1=8U;
si0+=si1;
l4=si0;
L7:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
l5=si0;
L10:;
{
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=0U;
l2=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1337(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2;
si0=l2;
si1=255U;
si0&=si1;
l5=si0;
si0=l1;
si1=255U;
si0&=si1;
l6=si0;
si0=l4;
si1=3U;
si0=si0 > si1;
if(si0){
goto L3;
}
L4:;
{
si0=l3;
si1=l4;
si0+=si1;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=1U;
l7=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L1;
}
L3:;
si0=l3;
si1=l4;
si0+=si1;
l9=si0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si2=16843009U;
si1*=si2;
l10=si1;
si0^=si1;
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
si2=16843009U;
si1*=si2;
l11=si1;
si0^=si1;
l7=si0;
si1=-1U;
si0^=si1;
si1=l7;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
si1=4U;
si0+=si1;
l12=si0;
si0=l9;
si1=-4U;
si0&=si1;
l7=si0;
si1=l3;
si0-=si1;
l6=si0;
L7:;
{
si0=l6;
l4=si0;
si0=l7;
l8=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l8;
si1=-4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l10;
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
goto L5;
}
si0=l4;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si1=l11;
si0^=si1;
l5=si0;
si1=-1U;
si0^=si1;
si1=l5;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
goto L5;
}
L6:;
L8:;
{
si0=l3;
si1=l4;
si0+=si1;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=1U;
l7=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l8;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L1;
}
L5:;
si0=l1;
si1=255U;
si0&=si1;
l5=si0;
L9:;
{
si0=l8;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=1U;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=l2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L1;
}
L2:;
si0=0U;
l7=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1338(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+2496U,si1);
si0=l0;
si1=19650218U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
L2:;
{
si0=l3;
si1=-1U;
si0+=si1;
l4=si0;
si1=624U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=l4;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=30U;
si1>>=(si2&31);
si2=l4;
si1^=si2;
si2=1812433253U;
si1*=si2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+2496U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+2496U,si1);
si0=l3;
si1=624U;
si0=si0 < si1;
if(si0){
goto L2;
}
}
si0=l2;
si1=624U;
si2=l2;
si3=624U;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si0=1U;
l3=si0;
si0=0U;
l4=si0;
L3:;
{
si0=l4;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l1;
si2=l4;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si1+=si2;
si2=l6;
si3=-4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=30U;
si2>>=(si3&31);
si3=l7;
si2^=si3;
si3=1664525U;
si2*=si3;
si3=l6;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=622U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L6:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+2492U);
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
goto L4;
L5:;
si0=l4;
si1=l2;
si2=1277880U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=0U;
si2=l4;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L3;
}
}
si0=-623U;
l6=si0;
L7:;
{
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l4;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=30U;
si1>>=(si2&31);
si2=l2;
si1^=si2;
si2=1566083941U;
si1*=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=622U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L8;
L9:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+2492U);
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
L8:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
if(si0){
goto L7;
}
}
si0=l0;
si1=-2147483648U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=-1U;
si1=624U;
si2=1277864U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1339(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+2496U);
l1=si0;
si1=623U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L2;
L3:;
si0=l1;
si1=625U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+2496U,si1);
si0=l0;
si1=5489U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
L5:;
{
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si1=624U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=30U;
si1>>=(si2&31);
si2=l2;
si1^=si2;
si2=1812433253U;
si1*=si2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+2496U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+2496U,si1);
si0=l1;
si1=624U;
si0=si0 < si1;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
l2=si0;
L6:;
{
si0=l0;
si1=l2;
si0+=si1;
l3=si0;
si1=l1;
si2=-2147483648U;
si1&=si2;
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=2147483646U;
si2&=si3;
si1|=si2;
si2=1U;
si1>>=(si2&31);
si2=l3;
si3=1588U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=0U;
si3=l1;
si4=1U;
si3&=si4;
si2-=si3;
si3=-1727483681U;
si2&=si3;
si1^=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si1=908U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+908U);
l1=si0;
si0=0U;
l2=si0;
L7:;
{
si0=l0;
si1=l2;
si0+=si1;
l3=si0;
si1=908U;
si0+=si1;
si1=l1;
si2=-2147483648U;
si1&=si2;
si2=l3;
si3=912U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=2147483646U;
si2&=si3;
si1|=si2;
si2=1U;
si1>>=(si2&31);
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=0U;
si3=l1;
si4=1U;
si3&=si4;
si2-=si3;
si3=-1727483681U;
si2&=si3;
si1^=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si1=1584U;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=1U;
l2=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=2147483646U;
si1&=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+2492U);
si3=-2147483648U;
si2&=si3;
si1|=si2;
si2=1U;
si1>>=(si2&31);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+1584U);
si1^=si2;
si2=0U;
si3=l1;
si4=1U;
si3&=si4;
si2-=si3;
si3=-1727483681U;
si2&=si3;
si1^=si2;
i32_store(&i->m0,(U64)si0+2492U,si1);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+2496U,si1);
si0=l1;
si1=11U;
si0>>=(si1&31);
si1=l1;
si0^=si1;
l0=si0;
si1=7U;
si0<<=(si1&31);
si1=-1658038656U;
si0&=si1;
si1=l0;
si0^=si1;
l0=si0;
si1=15U;
si0<<=(si1&31);
si1=-272236544U;
si0&=si1;
si1=l0;
si0^=si1;
l0=si0;
si1=18U;
si0>>=(si1&31);
si1=l0;
si0^=si1;
goto L0;
L1:;
si0=-1U;
si1=624U;
si2=1277864U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1340(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1341(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1342(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=240U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1277896U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=1U;
si2&=si3;
l6=si2;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1277897U;
si2=1277896U;
si3=1277896U;
si4=l6;
si2=si4?si2:si3;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
if(si0){
goto L2;
}
si0=l5;
si1=76U;
si0+=si1;
si1=252U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=252U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=418U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=418U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=236U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=232U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=224U;
si0+=si1;
sj1=12884901920ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=216U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=204U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=192U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=184U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=172U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=168U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=160U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=152U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=140U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=128U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=120U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=20U;
si0+=si1;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=6U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1277900U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l5;
si2=24U;
si1+=si2;
si0=f1343(i,si0,si1);
l0=si0;
goto L1;
L2:;
si0=l5;
si1=76U;
si0+=si1;
si1=252U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=20U;
si0+=si1;
si1=252U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=418U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=418U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=236U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=232U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=224U;
si0+=si1;
sj1=12884901920ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=216U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=204U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=200U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=192U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=184U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=172U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=168U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=160U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=152U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=140U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=128U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=120U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l5;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=20U;
si0+=si1;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=6U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1277948U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l5;
si2=24U;
si1+=si2;
si0=f1343(i,si0,si1);
l0=si0;
L1:;
si0=l5;
si1=240U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1343(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L8;
}
L10:;
si0=l3;
if(si0){
goto L8;
}
si0=1U;
l4=si0;
si0=0U;
l1=si0;
si0=1277896U;
l3=si0;
goto L5;
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l2;
si1=52U;
si0+=si1;
si1=l1;
f64(i,si0,si1);
goto L4;
L7:;
si0=l2;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1277996U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=252U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=64U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l0=si0;
goto L3;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L11;
}
si0=1U;
l4=si0;
si0=0U;
l1=si0;
goto L5;
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
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
L4:;
si0=l2;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
si1=248U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=419U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1277996U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
f15024(i,si0);
L3:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l0;
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
return si0;
}

U32 f1344(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0;
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
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
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

void f1345(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1346(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=1278020U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l2;
si2=8U;
si1+=si2;
si2=1278004U;
si3=l2;
si4=12U;
si3+=si4;
si4=1278004U;
si5=l1;
si6=1278188U;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1347(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
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

void f1348(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
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
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L1:;
{
si0=l4;
si1=3U;
si0&=si1;
l5=si0;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L10;
default:
goto L14;
}
L14:;
L15:;
{
goto L15;
}
L13:;
si0=l1;
if(si0){
goto L11;
}
L12:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663224U);
if(si0){
goto L18;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si0|=si1;
l6=si0;
L19:;
{
si0=l4;
l7=si0;
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+18663224U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663228U);
l8=si0;
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663208U);
l9=sj0;
L21:;
{
sj0=l9;
sj1=1ULL;
sj0+=sj1;
l10=sj0;
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
sj1=l10;
si2=0U;
sj2=i64_load(&i->m0,(U64)si2+18663208U);
l11=sj2;
sj3=l11;
sj4=l9;
si3=sj3 == sj4;
l4=si3;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+18663208U,sj1);
sj0=l11;
l9=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L21;
}
}
si0=0U;
si1=l8;
i32_store(&i->m0,(U64)si0+18663228U,si1);
si0=l8;
sj1=l10;
i64_store(&i->m0,(U64)si0+8U,sj1);
L20:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663224U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663224U,si1);
si0=l0;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l7;
si2=-4U;
si1&=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L16;
}
goto L2;
L22:;
si0=l4;
si1=3U;
si0&=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l8;
si1=l8;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f1347(i,si0);
L23:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663224U);
si0=!(si0);
if(si0){
goto L19;
}
}
L18:;
si0=17679400U;
si1=16U;
si2=l3;
si3=4U;
si2+=si3;
si3=17679416U;
si4=17680948U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f1347(i,si0);
L24:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L16:;
L25:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663224U);
if(si0){
goto L6;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+18663224U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663228U);
l8=si0;
if(si0){
goto L26;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l8;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663208U);
l9=sj0;
L27:;
{
sj0=l9;
sj1=1ULL;
sj0+=sj1;
l10=sj0;
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
sj1=l10;
si2=0U;
sj2=i64_load(&i->m0,(U64)si2+18663208U);
l11=sj2;
sj3=l11;
sj4=l9;
si3=sj3 == sj4;
l4=si3;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+18663208U,sj1);
sj0=l11;
l9=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L27;
}
}
si0=0U;
si1=l8;
i32_store(&i->m0,(U64)si0+18663228U,si1);
si0=l8;
sj1=l10;
i64_store(&i->m0,(U64)si0+8U,sj1);
L26:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18663224U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18663224U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l3;
si1=4U;
si0+=si1;
f14712(i,si0);
L28:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
goto L25;
}
L11:;
si0=l0;
si1=l4;
si2=1U;
si1+=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l4;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l4;
si0=si0 != si1;
l7=si0;
si0=l8;
l4=si0;
si0=l7;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=2U;
si2=0U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
si2=3U;
si1&=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
L29:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l8;
f1347(i,si0);
L30:;
si0=l7;
l4=si0;
si0=l7;
if(si0){
goto L29;
}
}
L10:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
si0=8U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=8U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f14723(i);
UNREACHABLE;
L6:;
si0=17679400U;
si1=16U;
si2=l3;
si3=4U;
si2+=si3;
si3=17679416U;
si4=17680948U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1346(i,si0,si1);
UNREACHABLE;
L4:;
si0=1278024U;
si1=43U;
si2=1278172U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f1347(i,si0);
L31:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
}
L0:;
}

U32 f1349(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l1;
si1=1U;
si0^=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L3:;
{
si0=l1;
si1=3U;
si0>>=(si1&31);
si1=l1;
si2=16U;
si1=si1 < si2;
si2=l2;
si1|=si2;
si0&=si1;
l3=si0;
if(si0){
goto L2;
}
si0=l1;
si1=16U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l4;
si2=l0;
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
l4=si0;
si0=l5;
l1=si0;
si0=l4;
if(si0){
goto L3;
}
}
L2:;
si0=l3;
si1=1U;
si0^=si1;
goto L0;
L1:;
si0=1278336U;
si1=28U;
si2=1278476U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1350(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=28U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L1:;
{
si0=l7;
si1=10U;
si0=si0 < si1;
if(si0){
goto L5;
}
L6:;
{
si0=l5;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l8=si0;
goto L7;
L8:;
L9:;
{
si0=l0;
si1=l5;
si2=8U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L3;
}
si0=l8;
l5=si0;
si0=l8;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
}
L7:;
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=l8;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
goto L4;
}
L5:;
L10:;
{
si0=l5;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
l8=si0;
goto L11;
L12:;
L13:;
{
si0=l0;
si1=l5;
si2=8U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L3;
}
si0=l8;
l5=si0;
si0=l8;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
}
L11:;
si0=l8;
si1=3U;
si0&=si1;
if(si0){
goto L14;
}
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=wasi_snapshot_preview1__sched_yield(i);
L15:;
si0=l5;
l7=si0;
goto L2;
L14:;
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=l8;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L4:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658452U);
if(si0){
goto L16;
}
si0=l3;
si1=12U;
si0+=si1;
f1363(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658452U);
l5=si0;
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+18658452U,si1);
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+18658456U,sj1);
si0=0U;
si1=l3;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+18658464U,sj1);
si0=0U;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+18658472U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658444U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18658444U,si1);
L16:;
L17:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l5=si0;
if(si0){
goto L18;
}
si0=f1364(i);
l5=si0;
L18:;
si0=l4;
si1=0U;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+24U);
l7=si1;
si2=1U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=24U;
si0+=si1;
l8=si0;
si0=l7;
if(si0){
goto L20;
}
goto L19;
L21:;
si0=l8;
si1=l7;
si2=1278320U;
f594(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l8;
f1374(i,si0);
L19:;
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L17;
}
si0=l8;
f1375(i,si0);
goto L17;
L22:;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si1=12U;
si0&=si1;
if(si0){
goto L23;
}
L24:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
f1375(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L23:;
si0=0U;
si1=8U;
i32_store(&i->m0,(U64)si0+18658468U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18658456U,si1);
si0=0U;
si1=l2;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+18658472U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18658460U,si1);
si0=18658456U;
f1376(i,si0);
UNREACHABLE;
L3:;
si0=l0;
sj1=l9;
si2=l2;
si3=l5;
si0=f1351(i,si0,sj1,si2,si3);
l5=si0;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
}
L0:;
return si0;
}

U32 f1351(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si0|=si1;
l5=si0;
si1=-1640531527U;
si0*=si1;
l6=si0;
L3:;
{
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si1=l4;
si2=2U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l4;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
si0=si0 != si1;
l8=si0;
si0=l7;
l4=si0;
si0=l8;
if(si0){
goto L4;
}
L5:;
si0=18658452U;
si1=0U;
si0=f1357(i,si0,si1);
l9=si0;
L6:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l4=si0;
if(si0){
goto L7;
}
si0=f1364(i);
l4=si0;
L7:;
si0=l6;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=24U;
si0+=si1;
l7=si0;
si0=l8;
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l7;
si1=l8;
si2=1278320U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
f1374(i,si0);
L8:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L6;
}
si0=l7;
f1375(i,si0);
goto L6;
L11:;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
L12:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L13;
}
si0=l7;
f1375(i,si0);
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L4:;
si0=l4;
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
goto L3;
}
L2:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=8U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l2;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l9;
f1376(i,si0);
UNREACHABLE;
L1:;
si0=1U;
L0:;
return si0;
}

void f1352(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U64 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l3=si0;
L1:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l4=si0;
if(si0){
goto L2;
}
si0=f1364(i);
l4=si0;
L2:;
si0=l3;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
si0=l8;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=l6;
si2=1278320U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
f1374(i,si0);
L3:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L1;
}
si0=l6;
f1375(i,si0);
goto L1;
L6:;
}
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=0U;
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
if(si0){
goto L8;
}
si0=0U;
l10=si0;
si0=0U;
l4=si0;
goto L7;
L8:;
si0=l9;
si1=28U;
si0+=si1;
l11=si0;
si0=l2;
si1=76U;
si0+=si1;
l12=si0;
si0=l9;
si1=32U;
si0+=si1;
l13=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0+=si1;
l15=si0;
si0=0U;
l3=si0;
si0=0U;
l16=si0;
si0=0U;
l10=si0;
L10:;
{
si0=l8;
l4=si0;
si1=4U;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=1U;
l10=si0;
goto L9;
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l10=si0;
L12:;
si0=l4;
l16=si0;
si0=l5;
l11=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
goto L10;
L11:;
si0=l11;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l13;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
L14:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l17=si0;
si1=9U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l17;
l5=si0;
si0=l15;
l18=si0;
si0=l12;
l19=si0;
si0=8U;
l17=si0;
goto L15;
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l18=si0;
si0=l14;
l19=si0;
L15:;
si0=l5;
si1=l17;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
si2=1U;
f1359(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l18=si0;
si0=l14;
l19=si0;
L18:;
si0=l7;
si1=l3;
si0+=si1;
l3=si0;
si0=l18;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
goto L10;
L17:;
}
si0=1278700U;
si1=17U;
si2=1278720U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si1=9U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L23;
}
si0=1U;
sj1=1ULL;
si2=l2;
si3=80U;
si2+=si3;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l4=si0;
if(si0){
goto L22;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+80U);
l20=sj0;
sj1=1000000000ULL;
sj0=DIV_U(sj0,sj1);
l21=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si0=sj0 < sj1;
if(si0){
goto L24;
}
sj0=l21;
sj1=3294967296ULL;
sj0*=sj1;
sj1=l20;
sj0+=sj1;
si0=(U32)(sj0);
l4=si0;
sj0=l21;
sj1=l22;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0=si0 >= si1;
if(si0){
goto L24;
}
L25:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+16U);
l8=si1;
si2=13U;
si1<<=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
si2=17U;
si1>>=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
si2=5U;
si1<<=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l8;
si2=1000000U;
si1=REM_U(si1,si2);
si2=l4;
si1+=si2;
l4=si1;
si2=-1000000000U;
si1+=si2;
si2=l4;
si3=l4;
si4=999999999U;
si3=si3 > si4;
l8=si3;
si1=si3?si1:si2;
l4=si1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l5=si1;
si2=-1000000000U;
si1*=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
sj1=l21;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L21;
L24:;
si0=l1;
if(si0){
goto L21;
}
L23:;
si0=0U;
l8=si0;
si0=l10;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l4=si0;
goto L20;
L22:;
si0=l2;
si1=l4;
i32_store16(&i->m0,(U64)si0+80U,si1);
si0=17677962U;
si1=43U;
si2=l2;
si3=80U;
si2+=si3;
si3=17683100U;
si4=17683148U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L21:;
si0=l3;
si1=l10;
si2=255U;
si1&=si2;
si0|=si1;
l4=si0;
si0=1U;
l8=si0;
L20:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si1=8U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l4;
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si1=12U;
si0+=si1;
l4=si0;
goto L26;
L28:;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L26;
L27:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L29;
}
si0=l6;
f1375(i,si0);
L29:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si1=80U;
si0+=si1;
si1=60U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=60U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=52U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=0U;
si2=l4;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+76U);
l5=si3;
si4=8U;
si3=si3 > si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l5;
si2=l6;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l6;
if(si0){
goto L31;
}
si0=l8;
si1=7U;
si0&=si1;
l6=si0;
si0=0U;
l4=si0;
si0=l8;
si1=8U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=0U;
si1=l8;
si2=-8U;
si1&=si2;
si0-=si1;
l8=si0;
si0=4U;
l4=si0;
L34:;
{
si0=l2;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=l4;
si2=8U;
si1+=si2;
l4=si1;
si0+=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L34;
}
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
L33:;
si0=l6;
si0=!(si0);
if(si0){
goto L32;
}
L35:;
{
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L35;
}
}
L32:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L30;
}
L31:;
si0=l3;
f15024(i,si0);
L30:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f1377(i,si0);
UNREACHABLE;
L0:;
}

U32 f1353(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
L1:;
{
si0=l7;
si1=9U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
L9:;
{
si0=l6;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
l8=si0;
goto L10;
L11:;
si0=l6;
l8=si0;
L12:;
{
si0=l8;
si1=16U;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L10:;
si0=l8;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l8;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
goto L6;
}
L8:;
si0=l1;
if(si0){
goto L13;
}
L14:;
{
si0=l6;
si1=8U;
si0&=si1;
if(si0){
goto L15;
}
L16:;
{
si0=l6;
si1=16U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l8;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
L15:;
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l6;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
l6=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
goto L6;
}
L13:;
L17:;
{
si0=l6;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L18;
}
L19:;
{
si0=l6;
si1=16U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l8;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l6;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
l6=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
goto L6;
}
L7:;
L20:;
{
si0=l6;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
l8=si0;
goto L21;
L22:;
si0=l6;
l8=si0;
L23:;
{
si0=l8;
si1=16U;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
}
L21:;
si0=l8;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l8;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si0=si0 != si1;
if(si0){
goto L20;
}
}
L6:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658452U);
if(si0){
goto L24;
}
si0=l4;
si1=12U;
si0+=si1;
f1363(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658452U);
l6=si0;
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+18658452U,si1);
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+18658456U,sj1);
si0=0U;
si1=l4;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+18658464U,sj1);
si0=0U;
si1=l4;
si2=12U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+18658472U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L24;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658444U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18658444U,si1);
L24:;
L25:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l6=si0;
if(si0){
goto L26;
}
si0=f1364(i);
l6=si0;
L26:;
si0=l5;
si1=0U;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+24U);
l9=si1;
si2=1U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=24U;
si0+=si1;
l8=si0;
si0=l9;
if(si0){
goto L28;
}
goto L27;
L29:;
si0=l8;
si1=l9;
si2=1278320U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l8;
f1374(i,si0);
L27:;
si0=l6;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l6;
si1=2U;
si0&=si1;
if(si0){
goto L25;
}
si0=l8;
f1375(i,si0);
goto L25;
L30:;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=9U;
si0&=si1;
si1=9U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
f1375(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L1;
L31:;
si0=0U;
si1=16U;
i32_store(&i->m0,(U64)si0+18658468U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18658456U,si1);
si0=0U;
si1=l3;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+18658472U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18658460U,si1);
si0=18658456U;
f1376(i,si0);
UNREACHABLE;
L5:;
si0=1278336U;
si1=28U;
si2=1278492U;
f634(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L3:;
si0=l7;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=wasi_snapshot_preview1__sched_yield(i);
L32:;
si0=l6;
l7=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L1;
}
L0:;
return si0;
}

void f1354(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si1=1U;
si0|=si1;
l2=si0;
si1=-1640531527U;
si0*=si1;
l3=si0;
L1:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l4=si0;
if(si0){
goto L2;
}
si0=f1364(i);
l4=si0;
L2:;
si0=l3;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
si0=l8;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=l6;
si2=1278320U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
f1374(i,si0);
L3:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L1;
}
si0=l6;
f1375(i,si0);
goto L1;
L6:;
}
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=28U;
si0+=si1;
l9=si0;
si0=0U;
l8=si0;
goto L8;
L9:;
L10:;
{
si0=l4;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l8;
si1=4U;
si0+=si1;
l9=si0;
L8:;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L13;
}
goto L11;
}
L12:;
si0=l5;
si1=32U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l1;
si1=16U;
si0+=si1;
f14797(i,si0);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=sj0 < sj1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
sj0=l10;
sj1=l11;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 <= si1;
if(si0){
goto L14;
}
L15:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l8=si1;
si2=13U;
si1<<=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
si2=17U;
si1>>=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
si2=5U;
si1<<=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
sj1=l10;
si2=l6;
sj3=0ULL;
si4=l8;
si5=1000000U;
si4=REM_U(si4,si5);
f14798(i,si0,sj1,si2,sj3,si4);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
L14:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-3U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
f1377(i,si0);
UNREACHABLE;
L7:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-3U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L16;
}
si0=l6;
f1375(i,si0);
L16:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1355(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
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
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=20U;
si0+=si1;
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L1:;
{
si0=l8;
si1=10U;
si0=si0 < si1;
if(si0){
goto L6;
}
L7:;
{
si0=l5;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
l9=si0;
goto L8;
L9:;
si0=l5;
l9=si0;
L10:;
{
si0=l9;
si1=20U;
si0+=si1;
l5=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
}
L8:;
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si1=l9;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
goto L5;
}
L6:;
L11:;
{
si0=l5;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
l9=si0;
goto L12;
L13:;
si0=l5;
l9=si0;
L14:;
{
si0=l9;
si1=20U;
si0+=si1;
l5=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
}
L12:;
si0=l9;
si1=3U;
si0&=si1;
if(si0){
goto L15;
}
si0=l8;
si1=1U;
si0+=si1;
l9=si0;
si0=l8;
si1=3U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=wasi_snapshot_preview1__sched_yield(i);
L16:;
si0=l9;
l8=si0;
goto L2;
L15:;
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si1=l9;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l9;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L5:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658452U);
if(si0){
goto L17;
}
si0=l3;
si1=12U;
si0+=si1;
f1363(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658452U);
l9=si0;
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+18658452U,si1);
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+18658456U,sj1);
si0=0U;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+18658464U,sj1);
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+18658472U,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658444U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18658444U,si1);
L17:;
L18:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l9=si0;
if(si0){
goto L19;
}
si0=f1364(i);
l9=si0;
L19:;
si0=l4;
si1=0U;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l5=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l10=si1;
si2=1U;
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=24U;
si0+=si1;
l5=si0;
si0=l10;
if(si0){
goto L21;
}
goto L20;
L22:;
si0=l5;
si1=l10;
si2=1278320U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l5;
f1374(i,si0);
L20:;
si0=l9;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l9;
si1=2U;
si0&=si1;
if(si0){
goto L18;
}
si0=l5;
f1375(i,si0);
goto L18;
L23:;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l9;
si1=12U;
si0&=si1;
if(si0){
goto L24;
}
L25:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l9;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l9;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
si0=l5;
f1375(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L24:;
si0=0U;
si1=20U;
i32_store(&i->m0,(U64)si0+18658468U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18658456U,si1);
si0=0U;
si1=l2;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+18658472U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18658460U,si1);
si0=18658456U;
f1376(i,si0);
UNREACHABLE;
L4:;
si0=1278336U;
si1=28U;
si2=1278508U;
f634(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
}
L0:;
return si0;
}

void f1356(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U32 l20=0;
U64 l21=0;
U64 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L4:;
{
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=-20U;
si1+=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l3;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l0;
si1=-1640531527U;
si0*=si1;
l6=si0;
L5:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l3=si0;
if(si0){
goto L6;
}
si0=f1364(i);
l3=si0;
L6:;
si0=l6;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l7=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l7;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l5=si1;
si2=1U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
si0=l5;
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l7;
si1=l4;
si2=1278320U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
f1374(i,si0);
L7:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l3;
si1=2U;
si0&=si1;
if(si0){
goto L5;
}
si0=l4;
f1375(i,si0);
goto L5;
L10:;
}
si0=l8;
si1=l7;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=0U;
l10=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
if(si0){
goto L12;
}
si0=0U;
l7=si0;
si0=0U;
l11=si0;
si0=0U;
l3=si0;
goto L11;
L12:;
si0=l9;
si1=28U;
si0+=si1;
l12=si0;
si0=l2;
si1=76U;
si0+=si1;
l13=si0;
si0=l9;
si1=32U;
si0+=si1;
l14=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0+=si1;
l16=si0;
si0=0U;
l7=si0;
si0=0U;
l17=si0;
si0=0U;
l11=si0;
L14:;
{
si0=l5;
l3=si0;
si1=4U;
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=1U;
l11=si0;
goto L13;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l7;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=1U;
l11=si0;
L16:;
si0=l3;
l17=si0;
si0=l6;
l12=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
goto L14;
L15:;
si0=l12;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l14;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
L18:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l18=si0;
si1=9U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l18;
l6=si0;
si0=l16;
l19=si0;
si0=l13;
l20=si0;
si0=8U;
l18=si0;
goto L19;
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l15;
l20=si0;
L19:;
si0=l6;
si1=l18;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
si2=1U;
f1359(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l15;
l20=si0;
L22:;
si0=l8;
si1=l7;
si0+=si1;
l7=si0;
si0=l19;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
goto L14;
L21:;
}
si0=1278700U;
si1=17U;
si2=1278720U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=9U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L24;
}
si0=1U;
sj1=1ULL;
si2=l2;
si3=80U;
si2+=si3;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l3=si0;
if(si0){
goto L25;
}
si0=0U;
l10=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+80U);
l21=sj0;
sj1=1000000000ULL;
sj0=DIV_U(sj0,sj1);
l22=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si0=sj0 < sj1;
if(si0){
goto L24;
}
sj0=l22;
sj1=3294967296ULL;
sj0*=sj1;
sj1=l21;
sj0+=sj1;
si0=(U32)(sj0);
l3=si0;
sj0=l22;
sj1=l23;
si0=sj0 != sj1;
if(si0){
goto L26;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si0=si0 >= si1;
if(si0){
goto L24;
}
L26:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=13U;
si1<<=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
si2=17U;
si1>>=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l5;
si2=1000000U;
si1=REM_U(si1,si2);
si2=l3;
si1+=si2;
l3=si1;
si2=-1000000000U;
si1+=si2;
si2=l3;
si3=l3;
si4=999999999U;
si3=si3 > si4;
l5=si3;
si1=si3?si1:si2;
l3=si1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l6=si1;
si2=-1000000000U;
si1*=si2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
sj1=l22;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
si2=l6;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
goto L24;
L25:;
si0=l2;
si1=l3;
i32_store16(&i->m0,(U64)si0+80U,si1);
si0=17677962U;
si1=43U;
si2=l2;
si3=80U;
si2+=si3;
si3=17683100U;
si4=17683148U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L24:;
si0=l11;
si1=255U;
si0&=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l10;
si1=l1;
si0|=si1;
si0=!(si0);
if(si0){
goto L28;
}
L29:;
{
si0=l3;
si1=-20U;
si0+=si1;
l5=si0;
si1=l7;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l0;
si1=l8;
si2=-2U;
si1&=si2;
si2=l6;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
l3=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L29;
}
}
si0=1U;
l0=si0;
goto L27;
L28:;
L30:;
{
si0=l0;
si1=l3;
si2=-2U;
si1&=si2;
si2=-20U;
si1+=si2;
si2=l6;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si0=si0 != si1;
l7=si0;
si0=l5;
l3=si0;
si0=l7;
if(si0){
goto L30;
}
}
si0=0U;
l0=si0;
L27:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=8U;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l3;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si1=12U;
si0+=si1;
l3=si0;
goto L1;
L32:;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
goto L1;
L31:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l3;
si1=2U;
si0&=si1;
if(si0){
goto L33;
}
si0=l4;
f1375(i,si0);
L33:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l2;
si1=80U;
si0+=si1;
si1=60U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=60U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=52U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=0U;
si2=l3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+76U);
l5=si3;
si4=8U;
si3=si3 > si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l5;
si2=l0;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l0;
if(si0){
goto L34;
}
si0=l4;
si1=7U;
si0&=si1;
l0=si0;
si0=0U;
l3=si0;
si0=l4;
si1=8U;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=0U;
si1=l4;
si2=-8U;
si1&=si2;
si0-=si1;
l4=si0;
si0=4U;
l3=si0;
L37:;
{
si0=l2;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l3;
si2=8U;
si1+=si2;
l3=si1;
si0+=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L37;
}
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
L36:;
si0=l0;
si0=!(si0);
if(si0){
goto L35;
}
L38:;
{
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L38;
}
}
L35:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L2;
}
L34:;
si0=l7;
f15024(i,si0);
L2:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f1377(i,si0);
UNREACHABLE;
L0:;
}

U32 f1357(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=12U;
si0+=si1;
f1363(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658444U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18658444U,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f1358(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1359(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
i->g0=si0;
si0=8U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
l6=si0;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
l4=si0;
L1:;
si0=-2147483647U;
l7=si0;
si0=l4;
si1=l6;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L6;
L7:;
si0=0U;
si1=-1U;
si2=l2;
si3=-1U;
si2+=si3;
si2=I32_CLZ(si2);
si1>>=(si2&31);
si2=l2;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l2=si0;
if(si0){
goto L8;
}
si0=l2;
l6=si0;
si0=0U;
l7=si0;
goto L2;
L8:;
si0=8U;
l4=si0;
si0=l5;
si1=8U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=4U;
si0+=si1;
l8=si0;
si0=l5;
l9=si0;
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
l4=si0;
L9:;
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si1=536870911U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=0U;
l7=si0;
goto L2;
L13:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l8;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l4;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l6;
si1=2147483645U;
si0=si0 < si1;
if(si0){
goto L11;
}
L14:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1278623U;
si1=43U;
si2=l3;
si3=8U;
si2+=si3;
si3=1278668U;
si4=1278684U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=l6;
si1=2147483644U;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=0U;
l7=si0;
goto L2;
L15:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l4;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=2147483644U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=4U;
l7=si0;
si0=l8;
si1=l5;
si2=4U;
si3=l6;
si0=f33(i,si0,si1,si2,si3);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
goto L4;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
l7=si0;
si0=l6;
si1=4U;
si0=f32(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l8;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L4;
L11:;
si0=l8;
f15024(i,si0);
L6:;
goto L2;
L5:;
si0=1278736U;
si1=32U;
si2=1278768U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=-2147483647U;
l7=si0;
goto L2;
L3:;
si0=l5;
l6=si0;
si0=0U;
l7=si0;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1360(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
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
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=20U;
si0+=si1;
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L1:;
{
si0=l8;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
L6:;
{
si0=l5;
si1=255U;
si0&=si1;
l9=si0;
si0=l0;
si1=l5;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L4;
}
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
goto L6;
}
L5:;
L7:;
{
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l5;
si1=255U;
si0&=si1;
l9=si0;
si0=l0;
si1=l5;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
goto L4;
L8:;
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
si0=l5;
si1=255U;
si0&=si1;
l9=si0;
si0=l0;
si1=l5;
si2=2U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L2;
}
goto L7;
}
L4:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L3:;
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
si1=1U;
si0+=si1;
l5=si0;
si0=l8;
si1=3U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=wasi_snapshot_preview1__sched_yield(i);
L9:;
si0=l5;
l8=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
goto L1;
L2:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658452U);
if(si0){
goto L10;
}
si0=l3;
si1=12U;
si0+=si1;
f1363(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658452U);
l5=si0;
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+18658452U,si1);
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+18658456U,sj1);
si0=0U;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+18658464U,sj1);
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+18658472U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658444U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18658444U,si1);
L10:;
L11:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l5=si0;
if(si0){
goto L12;
}
si0=f1364(i);
l5=si0;
L12:;
si0=l4;
si1=0U;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=24U;
si0+=si1;
l9=si0;
si0=l8;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=l9;
si1=l8;
si2=1278900U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l9;
f1374(i,si0);
L13:;
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L11;
}
si0=l9;
f1375(i,si0);
goto L11;
L16:;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L18;
}
si0=l9;
f1375(i,si0);
L18:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
goto L1;
L17:;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18658456U,si1);
si0=0U;
si1=l2;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+18658472U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18658460U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+18658468U,si1);
si0=18658456U;
f1376(i,si0);
UNREACHABLE;
L0:;
return si0;
}

void f1361(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l3=si0;
L1:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l4=si0;
if(si0){
goto L2;
}
si0=f1364(i);
l4=si0;
L2:;
si0=l3;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
si0=l8;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l5;
si1=l6;
si2=1278900U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
f1374(i,si0);
L3:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L1;
}
si0=l6;
f1375(i,si0);
goto L1;
L6:;
}
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=28U;
si0+=si1;
l9=si0;
si0=0U;
l8=si0;
goto L8;
L9:;
L10:;
{
si0=l4;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l8;
si1=4U;
si0+=si1;
l9=si0;
L8:;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=1U;
l5=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L13:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l0;
si0=si0 != si1;
l5=si0;
si0=l8;
si1=l0;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L13;
}
goto L11;
}
L12:;
si0=l5;
si1=32U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
L11:;
si0=l2;
si1=16U;
si0+=si1;
f14797(i,si0);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=sj0 < sj1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
sj0=l10;
sj1=l11;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 <= si1;
if(si0){
goto L16;
}
L17:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l8=si1;
si2=13U;
si1<<=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
si2=17U;
si1>>=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
si2=5U;
si1<<=(si2&31);
si2=l8;
si1^=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=l10;
si2=l6;
sj3=0ULL;
si4=l8;
si5=1000000U;
si4=REM_U(si4,si5);
f14798(i,si0,sj1,si2,sj3,si4);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
goto L15;
L16:;
si0=l1;
if(si0){
goto L15;
}
si0=l5;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
l6=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L14;
L18:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
goto L14;
L15:;
si0=1U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=1U;
l6=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L14:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
f1377(i,si0);
UNREACHABLE;
L7:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L19;
}
si0=l6;
f1375(i,si0);
L19:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1362(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
sj1=1ULL;
si2=l2;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=1000000000ULL;
sj0=DIV_U(sj0,sj1);
l5=sj0;
si0=-1U;
si1=l0;
si2=3U;
si1*=si2;
l0=si1;
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
si1=1U;
si0+=si1;
si1=1U;
si2=l0;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
if(si0){
goto L6;
}
si0=0U;
l0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=64ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=64U;
l7=si0;
goto L5;
L6:;
si0=l6;
si1=33554431U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l0;
if(si0){
goto L8;
}
si0=64U;
l3=si0;
goto L7;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si1=l0;
si0=f15030(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
sj0=l5;
sj1=3294967296ULL;
sj0*=sj1;
sj1=l4;
sj0+=sj1;
si0=(U32)(sj0);
l7=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=0U;
l3=si0;
L10:;
{
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=l0;
f1366(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
l7=si0;
goto L5;
L12:;
si0=l0;
if(si0){
goto L14;
}
si0=64U;
l7=si0;
goto L13;
L14:;
si0=64U;
si1=l0;
si2=6U;
si1<<=(si2&31);
l8=si1;
si0=f15030(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=l3;
si2=l8;
si0=f15143(i,si0,si1,si2);
L13:;
si0=l3;
f15024(i,si0);
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=31U;
si2=l6;
si2=I32_CLZ(si2);
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L4:;
si0=l2;
si1=l3;
i32_store16(&i->m0,(U64)si0,si1);
si0=17677962U;
si1=43U;
si2=l2;
si3=17683100U;
si4=17683148U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=64U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=64U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f1363(rustpythonInstance*i,U32 l0) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658444U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+18658444U,si1);
si0=l1;
si1=3U;
si0*=si1;
l2=si0;
L3:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658448U);
l3=si0;
if(si0){
goto L4;
}
si0=f1364(i);
l3=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=6U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=24U;
si0+=si1;
l4=si0;
L6:;
{
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
f1374(i,si0);
L7:;
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si0=l5;
si1=-64U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=l3;
si0=f1362(i,si0,si1);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l4;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L10:;
{
si0=l8;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+8U);
si0-=si1;
si1=31U;
si0&=si1;
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L12:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=-1640531527U;
si0*=si1;
si1=l10;
si0>>=(si1&31);
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l11;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si1=4U;
si0+=si1;
si1=l5;
si2=28U;
si1+=si2;
si2=l2;
si0=si2?si0:si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
l4=si0;
si0=l6;
if(si0){
goto L12;
}
}
L11:;
si0=l8;
si1=64U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+18658448U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=6U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=24U;
si0+=si1;
l4=si0;
L13:;
{
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l6;
si1=2U;
si0&=si1;
if(si0){
goto L14;
}
si0=l4;
f1375(i,si0);
L14:;
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si0=l5;
si1=-64U;
si0+=si1;
l5=si0;
if(si0){
goto L13;
}
goto L2;
}
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=6U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=24U;
si0+=si1;
l4=si0;
L15:;
{
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l6;
si1=2U;
si0&=si1;
if(si0){
goto L16;
}
si0=l4;
f1375(i,si0);
L16:;
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si0=l5;
si1=-64U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L15;
}
L8:;
}
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+18658448U,si1);
L2:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L1:;
si0=l5;
si1=l1;
si2=1279032U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1364(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2,si3;
si0=3U;
si1=0U;
si0=f1362(i,si0,si1);
l0=si0;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658448U);
l1=si1;
si2=l0;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18658448U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
goto L0;
L1:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L2:;
si0=l0;
f15024(i,si0);
si0=l1;
L0:;
return si0;
}

void f1365(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f1366(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=6U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=33554432U;
si0=si0 < si1;
si1=6U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=64U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=6U;
si1<<=(si2&31);
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
f1365(i,si0,si1,si2,si3);
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

void f1367(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f1368(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f1369(i,si0);
UNREACHABLE;
L0:;
}

void f1369(rustpythonInstance*i,U32 l0) {
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
si1=1279048U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1370(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=38U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1279084U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=4U;
si0+=si1;
f1368(i,si0);
UNREACHABLE;
L0:;
}

void f1371(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1372(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=1279068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1373(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
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
si1=1279068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1374(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=0U;
l1=si0;
L1:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L2:;
{
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=3U;
si0=si0 < si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l3=si0;
l1=si0;
si0=l2;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l3;
l1=si0;
goto L1;
L4:;
si0=1279244U;
f1370(i,si0);
UNREACHABLE;
L3:;
si0=l0;
si1=l2;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=l2;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
}
}
L0:;
}

void f1375(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L2:;
{
si0=l1;
l2=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0&=si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=2U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=l2;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L3:;
{
si0=l2;
si1=-4U;
si0&=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L4;
}
si0=l3;
l1=si0;
L5:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L9;
}
L10:;
{
si0=l0;
si1=l2;
si2=1U;
si1&=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L8;
}
si0=l1;
l2=si0;
si0=l1;
si1=4U;
si0=si0 < si1;
if(si0){
goto L10;
}
goto L6;
}
L9:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-3U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=1279260U;
f1370(i,si0);
UNREACHABLE;
L7:;
si0=l0;
si1=l2;
si2=-3U;
si1&=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L1;
}
L6:;
si0=l1;
l2=si0;
goto L3;
}
L1:;
L0:;
}

void f1376(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1279244U;
f1370(i,si0);
UNREACHABLE;
L0:;
}

void f1377(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1279260U;
f1370(i,si0);
UNREACHABLE;
L0:;
}

void f1378(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f1379(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f1380(i,si0);
UNREACHABLE;
L0:;
}

void f1380(rustpythonInstance*i,U32 l0) {
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
si1=1279276U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1381(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=1279448U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=38U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1279409U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
si0+=si1;
f1379(i,si0);
UNREACHABLE;
L0:;
}

void f1382(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1383(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=1279296U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1384(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
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
si1=1279296U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

F64 f1385(rustpythonInstance*i,F64 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6;
sd0=l0;
sd1=1;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L1;
}
sd0=l0;
sd1=4294967296;
si0=sd0 < sd1;
sd1=l0;
sd2=0;
si1=sd1 >= sd2;
l1=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
sd0=l0;
si0=I32_TRUNC_U_F64(sd0);
l2=si0;
goto L2;
L3:;
si0=0U;
l2=si0;
L2:;
sd0=l0;
si1=-1U;
si2=l2;
si3=0U;
si4=l1;
si2=si4?si2:si3;
sd3=l0;
sd4=4294967295;
si3=sd3 > sd4;
si1=si3?si1:si2;
l1=si1;
sd1=(F64)(si1);
sd0-=sd1;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L1;
}
sd0=1;
l0=sd0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si1=7U;
si0&=si1;
l3=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=7U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=1U;
l2=si0;
si0=1U;
l1=si0;
goto L5;
L6:;
si0=0U;
si1=l2;
si2=-8U;
si1&=si2;
si0-=si1;
l4=si0;
si0=1U;
l2=si0;
si0=8U;
l1=si0;
L7:;
{
si0=l1;
si1=l1;
si2=-1U;
si1+=si2;
si2=l1;
si3=-2U;
si2+=si3;
si3=l1;
si4=-3U;
si3+=si4;
si4=l1;
si5=-4U;
si4+=si5;
si5=l1;
si6=-5U;
si5+=si6;
si6=l1;
si7=-6U;
si6+=si7;
si7=l1;
si8=-7U;
si7+=si8;
si8=l2;
si7*=si8;
si6*=si7;
si5*=si6;
si4*=si5;
si3*=si4;
si2*=si3;
si1*=si2;
si0*=si1;
l2=si0;
si0=l4;
si1=l1;
si2=8U;
si1+=si2;
l1=si1;
si0+=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l1;
si1=-7U;
si0+=si1;
l1=si0;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l1;
si1=l2;
si0*=si1;
l2=si0;
si0=l1;
si1=1U;
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
si0=l2;
sd0=(F64)(si0);
l0=sd0;
L4:;
sd0=l0;
goto L0;
L1:;
sd0=l0;
sd1=0.5;
si0=sd0 < sd1;
if(si0){
goto L10;
}
sd0=l0;
sd1=-1;
sd0+=sd1;
l0=sd0;
sd1=0.5;
sd0+=sd1;
sd1=l0;
sd2=5;
sd1+=sd2;
l5=sd1;
sd2=0.5;
sd1+=sd2;
l6=sd1;
sd1=f15129(i,sd1);
sd0*=sd1;
sd1=0.0012086577526594748;
sd2=l5;
sd1/=sd2;
sd2=24.014098241189721;
sd3=l0;
sd4=3;
sd3+=sd4;
sd2/=sd3;
sd3=76.180091729485028;
sd4=l0;
sd5=1;
sd4+=sd5;
sd3/=sd4;
sd4=0;
sd3+=sd4;
sd4=-86.505320329272053;
sd5=l0;
sd6=2;
sd5+=sd6;
sd4/=sd5;
sd3+=sd4;
sd2+=sd3;
sd3=-1.2317395783752254;
sd4=l0;
sd5=4;
sd4+=sd5;
sd3/=sd4;
sd2+=sd3;
sd1+=sd2;
sd2=-5.3970243871319904e-06;
sd3=l0;
sd4=6;
sd3+=sd4;
sd2/=sd3;
sd1+=sd2;
sd2=1.000000000189712;
sd1+=sd2;
sd1=f15129(i,sd1);
sd2=0.91893853320467267;
sd1+=sd2;
sd2=l6;
sd1-=sd2;
sd0+=sd1;
sd0=f15118(i,sd0);
goto L0;
L10:;
sd0=3.1415926535897931;
sd1=l0;
sd2=3.1415926535897931;
sd1*=sd2;
sd1=f15137(i,sd1);
sd2=1;
sd3=l0;
sd2-=sd3;
sd2=f1385(i,sd2);
sd1*=sd2;
sd0/=sd1;
L0:;
return sd0;
}

F64 f1386(rustpythonInstance*i,F64 l0) {
F64 l1=0;
F64 l2=0;
F64 l3=0;
F64 l4=0;
U32 si0;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9,sd10,sd11,sd12,sd13,sd14,sd15,sd16,sd17,sd18,sd19,sd20,sd21,sd22,sd23,sd24,sd25,sd26,sd27,sd28;
sd0=l0;
sd1=0;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L1;
}
sd0=2;
sd1=l0;
sd2=2;
sd1+=sd2;
sd0/=sd1;
l1=sd0;
sd0=l1;
sd1=l1;
sd2=4;
sd1*=sd2;
sd2=-2;
sd1+=sd2;
l2=sd1;
sd2=l2;
sd3=l2;
sd4=l2;
sd5=l2;
sd6=l2;
sd7=l2;
sd8=l2;
sd9=l2;
sd10=l2;
sd11=l2;
sd12=l2;
sd13=l2;
sd14=l2;
sd15=l2;
sd16=l2;
sd17=l2;
sd18=l2;
sd19=l2;
sd20=l2;
sd21=l2;
sd22=l2;
sd23=l2;
sd24=l2;
sd25=l2;
sd26=l2;
sd27=l2;
sd28=0;
sd27*=sd28;
sd28=1.2099999999999999e-16;
sd27+=sd28;
l3=sd27;
sd26*=sd27;
sd27=-9.3999999999999999e-17;
sd26+=sd27;
l4=sd26;
sd25*=sd26;
sd26=l3;
sd25-=sd26;
sd26=-1.5230000000000001e-15;
sd25+=sd26;
l3=sd25;
sd24*=sd25;
sd25=l4;
sd24-=sd25;
sd25=7.1059999999999999e-15;
sd24+=sd25;
l4=sd24;
sd23*=sd24;
sd24=l3;
sd23-=sd24;
sd24=3.8099999999999998e-16;
sd23+=sd24;
l3=sd23;
sd22*=sd23;
sd23=l4;
sd22-=sd23;
sd23=-1.12708e-13;
sd22+=sd23;
l4=sd22;
sd21*=sd22;
sd22=l3;
sd21-=sd22;
sd22=3.1309199999999997e-13;
sd21+=sd22;
l3=sd21;
sd20*=sd21;
sd21=l4;
sd20-=sd21;
sd21=8.9448700000000004e-13;
sd20+=sd21;
l4=sd20;
sd19*=sd20;
sd20=l3;
sd19-=sd20;
sd20=-6.8860269999999998e-12;
sd19+=sd20;
l3=sd19;
sd18*=sd19;
sd19=l4;
sd18-=sd19;
sd19=2.3940379999999998e-12;
sd18+=sd19;
l4=sd18;
sd17*=sd18;
sd18=l3;
sd17-=sd18;
sd18=9.6467910999999994e-11;
sd17+=sd18;
l3=sd17;
sd16*=sd17;
sd17=l4;
sd16-=sd17;
sd17=-2.27365122e-10;
sd16+=sd17;
l4=sd16;
sd15*=sd16;
sd16=l3;
sd15-=sd16;
sd16=-9.9136415599999992e-10;
sd15+=sd16;
l3=sd15;
sd14*=sd15;
sd15=l4;
sd14-=sd15;
sd15=5.0593434950000004e-09;
sd14+=sd15;
l4=sd14;
sd13*=sd14;
sd14=l3;
sd13-=sd14;
sd14=6.5290544390000001e-09;
sd13+=sd14;
l3=sd13;
sd12*=sd13;
sd13=l4;
sd12-=sd13;
sd13=-8.5238095914999995e-08;
sd12+=sd13;
l4=sd12;
sd11*=sd12;
sd12=l3;
sd11-=sd12;
sd12=1.5626441722000001e-08;
sd11+=sd12;
l3=sd11;
sd10*=sd11;
sd11=l4;
sd10-=sd11;
sd11=1.30365583558e-06;
sd10+=sd11;
l4=sd10;
sd9*=sd10;
sd10=l3;
sd9-=sd10;
sd10=-1.624290004647e-06;
sd9+=sd10;
l3=sd9;
sd8*=sd9;
sd9=l4;
sd8-=sd9;
sd9=-2.0278578112534001e-05;
sd8+=sd9;
l4=sd8;
sd7*=sd8;
sd8=l3;
sd7-=sd8;
sd8=4.2523324806907003e-05;
sd7+=sd8;
l3=sd7;
sd6*=sd7;
sd7=l4;
sd6-=sd7;
sd7=0.00036683949785276101;
sd6+=sd7;
l4=sd6;
sd5*=sd6;
sd6=l3;
sd5-=sd6;
sd6=-0.00094659534448203605;
sd5+=sd6;
l3=sd5;
sd4*=sd5;
sd5=l4;
sd4-=sd5;
sd5=-0.0095615147868086305;
sd4+=sd5;
l4=sd4;
sd3*=sd4;
sd4=l3;
sd3-=sd4;
sd4=0.019476473204185836;
sd3+=sd4;
l3=sd3;
sd2*=sd3;
sd3=l4;
sd2-=sd3;
sd3=0.64196979235649021;
sd2+=sd3;
sd1*=sd2;
sd2=-1.3026537197817094;
sd1+=sd2;
sd2=0.5;
sd1*=sd2;
sd2=l0;
sd3=l0;
sd2*=sd3;
sd1-=sd2;
sd2=l3;
sd1-=sd2;
sd1=f15118(i,sd1);
sd0*=sd1;
goto L0;
L1:;
f1381(i);
UNREACHABLE;
L0:;
return sd0;
}

U32 f1387(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L3;
}
L4:;
si0=l2;
si1=24U;
si0+=si1;
l3=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1280020U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1279708U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=432U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1279820U;
f614(i,si0,si1);
UNREACHABLE;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=344U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si2=256U;
si0=f15145(i,si0,si1,si2);
si0=l3;
si1=312U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+304U,sj1);
si0=l3;
si1=296U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=292U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l3;
si1=280U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=276U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l3;
sj1=65536ULL;
i64_store(&i->m0,(U64)si0+328U,sj1);
si0=l3;
sj1=65536ULL;
i64_store(&i->m0,(U64)si0+320U,sj1);
si0=l3;
si1=64U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l3;
si1=300U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=284U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=344U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f1388(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1279927U;
si2=11U;
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
si1=1279924U;
si2=3U;
si3=l2;
si4=4U;
si3+=si4;
si4=1279940U;
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

void f1389(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1390(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1391(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658476U);
l0=si0;
if(si0){
goto L1;
}
si0=18658476U;
si1=0U;
si0=f1387(i,si0,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658476U);
l0=si0;
L1:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L2;
}
UNREACHABLE;
L2:;
si0=l0;
L0:;
return si0;
}

U32 f1392(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658476U);
if(si0){
goto L1;
}
si0=18658476U;
si1=l0;
si0=f1387(i,si0,si1);
L1:;
si0=18658476U;
L0:;
return si0;
}

U32 f1393(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1279836U;
si2=8U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1279844U;
si2=4U;
si3=l0;
si4=264U;
si3+=si4;
si4=1279884U;
si0=f644(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=64U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1279848U;
si2=10U;
si3=l2;
si4=12U;
si3+=si4;
si4=1279860U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=1279876U;
si2=5U;
si3=l0;
si4=256U;
si3+=si4;
si4=1279860U;
si0=f644(i,si0,si1,si2,si3,si4);
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
si1=1102482U;
si2=2U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+24U);
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

U32 f1394(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0;
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
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
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

void f1395(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1396(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1397(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1279916U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1279836U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=8U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f1398(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1399(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=40U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1279956U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1400(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1401(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
L0:;
}

void f1402(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=8218619441270479681ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=7981601680382863260ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f1403(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

U32 f1404(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1279996U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=441U;
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
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f1405(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=1280076U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1280084U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=1280160U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1406(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1U;
l5=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=1U;
i32_store16(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=261993005057ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=61U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
f1407(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l5;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=0U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
switch(si0){
case 0:
goto L9;
case 1:
goto L12;
default:
goto L11;
}
L12:;
si0=0U;
l2=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+65U);
si0=!(si0);
if(si0){
goto L13;
}
goto L9;
L13:;
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l8=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
if(si0){
goto L14;
}
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
L14:;
si0=l8;
si1=l7;
si0-=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l7;
si0+=si1;
l7=si0;
goto L10;
L11:;
si0=l4;
si1=l7;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
f1407(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
if(si0){
goto L15;
}
goto L9;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L10:;
si0=l5;
if(si0){
goto L17;
}
si0=1U;
l2=si0;
goto L16;
L17:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
L16:;
si0=l2;
si1=l7;
si2=l5;
si0=f15143(i,si0,si1,si2);
L9:;
si0=l3;
si1=-3U;
si0+=si1;
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
goto L20;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L1;
case 11:
goto L1;
case 12:
goto L1;
case 13:
goto L1;
case 14:
goto L1;
case 15:
goto L19;
case 16:
goto L1;
case 17:
goto L1;
case 18:
goto L21;
default:
goto L1;
}
L21:;
si0=l6;
si1=1282579U;
si2=21U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L20:;
si0=l6;
si1=1282600U;
si2=10U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L19:;
si0=l6;
si1=1282610U;
si2=18U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l2;
si2=l5;
si3=10U;
f611(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L22;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l9=sj0;
si0=!(sj0);
if(si0){
goto L23;
}
sj0=l9;
sj1=640ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L22;
}
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L22:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658436U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1282808U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=1280084U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=1U;
si2=1282816U;
si3=0U;
si4=l4;
f884(i,si0,si1,si2,si3,si4);
L24:;
si0=1U;
f14793(i,si0);
UNREACHABLE;
L18:;
si0=l6;
si1=1282576U;
si2=3U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L7:;
si0=1282516U;
si1=43U;
si2=1282560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1282516U;
si1=43U;
si2=1282628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1407(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
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
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 > si1;
if(si0){
goto L3;
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
L4:;
{
si0=l3;
si1=l4;
si0+=si1;
l11=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=l4;
si0-=si1;
l13=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
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
goto L9;
}
si0=l14;
si1=l11;
si0-=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l14=si0;
L11:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l15;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l15;
si1=l13;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L6;
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
goto L5;
}
si0=l13;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L6;
}
L9:;
si0=l13;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l15=si0;
L8:;
si0=l12;
si1=16843009U;
si0*=si1;
l14=si0;
L13:;
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
goto L7;
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
goto L7;
}
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L13;
}
}
L7:;
si0=l15;
si1=l13;
si0=si0 == si1;
if(si0){
goto L6;
}
L14:;
{
si0=l11;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l15;
l14=si0;
goto L5;
L15:;
si0=l13;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L6:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L3;
L5:;
si0=l1;
si1=l14;
si2=l4;
si1+=si2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=l4;
si2=l7;
si1-=si2;
l14=si1;
si0+=si1;
si1=l8;
si2=l7;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l14;
si1=l15;
si0-=si1;
l14=si0;
si0=l3;
si1=l15;
si0+=si1;
l2=si0;
goto L1;
L17:;
si0=l7;
si1=4U;
si2=1280256U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l4;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L4;
}
}
L3:;
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
goto L18;
}
si0=l11;
si1=l15;
si0=si0 == si1;
if(si0){
goto L1;
}
L18:;
si0=l11;
si1=l15;
si0-=si1;
l14=si0;
si0=l3;
si1=l15;
si0+=si1;
l2=si0;
L1:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1408(rustpythonInstance*i,U32 l0) {
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

void f1409(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1410(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
f1421(i,si0);
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
f15024(i,si0);
L2:;
si0=l1;
f1410(i,si0);
si0=l1;
f15024(i,si0);
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
f15024(i,si0);
L3:;
L0:;
}

void f1411(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
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
U32 l58=0;
U64 l59=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=1408U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=10U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1280280U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1280272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=42949672970ULL;
i64_store(&i->m0,(U64)si0+972U,sj1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+968U,si1);
si0=l1;
si1=40U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f188(i,si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+56U);
sj2=8192ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+152U);
l3=sj0;
si0=l1;
si1=664U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=l1;
si2=168U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
si1=l1;
si2=40U;
si1+=si2;
si2=136U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=688U;
si0+=si1;
l5=si0;
si1=l1;
si2=40U;
si1+=si2;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=32U;
si0+=si1;
l6=si0;
si1=l1;
si2=40U;
si1+=si2;
si2=152U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=704U;
si0+=si1;
l7=si0;
si1=l1;
si2=40U;
si1+=si2;
si2=160U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+160U);
i64_store(&i->m0,(U64)si0+664U,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=204U;
si1+=si2;
si2=148U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si2=96U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=136U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=144U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=152U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=160U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0+1080U,sj1);
si0=l1;
si1=5U;
i32_store(&i->m0,(U64)si0+1076U,si1);
si0=l1;
si1=1280282U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1096U,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=172U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=8U;
si1+=si2;
si2=140U;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l1;
si1=60U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=1280344U;
i32_store(&i->m0,(U64)si0+1132U,si1);
si0=l1;
si1=42U;
i32_store(&i->m0,(U64)si0+1092U,si1);
si0=l1;
si1=1280302U;
i32_store(&i->m0,(U64)si0+1088U,si1);
si0=l1;
si1=15U;
i32_store(&i->m0,(U64)si0+1068U,si1);
si0=l1;
si1=1280287U;
i32_store(&i->m0,(U64)si0+1064U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+628U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+616U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+604U,si1);
si0=l1;
sj1=5126ULL;
i64_store(&i->m0,(U64)si0+588U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+576U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+568U,si1);
si0=l1;
sj1=6ULL;
i64_store(&i->m0,(U64)si0+556U,sj1);
si0=l1;
si1=1280404U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0+544U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+532U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+520U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+464U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1280410U;
si3=12U;
f558(i,si0,si1,si2,si3);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+696U,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=236U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=352U;
si0+=si1;
si1=248U;
si0+=si1;
l9=si0;
si1=l1;
si2=664U;
si1+=si2;
si2=248U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=256U;
si0+=si1;
l11=si0;
si1=l1;
si2=664U;
si1+=si2;
si2=256U;
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=264U;
si0+=si1;
l5=si0;
si1=l1;
si2=664U;
si1+=si2;
si2=264U;
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=272U;
si0+=si1;
l14=si0;
si1=l1;
si2=664U;
si1+=si2;
si2=272U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=280U;
si0+=si1;
l16=si0;
si1=l1;
si2=664U;
si1+=si2;
si2=280U;
si1+=si2;
l17=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=288U;
si0+=si1;
l18=si0;
si1=l1;
si2=664U;
si1+=si2;
si2=288U;
si1+=si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=296U;
si0+=si1;
l20=si0;
si1=l1;
si2=664U;
si1+=si2;
si2=296U;
si1+=si2;
l21=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+904U);
i64_store(&i->m0,(U64)si0+592U,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+900U);
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=276U;
si0+=si1;
l22=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=264U;
si0+=si1;
l6=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=252U;
si0+=si1;
l23=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=236U;
si0+=si1;
l24=si0;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=224U;
si0+=si1;
l25=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=216U;
si0+=si1;
l26=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=204U;
si0+=si1;
l27=si0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=192U;
si0+=si1;
l28=si0;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=180U;
si0+=si1;
l29=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280422U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1136U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1080U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1280422U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l1;
si1=664U;
si0+=si1;
si1=236U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l30=si1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=236U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=296U;
si0+=si1;
l31=si0;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=288U;
si0+=si1;
l32=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=280U;
si0+=si1;
l33=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=272U;
si0+=si1;
l34=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=256U;
si0+=si1;
l35=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=248U;
si0+=si1;
l36=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+904U);
i64_store(&i->m0,(U64)si0+1208U,sj1);
si0=l1;
si1=l30;
si2=4130U;
si1|=si2;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1280423U;
si3=9U;
f558(i,si0,si1,si2,si3);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+696U,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=208U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=232U;
si0+=si1;
l37=si0;
si1=l1;
si2=664U;
si1+=si2;
si2=232U;
si1+=si2;
l38=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l1;
si2=664U;
si1+=si2;
si2=224U;
si1+=si2;
l39=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l36;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l35;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l33;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+880U);
i64_store(&i->m0,(U64)si0+1184U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+904U);
i64_store(&i->m0,(U64)si0+1208U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+900U);
l30=si0;
si0=l1;
si1=1280432U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=33U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=l30;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=352U;
si0+=si1;
si1=276U;
si0+=si1;
l40=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=252U;
si0+=si1;
l41=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=236U;
si0+=si1;
l42=si0;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=224U;
si0+=si1;
l30=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=216U;
si0+=si1;
l43=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=204U;
si0+=si1;
l44=si0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=192U;
si0+=si1;
l45=si0;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=180U;
si0+=si1;
l46=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280465U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+520U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+464U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1280465U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l47=si1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=236U;
si0=f15143(i,si0,si1,si2);
si0=l20;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+904U);
i64_store(&i->m0,(U64)si0+592U,sj1);
si0=l1;
si1=l47;
si2=4130U;
si1|=si2;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1280466U;
si3=12U;
f558(i,si0,si1,si2,si3);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+696U,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=208U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=352U;
si0+=si1;
si1=232U;
si0+=si1;
l48=si0;
si1=l38;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=l39;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+880U);
i64_store(&i->m0,(U64)si0+568U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+904U);
i64_store(&i->m0,(U64)si0+592U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+900U);
l47=si0;
si0=l1;
si1=1280478U;
i32_store(&i->m0,(U64)si0+560U,si1);
si0=l1;
si1=28U;
i32_store(&i->m0,(U64)si0+564U,si1);
si0=l1;
si1=l47;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1244U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1232U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1220U,si1);
si0=l1;
sj1=5158ULL;
i64_store(&i->m0,(U64)si0+1204U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1192U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1184U,si1);
si0=l1;
sj1=11ULL;
i64_store(&i->m0,(U64)si0+1172U,sj1);
si0=l1;
si1=1280506U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0+1160U,sj1);
si0=l1;
sj1=11ULL;
i64_store(&i->m0,(U64)si0+1144U,sj1);
si0=l1;
si1=1280517U;
i32_store(&i->m0,(U64)si0+1140U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1080U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1280528U;
si3=12U;
f558(i,si0,si1,si2,si3);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+696U,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=208U;
si0=f15143(i,si0,si1,si2);
si0=l37;
si1=l38;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l39;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l36;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l35;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l33;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+880U);
i64_store(&i->m0,(U64)si0+1184U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+904U);
i64_store(&i->m0,(U64)si0+1208U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+900U);
l7=si0;
si0=l1;
si1=1280540U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=106U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=l7;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l45;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280646U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+520U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+464U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1280654U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=208U;
si0=f15143(i,si0,si1,si2);
si0=l43;
si1=l1;
si2=664U;
si1+=si2;
si2=216U;
si1+=si2;
l49=si1;
si2=88U;
si0=f15143(i,si0,si1,si2);
l43=si0;
si0=l1;
si1=58U;
i32_store(&i->m0,(U64)si0+564U,si1);
si0=l1;
si1=1280655U;
i32_store(&i->m0,(U64)si0+560U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l22;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
sj1=7ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l28;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280713U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1136U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1080U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1280720U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=208U;
si0=f15143(i,si0,si1,si2);
si0=l26;
si1=l49;
si2=88U;
si0=f15143(i,si0,si1,si2);
l47=si0;
si0=l1;
si1=50U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=1280721U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l45;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280771U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+520U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+464U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1280776U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l1;
si1=876U;
si0+=si1;
l7=si0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=664U;
si0+=si1;
si1=208U;
si0+=si1;
l26=si0;
si1=1280777U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l22;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=240U;
si0+=si1;
l50=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=208U;
si0+=si1;
l51=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=196U;
si0+=si1;
l52=si0;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280794U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1280799U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1280800U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=240U;
si0+=si1;
l53=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=208U;
si0+=si1;
l54=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=196U;
si0+=si1;
l55=si0;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=172U;
si0+=si1;
l56=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280820U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+468U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+464U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1280827U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1280828U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l22;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=12U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280875U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1280887U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=42U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1280888U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l53;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l55;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l56;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280930U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+468U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+464U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1280937U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=43U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1280938U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l22;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=19U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1280981U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1281000U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=32U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1281001U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l53;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=9U;
i32_store(&i->m0,(U64)si0,si1);
si0=l55;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l56;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1281033U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+468U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+464U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1281042U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=53U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1281043U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l22;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=18U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1281096U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1281114U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1281115U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l53;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l55;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l56;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1281170U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+468U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+464U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1281177U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=62U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1281178U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l22;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1281240U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1281261U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l57=si1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=192U;
si0=f15143(i,si0,si1,si2);
l58=si0;
si0=l37;
si1=l38;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l39;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l36;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l35;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l33;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+880U);
i64_store(&i->m0,(U64)si0+1184U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+904U);
i64_store(&i->m0,(U64)si0+1208U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+976U,sj1);
si0=l1;
si1=1281262U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=34U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=l57;
si2=34U;
si1|=si2;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l53;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=15U;
i32_store(&i->m0,(U64)si0,si1);
si0=l55;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l56;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1281296U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+468U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+464U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1281311U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l31=si1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=192U;
si0=f15143(i,si0,si1,si2);
si0=l48;
si1=l38;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=l39;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+880U);
i64_store(&i->m0,(U64)si0+568U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+904U);
i64_store(&i->m0,(U64)si0+592U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l1;
si1=1281312U;
i32_store(&i->m0,(U64)si0+560U,si1);
si0=l1;
si1=61U;
i32_store(&i->m0,(U64)si0+564U,si1);
si0=l1;
si1=l31;
si2=34U;
si1|=si2;
i32_store(&i->m0,(U64)si0+588U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1244U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1232U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1220U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l1;
si1=1060U;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1192U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1184U,si1);
si0=l1;
si1=73U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=1281401U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=21U;
i32_store(&i->m0,(U64)si0+1172U,si1);
si0=l1;
si1=1281373U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=999U;
i32_store(&i->m0,(U64)si0+1164U,si1);
si0=l1;
si1=999U;
i32_store(&i->m0,(U64)si0+1160U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1148U,si1);
si0=l1;
si1=21U;
i32_store(&i->m0,(U64)si0+1144U,si1);
si0=l1;
si1=1281373U;
i32_store(&i->m0,(U64)si0+1140U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=7U;
i32_store(&i->m0,(U64)si0+1052U,si1);
si0=l1;
si1=1281394U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+976U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l53;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l55;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l56;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1281474U;
i32_store(&i->m0,(U64)si0+552U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+640U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+480U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+468U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+464U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+456U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+440U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+432U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+424U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+384U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=1281487U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=208U;
si0=f15143(i,si0,si1,si2);
si0=l43;
si1=l49;
si2=88U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=87U;
i32_store(&i->m0,(U64)si0+564U,si1);
si0=l1;
si1=1281488U;
i32_store(&i->m0,(U64)si0+560U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l22;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1281575U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1281585U;
si3=1U;
f1456(i,si0,si1,si2,si3);
si0=l7;
si1=113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=1281586U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=304U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f190(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=312U;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=664U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f359(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=7U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17461735U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17461732U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=32U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1060U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1036U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1020U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1012U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
i32_store16(&i->m0,(U64)si0+1067U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1052U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+976U,sj1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+992U,sj1);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+1064U,si1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+1028U,sj1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+1004U,sj1);
si0=l1;
si1=1044U;
si0+=si1;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=256U;
i32_store16(&i->m0,(U64)si0+1065U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+968U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1069U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1281170U;
si2=7U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L8;
}
si0=1U;
l6=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1062U,si1);
goto L7;
L8:;
si0=l1;
si1=l1;
si2=664U;
si1+=si2;
si2=1281170U;
si3=7U;
si1=f1464(i,si1,si2,si3);
l6=si1;
i32_store8(&i->m0,(U64)si0+1062U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1281096U;
si2=18U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=1U;
l25=si0;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1058U,si1);
goto L5;
L6:;
si0=l1;
si1=l1;
si2=664U;
si1+=si2;
si2=1281096U;
si3=18U;
si1=f1464(i,si1,si2,si3);
l25=si1;
i32_store8(&i->m0,(U64)si0+1058U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=i32_load8_u(&i->m0,(U64)si0);
si1=99U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
si0=0U;
l5=si0;
si0=l1;
si1=664U;
si0+=si1;
si1=1280422U;
si2=1U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=i32_load8_u(&i->m0,(U64)si0);
si1=109U;
si0=si0 == si1;
if(si0){
goto L1;
}
L9:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280465U;
si2=1U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=6U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280404U;
si2=6U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=1U;
l5=si0;
si0=l1;
si1=664U;
si0+=si1;
si1=1280404U;
si2=6U;
si0=f1464(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280820U;
si2=7U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L10;
}
si0=1U;
l5=si0;
goto L1;
L10:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280820U;
si2=7U;
si0=f1464(i,si0,si1,si2);
l5=si0;
goto L1;
L3:;
si0=1U;
si1=10U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l5;
i32_store8(&i->m0,(U64)si0+1054U,si1);
si0=l1;
si1=l1;
si2=664U;
si1+=si2;
si2=1281474U;
si3=13U;
sj1=f1436(i,si1,si2,si3);
i64_store(&i->m0,(U64)si0+976U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280930U;
si2=7U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L14;
}
si0=1U;
l2=si0;
goto L13;
L14:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280930U;
si2=7U;
si0=f1464(i,si0,si1,si2);
l2=si0;
L13:;
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+1057U,si1);
si0=l6;
si1=l25;
si0|=si1;
l40=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280771U;
si2=5U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L41;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1052U,si1);
goto L31;
L42:;
si0=l1;
si1=1288U;
si0+=si1;
si1=1281699U;
si2=14U;
f14732(i,si0,si1,si2);
si0=l1;
si1=400U;
si0+=si1;
l2=si0;
si1=l1;
si2=1296U;
si1+=si2;
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=14U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l1;
si1=1281699U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1288U);
i64_store(&i->m0,(U64)si0+392U,sj1);
si0=l1;
si1=1016U;
si0+=si1;
l6=si0;
si1=l1;
si2=352U;
si1+=si2;
f1432(i,si0,si1);
si0=l1;
si1=1288U;
si0+=si1;
si1=1281713U;
si2=10U;
f14732(i,si0,si1,si2);
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=10U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l1;
si1=1281713U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1288U);
i64_store(&i->m0,(U64)si0+392U,sj1);
si0=l6;
si1=l1;
si2=352U;
si1+=si2;
f1432(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280771U;
si2=5U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L43;
}
L44:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280771U;
si2=5U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L43;
}
si0=l1;
si1=352U;
si0+=si1;
si1=1281723U;
si2=11U;
f14732(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
f15024(i,si0);
L43:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1052U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280820U;
si2=7U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L38;
}
L45:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280820U;
si2=7U;
si0=f1464(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L39;
}
goto L38;
L41:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280771U;
si2=5U;
si0=f1464(i,si0,si1,si2);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=l5;
if(si0){
goto L32;
}
si0=l2;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280820U;
si2=7U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L37;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1053U,si1);
goto L36;
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280820U;
si2=7U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L38;
}
L46:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280820U;
si2=7U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L38;
}
L39:;
si0=l1;
si1=352U;
si0+=si1;
si1=1281734U;
si2=13U;
f14732(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
l2=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
f15024(i,si0);
L38:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1053U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=8U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
sj0=i64_load(&i->m0,(U64)si0);
sj1=7312272863631011951ULL;
si0=sj0 == sj1;
if(si0){
goto L25;
}
L47:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280646U;
si2=8U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L25;
}
goto L33;
L37:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280820U;
si2=7U;
si0=f1464(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1053U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L35;
}
L36:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=8U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
sj0=i64_load(&i->m0,(U64)si0);
sj1=7312272863631011951ULL;
si0=sj0 == sj1;
if(si0){
goto L25;
}
L35:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280646U;
si2=8U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L25;
}
goto L24;
L34:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=8U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
sj0=i64_load(&i->m0,(U64)si0);
sj1=7312272863631011951ULL;
si0=sj0 == sj1;
if(si0){
goto L25;
}
L48:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280646U;
si2=8U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L25;
}
L33:;
si0=l1;
si1=352U;
si0+=si1;
si1=1281747U;
si2=14U;
f14731(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
if(si0){
goto L53;
}
si0=l1;
si1=360U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=1U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
l30=si0;
si0=l1;
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l30;
l2=si0;
si0=l30;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L54;
case 1:
goto L51;
case 2:
goto L52;
default:
goto L51;
}
L54:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l30;
si1=1U;
si0+=si1;
l2=si0;
goto L51;
L53:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
l2=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l1;
si1=360U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l2;
f15024(i,si0);
goto L49;
L52:;
si0=1U;
l6=si0;
si0=l30;
l2=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L50;
}
L51:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=0U;
l25=si0;
L56:;
{
si0=l5;
if(si0){
goto L57;
}
si0=l25;
l6=si0;
goto L50;
L57:;
si0=1U;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l25;
si1=255U;
si0&=si1;
si1=10U;
si0*=si1;
l25=si0;
si1=8U;
si0>>=(si1&31);
if(si0){
goto L50;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l25;
si1=255U;
si0&=si1;
si1=l7;
si2=255U;
si1&=si2;
si0+=si1;
l25=si0;
si1=255U;
si0&=si1;
si1=l25;
si0=si0 == si1;
if(si0){
goto L56;
}
goto L50;
}
L55:;
si0=0U;
l6=si0;
L58:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l25=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L59;
}
si0=1U;
l6=si0;
goto L50;
L59:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=10U;
si0*=si1;
si1=l25;
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
L50:;
si0=l26;
si0=!(si0);
if(si0){
goto L60;
}
si0=l30;
f15024(i,si0);
L60:;
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+1067U,si1);
L49:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280713U;
si2=7U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L22;
}
L61:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280713U;
si2=7U;
si0=f1464(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L23;
}
goto L22;
L32:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1052U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L30;
}
L31:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280820U;
si2=7U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L30;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1053U,si1);
goto L27;
L30:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280820U;
si2=7U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L28;
}
L29:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=8U;
si0=si0 != si1;
if(si0){
goto L62;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
sj0=i64_load(&i->m0,(U64)si0);
sj1=7312272863631011951ULL;
si0=sj0 == sj1;
if(si0){
goto L25;
}
L62:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280646U;
si2=8U;
si0=f1464(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L24;
}
goto L25;
L28:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1053U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L26;
}
L27:;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=8U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
sj0=i64_load(&i->m0,(U64)si0);
sj1=7312272863631011951ULL;
si0=sj0 == sj1;
if(si0){
goto L25;
}
L26:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280646U;
si2=8U;
si0=f1464(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L24;
}
L25:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280646U;
si2=8U;
sj0=f1436(i,si0,si1,si2);
l3=sj0;
sj1=256ULL;
si0=sj0 >= sj1;
if(si0){
goto L63;
}
si0=l1;
sj1=l3;
i64_store8(&i->m0,(U64)si0+1067U,sj1);
goto L24;
L63:;
si0=1282392U;
si1=43U;
si2=l1;
si3=352U;
si2+=si3;
si3=1282468U;
si4=1282500U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L24:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280713U;
si2=7U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L22;
}
L64:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280713U;
si2=7U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L22;
}
si0=l40;
if(si0){
goto L15;
}
L23:;
si0=l1;
si1=352U;
si0+=si1;
si1=1281761U;
si2=13U;
f14731(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
if(si0){
goto L20;
}
si0=l1;
si1=360U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l26=si0;
si0=1U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
l30=si0;
si0=l1;
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l30;
l2=si0;
si0=l30;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L17;
case 2:
goto L19;
default:
goto L17;
}
L22:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280713U;
si2=7U;
sj0=f1436(i,si0,si1,si2);
l3=sj0;
sj1=256ULL;
si0=sj0 >= sj1;
if(si0){
goto L18;
}
si0=l1;
sj1=l3;
i64_store8(&i->m0,(U64)si0+1068U,sj1);
goto L15;
L21:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l30;
si1=1U;
si0+=si1;
l2=si0;
goto L17;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
l2=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=360U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
f15024(i,si0);
goto L15;
L19:;
si0=1U;
l6=si0;
si0=l30;
l2=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L16;
L18:;
si0=1282392U;
si1=43U;
si2=l1;
si3=352U;
si2+=si3;
si3=1282468U;
si4=1282484U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=0U;
l25=si0;
L66:;
{
si0=l5;
if(si0){
goto L67;
}
si0=l25;
l6=si0;
goto L16;
L67:;
si0=1U;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l25;
si1=255U;
si0&=si1;
si1=10U;
si0*=si1;
l25=si0;
si1=8U;
si0>>=(si1&31);
if(si0){
goto L16;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l25;
si1=255U;
si0&=si1;
si1=l7;
si2=255U;
si1&=si2;
si0+=si1;
l25=si0;
si1=255U;
si0&=si1;
si1=l25;
si0=si0 == si1;
if(si0){
goto L66;
}
goto L16;
}
L65:;
si0=0U;
l6=si0;
L68:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l25=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L69;
}
si0=1U;
l6=si0;
goto L16;
L69:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=10U;
si0*=si1;
si1=l25;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L68;
}
}
L16:;
si0=l26;
si0=!(si0);
if(si0){
goto L70;
}
si0=l30;
f15024(i,si0);
L70:;
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+1068U,si1);
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=12U;
si0=si0 != si1;
if(si0){
goto L73;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280875U;
si2=12U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L72;
}
L73:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280875U;
si2=12U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L72;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L74;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1281170U;
si2=7U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L72;
}
L74:;
si0=l1;
si1=664U;
si0+=si1;
si1=1281170U;
si2=7U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L72;
}
si0=l40;
if(si0){
goto L71;
}
si0=l1;
si1=352U;
si0+=si1;
si1=1281774U;
si2=16U;
f14732(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
l2=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
f15024(i,si0);
L72:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1056U,si1);
L71:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280794U;
si2=5U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L76;
}
L77:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280794U;
si2=5U;
si0=f1464(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L75;
}
L76:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1059U,si1);
L75:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=19U;
si0=si0 != si1;
if(si0){
goto L81;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280981U;
si2=19U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L80;
}
L81:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280981U;
si2=19U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L80;
}
si0=l40;
if(si0){
goto L78;
}
si0=l1;
si1=352U;
si0+=si1;
si1=1281790U;
si2=23U;
f14732(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
l2=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
si0=!(si0);
if(si0){
goto L82;
}
si0=l2;
f15024(i,si0);
L82:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1060U,si1);
goto L79;
L80:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1060U,si1);
si0=l40;
if(si0){
goto L78;
}
L79:;
si0=l1;
si1=352U;
si0+=si1;
si1=1281813U;
si2=21U;
f14732(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
l2=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
f15024(i,si0);
L83:;
si0=l1;
si1=352U;
si0+=si1;
si1=1281813U;
si2=21U;
f14731(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
if(si0){
goto L84;
}
si0=l1;
si1=360U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=1288U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+356U);
l5=si1;
si2=l1;
si3=364U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=10U;
f611(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1288U);
if(si0){
goto L85;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+1296U);
l3=sj0;
si0=!(sj0);
if(si0){
goto L86;
}
sj0=l3;
sj1=640ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L85;
}
L86:;
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L78;
}
si0=l5;
f15024(i,si0);
goto L78;
L85:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658436U);
si0=!(si0);
if(si0){
goto L87;
}
si0=l1;
si1=364U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=l1;
si1=1282336U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l1;
si1=1280084U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=1U;
si2=1282364U;
si3=0U;
si4=l1;
f884(i,si0,si1,si2,si3,si4);
L87:;
si0=1U;
f14793(i,si0);
UNREACHABLE;
L84:;
si0=l1;
si1=1296U;
si0+=si1;
si1=l1;
si2=364U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+356U);
i64_store(&i->m0,(U64)si0+1288U,sj1);
si0=1282392U;
si1=43U;
si2=l1;
si3=1288U;
si2+=si3;
si3=1282436U;
si4=1282452U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L78:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=9U;
si0=si0 != si1;
if(si0){
goto L90;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1281033U;
si2=9U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L89;
}
L90:;
si0=l1;
si1=664U;
si0+=si1;
si1=1281033U;
si2=9U;
si0=f1464(i,si0,si1,si2);
if(si0){
goto L89;
}
si0=l40;
if(si0){
goto L88;
}
si0=l1;
si1=352U;
si0+=si1;
si1=1281834U;
si2=14U;
f14732(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
l2=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
si0=!(si0);
if(si0){
goto L89;
}
si0=l2;
f15024(i,si0);
L89:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1061U,si1);
L88:;
si0=l1;
si1=32U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=1281373U;
si3=21U;
f1437(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=7U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
l5=si2;
si0=si2?si0:si1;
l2=si0;
if(si0){
goto L111;
}
si0=1U;
l6=si0;
goto L110;
L111:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L107;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L109;
}
L110:;
si0=l6;
si1=l5;
si2=1281394U;
si3=l5;
si1=si3?si1:si2;
si2=l2;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1044U);
si0=!(si0);
if(si0){
goto L112;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1040U);
f15024(i,si0);
L112:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+1286U,si1);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+1287U,si1);
si0=l1;
si1=1384U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=1281240U;
si3=21U;
f1438(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
si1=1288U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l58;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1308U;
si0+=si1;
si1=l1;
si2=1055U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=1384U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1384U);
l3=sj1;
i64_store(&i->m0,(U64)si0+1288U,sj1);
si0=l1;
si1=1288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=1287U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1292U);
l30=si0;
si0=l1;
si1=l1;
si2=1286U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1300U,si1);
si0=l30;
sj1=l3;
si1=(U32)(sj1);
l2=si1;
si0=si0 == si1;
if(si0){
goto L113;
}
si0=l1;
si1=1288U;
si0+=si1;
si1=12U;
si0+=si1;
l26=si0;
si0=l30;
si1=l2;
si0-=si1;
si1=-12U;
si0+=si1;
l25=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1296U);
l7=si0;
si0=l1;
si1=968U;
si0+=si1;
si1=24U;
si0+=si1;
l41=si0;
L114:;
{
si0=l1;
si1=l2;
si2=12U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+1288U,si1);
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=l7;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
si1=352U;
si0+=si1;
si1=l26;
si2=l2;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+28U);
f1406(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1000U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+996U);
si0=si0 != si1;
if(si0){
goto L115;
}
si0=l41;
si1=l2;
si2=l25;
si3=12U;
si2=DIV_U(si2,si3);
si3=1U;
si2+=si3;
f1418(i,si0,si1,si2);
L115:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+992U);
si1=l2;
si2=24U;
si1*=si2;
si0+=si1;
l6=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+352U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1000U,si1);
si0=l25;
si1=-12U;
si0+=si1;
l25=si0;
si0=l5;
l2=si0;
si0=l5;
si1=l30;
si0=si0 != si1;
if(si0){
goto L114;
}
}
L113:;
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1286U);
l2=si1;
i32_store8(&i->m0,(U64)si0+1063U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1287U);
if(si0){
goto L118;
}
si0=l40;
if(si0){
goto L116;
}
si0=l1;
si1=352U;
si0+=si1;
si1=1281848U;
si2=25U;
f14732(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
l2=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+356U);
si0=!(si0);
if(si0){
goto L118;
}
si0=l2;
f15024(i,si0);
L118:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1064U,si1);
L117:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1286U);
l2=si0;
L116:;
si0=l1;
si1=1004U;
si0+=si1;
l5=si0;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L108;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=7U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l2;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1281397U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1281394U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1012U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1008U);
si0=si0 != si1;
if(si0){
goto L120;
}
si0=l5;
si1=l6;
f1414(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1012U);
l6=si0;
L120:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1004U);
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1012U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1012U,si1);
goto L108;
L119:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L109:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L108:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+976U);
l3=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L123;
}
si0=1281873U;
l6=si0;
si0=21U;
l2=si0;
sj0=l3;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L121;
case 1:
goto L122;
default:
goto L121;
}
L123:;
si0=1281894U;
l6=si0;
si0=19U;
l2=si0;
L122:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l25=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l25;
si1=l6;
si2=l2;
si0=f15143(i,si0,si1,si2);
l25=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1012U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1008U);
si0=si0 != si1;
if(si0){
goto L124;
}
si0=l5;
si1=l6;
f1414(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1012U);
l6=si0;
L124:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1004U);
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1012U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1012U,si1);
L121:;
si0=l1;
si1=352U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=1281296U;
si3=15U;
f1438(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+352U);
si0=!(si0);
if(si0){
goto L125;
}
si0=l1;
si1=1320U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+352U);
i64_store(&i->m0,(U64)si0+1320U,sj1);
si0=l5;
si1=l1;
si2=1320U;
si1+=si2;
f1431(i,si0,si1);
L125:;
si0=l1;
si1=1332U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=1280422U;
si3=1U;
f1438(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1332U);
l5=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1336U);
l25=si1;
si0=si0 == si1;
if(si0){
goto L105;
}
si0=l1;
si1=16U;
si0+=si1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+1340U);
l30=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=!(si0);
if(si0){
goto L105;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=2U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l6;
si1=25389U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=376U;
si0+=si1;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=372U;
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l1;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=1U;
l41=si0;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l1;
si1=1384U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f1435(i,si0,si1);
si0=1U;
l30=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L127;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L107;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l30=si0;
si0=!(si0);
if(si0){
goto L103;
}
L127:;
si0=l30;
si1=l7;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1392U);
l40=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1388U);
l42=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
l26=si0;
goto L92;
L126:;
si0=l1;
si1=1344U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=1280465U;
si3=1U;
f1438(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1344U);
l5=si0;
si0=!(si0);
if(si0){
goto L128;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1348U);
l25=si1;
si0=si0 == si1;
if(si0){
goto L102;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+1352U);
l30=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L102;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l6;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1281991U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1281984U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=376U;
si0+=si1;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=372U;
si0+=si1;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+368U,si1);
si0=l1;
sj1=47244640267ULL;
i64_store(&i->m0,(U64)si0+360U,sj1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=1U;
l30=si0;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l1;
si1=1384U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f1435(i,si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L129;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L107;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l30=si0;
si0=!(si0);
if(si0){
goto L100;
}
L129:;
si0=l30;
si1=l7;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1392U);
l40=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1388U);
l42=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
l26=si0;
si0=2U;
l41=si0;
goto L92;
L128:;
si0=l1;
si1=1356U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=1280506U;
si3=11U;
f1438(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1356U);
si0=!(si0);
if(si0){
goto L130;
}
si0=l1;
si1=1368U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=1356U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1356U);
i64_store(&i->m0,(U64)si0+1368U,sj1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1062U,si1);
si0=l1;
si1=1384U;
si0+=si1;
si1=l1;
si2=1368U;
si1+=si2;
f1434(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1392U);
l40=si0;
if(si0){
goto L135;
}
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=9U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1282003U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1281995U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1388U);
if(si0){
goto L136;
}
si0=l1;
si1=1384U;
si0+=si1;
si1=0U;
f1414(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1392U);
l5=si0;
L136:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
sj1=38654705673ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1392U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+1392U,si1);
si0=9U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1282012U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1282004U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1388U);
si0=si0 != si1;
if(si0){
goto L137;
}
si0=l1;
si1=1384U;
si0+=si1;
si1=l2;
f1414(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1392U);
l2=si0;
L137:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=38654705673ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1392U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+1392U,si1);
si0=13U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l5;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1282018U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1282013U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1388U);
si0=si0 != si1;
if(si0){
goto L138;
}
si0=l1;
si1=1384U;
si0+=si1;
si1=l2;
f1414(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1392U);
l2=si0;
L138:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=55834574861ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1392U);
si2=1U;
si1+=si2;
l40=si1;
i32_store(&i->m0,(U64)si0+1392U,si1);
si0=l40;
si0=!(si0);
if(si0){
goto L134;
}
L135:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
l26=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L139;
}
si0=1U;
si1=l5;
si2=l2;
si0=f15143(i,si0,si1,si2);
goto L131;
L139:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L107;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l30=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l30;
si1=l5;
si2=l2;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=-7U;
si0+=si1;
switch(si0){
case 0:
goto L133;
case 1:
goto L131;
case 2:
goto L132;
default:
goto L131;
}
L134:;
si0=0U;
si1=0U;
si2=1282028U;
f594(i,si0,si1,si2);
UNREACHABLE;
L133:;
si0=l5;
si1=1282044U;
si2=7U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L131;
}
goto L93;
L132:;
si0=l5;
si1=1281995U;
si2=9U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L93;
}
L131:;
si0=l1;
si1=364U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=l1;
si1=1282112U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l1;
si1=1280084U;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l1;
si1=352U;
si0+=si1;
si1=1282120U;
f614(i,si0,si1);
UNREACHABLE;
L130:;
si0=l1;
si1=1368U;
si0+=si1;
si1=l1;
si2=664U;
si1+=si2;
si2=1280404U;
si3=6U;
f1438(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1368U);
si0=!(si0);
if(si0){
goto L143;
}
si0=l1;
si1=352U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=1368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1368U);
i64_store(&i->m0,(U64)si0+352U,sj1);
si0=l1;
si1=1384U;
si0+=si1;
si1=l1;
si2=352U;
si1+=si2;
f1434(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1392U);
l40=si0;
si0=!(si0);
if(si0){
goto L140;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
l26=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l26;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L142;
}
si0=1U;
l30=si0;
goto L141;
L143:;
si0=0U;
l41=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l26=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=l26;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l26;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l42=si0;
si0=1U;
l40=si0;
si0=1U;
l44=si0;
si0=0U;
l30=si0;
goto L91;
L142:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L107;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l30=si0;
si0=!(si0);
if(si0){
goto L94;
}
L141:;
si0=l30;
si1=l5;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
l59=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+696U);
l2=si0;
si0=!(si0);
if(si0){
goto L145;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L145;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=1280820U;
si2=7U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L145;
}
si0=1U;
l44=si0;
goto L144;
L145:;
si0=l1;
si1=664U;
si0+=si1;
si1=1280820U;
si2=7U;
si0=f1464(i,si0,si1,si2);
l44=si0;
L144:;
sj0=l59;
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1388U);
l42=si0;
si0=0U;
l41=si0;
goto L91;
L140:;
si0=0U;
si1=0U;
si2=1282136U;
f594(i,si0,si1,si2);
UNREACHABLE;
L107:;
f53(i);
UNREACHABLE;
L106:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L105:;
si0=1281913U;
si1=23U;
si2=1281952U;
f634(i,si0,si1,si2);
UNREACHABLE;
L104:;
si0=1U;
si1=2U;
f52(i,si0,si1);
UNREACHABLE;
L103:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L102:;
si0=1281913U;
si1=23U;
si2=1281968U;
f634(i,si0,si1,si2);
UNREACHABLE;
L101:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L100:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L99:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L98:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L97:;
si0=1U;
si1=13U;
f52(i,si0,si1);
UNREACHABLE;
L96:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L95:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L94:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L93:;
si0=l2;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1388U);
l42=si0;
si0=3U;
l41=si0;
L92:;
L91:;
si0=l1;
si1=1384U;
si0+=si1;
si1=1282152U;
si2=14U;
f14731(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1384U);
si0=!(si0);
if(si0){
goto L148;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1388U);
l2=si0;
si0=!(si0);
if(si0){
goto L149;
}
si0=l1;
si1=1392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L149;
}
si0=l2;
f15024(i,si0);
L149:;
si0=0U;
l2=si0;
goto L147;
L148:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1388U);
l45=si0;
si0=l1;
si1=1396U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=6U;
si0=si0 != si1;
if(si0){
goto L154;
}
si0=l1;
si1=1392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l43=si0;
si0=l45;
si1=1282166U;
si2=6U;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L153;
}
goto L152;
L154:;
si0=l1;
si1=1392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l43=si0;
si0=l2;
if(si0){
goto L152;
}
goto L151;
L153:;
si0=0U;
l2=si0;
si0=l43;
si0=!(si0);
if(si0){
goto L147;
}
si0=l45;
f15024(i,si0);
goto L147;
L152:;
si0=l45;
l5=si0;
si0=l45;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L157;
case 1:
goto L155;
case 2:
goto L156;
default:
goto L155;
}
L157:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L151;
}
si0=l45;
si1=1U;
si0+=si1;
l5=si0;
goto L155;
L156:;
si0=l45;
l5=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L151;
}
L155:;
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L158;
}
si0=0U;
l25=si0;
L159:;
{
si0=l25;
l6=si0;
si0=l2;
si0=!(si0);
l7=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L150;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l25=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L150;
}
si0=l6;
sj0=(U64)(si0);
sj1=10ULL;
sj0*=sj1;
l59=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L150;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l59;
si0=(U32)(sj0);
l46=si0;
si1=l25;
si0+=si1;
l25=si0;
si1=l46;
si0=si0 >= si1;
if(si0){
goto L159;
}
goto L150;
}
L158:;
si0=0U;
l6=si0;
L160:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l25=si0;
si1=10U;
si0=si0 < si1;
l7=si0;
si0=l25;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L161;
}
goto L150;
L161:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l25;
si1=l6;
si2=10U;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L160;
}
goto L150;
}
L151:;
si0=0U;
l7=si0;
L150:;
si0=l43;
si0=!(si0);
if(si0){
goto L162;
}
si0=l45;
f15024(i,si0);
L162:;
si0=1U;
l2=si0;
si0=l7;
if(si0){
goto L146;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658436U);
si0=!(si0);
if(si0){
goto L163;
}
si0=l1;
si1=1396U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+1388U,si1);
si0=l1;
si1=1282940U;
i32_store(&i->m0,(U64)si0+1384U,si1);
si0=l1;
si1=1280084U;
i32_store(&i->m0,(U64)si0+1392U,si1);
si0=l1;
si1=1384U;
si0+=si1;
si1=1U;
si2=1282948U;
si3=0U;
si4=l1;
f884(i,si0,si1,si2,si3,si4);
L163:;
si0=1U;
f14793(i,si0);
UNREACHABLE;
L147:;
L146:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+972U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+968U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1036U);
l5=si0;
si0=!(si0);
if(si0){
goto L164;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1028U);
l2=si0;
L165:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L166;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L166:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L165;
}
}
L164:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1032U);
si0=!(si0);
if(si0){
goto L167;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1028U);
f15024(i,si0);
L167:;
si0=l1;
si1=l40;
i32_store(&i->m0,(U64)si0+1036U,si1);
si0=l1;
si1=l42;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=l26;
i32_store(&i->m0,(U64)si0+1028U,si1);
si0=l0;
si1=l1;
si2=968U;
si1+=si2;
si2=104U;
si0=f15143(i,si0,si1,si2);
l2=si0;
si1=112U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=108U;
si0+=si1;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=105U;
si0+=si1;
si1=l44;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l41;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l1;
si1=664U;
si0+=si1;
f1410(i,si0);
si0=l1;
si1=1408U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1412(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f1413(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l2=si0;
goto L5;
L6:;
si0=l1;
si1=1U;
si0=f15026(i,si0,si1);
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

void f1414(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1412(i,si0,si1,si2,si3);
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

void f1415(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1412(i,si0,si1,si2,si3);
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

void f1416(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
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
f1412(i,si0,si1,si2,si3);
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

void f1417(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1412(i,si0,si1,si2,si3);
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

void f1418(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si2=l2;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=24U;
si0*=si1;
l4=si0;
si0=l2;
si1=89478486U;
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=24U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f1412(i,si0,si1,si2,si3);
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

void f1419(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1412(i,si0,si1,si2,si3);
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

void f1420(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=12U;
si1*=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
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
si1=l5;
si2=l4;
si3=l3;
si4=20U;
si3+=si4;
f1412(i,si0,si1,si2,si3);
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

void f1421(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=l2;
l6=si0;
L3:;
{
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l4;
l0=si0;
L5:;
{
si0=l6;
si1=-320U;
si0+=si1;
l6=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
l0=si0;
sj0=l5;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
}
L4:;
si0=l6;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l7=si0;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l7;
si1=-40U;
si0+=si1;
l0=si0;
si1=28U;
si0+=si1;
l8=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L8:;
{
si0=l0;
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
l0=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L8;
}
}
L7:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
l10=sj0;
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
sj0=l10;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l1;
si1=l1;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj2=40ULL;
sj1*=sj2;
si1=(U32)(sj1);
l0=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si0-=si1;
f15024(i,si0);
L1:;
L0:;
}

U32 f1422(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
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
goto L9;
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
goto L11;
}
si0=l7;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L12;
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
goto L10;
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
goto L10;
L12:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L11:;
si0=4U;
si1=8U;
si2=l7;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L10:;
si0=l1;
sj0=(U64)(si0);
sj1=20ULL;
sj0*=sj1;
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L7;
}
sj0=l9;
si0=(U32)(sj0);
si1=7U;
si0+=si1;
si1=-8U;
si0&=si1;
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
goto L7;
}
si0=l7;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l7;
if(si0){
goto L14;
}
si0=8U;
l12=si0;
goto L13;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si1=7U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=8U;
si1=l7;
si0=f15030(i,si0,si1);
l12=si0;
goto L15;
L16:;
si0=l7;
si0=f15022(i,si0);
l12=si0;
L15:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
L13:;
si0=l12;
si1=l10;
si0+=si1;
si1=255U;
si2=l11;
si0=f15145(i,si0,si1,si2);
l10=si0;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l1;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l13=si0;
si0=l5;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-20U;
si0+=si1;
l14=si0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l16=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l17=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=0U;
l2=si0;
L17:;
{
si0=l11;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l17;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l18;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l14;
si1=0U;
si2=l2;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l7;
si0=si2?si0:si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
f1448(i,si0,si1,si2);
si0=l10;
si1=l12;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+24U);
l19=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l19;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l19;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l19;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l19;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l19;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l19;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l19;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+16U);
l9=sj3;
sj2*=sj3;
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
sj4=l19;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l19=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l19;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l19;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l19;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l19;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l19;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l19;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l19;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
l20=si2;
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
goto L19;
}
si0=8U;
l1=si0;
L20:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=l7;
si2=l12;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L20;
}
}
L19:;
si0=l10;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l12;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
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
L21:;
si0=l10;
si1=l1;
si0+=si1;
si1=l20;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l12;
si0&=si1;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-20U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-20U;
si0+=si1;
l1=si0;
si1=16U;
si0+=si1;
si1=l2;
si2=-20U;
si1*=si2;
si2=l11;
si1+=si2;
si2=-20U;
si1+=si2;
l7=si1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
L18:;
si0=l2;
si1=l5;
si0=si0 == si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
}
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L9:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
goto L22;
}
si0=l7;
si1=1U;
si0&=si1;
l11=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l1=si0;
L24:;
{
si0=l12;
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
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l11;
si0=!(si0);
if(si0){
goto L22;
}
si0=l12;
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
L22:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l12;
si1=l6;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L25:;
si0=l12;
si1=8U;
si0+=si1;
si1=l12;
si2=l6;
si0=f15144(i,si0,si1,si2);
si0=l5;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
goto L3;
L8:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l12;
si1=-20U;
si0+=si1;
l21=si0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l16=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l17=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=0U;
l1=si0;
L26:;
{
si0=l12;
si1=l1;
l6=si1;
si0+=si1;
l13=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l21;
si1=0U;
si2=l6;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l11=si0;
si0=l6;
si1=-20U;
si0*=si1;
si1=l12;
si0+=si1;
si1=-20U;
si0+=si1;
l7=si0;
L29:;
{
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l17;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l18;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si0=si2?si0:si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l3;
f1448(i,si0,si1,si2);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l19=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l19;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l19;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l19;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l19;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l19;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l19;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l19;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+16U);
l9=sj2;
sj1*=sj2;
sj2=l9;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l9;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l9;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l9;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l9;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l9;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l9;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
sj3=l19;
sj4=-1ULL;
sj3^=sj4;
sj2*=sj3;
l19=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l19;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l19;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l19;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l19;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l19;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l19;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l19;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
sj1^=sj2;
sj2=l9;
sj1=I64_ROTL(sj1,sj2);
si1=(U32)(sj1);
l20=si1;
si0&=si1;
l2=si0;
l10=si0;
si0=l12;
si1=l2;
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
si0=l2;
l10=si0;
L31:;
{
si0=l10;
si1=l1;
si0+=si1;
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l12;
si1=l10;
si2=l5;
si1&=si2;
l10=si1;
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
si0=l12;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l10;
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
si0=l12;
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
si1=l2;
si0-=si1;
si1=l6;
si2=l2;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l12;
si1=l1;
si0+=si1;
l10=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l10;
si1=l20;
si2=25U;
si1>>=(si2&31);
l20=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l20;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-20U;
si0*=si1;
si1=l12;
si0+=si1;
si1=-20U;
si0+=si1;
l1=si0;
si0=l2;
si1=255U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+13U);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+14U);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+15U);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+17U);
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+18U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+18U);
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+19U);
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L29;
L33:;
}
si0=l13;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
si1=l20;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L27:;
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l5;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L3:;
si0=l0;
si1=l8;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L2:;
si0=l5;
si1=l6;
sj1=(U64)(si1);
sj2=20ULL;
sj1*=sj2;
si1=(U32)(sj1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l11;
si1=l1;
si0-=si1;
f15024(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=-2147483647U;
L0:;
return si0;
}

U32 f1423(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
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
goto L9;
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
goto L11;
}
si0=l7;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L12;
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
goto L10;
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
goto L10;
L12:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L11:;
si0=4U;
si1=8U;
si2=l7;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L10:;
si0=l1;
sj0=(U64)(si0);
sj1=20ULL;
sj0*=sj1;
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L7;
}
sj0=l9;
si0=(U32)(sj0);
si1=7U;
si0+=si1;
si1=-8U;
si0&=si1;
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
goto L7;
}
si0=l7;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l7;
if(si0){
goto L14;
}
si0=8U;
l12=si0;
goto L13;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si1=7U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=8U;
si1=l7;
si0=f15030(i,si0,si1);
l12=si0;
goto L15;
L16:;
si0=l7;
si0=f15022(i,si0);
l12=si0;
L15:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
L13:;
si0=l12;
si1=l10;
si0+=si1;
si1=255U;
si2=l11;
si0=f15145(i,si0,si1,si2);
l10=si0;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l1;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l13=si0;
si0=l5;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=-20U;
si0+=si1;
l14=si0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l16=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l17=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=0U;
l2=si0;
L17:;
{
si0=l11;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l17;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l18;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l14;
si1=0U;
si2=l2;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l3;
f1448(i,si0,si1,si2);
si0=l10;
si1=l12;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+24U);
l19=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l19;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l19;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l19;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l19;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l19;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l19;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l19;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+16U);
l9=sj3;
sj2*=sj3;
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
sj4=l19;
sj5=-1ULL;
sj4^=sj5;
sj3*=sj4;
l19=sj3;
sj4=56ULL;
sj3<<=(sj4&63);
sj4=l19;
sj5=65280ULL;
sj4&=sj5;
sj5=40ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj4=l19;
sj5=16711680ULL;
sj4&=sj5;
sj5=24ULL;
sj4<<=(sj5&63);
sj5=l19;
sj6=4278190080ULL;
sj5&=sj6;
sj6=8ULL;
sj5<<=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj4=l19;
sj5=8ULL;
sj4>>=(sj5&63);
sj5=4278190080ULL;
sj4&=sj5;
sj5=l19;
sj6=24ULL;
sj5>>=(sj6&63);
sj6=16711680ULL;
sj5&=sj6;
sj4|=sj5;
sj5=l19;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=65280ULL;
sj5&=sj6;
sj6=l19;
sj7=56ULL;
sj6>>=(sj7&63);
sj5|=sj6;
sj4|=sj5;
sj3|=sj4;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
l20=si2;
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
goto L19;
}
si0=8U;
l1=si0;
L20:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=l7;
si2=l12;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L20;
}
}
L19:;
si0=l10;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l12;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
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
L21:;
si0=l10;
si1=l1;
si0+=si1;
si1=l20;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l12;
si0&=si1;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-20U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-20U;
si0+=si1;
l1=si0;
si1=16U;
si0+=si1;
si1=l2;
si2=-20U;
si1*=si2;
si2=l11;
si1+=si2;
si2=-20U;
si1+=si2;
l7=si1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
L18:;
si0=l2;
si1=l5;
si0=si0 == si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
}
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L9:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
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
goto L22;
}
si0=l7;
si1=1U;
si0&=si1;
l11=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l10=si0;
si0=0U;
l1=si0;
L24:;
{
si0=l12;
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
si0=l10;
si1=-2U;
si0+=si1;
l10=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l11;
si0=!(si0);
if(si0){
goto L22;
}
si0=l12;
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
L22:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l12;
si1=l6;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L25:;
si0=l12;
si1=8U;
si0+=si1;
si1=l12;
si2=l6;
si0=f15144(i,si0,si1,si2);
si0=l5;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
goto L3;
L8:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l12;
si1=-20U;
si0+=si1;
l21=si0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l16=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l17=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=0U;
l1=si0;
L26:;
{
si0=l12;
si1=l1;
l6=si1;
si0+=si1;
l13=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l21;
si1=0U;
si2=l6;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l11=si0;
si0=l6;
si1=-20U;
si0*=si1;
si1=l12;
si0+=si1;
si1=-20U;
si0+=si1;
l7=si0;
L29:;
{
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l17;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l18;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l3;
f1448(i,si0,si1,si2);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
l19=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l19;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l19;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l19;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l19;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l19;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l19;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l19;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+16U);
l9=sj2;
sj1*=sj2;
sj2=l9;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l9;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l9;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l9;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l9;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l9;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l9;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l9;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
sj3=l19;
sj4=-1ULL;
sj3^=sj4;
sj2*=sj3;
l19=sj2;
sj3=56ULL;
sj2<<=(sj3&63);
sj3=l19;
sj4=65280ULL;
sj3&=sj4;
sj4=40ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l19;
sj4=16711680ULL;
sj3&=sj4;
sj4=24ULL;
sj3<<=(sj4&63);
sj4=l19;
sj5=4278190080ULL;
sj4&=sj5;
sj5=8ULL;
sj4<<=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj3=l19;
sj4=8ULL;
sj3>>=(sj4&63);
sj4=4278190080ULL;
sj3&=sj4;
sj4=l19;
sj5=24ULL;
sj4>>=(sj5&63);
sj5=16711680ULL;
sj4&=sj5;
sj3|=sj4;
sj4=l19;
sj5=40ULL;
sj4>>=(sj5&63);
sj5=65280ULL;
sj4&=sj5;
sj5=l19;
sj6=56ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj3|=sj4;
sj2|=sj3;
sj1^=sj2;
sj2=l9;
sj1=I64_ROTL(sj1,sj2);
si1=(U32)(sj1);
l20=si1;
si0&=si1;
l2=si0;
l10=si0;
si0=l12;
si1=l2;
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
si0=l2;
l10=si0;
L31:;
{
si0=l10;
si1=l1;
si0+=si1;
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l12;
si1=l10;
si2=l5;
si1&=si2;
l10=si1;
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
si0=l12;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l10;
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
si0=l12;
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
si1=l2;
si0-=si1;
si1=l6;
si2=l2;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l12;
si1=l1;
si0+=si1;
l10=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l10;
si1=l20;
si2=25U;
si1>>=(si2&31);
l20=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l20;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-20U;
si0*=si1;
si1=l12;
si0+=si1;
si1=-20U;
si0+=si1;
l1=si0;
si0=l2;
si1=255U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+13U);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+14U);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+15U);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l10=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+17U);
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+18U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+18U);
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
l20=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+19U);
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l1;
si1=l20;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L29;
L33:;
}
si0=l13;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
si1=l20;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L27:;
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l5;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L3:;
si0=l0;
si1=l8;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L2:;
si0=l5;
si1=l6;
sj1=(U64)(si1);
sj2=20ULL;
sj1*=sj2;
si1=(U32)(sj1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l11;
si1=l1;
si0-=si1;
f15024(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=-2147483647U;
L0:;
return si0;
}

U32 f1424(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=80U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-2295367307525992740ULL;
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
si1=1283104U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=6911619425446520681ULL;
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
si1=72U;
si0+=si1;
si1=l0;
si2=16U;
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
si1=80U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f1425(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

U32 f1426(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1283180U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=453U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l0;
si2=56U;
si1+=si2;
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
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1427(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si0=f1428(i,si0,si1,si2,si3,si4);
l6=si0;
goto L6;
L7:;
si0=l4;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=224U;
si0+=si1;
si1=l1;
si2=l2;
sj0=f2068(i,si0,si1,si2);
l7=sj0;
sj1=l7;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l8=sj1;
sj0^=sj1;
sj1=l8;
sj0-=sj1;
l9=sj0;
si0=l0;
si1=72U;
si0+=si1;
l10=si0;
si0=l0;
si1=56U;
si0+=si1;
l11=si0;
sj0=0ULL;
l12=sj0;
si0=0U;
l13=si0;
L10:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L12;
}
si0=l6;
si1=16U;
si0+=si1;
l14=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l0;
si1=l14;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l15=si2;
si3=l15;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L11;
}
L12:;
si0=l11;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L11:;
sj0=l12;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=-1U;
si0+=si1;
sj0=(U64)(si0);
l16=sj0;
sj0=1ULL;
l12=sj0;
sj0=l9;
l17=sj0;
sj0=l9;
l18=sj0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l14=si0;
sj0=l17;
l8=sj0;
L15:;
{
sj0=l18;
sj1=l16;
sj0&=sj1;
l19=sj0;
sj0=l8;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l17=sj0;
sj0=l8;
sj1=l18;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l18=sj0;
si0=l14;
sj1=l19;
si1=(U32)(sj1);
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
sj1=2ULL;
sj0+=sj1;
l8=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L16;
}
sj0=l8;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L18;
case 1:
goto L17;
default:
goto L18;
}
L18:;
si0=l20;
si1=l6;
si2=l13;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l20=si0;
sj0=l17;
l8=sj0;
si0=1U;
l13=si0;
goto L15;
L17:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l14=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l20;
si1=l6;
si2=l13;
si0=si2?si0:si1;
l6=si0;
sj0=-2ULL;
sj1=-1ULL;
si2=l13;
sj0=si2?sj0:sj1;
l19=sj0;
si0=l14;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l11;
f1354(i,si0);
goto L14;
L16:;
sj0=l17;
l8=sj0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
sj1=l19;
si1=(U32)(sj1);
si2=24U;
si1*=si2;
si0+=si1;
l15=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l7;
si0=sj0 != sj1;
if(si0){
goto L15;
}
}
si0=l15;
si0=i32_load(&i->m0,(U64)si0+12U);
l14=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l15=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l15;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l11;
f1354(i,si0);
L19:;
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=l14;
f7460(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
if(si0){
goto L21;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l15=si0;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L20;
}
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l14;
f5522(i,si0);
goto L10;
L21:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l14;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l14;
f5522(i,si0);
L22:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L6;
L20:;
si0=l21;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l14;
f5522(i,si0);
L14:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l14=si1;
si2=8U;
si3=l14;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l14;
si0=!(si0);
if(si0){
goto L23;
}
si0=l11;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L23:;
sj0=l19;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L27;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
sj1=l19;
si1=(U32)(sj1);
l14=si1;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=24U;
si1*=si2;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0=si0 == si1;
if(si0){
goto L24;
}
L28:;
si0=0U;
l13=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=8U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
sj0=0ULL;
l12=sj0;
si0=l6;
if(si0){
goto L10;
}
goto L25;
L27:;
si0=l2;
if(si0){
goto L30;
}
si0=1U;
l14=si0;
goto L29;
L30:;
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
l14=si0;
si0=!(si0);
if(si0){
goto L3;
}
L29:;
si0=l14;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l14=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l13=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
l15=si0;
l14=si0;
si0=l15;
si1=l0;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l10;
si1=l15;
f1415(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
l14=si0;
L31:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=l14;
si2=24U;
si1*=si2;
si0+=si1;
l14=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l14;
si1=l13;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l14;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
l14=si0;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l15;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=84U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
sj0=l19;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l0;
si1=88U;
si0+=si1;
l14=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=3U;
si0*=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=1U;
si1<<=(si2&31);
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l6;
si1=1U;
si0<<=(si1&31);
l15=si0;
si0=1U;
l14=si0;
L32:;
{
si0=l14;
l6=si0;
si1=1U;
si0<<=(si1&31);
l14=si0;
si0=l6;
si1=l15;
si0=si0 < si1;
if(si0){
goto L32;
}
}
si0=l6;
if(si0){
goto L34;
}
si0=0U;
l15=si0;
si0=8U;
l14=si0;
goto L33;
L34:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l15;
if(si0){
goto L36;
}
si0=8U;
l14=si0;
goto L35;
L36:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L1;
}
L35:;
si0=1U;
l15=si0;
si0=l14;
l10=si0;
si0=l6;
si1=2U;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l15=si0;
si0=l15;
si1=l14;
si2=255U;
si3=l15;
si1=f15145(i,si1,si2,si3);
si0+=si1;
l10=si0;
si0=l6;
l15=si0;
L37:;
si0=l10;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L33:;
si0=l0;
si1=64U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f15024(i,si0);
L38:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l0;
si1=68U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
l14=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l6;
si1=-1U;
si0+=si1;
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
l13=si0;
si1=l14;
si2=24U;
si1*=si2;
si0+=si1;
l20=si0;
sj0=0ULL;
l17=sj0;
L40:;
{
si0=l13;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l14=si0;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=l8;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l8=sj1;
sj0^=sj1;
sj1=l8;
sj0-=sj1;
l8=sj0;
l18=sj0;
L42:;
{
sj0=l8;
sj1=l18;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
l19=sj0;
sj0=l18;
si0=(U32)(sj0);
l6=si0;
sj0=l8;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l8=sj0;
sj0=l19;
sj1=1ULL;
sj0+=sj1;
l18=sj0;
si0=l14;
si1=l10;
si2=l6;
si1&=si2;
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L42;
}
}
si0=l15;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
L41:;
sj0=l17;
sj1=1ULL;
sj0+=sj1;
l17=sj0;
si0=l13;
si1=24U;
si0+=si1;
l13=si0;
si1=l20;
si0=si0 != si1;
if(si0){
goto L40;
}
}
L39:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+84U);
i32_store(&i->m0,(U64)si0+88U,si1);
si0=0U;
l3=si0;
goto L9;
L26:;
si0=0U;
l13=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=8U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
sj0=0ULL;
l12=sj0;
si0=l6;
if(si0){
goto L10;
}
L25:;
si0=0U;
l13=si0;
si0=l11;
si1=0U;
f1352(i,si0,si1);
sj0=0ULL;
l12=sj0;
goto L10;
L24:;
}
si0=l14;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l15;
l3=si0;
L9:;
si0=0U;
l6=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l14=si2;
si3=l14;
si4=8U;
si3=si3 == si4;
l14=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l14;
if(si0){
goto L43;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L43:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L8:;
si0=l3;
f5522(i,si0);
L6:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L5:;
f14795(i);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l6;
si1=l14;
si2=1283088U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=8U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f1428(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si0=f1427(i,si0,si1,si2,si3,si4);
l6=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=292U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L4;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L5:;
{
si0=l6;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
goto L4;
L6:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
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
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
L12:;
si0=l6;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
si2=l5;
si3=12U;
si2+=si3;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=8U;
si3+=si4;
si2=f8912(i,si2,si3);
l7=si2;
si3=l3;
si4=l4;
si5=l9;
si0=TF(i->t0,si5,U32 (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
l6=si0;
si0=l7;
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
goto L2;
}
si0=l7;
f5522(i,si0);
goto L2;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=0U;
l8=si0;
goto L13;
L14:;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L13;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L15:;
{
si0=l6;
if(si0){
goto L16;
}
si0=0U;
l8=si0;
goto L13;
L16:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
}
L13:;
si0=l8;
si1=18663056U;
si2=l8;
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
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342076U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342068U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342060U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342052U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342044U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17342036U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L1;
L18:;
si0=l5;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=1283152U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=454U;
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
si0=l4;
si1=l6;
si2=l5;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l3;
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
goto L2;
}
goto L7;
L17:;
si0=l4;
si1=l7;
si2=l5;
si3=12U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L2;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
f5522(i,si0);
L2:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f1429(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si1=l1;
si0=f13772(i,si0,si1);
L0:;
return si0;
}


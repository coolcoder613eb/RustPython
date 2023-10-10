#include "w2c2_base.h"

#include "rustpython.h"

U32 f730(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f714(i,si0,si1,si2);
L0:;
return si0;
}

U32 f731(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f714(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f732(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1104012U;
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

U32 f733(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si0=f734(i,si0,si1);
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=l7;
si3=l2;
si4=l3;
si0=f735(i,si0,si1,si2,si3,si4);
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=l7;
si3=l2;
si4=l3;
si0=f735(i,si0,si1,si2,si3,si4);
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l7;
si3=l2;
si4=l3;
si0=f735(i,si0,si1,si2,si3,si4);
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
l9=si0;
l6=si0;
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
si0=0U;
l6=si0;
si0=l9;
l1=si0;
goto L17;
L18:;
si0=l9;
si1=1U;
si0>>=(si1&31);
l1=si0;
si0=l9;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l6=si0;
L17:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
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
si0=l8;
si1=l9;
si2=l10;
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
si0=l9;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=l10;
si2=l7;
si3=l2;
si4=l3;
si0=f735(i,si0,si1,si2,si3,si4);
if(si0){
goto L11;
}
si0=l8;
si1=l4;
si2=l5;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L11;
}
si0=0U;
l1=si0;
L22:;
{
si0=l6;
si1=l1;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l6;
si1=l6;
si0=si0 < si1;
goto L0;
L23:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l8;
si1=l9;
si2=l10;
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
si1=l6;
si0=si0 < si1;
goto L0;
L11:;
si0=l1;
L0:;
return si0;
}

U32 f734(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l0;
si0-=si1;
l3=si0;
si1=l1;
si0=si0 > si1;
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
si0=!(si0);
if(si0){
goto L9;
}
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
if(si0){
goto L13;
}
si0=0U;
l7=si0;
goto L12;
L13:;
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
goto L14;
}
si0=0U;
goto L0;
L14:;
si0=l1;
si1=3U;
si0&=si1;
l8=si0;
si0=l1;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=0U;
l3=si0;
si0=0U;
l2=si0;
goto L15;
L16:;
si0=0U;
l3=si0;
si0=l0;
l7=si0;
si0=l1;
si1=-4U;
si0&=si1;
l2=si0;
l1=si0;
L17:;
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
goto L17;
}
}
L15:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si0+=si1;
l7=si0;
L18:;
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
goto L18;
}
}
L1:;
si0=l3;
L0:;
return si0;
}

U32 f735(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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

U32 f736(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=1104036U;
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
L9:;
si0=l2;
si1=63U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=1104036U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
L14:;
si0=l0;
si1=1104036U;
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
L13:;
si0=1104036U;
si1=64U;
si2=0U;
si3=l2;
si4=1104100U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
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
goto L20;
case 1:
goto L21;
case 2:
goto L22;
default:
goto L20;
}
L22:;
si0=l6;
si1=8U;
si0+=si1;
l5=si0;
goto L19;
L21:;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+2U);
l5=si0;
si1=1000U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=4U;
si1=5U;
si2=l5;
si3=10000U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
goto L18;
L23:;
si0=1U;
l10=si0;
si0=l5;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=2U;
si1=3U;
si2=l5;
si3=100U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
goto L18;
L20:;
si0=l6;
si1=4U;
si0+=si1;
l5=si0;
L19:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l10;
if(si0){
goto L18;
}
si0=0U;
l2=si0;
goto L15;
L24:;
si0=l10;
si1=5U;
si2=1104116U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L17;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l10;
si0+=si1;
l4=si0;
si0=l2;
l5=si0;
goto L16;
L17:;
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
L16:;
si0=1U;
l2=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l4;
si1=-2U;
si0+=si1;
l2=si0;
L25:;
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
goto L25;
}
}
si0=l10;
l2=si0;
L15:;
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

void f737(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f764(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f738(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 f739(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
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
si0=l0;
si1=l3;
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

U32 f740(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l7;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f741(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
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
si0=f715(i,si0,si1,si2,si3,si4);
si1=l7;
si2=l8;
si3=l9;
si4=l10;
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l11;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f742(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12,U32 l13,U32 l14) {
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
si0=f715(i,si0,si1,si2,si3,si4);
si1=l7;
si2=l8;
si3=l9;
si4=l10;
si0=f715(i,si0,si1,si2,si3,si4);
si1=l11;
si2=l12;
si3=l13;
si4=l14;
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l15;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12,U32 l13,U32 l14,U32 l15,U32 l16,U32 l17,U32 l18) {
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
si0=f715(i,si0,si1,si2,si3,si4);
si1=l7;
si2=l8;
si3=l9;
si4=l10;
si0=f715(i,si0,si1,si2,si3,si4);
si1=l11;
si2=l12;
si3=l13;
si4=l14;
si0=f715(i,si0,si1,si2,si3,si4);
si1=l15;
si2=l16;
si3=l17;
si4=l18;
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l19;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f744(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12,U32 l13,U32 l14,U32 l15,U32 l16,U32 l17,U32 l18,U32 l19,U32 l20,U32 l21,U32 l22) {
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
si0=f715(i,si0,si1,si2,si3,si4);
si1=l7;
si2=l8;
si3=l9;
si4=l10;
si0=f715(i,si0,si1,si2,si3,si4);
si1=l11;
si2=l12;
si3=l13;
si4=l14;
si0=f715(i,si0,si1,si2,si3,si4);
si1=l15;
si2=l16;
si3=l17;
si4=l18;
si0=f715(i,si0,si1,si2,si3,si4);
si1=l19;
si2=l20;
si3=l21;
si4=l22;
si0=f715(i,si0,si1,si2,si3,si4);
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
si0=l23;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f745(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si4=1104132U;
si0=f715(i,si0,si1,si2,si3,si4);
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
si1=1103462U;
si2=2U;
si3=l3;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L2;
L6:;
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
f708(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f746(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l2;
si1=!(si1);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l3;
si2=l4;
si0=f716(i,si0,si1,si2);
si1=l5;
si2=l6;
si0=f716(i,si0,si1,si2);
l0=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
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
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
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
si1=1103467U;
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
si1=1102923U;
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

U32 f747(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f748(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si1=1104164U;
si2=5U;
si0=f713(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si1=1104169U;
si2=4U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f749(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=l13;
si2=65537U;
f697(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
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
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
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
si2=1107500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=l10;
si4=1104192U;
f737(i,si0,si1,si2,si3,si4);
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
si0=l2;
si1=l1;
si0=si0 < si1;
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
si4=1104176U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f750(rustpythonInstance*i,U32 l0,U32 l1) {
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
f697(i,si0,si1,si2);
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
si2=1107500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f751(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f713(i,si0,si1,si2);
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

void f752(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f753(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=l3;
si1=0U;
si2=l3;
si3=l2;
si4=3U;
si3+=si4;
si4=-4U;
si3&=si4;
si4=l2;
si3-=si4;
l4=si3;
si2-=si3;
si3=7U;
si2&=si3;
si3=l3;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si0-=si1;
l6=si0;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l3;
si0+=si1;
l5=si0;
si1=l2;
si2=l6;
si1+=si2;
l7=si1;
si0-=si1;
l8=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l8;
si1=-1U;
si0+=si1;
l4=si0;
goto L6;
L7:;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l8;
si1=-2U;
si0+=si1;
l4=si0;
goto L6;
L8:;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l8;
si1=-3U;
si0+=si1;
l4=si0;
goto L6;
L9:;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
si1=-4U;
si0+=si1;
l4=si0;
goto L6;
L10:;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l8;
si1=-5U;
si0+=si1;
l4=si0;
goto L6;
L11:;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l8;
si1=-6U;
si0+=si1;
l4=si0;
goto L6;
L12:;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l8;
si1=-7U;
si0+=si1;
l4=si0;
goto L6;
L13:;
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l8;
si1=-8U;
si0+=si1;
l4=si0;
L6:;
si0=l4;
si1=l6;
si0+=si1;
l4=si0;
goto L2;
L5:;
si0=l4;
si1=l3;
si2=l3;
si3=l4;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si0=l1;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l5=si0;
L14:;
{
si0=l6;
l4=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l2;
si1=l4;
si0+=si1;
l8=si0;
si1=-8U;
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
goto L3;
}
si0=l4;
si1=-8U;
si0+=si1;
l6=si0;
si0=l8;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
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
goto L14;
}
goto L3;
}
L4:;
si0=l6;
si1=l3;
si2=1104244U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l3;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l2;
si1=-1U;
si0+=si1;
l5=si0;
si0=l1;
si1=255U;
si0&=si1;
l8=si0;
L16:;
{
si0=l4;
if(si0){
goto L17;
}
si0=0U;
l6=si0;
goto L1;
L17:;
si0=l5;
si1=l4;
si0+=si1;
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l8;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L16;
}
L15:;
si0=l4;
si1=l3;
si2=1104260U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f754(rustpythonInstance*i,U32 l0) {
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
si1=1104472U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1097428U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f755(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
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
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1104544U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
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
si1=l2;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f756(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=1104732U;
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

U32 f757(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f758(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
L0:;
return si0;
}

void f759(rustpythonInstance*i,U32 l0) {
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
si1=1104724U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1097428U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f760(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1105068U;
f663(i,si0,si1,si2);
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
si2=1105068U;
f663(i,si0,si1,si2);
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
si0=l6;
si1=l8;
si2=l6;
si3=l8;
si2=si2 > si3;
l11=si2;
si0=si2?si0:si1;
l13=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L23;
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
goto L22;
}
si0=l6;
si1=l4;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l3;
si1=l3;
si2=l11;
si1+=si2;
si2=l13;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L24;
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
goto L25;
}
si0=0U;
l10=si0;
sj0=0ULL;
l14=sj0;
goto L15;
L25:;
sj0=0ULL;
l14=sj0;
si0=l3;
l6=si0;
si0=l4;
si1=-4U;
si0&=si1;
l10=si0;
l12=si0;
L26:;
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
goto L26;
}
goto L15;
}
L24:;
si0=1U;
l8=si0;
si0=0U;
l6=si0;
si0=1U;
l9=si0;
si0=0U;
l5=si0;
L28:;
{
si0=l9;
l12=si0;
si1=l6;
si0+=si1;
l7=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L27;
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
goto L20;
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
goto L19;
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
goto L31;
}
si0=l9;
si1=l10;
si0=si0 == si1;
if(si0){
goto L30;
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
goto L29;
L31:;
si0=l7;
si1=1U;
si0+=si1;
l9=si0;
si1=l5;
si0-=si1;
l8=si0;
si0=0U;
l6=si0;
goto L29;
L30:;
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
L29:;
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L28;
}
}
L27:;
si0=1U;
l8=si0;
si0=0U;
l6=si0;
si0=1U;
l9=si0;
si0=0U;
l7=si0;
L33:;
{
si0=l9;
l12=si0;
si1=l6;
si0+=si1;
l15=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L32;
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
goto L18;
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
goto L17;
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
goto L36;
}
si0=l9;
si1=l10;
si0=si0 == si1;
if(si0){
goto L35;
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
goto L34;
L36:;
si0=l15;
si1=1U;
si0+=si1;
l9=si0;
si1=l7;
si0-=si1;
l8=si0;
si0=0U;
l6=si0;
goto L34;
L35:;
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
L34:;
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L33;
}
}
L32:;
si0=l11;
si1=l4;
si0=si0 > si1;
if(si0){
goto L16;
}
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
goto L38;
}
sj0=0ULL;
l14=sj0;
si0=0U;
l11=si0;
si0=0U;
l8=si0;
goto L37;
L38:;
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
goto L40;
}
sj0=0ULL;
l14=sj0;
si0=0U;
l5=si0;
goto L39;
L40:;
sj0=0ULL;
l14=sj0;
si0=l3;
l6=si0;
si0=l11;
si1=-4U;
si0&=si1;
l5=si0;
l9=si0;
L41:;
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
goto L41;
}
}
L39:;
si0=l12;
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
si1=l5;
si0+=si1;
l6=si0;
L42:;
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
goto L42;
}
}
L37:;
si0=l4;
l6=si0;
goto L14;
L23:;
si0=l13;
si1=l4;
si2=1105020U;
f666(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l11;
si1=l6;
si2=1105036U;
f675(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l6;
si1=l4;
si2=1105036U;
f666(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l9;
si1=l4;
si2=1105084U;
f663(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l10;
si1=l4;
si2=1105100U;
f663(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l9;
si1=l4;
si2=1105084U;
f663(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l10;
si1=l4;
si2=1105100U;
f663(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l11;
si1=l4;
si2=1105052U;
f666(i,si0,si1,si2);
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
goto L43;
}
si0=l3;
si1=l10;
si0+=si1;
l6=si0;
L44:;
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
goto L44;
}
}
L43:;
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

U32 f761(rustpythonInstance*i,U32 l0,U32 l1) {
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
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
f762(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
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
si1=72U;
si0+=si1;
si1=l15;
si2=65793U;
f697(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
si1=128U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+83U);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+82U);
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
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l10;
si1=l1;
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
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si1=l2;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
l17=sj1;
i64_store(&i->m0,(U64)si0+40U,sj1);
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
si0=i32_load8_u(&i->m0,(U64)si0+50U);
l3=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+51U);
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0+50U,si1);
si0=l3;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l2;
si1=40U;
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
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
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
si0=i32_load8_u(&i->m0,(U64)si0+50U);
l1=si0;
si1=10U;
si2=l1;
si3=10U;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+51U);
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
i32_store8(&i->m0,(U64)si0+50U,si1);
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l2;
si1=40U;
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
si2=1107500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si1=l10;
si2=l1;
si3=l12;
si4=1105176U;
f737(i,si0,si1,si2,si3,si4);
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
si1=272U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=31U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1105168U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=72U;
si2+=si3;
si0=f690(i,si0,si1,si2);
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
si1=8U;
si0+=si1;
si1=l2;
f762(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si4=1105148U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f762(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1104732U;
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
si1=1105192U;
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
si1=1105192U;
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
si1=1105192U;
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
si1=1105192U;
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
si1=1105192U;
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
si1=1105192U;
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

U32 f763(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f764(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
si0=1105193U;
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
si0=1097428U;
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
goto L7;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=l1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l0;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
L13:;
si0=l3;
l2=si0;
L12:;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
l3=si0;
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l2;
si1=1U;
si0+=si1;
l6=si0;
si1=0U;
si2=l2;
si3=-3U;
si2+=si3;
l3=si2;
si3=l3;
si4=l2;
si3=si3 > si4;
si1=si3?si1:si2;
l3=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=l6;
si0=si0 == si1;
if(si0){
goto L16;
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
goto L17;
}
si0=l6;
si1=-1U;
si0+=si1;
l7=si0;
goto L16;
L17:;
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l9;
si1=-1U;
si0+=si1;
l2=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=l6;
si1=-2U;
si0+=si1;
l7=si0;
goto L16;
L18:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l6;
si1=-3U;
si0+=si1;
l7=si0;
goto L16;
L19:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L20;
}
si0=l6;
si1=-4U;
si0+=si1;
l7=si0;
goto L16;
L20:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l6;
si1=-5U;
si0+=si1;
l7=si0;
L16:;
si0=l7;
si1=l3;
si0+=si1;
l3=si0;
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L4;
L23:;
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
L22:;
si0=l1;
si1=l3;
si0-=si1;
l1=si0;
L21:;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
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
goto L25;
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
goto L24;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l0;
si0|=si1;
l1=si0;
goto L9;
L25:;
si0=l5;
si1=l2;
si2=255U;
si1&=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=1U;
l2=si0;
goto L8;
L24:;
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
goto L10;
}
si0=l0;
si1=l6;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L9;
L11:;
si0=l5;
si1=100U;
si0+=si1;
si1=267U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=267U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1105340U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
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
si1=l4;
f683(i,si0,si1);
UNREACHABLE;
L10:;
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
goto L5;
}
L9:;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=1U;
l2=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=2U;
l2=si0;
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=3U;
si1=4U;
si2=l1;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
L8:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=108U;
si0+=si1;
si1=267U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=100U;
si0+=si1;
si1=267U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=92U;
si0+=si1;
si1=273U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=274U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=5U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1105264U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
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
si1=l4;
f683(i,si0,si1);
UNREACHABLE;
L7:;
si0=l5;
si1=l2;
si2=l3;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=92U;
si0+=si1;
si1=267U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=267U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1105396U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
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
si1=l4;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=l3;
si1=l6;
si2=1105448U;
f675(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1102092U;
si1=43U;
si2=l4;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
si2=l3;
si3=l1;
si4=l4;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f765(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1;
si0=1102585U;
si1=1097428U;
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
si6=1105592U;
si7=2U;
si0=f766(i,si0,sj1,si2,si3,si4,si5,si6,si7);
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
si6=1105594U;
si7=3U;
si0=f766(i,si0,sj1,si2,si3,si4,si5,si6,si7);
goto L0;
L2:;
si0=l1;
sj1=l5;
si2=l4;
si3=100000000U;
si4=l3;
si5=l2;
si6=1105599U;
si7=1U;
si0=f766(i,si0,sj1,si2,si3,si4,si5,si6,si7);
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
si6=1105597U;
si7=2U;
si0=f766(i,si0,sj1,si2,si3,si4,si5,si6,si7);
L0:;
return si0;
}

U32 f766(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
si2=1105616U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1101856U;
si1=25U;
si2=1105600U;
f673(i,si0,si1,si2);
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
l4=si0;
L27:;
{
si0=l8;
si1=16U;
si0+=si1;
si1=l4;
l2=si1;
si0+=si1;
l3=si0;
si1=48U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=1U;
si2+=si3;
si3=l3;
si4=56U;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=57U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l2;
if(si0){
goto L27;
}
}
L26:;
si0=l3;
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
si0=f767(i,si0,si1);
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
si0=f734(i,si0,si1);
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
l3=si0;
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
si0=0U;
l7=si0;
si0=l3;
l4=si0;
goto L42;
L43:;
si0=l3;
si1=1U;
si0>>=(si1&31);
l4=si0;
si0=l3;
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
l4=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
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
si1=l2;
si2=l4;
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
si0=f767(i,si0,si1);
l3=si0;
goto L28;
L40:;
si0=l2;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l8;
si1=56U;
si0+=si1;
si1=l0;
si0=f767(i,si0,si1);
if(si0){
goto L39;
}
si0=0U;
l3=si0;
L46:;
{
si0=l7;
si1=l3;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l7;
si1=l7;
si0=si0 < si1;
l3=si0;
goto L28;
L47:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l9;
si1=l2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L46;
}
}
si0=l3;
si1=-1U;
si0+=si1;
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

U32 f767(rustpythonInstance*i,U32 l0,U32 l1) {
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=84U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=267U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1105632U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=1U;
l5=si0;
si0=l4;
si1=l3;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=267U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1105668U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=1U;
l5=si0;
si0=l4;
si1=l3;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=10U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=9U;
si2=1105684U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+8U,si1);
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
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=267U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l2;
si1=48U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
l5=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=1105700U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l3;
si2=l2;
si3=72U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
L4:;
si0=l2;
si1=267U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1103092U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l3;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l5=si0;
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f768(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f769(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si0=l12;
si1=l9;
si0=si0 < si1;
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
si2=1105896U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=l4;
si2=1105896U;
f666(i,si0,si1,si2);
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
si0=1102092U;
si1=43U;
si2=1105880U;
f673(i,si0,si1,si2);
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

void f770(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
F64 l10=0;
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
f668(i,si0,si1,si2);
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
si4=1099136U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f667(i,si0,sj1,sj2);
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
si1=1099056U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l10;
sd0*=sd1;
l10=sd0;
goto L16;
L20:;
sd0=l10;
si1=1099056U;
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
f667(i,si0,sj1,sj2);
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
f667(i,si0,sj1,sj2);
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
f665(i,si0,si1,si2);
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
si1=1099036U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
L26:;
si0=l3;
si1=64U;
si0+=si1;
si1=l5;
f664(i,si0,si1);
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
si1=1099036U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
L30:;
si0=l3;
si1=64U;
si0+=si1;
si1=l5;
f661(i,si0,si1);
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
f664(i,si0,si1);
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
f661(i,si0,si1);
si0=l3;
si1=64U;
si0+=si1;
sj0=f660(i,si0);
l6=sj0;
sj1=9007199254740991ULL;
si0=sj0 <= sj1;
if(si0){
goto L35;
}
si0=l3;
si1=64U;
si0+=si1;
si1=1U;
f664(i,si0,si1);
si0=l3;
si1=64U;
si0+=si1;
sj0=f660(i,si0);
l6=sj0;
si0=2047U;
l9=si0;
si0=l2;
si1=1024U;
si0+=si1;
si1=2046U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L21;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
L35:;
sj0=l6;
sj1=4503599627370495ULL;
sj0&=sj1;
l8=sj0;
si0=1022U;
si1=1023U;
sj2=l6;
sj3=4503599627370496ULL;
si2=sj2 < sj3;
si0=si2?si0:si1;
si1=l2;
si0+=si1;
l9=si0;
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
goto L36;
}
sj0=l6;
sj1=5128526ULL;
si0=sj0 == sj1;
if(si0){
goto L37;
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
L37:;
sd0=INFINITY;
l10=sd0;
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L2;
L36:;
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

U32 f771(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1118064U;
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
si1=1118079U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1118084U;
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

U32 f772(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1118132U;
si3=15U;
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
si2=1118148U;
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

U32 f773(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1118164U;
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
si1=1118079U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1118180U;
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

U32 f774(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f689(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f775(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1118246U;
si3=17U;
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
si2=1118148U;
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

U32 f776(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1118263U;
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
si1=1118279U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1118116U;
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

U32 f777(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f778(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f778(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
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
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
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

U32 f779(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f720(i,si0,sd1,si2,si3);
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
si0=f723(i,si0,sd1,si2,si3);
goto L0;
L2:;
si0=l1;
sd1=l4;
si2=l2;
si3=0U;
si0=f727(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f780(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f720(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l1;
sd1=l3;
si2=l2;
si3=0U;
si0=f723(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f781(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f725(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l1;
sd1=l3;
si2=l2;
si3=0U;
si0=f727(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f782(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f783(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f784(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
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
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f785(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
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
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f786(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f787(rustpythonInstance*i,U64 l0,U32 l1,U32 l2) {
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
si2=1103810U;
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
si2=1103810U;
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
si2=1103810U;
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
si2=1103810U;
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
si2=1097428U;
si3=0U;
si4=l3;
si5=9U;
si4+=si5;
si5=l4;
si4+=si5;
si5=39U;
si6=l4;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f788(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f787(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f789(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f790(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f787(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f791(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f787(i,sj0,si1,si2);
L0:;
return si0;
}

U32 f792(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1118324U;
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

U32 f793(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1118100U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1118105U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f794(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
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
si1=276U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=277U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si1=I32_CTZ(si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1102924U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f795(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
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
goto L5;
}
goto L2;
}
L3:;
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

U32 f796(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f689(i,si0,si1);
L0:;
return si0;
}

U32 f797(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=(U64)(si0);
sj1=65535ULL;
sj0&=sj1;
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
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
goto L5;
}
goto L2;
}
L3:;
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

U32 f798(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1149296U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1149276U;
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

U32 f799(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
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
si1=1118283U;
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1118287U;
si3=4U;
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
si2=1103472U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
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
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
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
si1=1103467U;
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
si1=1102923U;
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
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f800(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0);
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si1=16U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
sj0=l3;
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=0U;
l0=si0;
L5:;
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
goto L5;
}
goto L2;
}
L3:;
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
si2=55U;
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
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
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

U32 f801(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=1104208U;
si2=2U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f802(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1118329U;
si2=9U;
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
si1=1118338U;
si2=11U;
si3=l0;
si4=1118292U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1118349U;
si2=9U;
si3=l2;
si4=4U;
si3+=si4;
si4=1118360U;
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

U32 f803(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=53U;
l3=si0;
si0=53U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1118376U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=52U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1118376U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=52U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=1465U;
l5=si0;
si0=51U;
l2=si0;
goto L8;
L10:;
si0=53U;
si1=53U;
si2=1107404U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=1118380U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L8:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1118376U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
goto L6;
L7:;
si0=0U;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=1465U;
si2=l4;
si3=1465U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1118588U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=1465U;
si2=1107420U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f804(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=35U;
l3=si0;
si0=35U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1120056U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=34U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1120056U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=34U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=875U;
l5=si0;
si0=33U;
l2=si0;
goto L8;
L10:;
si0=35U;
si1=35U;
si2=1107404U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=1120060U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L8:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1120056U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
goto L6;
L7:;
si0=0U;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=875U;
si2=l4;
si3=875U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1120196U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=875U;
si2=1107420U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f805(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=22U;
l3=si0;
si0=22U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1121072U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=21U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1121072U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=21U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=315U;
l5=si0;
si0=20U;
l2=si0;
goto L8;
L10:;
si0=22U;
si1=22U;
si2=1107404U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=1121076U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L8:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1121072U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
goto L6;
L7:;
si0=0U;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=315U;
si2=l4;
si3=315U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1121160U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=315U;
si2=1107420U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f806(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=0U;
l1=si0;
si0=l0;
si1=125951U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=10U;
si0>>=(si1&31);
si1=1122335U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=20U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
si1=1122458U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=55U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=-55U;
si0+=si1;
l1=si0;
si1=20U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=1123224U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=55U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=1123225U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
sj0=(U64)(si0);
l3=sj0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=1122784U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=1U;
si1<<=(si2&31);
si1=(U32)(U32)(I8)(U8)(si1);
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
sj1=(U64)(I64)(I32)(si1);
sj0^=sj1;
l4=sj0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
sj0=l4;
sj1=l3;
sj2=255ULL;
sj1&=sj2;
sj0=I64_ROTL(sj0,sj1);
l3=sj0;
goto L2;
L7:;
sj0=l4;
sj1=l3;
sj0>>=(sj1&63);
l3=sj0;
goto L2;
L6:;
si0=l1;
si1=20U;
si2=1107356U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=21U;
si2=1107372U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=55U;
si2=1107388U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=1122784U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L2:;
sj0=l3;
si1=l0;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

U32 f807(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=39U;
l3=si0;
si0=39U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1123268U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=38U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1123268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=38U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=275U;
l5=si0;
si0=37U;
l2=si0;
goto L8;
L10:;
si0=39U;
si1=39U;
si2=1107404U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=1123272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L8:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1123268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
goto L6;
L7:;
si0=0U;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=275U;
si2=l4;
si3=275U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1123424U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=275U;
si2=1107420U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f808(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=0U;
l1=si0;
si0=l0;
si1=127999U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=10U;
si0>>=(si1&31);
si1=1123699U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=17U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
si1=1123824U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=43U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=-43U;
si0+=si1;
l1=si0;
si1=24U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=1124440U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=43U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=1124441U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
sj0=(U64)(si0);
l3=sj0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=1124096U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=1U;
si1<<=(si2&31);
si1=(U32)(U32)(I8)(U8)(si1);
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
sj1=(U64)(I64)(I32)(si1);
sj0^=sj1;
l4=sj0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
sj0=l4;
sj1=l3;
sj2=255ULL;
sj1&=sj2;
sj0=I64_ROTL(sj0,sj1);
l3=sj0;
goto L2;
L7:;
sj0=l4;
sj1=l3;
sj0>>=(sj1&63);
l3=sj0;
goto L2;
L6:;
si0=l1;
si1=17U;
si2=1107356U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=25U;
si2=1107372U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=43U;
si2=1107388U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=1124096U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L2:;
sj0=l3;
si1=l0;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

U32 f809(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1149220U;
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
si1=1149226U;
si2=4U;
si3=l0;
si4=4U;
si3+=si4;
si4=1118292U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1149230U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1149236U;
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

void f810(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1,sj2;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
si2=l2;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=-1U;
si0^=si1;
l3=si0;
si0=l2;
si1=64U;
si0=si0 < si1;
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+62U);
si1=2U;
si0<<=(si1&31);
si1=1150340U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+63U);
si2=2U;
si1<<=(si2&31);
si2=1149316U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+61U);
si2=2U;
si1<<=(si2&31);
si2=1151364U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+60U);
si2=2U;
si1<<=(si2&31);
si2=1152388U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+59U);
si2=2U;
si1<<=(si2&31);
si2=1153412U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+58U);
si2=2U;
si1<<=(si2&31);
si2=1154436U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+57U);
si2=2U;
si1<<=(si2&31);
si2=1155460U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
si2=2U;
si1<<=(si2&31);
si2=1156484U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+55U);
si2=2U;
si1<<=(si2&31);
si2=1157508U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+54U);
si2=2U;
si1<<=(si2&31);
si2=1158532U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+53U);
si2=2U;
si1<<=(si2&31);
si2=1159556U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+52U);
si2=2U;
si1<<=(si2&31);
si2=1160580U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+47U);
si2=2U;
si1<<=(si2&31);
si2=1149316U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+46U);
si3=2U;
si2<<=(si3&31);
si3=1150340U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+45U);
si3=2U;
si2<<=(si3&31);
si3=1151364U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+44U);
si3=2U;
si2<<=(si3&31);
si3=1152388U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+43U);
si3=2U;
si2<<=(si3&31);
si3=1153412U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+42U);
si3=2U;
si2<<=(si3&31);
si3=1154436U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+41U);
si3=2U;
si2<<=(si3&31);
si3=1155460U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+40U);
si3=2U;
si2<<=(si3&31);
si3=1156484U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+39U);
si3=2U;
si2<<=(si3&31);
si3=1157508U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+38U);
si3=2U;
si2<<=(si3&31);
si3=1158532U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+37U);
si3=2U;
si2<<=(si3&31);
si3=1159556U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+36U);
si3=2U;
si2<<=(si3&31);
si3=1160580U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+31U);
si3=2U;
si2<<=(si3&31);
si3=1149316U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+30U);
si4=2U;
si3<<=(si4&31);
si4=1150340U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+29U);
si4=2U;
si3<<=(si4&31);
si4=1151364U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+28U);
si4=2U;
si3<<=(si4&31);
si4=1152388U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+27U);
si4=2U;
si3<<=(si4&31);
si4=1153412U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+26U);
si4=2U;
si3<<=(si4&31);
si4=1154436U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+25U);
si4=2U;
si3<<=(si4&31);
si4=1155460U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+24U);
si4=2U;
si3<<=(si4&31);
si4=1156484U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+23U);
si4=2U;
si3<<=(si4&31);
si4=1157508U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+22U);
si4=2U;
si3<<=(si4&31);
si4=1158532U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+21U);
si4=2U;
si3<<=(si4&31);
si4=1159556U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+20U);
si4=2U;
si3<<=(si4&31);
si4=1160580U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si4=15U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=2U;
si3<<=(si4&31);
si4=1149316U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
si5=14U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1150340U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=13U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1151364U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=12U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1152388U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=11U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1153412U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=10U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1154436U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=9U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1155460U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=8U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1156484U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=7U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1157508U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=6U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1158532U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=5U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1159556U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=4U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1160580U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l3;
si5=24U;
si4>>=(si5&31);
si5=l1;
si6=3U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
si4^=si5;
si5=2U;
si4<<=(si5&31);
si5=1161604U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l3;
si5=16U;
si4>>=(si5&31);
si5=255U;
si4&=si5;
si5=l1;
si6=2U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
si4^=si5;
si5=2U;
si4<<=(si5&31);
si5=1162628U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l3;
si5=8U;
si4>>=(si5&31);
si5=255U;
si4&=si5;
si5=l1;
si6=1U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
si4^=si5;
si5=2U;
si4<<=(si5&31);
si5=1163652U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l3;
si5=255U;
si4&=si5;
si5=l1;
si5=i32_load8_u(&i->m0,(U64)si5);
si4^=si5;
si5=2U;
si4<<=(si5&31);
si5=1164676U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
l3=si3;
si4=24U;
si3>>=(si4&31);
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+19U);
si3^=si4;
si4=2U;
si3<<=(si4&31);
si4=1161604U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l3;
si4=16U;
si3>>=(si4&31);
si4=255U;
si3&=si4;
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+18U);
si3^=si4;
si4=2U;
si3<<=(si4&31);
si4=1162628U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l3;
si4=8U;
si3>>=(si4&31);
si4=255U;
si3&=si4;
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+17U);
si3^=si4;
si4=2U;
si3<<=(si4&31);
si4=1163652U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l3;
si4=255U;
si3&=si4;
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+16U);
si3^=si4;
si4=2U;
si3<<=(si4&31);
si4=1164676U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
l3=si2;
si3=24U;
si2>>=(si3&31);
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+35U);
si2^=si3;
si3=2U;
si2<<=(si3&31);
si3=1161604U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l3;
si3=16U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+34U);
si2^=si3;
si3=2U;
si2<<=(si3&31);
si3=1162628U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l3;
si3=8U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+33U);
si2^=si3;
si3=2U;
si2<<=(si3&31);
si3=1163652U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l3;
si3=255U;
si2&=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+32U);
si2^=si3;
si3=2U;
si2<<=(si3&31);
si3=1164676U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
l3=si1;
si2=24U;
si1>>=(si2&31);
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+51U);
si1^=si2;
si2=2U;
si1<<=(si2&31);
si2=1161604U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l3;
si2=16U;
si1>>=(si2&31);
si2=255U;
si1&=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+50U);
si1^=si2;
si2=2U;
si1<<=(si2&31);
si2=1162628U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l3;
si2=8U;
si1>>=(si2&31);
si2=255U;
si1&=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+49U);
si1^=si2;
si2=2U;
si1<<=(si2&31);
si2=1163652U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l3;
si2=255U;
si1&=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+48U);
si1^=si2;
si2=2U;
si1<<=(si2&31);
si2=1164676U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
l3=si0;
si0=l1;
si1=64U;
si0+=si1;
l1=si0;
si0=l2;
si1=-64U;
si0+=si1;
l2=si0;
si1=63U;
si0=si0 > si1;
if(si0){
goto L2;
}
}
L1:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0&=si1;
l4=si0;
if(si0){
goto L5;
}
si0=l1;
l5=si0;
goto L4;
L5:;
si0=l1;
l5=si0;
L6:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0^=si1;
si1=255U;
si0&=si1;
si1=2U;
si0<<=(si1&31);
si1=1149316U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=8U;
si1>>=(si2&31);
si0^=si1;
l3=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L6;
}
}
L4:;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
L7:;
{
si0=l5;
si1=3U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l5;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=l5;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=l3;
si3^=si4;
si4=255U;
si3&=si4;
si4=2U;
si3<<=(si4&31);
si4=1149316U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si5=8U;
si4>>=(si5&31);
si3^=si4;
l1=si3;
si2^=si3;
si3=255U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si3=1149316U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=8U;
si3>>=(si4&31);
si2^=si3;
l1=si2;
si1^=si2;
si2=255U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si2=1149316U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=8U;
si2>>=(si3&31);
si1^=si2;
l1=si1;
si0^=si1;
si1=255U;
si0&=si1;
si1=2U;
si0<<=(si1&31);
si1=1149316U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=8U;
si1>>=(si2&31);
si0^=si1;
l3=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L3:;
si0=l0;
si1=l3;
si2=-1U;
si1^=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f811(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=432U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=346U;
si0+=si1;
si1=0U;
si2=70U;
si0=f15392(i,si0,si1,si2);
si0=l2;
si1=12U;
si0+=si1;
si1=0U;
si2=256U;
si0=f15392(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=272U;
si0+=si1;
si1=l1;
si2=272U;
si1+=si2;
si2=70U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=342U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=268U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+421U);
i32_store8(&i->m0,(U64)si0+421U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+418U);
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=l1;
si1=425U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=417U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+424U);
l8=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+427U);
l9=si0;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+428U);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+416U);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+420U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+422U);
l13=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+426U);
l14=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+419U);
l15=si0;
si0=l2;
si1=423U;
si0+=si1;
si1=l1;
si2=423U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=417U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=425U;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l15;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l14;
i32_store8(&i->m0,(U64)si0+426U,si1);
si0=l2;
si1=l13;
i32_store8(&i->m0,(U64)si0+422U,si1);
si0=l2;
si1=l12;
i32_store8(&i->m0,(U64)si0+420U,si1);
si0=l2;
si1=l11;
i32_store8(&i->m0,(U64)si0+416U,si1);
si0=l2;
si1=l15;
i32_store8(&i->m0,(U64)si0+419U,si1);
si0=l2;
si1=l10;
i32_store16(&i->m0,(U64)si0+428U,si1);
si0=l2;
si1=l9;
i32_store8(&i->m0,(U64)si0+427U,si1);
si0=l2;
si1=l8;
i32_store8(&i->m0,(U64)si0+424U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
if(si0){
goto L2;
}
si0=2U;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=l12;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=3U;
l1=si0;
goto L1;
L3:;
si0=l3;
si1=l1;
si2=255U;
si1&=si2;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=4U;
l1=si0;
L1:;
si0=l8;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l4;
si2=255U;
si1&=si2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L4:;
si0=l11;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=1165812U;
si1=40U;
si2=1165852U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=22U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=25U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l3;
si1=l5;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
l8=si0;
L5:;
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l16;
si1=202U;
si0*=si1;
l17=si0;
si1=254U;
si0&=si1;
l18=si0;
si0=l17;
si1=8U;
si0>>=(si1&31);
si1=0U;
si0=si0 != si1;
l19=si0;
si0=l2;
si1=13U;
si0+=si1;
l20=si0;
si0=1165802U;
l21=si0;
L9:;
{
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
l22=si0;
si1=202U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l22;
si1=l16;
si0*=si1;
l1=si0;
si1=255U;
si0&=si1;
l23=si0;
si0=0U;
l7=si0;
si0=l1;
si1=8U;
si0>>=(si1&31);
si1=0U;
si0=si0 != si1;
l24=si0;
L14:;
{
si0=l7;
si1=255U;
si0&=si1;
l12=si0;
si1=13U;
si0=si0 == si1;
l25=si0;
si1=l12;
si2=10U;
si1=si1 == si2;
l1=si1;
si0|=si1;
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+427U);
l26=si0;
si1=0U;
si0=si0 != si1;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+420U);
si2=l12;
si1=si1 == si2;
si0&=si1;
l27=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+419U);
si2=l12;
si1=si1 == si2;
l10=si1;
si0|=si1;
l28=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+417U);
l29=si0;
si1=l12;
si0=si0 == si1;
l14=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+424U);
si2=0U;
si1=si1 != si2;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+425U);
si3=255U;
si2&=si3;
si3=l12;
si2=si2 == si3;
si1&=si2;
l30=si1;
si0|=si1;
l31=si0;
si0=l27;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+426U);
si2=0U;
si1=si1 != si2;
si0&=si1;
l32=si0;
si1=l10;
si0|=si1;
l33=si0;
si0=0U;
si1=6U;
si2=l1;
si0=si2?si0:si1;
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=1U;
si0<<=(si1&31);
l34=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+416U);
l13=si0;
si0=l22;
l11=si0;
L16:;
{
si0=2U;
l9=si0;
si0=0U;
l1=si0;
si0=l4;
l8=si0;
si0=l11;
si1=255U;
si0&=si1;
l15=si0;
switch(si0){
case 0:
goto L25;
case 1:
goto L26;
case 2:
goto L27;
case 3:
goto L28;
case 4:
goto L19;
case 5:
goto L29;
case 6:
goto L15;
case 7:
goto L30;
case 8:
goto L31;
case 9:
goto L23;
default:
goto L32;
}
L32:;
si0=201U;
l8=si0;
si0=l15;
si1=-200U;
si0+=si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L24;
case 2:
goto L18;
default:
goto L17;
}
L31:;
si0=0U;
l1=si0;
si0=0U;
l8=si0;
goto L17;
L30:;
si0=1U;
l8=si0;
goto L17;
L29:;
si0=l33;
if(si0){
goto L20;
}
si0=l5;
l1=si0;
si0=l13;
switch(si0){
case 0:
goto L33;
case 1:
goto L34;
default:
goto L35;
}
L35:;
si0=1166062U;
si1=40U;
si2=1166336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l14;
l1=si0;
L33:;
si0=-56U;
si1=2U;
si2=l1;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
goto L17;
L28:;
si0=5U;
si1=3U;
si2=l27;
si0=si2?si0:si1;
l8=si0;
si0=2U;
si1=1U;
si2=l27;
si0=si2?si0:si1;
l9=si0;
si0=l26;
si0=!(si0);
if(si0){
goto L15;
}
si0=l27;
if(si0){
goto L15;
}
si0=4U;
si1=3U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+422U);
si3=0U;
si2=si2 != si3;
si3=l2;
si3=i32_load8_u(&i->m0,(U64)si3+423U);
si4=255U;
si3&=si4;
si4=l12;
si3=si3 == si4;
si2&=si3;
l1=si2;
si0=si2?si0:si1;
l8=si0;
si0=2U;
si1=1U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
goto L15;
L27:;
si0=l10;
si0=!(si0);
if(si0){
goto L36;
}
si0=7U;
l8=si0;
goto L15;
L36:;
si0=l5;
l1=si0;
si0=l13;
switch(si0){
case 0:
goto L37;
case 1:
goto L38;
default:
goto L39;
}
L39:;
si0=1166062U;
si1=40U;
si2=1166336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l14;
l1=si0;
L37:;
si0=-56U;
si1=2U;
si2=l1;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
goto L17;
L26:;
si0=l28;
if(si0){
goto L21;
}
si0=l5;
l1=si0;
si0=l13;
switch(si0){
case 0:
goto L40;
case 1:
goto L41;
default:
goto L42;
}
L42:;
si0=1166062U;
si1=40U;
si2=1166336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l14;
l1=si0;
L40:;
si0=-56U;
si1=2U;
si2=l1;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
goto L17;
L25:;
si0=l13;
switch(si0){
case 0:
goto L43;
case 1:
goto L22;
default:
goto L44;
}
L44:;
si0=1166062U;
si1=40U;
si2=1166336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=0U;
l8=si0;
si0=l12;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L45;
case 2:
goto L45;
case 3:
goto L15;
default:
goto L45;
}
L45:;
si0=l30;
if(si0){
goto L46;
}
si0=1U;
l8=si0;
si0=0U;
l1=si0;
goto L17;
L46:;
si0=6U;
l8=si0;
goto L15;
L24:;
si0=1U;
l1=si0;
si0=l13;
switch(si0){
case 0:
goto L47;
case 1:
goto L48;
default:
goto L49;
}
L49:;
si0=1166062U;
si1=40U;
si2=1166320U;
f673(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=0U;
l1=si0;
L47:;
si0=9U;
si1=8U;
si2=l1;
si0=si2?si0:si1;
si1=8U;
si2=l25;
si0=si2?si0:si1;
l8=si0;
goto L15;
L23:;
si0=0U;
l8=si0;
si0=l34;
l1=si0;
goto L17;
L22:;
si0=1U;
l8=si0;
si0=l31;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si1=6U;
si2=l29;
si3=l12;
si2=si2 == si3;
si0=si2?si0:si1;
l8=si0;
goto L15;
L21:;
si0=3U;
si1=7U;
si2=l27;
si0=si2?si0:si1;
l8=si0;
goto L15;
L20:;
si0=1U;
si1=2U;
si2=l32;
si0=si2?si0:si1;
l9=si0;
si0=3U;
si1=7U;
si2=l32;
si0=si2?si0:si1;
l8=si0;
goto L15;
L19:;
si0=1U;
l9=si0;
si0=3U;
l8=si0;
goto L15;
L18:;
si0=0U;
l9=si0;
si0=l11;
l8=si0;
goto L15;
L17:;
si0=l8;
l11=si0;
si0=l1;
l9=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L16;
}
}
L15:;
si0=l24;
if(si0){
goto L11;
}
si0=l8;
si1=255U;
si0&=si1;
si1=l16;
si0*=si1;
l8=si0;
si1=8U;
si0>>=(si1&31);
if(si0){
goto L50;
}
si0=l3;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l23;
si0+=si1;
l1=si0;
si1=69U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=346U;
si0+=si1;
si1=l9;
si2=1U;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=272U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=256U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L14;
L50:;
}
si0=1165868U;
si1=43U;
si2=1165912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l19;
if(si0){
goto L11;
}
si0=0U;
l8=si0;
L51:;
{
si0=l3;
si1=l8;
si2=254U;
si1&=si2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0+=si1;
l1=si0;
si1=70U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=346U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=272U;
si0+=si1;
si1=l17;
i32_store8(&i->m0,(U64)si0,si1);
si0=l20;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0+=si1;
l1=si0;
si1=69U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=346U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=272U;
si0+=si1;
si1=l17;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=2U;
si0+=si1;
l8=si0;
si1=256U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L51;
}
L12:;
si0=l1;
si1=70U;
si2=1165944U;
f663(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1165868U;
si1=43U;
si2=1165912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
si1=1165812U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l2;
si1=345U;
si0+=si1;
si1=l16;
si2=3U;
si1<<=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=344U;
si0+=si1;
si1=l16;
si2=7U;
si1*=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=343U;
si0+=si1;
si1=l16;
si2=3U;
si1*=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=l2;
si1=l16;
si2=1U;
si1<<=(si2&31);
i32_store8(&i->m0,(U64)si0+342U,si1);
si0=l0;
si1=l2;
si2=432U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=432U;
si0+=si1;
i->g0=si0;
L0:;
}

void f812(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=0U;
l8=si0;
si0=l3;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=429U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=l2;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=12565487U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=3U;
l8=si0;
si0=l2;
si1=3U;
si0+=si1;
l2=si0;
si0=l3;
si1=-3U;
si0+=si1;
l3=si0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+428U);
if(si0){
goto L11;
}
si0=l3;
if(si0){
goto L16;
}
si0=l1;
si1=345U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+418U);
l10=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=255U;
si0&=si1;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l1;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=255U;
si0&=si1;
si1=32U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l9;
si1=255U;
si0&=si1;
si1=l3;
si2=3U;
si1<<=(si2&31);
l10=si1;
si2=248U;
si1&=si2;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l3;
si1=255U;
si0&=si1;
si0=!(si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
goto L14;
L16:;
si0=0U;
l10=si0;
si0=l5;
if(si0){
goto L13;
}
goto L4;
L15:;
si0=4U;
l2=si0;
si0=0U;
l10=si0;
si0=l9;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
L14:;
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=0U;
l10=si0;
goto L3;
L13:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=12U;
si0+=si1;
l11=si0;
si0=l1;
si1=344U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+418U);
l15=si0;
si0=0U;
l16=si0;
si0=l1;
si1=342U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l17=si0;
si0=l1;
si1=343U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l18=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L17:;
{
si0=l11;
si1=l2;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l19=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l15;
si2=255U;
si1&=si2;
si0+=si1;
l15=si0;
si1=70U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l1;
sj1=l14;
si2=l19;
si3=10U;
si2=si2 == si3;
sj2=(U64)(si2);
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l15;
si0+=si1;
l20=si0;
si1=272U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l20;
si1=346U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L19;
}
goto L18;
L20:;
si0=l15;
si1=70U;
si2=1165928U;
f663(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l4;
si1=l9;
si0+=si1;
si1=l19;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L18:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l15;
si1=255U;
si0&=si1;
l19=si0;
si1=l12;
si2=255U;
si1&=si2;
l20=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l6;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l13;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l19;
si1=l20;
si0=si0 != si1;
if(si0){
goto L10;
}
L21:;
si0=l19;
si1=l17;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l19;
si1=l18;
si0=si0 != si1;
if(si0){
goto L22;
}
L23:;
si0=l10;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L22;
}
L24:;
{
si0=l11;
si1=l2;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l19=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L22;
}
si0=l4;
si1=l9;
si0+=si1;
si1=l19;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l9;
si1=l5;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L22:;
si0=l10;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l16;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L10;
}
goto L17;
}
L12:;
si0=1165868U;
si1=43U;
si2=1165912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l3;
if(si0){
goto L31;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+421U);
l9=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l9;
si1=-200U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L25;
case 2:
goto L29;
default:
goto L25;
}
L31:;
si0=0U;
l10=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+421U);
l11=si0;
si0=0U;
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l11;
l19=si0;
si0=0U;
l10=si0;
goto L27;
L30:;
si0=1U;
si1=l9;
si0<<=(si1&31);
si1=190U;
si0&=si1;
if(si0){
goto L25;
}
L29:;
si0=l1;
si1=202U;
i32_store8(&i->m0,(U64)si0+421U,si1);
si0=4U;
l2=si0;
si0=0U;
l10=si0;
goto L3;
L28:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+427U);
l18=si0;
si1=0U;
si0=si0 != si1;
l21=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+426U);
si2=0U;
si1=si1 != si2;
si0&=si1;
l22=si0;
si0=l1;
si1=417U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+416U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+419U);
l13=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+420U);
l17=si0;
si0=l1;
si1=424U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l24=si0;
si0=l1;
si1=425U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l25=si0;
si0=l1;
si1=422U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l26=si0;
si0=l1;
si1=423U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l27=si0;
si0=0U;
l10=si0;
si0=0U;
l16=si0;
L32:;
{
si0=l2;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=3U;
l20=si0;
si0=l11;
si1=255U;
si0&=si1;
l19=si0;
switch(si0){
case 0:
goto L53;
case 1:
goto L52;
case 2:
goto L43;
case 3:
goto L51;
case 4:
goto L37;
case 5:
goto L41;
case 6:
goto L50;
case 7:
goto L40;
case 8:
goto L49;
case 9:
goto L48;
default:
goto L54;
}
L54:;
si0=201U;
l11=si0;
si0=l19;
si1=-200U;
si0+=si1;
switch(si0){
case 0:
goto L33;
case 1:
goto L56;
case 2:
goto L55;
default:
goto L33;
}
L56:;
si0=1U;
l19=si0;
si0=l12;
switch(si0){
case 0:
goto L57;
case 1:
goto L58;
default:
goto L59;
}
L59:;
si0=1166062U;
si1=40U;
si2=1166320U;
f673(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=0U;
l19=si0;
L57:;
si0=9U;
si1=8U;
si2=l19;
si0=si2?si0:si1;
si1=8U;
si2=l15;
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l19=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L34;
L55:;
si0=l6;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=4U;
l2=si0;
si0=202U;
l19=si0;
si0=l9;
l3=si0;
goto L26;
L53:;
si0=l12;
switch(si0){
case 0:
goto L60;
case 1:
goto L42;
default:
goto L61;
}
L61:;
si0=1166062U;
si1=40U;
si2=1166336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=0U;
l19=si0;
si0=l15;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L35;
case 1:
goto L36;
case 2:
goto L36;
case 3:
goto L35;
default:
goto L36;
}
L52:;
si0=l18;
si0=!(si0);
if(si0){
goto L62;
}
si0=3U;
l19=si0;
si0=l17;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
L62:;
si0=7U;
l19=si0;
si0=l13;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l12;
switch(si0){
case 0:
goto L46;
case 1:
goto L45;
default:
goto L47;
}
L51:;
si0=5U;
si1=3U;
si2=l21;
si3=l17;
si4=255U;
si3&=si4;
si4=l15;
si3=si3 == si4;
si2&=si3;
l20=si2;
si0=si2?si0:si1;
l19=si0;
si0=2U;
si1=1U;
si2=l20;
si0=si2?si0:si1;
l11=si0;
si0=l18;
si0=!(si0);
if(si0){
goto L38;
}
si0=l20;
if(si0){
goto L38;
}
si0=3U;
l20=si0;
si0=l26;
si0=!(si0);
if(si0){
goto L37;
}
si0=4U;
l19=si0;
si0=3U;
l20=si0;
si0=l27;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
goto L37;
L50:;
si0=0U;
si1=6U;
si2=l15;
si3=10U;
si2=si2 == si3;
si0=si2?si0:si1;
l19=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L34;
L49:;
si0=0U;
l11=si0;
goto L33;
L48:;
si0=0U;
l19=si0;
si0=l15;
si1=10U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=0U;
l11=si0;
goto L33;
L47:;
si0=1166062U;
si1=40U;
si2=1166336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l15;
si1=13U;
si0=si0 == si1;
si1=l15;
si2=10U;
si1=si1 == si2;
si0|=si1;
l11=si0;
goto L44;
L45:;
si0=l23;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
l11=si0;
L44:;
si0=-56U;
si1=2U;
si2=l11;
si0=si2?si0:si1;
l19=si0;
si0=l11;
si1=1U;
si0^=si1;
l11=si0;
goto L38;
L43:;
si0=7U;
l19=si0;
si0=l13;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l12;
switch(si0){
case 0:
goto L65;
case 1:
goto L64;
default:
goto L66;
}
L66:;
si0=1166062U;
si1=40U;
si2=1166336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l15;
si1=13U;
si0=si0 == si1;
si1=l15;
si2=10U;
si1=si1 == si2;
si0|=si1;
l11=si0;
goto L63;
L64:;
si0=l23;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
l11=si0;
L63:;
si0=-56U;
si1=2U;
si2=l11;
si0=si2?si0:si1;
l19=si0;
si0=l11;
si1=1U;
si0^=si1;
l11=si0;
goto L38;
L42:;
si0=0U;
l19=si0;
si0=l23;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 != si1;
if(si0){
goto L36;
}
goto L35;
L41:;
si0=3U;
l20=si0;
si0=l22;
si1=l17;
si2=255U;
si1&=si2;
si2=l15;
si1=si1 == si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L39;
}
goto L37;
L40:;
si0=1U;
l11=si0;
goto L33;
L39:;
si0=7U;
l19=si0;
si0=l13;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l12;
switch(si0){
case 0:
goto L69;
case 1:
goto L68;
default:
goto L70;
}
L70:;
si0=1166062U;
si1=40U;
si2=1166336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l15;
si1=13U;
si0=si0 == si1;
si1=l15;
si2=10U;
si1=si1 == si2;
si0|=si1;
l11=si0;
goto L67;
L68:;
si0=l23;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
l11=si0;
L67:;
si0=-56U;
si1=2U;
si2=l11;
si0=si2?si0:si1;
l19=si0;
si0=l11;
si1=1U;
si0^=si1;
l11=si0;
L38:;
si0=l19;
l20=si0;
si0=l11;
switch(si0){
case 0:
goto L34;
case 1:
goto L37;
case 2:
goto L35;
default:
goto L34;
}
L37:;
si0=l4;
si1=l9;
si0+=si1;
si1=l15;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l20;
l19=si0;
goto L34;
L36:;
si0=1U;
l11=si0;
si0=l24;
si0=!(si0);
if(si0){
goto L33;
}
si0=6U;
l19=si0;
si0=l25;
si1=l15;
si0=si0 != si1;
if(si0){
goto L33;
}
L35:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
L34:;
si0=l19;
si1=255U;
si0&=si1;
l11=si0;
si1=-7U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l11;
si1=202U;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l19;
l11=si0;
goto L33;
L71:;
si0=l6;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=7U;
l11=si0;
si0=l19;
si1=7U;
si0=si0 != si1;
if(si0){
goto L27;
}
L33:;
si0=l10;
si1=l3;
si0=si0 < si1;
if(si0){
goto L72;
}
si0=l11;
l19=si0;
goto L27;
L72:;
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l11;
l19=si0;
si0=l16;
si1=l7;
si0=si0 < si1;
if(si0){
goto L32;
}
goto L27;
L73:;
}
si0=l11;
l19=si0;
L27:;
si0=l19;
si1=255U;
si0&=si1;
l4=si0;
si1=-8U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L74;
}
si0=4U;
l2=si0;
si0=l4;
si1=202U;
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l9;
l3=si0;
goto L26;
L75:;
si0=l9;
si1=l5;
si0=si0 < si1;
if(si0){
goto L76;
}
si0=1U;
l2=si0;
si0=l10;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L76;
}
si0=l9;
l3=si0;
goto L26;
L76:;
si0=l10;
si1=l3;
si0=si0 < si1;
si1=1U;
si0<<=(si1&31);
si1=0U;
si2=l16;
si3=l7;
si2=si2 >= si3;
si0=si2?si0:si1;
l2=si0;
si0=l9;
l3=si0;
goto L26;
L74:;
si0=0U;
l3=si0;
si0=3U;
l2=si0;
L26:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l19;
i32_store8(&i->m0,(U64)si0+421U,si1);
goto L2;
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
i32_store8(&i->m0,(U64)si0+421U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=0U;
l10=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L10:;
si0=l1;
si1=345U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l15;
si2=255U;
si1&=si2;
si0=si0 <= si1;
if(si0){
goto L77;
}
si0=l1;
si1=l15;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=l1;
si1=l9;
si2=l13;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l16;
si2=l7;
si1=si1 >= si2;
si2=1U;
si1<<=(si2&31);
si2=0U;
si3=l10;
si4=l3;
si3=si3 < si4;
l3=si3;
si1=si3?si1:si2;
l19=si1;
si2=l3;
si0=si2?si0:si1;
si1=l19;
si2=l9;
si3=l5;
si2=si2 >= si3;
si0=si2?si0:si1;
l2=si0;
goto L2;
L77:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l15;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=3U;
l2=si0;
goto L2;
L9:;
si0=2U;
l2=si0;
goto L3;
L8:;
si0=l7;
if(si0){
goto L6;
}
L7:;
si0=2U;
l2=si0;
si0=0U;
l10=si0;
goto L3;
L6:;
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=0U;
l10=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L5:;
si0=1U;
l16=si0;
si0=3U;
l2=si0;
si0=0U;
l9=si0;
goto L2;
L4:;
si0=1U;
l2=si0;
L3:;
si0=0U;
l9=si0;
si0=0U;
l16=si0;
L2:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=429U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f813(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si1=264U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=265U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l8=si0;
goto L2;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+275U);
switch(si0){
case 0:
goto L8;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L6;
default:
goto L13;
}
L13:;
si0=1166062U;
si1=40U;
si2=1166172U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l2;
l8=si0;
si0=l3;
l7=si0;
si0=l3;
si1=8U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
l9=si0;
si0=l3;
l7=si0;
L14:;
{
si0=l1;
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=4U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=5U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=6U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l9;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=l9;
si2=7U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L10;
}
si0=l8;
l9=si0;
si0=l7;
si1=8U;
si0=si0 >= si1;
if(si0){
goto L14;
}
goto L10;
}
L11:;
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f756(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si2=l6;
si3=16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
f770(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
si2=l8;
si3=10U;
f681(i,si0,si1,si2,si3);
si0=l1;
si1=265U;
si0+=si1;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L4;
L10:;
si0=l10;
if(si0){
goto L8;
}
L9:;
L15:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l1;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
}
L8:;
si0=l1;
si1=265U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L7:;
si0=l5;
if(si0){
goto L5;
}
si0=0U;
l3=si0;
si0=1U;
l5=si0;
si0=0U;
l1=si0;
goto L1;
L6:;
si0=0U;
l7=si0;
si0=l1;
si1=265U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+277U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+256U);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
L4:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+264U,si1);
si0=l7;
l8=si0;
L2:;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L17;
}
si0=l4;
si1=l2;
si2=l3;
si3=l5;
si4=l3;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
l7=si2;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l3;
si0=si0 < si1;
l5=si0;
si0=l7;
l3=si0;
goto L16;
L17:;
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l1;
si5=i32_load8_u(&i->m0,(U64)si5+277U);
si6=l1;
si6=i32_load8_u(&i->m0,(U64)si6+278U);
si7=l1;
si7=i32_load8_u(&i->m0,(U64)si7+274U);
f814(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l5=si0;
L16:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+256U);
si2=l7;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l7;
si1=l8;
si0+=si1;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f814(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L6;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L5;
L6:;
si0=l7;
if(si0){
goto L7;
}
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L8:;
{
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
f1413(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=l7;
si3=l4;
si4=l7;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
l11=si2;
si0=f15390(i,si0,si1,si2);
l12=si0;
si0=1U;
l3=si0;
si0=l11;
si1=l9;
si0+=si1;
l9=si0;
si0=l11;
si1=l10;
si0+=si1;
l10=si0;
si0=l7;
si1=l4;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l11;
si0-=si1;
l13=si0;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l2;
si1=l11;
si0-=si1;
l7=si0;
si0=l12;
si1=l11;
si0+=si1;
l4=si0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l11;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
si1=l11;
si0+=si1;
l1=si0;
si0=l4;
si1=2U;
si0+=si1;
l3=si0;
si0=l9;
si1=2U;
si0+=si1;
l9=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l13;
si1=-2U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L8;
}
goto L5;
}
L7:;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L9:;
{
si0=l8;
si1=l5;
si2=l1;
si3=l2;
f1413(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=l7;
si3=l4;
si4=l7;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
l11=si2;
si0=f15390(i,si0,si1,si2);
l12=si0;
si0=1U;
l3=si0;
si0=l11;
si1=l9;
si0+=si1;
l9=si0;
si0=l11;
si1=l10;
si0+=si1;
l10=si0;
si0=l7;
si1=l4;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l11;
si0-=si1;
l13=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=l11;
si0-=si1;
l7=si0;
si0=l12;
si1=l11;
si0+=si1;
l4=si0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l11;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
si1=l11;
si0+=si1;
l1=si0;
si0=l4;
si1=2U;
si0+=si1;
l3=si0;
si0=l9;
si1=2U;
si0+=si1;
l9=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l13;
si1=-2U;
si0+=si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L9;
}
}
L5:;
si0=0U;
l2=si0;
L4:;
si0=l3;
si1=l1;
si2=l2;
si3=l4;
si4=l2;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
l7=si2;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l4;
si0=si0 > si1;
l3=si0;
si0=l7;
si1=l9;
si0+=si1;
l9=si0;
si0=l7;
si1=l10;
si0+=si1;
l10=si0;
L3:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l7;
si2=1166204U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=l2;
si2=1166188U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f815(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l1;
si1=265U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+256U);
l5=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=2U;
l4=si0;
si0=l3;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L2;
L6:;
si0=1166102U;
si1=37U;
si2=1166140U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+277U);
l6=si1;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-2U;
si0+=si1;
l3=si0;
goto L3;
L4:;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=0U;
l4=si0;
goto L3;
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+265U,si1);
si0=l1;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+277U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=1U;
l4=si0;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L11;
}
L11:;
si0=1166062U;
si1=40U;
si2=1166156U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=2U;
l7=si0;
si0=1U;
l6=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=l4;
si0+=si1;
si1=2573U;
i32_store16(&i->m0,(U64)si0,si1);
goto L8;
L9:;
si0=l3;
if(si0){
goto L12;
}
si0=1U;
l6=si0;
goto L1;
L12:;
si0=l2;
si1=l4;
si0+=si1;
si1=l1;
si2=273U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
L8:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=0U;
l6=si0;
si0=l1;
si1=264U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
si0+=si1;
l4=si0;
goto L1;
L2:;
si0=1U;
l6=si0;
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f816(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si1=24U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
L2:;
{
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l3;
l6=si0;
L5:;
{
si0=l4;
si1=-128U;
si0+=si1;
l4=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l6;
si1=8U;
si0+=si1;
l3=si0;
l6=si0;
sj0=l7;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l7;
sj2=-1ULL;
sj1+=sj2;
sj2=l7;
sj1&=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l1;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
sj2=-1ULL;
sj1+=sj2;
sj2=l5;
sj1&=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
l7=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
sj0=l8;
l5=sj0;
si0=l4;
sj1=l7;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=1U;
si1<<=(si2&31);
si2=240U;
si1&=si2;
si0-=si1;
si1=-16U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=4U;
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
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L7:;
L0:;
}

U32 f817(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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
goto L7;
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
goto L9;
}
si0=l7;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L10;
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
goto L8;
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
si1=268435455U;
si0=si0 <= si1;
if(si0){
goto L8;
}
goto L1;
L10:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L9:;
si0=4U;
si1=8U;
si2=l7;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L8:;
si0=l1;
si1=4U;
si0<<=(si1&31);
l9=si0;
si1=l1;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l7=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l7;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=8U;
l11=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=7U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=8U;
si1=l7;
si0=f15277(i,si0,si1);
l11=si0;
goto L12;
L13:;
si0=l7;
si0=f15269(i,si0);
l11=si0;
L12:;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
L11:;
si0=l11;
si1=l9;
si0+=si1;
si1=255U;
si2=l10;
si0=f15392(i,si0,si1,si2);
l11=si0;
si0=l1;
si1=-1U;
si0+=si1;
l9=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l9;
si3=8U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
if(si0){
goto L14;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L14:;
si0=l12;
si1=-16U;
si0+=si1;
l13=si0;
si0=0U;
l10=si0;
L15:;
{
si0=l12;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=l11;
si1=l9;
si2=l2;
si3=l13;
si4=l10;
si5=4U;
si4<<=(si5&31);
l14=si4;
si3-=si4;
sj2=f858(i,si2,si3);
si2=(U32)(sj2);
l15=si2;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
si0=8U;
l1=si0;
L18:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=l7;
si2=l9;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
si0=!(sj0);
if(si0){
goto L18;
}
}
L17:;
si0=l11;
sj1=l16;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l9;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
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
L19:;
si0=l11;
si1=l1;
si0+=si1;
si1=l15;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l9;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l1=si0;
si1=8U;
si0+=si1;
si1=l12;
si2=l14;
si1-=si2;
si2=-16U;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L16:;
si0=l10;
si1=l5;
si0=si0 == si1;
l1=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
if(si0){
goto L4;
}
goto L15;
}
L7:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
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
goto L20;
}
si0=l7;
si1=1U;
si0&=si1;
l10=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l11=si0;
si0=0U;
l1=si0;
L22:;
{
si0=l9;
si1=l1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l16;
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
l16=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l16;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
si0=l9;
si1=l1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l16;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L20:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l9;
si1=l6;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L24;
L25:;
si0=l9;
si1=8U;
si0+=si1;
si1=l9;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L23;
}
L24:;
si0=l9;
si1=-16U;
si0+=si1;
l6=si0;
si0=0U;
l1=si0;
L26:;
{
si0=l9;
si1=l1;
l14=si1;
si0+=si1;
l13=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l6;
si1=l14;
si2=4U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
l15=si0;
si0=l9;
si1=l1;
si0-=si1;
si1=-16U;
si0+=si1;
l7=si0;
L29:;
{
si0=l5;
si1=l2;
si2=l15;
sj1=f858(i,si1,si2);
si1=(U32)(sj1);
l12=si1;
si0&=si1;
l10=si0;
l11=si0;
si0=l9;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L30;
}
si0=8U;
l1=si0;
si0=l10;
l11=si0;
L31:;
{
si0=l11;
si1=l1;
si0+=si1;
l11=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=l11;
si2=l5;
si1&=si2;
l11=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
si0=!(sj0);
if(si0){
goto L31;
}
}
L30:;
si0=l9;
sj1=l16;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l11;
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
si0=l9;
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
si1=l10;
si0-=si1;
si1=l14;
si2=l10;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l9;
si1=l1;
si0+=si1;
l11=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l11;
si1=l12;
si2=25U;
si1>>=(si2&31);
l12=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l10;
si1=255U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+13U);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+14U);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l11=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+15U);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l1;
si1=l11;
i32_store8(&i->m0,(U64)si0+15U,si1);
goto L29;
L33:;
}
si0=l13;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
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
si1=l12;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L27:;
si0=l14;
si1=1U;
si0+=si1;
l1=si0;
si0=l14;
si1=l5;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L23:;
si0=l0;
si1=l8;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L6:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l5;
si1=l6;
si2=4U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l12;
si1=l1;
si0-=si1;
f15271(i,si0);
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=-2147483647U;
goto L0;
L1:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f818(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972600U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l3=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
goto L3;
L4:;
si0=l1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l0=si0;
if(si0){
goto L1;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l3=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
L3:;
si0=0U;
sj1=l3;
i64_store(&i->m0,(U64)si0+2972616U,sj1);
si0=0U;
sj1=l4;
i64_store(&i->m0,(U64)si0+2972608U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+2972600U,sj1);
L2:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=2972608U;
goto L0;
L1:;
si0=l1;
si1=l0;
i32_store16(&i->m0,(U64)si0+30U,si1);
si0=1992240U;
si1=18U;
si2=l1;
si3=30U;
si2+=si3;
si3=1992124U;
si4=1992292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f819(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
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
si1=l5;
si0+=si1;
l11=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si1=l5;
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
si0=l4;
si1=l5;
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
si0=l13;
si1=l15;
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
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L3;
L5:;
si0=l1;
si1=l14;
si2=l5;
si1+=si2;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l5;
si1=l6;
si0=si0 > si1;
l14=si0;
if(si0){
goto L16;
}
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si1=l3;
si2=l5;
si3=l7;
si2-=si3;
l15=si2;
si1+=si2;
si2=l14;
si0=si2?si0:si1;
si1=l8;
si2=l7;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l15;
si1=l11;
si0-=si1;
l14=si0;
si0=l3;
si1=l11;
si0+=si1;
l2=si0;
goto L1;
L17:;
si0=l7;
si1=4U;
si2=1166432U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l4;
si1=l5;
si0=si0 >= si1;
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

U32 f820(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l4;
si1=4U;
si0<<=(si1&31);
l4=si0;
L5:;
{
si0=l7;
si1=l4;
si0+=si1;
l9=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=l9;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l10;
si1=l6;
si2=l11;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l4;
si1=-16U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l9;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
if(si0){
goto L7;
}
si0=1U;
l3=si0;
goto L3;
L7:;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+44U);
l12=sj1;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L11;
}
L13:;
si0=l4;
if(si0){
goto L11;
}
si0=1U;
l4=si0;
si0=0U;
l9=si0;
si0=1166352U;
l11=si0;
goto L9;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
goto L8;
L10:;
sj0=l12;
si0=(U32)(sj0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
if(si0){
goto L14;
}
si0=1U;
l4=si0;
si0=0U;
l9=si0;
goto L9;
L14:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l4;
si1=l11;
si2=l9;
si0=f15390(i,si0,si1,si2);
si0=l9;
l11=si0;
L8:;
si0=l0;
si1=12U;
si0+=si1;
si1=0U;
si2=l10;
si0=si2?si0:si1;
si1=l4;
si2=l11;
si0=f828(i,si0,si1,si2);
l3=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15271(i,si0);
L3:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f821(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=336U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
sj1=201863462913ULL;
i64_store(&i->m0,(U64)si0+140U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=47U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=l3;
si2=120U;
si1+=si2;
f819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=120U;
si1+=si2;
f819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=120U;
si1+=si2;
f819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=296U;
i32_store(&i->m0,(U64)si0+276U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l3;
si1=6U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l3;
si1=1988598U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=1166680U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l3;
si1=l3;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=208U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L11;
}
si0=l3;
si1=2972508U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+220U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=1166680U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l3;
si1=l3;
si2=272U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=l3;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=296U;
si0+=si1;
si1=l3;
si2=160U;
si1+=si2;
si2=l3;
si3=208U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+296U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L9;
}
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
si0=0U;
l1=si0;
goto L5;
L10:;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+196U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l3;
sj1=188978561025ULL;
i64_store(&i->m0,(U64)si0+180U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=44U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=160U;
si1+=si2;
f819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
L12:;
{
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si2=l1;
f857(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
l2=si1;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+244U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+236U,si1);
si0=l3;
sj1=261993005057ULL;
i64_store(&i->m0,(U64)si0+228U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=61U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=208U;
si1+=si2;
f819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=208U;
si1+=si2;
f819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+44U);
f857(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=208U;
si1+=si2;
f819(i,si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
if(si0){
goto L18;
}
si0=l7;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+252U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l8;
si1=l7;
si0=f950(i,si0,si1);
l1=si0;
si1=6U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si1=296U;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l3;
si1=l3;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l3;
si1=6U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l3;
si1=1988598U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l3;
si1=1166712U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l3;
si1=l3;
si2=256U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l3;
si1=312U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L17;
}
si0=l3;
si1=2972508U;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l3;
si1=1166712U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l3;
si1=l3;
si2=256U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l3;
si1=l3;
si2=284U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l3;
si1=272U;
si0+=si1;
si1=l3;
si2=296U;
si1+=si2;
si2=l3;
si3=312U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l3;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l3;
si1=1988560U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l3;
si1=298U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l3;
si1=l3;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l3;
si1=l3;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l3;
si1=l3;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l3;
si1=312U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L20:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=208U;
si1+=si2;
f819(i,si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L19:;
si0=l1;
si0=!(si0);
if(si0){
goto L16;
}
L18:;
si0=l3;
si1=296U;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l3;
si1=l3;
si2=200U;
si1+=si2;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l3;
si1=6U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l3;
si1=1988598U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l3;
si1=1166712U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l3;
si1=l3;
si2=256U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l3;
si1=312U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L17;
}
si0=l3;
si1=2972508U;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+324U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l3;
si1=1166712U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l3;
si1=l3;
si2=256U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l3;
si1=l3;
si2=248U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l3;
si1=272U;
si0+=si1;
si1=l3;
si2=296U;
si1+=si2;
si2=l3;
si3=312U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L8;
}
L17:;
si0=l3;
si1=l3;
si2=160U;
si1+=si2;
f819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L12;
}
goto L6;
L16:;
si0=0U;
l8=si0;
si0=5U;
l1=si0;
si0=l2;
si1=l6;
si0=f950(i,si0,si1);
l7=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=5U;
l1=si0;
L14:;
si0=l6;
if(si0){
goto L22;
}
si0=1U;
l8=si0;
goto L21;
L22:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
L21:;
si0=l8;
si1=l2;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l9=sj0;
si0=l1;
l7=si0;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+108U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l3;
si1=104U;
si0+=si1;
si1=l2;
f885(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sj1=l9;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+112U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=160U;
si1+=si2;
f819(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L12;
}
goto L6;
}
L9:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+296U);
i64_store(&i->m0,(U64)si0+312U,sj1);
si0=l3;
si1=208U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=160U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=1988560U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l3;
si1=298U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=l3;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=l3;
si2=312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l3;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=208U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L8:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+272U);
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l3;
si1=312U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=296U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l3;
si1=1988560U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l3;
si1=298U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l3;
si1=l3;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l3;
si1=l3;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l3;
si1=l3;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l3;
si1=312U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l5;
if(si0){
goto L25;
}
si0=0U;
l1=si0;
goto L24;
L25:;
si0=l4;
if(si0){
goto L27;
}
si0=1U;
l1=si0;
goto L26;
L27:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
L26:;
si0=l1;
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l9=sj0;
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+108U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+104U);
l5=si0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
f15271(i,si0);
L28:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=36U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l5;
l8=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=216U;
si0+=si1;
l8=si0;
si0=l5;
l2=si0;
L29:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=6U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l2;
si1=16U;
si0+=si1;
l8=si0;
goto L2;
L30:;
si0=l8;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l0;
si1=l3;
si2=208U;
si1+=si2;
si2=l1;
si0=f883(i,si0,si1,si2);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L29;
}
goto L1;
}
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l8;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l1=si0;
si0=l8;
si1=8U;
si0+=si1;
l2=si0;
L31:;
{
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
f15271(i,si0);
L32:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L31;
}
}
L1:;
si0=l6;
si0=!(si0);
if(si0){
goto L33;
}
si0=l5;
f15271(i,si0);
L33:;
si0=l3;
si1=336U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f822(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
f885(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=4U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L3;
L4:;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972600U);
si0=!(sj0);
if(si0){
goto L6;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972616U);
l4=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+2972608U);
l5=sj0;
goto L5;
L6:;
si0=l2;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l6=si0;
if(si0){
goto L1;
}
si0=0U;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
l4=sj1;
i64_store(&i->m0,(U64)si0+2972616U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+2972600U,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+64U);
l5=sj0;
L5:;
si0=0U;
l7=si0;
si0=0U;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+2972608U,sj1);
si0=l1;
sj1=l4;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=1166448U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l8;
if(si0){
goto L8;
}
si0=1U;
l9=si0;
goto L7;
L8:;
si0=0U;
l7=si0;
si0=l8;
si1=1U;
si0+=si1;
l9=si0;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l8;
si1=l9;
si2=4U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=9U;
si0+=si1;
l8=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=8U;
l7=si0;
goto L9;
L10:;
L9:;
si0=l6;
si1=l10;
si0-=si1;
l10=si0;
L7:;
si0=l2;
si1=56U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=52U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l6;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=l5;
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
f856(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l6;
si2=l2;
si3=64U;
si2+=si3;
f837(i,si0,si1,si2);
L3:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
l5=sj0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1166456U;
si1=34U;
si2=1166600U;
f823(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l6;
i32_store16(&i->m0,(U64)si0+86U,si1);
si0=1992240U;
si1=18U;
si2=l2;
si3=86U;
si2+=si3;
si3=1992124U;
si4=1992292U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f823(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f876(i,si0);
UNREACHABLE;
L0:;
}

void f824(rustpythonInstance*i,U32 l0) {
L0:;
}

void f825(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si2=1166808U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1166824U;
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
si2=1166840U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f826(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1166872U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f827(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1166872U;
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

U32 f828(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L3;
}
si0=1U;
l0=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
f760(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L6;
}
si0=0U;
l1=si0;
si0=l3;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L1;
L11:;
si0=0U;
l0=si0;
si0=l4;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=l1;
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l0=si0;
goto L2;
L10:;
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L9:;
si0=l0;
si1=l2;
si0-=si1;
l4=si0;
L8:;
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=l2;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l4;
si1=31U;
si0&=si1;
l9=si0;
si0=l4;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l4=si0;
goto L14;
L16:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l4;
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
l4=si0;
goto L14;
L17:;
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
l4=si0;
goto L14;
L15:;
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
L14:;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L12;
}
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=1U;
l1=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=2U;
l1=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=3U;
si1=4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L18:;
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L20;
L21:;
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L20:;
si0=l0;
si1=l2;
si0-=si1;
l0=si0;
L19:;
si0=l0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
goto L12;
L13:;
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
L12:;
si0=1U;
l1=si0;
L7:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l3;
si1=24U;
si0+=si1;
l1=si0;
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l3;
si1=l1;
si2=l5;
si3=l0;
si4=l4;
si5=l2;
si6=0U;
f825(i,si0,si1,si2,si3,si4,si5,si6);
goto L5;
L22:;
si0=l3;
si1=l1;
si2=l5;
si3=l0;
si4=l4;
si5=l2;
si6=1U;
f825(i,si0,si1,si2,si3,si4,si5,si6);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L4:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=7U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
L24:;
{
si0=l4;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
l0=si0;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L24;
}
L23:;
si0=l1;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l0=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l0;
si1=l1;
si0-=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si1=l0;
si0-=si1;
l7=si0;
si0=1U;
l0=si0;
si0=l1;
l4=si0;
L28:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
if(si0){
goto L28;
}
}
si0=l6;
si1=l2;
si2=-8U;
si1+=si2;
l8=si1;
si0=si0 > si1;
if(si0){
goto L25;
}
goto L26;
L27:;
si0=l2;
si1=-8U;
si0+=si1;
l8=si0;
si0=0U;
l6=si0;
L26:;
si0=l5;
si1=16843009U;
si0*=si1;
l0=si0;
L29:;
{
si0=l1;
si1=l6;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
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
if(si0){
goto L25;
}
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
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
if(si0){
goto L25;
}
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L29;
}
}
L25:;
si0=0U;
l0=si0;
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l6;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0^=si1;
si1=l2;
si0+=si1;
l4=si0;
L30:;
{
si0=l4;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
l0=si0;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l2;
if(si0){
goto L30;
}
}
L2:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L1:;
si0=l5;
si1=l0;
si2=l2;
si3=l0;
si4=1166856U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f829(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
{
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f830(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L7;
}
si0=l0;
si1=1166916U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l5;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
default:
goto L13;
}
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14991(i,si0);
si1=255U;
si0&=si1;
l6=si0;
goto L9;
L12:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l6=si0;
goto L9;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
goto L9;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
L9:;
si0=l6;
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=l5;
si0+=si1;
l2=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
goto L4;
L6:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
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
goto L14;
}
si0=l7;
f15271(i,si0);
L14:;
si0=l5;
f15271(i,si0);
goto L4;
L5:;
si0=l5;
si1=l3;
si2=1167004U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}


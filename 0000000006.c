#include "w2c2_base.h"

#include "rustpython.h"

U32 f630(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l2;
si1=si3?si1:si2;
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f631(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
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

U32 f632(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l2;
f14917(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f15271(i,si0);
L4:;
si0=l4;
f15271(i,si0);
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

U32 f633(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l1;
si3=l2;
f320(i,si0,si1,si2,si3);
si0=0U;
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
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
goto L5;
}
si0=l5;
f15271(i,si0);
L5:;
si0=l4;
f15271(i,si0);
L3:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l2=si0;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f634(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l2;
f15026(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f15271(i,si0);
L4:;
si0=l4;
f15271(i,si0);
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

void f635(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
si2=l5;
sj2=(U64)(si2);
l7=sj2;
sj3=l6;
sj4=l7;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
si1=(U32)(sj1);
l8=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l5;
si1=l8;
si0=si0 != si1;
l5=si0;
if(si0){
goto L2;
}
si0=l1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l0;
si1=5U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
si2=l5;
sj2=(U64)(si2);
l7=sj2;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l2;
sj2=l7;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L0;
L1:;
si0=l8;
si1=l5;
si2=1092976U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f636(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
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
si1=16U;
si0+=si1;
l3=si0;
si1=l5;
si2=8U;
si1+=si2;
sj0=f441(i,si0,si1);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=l3;
si0=f333(i,si0,si1,si2);
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-40U;
si0+=si1;
l8=si0;
sj0=l6;
sj1=25ULL;
sj0>>=(sj1&63);
l9=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l10=sj0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=0U;
l13=si0;
si0=0U;
l14=si0;
L3:;
{
si0=l7;
si1=l2;
si2=l11;
si1&=si2;
l15=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
sj1=l10;
sj0^=sj1;
l6=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l6;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l6=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
L6:;
{
si0=l3;
si1=l8;
si2=0U;
sj3=l6;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l15;
si3+=si4;
si4=l11;
si3&=si4;
si2-=si3;
l17=si2;
si3=40U;
si2*=si3;
si1+=si2;
l2=si1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l12;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
sj0=l6;
sj1=-1ULL;
sj0+=sj1;
sj1=l6;
sj0&=sj1;
l6=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l0;
si1=24U;
si0+=si1;
si1=l7;
si2=l17;
si3=40U;
si2*=si3;
si1+=si2;
si2=-40U;
si1+=si2;
l3=si1;
si2=32U;
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L4:;
sj0=l16;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l6=sj0;
si0=1U;
l17=si0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
l17=si0;
sj0=l6;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l15;
si0+=si1;
si1=l11;
si0&=si1;
l18=si0;
L8:;
sj0=l6;
sj1=l16;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l15;
si1=l13;
si2=8U;
si1+=si2;
l13=si1;
si0+=si1;
l2=si0;
si0=l17;
l14=si0;
goto L3;
L9:;
}
si0=l7;
si1=l18;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l18=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
L10:;
si0=l7;
si1=l18;
si0+=si1;
sj1=l9;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l15=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l18;
si1=-8U;
si0+=si1;
si1=l11;
si0&=si1;
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
si1=l15;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=0U;
si2=l18;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l2=si0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f637(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
if(si0){
goto L3;
}
si0=1U;
l8=si0;
goto L2;
L3:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
if(si0){
goto L5;
}
si0=0U;
l9=si0;
goto L4;
L5:;
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=-8U;
si0+=si1;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=0U;
l9=si0;
L6:;
{
si0=l6;
si1=24U;
si0+=si1;
si1=l1;
si2=l15;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l7;
l16=si0;
si1=8U;
si0+=si1;
l7=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l16;
si1=4U;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
l19=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=l19;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l0;
si1=l8;
si2=l18;
si0=f366(i,si0,si1,si2);
l19=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l19;
if(si0){
goto L11;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l15;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l17=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l19=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=l19;
f566(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l19=si0;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l19;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si1=l16;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l19;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l19;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l19;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L7;
L11:;
si0=l6;
si1=40U;
si0+=si1;
si1=l0;
si2=l11;
si3=l18;
si4=l8;
sj2=f443(i,si2,si3,si4);
si3=l18;
si4=l8;
f332(i,si0,si1,sj2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+76U);
l18=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l20=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l19=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
f15271(i,si0);
L14:;
si0=l18;
si0=!(si0);
if(si0){
goto L15;
}
si0=l19;
l8=si0;
L16:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L17:;
si0=l8;
si1=12U;
si0+=si1;
l8=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l20;
si0=!(si0);
if(si0){
goto L13;
}
si0=l19;
f15271(i,si0);
L13:;
si0=l14;
if(si0){
goto L18;
}
si0=0U;
l14=si0;
goto L8;
L18:;
si0=l14;
si1=-1U;
si0+=si1;
l20=si0;
si0=l13;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l14;
l18=si0;
L20:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l19;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
si2=l19;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L19;
}
L21:;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L8;
}
goto L20;
}
L19:;
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l12;
si2=l20;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
l14=si0;
goto L8;
L9:;
si0=l0;
si1=l1;
si2=l2;
f638(i,si0,si1,si2);
si0=1U;
l9=si0;
goto L7;
L8:;
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l15;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l17=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l3;
si1=l8;
f566(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l16;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L7:;
si0=l7;
si1=l10;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L4:;
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
l8=si0;
L2:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
f638(i,si0,si1,si2);
L1:;
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f638(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+40U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
l5=si2;
sj0=f443(i,si0,si1,si2);
l6=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-40U;
si0+=si1;
l8=si0;
sj0=l6;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l9=sj0;
sj0=l6;
si0=(U32)(sj0);
l10=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l12=si0;
L2:;
{
si0=l7;
si1=l10;
si2=l11;
si1&=si2;
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
sj1=l9;
sj0^=sj1;
l6=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l6;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l6=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l8;
si1=0U;
sj2=l6;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l10;
si2+=si3;
si3=l11;
si2&=si3;
si1-=si2;
l14=si1;
si2=40U;
si1*=si2;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l6;
sj1=-1ULL;
sj0+=sj1;
sj1=l6;
sj0&=sj1;
l6=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l7;
si1=l14;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l5=si0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si0=TF(i->t0,si1,U32 (*)(rustpythonInstance*,U32))(i,si0);
if(si0){
goto L1;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si1=l0;
si2=12U;
si1+=si2;
si2=l10;
si3=-1U;
si2+=si3;
l10=si2;
si3=12U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
f15271(i,si0);
L7:;
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L3:;
sj0=l13;
sj1=l13;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l12;
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l10=si0;
goto L2;
}
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f639(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U64 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l6=si0;
si0=l0;
si1=16U;
si0+=si1;
l7=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=20U;
si0+=si1;
l8=si0;
si0=1U;
l9=si0;
si0=l1;
l10=si0;
L3:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
sj0=f443(i,si0,si1,si2);
l12=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l13=sj0;
sj0=l12;
si0=(U32)(sj0);
l14=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=-40U;
si0+=si1;
l16=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=0U;
l18=si0;
L5:;
{
si0=l15;
si1=l14;
si2=l17;
si1&=si2;
l19=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
sj1=l13;
sj0^=sj1;
l12=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l12;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
L8:;
{
si0=l16;
si1=0U;
sj2=l12;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l19;
si2+=si3;
si3=l17;
si2&=si3;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l11;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
L9:;
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
sj1=l12;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
goto L8;
}
L7:;
si0=l14;
si1=8U;
si0+=si1;
l18=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=l10;
sj0=f441(i,si0,si1);
l12=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=-40U;
si0+=si1;
l16=si0;
sj0=l12;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l13=sj0;
sj0=l12;
si0=(U32)(sj0);
l14=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=0U;
l15=si0;
L12:;
{
si0=l21;
si1=l14;
si2=l17;
si1&=si2;
l19=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
sj1=l13;
sj0^=sj1;
l12=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l12;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
L15:;
{
si0=l9;
si1=l16;
si2=0U;
sj3=l12;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l19;
si3+=si4;
si4=l17;
si3&=si4;
si2-=si3;
si3=40U;
si2*=si3;
si1+=si2;
l14=si1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l11;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
L16:;
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
sj1=l12;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
goto L15;
}
L14:;
si0=l14;
si1=8U;
si0+=si1;
si1=l18;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2+8U);
l12=sj2;
sj3=0ULL;
si2=sj2 != sj3;
si3=l18;
sj3=i64_load(&i->m0,(U64)si3);
l20=sj3;
si3=!(sj3);
si2&=si3;
l14=si2;
si0=si2?si0:si1;
l18=si0;
sj0=l12;
sj1=l20;
si2=l14;
sj0=si2?sj0:sj1;
l12=sj0;
goto L10;
L13:;
sj0=l20;
sj1=l20;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l19;
si1=l15;
si2=8U;
si1+=si2;
l15=si1;
si0+=si1;
l14=si0;
goto L12;
}
L11:;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
L10:;
si0=l18;
si0=i32_load(&i->m0,(U64)si0+8U);
l16=si0;
si0=l18;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
if(si0){
goto L19;
}
si0=4U;
l17=si0;
si0=0U;
l19=si0;
goto L18;
L19:;
si0=l14;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l14;
si1=2U;
si0<<=(si1&31);
l19=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l14;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l15=si0;
si0=l19;
if(si0){
goto L21;
}
si0=l15;
l17=si0;
goto L20;
L21:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l15;
si1=l19;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l15;
si1=l19;
si0=f15277(i,si0,si1);
l17=si0;
goto L20;
L22:;
si0=l19;
si0=f15269(i,si0);
l17=si0;
L20:;
si0=l17;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l17;
si1=l16;
si2=l19;
si0=f15390(i,si0,si1,si2);
l19=si0;
si0=l4;
si1=l18;
si2=20U;
si1+=si2;
f296(i,si0,si1);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
sj1=l12;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l11;
si3=l9;
si4=l4;
si5=64U;
si4+=si5;
f636(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l9;
f15271(i,si0);
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l19=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l14=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l19;
l9=si0;
L25:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L26:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l19;
f15271(i,si0);
goto L4;
L17:;
si0=l15;
si1=l19;
f52(i,si0,si1);
UNREACHABLE;
L6:;
sj0=l20;
sj1=l20;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l19;
si1=l18;
si2=8U;
si1+=si2;
l18=si1;
si0+=si1;
l14=si0;
goto L5;
}
L4:;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
goto L3;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=0U;
si0=f319(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
sj0=i64_load(&i->m0,(U64)si0+8U);
l20=sj0;
si0=l4;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
si1=l9;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
l19=si0;
si1=l9;
si2=16U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
l17=si0;
si1=l9;
si2=24U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
l16=si0;
si1=l9;
si2=32U;
si1+=si2;
l21=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
l11=si0;
si1=l9;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=1086680U;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l13;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l18=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l15=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l21=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f639(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si0=l11;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=l9;
si2=40U;
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l9;
si2=32U;
si1+=si2;
l21=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l9;
si2=24U;
si1+=si2;
l8=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l9;
si2=16U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l9;
si2=8U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
f615(i,si0);
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si1=84U;
si0+=si1;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=8U;
si0+=si1;
l17=si0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
L31:;
{
sj0=l12;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L32;
}
si0=l17;
l9=si0;
L33:;
{
si0=l19;
si1=-320U;
si0+=si1;
l19=si0;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l9;
si1=8U;
si0+=si1;
l17=si0;
l9=si0;
sj0=l12;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L33;
}
}
L32:;
si0=0U;
l14=si0;
si0=l19;
si1=0U;
sj2=l12;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l18=si0;
si1=-40U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=4U;
l16=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l9;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l9;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l9;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l9;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l9;
si1=2U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l9;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l21=si0;
si0=l14;
if(si0){
goto L36;
}
si0=l21;
l16=si0;
goto L35;
L36:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l21;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l21;
si1=l14;
si0=f15277(i,si0,si1);
l16=si0;
goto L35;
L37:;
si0=l14;
si0=f15269(i,si0);
l16=si0;
L35:;
si0=l16;
si0=!(si0);
if(si0){
goto L27;
}
L34:;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
l13=sj0;
si0=l16;
si1=l3;
si2=l14;
si0=f15390(i,si0,si1,si2);
l14=si0;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l18;
si2=-12U;
si1+=si2;
f296(i,si0,si1);
si0=l4;
sj1=l20;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l0;
si2=l10;
si3=l15;
si4=l4;
si5=64U;
si4+=si5;
f636(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l9;
f15271(i,si0);
L39:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l14=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l16;
l9=si0;
L41:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L42:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l16;
f15271(i,si0);
L38:;
sj0=l13;
sj1=l12;
sj0&=sj1;
l12=sj0;
si0=l11;
if(si0){
goto L31;
}
}
L30:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L28:;
si0=1093060U;
si1=70U;
si2=l4;
si3=64U;
si2+=si3;
si3=1093132U;
si4=1093228U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l21;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

U32 f640(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
sj0=f443(i,si0,si1,si2);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-40U;
si0+=si1;
l6=si0;
sj0=l4;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
sj0=l4;
si0=(U32)(sj0);
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l9=si0;
L2:;
{
si0=l5;
si1=l3;
si2=l8;
si1&=si2;
l0=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=l7;
sj0^=sj1;
l4=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l4;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l6;
si1=0U;
sj2=l4;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
si3=l8;
si2&=si3;
l11=si2;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l5;
si1=0U;
si2=l11;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l3=si0;
goto L1;
L3:;
sj0=l10;
sj1=l10;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
l3=si0;
goto L1;
L7:;
si0=l0;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l3=si0;
goto L2;
}
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si2=l3;
si0=si2?si0:si1;
L0:;
return si0;
}

void f641(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l0;
si3=16U;
si2+=si3;
si3=l1;
si4=l2;
sj2=f443(i,si2,si3,si4);
si3=l1;
si4=l2;
f332(i,si0,si1,sj2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
f15271(i,si0);
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l0=si0;
L4:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f642(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
si5=32U;
si4+=si5;
f636(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15271(i,si0);
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
l2=si0;
L4:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L5:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15271(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f643(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
sj0=f443(i,si0,si1,si2);
l3=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-40U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l6=sj0;
sj0=l3;
si0=(U32)(sj0);
l7=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l9=si0;
L2:;
{
si0=l4;
si1=l7;
si2=l8;
si1&=si2;
l0=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=l6;
sj0^=sj1;
l3=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l3;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l5;
si1=0U;
sj2=l3;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
si3=l8;
si2&=si3;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l3;
sj1=-1ULL;
sj0+=sj1;
sj1=l3;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=1U;
goto L0;
L3:;
sj0=l10;
sj1=l10;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=0U;
goto L0;
L7:;
si0=l0;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l7=si0;
goto L2;
}
L0:;
return si0;
}

void f644(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
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
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
si2=8U;
si1+=si2;
sj0=f441(i,si0,si1);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-40U;
si0+=si1;
l8=si0;
sj0=l6;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l9=sj0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=0U;
l12=si0;
sj0=l6;
si0=(U32)(sj0);
l13=si0;
l2=si0;
L2:;
{
si0=l7;
si1=l2;
si2=l10;
si1&=si2;
l14=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=l9;
sj0^=sj1;
l16=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l16;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l8;
si1=0U;
sj2=l16;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l14;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
l17=si1;
si2=40U;
si1*=si2;
si0+=si1;
l2=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=l3;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l16;
sj1=-1ULL;
sj0+=sj1;
sj1=l16;
sj0&=sj1;
l16=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
si2=l17;
si3=40U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
sj0=l15;
sj1=l15;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l14;
si1=l12;
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l2=si0;
goto L2;
L7:;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l1;
si1=1U;
si2=l5;
si0=f333(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L8:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
i64_store32(&i->m0,(U64)si0+12U,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f645(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
sj0=f443(i,si0,si1,si2);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-40U;
si0+=si1;
l6=si0;
sj0=l4;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
sj0=l4;
si0=(U32)(sj0);
l8=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l10=si0;
L3:;
{
si0=l5;
si1=l8;
si2=l9;
si1&=si2;
l11=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l7;
sj0^=sj1;
l4=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l4;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
L6:;
{
si0=l6;
si1=0U;
sj2=l4;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l11;
si2+=si3;
si3=l9;
si2&=si3;
si1-=si2;
l13=si1;
si2=40U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l5;
si1=l13;
si2=40U;
si1*=si2;
si0+=si1;
si1=-32U;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
sj0=l12;
sj1=l12;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l8=si0;
goto L3;
}
L2:;
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
si5=32U;
si4+=si5;
f636(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
f15271(i,si0);
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l11;
l2=si0;
L10:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L11:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
f15271(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f646(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
f644(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l9;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+16U);
si2=(U32)(sj2);
l11=si2;
si1&=si2;
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=8U;
l2=si0;
L8:;
{
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si2=l10;
si1&=si2;
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L8;
}
}
L7:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si0=l0;
sj1=l12;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
si2=l10;
si1&=si2;
l2=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=l0;
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
l1=si0;
L9:;
si0=l0;
si1=l2;
si0+=si1;
si1=l11;
si2=25U;
si1>>=(si2&31);
l11=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=l2;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l1=si0;
si1=-40U;
si0+=si1;
l2=si0;
si1=32U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L5;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l6;
f15271(i,si0);
si0=l7;
f15271(i,si0);
L5:;
si0=l4;
if(si0){
goto L11;
}
si0=1U;
l2=si0;
goto L10;
L11:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l1;
si1=-12U;
si0+=si1;
l0=si0;
si0=l2;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l1;
si1=-40U;
si0+=si1;
l9=si0;
si1=36U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l9;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=l1;
f567(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f647(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
f644(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l7;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+16U);
si2=(U32)(sj2);
l9=si2;
si1&=si2;
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l10=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=8U;
l2=si0;
L5:;
{
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si2=l8;
si1&=si2;
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l10=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l0;
sj1=l10;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
si2=l8;
si1&=si2;
l2=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l0;
si1=l0;
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
l1=si0;
L6:;
si0=l0;
si1=l2;
si0+=si1;
si1=l9;
si2=25U;
si1>>=(si2&31);
l9=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=-8U;
si0+=si1;
si1=l8;
si0&=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=l2;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l1=si0;
si1=-40U;
si0+=si1;
l2=si0;
si1=36U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l5;
f15271(i,si0);
L2:;
si0=l1;
si1=-24U;
si0+=si1;
l0=si0;
si0=l1;
si1=-40U;
si0+=si1;
l8=si0;
si1=24U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l8;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=l1;
f570(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f648(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=1U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+184U);
l3=si1;
si2=l1;
si3=188U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
sj0=f443(i,si0,si1,si2);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-40U;
si0+=si1;
l7=si0;
sj0=l5;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
sj0=l5;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l11=si0;
L2:;
{
si0=l6;
si1=l9;
si2=l10;
si1&=si2;
l0=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l8;
sj0^=sj1;
l5=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l5;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l7;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
l13=si1;
si2=40U;
si1*=si2;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l6;
si1=l13;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l4=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L8;
}
sj0=l5;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+36U);
si0=sj0 != sj1;
goto L0;
L8:;
sj0=l5;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+36U);
sj1=l5;
sj0=REM_U(sj0,sj1);
sj1=0ULL;
si0=sj0 != sj1;
goto L0;
L9:;
si0=1096960U;
si1=57U;
si2=1096936U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L10;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+36U);
si0=sj0 >= sj1;
goto L0;
L10:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si1=220U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si1=1U;
si0>>=(si1&31);
l2=si0;
goto L1;
L3:;
sj0=l12;
sj1=l12;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l9=si0;
goto L2;
}
L1:;
si0=l2;
L0:;
return si0;
}

U32 f649(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=1U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+152U);
l3=si1;
si2=l1;
si3=156U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
sj0=f443(i,si0,si1,si2);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-40U;
si0+=si1;
l7=si0;
sj0=l5;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
sj0=l5;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l11=si0;
L2:;
{
si0=l6;
si1=l9;
si2=l10;
si1&=si2;
l0=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l8;
sj0^=sj1;
l5=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l5;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l7;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
l13=si1;
si2=40U;
si1*=si2;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l6;
si1=l13;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l4=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L8;
}
sj0=l5;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+36U);
si0=sj0 != sj1;
goto L0;
L8:;
sj0=l5;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l4;
sj0=i64_load32_u(&i->m0,(U64)si0+36U);
sj1=l5;
sj0=REM_U(sj0,sj1);
sj1=0ULL;
si0=sj0 != sj1;
goto L0;
L9:;
si0=1096960U;
si1=57U;
si2=1096936U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L10;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1+36U);
si0=sj0 >= sj1;
goto L0;
L10:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si1=188U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si1=1U;
si0>>=(si1&31);
l2=si0;
goto L1;
L3:;
sj0=l12;
sj1=l12;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l9=si0;
goto L2;
}
L1:;
si0=l2;
L0:;
return si0;
}

void f650(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l14=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l6=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L6;
}
si0=4U;
l8=si0;
si0=0U;
l9=si0;
goto L5;
L6:;
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=l9;
if(si0){
goto L8;
}
si0=l10;
l8=si0;
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
l8=si0;
goto L7;
L9:;
si0=l9;
si0=f15269(i,si0);
l8=si0;
L7:;
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l8;
si1=l2;
si2=l9;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L11;
}
goto L10;
L11:;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L13;
}
si0=4U;
l6=si0;
si0=0U;
l8=si0;
goto L12;
L13:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l8=si0;
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
l11=si0;
si0=l8;
if(si0){
goto L15;
}
si0=l11;
l6=si0;
goto L14;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l11;
si1=l8;
si0=f15277(i,si0,si1);
l6=si0;
goto L14;
L16:;
si0=l8;
si0=f15269(i,si0);
l6=si0;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
L12:;
si0=l6;
si1=l2;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l9;
sj0=(U64)(si0);
l12=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
if(si0){
goto L18;
}
si0=0U;
l9=si0;
goto L17;
L18:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L20;
}
si0=4U;
l9=si0;
si0=0U;
l2=si0;
goto L19;
L20:;
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l8;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=l2;
if(si0){
goto L22;
}
si0=l13;
l9=si0;
goto L21;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L23;
}
si0=l13;
si1=l2;
si0=f15277(i,si0,si1);
l9=si0;
goto L21;
L23:;
si0=l2;
si0=f15269(i,si0);
l9=si0;
L21:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
L19:;
si0=l9;
si1=l11;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l8;
sj0=(U64)(si0);
l14=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
L17:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=40U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+45U);
i32_store8(&i->m0,(U64)si0+45U,si1);
si0=l0;
si1=24U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=12U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=l10;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l11;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l13;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f651(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=1097156U;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=1097196U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
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
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f652(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=1097208U;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=1097196U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
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
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f653(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f654(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
f15271(i,si0);
L3:;
si0=l1;
f15271(i,si0);
L1:;
L0:;
}

U32 f655(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=0U;
l2=si0;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
{
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l4=si0;
si0=l3;
si1=31U;
si0&=si1;
l5=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l3=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L3;
L5:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
si0=l0;
si1=3U;
si0+=si1;
l0=si0;
goto L3;
L6:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l0;
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
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
L3:;
si0=l3;
si1=127U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
si0=l3;
si1=159U;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l3;
si1=13U;
si0>>=(si1&31);
si1=2924540U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0<<=(si1&31);
si1=l3;
si2=6U;
si1>>=(si2&31);
si2=127U;
si1&=si2;
si0|=si1;
l4=si0;
si1=2431U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=2924796U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0<<=(si1&31);
si1=l3;
si2=2U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
l4=si0;
si1=3888U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=1U;
si1=l4;
si2=2927228U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l3;
si3=1U;
si2<<=(si3&31);
si3=6U;
si2&=si3;
si1>>=(si2&31);
si2=3U;
si1&=si2;
l3=si1;
si2=l3;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
goto L7;
L10:;
si0=l3;
si1=31U;
si0=si0 > si1;
l4=si0;
goto L7;
L9:;
si0=l4;
si1=2432U;
si2=1097124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=3888U;
si2=1097140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si1=l2;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l2;
L0:;
return si0;
}

void f656(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1U;
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si1+=si2;
l5=si1;
si0=f655(i,si0,si1);
l9=si0;
si0=l7;
si1=l5;
si0=f655(i,si0,si1);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si0+=si1;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
si1=255U;
si0&=si1;
l15=si0;
si0=0U;
l16=si0;
si0=0U;
l17=si0;
si0=0U;
l18=si0;
si0=0U;
l19=si0;
si0=l2;
l20=si0;
si0=0U;
l21=si0;
si0=0U;
l22=si0;
L5:;
{
si0=l20;
si1=l6;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
l20=si0;
goto L9;
L10:;
si0=l9;
l23=si0;
si0=l18;
l24=si0;
si0=l18;
l25=si0;
L12:;
{
si0=l22;
l18=si0;
si0=l20;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l20;
si1=1U;
si0+=si1;
l26=si0;
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
goto L14;
L15:;
si0=l20;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l26=si0;
si0=l5;
si1=31U;
si0&=si1;
l27=si0;
si0=l5;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l27;
si1=6U;
si0<<=(si1&31);
si1=l26;
si0|=si1;
l5=si0;
si0=l20;
si1=2U;
si0+=si1;
l26=si0;
goto L14;
L16:;
si0=l26;
si1=6U;
si0<<=(si1&31);
si1=l20;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l28=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l28;
si1=l27;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
si0=l20;
si1=3U;
si0+=si1;
l26=si0;
goto L14;
L17:;
si0=l20;
si1=4U;
si0+=si1;
l26=si0;
si0=l28;
si1=6U;
si0<<=(si1&31);
si1=l20;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l27;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l5=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l18;
l22=si0;
si0=l26;
l20=si0;
goto L11;
L18:;
si0=l18;
si1=4U;
si0+=si1;
l22=si0;
goto L13;
L14:;
si0=l18;
si1=l20;
si0-=si1;
si1=l26;
si0+=si1;
l22=si0;
L13:;
si0=l26;
l20=si0;
si0=l5;
si1=127U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l5;
si1=159U;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l5;
si1=13U;
si0>>=(si1&31);
si1=2924540U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0<<=(si1&31);
si1=l5;
si2=6U;
si1>>=(si2&31);
si2=127U;
si1&=si2;
si0|=si1;
l26=si0;
si1=2431U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l26;
si1=2924796U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0<<=(si1&31);
si1=l5;
si2=2U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
l26=si0;
si1=3888U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l26;
si1=3888U;
si2=1097140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=1U;
si1=l26;
si2=2927228U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l5;
si3=1U;
si2<<=(si3&31);
si3=6U;
si2&=si3;
si1>>=(si2&31);
si2=3U;
si1&=si2;
l26=si1;
si2=l26;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l29=si0;
si0=2U;
l26=si0;
si0=l5;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=3U;
si1=4U;
si2=l5;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l26=si0;
goto L26;
L30:;
si0=1U;
l26=si0;
si0=1U;
l29=si0;
si0=l5;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L27;
}
goto L26;
L29:;
si0=0U;
l29=si0;
si0=2U;
l26=si0;
si0=l5;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L24;
L28:;
si0=l26;
si1=2432U;
si2=1097124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l5;
si1=10U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=0U;
l29=si0;
si0=1U;
l26=si0;
goto L26;
L32:;
si0=1U;
l19=si0;
si0=0U;
l21=si0;
si0=l18;
si1=1U;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l23;
l10=si0;
si0=l18;
l24=si0;
si0=l18;
l25=si0;
si0=0U;
l29=si0;
goto L19;
L26:;
si0=l5;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l5;
si1=32U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
l27=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L35;
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
goto L33;
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
goto L34;
default:
goto L36;
}
L36:;
si0=l27;
if(si0){
goto L24;
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
goto L24;
}
si0=l5;
si1=160U;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L24;
L35:;
si0=l5;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L24;
L34:;
si0=l5;
si1=12288U;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L20;
L33:;
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
goto L24;
}
si0=l5;
si1=160U;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L24;
L25:;
si0=l17;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l18;
si1=l17;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l17;
si1=l3;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l17;
si1=l3;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L21;
L37:;
si0=l2;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
goto L22;
L24:;
si0=0U;
l21=si0;
si0=l29;
si1=l23;
si0+=si1;
l30=si0;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l3;
l28=si0;
si0=l25;
si1=l19;
si0+=si1;
l31=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l31;
si1=l3;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l3;
si1=l31;
si0=si0 == si1;
if(si0){
goto L40;
}
goto L38;
L41:;
si0=l2;
si1=l31;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L38;
}
L40:;
si0=l3;
si1=l31;
si0-=si1;
l28=si0;
L39:;
si0=l2;
si1=l31;
si0+=si1;
l32=si0;
si0=l28;
if(si0){
goto L43;
}
si0=0U;
l28=si0;
goto L42;
L43:;
si0=l32;
si1=l28;
si0+=si1;
l9=si0;
si0=0U;
l27=si0;
si0=l32;
l5=si0;
L44:;
{
si0=l5;
l21=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l26=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L46;
}
si0=l21;
si1=1U;
si0+=si1;
l5=si0;
si0=l26;
si1=255U;
si0&=si1;
l26=si0;
goto L45;
L46:;
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l26;
si1=31U;
si0&=si1;
l33=si0;
si0=l26;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l33;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l26=si0;
si0=l21;
si1=2U;
si0+=si1;
l5=si0;
goto L45;
L47:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l21;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l26;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l5;
si1=l33;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l26=si0;
si0=l21;
si1=3U;
si0+=si1;
l5=si0;
goto L45;
L48:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l21;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l33;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l26=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l21;
si1=4U;
si0+=si1;
l5=si0;
L45:;
si0=l26;
si1=-9U;
si0+=si1;
l33=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=1U;
si1=l33;
si0<<=(si1&31);
si1=8388639U;
si0&=si1;
if(si0){
goto L50;
}
L51:;
si0=l26;
si1=128U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l26;
si1=8U;
si0>>=(si1&31);
l33=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L52;
case 1:
goto L49;
case 2:
goto L49;
case 3:
goto L49;
case 4:
goto L49;
case 5:
goto L49;
case 6:
goto L49;
case 7:
goto L49;
case 8:
goto L49;
case 9:
goto L49;
case 10:
goto L54;
case 11:
goto L49;
case 12:
goto L49;
case 13:
goto L49;
case 14:
goto L49;
case 15:
goto L49;
case 16:
goto L49;
case 17:
goto L49;
case 18:
goto L49;
case 19:
goto L49;
case 20:
goto L49;
case 21:
goto L49;
case 22:
goto L49;
case 23:
goto L49;
case 24:
goto L49;
case 25:
goto L49;
case 26:
goto L55;
default:
goto L53;
}
L55:;
si0=l26;
si1=12288U;
si0=si0 != si1;
if(si0){
goto L49;
}
goto L50;
L54:;
si0=l26;
si1=160U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l26;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L49;
}
goto L50;
L53:;
si0=l33;
if(si0){
goto L49;
}
si0=l26;
si1=160U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l26;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L50;
}
goto L49;
L52:;
si0=l26;
si1=5760U;
si0=si0 != si1;
if(si0){
goto L49;
}
L50:;
si0=l27;
if(si0){
goto L56;
}
si0=0U;
l28=si0;
goto L42;
L56:;
si0=l27;
si1=l28;
si0=si0 < si1;
if(si0){
goto L58;
}
si0=l27;
si1=l28;
si0=si0 == si1;
if(si0){
goto L42;
}
goto L57;
L58:;
si0=l32;
si1=l27;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L57;
}
si0=l27;
l28=si0;
goto L42;
L57:;
si0=l32;
si1=l28;
si2=0U;
si3=l27;
si4=1097364U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L49:;
si0=l27;
si1=l21;
si0-=si1;
si1=l5;
si0+=si1;
l27=si0;
si0=l5;
si1=l9;
si0=si0 != si1;
if(si0){
goto L44;
}
}
L42:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l32;
si3=l28;
f15099(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l34=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l35=si1;
si2=24U;
si1*=si2;
si0+=si1;
l9=si0;
L60:;
{
si0=l34;
si1=l9;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=0U;
l36=si0;
si0=1097232U;
l37=si0;
goto L59;
L61:;
si0=l9;
si1=-24U;
si0+=si1;
l9=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l36=si0;
si0=l9;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l37=si0;
si0=0U;
l28=si0;
si0=0U;
l27=si0;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l38=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l38;
si0+=si1;
l33=si0;
si0=0U;
l27=si0;
L63:;
{
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
l26=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L65;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l26;
si1=255U;
si0&=si1;
l26=si0;
goto L64;
L65:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l21=si0;
si0=l26;
si1=31U;
si0&=si1;
l32=si0;
si0=l26;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=l32;
si1=6U;
si0<<=(si1&31);
si1=l21;
si0|=si1;
l26=si0;
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
goto L64;
L66:;
si0=l21;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l21=si0;
si0=l26;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l21;
si1=l32;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l26=si0;
si0=l5;
si1=3U;
si0+=si1;
l5=si0;
goto L64;
L67:;
si0=l21;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l32;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l26=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
L64:;
si0=l26;
si1=127U;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=0U;
l21=si0;
si0=l26;
si1=159U;
si0=si0 <= si1;
if(si0){
goto L68;
}
si0=l26;
si1=13U;
si0>>=(si1&31);
si1=2924540U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0<<=(si1&31);
si1=l26;
si2=6U;
si1>>=(si2&31);
si2=127U;
si1&=si2;
si0|=si1;
l21=si0;
si1=2431U;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l21;
si1=2924796U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0<<=(si1&31);
si1=l26;
si2=2U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
l21=si0;
si1=3888U;
si0=si0 >= si1;
if(si0){
goto L69;
}
si0=1U;
si1=l21;
si2=2927228U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l26;
si3=1U;
si2<<=(si3&31);
si3=6U;
si2&=si3;
si1>>=(si2&31);
si2=3U;
si1&=si2;
l26=si1;
si2=l26;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l21=si0;
goto L68;
L71:;
si0=l26;
si1=31U;
si0=si0 > si1;
l21=si0;
goto L68;
L70:;
si0=l21;
si1=2432U;
si2=1097124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l21;
si1=3888U;
si2=1097140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l21;
si1=l27;
si0+=si1;
l27=si0;
si0=l5;
si1=l33;
si0=si0 != si1;
if(si0){
goto L63;
}
}
L62:;
si0=l36;
si0=!(si0);
if(si0){
goto L72;
}
si0=l37;
si1=l36;
si0+=si1;
l33=si0;
si0=0U;
l28=si0;
si0=l37;
l5=si0;
L73:;
{
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
l26=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L75;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l26;
si1=255U;
si0&=si1;
l26=si0;
goto L74;
L75:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l21=si0;
si0=l26;
si1=31U;
si0&=si1;
l32=si0;
si0=l26;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L76;
}
si0=l32;
si1=6U;
si0<<=(si1&31);
si1=l21;
si0|=si1;
l26=si0;
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
goto L74;
L76:;
si0=l21;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l21=si0;
si0=l26;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L77;
}
si0=l21;
si1=l32;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l26=si0;
si0=l5;
si1=3U;
si0+=si1;
l5=si0;
goto L74;
L77:;
si0=l21;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l32;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l26=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
L74:;
si0=l26;
si1=127U;
si0=si0 < si1;
if(si0){
goto L81;
}
si0=0U;
l21=si0;
si0=l26;
si1=159U;
si0=si0 <= si1;
if(si0){
goto L78;
}
si0=l26;
si1=13U;
si0>>=(si1&31);
si1=2924540U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0<<=(si1&31);
si1=l26;
si2=6U;
si1>>=(si2&31);
si2=127U;
si1&=si2;
si0|=si1;
l21=si0;
si1=2431U;
si0=si0 > si1;
if(si0){
goto L80;
}
si0=l21;
si1=2924796U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0<<=(si1&31);
si1=l26;
si2=2U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
l21=si0;
si1=3888U;
si0=si0 >= si1;
if(si0){
goto L79;
}
si0=1U;
si1=l21;
si2=2927228U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l26;
si3=1U;
si2<<=(si3&31);
si3=6U;
si2&=si3;
si1>>=(si2&31);
si2=3U;
si1&=si2;
l26=si1;
si2=l26;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l21=si0;
goto L78;
L81:;
si0=l26;
si1=31U;
si0=si0 > si1;
l21=si0;
goto L78;
L80:;
si0=l21;
si1=2432U;
si2=1097124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l21;
si1=3888U;
si2=1097140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l21;
si1=l28;
si0+=si1;
l28=si0;
si0=l5;
si1=l33;
si0=si0 != si1;
if(si0){
goto L73;
}
}
L72:;
si0=l27;
si1=l10;
si0+=si1;
si1=l28;
si0+=si1;
si1=l14;
si0=si0 > si1;
if(si0){
goto L60;
}
}
si0=0U;
l19=si0;
si0=l38;
si1=l31;
si0+=si1;
l24=si0;
l25=si0;
L59:;
si0=l17;
si1=l25;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=0U;
l19=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L83;
}
si0=l23;
l10=si0;
si0=l18;
l24=si0;
si0=l18;
l25=si0;
goto L82;
L83:;
si0=l35;
si0=!(si0);
if(si0){
goto L84;
}
si0=l23;
l10=si0;
si0=l34;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l17;
si0+=si1;
l24=si0;
l25=si0;
goto L82;
L84:;
si0=0U;
si1=0U;
si2=1097380U;
f663(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=l25;
si1=l17;
si0=si0 > si1;
if(si0){
goto L85;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L86;
}
si0=l34;
f15271(i,si0);
L86:;
si0=0U;
l21=si0;
goto L19;
L85:;
si0=l17;
if(si0){
goto L89;
}
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L88;
L89:;
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l17;
si1=l3;
si0=si0 < si1;
if(si0){
goto L90;
}
si0=l17;
si1=l3;
si0=si0 == si1;
if(si0){
goto L88;
}
goto L87;
L90:;
si0=l2;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L87;
}
L88:;
si0=l25;
si1=l3;
si0=si0 < si1;
if(si0){
goto L92;
}
si0=l25;
si1=l3;
si0=si0 != si1;
if(si0){
goto L87;
}
goto L91;
L92:;
si0=l2;
si1=l25;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L87;
}
L91:;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=l17;
si1+=si2;
si2=l25;
si3=l17;
si2-=si3;
f59(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
si1=l37;
si2=l36;
f59(i,si0,si1,si2);
si0=l30;
si1=l10;
si0-=si1;
l5=si0;
si0=l11;
si1=l13;
si0=f655(i,si0,si1);
l21=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l28=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l26=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L93;
}
si0=l34;
f15271(i,si0);
L93:;
si0=l5;
si1=l21;
si0+=si1;
l9=si0;
si0=l25;
si1=l19;
si0+=si1;
l17=si0;
si0=1U;
l33=si0;
si0=0U;
l21=si0;
si0=l24;
l18=si0;
goto L8;
L87:;
si0=l2;
si1=l3;
si2=l17;
si3=l25;
si4=1097396U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L38:;
si0=l2;
si1=l3;
si2=l31;
si3=l3;
si4=1097348U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
L22:;
si0=l18;
si0=!(si0);
if(si0){
goto L94;
}
si0=l18;
si1=l3;
si0=si0 < si1;
if(si0){
goto L95;
}
si0=l18;
si1=l3;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L94;
L95:;
si0=l2;
si1=l18;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
L94:;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=l17;
si1+=si2;
si2=l18;
si3=l17;
si2-=si3;
f59(i,si0,si1,si2);
si0=l11;
si1=l13;
si0=f655(i,si0,si1);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l28=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l26=si0;
si0=1U;
l19=si0;
si0=0U;
l21=si0;
si0=l23;
l10=si0;
si0=l5;
l17=si0;
si0=1U;
l33=si0;
goto L8;
L21:;
si0=l2;
si1=l3;
si2=l17;
si3=l18;
si4=1097332U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L20:;
si0=l25;
si1=l18;
si2=l21;
si3=255U;
si2&=si3;
l5=si2;
si0=si2?si0:si1;
l25=si0;
si0=l24;
si1=l18;
si2=l5;
si0=si2?si0:si1;
l24=si0;
si0=l23;
si1=l29;
si0+=si1;
l10=si0;
si0=l26;
si1=l19;
si2=0U;
si3=l5;
si1=si3?si1:si2;
si0+=si1;
l19=si0;
si0=1U;
l21=si0;
L19:;
si0=l29;
si1=l23;
si0+=si1;
l23=si0;
si0=l20;
si1=l6;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l6;
l20=si0;
L11:;
si0=l23;
l9=si0;
si0=l24;
l18=si0;
L9:;
si0=l17;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l17;
if(si0){
goto L97;
}
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
l5=si0;
goto L96;
L97:;
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l3;
si1=l17;
si0-=si1;
l5=si0;
L96:;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=l17;
si1+=si2;
si2=l5;
f59(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l28=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l26=si0;
si0=0U;
l33=si0;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L98;
}
si0=l4;
si1=l5;
f573(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L98:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L6;
L7:;
si0=l2;
si1=l3;
si2=l17;
si3=l3;
si4=1097412U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l26;
si1=l28;
si2=l26;
si0=si2?si0:si1;
l32=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=l27;
si0=si0 >= si1;
if(si0){
goto L99;
}
si0=l4;
si1=l5;
si2=l27;
f580(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L99:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l32;
si2=l27;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l27;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l26;
si0=!(si0);
if(si0){
goto L100;
}
si0=l28;
si0=!(si0);
if(si0){
goto L100;
}
si0=l26;
f15271(i,si0);
L100:;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l33;
if(si0){
goto L5;
}
goto L1;
}
L3:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f657(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
L1:;
{
goto L1;
}
L0:;
return si0;
}

void f658(rustpythonInstance*i,U32 l0) {
L0:;
}

void f659(rustpythonInstance*i,U32 l0) {
L0:;
}

U64 f660(rustpythonInstance*i,U32 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
sj0=0ULL;
l1=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
sj0=-1ULL;
l1=sj0;
si0=l3;
si1=18U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L3;
}
sj0=0ULL;
l1=sj0;
goto L2;
L3:;
si0=l3;
si1=1U;
si0&=si1;
l4=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
sj0=0ULL;
l1=sj0;
goto L4;
L5:;
si0=l3;
si1=-2U;
si0&=si1;
l6=si0;
si0=0U;
l7=si0;
sj0=0ULL;
l1=sj0;
L6:;
{
sj0=l1;
sj1=10ULL;
sj0*=sj1;
l1=sj0;
si0=l7;
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L7;
}
sj0=l1;
si1=l0;
si2=l5;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l1=sj0;
L7:;
sj0=l1;
sj1=10ULL;
sj0*=sj1;
l1=sj0;
si0=l5;
si1=1U;
si0+=si1;
l7=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L8;
}
sj0=l1;
si1=l0;
si2=l5;
si1+=si2;
si2=9U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l1=sj0;
L8:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
sj0=l1;
sj1=10ULL;
sj0*=sj1;
l1=sj0;
si0=l5;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L9;
}
sj0=l1;
si1=l0;
si2=l5;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l1=sj0;
L9:;
si0=l3;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l3;
si0+=si1;
l7=si0;
si1=8U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=1U;
si0+=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+776U);
if(si0){
goto L10;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=7U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
goto L1;
L11:;
si0=l5;
si1=5U;
si0=si0 < si1;
if(si0){
goto L1;
}
L10:;
sj0=l1;
sj1=1ULL;
sj0+=sj1;
l1=sj0;
L1:;
sj0=l1;
L0:;
return sj0;
}

void f661(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=63U;
si0&=si1;
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=1097564U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l5=si0;
si1=2047U;
si0&=si1;
l1=si0;
si1=1309U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l5;
si1=11U;
si0>>=(si1&31);
l5=si0;
si0=1308U;
si1=l1;
si0-=si1;
l6=si0;
si0=l1;
si1=1097694U;
si0+=si1;
l7=si0;
si0=l4;
si1=1097566U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=2047U;
si0&=si1;
si1=l1;
si0-=si1;
l8=si0;
si1=-1U;
si0+=si1;
l9=si0;
si0=0U;
l1=si0;
L6:;
{
si0=l8;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=768U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si0+=si1;
l10=si0;
si1=8U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=1U;
si0+=si1;
si1=1099002U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l4=si0;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
si0=l4;
si1=l10;
si2=9U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l11=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
}
si0=l5;
si1=l11;
si2=l4;
si3=255U;
si2&=si3;
si1=si1 < si2;
si0-=si1;
l5=si0;
goto L2;
L5:;
si0=l1;
si1=1308U;
si2=1099004U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
goto L2;
L3:;
si0=768U;
si1=768U;
si2=1099020U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=7U;
si0+=si1;
l7=si0;
si1=l5;
si0+=si1;
l4=si0;
si0=l3;
sj0=(U64)(si0);
l12=sj0;
sj0=0ULL;
l13=sj0;
L8:;
{
si0=l2;
l1=si0;
si1=769U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l7;
si1=l1;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=l12;
sj0<<=(sj1&63);
sj1=l13;
sj0+=sj1;
l14=sj0;
sj1=l14;
sj2=10ULL;
sj1=DIV_U(sj1,sj2);
l13=sj1;
sj2=-10ULL;
sj1*=sj2;
sj0+=sj1;
l15=sj0;
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si1=l5;
si0+=si1;
si1=768U;
si0=si0 < si1;
if(si0){
goto L10;
}
sj0=l15;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+776U,si1);
goto L9;
L11:;
si0=l1;
si1=-1U;
si0+=si1;
si1=768U;
si2=1097484U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=l1;
si0+=si1;
sj1=l15;
i64_store8(&i->m0,(U64)si0,sj1);
L9:;
si0=l2;
if(si0){
goto L8;
}
}
sj0=l14;
sj1=10ULL;
si0=sj0 < sj1;
if(si0){
goto L12;
}
si0=l5;
si1=7U;
si0+=si1;
l1=si0;
L13:;
{
sj0=l13;
l14=sj0;
sj1=l14;
sj2=10ULL;
sj1=DIV_U(sj1,sj2);
l13=sj1;
sj2=-10ULL;
sj1*=sj2;
sj0+=sj1;
l15=sj0;
si0=l1;
si1=-8U;
si0+=si1;
si1=768U;
si0=si0 < si1;
if(si0){
goto L15;
}
sj0=l15;
si0=!(sj0);
if(si0){
goto L14;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+776U,si1);
goto L14;
L15:;
si0=l0;
si1=l1;
si0+=si1;
sj1=l15;
i64_store8(&i->m0,(U64)si0,sj1);
L14:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
sj0=l14;
sj1=10ULL;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si1+=si2;
l1=si1;
si2=768U;
si3=l1;
si4=768U;
si3=si3 < si4;
si1=si3?si1:si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=7U;
si0+=si1;
l1=si0;
L16:;
{
si0=l0;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=-8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=7U;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L1:;
L0:;
}

void f662(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
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
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1104328U;
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f663(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1103228U;
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

void f664(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0+=si1;
l3=si0;
si0=l1;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l4=sj0;
si0=0U;
l1=si0;
sj0=0ULL;
l5=sj0;
L5:;
{
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=768U;
si0=si0 == si1;
if(si0){
goto L6;
}
sj0=l5;
sj1=10ULL;
sj0*=sj1;
si1=l0;
si2=l1;
si1+=si2;
l6=si1;
si2=8U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=10ULL;
sj0*=sj1;
si1=l6;
si2=9U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L5;
}
goto L2;
L6:;
}
si0=768U;
si1=768U;
si2=1097500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L2;
L3:;
sj0=l5;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l5;
sj1=l4;
sj0>>=(sj1&63);
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l2;
l1=si0;
goto L2;
L7:;
si0=l2;
l1=si0;
L8:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=10ULL;
sj0*=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L8;
}
}
L2:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si1-=si2;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=-2047U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+776U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L9:;
sj0=-1ULL;
sj1=l4;
sj0<<=(sj1&63);
sj1=-1ULL;
sj0^=sj1;
l7=sj0;
si0=l2;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=0U;
si1=l2;
si0-=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=l1;
si0-=si1;
l6=si0;
si0=l1;
si1=768U;
si2=l1;
si3=768U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-768U;
si0+=si1;
l2=si0;
si0=8U;
l1=si0;
L15:;
{
si0=l2;
si1=l1;
si0+=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
si1=l3;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l9=sj0;
si0=l0;
si1=l1;
si0+=si1;
sj1=l5;
sj2=l4;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l5;
sj2=l7;
sj1&=sj2;
sj2=10ULL;
sj1*=sj2;
sj0+=sj1;
l5=sj0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l8;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0+=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L15;
}
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L13;
}
goto L11;
L14:;
si0=0U;
l6=si0;
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
goto L10;
L12:;
si0=l3;
si1=-8U;
si0+=si1;
si1=768U;
si2=1097516U;
f663(i,si0,si1,si2);
UNREACHABLE;
L11:;
L16:;
{
sj0=l5;
l9=sj0;
sj1=l7;
sj0&=sj1;
sj1=10ULL;
sj0*=sj1;
l5=sj0;
sj0=l9;
sj1=l4;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si0=l6;
si1=768U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+776U,si1);
goto L17;
L18:;
si0=l0;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
L17:;
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
}
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L10:;
si0=l6;
si1=768U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l6;
si1=7U;
si0+=si1;
l1=si0;
L20:;
{
si0=l0;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=-8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L20;
}
L19:;
si0=l6;
si1=-1U;
si0+=si1;
si1=768U;
si2=1097468U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f665(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=784U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
si2=777U;
si0=f15392(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=l2;
si0+=si1;
l6=si0;
L16:;
{
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si1=l4;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=48U;
si0=si0 == si1;
if(si0){
goto L16;
}
}
si0=l2;
si1=l4;
si0-=si1;
l8=si0;
si0=l7;
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l1;
si1=l4;
si0+=si1;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l4=si0;
L19:;
{
si0=l4;
si1=767U;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l5;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L20:;
si0=l10;
si1=l11;
si0+=si1;
l7=si0;
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l11;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L18;
}
goto L19;
L21:;
}
si0=0U;
l11=si0;
goto L5;
L18:;
si0=l10;
si1=l11;
si0+=si1;
l7=si0;
si0=l12;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=l11;
si0-=si1;
l11=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
goto L5;
L17:;
si0=l1;
si1=l4;
si0+=si1;
l4=si0;
si0=l7;
si1=46U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
l7=si0;
goto L13;
L15:;
si0=0U;
l2=si0;
goto L2;
L14:;
si0=l11;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l8=si0;
l11=si0;
si0=l4;
if(si0){
goto L12;
}
L13:;
si0=0U;
l4=si0;
si0=0U;
l3=si0;
L22:;
{
si0=l8;
si1=l3;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
l11=si0;
si0=l6;
l7=si0;
goto L6;
L23:;
si0=l7;
si1=l3;
si0+=si1;
l11=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=48U;
si0=si0 == si1;
if(si0){
goto L22;
}
}
si0=l7;
si1=l3;
si0+=si1;
si1=-1U;
si0+=si1;
l7=si0;
si0=l8;
si1=l3;
si0-=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l4=si0;
L12:;
si0=l11;
si1=8U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si1=8U;
si0+=si1;
si1=767U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=8U;
si0+=si1;
l9=si0;
L24:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
sj1=5063812098665367110ULL;
sj0+=sj1;
sj1=l13;
sj2=-3472328296227680304ULL;
sj1+=sj2;
l13=sj1;
sj0|=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l4;
si1=769U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l9;
si1=l4;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l3;
si1=16U;
si0+=si1;
si1=768U;
si0=si0 < si1;
if(si0){
goto L24;
}
goto L9;
}
L11:;
si0=l4;
si1=-1U;
si0+=si1;
l7=si0;
si0=l8;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l2=si0;
goto L4;
L10:;
si0=l4;
si1=768U;
si2=1097532U;
f662(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l11;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
L25:;
{
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l3=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l4;
si1=767U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l5;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L26:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L25;
}
}
L7:;
si0=0U;
l11=si0;
L6:;
si0=l5;
si1=l11;
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L5:;
si0=l4;
if(si0){
goto L28;
}
si0=0U;
l2=si0;
goto L27;
L28:;
si0=l2;
si1=l11;
si0-=si1;
l3=si0;
si0=l2;
si1=l11;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=0U;
l8=si0;
si0=l11;
si1=l2;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si0=0U;
l8=si0;
L31:;
{
si0=l2;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L32;
case 1:
goto L30;
case 2:
goto L33;
default:
goto L30;
}
L33:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
L32:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l4;
si2=l8;
si1-=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=768U;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l5;
si1=768U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+776U,si1);
si0=768U;
l2=si0;
goto L27;
L29:;
si0=l3;
si1=l2;
si2=1097548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=1U;
si0+=si1;
l4=si0;
L4:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l11;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L35;
}
si0=0U;
l4=si0;
goto L34;
L35:;
si0=0U;
l7=si0;
si0=l3;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
si2=45U;
si1=si1 == si2;
l9=si1;
si2=l1;
si3=43U;
si2=si2 == si3;
si1|=si2;
l11=si1;
si0-=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l4;
si1=1U;
si0+=si1;
si1=l4;
si2=l11;
si0=si2?si0:si1;
l3=si0;
si0=0U;
l7=si0;
si0=0U;
l4=si0;
L37:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l11=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l4;
si1=10U;
si0*=si1;
si1=l11;
si0+=si1;
l11=si0;
si1=l4;
si2=l4;
si3=65536U;
si2=(U32)((I32)si2<(I32)si3);
l8=si2;
si0=si2?si0:si1;
l4=si0;
si0=l11;
si1=l7;
si2=l8;
si0=si2?si0:si1;
l7=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L37;
}
}
L36:;
si0=0U;
si1=l7;
si0-=si1;
si1=l7;
si2=l9;
si0=si2?si0:si1;
l4=si0;
L34:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l2;
si1=18U;
si0=si0 > si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
si2=19U;
si3=l2;
si2-=si3;
si0=f15392(i,si0,si1,si2);
L1:;
si0=l0;
si1=l5;
si2=780U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=784U;
si0+=si1;
i->g0=si0;
L0:;
}

void f666(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
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
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1104360U;
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f667(rustpythonInstance*i,U32 l0,U64 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=0ULL;
l4=sj0;
si0=0U;
l5=si0;
sj0=l1;
sj1=-342ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L1;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
si0=2047U;
l5=si0;
sj0=l1;
sj1=308ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L1;
}
sj0=0ULL;
l4=sj0;
si0=l3;
si1=16U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
l6=si1;
si2=342U;
si1+=si2;
si2=4U;
si1<<=(si2&31);
l7=si1;
si2=1107648U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l2;
sj4=l2;
sj4=I64_CLZ(sj4);
l8=sj4;
sj3<<=(sj4&63);
l9=sj3;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
sj1=511ULL;
sj0&=sj1;
sj1=511ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l3;
si1=l7;
si2=1107656U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l2;
sj0+=sj1;
l2=sj0;
L2:;
sj0=l1;
sj1=-56ULL;
sj0+=sj1;
sj1=-84ULL;
si0=sj0 > sj1;
if(si0){
goto L3;
}
sj0=l10;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=-1U;
l5=si0;
goto L1;
L3:;
sj0=l2;
sj1=l2;
sj2=63ULL;
sj1>>=(sj2&63);
l11=sj1;
sj2=9ULL;
sj1+=sj2;
l12=sj1;
sj0>>=(sj1&63);
l9=sj0;
si0=l6;
si1=217706U;
si0*=si1;
si1=16U;
si0=(U32)((I32)si0>>(si1&31));
sj1=l8;
si1=(U32)(sj1);
si0-=si1;
sj1=l11;
si1=(U32)(sj1);
si0+=si1;
si1=63U;
si0+=si1;
l6=si0;
si1=-1022U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=1024U;
si1=1023U;
sj2=l9;
sj3=72057594037927934ULL;
sj2&=sj3;
sj3=l9;
sj4=l9;
sj5=l12;
sj4<<=(sj5&63);
sj5=l2;
si4=sj4 == sj5;
si5=1U;
si4&=si5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l9;
sj5=3ULL;
sj4&=sj5;
sj5=1ULL;
si4=sj4 == sj5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l10;
sj5=2ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l1;
sj5=4ULL;
sj4+=sj5;
sj5=28ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
l1=sj2;
sj3=1ULL;
sj2&=sj3;
sj3=l1;
sj2+=sj3;
l1=sj2;
sj3=18014398509481983ULL;
si2=sj2 > sj3;
l7=si2;
si0=si2?si0:si1;
si1=l6;
si0+=si1;
l6=si0;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=0ULL;
sj1=l1;
sj2=1ULL;
sj1>>=(sj2&63);
sj2=67553994410557439ULL;
sj1&=sj2;
si2=l7;
sj0=si2?sj0:sj1;
l4=sj0;
si0=l6;
l5=si0;
goto L1;
L4:;
si0=0U;
l5=si0;
si0=l6;
si1=-1085U;
si0=si0 < si1;
if(si0){
goto L1;
}
sj0=l9;
si1=2U;
si2=l6;
si1-=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l1=sj0;
sj1=1ULL;
sj0&=sj1;
sj1=l1;
sj0+=sj1;
l1=sj0;
sj1=9007199254740991ULL;
si0=sj0 > sj1;
l5=si0;
sj0=l1;
sj1=1ULL;
sj0>>=(sj1&63);
l4=sj0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f668(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
sj0=0ULL;
l3=sj0;
si0=l2;
l4=si0;
si0=l1;
l5=si0;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
l5=si0;
si0=l2;
l4=si0;
sj0=0ULL;
l3=sj0;
L8:;
{
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=5063812098665367110ULL;
sj0+=sj1;
sj1=l6;
sj2=-3472328296227680304ULL;
sj1+=sj2;
l6=sj1;
sj0|=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l6=sj0;
sj1=16ULL;
sj0>>=(sj1&63);
sj1=1095216660735ULL;
sj0&=sj1;
sj1=42949672960001ULL;
sj0*=sj1;
sj1=l6;
sj2=1095216660735ULL;
sj1&=sj2;
sj2=4294967296000100ULL;
sj1*=sj2;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l3;
sj2=100000000ULL;
sj1*=sj2;
sj0+=sj1;
l3=sj0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L8;
}
}
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=0U;
l7=si0;
L9:;
{
si0=l5;
si1=l7;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L4;
}
sj0=l3;
sj1=10ULL;
sj0*=sj1;
si1=l10;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l3=sj0;
si0=l4;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
sj0=0ULL;
l6=sj0;
si0=0U;
l11=si0;
si0=l2;
l10=si0;
si0=0U;
l9=si0;
sj0=0ULL;
l12=sj0;
goto L3;
L4:;
si0=l4;
si1=l7;
si0-=si1;
l11=si0;
si0=l9;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=0U;
l10=si0;
sj0=0ULL;
l12=sj0;
si0=l11;
l5=si0;
goto L10;
L11:;
si0=l5;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=l11;
si1=-1U;
si0+=si1;
l5=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L15;
}
L16:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=5063812098665367110ULL;
sj0+=sj1;
sj1=l6;
sj2=-3472328296227680304ULL;
sj1+=sj2;
l6=sj1;
sj0|=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l6=sj0;
sj1=16ULL;
sj0>>=(sj1&63);
sj1=1095216660735ULL;
sj0&=sj1;
sj1=42949672960001ULL;
sj0*=sj1;
sj1=l6;
sj2=1095216660735ULL;
sj1&=sj2;
sj2=4294967296000100ULL;
sj1*=sj2;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l3;
sj2=100000000ULL;
sj1*=sj2;
sj0+=sj1;
l3=sj0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L16;
}
}
L15:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l8;
l10=si0;
si1=l5;
si0+=si1;
l8=si0;
L17:;
{
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l10;
l8=si0;
goto L12;
L18:;
sj0=l3;
sj1=10ULL;
sj0*=sj1;
si1=l9;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l3=sj0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L17;
}
}
L13:;
si0=0U;
l5=si0;
L12:;
si0=l7;
si1=-1U;
si0^=si1;
si1=l4;
si2=l5;
si1-=si2;
si0+=si1;
l10=si0;
si0=l5;
si1=l4;
si0-=si1;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
sj0=(U64)(I64)(I32)(si0);
l12=sj0;
L10:;
si0=l10;
si1=l2;
si2=l4;
si1-=si2;
si0+=si1;
si1=l7;
si0+=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L2;
}
sj0=0ULL;
l6=sj0;
si0=l5;
if(si0){
goto L19;
}
si0=0U;
l9=si0;
goto L3;
L19:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=101U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=1U;
l9=si0;
goto L3;
L20:;
si0=l5;
si1=-1U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
l5=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L22;
case 1:
goto L21;
case 2:
goto L22;
default:
goto L21;
}
L22:;
si0=l4;
l5=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
L21:;
si0=l4;
si1=l4;
si2=l7;
si3=l8;
si4=43U;
si3=si3 == si4;
si1=si3?si1:si2;
si2=l8;
si3=45U;
si2=si2 == si3;
si0=si2?si0:si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L2;
}
sj0=0ULL;
l13=sj0;
sj0=0ULL;
l6=sj0;
L24:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L23;
}
sj0=l6;
sj1=10ULL;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l14=sj0;
sj1=l6;
sj2=l6;
sj3=65536ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l7=si2;
sj0=si2?sj0:sj1;
l6=sj0;
sj0=l14;
sj1=l13;
si2=l7;
sj0=si2?sj0:sj1;
l13=sj0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L24;
}
}
si0=0U;
l9=si0;
L23:;
sj0=0ULL;
sj1=l13;
sj0-=sj1;
sj1=l13;
si2=l8;
si3=45U;
si2=si2 == si3;
sj0=si2?sj0:sj1;
l6=sj0;
sj1=l12;
sj0+=sj1;
l12=sj0;
L3:;
si0=0U;
l5=si0;
si0=l10;
si1=20U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
si0=l2;
si0=!(si0);
if(si0){
goto L31;
}
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si0=l10;
si1=-19U;
si0+=si1;
l10=si0;
si0=l1;
l8=si0;
L33:;
{
si0=l4;
l5=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L34;
case 1:
goto L32;
case 2:
goto L34;
default:
goto L32;
}
L34:;
si0=l10;
si1=0U;
si2=l4;
si3=-47U;
si2+=si3;
l8=si2;
si3=l8;
si4=l4;
si3=si3 > si4;
si1=si3?si1:si2;
si0-=si1;
l10=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L32;
}
si0=l5;
si1=1U;
si0+=si1;
si1=l5;
si2=l7;
si0=si2?si0:si1;
l4=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l5;
l8=si0;
si0=l5;
if(si0){
goto L33;
}
}
L32:;
si0=l10;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L26;
}
si0=0U;
si1=l2;
si0-=si1;
l5=si0;
sj0=0ULL;
l3=sj0;
L35:;
{
si0=l5;
l7=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l4=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=10ULL;
sj0*=sj1;
si1=l4;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l3=sj0;
sj1=999999999999999999ULL;
si0=sj0 > sj1;
if(si0){
goto L36;
}
si0=l5;
if(si0){
goto L35;
}
L36:;
}
sj0=l3;
sj1=999999999999999999ULL;
si0=sj0 > sj1;
if(si0){
goto L28;
}
si0=l7;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=0U;
si1=l5;
si0-=si1;
l5=si0;
goto L29;
L31:;
si0=1U;
si1=0U;
si2=1099480U;
f662(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=0U;
si1=l7;
si0-=si1;
l5=si0;
L29:;
si0=l5;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L37;
}
si0=0U;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L37:;
si0=l1;
si1=1U;
si0+=si1;
l7=si0;
si0=l2;
l5=si0;
L38:;
{
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l4=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l5;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L39:;
si0=l5;
si1=-1U;
si0+=si1;
l8=si0;
sj0=l3;
sj1=10ULL;
sj0*=sj1;
si1=l4;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l3=sj0;
sj1=999999999999999999ULL;
si0=sj0 > sj1;
if(si0){
goto L40;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
l4=si0;
si0=l8;
l5=si0;
si0=l4;
if(si0){
goto L38;
}
L40:;
}
si0=l8;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L28:;
si0=0U;
si1=l11;
si2=l5;
si1+=si2;
si0-=si1;
l5=si0;
L27:;
sj0=l6;
si1=l5;
sj1=(U64)(I64)(I32)(si1);
sj0+=sj1;
l12=sj0;
L26:;
si0=l10;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
l5=si0;
L25:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+17U,si1);
goto L0;
L1:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f669(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si1=7U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
l3=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l3;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L1;
L4:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1102168U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l4=sj0;
si0=l3;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l2=si0;
si1=1U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
l6=si0;
si0=l2;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L5;
}
sj0=0ULL;
l7=sj0;
si0=l0;
l2=si0;
goto L2;
L5:;
si0=l5;
si1=2147483644U;
si0&=si1;
l5=si0;
sj0=0ULL;
l7=sj0;
si0=l0;
l2=si0;
L6:;
{
si0=l2;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=12U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
goto L2;
}
L3:;
si0=l3;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
{
si0=l2;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l4;
sj1*=sj2;
sj2=l7;
sj1+=sj2;
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
}
L7:;
sj0=l7;
si0=(U32)(sj0);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=39U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L10:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+160U,si1);
goto L1;
L9:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
l3=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l3;
if(si0){
goto L16;
}
si0=0U;
l3=si0;
goto L13;
L16:;
si0=l3;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l2=si0;
si1=1U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
l6=si0;
si0=l2;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L17;
}
sj0=0ULL;
l4=sj0;
si0=l0;
l2=si0;
goto L14;
L17:;
si0=l5;
si1=2147483644U;
si0&=si1;
l5=si0;
sj0=0ULL;
l4=sj0;
si0=l0;
l2=si0;
L18:;
{
si0=l2;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=12U;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
if(si0){
goto L18;
}
goto L14;
}
L15:;
si0=l3;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L19;
}
L20:;
{
si0=l2;
si1=l2;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=100000000ULL;
sj1*=sj2;
sj2=l4;
sj1+=sj2;
l4=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
L19:;
sj0=l4;
si0=(U32)(sj0);
l2=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=39U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
L13:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+160U,si1);
L12:;
si0=l1;
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si1=1099636U;
si2=2U;
si0=f670(i,si0,si1,si2);
L21:;
si0=l1;
si1=32U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=1099644U;
si2=4U;
si0=f670(i,si0,si1,si2);
L22:;
si0=l1;
si1=64U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=1099660U;
si2=7U;
si0=f670(i,si0,si1,si2);
L23:;
si0=l1;
si1=128U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l0;
si1=1099688U;
si2=14U;
si0=f670(i,si0,si1,si2);
L24:;
si0=l1;
si1=256U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l0;
si1=1099744U;
si2=27U;
si0=f670(i,si0,si1,si2);
L25:;
si0=l0;
goto L0;
L11:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f670(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
si2=160U;
si0=f15392(i,si0,si1,si2);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
L5:;
{
si0=l4;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L6:;
{
si0=l8;
l11=si0;
si0=l10;
l3=si0;
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=1U;
si0+=si1;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
l1=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l12;
sj0=(U64)(si0);
l14=sj0;
sj0=0ULL;
l15=sj0;
si0=l2;
l12=si0;
si0=l11;
l1=si0;
si0=l0;
l10=si0;
L9:;
{
si0=l1;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l3;
sj1=l15;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1+=sj2;
si2=l10;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj3=l14;
sj2*=sj3;
sj1+=sj2;
l15=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=32ULL;
sj0>>=(sj1&63);
l15=sj0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L9;
}
}
si0=l5;
l3=si0;
sj0=l15;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si1=l5;
si0+=si1;
l3=si0;
si1=39U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l4;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l3=si0;
goto L7;
L10:;
si0=l3;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l9;
si1=l3;
si2=l11;
si1+=si2;
l3=si1;
si2=l9;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l13;
l1=si0;
goto L5;
}
L4:;
si0=l5;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l2;
si1=1U;
si0+=si1;
l16=si0;
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=0U;
l11=si0;
si0=l0;
l10=si0;
si0=0U;
l9=si0;
L13:;
{
si0=l4;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
L14:;
{
si0=l11;
l12=si0;
si0=l8;
l3=si0;
si0=l10;
si1=l13;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0+=si1;
l8=si0;
si0=l12;
si1=1U;
si0+=si1;
l11=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l10;
si1=4U;
si0+=si1;
l5=si0;
l10=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
}
si0=l6;
sj0=(U64)(si0);
l14=sj0;
sj0=0ULL;
l15=sj0;
si0=l7;
l6=si0;
si0=l12;
l10=si0;
si0=l1;
l8=si0;
L15:;
{
si0=l10;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l3;
sj1=l15;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1+=sj2;
si2=l8;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj3=l14;
sj2*=sj3;
sj1+=sj2;
l15=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=32ULL;
sj0>>=(sj1&63);
l15=sj0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L15;
}
}
si0=l2;
l3=si0;
sj0=l15;
si0=(U32)(sj0);
l10=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l12;
si1=l2;
si0+=si1;
l3=si0;
si1=39U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l4;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
l3=si0;
L17:;
si0=l9;
si1=l3;
si2=l12;
si1+=si2;
l3=si1;
si2=l9;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l5;
l10=si0;
goto L13;
L16:;
}
si0=l3;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l10;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l5;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
l9=si0;
si0=0U;
l3=si0;
L18:;
{
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=4U;
si0+=si1;
l8=si0;
l1=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L18;
}
si0=l9;
si1=l3;
si2=-1U;
si1+=si2;
l1=si1;
si2=l9;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l8;
l1=si0;
goto L18;
}
L1:;
si0=l0;
si1=l4;
si2=160U;
si0=f15390(i,si0,si1,si2);
l3=si0;
si1=l9;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f671(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=1344U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=!(sj0);
if(si0){
goto L25;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=!(sj0);
if(si0){
goto L24;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=!(sj0);
if(si0){
goto L23;
}
sj0=l5;
sj1=l7;
sj0+=sj1;
l8=sj0;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L22;
}
sj0=l5;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L21;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+26U);
l9=si0;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+24U);
l1=si0;
si0=l4;
sj1=l5;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
si2=2U;
sj3=l5;
sj4=4294967296ULL;
si3=sj3 < sj4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=0U;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si2=152U;
si0=f15392(i,si0,si1,si2);
si0=l4;
sj1=l6;
i64_store32(&i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=1U;
si2=2U;
sj3=l6;
sj4=4294967296ULL;
si3=sj3 < sj4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l4;
si1=0U;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
si2=152U;
si0=f15392(i,si0,si1,si2);
si0=l4;
sj1=l7;
i64_store32(&i->m0,(U64)si0+336U,sj1);
si0=l4;
si1=1U;
si2=2U;
sj3=l7;
sj4=4294967296ULL;
si3=sj3 < sj4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+496U,si1);
si0=l4;
si1=0U;
sj2=l7;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l4;
si1=336U;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
si2=152U;
si0=f15392(i,si0,si1,si2);
si0=l4;
si1=504U;
si0+=si1;
si1=4U;
si0|=si1;
si1=0U;
si2=156U;
si0=f15392(i,si0,si1,si2);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+504U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+664U,si1);
si0=l1;
sj0=(U64)(si0);
sj0=(U64)(I64)(I16)(U16)(sj0);
sj1=l8;
sj2=-1ULL;
sj1+=sj2;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=1292913986ULL;
sj0*=sj1;
sj1=82746495104ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l10=si0;
si0=(U32)(I32)(I16)(U16)(si0);
l11=si0;
si0=l1;
si0=(U32)(I32)(I16)(U16)(si0);
l12=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L27;
}
si0=l4;
si1=l1;
si0=f672(i,si0,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=l1;
si0=f672(i,si0,si1);
si0=l4;
si1=336U;
si0+=si1;
si1=l1;
si0=f672(i,si0,si1);
goto L26;
L27:;
si0=l4;
si1=504U;
si0+=si1;
si1=0U;
si2=l12;
si1-=si2;
si1=(U32)(I32)(I16)(U16)(si1);
si0=f672(i,si0,si1);
L26:;
si0=l11;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L29;
}
si0=l4;
si1=0U;
si2=l11;
si1-=si2;
si1=(U32)(I32)(I16)(U16)(si1);
l1=si1;
si0=f669(i,si0,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=l1;
si0=f669(i,si0,si1);
si0=l4;
si1=336U;
si0+=si1;
si1=l1;
si0=f669(i,si0,si1);
goto L28;
L29:;
si0=l4;
si1=504U;
si0+=si1;
si1=l10;
si2=65535U;
si1&=si2;
si0=f669(i,si0,si1);
L28:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+160U);
l13=si1;
i32_store(&i->m0,(U64)si0+1336U,si1);
si0=l4;
si1=1176U;
si0+=si1;
si1=l4;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l13;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+496U);
l14=si1;
si2=l13;
si3=l14;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l15;
if(si0){
goto L31;
}
si0=0U;
l15=si0;
goto L30;
L31:;
si0=0U;
l16=si0;
si0=0U;
l17=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l15;
si1=1U;
si0&=si1;
l18=si0;
si0=0U;
l17=si0;
si0=l4;
si1=336U;
si0+=si1;
l10=si0;
si0=l4;
si1=1176U;
si0+=si1;
l1=si0;
si0=l15;
si1=-2U;
si0&=si1;
l16=si0;
l19=si0;
L35:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L35;
}
}
si0=l18;
si0=!(si0);
if(si0){
goto L33;
}
L34:;
si0=l4;
si1=1176U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l4;
si3=336U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L32;
}
goto L30;
L33:;
si0=l17;
si0=!(si0);
if(si0){
goto L30;
}
L32:;
si0=l15;
si1=39U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l4;
si1=1176U;
si0+=si1;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L30:;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+1336U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+664U);
l19=si0;
si1=l15;
si2=l19;
si3=l15;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L38:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L37;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l4;
si3=1176U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=l4;
si4=504U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L38;
}
goto L36;
}
L37:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L36:;
si0=l10;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L39;
}
si0=l13;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l13;
if(si0){
goto L40;
}
si0=0U;
l13=si0;
goto L14;
L40:;
si0=l13;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l4;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L15;
L41:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
l1=si0;
sj0=0ULL;
l5=sj0;
L42:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L42;
}
goto L15;
}
L39:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
goto L6;
L25:;
si0=1100264U;
si1=28U;
si2=1100292U;
f673(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1100216U;
si1=29U;
si2=1100248U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1100172U;
si1=28U;
si2=1100200U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1100100U;
si1=54U;
si2=1100156U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1100028U;
si1=55U;
si2=1100084U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1099964U;
si1=45U;
si2=1100012U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l1;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l13;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l15;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l10;
si0=!(si0);
if(si0){
goto L43;
}
L44:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L44;
}
}
L43:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l13;
si1=39U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l4;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
L14:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+328U);
l20=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l20;
if(si0){
goto L45;
}
si0=0U;
l20=si0;
goto L10;
L45:;
si0=l20;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l4;
si1=168U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L11;
L46:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
si1=168U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
L47:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L47;
}
goto L11;
}
L13:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l20;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L48;
}
L49:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L49;
}
}
L48:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l20;
si1=39U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=168U;
si0+=si1;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=1U;
si0+=si1;
l20=si0;
L10:;
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l14;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l14;
if(si0){
goto L50;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+496U,si1);
goto L6;
L50:;
si0=l14;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l4;
si1=336U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L7;
L51:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
si1=336U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
L52:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L52;
}
goto L7;
}
L9:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l14;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l10;
si0=!(si0);
if(si0){
goto L53;
}
L54:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L54;
}
}
L53:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l14;
si1=39U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=336U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
L55:;
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+496U,si1);
L6:;
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+832U,si1);
si0=l4;
si1=672U;
si0+=si1;
si1=l4;
si2=504U;
si1+=si2;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=672U;
si0+=si1;
si1=1U;
si0=f672(i,si0,si1);
l23=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+664U);
i32_store(&i->m0,(U64)si0+1000U,si1);
si0=l4;
si1=840U;
si0+=si1;
si1=l4;
si2=504U;
si1+=si2;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=840U;
si0+=si1;
si1=2U;
si0=f672(i,si0,si1);
l24=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+664U);
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l4;
si1=1008U;
si0+=si1;
si1=l4;
si2=504U;
si1+=si2;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=1008U;
si0+=si1;
si1=3U;
si0=f672(i,si0,si1);
l25=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l15=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+1168U);
l26=si1;
si2=l15;
si3=l26;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l4;
si1=672U;
si0+=si1;
si1=-4U;
si0+=si1;
l18=si0;
si0=l4;
si1=840U;
si0+=si1;
si1=-4U;
si0+=si1;
l16=si0;
si0=l4;
si1=1008U;
si0+=si1;
si1=-4U;
si0+=si1;
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+664U);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+832U);
l28=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+1000U);
l29=si0;
si0=0U;
l30=si0;
L58:;
{
si0=l30;
l31=si0;
si0=l13;
si1=2U;
si0<<=(si1&31);
l1=si0;
L61:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L60;
}
si0=-1U;
si1=l14;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L61;
}
goto L59;
}
L60:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L59:;
si0=0U;
l32=si0;
si0=l10;
si1=1U;
si0=si0 > si1;
if(si0){
goto L62;
}
si0=l13;
si0=!(si0);
if(si0){
goto L63;
}
si0=1U;
l17=si0;
si0=0U;
l15=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l13;
si1=1U;
si0&=si1;
l33=si0;
si0=1U;
l17=si0;
si0=l4;
si1=1008U;
si0+=si1;
l10=si0;
si0=l4;
l1=si0;
si0=l13;
si1=-2U;
si0&=si1;
l15=si0;
l19=si0;
L66:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L66;
}
}
si0=l33;
si0=!(si0);
if(si0){
goto L64;
}
L65:;
si0=l4;
si1=l15;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l25;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L63;
}
goto L1;
L64:;
si0=l17;
si0=!(si0);
if(si0){
goto L1;
}
L63:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=8U;
l32=si0;
si0=l13;
l15=si0;
L62:;
si0=l15;
si1=l29;
si2=l15;
si3=l29;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L88;
}
si0=l13;
si1=2U;
si0<<=(si1&31);
l1=si0;
L91:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L90;
}
si0=-1U;
si1=l16;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L91;
}
goto L89;
}
L90:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L89:;
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L93;
}
si0=l15;
l13=si0;
goto L92;
L93:;
si0=l13;
si0=!(si0);
if(si0){
goto L94;
}
si0=1U;
l17=si0;
si0=0U;
l15=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L96;
}
si0=l13;
si1=1U;
si0&=si1;
l33=si0;
si0=1U;
l17=si0;
si0=l4;
si1=840U;
si0+=si1;
l10=si0;
si0=l4;
l1=si0;
si0=l13;
si1=-2U;
si0&=si1;
l15=si0;
l19=si0;
L97:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L97;
}
}
si0=l33;
si0=!(si0);
if(si0){
goto L95;
}
L96:;
si0=l4;
si1=l15;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l24;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L94;
}
goto L2;
L95:;
si0=l17;
si0=!(si0);
if(si0){
goto L2;
}
L94:;
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l32;
si1=4U;
si0|=si1;
l32=si0;
L92:;
si0=l13;
si1=l28;
si2=l13;
si3=l28;
si2=si2 > si3;
si0=si2?si0:si1;
l33=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L87;
}
si0=l33;
si1=2U;
si0<<=(si1&31);
l1=si0;
L100:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L99;
}
si0=-1U;
si1=l18;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L100;
}
goto L98;
}
L99:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L98:;
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L102;
}
si0=l13;
l33=si0;
goto L101;
L102:;
si0=l33;
si0=!(si0);
if(si0){
goto L103;
}
si0=1U;
l17=si0;
si0=0U;
l15=si0;
si0=l33;
si1=1U;
si0=si0 == si1;
if(si0){
goto L105;
}
si0=l33;
si1=1U;
si0&=si1;
l13=si0;
si0=1U;
l17=si0;
si0=l4;
si1=672U;
si0+=si1;
l10=si0;
si0=l4;
l1=si0;
si0=l33;
si1=-2U;
si0&=si1;
l15=si0;
l19=si0;
L106:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L106;
}
}
si0=l13;
si0=!(si0);
if(si0){
goto L104;
}
L105:;
si0=l4;
si1=l15;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l23;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L103;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L103;
}
goto L3;
L104:;
si0=l17;
si0=!(si0);
if(si0){
goto L3;
}
L103:;
si0=l4;
si1=l33;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l32;
si1=2U;
si0+=si1;
l32=si0;
L101:;
si0=l33;
si1=l27;
si2=l33;
si3=l27;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L86;
}
si0=l15;
si1=2U;
si0<<=(si1&31);
l1=si0;
L109:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L108;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l4;
si3=504U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L109;
}
goto L107;
}
L108:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L107:;
si0=l10;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L111;
}
si0=l33;
l15=si0;
goto L110;
L111:;
si0=l15;
si0=!(si0);
if(si0){
goto L112;
}
si0=1U;
l17=si0;
si0=0U;
l13=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L114;
}
si0=l15;
si1=1U;
si0&=si1;
l33=si0;
si0=1U;
l17=si0;
si0=l4;
si1=504U;
si0+=si1;
l10=si0;
si0=l4;
l1=si0;
si0=l15;
si1=-2U;
si0&=si1;
l13=si0;
l19=si0;
L115:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L115;
}
}
si0=l33;
si0=!(si0);
if(si0){
goto L113;
}
L114:;
si0=l4;
si1=l13;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l4;
si3=504U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L112;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L112;
}
goto L4;
L113:;
si0=l17;
si0=!(si0);
if(si0){
goto L4;
}
L112:;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l32;
si1=1U;
si0+=si1;
l32=si0;
L110:;
si0=l31;
si1=l3;
si0=si0 == si1;
if(si0){
goto L82;
}
si0=l2;
si1=l31;
si0+=si1;
si1=l32;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+328U);
l32=si1;
si2=l15;
si3=l32;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L85;
}
si0=l31;
si1=1U;
si0+=si1;
l30=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L118:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L117;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l4;
si3=168U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=l4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si0=!(si0);
if(si0){
goto L118;
}
goto L116;
}
L117:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l13=si0;
L116:;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+1336U,si1);
si0=l4;
si1=1176U;
si0+=si1;
si1=l4;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l15;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+496U);
l34=si1;
si2=l15;
si3=l34;
si2=si2 > si3;
si0=si2?si0:si1;
l33=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L78;
}
si0=l33;
if(si0){
goto L120;
}
si0=0U;
l33=si0;
goto L119;
L120:;
si0=0U;
l35=si0;
si0=0U;
l17=si0;
si0=l33;
si1=1U;
si0=si0 == si1;
if(si0){
goto L123;
}
si0=l33;
si1=1U;
si0&=si1;
l36=si0;
si0=0U;
l17=si0;
si0=l4;
si1=336U;
si0+=si1;
l10=si0;
si0=l4;
si1=1176U;
si0+=si1;
l1=si0;
si0=l33;
si1=-2U;
si0&=si1;
l35=si0;
l19=si0;
L124:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l12=si1;
si2=l17;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l22=si1;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l17=si1;
si2=l12;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l12;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=l22;
si0=si0 < si1;
si1=l12;
si2=l17;
si1=si1 < si2;
si0|=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L124;
}
}
si0=l36;
si0=!(si0);
if(si0){
goto L122;
}
L123:;
si0=l4;
si1=1176U;
si0+=si1;
si1=l35;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l4;
si3=336U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l1=si1;
si2=l17;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L121;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L121;
}
goto L119;
L122:;
si0=l17;
si0=!(si0);
if(si0){
goto L119;
}
L121:;
si0=l33;
si1=39U;
si0=si0 > si1;
if(si0){
goto L84;
}
si0=l4;
si1=1176U;
si0+=si1;
si1=l33;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l33;
si1=1U;
si0+=si1;
l33=si0;
L119:;
si0=l4;
si1=l33;
i32_store(&i->m0,(U64)si0+1336U,si1);
si0=l27;
si1=l33;
si2=l27;
si3=l33;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L83;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L127:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L126;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l4;
si3=1176U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=l1;
si3=l4;
si4=504U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si1=si1 != si2;
si2=l10;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L127;
}
goto L125;
}
L126:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L125:;
si0=l13;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L128;
}
si0=l10;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L128;
}
si0=l15;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l15;
if(si0){
goto L129;
}
si0=0U;
l15=si0;
goto L75;
L129:;
si0=l15;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L130;
}
si0=l4;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L76;
L130:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
l1=si0;
sj0=0ULL;
l5=sj0;
L131:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L131;
}
goto L76;
}
L128:;
si0=l10;
si1=l9;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L77;
}
si0=l13;
si1=l9;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L132;
}
si0=l4;
si1=1U;
si0=f672(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+664U);
l10=si1;
si2=l1;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L80;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l4;
si1=-4U;
si0+=si1;
l17=si0;
si0=l4;
si1=504U;
si0+=si1;
si1=-4U;
si0+=si1;
l19=si0;
L135:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L134;
}
si0=l17;
si1=l1;
si0+=si1;
l10=si0;
si0=l19;
si1=l1;
si0+=si1;
l12=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=-1U;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si1=si1 != si2;
si2=l12;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L135;
}
goto L133;
}
L134:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L133:;
si0=l10;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L77;
}
L132:;
si0=l31;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L79;
}
si0=l2;
si1=l30;
si0+=si1;
l19=si0;
si0=l31;
l1=si0;
si0=-1U;
l10=si0;
L137:;
{
si0=l1;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L136;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l2;
si1=l1;
si0+=si1;
l12=si0;
si0=l1;
si1=-1U;
si0+=si1;
l17=si0;
l1=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=57U;
si0=si0 == si1;
if(si0){
goto L137;
}
}
si0=l2;
si1=l17;
si0+=si1;
l12=si0;
si1=1U;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l17;
si1=2U;
si0+=si1;
si1=l31;
si0=si0 > si1;
if(si0){
goto L77;
}
si0=l12;
si1=2U;
si0+=si1;
si1=48U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L77;
L136:;
si0=l2;
si1=49U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l31;
si0=!(si0);
if(si0){
goto L138;
}
si0=l2;
si1=1U;
si0+=si1;
si1=48U;
si2=l31;
si0=f15392(i,si0,si1,si2);
L138:;
si0=l30;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L139;
}
si0=l19;
si1=48U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l31;
si1=2U;
si0+=si1;
l30=si0;
goto L77;
L139:;
si0=l30;
si1=l3;
si2=1099932U;
f663(i,si0,si1,si2);
UNREACHABLE;
L88:;
si0=l13;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l33;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l15;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l1;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=l1;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=l3;
si1=l3;
si2=1099900U;
f663(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l15;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l1;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l30;
si1=l3;
si2=1099916U;
f666(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l33;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l30;
si1=l3;
si0=si0 > si1;
if(si0){
goto L140;
}
si0=l0;
si1=l11;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l30;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1344U;
si0+=si1;
i->g0=si0;
goto L0;
L140:;
si0=l30;
si1=l3;
si2=1099948U;
f666(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l10;
si0=!(si0);
if(si0){
goto L141;
}
L142:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L142;
}
}
L141:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l15;
si1=39U;
si0=si0 > si1;
if(si0){
goto L74;
}
si0=l4;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L75:;
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l32;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l32;
if(si0){
goto L143;
}
si0=0U;
l32=si0;
goto L71;
L143:;
si0=l32;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L144;
}
si0=l4;
si1=168U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L72;
L144:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
si1=168U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
L145:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L145;
}
goto L72;
}
L74:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l32;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l10;
si0=!(si0);
if(si0){
goto L146;
}
L147:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L147;
}
}
L146:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l32;
si1=39U;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l4;
si1=168U;
si0+=si1;
si1=l32;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l32;
si1=1U;
si0+=si1;
l32=si0;
L71:;
si0=l4;
si1=l32;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l34;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L69;
}
si0=l34;
if(si0){
goto L148;
}
si0=0U;
l34=si0;
goto L67;
L148:;
si0=l34;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L149;
}
si0=l4;
si1=336U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
goto L68;
L149:;
si0=l12;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l4;
si1=336U;
si0+=si1;
l1=si0;
sj0=0ULL;
l5=sj0;
L150:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L150;
}
goto L68;
}
L70:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l34;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l10;
si0=!(si0);
if(si0){
goto L151;
}
L152:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
l5=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L152;
}
}
L151:;
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l34;
si1=39U;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l4;
si1=336U;
si0+=si1;
si1=l34;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l34;
si1=1U;
si0+=si1;
l34=si0;
L67:;
si0=l4;
si1=l34;
i32_store(&i->m0,(U64)si0+496U,si1);
si0=l15;
si1=l26;
si2=l15;
si3=l26;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si1=40U;
si0=si0 <= si1;
if(si0){
goto L58;
}
}
L57:;
si0=l13;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1107564U;
si1=26U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1107564U;
si1=26U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1107564U;
si1=26U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1107564U;
si1=26U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f672(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=1279U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=5U;
si0>>=(si1&31);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=40U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-4U;
si0+=si1;
l5=si0;
si0=l3;
si1=l2;
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-4U;
si0+=si1;
l6=si0;
L6:;
{
si0=l4;
si1=l3;
si0+=si1;
si1=39U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si1=32U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=64U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1U;
si2=l2;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=5U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=6U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=7U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=8U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=10U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=11U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=12U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=13U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=14U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=15U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=16U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=17U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=18U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=19U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=20U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=21U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=22U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=23U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=24U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=25U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=26U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=27U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=28U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=29U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=30U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=31U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=32U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=33U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=34U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=35U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=36U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=37U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l3;
si1=38U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=39U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=40U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=l3;
si0+=si1;
si1=-1U;
si0+=si1;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1107590U;
si1=29U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=-1U;
si0+=si1;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l2;
si0+=si1;
l5=si0;
si0=l1;
si1=31U;
si0&=si1;
l4=si0;
if(si0){
goto L7;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l0;
goto L0;
L7:;
si0=l5;
si1=-1U;
si0+=si1;
l3=si0;
si1=39U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
l7=si0;
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=0U;
si2=l1;
si1-=si2;
l8=si1;
si0>>=(si1&31);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=39U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0+=si1;
l7=si0;
goto L8;
L10:;
si0=l5;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l8;
si1=31U;
si0&=si1;
l8=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l3=si0;
L13:;
{
si0=l5;
si1=-2U;
si0+=si1;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l6;
si2=l4;
si1<<=(si2&31);
si2=l3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l8;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l1;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l0;
goto L0;
L11:;
si0=-1U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f673(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1097428U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f674(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
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
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=848U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=!(sj0);
if(si0){
goto L21;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=!(sj0);
if(si0){
goto L20;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=!(sj0);
if(si0){
goto L19;
}
sj0=l6;
sj1=l8;
sj0+=sj1;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L18;
}
sj0=l6;
sj1=l7;
si0=sj0 < sj1;
if(si0){
goto L17;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+24U);
l1=si0;
si0=l5;
sj1=l6;
i64_store32(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=1U;
si2=2U;
sj3=l6;
sj4=4294967296ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=0U;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
si2=152U;
si0=f15392(i,si0,si1,si2);
si0=l5;
si1=176U;
si0+=si1;
si1=4U;
si0|=si1;
si1=0U;
si2=156U;
si0=f15392(i,si0,si1,si2);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l1;
sj0=(U64)(si0);
sj0=(U64)(I64)(I16)(U16)(sj0);
sj1=l6;
sj2=-1ULL;
sj1+=sj2;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=1292913986ULL;
sj0*=sj1;
sj1=82746495104ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si0=(U32)(I32)(I16)(U16)(si0);
l10=si0;
si0=l1;
si0=(U32)(I32)(I16)(U16)(si0);
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L23;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si0=f672(i,si0,si1);
goto L22;
L23:;
si0=l5;
si1=176U;
si0+=si1;
si1=0U;
si2=l11;
si1-=si2;
si1=(U32)(I32)(I16)(U16)(si1);
si0=f672(i,si0,si1);
L22:;
si0=l10;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L25;
}
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
si2=l10;
si1-=si2;
si1=(U32)(I32)(I16)(U16)(si1);
si0=f669(i,si0,si1);
goto L24;
L25:;
si0=l5;
si1=176U;
si0+=si1;
si1=l9;
si2=65535U;
si1&=si2;
si0=f669(i,si0,si1);
L24:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+336U);
l12=si1;
i32_store(&i->m0,(U64)si0+840U,si1);
si0=l5;
si1=680U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l3;
l13=si0;
si0=l3;
si1=10U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l12;
si1=40U;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l12;
l1=si0;
goto L27;
L28:;
si0=l5;
si1=680U;
si0+=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l3;
l13=si0;
si0=l12;
l1=si0;
L29:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
if(si0){
goto L32;
}
si0=l5;
si1=680U;
si0+=si1;
si1=l11;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L31;
L32:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=1U;
si0&=si1;
l15=si0;
si0=l1;
si1=2147483646U;
si0&=si1;
l9=si0;
si0=l14;
si1=l11;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L33:;
{
si0=l1;
si1=4U;
si0+=si1;
l11=si0;
sj1=l6;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
l6=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l8=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l8;
sj2=-1000000000ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
l6=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l8=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=-1000000000ULL;
sj0*=sj1;
sj1=l6;
sj0+=sj1;
l6=sj0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L33;
}
}
si0=l15;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
L31:;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
sj1=l6;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
i64_store32(&i->m0,(U64)si0,sj1);
L30:;
si0=l13;
si1=-9U;
si0+=si1;
l13=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+840U);
l1=si0;
si1=41U;
si0=si0 < si1;
if(si0){
goto L29;
}
}
L27:;
si0=l1;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l13;
si1=2U;
si0<<=(si1&31);
si1=1099596U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+840U);
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l1;
if(si0){
goto L39;
}
si0=0U;
l1=si0;
goto L34;
L39:;
si0=l1;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=l9;
sj0=(U64)(si0);
l6=sj0;
si0=l1;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
if(si0){
goto L37;
}
si0=l5;
si1=680U;
si0+=si1;
si1=l11;
si0+=si1;
l1=si0;
sj0=0ULL;
l8=sj0;
goto L36;
L38:;
si0=1107619U;
si1=27U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=1U;
si0&=si1;
l13=si0;
si0=l1;
si1=2147483646U;
si0&=si1;
l9=si0;
si0=l11;
si1=l5;
si2=680U;
si1+=si2;
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
sj0=0ULL;
l8=sj0;
L40:;
{
si0=l1;
si1=4U;
si0+=si1;
l11=si0;
sj1=l8;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
l8=sj1;
sj2=l6;
sj1=DIV_U(sj1,sj2);
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=l8;
sj2=l7;
sj3=l6;
sj2*=sj3;
sj1-=sj2;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
l8=sj1;
sj2=l6;
sj1=DIV_U(sj1,sj2);
l7=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=l7;
sj2=l6;
sj1*=sj2;
sj0-=sj1;
l8=sj0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L40;
}
}
si0=l13;
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
L36:;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
sj1=l8;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1|=sj2;
sj2=l6;
sj1=DIV_U(sj1,sj2);
i64_store32(&i->m0,(U64)si0,sj1);
L35:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+840U);
l1=si0;
L34:;
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+168U);
l16=si1;
si2=l1;
si3=l16;
si2=si2 > si3;
si0=si2?si0:si1;
l17=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l17;
if(si0){
goto L42;
}
si0=0U;
l17=si0;
goto L41;
L42:;
si0=0U;
l18=si0;
si0=0U;
l13=si0;
si0=l17;
si1=1U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l17;
si1=1U;
si0&=si1;
l19=si0;
si0=0U;
l13=si0;
si0=l5;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=680U;
si0+=si1;
l1=si0;
si0=l17;
si1=-2U;
si0&=si1;
l18=si0;
l15=si0;
L46:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l11=si1;
si2=l13;
si3=1U;
si2&=si3;
si1+=si2;
l20=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l13=si1;
si2=l11;
si3=l14;
si2=si2 < si3;
si3=l20;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l21;
si0=si0 < si1;
si1=l11;
si2=l13;
si1=si1 < si2;
si0|=si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l15;
si1=-2U;
si0+=si1;
l15=si0;
if(si0){
goto L46;
}
}
si0=l19;
si0=!(si0);
if(si0){
goto L44;
}
L45:;
si0=l5;
si1=680U;
si0+=si1;
si1=l18;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l5;
si3=8U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l1=si1;
si2=l13;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L43;
}
goto L41;
L44:;
si0=l13;
si0=!(si0);
if(si0){
goto L41;
}
L43:;
si0=l17;
si1=39U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si1=680U;
si0+=si1;
si1=l17;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
L41:;
si0=l5;
si1=l17;
i32_store(&i->m0,(U64)si0+840U,si1);
si0=l17;
si1=l12;
si2=l17;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L49:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L48;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=176U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=680U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L49;
}
goto L47;
}
L48:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L47:;
si0=l9;
si1=1U;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L9;
L50:;
si0=l16;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l16;
if(si0){
goto L51;
}
si0=0U;
l16=si0;
goto L10;
L51:;
si0=l16;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l5;
si1=8U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L11;
L52:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=8U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L53:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L53;
}
goto L11;
}
L21:;
si0=1100264U;
si1=28U;
si2=1100452U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1100216U;
si1=29U;
si2=1100436U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1100172U;
si1=28U;
si2=1100420U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1100100U;
si1=54U;
si2=1100404U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1100028U;
si1=55U;
si2=1100388U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l1;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l1;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l16;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l17;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l9;
si0=!(si0);
if(si0){
goto L54;
}
L55:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L55;
}
}
L54:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l16;
si1=39U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
L10:;
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+168U,si1);
L9:;
si0=0U;
l14=si0;
si0=l10;
si0=(U32)(I32)(I16)(U16)(si0);
l1=si0;
si1=l4;
si1=(U32)(I32)(I16)(U16)(si1);
l22=si1;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L57;
}
si0=l10;
si1=l4;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=l3;
si2=l1;
si3=l22;
si2-=si3;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
if(si0){
goto L56;
}
si0=0U;
l14=si0;
L57:;
si0=0U;
l13=si0;
goto L3;
L56:;
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+504U,si1);
si0=l5;
si1=344U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=344U;
si0+=si1;
si1=1U;
si0=f672(i,si0,si1);
l23=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+336U);
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l5;
si1=512U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=512U;
si0+=si1;
si1=2U;
si0=f672(i,si0,si1);
l24=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+336U);
i32_store(&i->m0,(U64)si0+840U,si1);
si0=l5;
si1=680U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=176U;
si0+=si1;
si1=-4U;
si0+=si1;
l17=si0;
si0=l5;
si1=344U;
si0+=si1;
si1=-4U;
si0+=si1;
l21=si0;
si0=l5;
si1=512U;
si0+=si1;
si1=-4U;
si0+=si1;
l20=si0;
si0=l5;
si1=680U;
si0+=si1;
si1=-4U;
si0+=si1;
l14=si0;
si0=l5;
si1=680U;
si0+=si1;
si1=3U;
si0=f672(i,si0,si1);
l25=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+168U);
l16=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+336U);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+504U);
l26=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+672U);
l27=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+840U);
l28=si0;
si0=0U;
l29=si0;
L59:;
{
si0=l29;
l30=si0;
si0=l16;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L68;
}
si0=l30;
si1=1U;
si0+=si1;
l29=si0;
si0=l16;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=0U;
l1=si0;
L73:;
{
si0=l11;
si1=l1;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si0+=si1;
l9=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L73;
}
}
si0=l16;
si1=l28;
si2=l16;
si3=l28;
si2=si2 > si3;
si0=si2?si0:si1;
l31=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l31;
si1=2U;
si0<<=(si1&31);
l1=si0;
L76:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L75;
}
si0=-1U;
si1=l14;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l5;
si4=8U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L76;
}
goto L74;
}
L75:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L74:;
si0=0U;
l32=si0;
si0=l9;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L69;
}
si0=l31;
si0=!(si0);
if(si0){
goto L70;
}
si0=1U;
l15=si0;
si0=0U;
l33=si0;
si0=l31;
si1=1U;
si0=si0 == si1;
if(si0){
goto L77;
}
si0=l31;
si1=1U;
si0&=si1;
l32=si0;
si0=1U;
l15=si0;
si0=l5;
si1=680U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l1=si0;
si0=l31;
si1=-2U;
si0&=si1;
l33=si0;
l16=si0;
L78:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l15;
si3=1U;
si2&=si3;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
si2=l11;
si3=l4;
si2=si2 < si3;
si3=l18;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l19;
si0=si0 < si1;
si1=l11;
si2=l15;
si1=si1 < si2;
si0|=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l16;
si1=-2U;
si0+=si1;
l16=si0;
if(si0){
goto L78;
}
}
si0=l32;
si0=!(si0);
if(si0){
goto L71;
}
L77:;
si0=l5;
si1=8U;
si0+=si1;
si1=l33;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l25;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l15;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L70;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L70;
}
goto L4;
L72:;
si0=l13;
si1=l30;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L65;
}
si0=l13;
si1=l30;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l30;
si0+=si1;
si1=48U;
si2=l13;
si3=l30;
si2-=si3;
si0=f15392(i,si0,si1,si2);
goto L2;
L71:;
si0=l15;
si0=!(si0);
if(si0){
goto L4;
}
L70:;
si0=l5;
si1=l31;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=8U;
l32=si0;
si0=l31;
l16=si0;
L69:;
si0=l16;
si1=l27;
si2=l16;
si3=l27;
si2=si2 > si3;
si0=si2?si0:si1;
l31=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L64;
}
si0=l31;
si1=2U;
si0<<=(si1&31);
l1=si0;
L81:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L80;
}
si0=-1U;
si1=l20;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l5;
si4=8U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L81;
}
goto L79;
}
L80:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L79:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L83;
}
si0=l16;
l31=si0;
goto L82;
L83:;
si0=l31;
si0=!(si0);
if(si0){
goto L84;
}
si0=1U;
l15=si0;
si0=0U;
l33=si0;
si0=l31;
si1=1U;
si0=si0 == si1;
if(si0){
goto L86;
}
si0=l31;
si1=1U;
si0&=si1;
l34=si0;
si0=1U;
l15=si0;
si0=l5;
si1=512U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l1=si0;
si0=l31;
si1=-2U;
si0&=si1;
l33=si0;
l16=si0;
L87:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l15;
si3=1U;
si2&=si3;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
si2=l11;
si3=l4;
si2=si2 < si3;
si3=l18;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l19;
si0=si0 < si1;
si1=l11;
si2=l15;
si1=si1 < si2;
si0|=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l16;
si1=-2U;
si0+=si1;
l16=si0;
if(si0){
goto L87;
}
}
si0=l34;
si0=!(si0);
if(si0){
goto L85;
}
L86:;
si0=l5;
si1=8U;
si0+=si1;
si1=l33;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l24;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l15;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L84;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L84;
}
goto L5;
L85:;
si0=l15;
si0=!(si0);
if(si0){
goto L5;
}
L84:;
si0=l5;
si1=l31;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l32;
si1=4U;
si0|=si1;
l32=si0;
L82:;
si0=l31;
si1=l26;
si2=l31;
si3=l26;
si2=si2 > si3;
si0=si2?si0:si1;
l33=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L63;
}
si0=l33;
si1=2U;
si0<<=(si1&31);
l1=si0;
L90:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L89;
}
si0=-1U;
si1=l21;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l5;
si4=8U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L90;
}
goto L88;
}
L89:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L88:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L92;
}
si0=l31;
l33=si0;
goto L91;
L92:;
si0=l33;
si0=!(si0);
if(si0){
goto L93;
}
si0=1U;
l15=si0;
si0=0U;
l31=si0;
si0=l33;
si1=1U;
si0=si0 == si1;
if(si0){
goto L95;
}
si0=l33;
si1=1U;
si0&=si1;
l34=si0;
si0=1U;
l15=si0;
si0=l5;
si1=344U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l1=si0;
si0=l33;
si1=-2U;
si0&=si1;
l31=si0;
l16=si0;
L96:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l15;
si3=1U;
si2&=si3;
si1+=si2;
l18=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
si2=l11;
si3=l4;
si2=si2 < si3;
si3=l18;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l19;
si0=si0 < si1;
si1=l11;
si2=l15;
si1=si1 < si2;
si0|=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l16;
si1=-2U;
si0+=si1;
l16=si0;
if(si0){
goto L96;
}
}
si0=l34;
si0=!(si0);
if(si0){
goto L94;
}
L95:;
si0=l5;
si1=8U;
si0+=si1;
si1=l31;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l23;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l15;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L93;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L93;
}
goto L6;
L94:;
si0=l15;
si0=!(si0);
if(si0){
goto L6;
}
L93:;
si0=l5;
si1=l33;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l32;
si1=2U;
si0+=si1;
l32=si0;
L91:;
si0=l33;
si1=l12;
si2=l33;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l16=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=l16;
si1=2U;
si0<<=(si1&31);
l1=si0;
L99:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L98;
}
si0=-1U;
si1=l17;
si2=l1;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=-4U;
si2+=si3;
l1=si2;
si3=l5;
si4=8U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L99;
}
goto L97;
}
L98:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L97:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L101;
}
si0=l33;
l16=si0;
goto L100;
L101:;
si0=l16;
si0=!(si0);
if(si0){
goto L102;
}
si0=1U;
l15=si0;
si0=0U;
l33=si0;
si0=l16;
si1=1U;
si0=si0 == si1;
if(si0){
goto L104;
}
si0=l16;
si1=1U;
si0&=si1;
l34=si0;
si0=1U;
l15=si0;
si0=l5;
si1=176U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l1=si0;
si0=l16;
si1=-2U;
si0&=si1;
l33=si0;
l4=si0;
L105:;
{
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l15;
si3=1U;
si2&=si3;
si1+=si2;
l19=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l31=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l15=si1;
si2=l11;
si3=l18;
si2=si2 < si3;
si3=l19;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=l31;
si0=si0 < si1;
si1=l11;
si2=l15;
si1=si1 < si2;
si0|=si1;
l15=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
if(si0){
goto L105;
}
}
si0=l34;
si0=!(si0);
if(si0){
goto L103;
}
L104:;
si0=l5;
si1=8U;
si0+=si1;
si1=l33;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l5;
si3=176U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l15;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L102;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L102;
}
goto L7;
L103:;
si0=l15;
si0=!(si0);
if(si0){
goto L7;
}
L102:;
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l32;
si1=1U;
si0+=si1;
l32=si0;
L100:;
si0=l30;
si1=l3;
si0=si0 == si1;
if(si0){
goto L106;
}
si0=l2;
si1=l30;
si0+=si1;
si1=l32;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l16;
if(si0){
goto L107;
}
si0=0U;
l16=si0;
goto L60;
L107:;
si0=l16;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L108;
}
si0=l5;
si1=8U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L61;
L108:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=8U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L109:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L109;
}
goto L61;
}
L106:;
si0=l3;
si1=l3;
si2=1100356U;
f663(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l16;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=l31;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l30;
si1=l13;
si2=1100372U;
f675(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l13;
si1=l3;
si2=1100372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l31;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l33;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l16;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l9;
si0=!(si0);
if(si0){
goto L110;
}
L111:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L111;
}
}
L110:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l16;
si1=39U;
si0=si0 > si1;
if(si0){
goto L58;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
L60:;
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l29;
si1=l13;
si0=si0 != si1;
if(si0){
goto L59;
}
}
si0=1U;
l14=si0;
goto L3;
L58:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1107564U;
si1=26U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1107564U;
si1=26U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1107564U;
si1=26U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1107564U;
si1=26U;
si2=1107548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L119;
}
si0=l12;
if(si0){
goto L120;
}
si0=0U;
l12=si0;
goto L117;
L120:;
si0=l12;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L121;
}
si0=l5;
si1=176U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L118;
L121:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=176U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L122:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L122;
}
goto L118;
}
L119:;
si0=l12;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L118:;
si0=l9;
si0=!(si0);
if(si0){
goto L123;
}
L124:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L124;
}
}
L123:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L117;
}
si0=l12;
si1=39U;
si0=si0 > si1;
if(si0){
goto L116;
}
si0=l5;
si1=176U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
L117:;
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l16;
si1=l12;
si2=l16;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L115;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L127:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L126;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=176U;
si2+=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=8U;
si3+=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L127;
}
goto L125;
}
L126:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L125:;
si0=l9;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L129;
case 1:
goto L128;
default:
goto L112;
}
L129:;
si0=l14;
si0=!(si0);
if(si0){
goto L112;
}
si0=l13;
si1=-1U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L114;
}
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L112;
}
L128:;
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L113;
}
si0=l2;
si1=l13;
si0+=si1;
l15=si0;
si0=0U;
l1=si0;
si0=l2;
l9=si0;
L131:;
{
si0=l13;
si1=l1;
si0=si0 == si1;
if(si0){
goto L130;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si1=l13;
si0+=si1;
l11=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=57U;
si0=si0 == si1;
if(si0){
goto L131;
}
}
si0=l11;
si1=l11;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=l1;
si0-=si1;
si1=1U;
si0+=si1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L112;
}
si0=l11;
si1=1U;
si0+=si1;
si1=48U;
si2=l1;
si3=-1U;
si2+=si3;
si0=f15392(i,si0,si1,si2);
goto L112;
L130:;
si0=l13;
if(si0){
goto L133;
}
si0=49U;
l1=si0;
goto L132;
L133:;
si0=l2;
si1=49U;
i32_store8(&i->m0,(U64)si0,si1);
si0=48U;
l1=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L132;
}
si0=48U;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
si1=48U;
si2=l13;
si3=-1U;
si2+=si3;
si0=f15392(i,si0,si1,si2);
L132:;
si0=l10;
si1=1U;
si0+=si1;
si0=(U32)(I32)(I16)(U16)(si0);
l10=si0;
si1=l22;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L112;
}
si0=l13;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L112;
}
si0=l15;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
goto L112;
L116:;
si0=40U;
si1=40U;
si2=1107548U;
f663(i,si0,si1,si2);
UNREACHABLE;
L115:;
si0=l1;
si1=40U;
si2=1107548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L114:;
si0=l1;
si1=l3;
si2=1100308U;
f663(i,si0,si1,si2);
UNREACHABLE;
L113:;
si0=l13;
si1=l3;
si2=1100324U;
f666(i,si0,si1,si2);
UNREACHABLE;
L112:;
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l10;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=848U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l13;
si1=l3;
si2=1100340U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f675(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
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
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1104412U;
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f676(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U64 l22=0;
U64 l23=0;
U64 l24=0;
U64 l25=0;
U64 l26=0;
U64 l27=0;
U64 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=!(sj0);
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=!(sj0);
if(si0){
goto L11;
}
sj0=l5;
sj1=l7;
sj0+=sj1;
l7=sj0;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L10;
}
sj0=l5;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L9;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L8;
}
sj0=l7;
sj1=2305843009213693951ULL;
si0=sj0 > sj1;
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+24U);
l1=si1;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=l5;
sj2=l6;
sj1-=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si2=-32U;
si1+=si2;
si2=l1;
sj3=l7;
sj4=4294967296ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
l10=si1;
si2=-16U;
si1+=si2;
si2=l10;
sj3=l7;
sj4=32ULL;
sj3<<=(sj4&63);
sj4=l7;
si5=l9;
sj3=si5?sj3:sj4;
l7=sj3;
sj4=281474976710656ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
l10=si1;
si2=-8U;
si1+=si2;
si2=l10;
sj3=l7;
sj4=16ULL;
sj3<<=(sj4&63);
sj4=l7;
si5=l9;
sj3=si5?sj3:sj4;
l7=sj3;
sj4=72057594037927936ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
l10=si1;
si2=-4U;
si1+=si2;
si2=l10;
sj3=l7;
sj4=8ULL;
sj3<<=(sj4&63);
sj4=l7;
si5=l9;
sj3=si5?sj3:sj4;
l7=sj3;
sj4=1152921504606846976ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
l10=si1;
si2=-2U;
si1+=si2;
si2=l10;
sj3=l7;
sj4=4ULL;
sj3<<=(sj4&63);
sj4=l7;
si5=l9;
sj3=si5?sj3:sj4;
l7=sj3;
sj4=4611686018427387904ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
sj2=l7;
sj3=2ULL;
sj2<<=(sj3&63);
sj3=l7;
si4=l9;
sj2=si4?sj2:sj3;
l11=sj2;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
l12=si2;
si1-=si2;
l9=si1;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
l10=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l4;
sj1=-1ULL;
si2=l10;
sj2=(U64)(si2);
l13=sj2;
sj1>>=(sj2&63);
l7=sj1;
sj2=l8;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l8;
sj1=l7;
si0=sj0 > sj1;
if(si0){
goto L6;
}
si0=l4;
si1=l1;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l7;
sj2=l5;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l5;
sj1=l7;
si0=sj0 > sj1;
if(si0){
goto L5;
}
si0=-96U;
si1=l9;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=80U;
si0*=si1;
si1=86960U;
si0+=si1;
si1=2126U;
si0=I32_DIV_S(si0,si1);
l1=si0;
si1=81U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
l1=si0;
si1=1100472U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=4294967295ULL;
sj0&=sj1;
l6=sj0;
sj1=l5;
sj2=l13;
sj3=63ULL;
sj2&=sj3;
l13=sj2;
sj1<<=(sj2&63);
l5=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l14=sj1;
sj0*=sj1;
l15=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
l16=sj0;
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
l17=sj1;
sj2=l14;
sj1*=sj2;
sj0+=sj1;
sj1=l17;
sj2=l5;
sj3=4294967295ULL;
sj2&=sj3;
l5=sj2;
sj1*=sj2;
l7=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l18=sj1;
sj0+=sj1;
l19=sj0;
sj0=l15;
sj1=4294967295ULL;
sj0&=sj1;
sj1=l6;
sj2=l5;
sj1*=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l7;
sj2=4294967295ULL;
sj1&=sj2;
sj0+=sj1;
sj1=2147483648ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
sj0=1ULL;
si1=0U;
si2=l9;
si3=l1;
si4=1100480U;
si3+=si4;
si3=i32_load16_u(&i->m0,(U64)si3);
si2+=si3;
si1-=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
l7=sj1;
sj0<<=(sj1&63);
l21=sj0;
sj1=-1ULL;
sj0+=sj1;
l15=sj0;
sj0=l6;
sj1=l8;
sj2=l13;
sj1<<=(sj2&63);
l5=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l8=sj1;
sj0*=sj1;
l13=sj0;
sj1=4294967295ULL;
sj0&=sj1;
sj1=l6;
sj2=l5;
sj3=4294967295ULL;
sj2&=sj3;
l5=sj2;
sj1*=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l17;
sj2=l5;
sj1*=sj2;
l5=sj1;
sj2=4294967295ULL;
sj1&=sj2;
sj0+=sj1;
sj1=2147483648ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
l22=sj0;
sj0=l17;
sj1=l8;
sj0*=sj1;
l8=sj0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l23=sj0;
sj0=l13;
sj1=32ULL;
sj0>>=(sj1&63);
l13=sj0;
si0=l1;
si1=1100482U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l1=si0;
sj0=l17;
sj1=l11;
si2=l12;
sj2=(U64)(si2);
sj1<<=(sj2&63);
l5=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l24=sj1;
sj0*=sj1;
l25=sj0;
sj1=l6;
sj2=l24;
sj1*=sj2;
l11=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l26=sj1;
sj0+=sj1;
sj1=l17;
sj2=l5;
sj3=4294967295ULL;
sj2&=sj3;
l5=sj2;
sj1*=sj2;
l27=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l28=sj1;
sj0+=sj1;
sj1=l11;
sj2=4294967295ULL;
sj1&=sj2;
sj2=l6;
sj3=l5;
sj2*=sj3;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l27;
sj3=4294967295ULL;
sj2&=sj3;
sj1+=sj2;
sj2=2147483648ULL;
sj1+=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
l29=sj1;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l27=sj0;
sj1=l7;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l10=si0;
si1=10000U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l10;
si1=1000000U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
si1=100000000U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=8U;
si1=9U;
si2=l10;
si3=1000000000U;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l30=si0;
si0=100000000U;
si1=1000000000U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
goto L1;
L15:;
si0=6U;
si1=7U;
si2=l10;
si3=10000000U;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l30=si0;
si0=1000000U;
si1=10000000U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
goto L1;
L14:;
si0=l10;
si1=100U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=2U;
si1=3U;
si2=l10;
si3=1000U;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l30=si0;
si0=100U;
si1=1000U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
goto L1;
L16:;
si0=10U;
si1=1U;
si2=l10;
si3=9U;
si2=si2 > si3;
l30=si2;
si0=si2?si0:si1;
l9=si0;
goto L1;
L13:;
si0=1100264U;
si1=28U;
si2=1102076U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1100216U;
si1=29U;
si2=1102060U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1100172U;
si1=28U;
si2=1102044U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1100100U;
si1=54U;
si2=1102028U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1100028U;
si1=55U;
si2=1102012U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1099964U;
si1=45U;
si2=1101996U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1099548U;
si1=29U;
si2=1099580U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=l4;
si3=24U;
si2+=si3;
f677(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=l4;
si3=24U;
si2+=si3;
f677(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=81U;
si2=1101816U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=4U;
si1=5U;
si2=l10;
si3=100000U;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l30=si0;
si0=10000U;
si1=100000U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
goto L1;
L2:;
si0=1101932U;
si1=45U;
si2=1101980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
sj0=l19;
sj1=l20;
sj0+=sj1;
l19=sj0;
sj0=l27;
sj1=l15;
sj0&=sj1;
l5=sj0;
si0=l30;
si1=l1;
si0-=si1;
si1=1U;
si0+=si1;
l31=si0;
sj0=l27;
sj1=l8;
sj2=l13;
sj1+=sj2;
sj2=l23;
sj1+=sj2;
sj2=l22;
sj1+=sj2;
l23=sj1;
sj0-=sj1;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
sj1=l15;
sj0&=sj1;
l8=sj0;
si0=0U;
l1=si0;
L22:;
{
si0=l10;
si1=l9;
si0=DIV_U(si0,si1);
l12=si0;
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
si1=l1;
si0+=si1;
l32=si0;
si1=l12;
si2=48U;
si1+=si2;
l33=si1;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l13;
si1=l10;
si2=l12;
si3=l9;
si2*=si3;
si1-=si2;
l10=si1;
sj1=(U64)(si1);
sj2=l7;
sj1<<=(sj2&63);
l6=sj1;
sj2=l5;
sj1+=sj2;
l11=sj1;
si0=sj0 > sj1;
if(si0){
goto L21;
}
si0=l30;
si1=l1;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=1ULL;
l6=sj0;
L26:;
{
sj0=l6;
l11=sj0;
sj0=l8;
l13=sj0;
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l2;
si1=l1;
si0+=si1;
sj1=l5;
sj2=10ULL;
sj1*=sj2;
l5=sj1;
sj2=l7;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=48U;
si1+=si2;
l9=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l11;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
sj0=l13;
sj1=10ULL;
sj0*=sj1;
l8=sj0;
sj1=l5;
sj2=l15;
sj1&=sj2;
l5=sj1;
si0=sj0 <= sj1;
if(si0){
goto L26;
}
}
sj0=l8;
sj1=l5;
sj0-=sj1;
l7=sj0;
sj1=l21;
si0=sj0 >= sj1;
l10=si0;
sj0=l6;
sj1=l27;
sj2=l19;
sj1-=sj2;
sj0*=sj1;
l15=sj0;
sj1=l6;
sj0+=sj1;
l20=sj0;
sj0=l7;
sj1=l21;
si0=sj0 < sj1;
if(si0){
goto L20;
}
sj0=l15;
sj1=l6;
sj0-=sj1;
l15=sj0;
sj1=l5;
si0=sj0 <= sj1;
if(si0){
goto L20;
}
si0=l2;
si1=l1;
si0+=si1;
si1=-1U;
si0+=si1;
l12=si0;
sj0=l13;
sj1=10ULL;
sj0*=sj1;
sj1=l21;
sj2=l5;
sj1+=sj2;
sj0-=sj1;
l17=sj0;
sj0=l21;
sj1=l15;
sj0-=sj1;
l27=sj0;
sj0=l15;
sj1=l5;
sj0-=sj1;
l14=sj0;
sj0=0ULL;
l7=sj0;
L27:;
{
sj0=l5;
sj1=l21;
sj0+=sj1;
l6=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L28;
}
sj0=l14;
sj1=l7;
sj0+=sj1;
sj1=l27;
sj2=l5;
sj1+=sj2;
si0=sj0 >= sj1;
if(si0){
goto L28;
}
si0=1U;
l10=si0;
goto L20;
L28:;
si0=l12;
si1=l9;
si2=-1U;
si1+=si2;
l9=si1;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l17;
sj1=l7;
sj0+=sj1;
l13=sj0;
sj1=l21;
si0=sj0 >= sj1;
l10=si0;
sj0=l6;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L19;
}
sj0=l7;
sj1=l21;
sj0-=sj1;
l7=sj0;
sj0=l6;
l5=sj0;
sj0=l13;
sj1=l21;
si0=sj0 >= sj1;
if(si0){
goto L27;
}
goto L19;
}
L25:;
si0=l3;
si1=l3;
si2=1101884U;
f663(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l1;
si1=l3;
si2=1101900U;
f663(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si1=10U;
si0=si0 < si1;
l12=si0;
si0=l9;
si1=10U;
si0=DIV_U(si0,si1);
l9=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L22;
}
}
si0=1101856U;
si1=25U;
si2=1101832U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l1;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L30;
}
sj0=l13;
sj1=l11;
sj0-=sj1;
l15=sj0;
si1=l9;
sj1=(U64)(si1);
sj2=l7;
sj1<<=(sj2&63);
l7=sj1;
si0=sj0 >= sj1;
l1=si0;
sj0=l27;
sj1=l19;
sj0-=sj1;
l8=sj0;
sj1=1ULL;
sj0+=sj1;
l22=sj0;
sj0=l8;
sj1=-1ULL;
sj0+=sj1;
l21=sj0;
sj1=l11;
si0=sj0 <= sj1;
if(si0){
goto L29;
}
sj0=l15;
sj1=l7;
si0=sj0 < sj1;
if(si0){
goto L29;
}
sj0=l5;
sj1=l7;
sj0+=sj1;
l11=sj0;
sj1=l16;
sj0+=sj1;
sj1=l18;
sj0+=sj1;
sj1=l20;
sj0+=sj1;
sj1=l17;
sj2=l14;
sj3=l24;
sj2-=sj3;
sj1*=sj2;
sj0+=sj1;
sj1=l26;
sj0-=sj1;
sj1=l28;
sj0-=sj1;
sj1=l29;
sj0-=sj1;
l15=sj0;
sj0=l26;
sj1=l28;
sj0+=sj1;
sj1=l29;
sj0+=sj1;
sj1=l25;
sj0+=sj1;
l8=sj0;
sj0=0ULL;
sj1=l19;
sj2=l6;
sj3=l5;
sj2+=sj3;
sj1+=sj2;
sj0-=sj1;
l20=sj0;
sj0=2ULL;
sj1=l23;
sj2=l11;
sj3=l6;
sj2+=sj3;
sj1+=sj2;
sj0-=sj1;
l14=sj0;
L31:;
{
sj0=l6;
sj1=l11;
sj0+=sj1;
l17=sj0;
sj1=l21;
si0=sj0 < sj1;
if(si0){
goto L32;
}
sj0=l20;
sj1=l8;
sj0+=sj1;
sj1=l6;
sj2=l15;
sj1+=sj2;
si0=sj0 >= sj1;
if(si0){
goto L32;
}
sj0=l6;
sj1=l5;
sj0+=sj1;
l11=sj0;
si0=1U;
l1=si0;
goto L29;
L32:;
si0=l32;
si1=l33;
si2=-1U;
si1+=si2;
l33=si1;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l5;
sj1=l7;
sj0+=sj1;
l5=sj0;
sj0=l14;
sj1=l8;
sj0+=sj1;
l27=sj0;
sj0=l17;
sj1=l21;
si0=sj0 >= sj1;
if(si0){
goto L33;
}
sj0=l11;
sj1=l7;
sj0+=sj1;
l11=sj0;
sj0=l15;
sj1=l7;
sj0+=sj1;
l15=sj0;
sj0=l8;
sj1=l7;
sj0-=sj1;
l8=sj0;
sj0=l27;
sj1=l7;
si0=sj0 >= sj1;
if(si0){
goto L31;
}
L33:;
}
sj0=l27;
sj1=l7;
si0=sj0 >= sj1;
l1=si0;
sj0=l6;
sj1=l5;
sj0+=sj1;
l11=sj0;
goto L29;
L30:;
si0=l10;
si1=l3;
si2=1101916U;
f666(i,si0,si1,si2);
UNREACHABLE;
L29:;
sj0=l22;
sj1=l11;
si0=sj0 <= sj1;
if(si0){
goto L36;
}
si0=l1;
si0=!(si0);
if(si0){
goto L36;
}
sj0=l11;
sj1=l7;
sj0+=sj1;
l5=sj0;
sj1=l22;
si0=sj0 < sj1;
if(si0){
goto L35;
}
sj0=l22;
sj1=l11;
sj0-=sj1;
sj1=l5;
sj2=l22;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L35;
}
L36:;
sj0=l11;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L37;
}
sj0=l11;
sj1=l13;
sj2=-4ULL;
sj1+=sj2;
si0=sj0 <= sj1;
if(si0){
goto L34;
}
L37:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L35:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L34:;
si0=l0;
si1=l31;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L18;
L20:;
sj0=l5;
l6=sj0;
L19:;
sj0=l20;
sj1=l6;
si0=sj0 <= sj1;
if(si0){
goto L40;
}
si0=l10;
si0=!(si0);
if(si0){
goto L40;
}
sj0=l6;
sj1=l21;
sj0+=sj1;
l5=sj0;
sj1=l20;
si0=sj0 < sj1;
if(si0){
goto L39;
}
sj0=l20;
sj1=l6;
sj0-=sj1;
sj1=l5;
sj2=l20;
sj1-=sj2;
si0=sj0 >= sj1;
if(si0){
goto L39;
}
L40:;
sj0=l11;
sj1=20ULL;
sj0*=sj1;
sj1=l6;
si0=sj0 > sj1;
if(si0){
goto L41;
}
sj0=l6;
sj1=l11;
sj2=-40ULL;
sj1*=sj2;
sj2=l8;
sj1+=sj2;
si0=sj0 <= sj1;
if(si0){
goto L38;
}
L41:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L39:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L17;
L38:;
si0=l0;
si1=l31;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L18:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L17:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f677(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
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
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
si1=l3;
si2=1103244U;
si3=l3;
si4=4U;
si3+=si4;
si4=1103244U;
si5=l3;
si6=8U;
si5+=si6;
si6=1099532U;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f678(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U64 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4,sj6,sj7,sj8;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l5;
sj1=2305843009213693951ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=-96U;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+24U);
l1=si1;
si2=-32U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=4294967296ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
l1=si1;
si2=-16U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=32ULL;
sj3<<=(sj4&63);
sj4=l5;
si5=l6;
sj3=si5?sj3:sj4;
l5=sj3;
sj4=281474976710656ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
l1=si1;
si2=-8U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=16ULL;
sj3<<=(sj4&63);
sj4=l5;
si5=l6;
sj3=si5?sj3:sj4;
l5=sj3;
sj4=72057594037927936ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
l1=si1;
si2=-4U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=8ULL;
sj3<<=(sj4&63);
sj4=l5;
si5=l6;
sj3=si5?sj3:sj4;
l5=sj3;
sj4=1152921504606846976ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
l1=si1;
si2=-2U;
si1+=si2;
si2=l1;
sj3=l5;
sj4=4ULL;
sj3<<=(sj4&63);
sj4=l5;
si5=l6;
sj3=si5?sj3:sj4;
l5=sj3;
sj4=4611686018427387904ULL;
si3=sj3 < sj4;
l6=si3;
si1=si3?si1:si2;
sj2=l5;
sj3=2ULL;
sj2<<=(sj3&63);
sj3=l5;
si4=l6;
sj2=si4?sj2:sj3;
l5=sj2;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
si1-=si2;
l6=si1;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=80U;
si0*=si1;
si1=86960U;
si0+=si1;
si1=2126U;
si0=I32_DIV_S(si0,si1);
l1=si0;
si1=81U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
l1=si0;
si1=1100472U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=4294967295ULL;
sj0&=sj1;
l8=sj0;
sj1=l5;
sj2=l5;
sj3=-1ULL;
sj2^=sj3;
sj3=63ULL;
sj2>>=(sj3&63);
sj1<<=(sj2&63);
l5=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
l9=sj1;
sj0*=sj1;
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
l7=sj1;
sj2=l9;
sj1*=sj2;
sj0+=sj1;
sj1=l7;
sj2=l5;
sj3=4294967295ULL;
sj2&=sj3;
l5=sj2;
sj1*=sj2;
l7=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l10;
sj2=4294967295ULL;
sj1&=sj2;
sj2=l8;
sj3=l5;
sj2*=sj3;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l7;
sj3=4294967295ULL;
sj2&=sj3;
sj1+=sj2;
sj2=2147483648ULL;
sj1+=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
sj0+=sj1;
l5=sj0;
si1=-64U;
si2=l6;
si3=l1;
si4=1100480U;
si3+=si4;
si3=i32_load16_u(&i->m0,(U64)si3);
si2+=si3;
si1-=si2;
l11=si1;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
l8=sj1;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l12=si0;
si0=l1;
si1=1100482U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l1=si0;
sj0=l5;
sj1=1ULL;
sj2=l8;
sj1<<=(sj2&63);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
l9=sj1;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=1102164U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 > si1;
if(si0){
goto L2;
}
L8:;
si0=l12;
si1=10000U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l12;
si1=1000000U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l12;
si1=100000000U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=8U;
si1=9U;
si2=l12;
si3=1000000000U;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l14=si0;
si0=100000000U;
si1=1000000000U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
goto L1;
L10:;
si0=6U;
si1=7U;
si2=l12;
si3=10000000U;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l14=si0;
si0=1000000U;
si1=10000000U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
goto L1;
L9:;
si0=l12;
si1=100U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=2U;
si1=3U;
si2=l12;
si3=1000U;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l14=si0;
si0=100U;
si1=1000U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
goto L1;
L11:;
si0=10U;
si1=1U;
si2=l12;
si3=9U;
si2=si2 > si3;
l14=si2;
si0=si2?si0:si1;
l6=si0;
goto L1;
L7:;
si0=1100264U;
si1=28U;
si2=1102324U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1102272U;
si1=36U;
si2=1102308U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=81U;
si2=1101816U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1102135U;
si1=33U;
si2=1102256U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=4U;
si1=5U;
si2=l12;
si3=100000U;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l14=si0;
si0=10000U;
si1=100000U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l14;
si1=l1;
si0-=si1;
si1=1U;
si0+=si1;
si0=(U32)(I32)(I16)(U16)(si0);
l15=si0;
si1=l4;
si1=(U32)(I32)(I16)(U16)(si1);
l1=si1;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l11;
si1=65535U;
si0&=si1;
l16=si0;
si0=l15;
si1=l4;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=l3;
si2=l15;
si3=l1;
si2-=si3;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l17=si0;
si1=-1U;
si0+=si1;
l18=si0;
si0=0U;
l1=si0;
L17:;
{
si0=l12;
si1=l6;
si0=DIV_U(si0,si1);
l11=si0;
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l12;
si1=l11;
si2=l6;
si1*=si2;
si0-=si1;
l12=si0;
si0=l2;
si1=l1;
si0+=si1;
si1=l11;
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l18;
si1=l1;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l14;
si1=l1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=10U;
si0=si0 < si1;
l11=si0;
si0=l6;
si1=10U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L17;
}
}
si0=1101856U;
si1=25U;
si2=1102208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l16;
si1=-1U;
si0+=si1;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l10=sj0;
sj0=1ULL;
l5=sj0;
L18:;
{
sj0=l5;
sj1=l10;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L19;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L19:;
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l2;
si1=l1;
si0+=si1;
sj1=l7;
sj2=10ULL;
sj1*=sj2;
l7=sj1;
sj2=l8;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=48U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l5;
sj1=10ULL;
sj0*=sj1;
l5=sj0;
sj0=l7;
sj1=l9;
sj0&=sj1;
l7=sj0;
si0=l17;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l0;
si1=l2;
si2=l3;
si3=l17;
si4=l15;
si5=l4;
sj6=l7;
sj7=l13;
sj8=l5;
f679(i,si0,si1,si2,si3,si4,si5,sj6,sj7,sj8);
goto L0;
L15:;
si0=l3;
si1=l3;
si2=1102224U;
f663(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l0;
si1=l2;
si2=l3;
si3=l17;
si4=l15;
si5=l4;
si6=l12;
sj6=(U64)(si6);
sj7=l8;
sj6<<=(sj7&63);
sj7=l7;
sj6+=sj7;
si7=l6;
sj7=(U64)(si7);
sj8=l8;
sj7<<=(sj8&63);
sj8=l13;
f679(i,si0,si1,si2,si3,si4,si5,sj6,sj7,sj8);
goto L0;
L13:;
si0=l1;
si1=l3;
si2=1102240U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l0;
si1=l2;
si2=l3;
si3=0U;
si4=l15;
si5=l4;
sj6=l5;
sj7=10ULL;
sj6=DIV_U(sj6,sj7);
si7=l6;
sj7=(U64)(si7);
sj8=l8;
sj7<<=(sj8&63);
sj8=l13;
f679(i,si0,si1,si2,si3,si4,si5,sj6,sj7,sj8);
L0:;
}

void f679(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U64 l7,U64 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
sj0=l7;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L6;
}
sj0=l7;
sj1=l8;
sj0-=sj1;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L5;
}
sj0=l7;
sj1=l6;
sj0-=sj1;
sj1=l6;
si0=sj0 <= sj1;
if(si0){
goto L9;
}
sj0=l7;
sj1=l6;
sj2=1ULL;
sj1<<=(sj2&63);
sj0-=sj1;
sj1=l8;
sj2=1ULL;
sj1<<=(sj2&63);
si0=sj0 >= sj1;
if(si0){
goto L8;
}
L9:;
sj0=l6;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
sj0=l7;
sj1=l6;
sj2=l8;
sj1-=sj2;
l8=sj1;
sj0-=sj1;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L7;
}
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l3;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
goto L1;
L7:;
si0=l3;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si0+=si1;
l9=si0;
si0=0U;
l10=si0;
si0=l1;
l11=si0;
L12:;
{
si0=l3;
si1=l10;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si1=l3;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=57U;
si0=si0 == si1;
if(si0){
goto L12;
}
}
si0=l12;
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
si0-=si1;
si1=1U;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l12;
si1=1U;
si0+=si1;
si1=48U;
si2=l10;
si3=-1U;
si2+=si3;
si0=f15392(i,si0,si1,si2);
goto L2;
L11:;
si0=l3;
if(si0){
goto L14;
}
si0=49U;
l10=si0;
goto L13;
L14:;
si0=l1;
si1=49U;
i32_store8(&i->m0,(U64)si0,si1);
si0=48U;
l10=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=48U;
l10=si0;
si0=l1;
si1=1U;
si0+=si1;
si1=48U;
si2=l3;
si3=-1U;
si2+=si3;
si0=f15392(i,si0,si1,si2);
L13:;
si0=l4;
si1=1U;
si0+=si1;
si0=(U32)(I32)(I16)(U16)(si0);
l4=si0;
si0=l3;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l4;
si1=l5;
si1=(U32)(I32)(I16)(U16)(si1);
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L2;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l3;
si1=l2;
si2=1102372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l2;
si2=1102340U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si2=1102356U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
i32_store16(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f680(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 si0,si1,si2;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=49U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si0=(U32)(I32)(I16)(U16)(si0);
l6=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=65535U;
si0&=si1;
l3=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L8;
}
si0=2U;
l1=si0;
goto L1;
L8:;
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=1102423U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L7:;
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=l3;
si1-=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=1102423U;
i32_store(&i->m0,(U64)si0,si1);
si0=3U;
l1=si0;
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si0-=si1;
l4=si0;
goto L2;
L6:;
si0=l5;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1102424U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
si2=l6;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=3U;
l1=si0;
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si0-=si1;
l2=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l6;
si0+=si1;
l4=si0;
goto L2;
L5:;
si0=1102135U;
si1=33U;
si2=1102528U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1102476U;
si1=33U;
si2=1102512U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1102426U;
si1=34U;
si2=1102460U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=0U;
i32_store16(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f681(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=156U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=1102892U;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l4;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l4;
si2=140U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=1102900U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L9;
default:
goto L7;
}
L9:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=32U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si1=128U;
si0+=si1;
l5=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=120U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
si5=l4;
si6=136U;
si5+=si6;
f15405(i,si0,sj1,sj2,sj3,sj4,si5);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 < si1;
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
si1=0U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+120U);
l7=sj0;
si1=l8;
si2=l10;
si3=l9;
si1=si3?si1:si2;
sj1=(U64)(si1);
l11=sj1;
sj0-=sj1;
l6=sj0;
si0=l8;
l10=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l12;
sj2=l12;
sj3=l7;
sj4=l11;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2-=sj3;
l7=sj2;
sj1^=sj2;
sj0&=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si1=104U;
si0+=si1;
l5=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=96U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
si5=l4;
si6=116U;
si5+=si6;
f15405(i,si0,sj1,sj2,sj3,sj4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l10=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+96U);
l7=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l8=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l8=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l8;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
si0=l10;
si1=0U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l7;
si1=l8;
sj1=(U64)(si1);
l11=sj1;
sj0-=sj1;
l6=sj0;
sj0=l12;
sj1=l12;
sj2=l12;
sj3=l7;
sj4=l11;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2-=sj3;
l7=sj2;
sj1^=sj2;
sj0&=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si1=88U;
si0+=si1;
l10=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=80U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l7=sj0;
si1=l8;
sj1=(U64)(si1);
l12=sj1;
sj0-=sj1;
l6=sj0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l7;
sj2=l12;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l7=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L6;
}
L18:;
si0=l2;
si1=-1U;
si0+=si1;
l8=si0;
si0=l4;
si1=72U;
si0+=si1;
l9=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L20:;
{
si0=l4;
si1=64U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+64U);
l7=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l7;
si1=l2;
sj1=(U64)(si1);
l11=sj1;
sj0-=sj1;
l6=sj0;
sj0=l12;
sj1=l7;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l7=sj0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L20;
}
goto L6;
}
L10:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L7:;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=32U;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
si0=l3;
si1=11U;
si0=si0 < si1;
l5=si0;
si0=l4;
si1=48U;
si0+=si1;
l13=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L25:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=40U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
si5=l4;
si6=60U;
si5+=si6;
f15405(i,si0,sj1,sj2,sj3,sj4,si5);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l10=si0;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
si0=l5;
if(si0){
goto L27;
}
si0=l8;
si1=10U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l8=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l8;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
L27:;
si0=l8;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L26:;
si0=l10;
si1=0U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l12;
sj1=-1ULL;
sj0^=sj1;
sj1=l12;
sj2=l12;
sj3=l7;
si4=l8;
sj4=(U64)(si4);
sj3+=sj4;
l6=sj3;
sj4=l7;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
l7=sj2;
sj1^=sj2;
sj0&=sj1;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L25;
}
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L22:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l4;
si1=32U;
si0+=si1;
l10=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L29:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=24U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l7=sj1;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
l6=sj1;
sj2=l7;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l7=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
goto L6;
}
L28:;
si0=l4;
si1=16U;
si0+=si1;
l9=si0;
sj0=0ULL;
l6=sj0;
sj0=0ULL;
l7=sj0;
L30:;
{
si0=l4;
si1=8U;
si0+=si1;
sj1=l6;
sj2=l7;
si3=l3;
sj3=(U64)(si3);
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l8=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l8=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l8;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l12;
sj1=l7;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
l6=sj1;
sj2=l7;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l7=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L30;
}
}
L6:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l1=si0;
goto L1;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f682(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
L0:;
return si0;
}

void f683(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1103160U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1097428U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
f15059(i,si0);
UNREACHABLE;
L0:;
}

void f684(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1102892U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=1102900U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L8;
default:
goto L6;
}
L8:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L6;
L7:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L6:;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l3;
sj0=(U64)(si0);
l5=sj0;
si0=0U;
l6=si0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
sj0=(U64)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l7;
si1=l9;
si2=l7;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
l9=si0;
si0=l6;
sj1=l8;
si1=(U32)(sj1);
l7=si1;
si0+=si1;
l6=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l3;
sj0=(U64)(si0);
l5=sj0;
si0=0U;
l6=si0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
si0=l6;
sj0=(U64)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l8;
si0=(U32)(sj0);
l9=si0;
si1=l7;
si0+=si1;
l6=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=0U;
l6=si0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L10;
}
L18:;
si0=0U;
l6=si0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
}
L10:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L9:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f685(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1102892U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=1102900U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L9;
default:
goto L7;
}
L9:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=0U;
l6=si0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l9;
si1=(U32)(sj1);
l10=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
si1=l11;
si2=l8;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
l11=si0;
si0=l6;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=l10;
si2=l6;
si1-=si2;
l6=si1;
si2=l10;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=0U;
l6=si0;
L16:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l9;
si1=(U32)(sj1);
l10=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=l10;
si2=l2;
si1-=si2;
l6=si1;
si2=l10;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si0*=si1;
si1=l7;
si0-=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L6;
}
L18:;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=0U;
l6=si0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si0*=si1;
si1=l2;
si0-=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L20;
}
goto L6;
}
L10:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L7:;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=l3;
si1=11U;
si0=si0 < si1;
l11=si0;
si0=0U;
l6=si0;
L25:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l7=si0;
si0=l11;
if(si0){
goto L27;
}
si0=l7;
si1=10U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L27:;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L26:;
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l9;
si1=(U32)(sj1);
l10=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l10;
si2=l7;
si1+=si2;
l6=si1;
si2=l10;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L25;
}
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L22:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=0U;
l6=si0;
L29:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
goto L6;
}
L28:;
si0=0U;
l6=si0;
L30:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L30;
}
}
L6:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f686(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=1102892U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l4;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=1102900U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L9;
default:
goto L7;
}
L9:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
sj0=(U64)(si0);
l5=sj0;
si0=l2;
si1=16U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=0ULL;
l6=sj0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=40U;
si0+=si1;
sj1=l6;
sj2=l6;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 < si1;
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+48U);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
l9=sj1;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l7;
si1=l10;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
l10=si0;
si0=l8;
sj0=(U64)(si0);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>(I64)sj1);
sj1=l9;
sj2=l6;
sj1-=sj2;
l6=sj1;
sj2=l9;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=0ULL;
l6=sj0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=24U;
si0+=si1;
sj1=l6;
sj2=l6;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l9=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l6=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
sj0=l6;
sj1=l9;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
sj0=(U64)(si0);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>(I64)sj1);
sj1=l9;
sj2=l6;
sj1-=sj2;
l6=sj1;
sj2=l9;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=0ULL;
l6=sj0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l5;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0-=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L6;
}
L18:;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
sj0=0ULL;
l6=sj0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l5;
sj0*=sj1;
si1=l2;
sj1=(U64)(si1);
sj0-=sj1;
l6=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L20;
}
goto L6;
}
L10:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L7:;
si0=l3;
sj0=(U64)(si0);
l9=sj0;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
si0=l3;
si1=11U;
si0=si0 < si1;
l8=si0;
sj0=0ULL;
l6=sj0;
L25:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=8U;
si0+=si1;
sj1=l6;
sj2=l6;
sj3=63ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l8;
if(si0){
goto L27;
}
si0=l7;
si1=10U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L27:;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L26:;
sj0=l6;
sj1=l5;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 != sj1;
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
sj0=(U64)(si0);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
sj1=l5;
sj2=l6;
sj1+=sj2;
l6=sj1;
sj2=l5;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L25;
}
}
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L22:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L28;
}
sj0=0ULL;
l6=sj0;
L29:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l9;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
goto L6;
}
L28:;
sj0=0ULL;
l6=sj0;
L30:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=-1U;
si1=l10;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l10=si1;
si2=l10;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l9;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L30;
}
}
L6:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l1=si0;
goto L1;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f687(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=1102892U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=1102900U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L8;
default:
goto L6;
}
L8:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L6;
L7:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L6:;
si0=l3;
sj0=(U64)(si0);
l5=sj0;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
sj0=0ULL;
l6=sj0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=24U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l7;
si1=l9;
si2=l7;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
l9=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l10=sj0;
si1=l8;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj1=l10;
si0=sj0 >= sj1;
if(si0){
goto L15;
}
goto L13;
}
L14:;
sj0=0ULL;
l6=sj0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=8U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l10=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l10;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj1=l10;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
sj0=0ULL;
l6=sj0;
L19:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l5;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L10;
}
L18:;
sj0=0ULL;
l6=sj0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l5;
sj0*=sj1;
si1=l7;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
}
L10:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l1=si0;
goto L1;
L9:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f688(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l0;
si1=l1;
si0=f689(i,si0,si1);
if(si0){
goto L1;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1097428U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
l3=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1102980U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f689(i,si0,si1);
l3=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f689(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L4;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
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

U32 f690(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=32U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L4;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l0;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L5:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+32U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=8U;
si1+=si2;
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=5U;
si0<<=(si1&31);
l8=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=134217727U;
si0&=si1;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l6=si0;
L7:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+32U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L8:;
si0=l3;
si1=l5;
si2=l6;
si1+=si2;
l1=si1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
case 2:
goto L9;
default:
goto L10;
}
L11:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=0U;
l7=si0;
si0=l10;
si1=l12;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=47U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L10:;
si0=1U;
l7=si0;
L9:;
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L13;
case 1:
goto L14;
case 2:
goto L12;
default:
goto L13;
}
L14:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l10;
si1=l9;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=47U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L13:;
si0=1U;
l11=si0;
L12:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=8U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l8;
si1=l6;
si2=32U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L3:;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+32U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L15:;
si0=0U;
l1=si0;
goto L1;
L2:;
si0=1U;
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

void f691(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=7912501143857784762ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1677015036563326081ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f692(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102988U;
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

U32 f693(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102999U;
si2=14U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f694(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=266U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1103040U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l0;
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

U32 f695(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f696(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=24U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1103048U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f697(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
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
goto L2;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L2;
case 9:
goto L9;
case 10:
goto L7;
case 11:
goto L2;
case 12:
goto L2;
case 13:
goto L8;
case 14:
goto L2;
case 15:
goto L2;
case 16:
goto L2;
case 17:
goto L2;
case 18:
goto L2;
case 19:
goto L2;
case 20:
goto L2;
case 21:
goto L2;
case 22:
goto L2;
case 23:
goto L2;
case 24:
goto L2;
case 25:
goto L2;
case 26:
goto L2;
case 27:
goto L2;
case 28:
goto L2;
case 29:
goto L2;
case 30:
goto L2;
case 31:
goto L2;
case 32:
goto L2;
case 33:
goto L2;
case 34:
goto L4;
case 35:
goto L2;
case 36:
goto L2;
case 37:
goto L2;
case 38:
goto L2;
case 39:
goto L3;
default:
goto L10;
}
L10:;
si0=l1;
si1=92U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L9:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=29788U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=29276U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=28252U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=23644U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=12380U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l2;
si1=65536U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=8796U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l2;
si1=256U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=10076U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=f698(i,si0);
if(si0){
goto L14;
}
L15:;
si0=l1;
si0=f699(i,si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=128U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l3;
si1=6U;
si0+=si1;
si1=2U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=125U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=l1;
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l3;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=1U;
si0|=si1;
si0=I32_CLZ(si0);
si1=2U;
si0>>=(si1&31);
si1=-2U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l3;
si1=6U;
si0+=si1;
si1=l1;
si0+=si1;
l2=si0;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1107496U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1107498U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+6U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=6U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+10U,si1);
goto L1;
L13:;
si0=l3;
si1=6U;
si0+=si1;
si1=2U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+6U,si1);
si0=l3;
si1=125U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=l1;
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l3;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=1U;
si0|=si1;
si0=I32_CLZ(si0);
si1=2U;
si0>>=(si1&31);
si1=-2U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si1=6U;
si0+=si1;
si1=l1;
si0+=si1;
l2=si0;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1107496U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1107498U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+6U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=6U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+10U,si1);
goto L1;
L12:;
si0=l1;
si1=10U;
si2=1107480U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l1;
si1=10U;
si2=1107480U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f698(rustpythonInstance*i,U32 l0) {
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
si0=33U;
l3=si0;
si0=33U;
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
si2=1121476U;
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
si1=32U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1121476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=32U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=727U;
l5=si0;
si0=31U;
l2=si0;
goto L8;
L10:;
si0=33U;
si1=33U;
si2=1107404U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=1121480U;
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
si1=1121476U;
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
si1=727U;
si2=l4;
si3=727U;
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
si2=1121608U;
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
si1=727U;
si2=1107420U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f699(rustpythonInstance*i,U32 l0) {
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
si1=1105912U;
si2=44U;
si3=1106000U;
si4=196U;
si5=1106196U;
si6=450U;
si0=f769(i,si0,si1,si2,si3,si4,si5,si6);
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
si1=1106646U;
si2=40U;
si3=1106726U;
si4=287U;
si5=1107013U;
si6=303U;
si0=f769(i,si0,si1,si2,si3,si4,si5,si6);
L0:;
return si0;
}

U32 f700(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f701(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
l8=si0;
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
l9=si0;
si0=l0;
si1=19U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l0;
si1=18U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
L3:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=l9;
i32_store16(&i->m0,(U64)si0+23U,si1);
si0=l2;
si1=25U;
si0+=si1;
si1=l9;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store16(&i->m0,(U64)si0+17U,si1);
si0=l2;
si1=19U;
si0+=si1;
si1=l5;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l2;
si1=l11;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+22U,si1);
si0=l2;
si1=l6;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=255U;
si0&=si1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=16U;
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
l9=si0;
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
si0=l9;
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
i32_store8(&i->m0,(U64)si0+20U,si1);
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
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=l12;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l14=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
L12:;
{
si0=29788U;
l0=si0;
si0=0U;
l5=si0;
si0=1U;
l7=si0;
si0=0U;
l13=si0;
si0=2U;
l4=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L19;
case 2:
goto L21;
case 3:
goto L21;
case 4:
goto L20;
case 5:
goto L21;
case 6:
goto L21;
case 7:
goto L21;
case 8:
goto L21;
case 9:
goto L21;
case 10:
goto L21;
case 11:
goto L21;
case 12:
goto L21;
case 13:
goto L21;
case 14:
goto L21;
case 15:
goto L21;
case 16:
goto L21;
case 17:
goto L21;
case 18:
goto L21;
case 19:
goto L21;
case 20:
goto L21;
case 21:
goto L21;
case 22:
goto L21;
case 23:
goto L21;
case 24:
goto L21;
case 25:
goto L16;
case 26:
goto L21;
case 27:
goto L21;
case 28:
goto L21;
case 29:
goto L21;
case 30:
goto L17;
default:
goto L22;
}
L22:;
si0=l9;
si1=92U;
si0=si0 == si1;
if(si0){
goto L18;
}
L21:;
si0=l9;
si0=(U32)(U32)(I8)(U8)(si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L15;
}
si0=l9;
si1=32U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l9;
si1=127U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l9;
si1=128U;
si2=l9;
si3=128U;
si2=si2 < si3;
si0=si2?si0:si1;
l0=si0;
si0=1U;
l5=si0;
si0=0U;
l7=si0;
si0=0U;
l13=si0;
si0=1U;
l4=si0;
goto L13;
L20:;
si0=29276U;
l0=si0;
goto L14;
L19:;
si0=28252U;
l0=si0;
goto L14;
L18:;
si0=23644U;
l0=si0;
goto L14;
L17:;
si0=10076U;
l0=si0;
goto L14;
L16:;
si0=8796U;
l0=si0;
goto L14;
L15:;
si0=4U;
l4=si0;
si0=l9;
si1=4U;
si0>>=(si1&31);
si1=1107436U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=16U;
si0<<=(si1&31);
si1=l9;
si2=15U;
si1&=si2;
si2=1107436U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=24U;
si1<<=(si2&31);
si0|=si1;
si1=30812U;
si0|=si1;
l0=si0;
si0=1U;
l13=si0;
si0=0U;
l5=si0;
si0=0U;
l7=si0;
goto L13;
L14:;
si0=0U;
l5=si0;
si0=1U;
l7=si0;
si0=0U;
l13=si0;
si0=2U;
l4=si0;
L13:;
si0=l14;
si1=l0;
si2=255U;
si1&=si2;
si2=l15;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L23;
}
si0=1U;
l16=si0;
goto L8;
L23:;
si0=1U;
l16=si0;
si0=1U;
l9=si0;
si0=l5;
if(si0){
goto L24;
}
si0=l7;
si1=l14;
si2=l0;
si3=8U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
si3=l15;
si1=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32))(i,si1,si2);
l5=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L25;
}
si0=1U;
si1=2U;
si2=l5;
si0=si2?si0:si1;
l9=si0;
goto L24;
L25:;
si0=2U;
l9=si0;
si0=l14;
si1=l0;
si2=16U;
si1>>=(si2&31);
si2=255U;
si1&=si2;
si2=l15;
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L24;
}
si0=l13;
si1=l14;
si2=l0;
si3=24U;
si2>>=(si3&31);
si3=l15;
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
l9=si0;
L24:;
si0=l9;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l12;
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
goto L26;
}
si0=l2;
si1=22U;
si0+=si1;
l7=si0;
si0=l11;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si2=l0;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l10;
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
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l14=si0;
L27:;
{
si0=l8;
si1=l0;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l2;
si1=l0;
si2=1U;
si1+=si2;
l5=si1;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l9;
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
goto L27;
}
}
si0=1U;
l16=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=l10;
si2=255U;
si1&=si2;
si0=si0 < si1;
if(si0){
goto L8;
}
L26:;
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
si0=l9;
si1=4U;
si2=1107500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=4U;
si2=1107500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=4U;
si1=4U;
si2=1107500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f702(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f703(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1103092U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=267U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f704(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f705(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=1103128U;
si2=12U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l1=si3;
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=268U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1103144U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l1;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4493808902380553279ULL;
sj0^=sj1;
si1=l2;
si2=16U;
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
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=269U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1103144U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l1;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L1;
}
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si1=52U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=267U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=3ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1103104U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
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

U32 f706(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si0=f690(i,si0,si1,si2);
L0:;
return si0;
}

U32 f707(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f708(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
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
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
si1=l3;
si2=1118308U;
si3=l3;
si4=4U;
si3+=si4;
si4=1118308U;
si5=l3;
si6=8U;
si5+=si6;
si6=1104148U;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f709(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 si0,si1,si2;
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
si1=1103260U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=2U;
l2=si0;
goto L1;
L3:;
si0=l7;
si1=1103262U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=2U;
l2=si0;
goto L1;
L2:;
si0=l7;
si1=1103264U;
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
si1=270U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=270U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=4U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=1103328U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=267U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l7;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
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
si1=l6;
f683(i,si0,si1);
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
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=84U;
si0+=si1;
si1=271U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=76U;
si0+=si1;
si1=270U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=270U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=1103364U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=267U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l7;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
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
si1=l6;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f710(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f711(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si0=f690(i,si0,si1,si2);
L0:;
return si0;
}

void f712(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
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
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=270U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1103400U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=267U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
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
si1=l4;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f713(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
goto L2;
}
si0=l4;
si0=!(si0);
if(si0){
goto L3;
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
L5:;
{
si0=l8;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=1U;
si0+=si1;
l8=si0;
si0=l9;
si1=255U;
si0&=si1;
l9=si0;
goto L6;
L7:;
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
goto L8;
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
goto L6;
L8:;
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
goto L9;
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
goto L6;
L9:;
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
goto L3;
}
si0=l4;
si1=4U;
si0+=si1;
l8=si0;
L6:;
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
goto L5;
}
goto L3;
}
L4:;
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
si0=l8;
si1=-32U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=-16U;
si0=si0 < si1;
if(si0){
goto L10;
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
goto L3;
}
L10:;
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=l2;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=0U;
l4=si0;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
goto L11;
L13:;
si0=0U;
l4=si0;
si0=l1;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
L12:;
si0=l1;
l4=si0;
L11:;
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
L3:;
si0=l3;
if(si0){
goto L14;
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
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
si1=l2;
si0=f734(i,si0,si1);
l8=si0;
goto L15;
L16:;
si0=l2;
if(si0){
goto L17;
}
si0=0U;
l8=si0;
goto L15;
L17:;
si0=l2;
si1=3U;
si0&=si1;
l9=si0;
si0=l2;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=0U;
l8=si0;
si0=0U;
l4=si0;
goto L18;
L19:;
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
goto L18;
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
goto L18;
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
L18:;
si0=l9;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=l4;
si0+=si1;
l4=si0;
L20:;
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
goto L20;
}
}
L15:;
si0=l6;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=l6;
si1=l8;
si0-=si1;
l8=si0;
l7=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L21;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L21;
default:
goto L21;
}
L23:;
si0=0U;
l7=si0;
si0=l8;
l4=si0;
goto L21;
L22:;
si0=l8;
si1=1U;
si0>>=(si1&31);
l4=si0;
si0=l8;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l7=si0;
L21:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
L25:;
{
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l6;
si1=l8;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L25;
}
}
si0=1U;
goto L0;
L24:;
si0=1U;
l4=si0;
si0=l8;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l6;
si1=l1;
si2=l2;
si3=l9;
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
si0=l6;
si1=l8;
si2=l9;
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
L2:;
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

U32 f714(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l11;
si1=l12;
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
si0=l8;
si1=l2;
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
si1=1103440U;
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

U32 f715(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=1103447U;
si2=1103444U;
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
si1=1103396U;
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
si1=1103449U;
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
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=1103416U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l5;
si2=23U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l5;
sj1=l10;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si0=f714(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si1=1103396U;
si2=2U;
si0=f714(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=l5;
si2=24U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=1103452U;
si2=2U;
si3=l5;
si3=i32_load(&i->m0,(U64)si3+48U);
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

U32 f716(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=1U;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103447U;
si2=1103464U;
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
L3:;
si0=l4;
if(si0){
goto L4;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103465U;
si2=2U;
si3=l6;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l5=si0;
si0=0U;
l4=si0;
goto L1;
L5:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
L4:;
si0=1U;
l5=si0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=1103416U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l3;
si2=23U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l3;
si2=24U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=1103452U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+48U);
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

void f717(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=1103447U;
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
si1=1103468U;
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
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=1103416U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l3;
si2=23U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l3;
si2=24U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=1103452U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+48U);
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

U32 f718(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=1103447U;
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
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1103560U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1097428U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1103600U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1103468U;
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
si1=48U;
si0+=si1;
si1=1103416U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l3;
si2=24U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=1103396U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+48U);
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
si1=1103396U;
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
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f719(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
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
si1=48U;
si0+=si1;
si1=1103416U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+32U);
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l3;
si2=24U;
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
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1103664U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1097428U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1103672U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=1103452U;
si2=2U;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+48U);
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
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f720(rustpythonInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
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
si0=1102584U;
si1=1102585U;
si2=1097428U;
si3=l2;
si1=si3?si1:si2;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
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
si1=1102586U;
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
si0=1097428U;
l12=si0;
goto L6;
L10:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1102589U;
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
si1=1102424U;
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
f678(i,si0,si1,si2,si3,si4);
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
f674(i,si0,si1,si2,si3,si4);
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
f680(i,si0,si1,si2,si3,si4,si5,si6);
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
si1=1102592U;
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
si1=1102424U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l13=si0;
goto L6;
L12:;
si0=1102748U;
si1=37U;
si2=1102788U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1102592U;
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
si0=f721(i,si0,si1);
l6=si0;
si0=l4;
si1=1136U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f721(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1097428U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f736(i,si0,si1,si2);
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
l1=si0;
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
si0=0U;
l4=si0;
si0=l1;
l5=si0;
goto L16;
L17:;
si0=l1;
si1=1U;
si0>>=(si1&31);
l5=si0;
si0=l1;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f736(i,si0,si1,si2);
l5=si0;
goto L13;
L14:;
si0=l6;
si1=l1;
si2=l2;
si0=f736(i,si0,si1,si2);
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

U32 f722(rustpythonInstance*i,U32 l0,F32 l1,U32 l2,U32 l3) {
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
si0=3U;
l6=si0;
sf0=l1;
sf1=INFINITY;
si0=sf0 == sf1;
if(si0){
goto L1;
}
si0=3U;
l6=si0;
sf0=l1;
sf1=-INFINITY;
si0=sf0 == sf1;
if(si0){
goto L1;
}
sf0=l1;
sf1=l1;
si0=sf0 == sf1;
if(si0){
goto L2;
}
si0=2U;
l6=si0;
goto L1;
L2:;
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
goto L4;
case 2:
goto L3;
default:
goto L1;
}
L4:;
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
L3:;
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
goto L10;
}
si0=1102584U;
si1=1102585U;
si2=1097428U;
si3=l2;
si1=si3?si1:si2;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
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
goto L9;
case 1:
goto L8;
case 2:
goto L7;
default:
goto L9;
}
L10:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1102586U;
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
si0=1097428U;
l7=si0;
goto L5;
L9:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1102589U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
goto L5;
L8:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L6;
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
si1=1102424U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
goto L5;
L7:;
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
goto L11;
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
f678(i,si0,si1,si2,si3,si4);
si0=l6;
si0=(U32)(I32)(I16)(U16)(si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+1040U);
if(si0){
goto L13;
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
f674(i,si0,si1,si2,si3,si4);
goto L12;
L13:;
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
L12:;
si0=l4;
si0=i32_load16_s(&i->m0,(U64)si0+1096U);
l11=si0;
si1=l6;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
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
f680(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
goto L5;
L14:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1040U,si1);
si0=l3;
if(si0){
goto L15;
}
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1102592U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
goto L5;
L15:;
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
si1=1102424U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
goto L5;
L11:;
si0=1102748U;
si1=37U;
si2=1102788U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l4;
si1=1102592U;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=1040U;
si0+=si1;
l11=si0;
L5:;
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
si0=f721(i,si0,si1);
l5=si0;
si0=l4;
si1=1136U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f723(rustpythonInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
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
si0=1102584U;
si1=1102585U;
si2=1097428U;
si3=l2;
si1=si3?si1:si2;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
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
f676(i,si0,si1,si2,si3);
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
f671(i,si0,si1,si2,si3);
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
f680(i,si0,si1,si2,si3,si4,si5,si6);
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
si1=1102586U;
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
si0=1097428U;
l13=si0;
goto L6;
L8:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1102589U;
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
si1=1102424U;
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
si1=1102592U;
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
si0=f721(i,si0,si1);
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f724(rustpythonInstance*i,U32 l0,F32 l1,U32 l2,U32 l3) {
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
si0=3U;
l6=si0;
sf0=l1;
sf1=INFINITY;
si0=sf0 == sf1;
if(si0){
goto L1;
}
si0=3U;
l6=si0;
sf0=l1;
sf1=-INFINITY;
si0=sf0 == sf1;
if(si0){
goto L1;
}
sf0=l1;
sf1=l1;
si0=sf0 == sf1;
if(si0){
goto L2;
}
si0=2U;
l6=si0;
goto L1;
L2:;
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
goto L4;
case 2:
goto L3;
default:
goto L1;
}
L4:;
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
L3:;
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
goto L8;
}
si0=1102584U;
si1=1102585U;
si2=1097428U;
si3=l2;
si1=si3?si1:si2;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
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
goto L7;
case 1:
goto L6;
case 2:
goto L9;
default:
goto L7;
}
L9:;
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
f676(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L11;
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
f671(i,si0,si1,si2,si3);
goto L10;
L11:;
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
L10:;
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
f680(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L5;
L8:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1102586U;
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
si0=1097428U;
l11=si0;
goto L5;
L7:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1102589U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
goto L5;
L6:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+32U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L12;
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
si1=1102424U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
goto L5;
L12:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1102592U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
L5:;
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
si0=f721(i,si0,si1);
l5=si0;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f725(rustpythonInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
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
si0=1102584U;
si1=1102585U;
si2=1097428U;
si3=l2;
si1=si3?si1:si2;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
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
si0=1102700U;
si1=29U;
si2=1102732U;
f673(i,si0,si1,si2);
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
si0=1102620U;
si1=61U;
si2=1102684U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1102589U;
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
si1=1102593U;
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
si1=1102599U;
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
si1=1102424U;
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
f678(i,si0,si1,si2,si3,si4);
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
f674(i,si0,si1,si2,si3,si4);
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
si1=1102423U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1056U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1044U,si1);
si0=3U;
l6=si0;
si0=l13;
si1=l3;
si0=si0 >= si1;
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
si1=1102586U;
i32_store(&i->m0,(U64)si0+1036U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+1032U,si1);
si0=1U;
l6=si0;
si0=0U;
l2=si0;
si0=1097428U;
l12=si0;
goto L1;
L5:;
si0=l6;
si1=1024U;
si2=1102604U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1102135U;
si1=33U;
si2=1102568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1102476U;
si1=33U;
si2=1102552U;
f673(i,si0,si1,si2);
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
si1=1102544U;
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
si1=1102546U;
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
si0=f721(i,si0,si1);
l6=si0;
si0=l4;
si1=1152U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f726(rustpythonInstance*i,U32 l0,F32 l1,U32 l2,U32 l3) {
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
si0=3U;
l6=si0;
sf0=l1;
sf1=INFINITY;
si0=sf0 == sf1;
if(si0){
goto L1;
}
si0=3U;
l6=si0;
sf0=l1;
sf1=-INFINITY;
si0=sf0 == sf1;
if(si0){
goto L1;
}
sf0=l1;
sf1=l1;
si0=sf0 == sf1;
if(si0){
goto L2;
}
si0=2U;
l6=si0;
goto L1;
L2:;
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
goto L4;
case 2:
goto L3;
default:
goto L1;
}
L4:;
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
L3:;
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
goto L12;
}
si0=1102584U;
si1=1102585U;
si2=1097428U;
si3=l2;
si1=si3?si1:si2;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
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
goto L11;
case 1:
goto L10;
case 2:
goto L13;
default:
goto L11;
}
L13:;
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
f676(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L15;
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
f671(i,si0,si1,si2,si3);
goto L14;
L15:;
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
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=49U;
si0=si0 < si1;
if(si0){
goto L8;
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
goto L7;
}
goto L6;
L12:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1102586U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=1U;
l6=si0;
si0=0U;
l5=si0;
si0=1097428U;
l11=si0;
goto L5;
L11:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1102589U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
goto L5;
L10:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1102596U;
si2=1102593U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L5;
L9:;
si0=1102135U;
si1=33U;
si2=1102568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1102476U;
si1=33U;
si2=1102552U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
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
si1=1102423U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+36U,si1);
si0=3U;
l6=si0;
L6:;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
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
si1=1102545U;
si2=1102544U;
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
goto L16;
L17:;
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
si1=1102548U;
si2=1102546U;
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
L16:;
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
L5:;
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
si0=f721(i,si0,si1);
l5=si0;
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f727(rustpythonInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
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
si0=1102584U;
si1=1102585U;
si2=1097428U;
si3=l2;
si1=si3?si1:si2;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
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
f676(i,si0,si1,si2,si3);
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
f671(i,si0,si1,si2,si3);
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
si1=1102586U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2U;
i32_store16(&i->m0,(U64)si0+24U,si1);
si0=1U;
l6=si0;
si0=0U;
l2=si0;
si0=1097428U;
l13=si0;
goto L6;
L12:;
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1102589U;
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
si1=1102596U;
si2=1102593U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L6;
L10:;
si0=1102135U;
si1=33U;
si2=1102568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1102476U;
si1=33U;
si2=1102552U;
f673(i,si0,si1,si2);
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
si1=1102423U;
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
si1=1102545U;
si2=1102544U;
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
si1=1102548U;
si2=1102546U;
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
si0=f721(i,si0,si1);
l6=si0;
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f728(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f729(rustpythonInstance*i,U32 l0,U32 l1) {
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


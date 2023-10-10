#include "w2c2_base.h"

#include "rustpython.h"

U32 f7430(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
f5577(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+16U);
l4=sj4;
f7431(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
L4:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
sj1=l6;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L5:;
sj0=l6;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l6;
si1=(U32)(sj1);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si0=si0 == si1;
if(si0){
goto L9;
}
L11:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
goto L6;
L10:;
si0=l2;
si1=l2;
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
si0=l0;
si1=4U;
si0+=si1;
si1=l5;
sj2=l4;
si3=l2;
sj4=l6;
f7429(i,si0,si1,sj2,si3,sj4);
L9:;
si0=0U;
l7=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L2;
}
si0=0U;
l7=si0;
si0=l0;
si1=0U;
f1352(i,si0,si1);
goto L2;
L8:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L6;
}
L7:;
si0=l0;
si1=0U;
f1352(i,si0,si1);
L6:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l4;
f7431(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l7;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f7431(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l4;
sj1=l4;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l6=sj1;
sj0^=sj1;
sj1=l6;
sj0-=sj1;
l7=sj0;
si0=1U;
l8=si0;
si0=0U;
l9=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l10;
si1=16U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L8;
}
L9:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L8:;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
sj0=(U64)(si0);
l13=sj0;
sj0=l7;
l14=sj0;
sj0=l7;
l6=sj0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L15:;
{
sj0=l6;
sj1=l13;
sj0&=sj1;
l15=sj0;
sj0=l14;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l16=sj0;
sj0=l14;
sj1=l6;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
si0=l12;
sj1=l15;
si1=(U32)(sj1);
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=2ULL;
sj0+=sj1;
l14=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L16;
}
sj0=l14;
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
si0=l17;
si1=l8;
si2=l9;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l17=si0;
sj0=l16;
l14=sj0;
si0=1U;
l9=si0;
goto L15;
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l17;
si2=l8;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=-2ULL;
sj2=-1ULL;
si3=l9;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f1354(i,si0);
goto L1;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
sj1=l15;
si1=(U32)(sj1);
si2=4U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L14;
}
sj0=l16;
l14=sj0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l4;
si0=sj0 != sj1;
if(si0){
goto L15;
}
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l1;
f1354(i,si0);
L19:;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l11;
si3=4U;
si4=l2;
f11425(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l10=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l10;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=1U;
si0&=si1;
l10=si0;
goto L12;
L14:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
f1354(i,si0);
goto L5;
L13:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l2;
f5571(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l10=si0;
L12:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
sj0=l16;
l14=sj0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
f5522(i,si0);
sj0=l16;
l14=sj0;
goto L7;
L11:;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
goto L2;
L6:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l11;
f5522(i,si0);
L5:;
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l11;
f5522(i,si0);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7432(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2068(i,si1,si2,si3);
l5=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l5;
f7433(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
L7:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=8U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L8:;
sj0=l7;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l7;
si1=(U32)(sj1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=24U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
L14:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
goto L10;
L13:;
si0=l2;
si1=l2;
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
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l6;
sj2=l5;
si3=l2;
si4=l3;
sj5=l7;
f7428(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l3=si0;
goto L6;
L12:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L10;
}
L11:;
si0=l0;
si1=0U;
f1352(i,si0,si1);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l5;
f7433(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
goto L7;
L9:;
}
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
l3=si0;
L6:;
si0=0U;
l8=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L15;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l8;
L0:;
return si0;
}

void f7433(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l4;
sj1=l4;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l6=sj1;
sj0^=sj1;
sj1=l6;
sj0-=sj1;
l7=sj0;
si0=1U;
l8=si0;
si0=0U;
l9=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l10;
si1=16U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L7;
}
L8:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L7:;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
sj0=(U64)(si0);
l13=sj0;
sj0=l7;
l14=sj0;
sj0=l7;
l6=sj0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L11:;
{
sj0=l6;
sj1=l13;
sj0&=sj1;
l15=sj0;
sj0=l14;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l16=sj0;
sj0=l14;
sj1=l6;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
si0=l12;
sj1=l15;
si1=(U32)(sj1);
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=2ULL;
sj0+=sj1;
l14=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
sj0=l14;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
default:
goto L14;
}
L14:;
si0=l17;
si1=l8;
si2=l9;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l17=si0;
sj0=l16;
l14=sj0;
si0=1U;
l9=si0;
goto L11;
L13:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l17;
si2=l8;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=-2ULL;
sj2=-1ULL;
si3=l9;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f1354(i,si0);
goto L2;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
sj1=l15;
si1=(U32)(sj1);
si2=24U;
si1*=si2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L10;
}
sj0=l16;
l14=sj0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l4;
si0=sj0 != sj1;
if(si0){
goto L11;
}
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l1;
f1354(i,si0);
L15:;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si3=l11;
f5595(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l10=si0;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
sj0=l16;
l14=sj0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l11;
f5522(i,si0);
sj0=l16;
l14=sj0;
goto L6;
L10:;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
f1354(i,si0);
goto L3;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l11;
f5522(i,si0);
goto L2;
L4:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l11;
f5522(i,si0);
L3:;
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f7434(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2068(i,si1,si2,si3);
l5=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l5;
f7433(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
L7:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=8U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L8:;
sj0=l7;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l7;
si1=(U32)(sj1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=24U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0=si0 == si1;
if(si0){
goto L9;
}
L14:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
goto L10;
L13:;
si0=l2;
si1=l2;
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
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l6;
sj2=l5;
si3=l2;
si4=l3;
sj5=l7;
f7428(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l3=si0;
goto L6;
L12:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L10;
}
L11:;
si0=l0;
si1=0U;
f1352(i,si0,si1);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l5;
f7433(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
goto L7;
L9:;
}
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
l3=si0;
L6:;
si0=0U;
l8=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L15;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l8;
L0:;
return si0;
}

U32 f7435(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
f5577(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l4;
sj4=i64_load(&i->m0,(U64)si4+16U);
l5=sj4;
f7436(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
L6:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=8U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
sj0=l7;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l7;
si1=(U32)(sj1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=24U;
si1*=si2;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
L13:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L10;
}
goto L9;
L12:;
si0=l2;
si1=l2;
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
goto L4;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l6;
sj2=l5;
si3=l2;
si4=l3;
sj5=l7;
f7428(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l3=si0;
goto L5;
L11:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L9;
}
L10:;
si0=l0;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l5;
f7436(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
goto L6;
L8:;
}
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
l3=si0;
L5:;
si0=0U;
l8=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L14;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L14:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l8;
L0:;
return si0;
}

void f7436(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l4;
sj1=l4;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l6=sj1;
sj0^=sj1;
sj1=l6;
sj0-=sj1;
l7=sj0;
si0=1U;
l8=si0;
si0=0U;
l9=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l10;
si1=16U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L8;
}
L9:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L8:;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
sj0=(U64)(si0);
l13=sj0;
sj0=l7;
l14=sj0;
sj0=l7;
l6=sj0;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L15:;
{
sj0=l6;
sj1=l13;
sj0&=sj1;
l15=sj0;
sj0=l14;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l16=sj0;
sj0=l14;
sj1=l6;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
si0=l12;
sj1=l15;
si1=(U32)(sj1);
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=2ULL;
sj0+=sj1;
l14=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L16;
}
sj0=l14;
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
si0=l17;
si1=l8;
si2=l9;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l17=si0;
sj0=l16;
l14=sj0;
si0=1U;
l9=si0;
goto L15;
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l17;
si2=l8;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=-2ULL;
sj2=-1ULL;
si3=l9;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f1354(i,si0);
goto L1;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
sj1=l15;
si1=(U32)(sj1);
si2=24U;
si1*=si2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L14;
}
sj0=l16;
l14=sj0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l4;
si0=sj0 != sj1;
if(si0){
goto L15;
}
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l1;
f1354(i,si0);
L19:;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l11;
si3=4U;
si4=l2;
f11425(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l10=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l10;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=1U;
si0&=si1;
l10=si0;
goto L12;
L14:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
f1354(i,si0);
goto L5;
L13:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l2;
f5571(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l10=si0;
L12:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
sj0=l16;
l14=sj0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
f5522(i,si0);
sj0=l16;
l14=sj0;
goto L7;
L11:;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
goto L2;
L6:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l11;
f5522(i,si0);
L5:;
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l11;
f5522(i,si0);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7437(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj5;
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
si4=l3;
si5=l1;
si6=96U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=224U;
si5+=si6;
si6=l2;
si7=l3;
sj5=f2068(i,si5,si6,si7);
l6=sj5;
f7438(i,si0,si1,si2,si3,si4,sj5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
L7:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=8U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L8:;
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l9;
si2=24U;
si1*=si2;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
L14:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
goto L10;
L13:;
si0=l3;
if(si0){
goto L16;
}
si0=1U;
l9=si0;
goto L15;
L16:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
L15:;
si0=l9;
si1=l2;
si2=l3;
si0=f15143(i,si0,si1,si2);
l9=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l7;
sj2=l6;
si3=l5;
si4=8U;
si3+=si4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+88U);
si5=8U;
si4+=si5;
si3=f8912(i,si3,si4);
si4=l4;
sj5=l8;
f7428(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l4=si0;
goto L6;
L12:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L10;
}
L11:;
si0=l0;
si1=0U;
f1352(i,si0,si1);
L10:;
si0=l5;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
sj5=l6;
f7438(i,si0,si1,si2,si3,si4,sj5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
goto L7;
L9:;
}
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
l4=si0;
L6:;
si0=0U;
l9=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L17;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L17:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l9=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l4;
f5522(i,si0);
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l9;
L0:;
return si0;
}

void f7438(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5) {
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
sj0=l5;
sj1=l5;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l7=sj1;
sj0^=sj1;
sj1=l7;
sj0-=sj1;
l8=sj0;
si0=1U;
l9=si0;
si0=0U;
l10=si0;
L4:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l11;
si1=16U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l12;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l13;
si4=l11;
si3=si3 == si4;
l11=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L5;
}
L6:;
si0=l1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L5:;
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
sj0=(U64)(si0);
l14=sj0;
sj0=l8;
l7=sj0;
sj0=l8;
l15=sj0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L8:;
{
sj0=l15;
sj1=l14;
sj0&=sj1;
l16=sj0;
sj0=l7;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l17=sj0;
sj0=l7;
sj1=l15;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l15=sj0;
si0=l12;
sj1=l16;
si1=(U32)(sj1);
l11=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
sj1=2ULL;
sj0+=sj1;
l7=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L9;
}
sj0=l7;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l18;
si1=l11;
si2=l10;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l18=si0;
sj0=l17;
l7=sj0;
si0=1U;
l10=si0;
goto L8;
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l18;
si2=l11;
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=-2ULL;
sj2=-1ULL;
si3=l10;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f1354(i,si0);
goto L2;
L9:;
sj0=l17;
l7=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
sj1=l16;
si1=(U32)(sj1);
si2=24U;
si1*=si2;
si0+=si1;
l9=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l5;
si0=sj0 != sj1;
if(si0){
goto L8;
}
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f1354(i,si0);
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l12;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l12;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=0U;
l9=si0;
si0=l12;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l12;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l4;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l9=si0;
goto L14;
L15:;
si0=l6;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
f8911(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+200U);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
si2=l9;
si3=0U;
si1=f5980(i,si1,si2,si3);
l9=si1;
si2=l2;
si3=l12;
f5595(i,si0,si1,si2,si3);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l9;
f5522(i,si0);
L16:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l9=si0;
L14:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=0U;
l9=si0;
sj0=l17;
l7=sj0;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l12;
f5522(i,si0);
sj0=l17;
l7=sj0;
goto L4;
L13:;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
f5522(i,si0);
goto L2;
L3:;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l12;
f5522(i,si0);
L17:;
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f7439(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj4,sj5;
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
si4=l1;
si4=i32_load(&i->m0,(U64)si4+96U);
si5=224U;
si4+=si5;
si5=l2;
si5=i32_load(&i->m0,(U64)si5);
l5=si5;
si6=l2;
si6=i32_load(&i->m0,(U64)si6+8U);
sj4=f2068(i,si4,si5,si6);
l6=sj4;
f7440(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
L7:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=8U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L8:;
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l9;
si2=24U;
si1*=si2;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
L14:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
goto L10;
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
if(si0){
goto L16;
}
si0=1U;
l2=si0;
goto L15;
L16:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
L15:;
si0=l2;
si1=l5;
si2=l9;
si0=f15143(i,si0,si1,si2);
l2=si0;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l7;
sj2=l6;
si3=l4;
si4=8U;
si3+=si4;
si4=l1;
si4=i32_load(&i->m0,(U64)si4+88U);
si5=8U;
si4+=si5;
si3=f8912(i,si3,si4);
si4=l3;
sj5=l8;
f7428(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l3=si0;
goto L6;
L12:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L10;
}
L11:;
si0=l0;
si1=0U;
f1352(i,si0,si1);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l6;
f7440(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
goto L7;
L9:;
}
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
l3=si0;
L6:;
si0=0U;
l9=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L17;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l9=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l9;
L0:;
return si0;
}

void f7440(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l4;
sj1=l4;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l6=sj1;
sj0^=sj1;
sj1=l6;
sj0-=sj1;
l7=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=1U;
l10=si0;
si0=0U;
l11=si0;
L4:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
l12=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l12;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l13;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L5;
}
L6:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L5:;
si0=l10;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
sj0=(U64)(si0);
l14=sj0;
sj0=l7;
l6=sj0;
sj0=l7;
l15=sj0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L8:;
{
sj0=l15;
sj1=l14;
sj0&=sj1;
l16=sj0;
sj0=l6;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l17=sj0;
sj0=l6;
sj1=l15;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l15=sj0;
si0=l12;
sj1=l16;
si1=(U32)(sj1);
l3=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
sj1=2ULL;
sj0+=sj1;
l6=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L9;
}
sj0=l6;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l18;
si1=l3;
si2=l11;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l18=si0;
sj0=l17;
l6=sj0;
si0=1U;
l11=si0;
goto L8;
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l18;
si2=l3;
si3=l11;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=-2ULL;
sj2=-1ULL;
si3=l11;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f1354(i,si0);
goto L2;
L9:;
sj0=l17;
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
sj1=l16;
si1=(U32)(sj1);
si2=24U;
si1*=si2;
si0+=si1;
l10=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l4;
si0=sj0 != sj1;
if(si0){
goto L8;
}
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f1354(i,si0);
L12:;
si0=l5;
si1=8U;
si0+=si1;
si1=l9;
si2=l8;
si3=l2;
si4=l12;
f7460(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l10=si0;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=0U;
l10=si0;
sj0=l17;
l6=sj0;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l12;
f5522(i,si0);
sj0=l17;
l6=sj0;
goto L4;
L13:;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l12;
f5522(i,si0);
goto L2;
L3:;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l12;
f5522(i,si0);
L14:;
si0=l0;
sj1=l16;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7441(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5577(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj4=i64_load(&i->m0,(U64)si4+16U);
l6=sj4;
f7436(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l1;
si1=24U;
si0+=si1;
l9=si0;
L4:;
{
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L5;
}
si0=0U;
l10=si0;
si0=0U;
l5=si0;
goto L2;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l10;
si1=16U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L6;
}
L7:;
si0=l1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L6:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
sj1=l8;
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l10;
si1=l10;
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
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=0U;
l5=si0;
goto L2;
L9:;
si0=l1;
f1354(i,si0);
si0=0U;
l5=si0;
goto L2;
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1354(i,si0);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l6;
f7436(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L2:;
si0=l0;
si1=l10;
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
f14795(i);
UNREACHABLE;
L0:;
}

void f7442(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l2;
si6=96U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=224U;
si5+=si6;
si6=l3;
si7=l4;
sj5=f2068(i,si5,si6,si7);
l6=sj5;
f7438(i,si0,si1,si2,si3,si4,sj5);
si0=1U;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l1;
si1=24U;
si0+=si1;
l10=si0;
L4:;
{
sj0=l9;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L5;
}
si0=0U;
l11=si0;
si0=0U;
l7=si0;
goto L2;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l11;
si1=16U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l12;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l13;
si4=l11;
si3=si3 == si4;
l11=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L6;
}
L7:;
si0=l1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L6:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
sj1=l9;
si1=(U32)(sj1);
l11=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l12;
si1=l11;
si2=24U;
si1*=si2;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l11;
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
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=0U;
l7=si0;
goto L2;
L9:;
si0=l1;
f1354(i,si0);
si0=0U;
l7=si0;
goto L2;
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1354(i,si0);
L10:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj5=l6;
f7438(i,si0,si1,si2,si3,si4,sj5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
L2:;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7443(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2068(i,si1,si2,si3);
l5=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l5;
f7433(i,si0,si1,si2,si3,sj4);
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l1;
si1=24U;
si0+=si1;
l9=si0;
L5:;
{
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L6;
}
si0=0U;
l10=si0;
si0=0U;
l6=si0;
goto L3;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l10;
si1=16U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L7;
}
L8:;
si0=l1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L7:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
sj1=l8;
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l11;
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
goto L3;
L10:;
si0=l1;
f1354(i,si0);
si0=0U;
l6=si0;
goto L3;
L9:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
f1354(i,si0);
L11:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l5;
f7433(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L3:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7444(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l4;
f7433(i,si0,si1,si2,si3,sj4);
si0=1U;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l1;
si1=24U;
si0+=si1;
l9=si0;
L4:;
{
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L5;
}
si0=0U;
l10=si0;
si0=0U;
l6=si0;
goto L2;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l10;
si1=16U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L6;
}
L7:;
si0=l1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L6:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
sj1=l8;
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
goto L2;
L9:;
si0=l1;
f1354(i,si0);
si0=0U;
l6=si0;
goto L2;
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1354(i,si0);
L10:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l4;
f7433(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L2:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7445(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
si1=224U;
si0+=si1;
si1=l3;
sj0=f7599(i,si0,si1);
l5=sj0;
sj1=l5;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l6=sj1;
sj0^=sj1;
sj1=l6;
sj0-=sj1;
l7=sj0;
si0=1U;
l8=si0;
L2:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l9;
si1=16U;
si0+=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=l10;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l11;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L3;
}
L4:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L3:;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
sj0=(U64)(si0);
l12=sj0;
sj0=l7;
l13=sj0;
sj0=l7;
l6=sj0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
sj0=l13;
l14=sj0;
L6:;
{
sj0=l6;
sj1=l12;
sj0&=sj1;
l15=sj0;
sj0=l14;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l13=sj0;
sj0=l14;
sj1=l6;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
si0=l9;
sj1=l15;
si1=(U32)(sj1);
l10=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
sj1=2ULL;
sj0+=sj1;
l15=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L7;
}
sj0=l13;
l14=sj0;
sj0=l15;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L6;
case 1:
goto L8;
default:
goto L6;
}
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l11=si0;
si0=0U;
l10=si0;
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f1354(i,si0);
si0=0U;
l11=si0;
si0=0U;
l10=si0;
goto L1;
L7:;
sj0=l13;
l14=sj0;
si0=l1;
si1=16U;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
sj1=l16;
si1=(U32)(sj1);
l11=si1;
si2=24U;
si1*=si2;
l18=si1;
si0+=si1;
l8=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l5;
si0=sj0 != sj1;
if(si0){
goto L6;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=l9;
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
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1354(i,si0);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
si3=l9;
f7446(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L12;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l8=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=255U;
si0&=si1;
l20=si0;
si1=0U;
si0=si0 != si1;
l8=si0;
si0=l20;
if(si0){
goto L11;
}
si0=l19;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l9;
f5522(i,si0);
goto L2;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l10=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l9;
f5522(i,si0);
goto L1;
L11:;
si0=l19;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l9;
f5522(i,si0);
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0&=si1;
if(si0){
goto L15;
}
si0=l9;
si1=16U;
si0+=si1;
l19=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l1;
si1=l19;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l20=si2;
si3=l20;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L14;
}
L15:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L14:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=l18;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l10;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l10=si0;
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f1354(i,si0);
goto L1;
L16:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f1354(i,si0);
goto L2;
L9:;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7446(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l3;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=(U32)(sj0);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
sj1=l7;
sj2=4294967295ULL;
si1=sj1 > sj2;
si0|=si1;
si0=!(si0);
l6=si0;
L3:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si2=l5;
si3=l1;
si3=i32_load(&i->m0,(U64)si3);
si2=si2 == si3;
si1&=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=257U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+96U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5913(i,si0,si1,si2);
l8=si0;
L13:;
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=l8;
si0=f5991(i,si0,si1,si2);
l9=si0;
goto L11;
L12:;
si0=l1;
si1=5U;
si0+=si1;
l1=si0;
si1=l5;
si2=1316U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l5;
si1=1308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
L11:;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L16:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l6;
si1=l8;
si0=si0 != si1;
if(si0){
goto L16;
}
}
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=11U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=17346372U;
si3=13U;
si4=l4;
si5=44U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=1U;
l10=si0;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L14;
}
L15:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=17346372U;
si3=13U;
si4=l4;
si5=44U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+17U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+19U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L5;
L17:;
si0=l10;
if(si0){
goto L6;
}
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=11U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=17346372U;
si3=13U;
si4=l4;
si5=44U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+17U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+19U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L5;
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+17U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+19U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L5;
L10:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l1;
si1=l6;
si2=17346456U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=2U;
l5=si0;
goto L5;
L6:;
si0=17402954U;
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l6=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L23;
case 2:
goto L19;
case 3:
goto L18;
case 4:
goto L22;
case 5:
goto L21;
default:
goto L20;
}
L23:;
si0=1U;
l6=si0;
si0=17403154U;
l1=si0;
goto L20;
L22:;
si0=2U;
l6=si0;
si0=17416680U;
l1=si0;
goto L20;
L21:;
si0=2U;
l6=si0;
si0=17416682U;
l1=si0;
L20:;
si0=2U;
l5=si0;
si0=l2;
si1=l9;
si2=l3;
si3=l1;
si4=l6;
si0=f11753(i,si0,si1,si2,si3,si4);
l1=si0;
goto L5;
L19:;
si0=1U;
si1=257U;
si2=l9;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
goto L5;
L18:;
si0=257U;
si1=1U;
si2=l9;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
L5:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L26;
}
si0=l0;
si1=l1;
si2=l2;
f5571(i,si0,si1,si2);
goto L24;
L26:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=8U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L24;
L25:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L24:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l9;
f5522(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7447(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l2;
si4=i32_load(&i->m0,(U64)si4+96U);
si5=224U;
si4+=si5;
si5=l3;
si5=i32_load(&i->m0,(U64)si5);
si6=l3;
si6=i32_load(&i->m0,(U64)si6+8U);
sj4=f2068(i,si4,si5,si6);
l5=sj4;
f7440(i,si0,si1,si2,si3,sj4);
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l1;
si1=24U;
si0+=si1;
l9=si0;
L4:;
{
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L5;
}
si0=0U;
l10=si0;
si0=0U;
l6=si0;
goto L2;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l10;
si1=16U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L6;
}
L7:;
si0=l1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L6:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
sj1=l8;
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
goto L2;
L9:;
si0=l1;
f1354(i,si0);
si0=0U;
l6=si0;
goto L2;
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1354(i,si0);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l5;
f7440(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L2:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7448(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=8U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=l2;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L1:;
si0=l0;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
si2=8U;
f8741(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=20U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=12U;
si0+=si1;
l0=si0;
L5:;
{
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l0;
si1=24U;
si0+=si1;
l0=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
f15024(i,si0);
L8:;
L0:;
}

void f7449(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=8U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=l2;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L1:;
si0=l0;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
si1=0U;
si2=8U;
f8741(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=20U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=8U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=12U;
si0+=si1;
l0=si0;
L5:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L6:;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
f15024(i,si0);
L7:;
L0:;
}

U32 f7450(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2068(i,si1,si2,si3);
l4=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l4;
f7433(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L3;
L4:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
L6:;
{
sj0=l6;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
sj1=l6;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l6;
si1=(U32)(sj1);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=24U;
si1*=si2;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L9;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
f5522(i,si0);
L10:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
f5522(i,si0);
goto L3;
L8:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L11:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l4;
f7433(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L3;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si0=f11876(i,si0,si1);
l0=si0;
L3:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f7451(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l2;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2068(i,si1,si2,si3);
l4=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l4;
f7433(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L3;
L4:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
L6:;
{
sj0=l6;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
sj1=l6;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l6;
si1=(U32)(sj1);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=24U;
si1*=si2;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L9;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
f5522(i,si0);
L10:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
f5522(i,si0);
goto L3;
L8:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L11:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l4;
f7433(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L3;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si0=f11876(i,si0,si1);
l0=si0;
L3:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f7452(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5577(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj4=i64_load(&i->m0,(U64)si4+16U);
l5=sj4;
f7431(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
L4:;
{
sj0=l7;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=8U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l7;
si1=(U32)(sj1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L8;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L8:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l2;
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
si0=l2;
f5522(i,si0);
goto L1;
L7:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L9;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l5;
f7431(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l7=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7453(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
f5577(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L2;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+16U);
l4=sj4;
f7436(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L2;
L4:;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
L6:;
{
sj0=l6;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
sj1=l6;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l6;
si1=(U32)(sj1);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=24U;
si1*=si2;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=8U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L9;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
f5522(i,si0);
L10:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
f5522(i,si0);
goto L2;
L8:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L11:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l4;
f7436(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
goto L2;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0=f11876(i,si0,si1);
l0=si0;
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f7454(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f5577(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l6=sj0;
L4:;
{
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l6;
f7436(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l8=sj0;
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
sj0=l8;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L7;
}
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L8:;
si0=1U;
l9=si0;
si0=0U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l8;
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=44U;
si1+=si2;
si2=l10;
si3=16U;
si2+=si3;
f9522(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=0U;
l9=si0;
si0=1U;
l4=si0;
goto L5;
L9:;
si0=0U;
l4=si0;
si0=0U;
l9=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=8U;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L10:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l9;
f5522(i,si0);
L11:;
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
goto L1;
}
si0=l4;
f5522(i,si0);
goto L1;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=8U;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L12;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L12:;
si0=l4;
if(si0){
goto L3;
}
si0=l9;
if(si0){
goto L4;
}
}
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7455(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
f5577(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+16U);
l5=sj4;
f7431(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L1;
L3:;
si0=l0;
si1=4U;
si0+=si1;
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
L4:;
{
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
l4=si0;
sj0=l8;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L8;
}
si0=l4;
if(si0){
goto L9;
}
si0=l0;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l8;
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L11:;
si0=l7;
if(si0){
goto L7;
}
goto L5;
L10:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L5;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
goto L5;
L8:;
si0=l4;
if(si0){
goto L12;
}
si0=l0;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L12:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l7;
sj2=l5;
si3=l2;
sj4=l8;
f7429(i,si0,si1,sj2,si3,sj4);
si0=0U;
l4=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=l0;
si1=0U;
f1352(i,si0,si1);
goto L1;
L7:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l7;
f5522(i,si0);
goto L1;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
sj4=l5;
f7431(i,si0,si1,si2,si3,sj4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
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

void f7456(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5577(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l7=sj4;
f7436(i,si0,si1,si2,si3,sj4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l6;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l1;
si1=24U;
si0+=si1;
l10=si0;
L6:;
{
sj0=l9;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l11;
si1=16U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l12;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l13;
si4=l11;
si3=si3 == si4;
l11=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L7;
}
L8:;
si0=l1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L7:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
sj1=l9;
si1=(U32)(sj1);
l11=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l12;
si1=l11;
si2=24U;
si1*=si2;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0=si0 == si1;
if(si0){
goto L4;
}
L9:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1354(i,si0);
L10:;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l7;
f7436(i,si0,si1,si2,si3,sj4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
goto L6;
}
L5:;
si0=l5;
if(si0){
goto L11;
}
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
L11:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=8U;
si3=l11;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
sj1=l9;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L12:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l8;
sj2=l7;
si3=l3;
si4=l5;
sj5=l9;
f7428(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l11=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=0U;
l11=si0;
si0=l1;
si1=0U;
f1352(i,si0,si1);
goto L1;
L4:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
f1354(i,si0);
L13:;
si0=0U;
l11=si0;
si0=l5;
if(si0){
goto L14;
}
si0=l12;
l5=si0;
goto L1;
L14:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l12;
l5=si0;
goto L1;
L15:;
si0=l5;
f5522(i,si0);
si0=l12;
l5=si0;
goto L1;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l5;
if(si0){
goto L16;
}
si0=1U;
l11=si0;
si0=l1;
l5=si0;
goto L1;
L16:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l11=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l1;
l5=si0;
goto L1;
L17:;
si0=l5;
f5522(i,si0);
si0=l1;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7457(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5577(i,si0,si1,si2);
si0=1U;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l5;
sj4=i64_load(&i->m0,(U64)si4+16U);
l7=sj4;
f7436(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l1;
si1=24U;
si0+=si1;
l10=si0;
L6:;
{
sj0=l9;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l11;
si1=16U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l12;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l13;
si4=l11;
si3=si3 == si4;
l11=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
if(si0){
goto L7;
}
L8:;
si0=l1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L7:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
sj1=l9;
si1=(U32)(sj1);
l11=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l12;
si1=l11;
si2=24U;
si1*=si2;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l12;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0=si0 == si1;
if(si0){
goto L3;
}
L9:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
f1354(i,si0);
L10:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l7;
f7436(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
}
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
goto L2;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
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
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
sj1=l9;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L11:;
si0=l3;
si1=l3;
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
goto L1;
}
si0=l11;
si1=l11;
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
goto L1;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l8;
sj2=l7;
si3=l3;
si4=l11;
sj5=l9;
f7428(i,si0,si1,sj2,si3,si4,sj5);
si0=0U;
l6=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L2;
}
si0=0U;
l6=si0;
si0=l1;
si1=0U;
f1352(i,si0,si1);
goto L2;
L3:;
si0=l11;
si1=l11;
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
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f1354(i,si0);
L2:;
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7458(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=l3;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si0=l2;
si1=24U;
si0*=si1;
si1=16U;
si0+=si1;
l3=si0;
L7:;
{
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si1=l3;
si0+=si1;
l4=si0;
si0=l3;
si1=24U;
si0+=si1;
l8=si0;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l7;
si1=l8;
si0+=si1;
l5=si0;
si1=-28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
f1354(i,si0);
L3:;
L0:;
}

void f7459(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
l3=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=0U;
si1=l3;
si2=-1U;
si1+=si2;
l2=si1;
si2=l2;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=l3;
si2=24U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l5;
si1=l3;
si2=24U;
si1*=si2;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L4;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l1;
f1354(i,si0);
L3:;
L0:;
}

void f7460(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l3=si0;
L4:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L3:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f8911(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+200U);
l2=si0;
si1=l2;
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
goto L1;
}
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=l2;
si3=0U;
si1=f5980(i,si1,si2,si3);
l2=si1;
si2=l3;
si3=l4;
f5595(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
f5522(i,si0);
L2:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7461(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5577(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
sj4=i64_load(&i->m0,(U64)si4+16U);
l7=sj4;
f7436(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L1;
L3:;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=0U;
l6=si0;
L5:;
{
sj0=l9;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L6;
}
si0=0U;
l5=si0;
goto L1;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=8U;
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
sj1=l9;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l9;
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=28U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=0U;
l5=si0;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L9;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L9:;
si0=l6;
if(si0){
goto L4;
}
si0=0U;
l6=si0;
goto L1;
L8:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=8U;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
f1352(i,si0,si1);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
sj4=l7;
f7436(i,si0,si1,si2,si3,sj4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
goto L1;
L4:;
si0=l10;
si1=l10;
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
si0=l10;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7462(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L4;
}
si0=1U;
l4=si0;
goto L3;
L4:;
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
L3:;
si0=l4;
si1=l0;
si2=l1;
si0=f15143(i,si0,si1,si2);
l0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
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

void f7463(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8218(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7464(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l5=sj1;
si1=(U32)(sj1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=0U;
l7=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l8=sj0;
sj1=l5;
sj0-=sj1;
si0=(U32)(sj0);
si1=0U;
sj2=l8;
sj3=-1ULL;
si2=sj2 != sj3;
si0=si2?si0:si1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
l9=si2;
si3=4U;
si2&=si3;
si3=2U;
si2>>=(si3&31);
si0=si2?si0:si1;
l10=si0;
si1=l4;
si2=l6;
si1-=si2;
l4=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l10;
si1=l4;
si2=17347676U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si1=l4;
si2=17347692U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l10;
if(si0){
goto L15;
}
goto L14;
L15:;
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=l4;
si2=l6;
si1+=si2;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj1=l5;
si2=l10;
sj2=(U64)(si2);
l8=sj2;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l8;
sj1=4294967297ULL;
sj0*=sj1;
l5=sj0;
L14:;
si0=l9;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=1U;
l10=si0;
si0=0U;
l4=si0;
si0=l1;
si1=l2;
si0=f7466(i,si0,si1);
l6=si0;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l10=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
sj0=0ULL;
l8=sj0;
si0=l10;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L17;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l11=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L18;
}
goto L17;
L19:;
sj0=0ULL;
l8=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l11=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L17;
}
L18:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l11;
sj0-=sj1;
l8=sj0;
L17:;
si0=1U;
l10=si0;
si0=l3;
si1=80U;
si0+=si1;
si1=l1;
sj2=l8;
si3=1U;
si4=l2;
f7467(i,si0,si1,sj2,si3,si4);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
goto L4;
L16:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l10=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L5;
L21:;
si0=17335208U;
si1=43U;
si2=17347956U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=l10;
si3=17347972U;
si4=7U;
f11943(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L23;
case 1:
goto L6;
case 2:
goto L22;
default:
goto L23;
}
L23:;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L25;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l11=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l8=sj0;
goto L24;
L25:;
si0=l3;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
if(si0){
goto L11;
}
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+88U);
l11=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+80U);
l8=sj0;
L24:;
si0=0U;
l4=si0;
si0=l3;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=0U;
sj1=l8;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l3;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l3;
si1=17359936U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=l11;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l6;
si2=l3;
si3=80U;
si2+=si3;
si3=l2;
f5537(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L9;
}
si0=1U;
l10=si0;
goto L8;
L22:;
si0=0U;
l12=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l10;
si3=17347979U;
si4=4U;
f7054(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L7;
}
L26:;
{
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l6;
f11736(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
l6=si0;
goto L7;
L27:;
si0=l4;
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L29;
}
L30:;
si0=l7;
if(si0){
goto L28;
}
si0=l12;
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l10=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L32:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L33:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L34:;
si0=0U;
l10=si0;
si0=l4;
l6=si0;
goto L3;
L29:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L35;
}
si0=l1;
sj1=l8;
si2=l9;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L35:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l3;
si1=56U;
si0+=si1;
si1=l6;
f8723(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
L36:;
si0=l9;
si1=l12;
si0+=si1;
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l10;
si3=17347979U;
si4=4U;
f7054(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L26;
}
goto L7;
L28:;
}
si0=l7;
if(si0){
goto L38;
}
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=1U;
l7=si0;
si0=0U;
l10=si0;
si0=0U;
l1=si0;
goto L37;
L38:;
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0+72U,sj1);
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
sj0=l5;
si0=(U32)(sj0);
l10=si0;
L37:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=l1;
si0-=si1;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si2=l12;
f8716(i,si0,si1,si2);
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
L41:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=l1;
si0-=si1;
si1=l10;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si2=l10;
f8716(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
L42:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l1;
si0+=si1;
si1=l9;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l3;
si1=l1;
si2=l10;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L41;
}
}
L40:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=0U;
l1=si0;
si0=l10;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L43;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=108U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=80U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L43:;
si0=l3;
si1=68U;
si0+=si1;
si1=l10;
si2=l1;
si0=f5916(i,si0,si1,si2);
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L44;
}
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
goto L44;
}
si0=l4;
f5522(i,si0);
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l10=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L46:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L47:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L46;
}
}
L45:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L48:;
si0=0U;
l10=si0;
goto L3;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=1U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l3;
si1=l1;
i32_store16(&i->m0,(U64)si0+68U,si1);
si0=17683216U;
si1=18U;
si2=l3;
si3=68U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l1;
f11736(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
if(si0){
goto L8;
}
si0=l7;
if(si0){
goto L49;
}
si0=0U;
l4=si0;
si0=0U;
l10=si0;
goto L8;
L49:;
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
si1=68U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l1;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f8487(i,si0,si1,si2);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=l1;
f5522(i,si0);
L50:;
si0=l3;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=68U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+68U);
l8=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
l10=si0;
si0=0U;
l2=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si1=8U;
si0+=si1;
si0=f10795(i,si0);
l2=si0;
L51:;
si0=l3;
si1=80U;
si0+=si1;
si1=l1;
si2=l2;
si0=f5916(i,si0,si1,si2);
l1=si0;
si0=1U;
l4=si0;
L8:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l1;
l6=si0;
goto L4;
L52:;
si0=l6;
f5522(i,si0);
si0=l1;
l6=si0;
goto L4;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l10=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L54:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L55:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L6:;
si0=1U;
l10=si0;
si0=0U;
l4=si0;
goto L4;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
if(si0){
goto L3;
}
sj0=l5;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l7;
f15024(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7465(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l6=sj1;
si1=(U32)(sj1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l8=sj0;
sj1=l6;
sj0-=sj1;
l9=sj0;
si0=(U32)(sj0);
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
l10=si2;
si3=2U;
si2>>=(si3&31);
sj3=l8;
sj4=-1ULL;
si3=sj3 != sj4;
si2&=si3;
l11=si2;
si0=si2?si0:si1;
l12=si0;
si1=l5;
si2=l7;
si1-=si2;
l5=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l12;
si1=l5;
si2=17347676U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
si1=l5;
si2=17347692U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si0=l12;
si1=l2;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l2;
if(si0){
goto L11;
}
si0=1U;
l5=si0;
goto L10;
L11:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
L10:;
si0=l5;
si1=l1;
si2=l7;
si1+=si2;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
sj1=l6;
si2=l2;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L9:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l2;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l14;
i32_store(&i->m0,(U64)si0+12U,si1);
sj0=l9;
sj1=0ULL;
si2=l11;
sj0=si2?sj0:sj1;
l8=sj0;
si0=(U32)(sj0);
l5=si0;
if(si0){
goto L5;
}
goto L4;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l14;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l7;
si1+=si2;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj1=l8;
sj2=4294967295ULL;
sj1&=sj2;
sj2=l6;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l5;
si0-=si1;
l2=si0;
L4:;
si0=l10;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=l3;
si0=f7466(i,si0,si1);
l7=si0;
if(si0){
goto L18;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l7=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L21;
}
sj0=0ULL;
l6=sj0;
si0=l7;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L19;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L20;
}
goto L19;
L21:;
sj0=0ULL;
l6=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L19;
}
L20:;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l8;
sj0-=sj1;
l6=sj0;
L19:;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
sj2=l6;
si3=1U;
si4=l3;
f7467(i,si0,si1,sj2,si3,si4);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
L18:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L16;
L17:;
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L23;
}
L26:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l7=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l2;
si1=l2;
si2=l7;
si1=REM_U(si1,si2);
l7=si1;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
si1=2U;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l4;
si3=32U;
si2+=si3;
si3=l5;
si4=l5;
si5=l2;
si4+=si5;
si5=l7;
si4-=si5;
si5=l3;
f7470(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l12=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l12;
switch(si0){
case 0:
goto L29;
case 1:
goto L27;
case 2:
goto L30;
default:
goto L29;
}
L30:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L16;
L29:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
goto L24;
L28:;
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
si0=l5;
si1=l7;
si0+=si1;
l5=si0;
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L23;
}
goto L26;
L27:;
}
UNREACHABLE;
L25:;
si0=17336144U;
si1=25U;
si2=17347708U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
L31:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L23:;
si0=0U;
l2=si0;
L22:;
si0=l13;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l12=si0;
L32:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l12;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+24U);
l6=sj1;
si1=(U32)(sj1);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l13=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=2U;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l4;
si3=32U;
si2+=si3;
si3=l7;
si4=0U;
sj5=l6;
sj6=-1ULL;
si5=sj5 != sj6;
si3=si5?si3:si4;
si4=0U;
si5=l13;
si6=4U;
si5&=si6;
si6=2U;
si5>>=(si6&31);
si3=si5?si3:si4;
l13=si3;
si4=l12;
si5=l3;
f7470(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l12=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l7;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=l13;
si2=l7;
si1+=si2;
sj1=(U64)(si1);
l6=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L40;
L41:;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l5;
if(si0){
goto L15;
}
goto L14;
L42:;
si0=l7;
si0=!(si0);
if(si0){
goto L15;
}
L40:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=l2;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L44;
}
si0=l12;
si1=l5;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l12;
si1=l5;
si0-=si1;
l12=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l12=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l6=sj1;
si1=(U32)(sj1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l13;
si1=l12;
si2=17347836U;
f593(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l12;
si1=l5;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l2;
si1=l12;
si2=l5;
si1-=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l12=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l6=sj1;
si1=(U32)(sj1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l2;
si1=l12;
si2=l7;
si1-=si2;
l12=si1;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l5;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l7;
si1+=si2;
si2=l2;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj1=l6;
si2=l2;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L12;
L45:;
si0=l7;
si1=l12;
si2=17347772U;
f593(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l12;
si1=l13;
si0-=si1;
l10=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l7;
si1=l10;
si2=17347820U;
f597(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L16;
L38:;
si0=l5;
si1=l12;
si2=17347788U;
f593(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l7;
si1=l12;
si2=17347804U;
f597(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l5;
si1=l12;
si2=17347724U;
f593(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l2;
si1=l7;
si2=17347740U;
f597(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l2;
si1=l12;
si2=17347756U;
f597(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l5;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l13;
si1+=si2;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj1=l6;
si2=l7;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l7;
si0+=si1;
l5=si0;
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
if(si0){
goto L32;
}
goto L12;
}
L16:;
si0=1U;
l1=si0;
goto L13;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l5;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
L46:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L14:;
si0=0U;
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
L13:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
f15024(i,si0);
goto L3;
L12:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7466(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+40U);
l3=sj0;
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L5;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+32U);
l4=sj0;
sj1=l3;
si0=sj0 == sj1;
if(si0){
goto L5;
}
sj0=0ULL;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+8U);
l6=sj2;
sj1-=sj2;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
sj0=si2?sj0:sj1;
sj1=l6;
sj2=l4;
sj1-=sj2;
sj0+=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
sj2=0ULL;
sj3=l5;
sj2-=sj3;
l4=sj2;
si3=1U;
si4=l1;
f7467(i,si0,si1,sj2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
goto L2;
L7:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+40U);
l3=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+32U);
l4=sj0;
L6:;
sj0=l4;
sj1=l3;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L9;
}
L10:;
{
si0=l2;
si1=2U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l2;
si3=16U;
si2+=si3;
sj3=l4;
si3=(U32)(sj3);
sj4=l3;
si4=(U32)(sj4);
si5=l1;
f7570(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
switch(si0){
case 0:
goto L12;
case 1:
goto L1;
case 2:
goto L2;
default:
goto L12;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=412U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L8;
}
f14795(i);
UNREACHABLE;
L11:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+32U);
si2=l7;
sj2=(U64)(si2);
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l4;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+40U);
l3=sj1;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L10;
}
}
L9:;
si0=l0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L3;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=41U;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17347323U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347315U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347307U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347299U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347291U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347283U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=176093659177ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l7;
si2=l2;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
goto L2;
L5:;
si0=l0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L3;
L4:;
si0=1U;
si1=41U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=0U;
l7=si0;
L2:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l7;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

void f7467(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1216U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0&=si1;
if(si0){
goto L10;
}
si0=l9;
si1=16U;
si0+=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l7;
si1=l10;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+1216U);
l11=si2;
si3=l11;
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L8;
}
L10:;
si0=l8;
si1=0U;
sj2=l2;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=28U;
si1=37U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
si3=1U;
si2&=si3;
l9=si2;
si0=si2?si0:si1;
l7=si0;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=17347218U;
si2=17347246U;
si3=l9;
si1=si3?si1:si2;
si2=l7;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l9;
si2=l5;
si3=40U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l7=si0;
goto L4;
L11:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l7;
si1=1224U;
si0+=si1;
si1=17347324U;
si2=4U;
si0=f13119(i,si0,si1,si2);
l9=si0;
if(si0){
goto L13;
}
si0=0U;
l9=si0;
goto L12;
L13:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L12:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1216U);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l7;
si1=1216U;
si0+=si1;
f1354(i,si0);
L14:;
si0=l9;
l11=si0;
si0=l9;
if(si0){
goto L16;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si0=4U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si1=1801807219U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=52U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l11;
si2=0U;
si0=f5980(i,si0,si1,si2);
l11=si0;
L16:;
si0=l6;
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
goto L7;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l6;
si2=l11;
si3=l4;
f13168(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L17;
}
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=20U;
si1+=si2;
sj2=l2;
si3=l3;
si4=l4;
f13426(i,si0,si1,sj2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l9;
if(si0){
goto L5;
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L6;
L17:;
si0=l9;
if(si0){
goto L4;
}
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L4;
L15:;
si0=1U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f14795(i);
UNREACHABLE;
L6:;
si0=l11;
f5522(i,si0);
L5:;
si0=l6;
if(si0){
goto L4;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l7;
si2=l4;
f7490(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l7=si0;
goto L2;
L4:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+48U);
l2=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l2;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L18;
}
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l5;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=17347368U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=751U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si1=l5;
si2=20U;
si1+=si2;
si0=f11873(i,si0,si1);
l7=si0;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7468(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1216U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l9;
si1=16U;
si0+=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=l10;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+1216U);
l11=si2;
si3=l11;
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l8;
si1=0U;
sj2=l12;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l7;
si1=1224U;
si0+=si1;
si1=l3;
si2=l4;
si0=f13119(i,si0,si1,si2);
l9=si0;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L4:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L3:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1216U);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l7;
si1=1216U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l9;
l7=si0;
si0=l9;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l6;
si1=24U;
si0+=si1;
si1=l3;
si2=l4;
f8911(i,si0,si1,si2);
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
L10:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l2;
si2=l7;
si3=l1;
f13168(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L11;
}
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=l5;
si3=l1;
f13212(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l9;
if(si0){
goto L6;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l5=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L7;
L11:;
si0=l9;
if(si0){
goto L8;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l7;
f5522(i,si0);
goto L8;
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l5;
f5522(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7469(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l2;
si2=l4;
si3=17347376U;
si4=4U;
f7054(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si2=l2;
f7490(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
goto L4;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=28U;
si1=37U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
si3=1U;
si2&=si3;
l4=si2;
si0=si2?si0:si1;
l1=si0;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=17347218U;
si2=17347246U;
si3=l4;
si1=si3?si1:si2;
si2=l1;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l4;
si2=l3;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
L6:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
l7=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l7;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L8;
}
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l3;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17347368U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=751U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=408U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si2=l3;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
L4:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7470(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=640U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=0U;
si2=l4;
si3=l3;
si2-=si3;
l7=si2;
si3=l7;
si4=l4;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l6;
si1=488U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l1;
si3=52U;
si2+=si3;
si3=l2;
si1=si3?si1:si2;
l8=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l8;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
sj1=l9;
i64_store(&i->m0,(U64)si0+488U,sj1);
si0=l6;
si1=515U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=l9;
i64_store(&i->m0,(U64)si0+507U,sj1);
si0=l6;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=511U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+504U);
i64_store(&i->m0,(U64)si0+345U,sj1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+344U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662524U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=0U;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662528U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=532U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+524U,sj1);
si0=l6;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+512U,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+508U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+504U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l11;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L14:;
si0=l6;
si1=344U;
si0+=si1;
si1=l7;
si2=l2;
si0=f5949(i,si0,si1,si2);
l10=si0;
si1=l10;
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
goto L6;
}
si0=l10;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l2=si1;
si2=1U;
si3=l2;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
si1=56U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L15:;
si0=l10;
si1=0U;
si2=l10;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l10;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
if(si0){
goto L16;
}
si0=l10;
si1=56U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store8(&i->m0,(U64)si0+384U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+380U,si1);
si0=l6;
si1=17628972U;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+368U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+364U,si1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+356U,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l6;
si1=17638580U;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l6;
si1=504U;
si0+=si1;
si1=l6;
si2=344U;
si1+=si2;
si2=l3;
si3=l4;
si4=l5;
f8778(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
l2=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+632U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=32U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l6;
si2=504U;
si1+=si2;
si2=4U;
si1|=si2;
si2=124U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=32U;
si0+=si1;
si1=132U;
si0+=si1;
si1=l6;
si2=504U;
si1+=si2;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+633U);
i32_store(&i->m0,(U64)si0+161U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l3;
i32_store8(&i->m0,(U64)si0+160U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
si0=l4;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l2;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=532U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+524U,sj1);
si0=l6;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+512U,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+508U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+504U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l2=si0;
L19:;
si0=l6;
si1=32U;
si0+=si1;
si1=l4;
si2=l2;
si0=f5979(i,si0,si1,si2);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
if(si0){
goto L17;
}
si0=17335208U;
si1=43U;
si2=17347852U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l10;
f5522(i,si0);
goto L1;
L17:;
si0=l4;
si1=l4;
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
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si2=l2;
si3=17347868U;
si4=8U;
si5=l4;
f7565(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=0U;
l7=si0;
si0=0U;
l2=si0;
L22:;
{
si0=l2;
si1=255U;
si0&=si1;
l3=si0;
si0=l4;
si1=1U;
si2=l4;
si2=i32_load8_u(&i->m0,(U64)si2+188U);
l2=si2;
si3=l2;
si4=l3;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+188U,si1);
si0=l3;
if(si0){
goto L21;
}
si0=l7;
si1=255U;
si0&=si1;
l3=si0;
si0=l2;
si1=0U;
si0=si0 != si1;
l11=si0;
l7=si0;
si0=l3;
si0=!(si0);
si1=l11;
si0^=si1;
if(si0){
goto L22;
}
goto L20;
}
L21:;
si0=l4;
si1=108U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
L20:;
si0=l10;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l2=si1;
si2=1U;
si3=l2;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L23;
}
si0=l10;
si1=56U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L23:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+68U);
l2=si0;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l10;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l10;
si1=60U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=0U;
si2=l10;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l7;
if(si0){
goto L24;
}
si0=l10;
si1=56U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L24:;
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
f15024(i,si0);
L25:;
si0=l13;
if(si0){
goto L26;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l4;
f5522(i,si0);
L27:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l10;
f5522(i,si0);
goto L2;
L26:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l4;
f5522(i,si0);
L28:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l10;
f5522(i,si0);
goto L1;
L13:;
si0=l6;
si1=168U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=168U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=168U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=168U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l6;
si1=504U;
si0+=si1;
si1=l6;
si2=168U;
si1+=si2;
si2=l3;
si3=l4;
si4=l5;
f8778(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
l2=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+632U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l6;
si1=220U;
si0+=si1;
si1=l6;
si2=504U;
si1+=si2;
si2=4U;
si1|=si2;
si2=124U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=l6;
si2=504U;
si1+=si2;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+215U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+633U);
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l6;
si1=344U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l6;
si2=220U;
si1+=si2;
si2=124U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=344U;
si0+=si1;
si1=132U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+215U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l4;
i32_store8(&i->m0,(U64)si0+472U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+212U);
i32_store(&i->m0,(U64)si0+473U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si1=1216U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=8U;
si0&=si1;
if(si0){
goto L30;
}
si0=l4;
si1=16U;
si0+=si1;
l11=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l2;
si1=l11;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+1216U);
l7=si2;
si3=l7;
si4=l4;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l7;
si1=l4;
si0=si0 == si1;
if(si0){
goto L7;
}
L30:;
si0=l10;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
goto L7;
L29:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L12:;
si0=17624512U;
si1=36U;
si2=17624564U;
f634(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=17335208U;
si1=43U;
si2=17347876U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=1224U;
si0+=si1;
si1=17347868U;
si2=8U;
si0=f13119(i,si0,si1,si2);
l4=si0;
if(si0){
goto L32;
}
si0=0U;
l4=si0;
goto L31;
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L31:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+1216U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l2;
si1=1216U;
si0+=si1;
f1354(i,si0);
L33:;
si0=l4;
l2=si0;
si0=l4;
if(si0){
goto L34;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=8U;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
sj1=8031165434443162994ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4U;
si1=l2;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l11=si1;
si2=l2;
si1-=si2;
si2=l11;
si3=l2;
si2=si2 == si3;
si0=si2?si0:si1;
l10=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=1U;
l11=si0;
si0=l2;
si1=l10;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L35;
}
L36:;
si0=0U;
l11=si0;
L35:;
si0=l6;
si1=516U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+512U,si1);
si0=l6;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+520U,sj1);
si0=l6;
si1=-1U;
i32_store(&i->m0,(U64)si0+508U,si1);
si0=l6;
si1=l11;
i32_store(&i->m0,(U64)si0+504U,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5980(i,si0,si1,si2);
l2=si0;
L34:;
si0=l3;
si1=l3;
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
goto L6;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l3;
si2=l2;
si3=l5;
f13168(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+508U);
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
if(si0){
goto L37;
}
si0=l6;
si1=l6;
si2=512U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+492U,si1);
si0=l6;
si1=l12;
i32_store(&i->m0,(U64)si0+488U,si1);
si0=l6;
si1=504U;
si0+=si1;
si1=l6;
si2=344U;
si1+=si2;
si2=136U;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si2=488U;
si1+=si2;
si2=l6;
si3=504U;
si2+=si3;
si3=l5;
f13443(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l4;
if(si0){
goto L38;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l2;
f5522(i,si0);
L38:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L37:;
si0=l4;
if(si0){
goto L4;
}
si0=l2;
si1=l2;
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
si0=l2;
f5522(i,si0);
goto L4;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l6;
si1=344U;
si0+=si1;
f8793(i,si0);
si0=l6;
si1=372U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+368U);
f15024(i,si0);
L39:;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l6;
si1=464U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l2;
f15024(i,si0);
L40:;
si0=l6;
si1=444U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+440U);
f15024(i,si0);
L3:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l5;
si2=l12;
f14430(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+508U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
if(si0){
goto L43;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+484U,si1);
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L44;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l2;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l2;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L41;
}
si0=l1;
sj1=l9;
si2=l2;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L41;
L44:;
si0=l6;
si1=504U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=344U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+508U,si1);
si0=l6;
si1=17347932U;
i32_store(&i->m0,(U64)si0+504U,si1);
si0=l6;
si1=49U;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l6;
si1=l6;
si2=344U;
si1+=si2;
i32_store(&i->m0,(U64)si0+512U,si1);
si0=l6;
si1=l6;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l6;
si1=l6;
si2=484U;
si1+=si2;
i32_store(&i->m0,(U64)si0+344U,si1);
si0=l6;
si1=488U;
si0+=si1;
si1=l6;
si2=504U;
si1+=si2;
f64(i,si0,si1);
si0=l5;
si1=l6;
si2=488U;
si1+=si2;
si0=f11873(i,si0,si1);
l2=si0;
L43:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L42:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l12;
f5522(i,si0);
goto L1;
L41:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l6;
si1=640U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7471(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f8109(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=72U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
l6=si0;
si0=l5;
si1=l4;
si2=72U;
si1+=si2;
si2=l2;
si0=f7185(i,si0,si1,si2);
l5=si0;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f5522(i,si0);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=1U;
l6=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7472(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8194(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l5;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si2=17348519U;
si3=5U;
si0=f7075(i,si0,si1,si2,si3);
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l5;
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
si0=l5;
f5522(i,si0);
L3:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7473(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj5,sj6;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l6=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l8=si0;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l9;
si1=12U;
si0*=si1;
l9=si0;
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L10:;
{
si0=l10;
si1=l9;
si0+=si1;
l12=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l12;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si0=si0 != si1;
if(si0){
goto L8;
}
L11:;
si0=l13;
si1=l11;
si0*=si1;
l11=si0;
si0=l9;
si1=-12U;
si0+=si1;
l9=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+4U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L8;
}
sj0=l6;
sj1=l7;
sj0-=sj1;
sj1=0ULL;
sj2=l6;
sj3=-1ULL;
si2=sj2 != sj3;
sj0=si2?sj0:sj1;
sj1=0ULL;
si2=l8;
si3=4U;
si2&=si3;
si3=2U;
si2>>=(si3&31);
sj0=si2?sj0:sj1;
l6=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
l11=si0;
si0=l9;
switch(si0){
case 0:
goto L12;
case 1:
goto L12;
case 2:
goto L13;
case 3:
goto L12;
case 4:
goto L13;
default:
goto L12;
}
L13:;
si0=l8;
l11=si0;
L12:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l13=si0;
sj0=l6;
sj1=0ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L14;
}
si0=0U;
l12=si0;
goto L4;
L14:;
sj0=l6;
si0=(U32)(sj0);
l12=si0;
si0=l9;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L20;
case 3:
goto L19;
case 4:
goto L18;
default:
goto L17;
}
L20:;
si0=l10;
l14=si0;
si0=l8;
l10=si0;
si0=l8;
si1=l12;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L15;
L19:;
si0=l13;
si1=4U;
si0+=si1;
l14=si0;
si0=l10;
si1=l12;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L15;
L18:;
si0=l10;
l14=si0;
si0=l8;
l10=si0;
si0=l8;
si1=l12;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L15;
L17:;
si0=l13;
l14=si0;
si0=l10;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L15;
}
goto L5;
L16:;
si0=l13;
si1=1U;
si0+=si1;
l14=si0;
si0=l10;
si1=l12;
si0=si0 > si1;
if(si0){
goto L5;
}
L15:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
sj1=l7;
si1=(U32)(sj1);
l12=si1;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l12;
si1=l8;
si2=17348208U;
f593(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l11;
si1=l8;
si2=l12;
si1-=si2;
l8=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l10;
si1=l11;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l14;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l12;
si1+=si2;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l7;
si2=l11;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
switch(si0){
case 0:
goto L3;
case 1:
goto L24;
case 2:
goto L23;
case 3:
goto L22;
default:
goto L25;
}
L25:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L3;
}
si0=l13;
si1=0U;
f1352(i,si0,si1);
goto L3;
L24:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L3;
}
si0=l13;
si1=0U;
f1361(i,si0,si1);
goto L3;
L23:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L3;
}
si0=l13;
si1=0U;
f1361(i,si0,si1);
goto L3;
L22:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L3;
}
si0=l13;
si1=0U;
f1352(i,si0,si1);
goto L3;
L8:;
si0=17335208U;
si1=43U;
si2=17348032U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l11;
si1=l8;
si2=17348176U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l10;
si1=l11;
si2=17348192U;
f685(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l10;
si1=l12;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
sj1=l7;
si1=(U32)(sj1);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l10;
si1=l8;
si2=17348160U;
f593(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l8;
si1=l10;
si0-=si1;
l8=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l14;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l10;
si1+=si2;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj1=l6;
sj2=l7;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L27:;
si0=l12;
si1=l10;
si2=17348048U;
f597(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l12;
si1=l8;
si2=17348064U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l9;
switch(si0){
case 0:
goto L29;
case 1:
goto L32;
case 2:
goto L31;
case 3:
goto L30;
default:
goto L33;
}
L33:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L29;
}
si0=l13;
si1=0U;
f1352(i,si0,si1);
goto L29;
L32:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L29;
}
si0=l13;
si1=0U;
f1361(i,si0,si1);
goto L29;
L31:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L29;
}
si0=l13;
si1=0U;
f1361(i,si0,si1);
goto L29;
L30:;
si0=l13;
si1=0U;
si2=l13;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L29;
}
si0=l13;
si1=0U;
f1352(i,si0,si1);
L29:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
si1=l4;
si0=f7466(i,si0,si1);
l9=si0;
if(si0){
goto L35;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l9=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L38;
}
sj0=0ULL;
l7=sj0;
si0=l9;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L36;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L37;
}
goto L36;
L38:;
sj0=0ULL;
l7=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L36;
}
L37:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l6;
sj0-=sj1;
l7=sj0;
L36:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
sj2=l7;
si3=1U;
si4=l4;
f7467(i,si0,si1,sj2,si3,si4);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L34;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
L35:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L34:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l11;
si1=l12;
si0-=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L39;
}
L40:;
{
si0=l14;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+60U);
l9=si1;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l3;
si0=!(si0);
if(si0){
goto L60;
}
si0=l12;
if(si0){
goto L39;
}
L60:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l7=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l11=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=2U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
si3=16U;
si2+=si3;
sj3=l7;
si3=(U32)(sj3);
si4=0U;
sj5=l7;
sj6=-1ULL;
si5=sj5 != sj6;
si3=si5?si3:si4;
si4=0U;
si5=l11;
si6=4U;
si5&=si6;
si6=2U;
si5>>=(si6&31);
si3=si5?si3:si4;
l11=si3;
si4=l9;
si5=l4;
f7470(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l10;
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
si1=l11;
si2=l10;
si1+=si2;
sj1=(U64)(si1);
l7=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=l7;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
if(si0){
goto L45;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L61;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=!(si0);
if(si0){
goto L61;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l9;
si1=12U;
si0*=si1;
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
L62:;
{
si0=l15;
si1=l9;
si0+=si1;
l8=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si0=si0 != si1;
if(si0){
goto L45;
}
L63:;
si0=l13;
si1=l11;
si0*=si1;
l11=si0;
si0=l9;
si1=-12U;
si0+=si1;
l9=si0;
if(si0){
goto L62;
}
}
L61:;
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+4U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=l13;
switch(si0){
case 0:
goto L57;
case 1:
goto L56;
case 2:
goto L54;
case 3:
goto L55;
case 4:
goto L54;
default:
goto L57;
}
L59:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l16=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l17=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l18=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
if(si0){
goto L65;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l19=si0;
si0=0U;
l10=si0;
goto L64;
L65:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l11=si0;
if(si0){
goto L67;
}
si0=1U;
l10=si0;
goto L66;
L67:;
si0=l11;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L49;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l11;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L48;
}
L66:;
si0=l10;
si1=l9;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l11;
l19=si0;
L64:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
si0=4U;
l8=si0;
si0=0U;
l15=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l9;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l9;
si1=12U;
si0*=si1;
l21=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L49;
}
si0=l21;
si0=!(si0);
if(si0){
goto L68;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l21;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l21;
l15=si0;
L68:;
si0=l8;
si1=l20;
si2=l15;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=l17;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l19;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l16;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
si3=16U;
si2+=si3;
si3=l12;
si4=l14;
si5=l12;
si4+=si5;
si5=l4;
f7470(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L52;
}
L58:;
si0=l9;
if(si0){
goto L51;
}
si0=l12;
if(si0){
goto L39;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L57:;
si0=l11;
l15=si0;
goto L53;
L56:;
si0=l11;
si1=1U;
si0+=si1;
l15=si0;
goto L53;
L55:;
si0=l11;
si1=4U;
si0+=si1;
l15=si0;
goto L53;
L54:;
si0=l9;
l15=si0;
si0=l8;
l9=si0;
L53:;
si0=l9;
si1=l12;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l10;
si1=l14;
si2=l10;
si3=l14;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si1=l9;
si2=l12;
si1-=si2;
l9=si1;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l9=si1;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l10;
si1=l8;
si2=l9;
si1-=si2;
l8=si1;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l15;
si1=l12;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+52U);
si2=l9;
si1+=si2;
si2=l10;
si0=f15143(i,si0,si1,si2);
si0=l13;
switch(si0){
case 0:
goto L70;
case 1:
goto L74;
case 2:
goto L73;
case 3:
goto L72;
default:
goto L75;
}
L75:;
si0=l11;
si1=0U;
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L71;
}
goto L70;
L74:;
si0=l11;
si1=0U;
si2=l11;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L70;
}
si0=l11;
si1=0U;
f1361(i,si0,si1);
goto L70;
L73:;
si0=l11;
si1=0U;
si2=l11;
si2=i32_load8_u(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L70;
}
si0=l11;
si1=0U;
f1361(i,si0,si1);
goto L70;
L72:;
si0=l11;
si1=0U;
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=8U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L70;
}
L71:;
si0=l11;
si1=0U;
f1352(i,si0,si1);
L70:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l10;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L41;
L69:;
si0=l9;
si1=l8;
si2=17348144U;
f593(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L51:;
si0=l10;
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
si0=!(si0);
if(si0){
goto L41;
}
si0=l10;
si1=l12;
si0+=si1;
l12=si0;
goto L39;
L50:;
f14795(i);
UNREACHABLE;
L49:;
f53(i);
UNREACHABLE;
L48:;
si0=1U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L47:;
si0=4U;
si1=l21;
f52(i,si0,si1);
UNREACHABLE;
L46:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L45:;
si0=17335208U;
si1=43U;
si2=17348080U;
f604(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l12;
si1=l9;
si2=17348096U;
f593(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l10;
si1=l9;
si2=17348112U;
f597(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l10;
si1=l8;
si2=17348128U;
f597(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l10;
si1=l12;
si0+=si1;
l12=si0;
si0=l14;
si1=l10;
si0-=si1;
l14=si0;
if(si0){
goto L40;
}
}
L39:;
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L76;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L76:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L77:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
f15024(i,si0);
L1:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L78;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L78:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7474(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load16_u(&i->m0,(U64)si3);
si4=16U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7475(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7983(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=148U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7476(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8194(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l5;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si2=17349436U;
si3=8U;
si0=f7075(i,si0,si1,si2,si3);
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l5;
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
si0=l5;
f5522(i,si0);
L3:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7477(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7983(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l3;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=1U;
l7=si0;
si0=l3;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l7;
si1=l6;
si2=l8;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
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
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f7478(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8194(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L2;
}
si0=l5;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si2=17347979U;
si3=4U;
si0=f7075(i,si0,si1,si2,si3);
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l5;
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
si0=l5;
f5522(i,si0);
L3:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7479(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8164(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7480(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8094(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
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

void f7481(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load16_u(&i->m0,(U64)si3);
si4=1U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7482(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=70U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=4U;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7483(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l5=si0;
si1=2U;
si0>>=(si1&31);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+24U);
l6=sj1;
sj2=-1ULL;
si1=sj1 != sj2;
si0&=si1;
l7=si0;
if(si0){
goto L1;
}
si0=l5;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
L2:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l9=sj0;
si0=l4;
si1=64U;
si0+=si1;
si1=l2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l8;
sj1=l9;
si1=(U32)(sj1);
l10=si1;
si0-=si1;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
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
default:
goto L8;
}
L8:;
si0=l4;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
l14=si0;
goto L3;
L7:;
si0=l4;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
l14=si0;
goto L3;
L6:;
si0=l4;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
goto L3;
L5:;
si0=l4;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
l14=si0;
goto L3;
L4:;
si0=l4;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l4;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
L3:;
si0=l14;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l12;
switch(si0){
case 0:
goto L21;
case 1:
goto L24;
case 2:
goto L23;
case 3:
goto L22;
default:
goto L25;
}
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l12;
f1354(i,si0);
goto L21;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si1=0U;
si2=l12;
si2=i32_load8_u(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L21;
}
si0=l12;
si1=0U;
f1361(i,si0,si1);
goto L21;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si1=0U;
si2=l12;
si2=i32_load8_u(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L21;
}
si0=l12;
si1=0U;
f1361(i,si0,si1);
goto L21;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l12;
f1354(i,si0);
L21:;
si0=l1;
si1=l3;
si0=f7466(i,si0,si1);
l12=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l12;
f5522(i,si0);
L26:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l12=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
L29:;
si0=l12;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L27;
}
goto L12;
L28:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L12;
}
L27:;
sj0=l9;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l6=sj1;
si0=sj0 == sj1;
if(si0){
goto L12;
}
si0=l4;
si1=64U;
si0+=si1;
si1=l1;
sj2=0ULL;
sj3=l9;
sj4=l6;
sj3-=sj4;
l9=sj3;
sj2-=sj3;
si3=1U;
si4=l3;
f7467(i,si0,si1,sj2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
if(si0){
goto L19;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=l9;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L12;
L20:;
si0=l8;
si1=l10;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l12;
switch(si0){
case 0:
goto L35;
case 1:
goto L34;
case 2:
goto L33;
case 3:
goto L32;
case 4:
goto L31;
default:
goto L35;
}
L35:;
si0=l4;
si1=72U;
si0+=si1;
l8=si0;
goto L30;
L34:;
si0=l4;
si1=72U;
si0+=si1;
l8=si0;
goto L30;
L33:;
si0=l4;
si1=76U;
si0+=si1;
l8=si0;
goto L30;
L32:;
si0=l4;
si1=72U;
si0+=si1;
l8=si0;
goto L30;
L31:;
si0=l4;
si1=76U;
si0+=si1;
l8=si0;
L30:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l11;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l12;
switch(si0){
case 0:
goto L42;
case 1:
goto L41;
case 2:
goto L40;
case 3:
goto L39;
case 4:
goto L38;
default:
goto L42;
}
L42:;
si0=l4;
si1=72U;
si0+=si1;
l11=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l15=si0;
goto L36;
L41:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=1U;
si0+=si1;
l15=si0;
si0=l4;
si1=72U;
si0+=si1;
l11=si0;
goto L36;
L40:;
si0=l4;
si1=76U;
si0+=si1;
l11=si0;
goto L37;
L39:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=4U;
si0+=si1;
l15=si0;
si0=l4;
si1=72U;
si0+=si1;
l11=si0;
goto L36;
L38:;
si0=l4;
si1=76U;
si0+=si1;
l11=si0;
L37:;
si0=l13;
l15=si0;
L36:;
si0=l8;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l10;
si0+=si1;
si1=l15;
si2=l8;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
l16=sj0;
si0=l5;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
sj0=l16;
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L15;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
sj1=l9;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L15;
}
goto L14;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L13;
L18:;
si0=l10;
si1=l8;
si2=17347628U;
f593(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l8;
si1=l11;
si2=17347644U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si1=l11;
si2=17347660U;
f685(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l1;
sj1=l9;
i64_store(&i->m0,(U64)si0+32U,sj1);
L14:;
si0=l12;
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
goto L44;
default:
goto L48;
}
L48:;
si0=l4;
si1=72U;
si0+=si1;
l8=si0;
goto L43;
L47:;
si0=l4;
si1=72U;
si0+=si1;
l8=si0;
goto L43;
L46:;
si0=l4;
si1=76U;
si0+=si1;
l8=si0;
goto L43;
L45:;
si0=l4;
si1=72U;
si0+=si1;
l8=si0;
goto L43;
L44:;
si0=l4;
si1=76U;
si0+=si1;
l8=si0;
L43:;
si0=l1;
sj1=l9;
si2=l8;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
sj1=l6;
sj2=l9;
si1=(U64)((I64)sj1<(I64)sj2);
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l1;
sj1=l9;
i64_store(&i->m0,(U64)si0+24U,sj1);
L49:;
sj0=l9;
sj1=l16;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L50;
}
si0=l1;
sj1=l9;
i64_store(&i->m0,(U64)si0+40U,sj1);
L50:;
si0=l12;
switch(si0){
case 0:
goto L55;
case 1:
goto L53;
case 2:
goto L52;
case 3:
goto L51;
case 4:
goto L54;
default:
goto L55;
}
L55:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L13;
L54:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
f1354(i,si0);
goto L13;
L53:;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=1U;
si3=si3 == si4;
l12=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
if(si0){
goto L13;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L13;
L52:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=1U;
si3=si3 == si4;
l12=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
if(si0){
goto L13;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L13;
L51:;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
f1354(i,si0);
L13:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l2;
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
goto L56;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L56:;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
f15024(i,si0);
L57:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
goto L11;
L12:;
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l8=si0;
si0=l14;
l12=si0;
L73:;
{
si0=l12;
l11=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+60U);
si0=si0 <= si1;
if(si0){
goto L72;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l10;
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
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l17=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l19=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
if(si0){
goto L75;
}
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l20=si0;
goto L74;
L75:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l12=si0;
if(si0){
goto L77;
}
si0=1U;
l5=si0;
goto L76;
L77:;
si0=l12;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L67;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l12;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L66;
}
L76:;
si0=l5;
si1=l2;
si2=l12;
si0=f15143(i,si0,si1,si2);
si0=l12;
l20=si0;
L74:;
si0=4U;
l7=si0;
si0=0U;
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l21=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l2;
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l2;
si1=12U;
si0*=si1;
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L67;
}
si0=l15;
si0=!(si0);
if(si0){
goto L78;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l15;
l13=si0;
L78:;
si0=l7;
si1=l21;
si2=l13;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l18;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l17;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l1;
si2=l4;
si3=64U;
si2+=si3;
si3=l8;
si4=l14;
si5=l3;
f7570(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l12=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L79;
}
si0=l12;
switch(si0){
case 0:
goto L80;
case 1:
goto L10;
case 2:
goto L70;
default:
goto L80;
}
L80:;
si0=l11;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+60U);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L72;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L82;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L82;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l2;
si1=12U;
si0*=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
L83:;
{
si0=l5;
si1=l2;
si0+=si1;
l10=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L84;
}
si0=l10;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L81;
}
L84:;
si0=l11;
si1=l12;
si0*=si1;
l12=si0;
si0=l2;
si1=-12U;
si0+=si1;
l2=si0;
if(si0){
goto L83;
}
}
L82:;
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l11=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L71;
}
L81:;
si0=17335208U;
si1=43U;
si2=17347516U;
f604(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l11;
si1=l2;
si0-=si1;
l12=si0;
si0=l8;
si1=l2;
si0+=si1;
l8=si0;
si0=l11;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L73;
}
}
L72:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=4U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L85;
}
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
L85:;
si0=l11;
if(si0){
goto L68;
}
goto L58;
L71:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si0=l11;
switch(si0){
case 0:
goto L90;
case 1:
goto L89;
case 2:
goto L87;
case 3:
goto L88;
case 4:
goto L87;
default:
goto L90;
}
L90:;
si0=l12;
l10=si0;
goto L86;
L89:;
si0=l12;
si1=1U;
si0+=si1;
l10=si0;
goto L86;
L88:;
si0=l12;
si1=4U;
si0+=si1;
l10=si0;
goto L86;
L87:;
si0=l2;
l10=si0;
si0=l5;
l2=si0;
L86:;
si0=l2;
si1=l8;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l7;
si1=l2;
si2=l8;
si1-=si2;
l2=si1;
si0=si0 > si1;
if(si0){
goto L64;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l10;
si2=l8;
si1+=si2;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l7;
sj1=(U64)(si1);
l9=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L91;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l6=sj0;
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L91;
}
sj0=l6;
sj1=l9;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L91;
}
si0=l1;
sj1=l9;
i64_store(&i->m0,(U64)si0+24U,sj1);
L91:;
si0=l1;
sj1=l9;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=412U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
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
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=41U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l1;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17347323U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347315U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347307U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347299U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347291U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17347283U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=176093659177ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l2;
si2=l4;
si3=64U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
switch(si0){
case 0:
goto L69;
case 1:
goto L94;
case 2:
goto L93;
case 3:
goto L92;
default:
goto L95;
}
L95:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L69;
}
si0=l12;
f1354(i,si0);
goto L69;
L94:;
si0=l12;
si1=0U;
si2=l12;
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
goto L69;
}
si0=l12;
si1=0U;
f1361(i,si0,si1);
goto L69;
L93:;
si0=l12;
si1=0U;
si2=l12;
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
goto L69;
}
si0=l12;
si1=0U;
f1361(i,si0,si1);
goto L69;
L92:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L69;
}
si0=l12;
f1354(i,si0);
goto L69;
L70:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L69:;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L96;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f5522(i,si0);
L96:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L97;
}
si0=l1;
f15024(i,si0);
L97:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
goto L11;
L68:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L98;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si1=12U;
si0*=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
L99:;
{
si0=l7;
si1=l2;
si0+=si1;
l5=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L100;
}
si0=l5;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L61;
}
L100:;
si0=l10;
si1=l12;
si0*=si1;
l12=si0;
si0=l2;
si1=-12U;
si0+=si1;
l2=si0;
if(si0){
goto L99;
}
}
L98:;
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+12U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l10=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l11;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+60U);
l2=si1;
si0=si0 > si1;
if(si0){
goto L60;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+68U);
l12=si0;
si0=l10;
switch(si0){
case 0:
goto L105;
case 1:
goto L104;
case 2:
goto L102;
case 3:
goto L103;
case 4:
goto L102;
default:
goto L105;
}
L105:;
si0=l12;
l5=si0;
goto L101;
L104:;
si0=l12;
si1=1U;
si0+=si1;
l5=si0;
goto L101;
L103:;
si0=l12;
si1=4U;
si0+=si1;
l5=si0;
goto L101;
L102:;
si0=l2;
l5=si0;
si0=l7;
l2=si0;
L101:;
si0=l2;
si1=l8;
si0=si0 < si1;
if(si0){
goto L106;
}
si0=l11;
si1=l2;
si2=l8;
si1-=si2;
l2=si1;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l5;
si2=l8;
si1+=si2;
si2=l11;
si0=f15143(i,si0,si1,si2);
si0=l10;
switch(si0){
case 0:
goto L107;
case 1:
goto L111;
case 2:
goto L110;
case 3:
goto L109;
default:
goto L112;
}
L112:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L108;
}
goto L107;
L111:;
si0=l12;
si1=0U;
si2=l12;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L107;
}
si0=l12;
si1=0U;
f1361(i,si0,si1);
goto L107;
L110:;
si0=l12;
si1=0U;
si2=l12;
si2=i32_load8_u(&i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L107;
}
si0=l12;
si1=0U;
f1361(i,si0,si1);
goto L107;
L109:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L107;
}
L108:;
si0=l12;
f1354(i,si0);
L107:;
si0=l8;
si1=l11;
si0+=si1;
l8=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=4U;
si0&=si1;
l2=si0;
goto L58;
L106:;
si0=l8;
si1=l2;
si2=17347612U;
f593(i,si0,si1,si2);
UNREACHABLE;
L67:;
f53(i);
UNREACHABLE;
L66:;
si0=1U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L65:;
si0=4U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L64:;
si0=l7;
si1=l2;
si2=17347532U;
f597(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l8;
si1=l2;
si2=17347548U;
f593(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=1U;
si1=41U;
f52(i,si0,si1);
UNREACHABLE;
L61:;
si0=17335208U;
si1=43U;
si2=17347564U;
f604(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l11;
si1=l2;
si2=17347580U;
f597(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l11;
si1=l2;
si2=17347596U;
f597(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=l11;
sj1=(U64)(si1);
l9=sj1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l1;
sj1=l9;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l6=sj0;
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L113;
}
sj0=l6;
sj1=l9;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L113;
}
si0=l1;
sj1=l9;
i64_store(&i->m0,(U64)si0+24U,sj1);
L113:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L114;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f5522(i,si0);
L114:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L115;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L115;
}
si0=l1;
f15024(i,si0);
L115:;
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L11:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L10:;
UNREACHABLE;
L9:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7484(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7983(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l5;
si2=l3;
si3=112U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=5U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f8468(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l4;
si1=44U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5931(i,si0,si1,si2);
l2=si0;
goto L4;
L5:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7485(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=l3;
si2=l2;
f7060(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
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

void f7486(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=4294967295ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=17348808U;
si3=2U;
si4=l4;
si5=24U;
si4+=si5;
si5=l2;
f7086(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7487(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f7983(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l6=si0;
goto L3;
L4:;
si0=l3;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L6;
}
si0=4U;
l7=si0;
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l5;
si2=l6;
si3=96U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f12616(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L8;
}
si0=1U;
l5=si0;
goto L7;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5931(i,si0,si1,si2);
l6=si0;
L7:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=4U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7488(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8218(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7489(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L11;
}
si0=l4;
switch(si0){
case 0:
goto L11;
case 1:
goto L9;
case 2:
goto L8;
default:
goto L10;
}
L11:;
si0=l5;
si1=l1;
si2=l2;
f14428(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj0=0ULL;
l7=sj0;
goto L7;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=21U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17346989U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17346984U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17346976U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
si2=l5;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
f5522(i,si0);
goto L1;
L9:;
si0=l5;
si1=l1;
si2=l2;
f14427(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj0=2ULL;
l7=sj0;
goto L7;
L8:;
si0=l5;
si1=l1;
si2=l2;
f14427(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj0=1ULL;
l7=sj0;
L7:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l0;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7490(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
f5555(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
switch(si0){
case 0:
goto L4;
case 1:
goto L5;
case 2:
goto L6;
default:
goto L4;
}
L6:;
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=17346356U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1723U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f64(i,si0,si1);
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
si3=80U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l4=si0;
L5:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
f11347(i,si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=(U32)(sj0);
l5=si0;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L8:;
si0=l3;
si1=80U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=17348268U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=36U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
switch(si0){
case 0:
goto L9;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
f1354(i,si0);
goto L9;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L9;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L9;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L9;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
f1354(i,si0);
L9:;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
si0=l0;
si1=l2;
si2=l6;
si3=l3;
si4=48U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L7:;
si0=l0;
si1=l5;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
f5522(i,si0);
L14:;
si0=l1;
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
goto L2;
}
L3:;
si0=l1;
f5522(i,si0);
L2:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7491(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l6=si0;
si0=l3;
si1=1U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=4U;
si0&=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
si2=l4;
f7469(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l6=si0;
si1=4U;
si0&=si1;
l7=si0;
L4:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l9=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l10=sj1;
sj0-=sj1;
sj1=0ULL;
si2=l7;
si3=0U;
si2=si2 != si3;
sj3=l9;
sj4=-1ULL;
si3=sj3 != sj4;
si2&=si3;
l7=si2;
sj0=si2?sj0:sj1;
l11=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L2;
}
sj0=l2;
l9=sj0;
si0=l3;
if(si0){
goto L5;
}
si0=l7;
if(si0){
goto L8;
}
sj0=0ULL;
l9=sj0;
si0=l6;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l12=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L7;
}
goto L6;
L8:;
sj0=0ULL;
l9=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l12=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L6;
}
L7:;
sj0=l12;
sj1=l10;
sj0-=sj1;
l9=sj0;
L6:;
sj0=l2;
sj1=l8;
sj0-=sj1;
sj1=l9;
sj0+=sj1;
l9=sj0;
L5:;
sj0=l9;
sj1=0ULL;
sj2=l10;
sj1-=sj2;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L2;
}
sj0=l9;
sj1=l11;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L2;
}
si0=l1;
sj1=l9;
sj2=l10;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l8;
sj2=l11;
sj1-=sj2;
sj2=l9;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l6;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l4;
si0=f7466(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l5;
si1=l1;
sj2=l2;
si3=l3;
si4=l4;
f7467(i,si0,si1,sj2,si3,si4);
goto L10;
L11:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
l3=si0;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
L15:;
sj0=0ULL;
l9=sj0;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L12;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L13;
}
goto L12;
L14:;
sj0=0ULL;
l9=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L12;
}
L13:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l10;
sj0-=sj1;
l9=sj0;
L12:;
si0=l5;
si1=l1;
sj2=l9;
sj3=l2;
sj2+=sj3;
si3=1U;
si4=l4;
f7467(i,si0,si1,sj2,si3,si4);
L10:;
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
L16:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7492(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7983(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=149U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7493(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=1U;
l7=si0;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l7;
si1=l6;
si2=l8;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
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
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f7494(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1216U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l9;
si1=16U;
si0+=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=l10;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+1216U);
l11=si2;
si3=l11;
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l11;
si1=l9;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l8;
si1=0U;
sj2=l12;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l7;
si1=1224U;
si0+=si1;
si1=l3;
si2=l4;
si0=f13119(i,si0,si1,si2);
l9=si0;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L4:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L3:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+1216U);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l7;
si1=1216U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l9;
l7=si0;
si0=l9;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l6;
si1=24U;
si0+=si1;
si1=l3;
si2=l4;
f8911(i,si0,si1,si2);
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
L9:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l2;
si2=l7;
si3=l1;
f13168(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L10;
}
si0=l6;
si1=l6;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=l5;
si3=l1;
f13427(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l9;
if(si0){
goto L6;
}
si0=l7;
si1=l7;
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
goto L7;
L10:;
si0=1U;
l1=si0;
si0=l9;
if(si0){
goto L6;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L6;
L8:;
f14795(i);
UNREACHABLE;
L7:;
si0=l7;
f5522(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7495(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=80U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7496(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0+=si1;
si1=l3;
si2=l2;
f7913(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
if(si0){
goto L2;
}
si0=l5;
l2=si0;
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l2;
si1=l3;
si2=17347324U;
si3=4U;
si0=f7075(i,si0,si1,si2,si3);
l2=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
f5522(i,si0);
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
f5522(i,si0);
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7497(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l3;
si1=l2;
si0=f7121(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
si0=l6;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
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

U32 f7498(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L2;
}
si0=0U;
l0=si0;
goto L1;
L2:;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l8;
if(si0){
goto L7;
}
L8:;
si0=l5;
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
si0=0U;
l8=si0;
si0=4U;
l9=si0;
si0=4U;
l7=si0;
si0=4U;
l4=si0;
goto L9;
L10:;
si0=l8;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l7;
l5=si0;
si0=l8;
l7=si0;
si0=l5;
l8=si0;
si0=l7;
l4=si0;
L9:;
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
si0=l2;
si1=20U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
f7751(i,si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+20U);
l10=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l10;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=0U;
l7=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l7;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l8;
si2=0U;
si0=f5913(i,si0,si1,si2);
l7=si0;
L12:;
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=l7;
si0=f5916(i,si0,si1,si2);
l7=si0;
L7:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=17347396U;
si4=5U;
si5=l7;
f7564(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
l0=si0;
goto L1;
L13:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l7;
f5522(i,si0);
goto L1;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f7499(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+24U);
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+21U,si1);
si0=l2;
si1=32U;
si0+=si1;
sj1=8ULL;
si2=l2;
si3=l2;
si4=25U;
si3+=si4;
f11977(i,si0,sj1,si2,si3);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7500(rustpythonInstance*i,U64 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
sj0=l0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=0U;
si0=f5916(i,si0,si1,si2);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=1216U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L10;
}
si0=l6;
si1=16U;
si0+=si1;
l9=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=l9;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+1216U);
l10=si2;
si3=l10;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l10;
si1=l6;
si0=si0 == si1;
if(si0){
goto L7;
}
L10:;
si0=l8;
si1=0U;
sj2=l0;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
goto L7;
L8:;
si0=l4;
si1=l3;
si2=l2;
si3=17348492U;
si4=5U;
f7054(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
l2=si0;
goto L1;
L11:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
goto L1;
L7:;
si0=l5;
si1=1224U;
si0+=si1;
si1=17348484U;
si2=8U;
si0=f13119(i,si0,si1,si2);
l6=si0;
if(si0){
goto L13;
}
si0=0U;
l6=si0;
goto L12;
L13:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L12:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+1216U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l5;
si1=1216U;
si0+=si1;
f1354(i,si0);
L14:;
si0=l6;
l5=si0;
si0=l6;
if(si0){
goto L15;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=8U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
sj1=7310575247910266227ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4U;
si1=l5;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l9=si1;
si2=l5;
si1-=si2;
si2=l9;
si3=l5;
si2=si2 == si3;
si0=si2?si0:si1;
l8=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=1U;
l9=si0;
si0=l5;
si1=l8;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L16;
}
L17:;
si0=0U;
l9=si0;
L16:;
si0=l4;
si1=36U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
si2=0U;
si0=f5980(i,si0,si1,si2);
l5=si0;
L15:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l5;
si3=l3;
f13168(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L18;
}
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=l7;
si3=l1;
si4=l3;
f13439(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l6;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L18:;
si0=l6;
if(si0){
goto L4;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
f5522(i,si0);
goto L4;
L6:;
f14795(i);
UNREACHABLE;
L5:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l7;
l5=si0;
si0=l2;
l3=si0;
L3:;
si0=l5;
f5522(i,si0);
L2:;
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
l2=si0;
goto L1;
L19:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f7501(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=1U;
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l2;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
l3=si0;
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l7;
si3=17348672U;
si4=6U;
si5=l5;
si6=20U;
si5+=si6;
si6=l2;
si7=0U;
si5=f5916(i,si5,si6,si7);
f7564(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l5;
si1=l4;
si2=l1;
f7504(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si1=56U;
si0+=si1;
si0=f2076(i,si0);
l1=si0;
L8:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
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
goto L1;
}
si0=l4;
f5522(i,si0);
goto L1;
L7:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7502(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3774697963921938272ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8343973563354575502ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=21U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348571U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348566U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348558U);
i64_store(&i->m0,(U64)si0,sj1);
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
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si2=l3;
si3=48U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l1;
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
goto L10;
}
si0=l1;
f5522(i,si0);
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=21U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348571U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348566U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348558U);
i64_store(&i->m0,(U64)si0,sj1);
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
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si2=l3;
si3=48U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L8:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6879226489707195439ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=843U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=17348648U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
default:
goto L16;
}
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
f1354(i,si0);
goto L12;
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L12;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L12;
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L12;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L12;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
f1354(i,si0);
L12:;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+48U,sj1);
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
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si2=l3;
si3=48U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
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
goto L17;
}
si0=l4;
f5522(i,si0);
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=21U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348571U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348566U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348558U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si0=l3;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l6;
si2=l3;
si3=48U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
goto L19;
L21:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f11345(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=17367008U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1028U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=17367049U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si2=l3;
si3=32U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
L19:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
f5522(i,si0);
goto L3;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
f5522(i,si0);
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7503(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1216U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+1216U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l7;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l6;
si1=1224U;
si0+=si1;
si1=17348672U;
si2=6U;
si0=f13119(i,si0,si1,si2);
l8=si0;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
goto L3;
L4:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+1216U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=1216U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l8;
l6=si0;
si0=l8;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=6U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17348676U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17348672U);
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=4U;
si1=l6;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l7=si1;
si2=l6;
si1-=si2;
si2=l7;
si3=l6;
si2=si2 == si3;
si0=si2?si0:si1;
l7=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l6;
si1=l7;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L12;
}
L13:;
si0=0U;
l9=si0;
L12:;
si0=l5;
si1=36U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l10;
si2=0U;
si0=f5980(i,si0,si1,si2);
l6=si0;
L11:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=l6;
si3=l1;
f13168(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L14;
}
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l3;
si3=l4;
si4=l1;
f13425(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l8;
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
l3=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L7;
L14:;
si0=l8;
if(si0){
goto L8;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
f5522(i,si0);
goto L8;
L10:;
si0=1U;
si1=6U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
f5522(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7504(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l2=si0;
goto L2;
L3:;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l3;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=843U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=17347176U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L4;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L5;
default:
goto L8;
}
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
f1354(i,si0);
goto L4;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L4;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L4;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
f1354(i,si0);
L4:;
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
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
i64_store(&i->m0,(U64)si0+16U,sj1);
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
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l5;
si2=l3;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
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
goto L2;
}
si0=l1;
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
sj1=l4;
sj2=0ULL;
si1=sj1 != sj2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7505(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
si2=l2;
f8141(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=60U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=60U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=60U;
si0+=si1;
si1=31U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
si2=31U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
l6=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+57U);
i32_store16(&i->m0,(U64)si0+89U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
sj0=l6;
si0=(U32)(sj0);
l5=si0;
si0=l3;
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=0U;
si3=l4;
si4=l4;
si5=68U;
si4+=si5;
si5=l2;
f7086(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L1;
L3:;
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=68U;
si4+=si5;
si5=l2;
f7086(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
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
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
goto L1;
L2:;
si0=1U;
l5=si0;
si0=l3;
l2=si0;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7506(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f7917(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l2;
f7053(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
if(si0){
goto L4;
}
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=17347093U;
si4=8U;
f7054(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L3;
}
si0=l7;
si1=4U;
si0+=si1;
si1=0U;
f1361(i,si0,si1);
L3:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7507(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7983(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=144U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7508(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7948(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7509(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l3;
si1=l2;
si0=f7032(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
si0=l6;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
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

void f7510(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l3;
si3=17347979U;
si4=4U;
si5=l2;
f7084(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si0=f8550(i,si0,si1);
l3=si0;
goto L1;
L3:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L1:;
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

void f7511(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8094(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l3;
si1=l2;
si0=f7255(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
f5522(i,si0);
L3:;
si0=l6;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
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

void f7512(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7983(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l4;
si1=44U;
si0+=si1;
l6=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
si2=104U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l5;
si2=l3;
si3=112U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=5U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f8470(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l6;
si1=l4;
si2=28U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si2=0U;
si0=f5931(i,si0,si1,si2);
l2=si0;
goto L4;
L5:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7513(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=68U;
si3+=si4;
si3=i32_load16_u(&i->m0,(U64)si3);
si4=8U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7514(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
si2=10U;
si3=l5;
si4=20U;
si3+=si4;
f8899(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
si0=f8916(i,si0,si1);
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L5;
}
si0=l4;
f15024(i,si0);
L5:;
si0=l1;
f15024(i,si0);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
f15024(i,si0);
goto L1;
L3:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
si2=l2;
sj2=(U64)(si2);
l7=sj2;
sj3=l6;
sj4=l7;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
si1=(U32)(sj1);
l4=si1;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
l8=si0;
si0=l2;
si1=l4;
si0-=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l2;
l3=si0;
si0=l2;
if(si0){
goto L13;
}
si0=1U;
l4=si0;
si0=0U;
l2=si0;
goto L12;
L13:;
si0=l5;
si1=8U;
si0+=si1;
si1=10U;
si2=l8;
si3=l3;
f1334(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l4;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
si1=l3;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l2;
si1=l3;
si2=17347000U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=17347000U;
f684(i,si0);
UNREACHABLE;
L15:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l8;
si2=l2;
si0=f15143(i,si0,si1,si2);
goto L11;
L14:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
l2=si0;
L12:;
si0=l4;
si1=l8;
si2=l2;
si0=f15143(i,si0,si1,si2);
L11:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l6;
si2=l2;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L10:;
si0=l4;
si1=l2;
si2=17335928U;
f593(i,si0,si1,si2);
UNREACHABLE;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7515(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l3;
si4=70U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7516(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7948(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=88U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7517(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l4=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l5=sj1;
sj0-=sj1;
sj1=0ULL;
sj2=l4;
sj3=-1ULL;
si2=sj2 != sj3;
sj0=si2?sj0:sj1;
sj1=0ULL;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+64U);
si3=4U;
si2&=si3;
si3=2U;
si2>>=(si3&31);
sj0=si2?sj0:sj1;
l4=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L7;
}
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=2U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=l3;
si3=20U;
si2+=si3;
si3=0U;
si4=l6;
si5=l2;
f7470(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l2;
sj1=(U64)(si1);
l4=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=l4;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L6;
L9:;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l2=si0;
goto L5;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L7:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
sj1=l5;
si1=(U32)(sj1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=l6;
si0-=si1;
l7=si0;
sj1=l4;
si1=(U32)(sj1);
l2=si1;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l6;
si0+=si1;
l1=si0;
goto L4;
L11:;
si0=l6;
si1=l2;
si2=17348016U;
f593(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=l7;
si2=17348000U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=l6;
si2=17347984U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
L4:;
si0=l2;
if(si0){
goto L13;
}
si0=1U;
l6=si0;
goto L12;
L13:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
L12:;
si0=l6;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f7518(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7953(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
l6=si0;
goto L3;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=0U;
l3=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
l6=si0;
goto L3;
L10:;
si0=l2;
si1=17462072U;
si2=7U;
si3=l7;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L3;
L7:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l7;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l8;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L3;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=5U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17348501U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17348497U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
si0=f5980(i,si0,si1,si2);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L5:;
si0=l5;
f5522(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7519(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8094(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si2=17349436U;
si3=8U;
si0=f7075(i,si0,si1,si2,si3);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7520(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=208U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17348686U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17348678U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=51539607564ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660712U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660716U);
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
si0=si0 != si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=0U;
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+81U);
if(si0){
goto L7;
}
si0=0U;
l5=si0;
goto L3;
L8:;
si0=l3;
si1=l1;
si2=l4;
si3=96U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L7:;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l5;
si3=17348664U;
si4=8U;
f7054(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L6:;
si0=1U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=17335208U;
si1=43U;
si2=17346864U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=96U;
si0+=si1;
si1=l5;
si2=l3;
f7502(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
if(si0){
goto L3;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l4;
si1=5U;
si2=4U;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+80U);
l8=si3;
si1=si3?si1:si2;
l9=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=17348519U;
si2=17347979U;
si3=l8;
si1=si3?si1:si2;
l8=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+24U);
sd1=1;
sd0=f15078(i,sd0,sd1);
si1=l2;
sd1=(F64)(si1);
sd0*=sd1;
l10=sd0;
sd1=4294967296;
si0=sd0 < sd1;
sd1=l10;
sd2=0;
si1=sd1 >= sd2;
l2=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
sd0=l10;
si0=I32_TRUNC_U_F64(sd0);
l6=si0;
goto L11;
L12:;
si0=0U;
l6=si0;
L11:;
si0=-1U;
si1=l6;
si2=0U;
si3=l2;
si1=si3?si1:si2;
sd2=l10;
sd3=4294967295;
si2=sd2 > sd3;
si0=si2?si0:si1;
l6=si0;
L10:;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+44U);
si3=l8;
si4=l9;
si5=l1;
si5=i32_load(&i->m0,(U64)si5+36U);
l2=si5;
si6=l6;
si7=l2;
si8=l6;
si7=si7 > si8;
si5=si7?si5:si6;
f7494(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L15;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l3;
si2=l2;
f9261(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l6=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+136U);
l8=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
si1=192U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f13757(i,si0,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
si1=843U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1028U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=17348752U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l4;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=140U;
si0+=si1;
si1=l4;
si2=152U;
si1+=si2;
f64(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
switch(si0){
case 0:
goto L16;
case 1:
goto L19;
case 2:
goto L18;
case 3:
goto L17;
default:
goto L20;
}
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
f1354(i,si0);
goto L16;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L16;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L16;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L16;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L16;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
f1354(i,si0);
L16:;
si0=l4;
si1=152U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=140U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+140U);
i64_store(&i->m0,(U64)si0+152U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
si1=l1;
si2=l4;
si3=152U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l6;
f5522(i,si0);
L21:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l2;
f5522(i,si0);
goto L13;
L15:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L13;
L14:;
si0=l4;
si1=52U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=12U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+100U);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+137U);
i32_store16(&i->m0,(U64)si0+93U,si1);
si0=l4;
si1=l8;
i32_store8(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=52U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
switch(si0){
case 0:
goto L27;
case 1:
goto L25;
case 2:
goto L24;
case 3:
goto L23;
case 4:
goto L26;
default:
goto L27;
}
L27:;
si0=l4;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L22;
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l8;
f1354(i,si0);
goto L22;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l8=si0;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l9;
if(si0){
goto L22;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L22;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l8=si0;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l11=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l11;
if(si0){
goto L22;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L22;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l8;
f1354(i,si0);
L22:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+32U);
si3=l2;
si4=l6;
si4=!(si4);
f7524(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L28;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f7504(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L28;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L30;
}
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L29;
L30:;
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l2;
si1=56U;
si0+=si1;
si0=f2076(i,si0);
l8=si0;
L29:;
si0=l8;
if(si0){
goto L32;
}
sd0=0;
l10=sd0;
goto L31;
L32:;
si0=l6;
sd0=(F64)(si0);
si1=l8;
sd1=(F64)(si1);
sd0/=sd1;
l10=sd0;
L31:;
si0=l1;
sd1=l10;
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l1;
si1=l2;
f7578(i,si0,si1);
si0=l8;
si1=l6;
si0|=si1;
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L33;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=l4;
si1=l5;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=0U;
f8721(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=l6;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=52U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l6=si0;
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L37;
case 3:
goto L36;
case 4:
goto L35;
default:
goto L39;
}
L39:;
si0=l4;
si1=104U;
si0+=si1;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l9=si0;
goto L34;
L38:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=1U;
si0+=si1;
l9=si0;
si0=l4;
si1=104U;
si0+=si1;
l8=si0;
goto L34;
L37:;
si0=l4;
si1=108U;
si0+=si1;
l8=si0;
si0=l4;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
goto L34;
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=4U;
si0+=si1;
l9=si0;
si0=l4;
si1=104U;
si0+=si1;
l8=si0;
goto L34;
L35:;
si0=l4;
si1=108U;
si0+=si1;
l8=si0;
si0=l4;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L34:;
si0=l4;
si1=152U;
si0+=si1;
si1=l9;
si2=l8;
si2=i32_load(&i->m0,(U64)si2);
f8487(i,si0,si1,si2);
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+100U);
f7338(i,si0,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=152U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f7561(i,si0,si1);
l6=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
f5522(i,si0);
L40:;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l5;
f5522(i,si0);
L33:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si1=!(si1);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l4;
si1=52U;
si0+=si1;
f7332(i,si0);
goto L2;
L28:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L41;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
f5522(i,si0);
L41:;
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
f15024(i,si0);
L42:;
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
f15024(i,si0);
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
f5522(i,si0);
L2:;
si0=l4;
si1=208U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7521(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=0U;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
l3=si2;
si1-=si2;
l4=si1;
si2=l4;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L1;
L5:;
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L4:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L6;
L7:;
si0=l6;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L6:;
si0=l6;
si1=l2;
si0+=si1;
si1=l6;
si2=l3;
si1+=si2;
l4=si1;
si0-=si1;
l7=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=l7;
si0=f663(i,si0,si1);
l1=si0;
goto L2;
L8:;
si0=0U;
l1=si0;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l7;
si1=3U;
si0&=si1;
l2=si0;
si0=l7;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=0U;
l1=si0;
si0=0U;
l8=si0;
goto L9;
L10:;
si0=0U;
l1=si0;
si0=l7;
si1=-4U;
si0&=si1;
l8=si0;
l7=si0;
L11:;
{
si0=l1;
si1=l4;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l4;
si2=2U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l4;
si2=3U;
si1+=si2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l1=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L11;
}
}
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=l8;
si2=l3;
si1+=si2;
si0+=si1;
l4=si0;
L12:;
{
si0=l1;
si1=l4;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l1=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L12;
}
goto L2;
}
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=56U;
si0+=si1;
si0=f2076(i,si0);
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l6;
si1=l1;
si2=l3;
si3=l2;
si4=17351340U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f7522(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8052(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l6=si0;
goto L2;
L3:;
si0=1U;
l5=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si0=f7058(i,si0,si1);
l6=si0;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7523(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8166(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7524(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=1216U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+1216U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l7;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L1:;
si0=l6;
si1=1224U;
si0+=si1;
si1=17348672U;
si2=6U;
si0=f13119(i,si0,si1,si2);
l8=si0;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
goto L3;
L4:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L3:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+1216U);
l10=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1216U,si1);
si0=l10;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=1216U;
si0+=si1;
f1354(i,si0);
L5:;
si0=l8;
l6=si0;
si0=l8;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=6U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17348676U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17348672U);
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=4U;
si1=l6;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l7=si1;
si2=l6;
si1-=si2;
si2=l7;
si3=l6;
si2=si2 == si3;
si0=si2?si0:si1;
l7=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l6;
si1=l7;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L12;
}
L13:;
si0=0U;
l9=si0;
L12:;
si0=l5;
si1=36U;
si0+=si1;
si1=6U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l10;
si2=0U;
si0=f5980(i,si0,si1,si2);
l6=si0;
L11:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=l6;
si3=l1;
f13168(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L14;
}
si0=l5;
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l3;
si3=l4;
si4=l1;
f13425(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l8;
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
l3=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L7;
L14:;
si0=l8;
if(si0){
goto L8;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
f5522(i,si0);
goto L8;
L10:;
si0=1U;
si1=6U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f14795(i);
UNREACHABLE;
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
f5522(i,si0);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7525(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=70U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
si1=-5U;
si0&=si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
goto L5;
L6:;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
l2=si0;
goto L4;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=150U;
si0&=si1;
if(si0){
goto L5;
}
si0=l2;
si1=1276U;
si0+=si1;
l2=si0;
goto L4;
L5:;
si0=l2;
si1=1272U;
si0+=si1;
l2=si0;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7526(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f8052(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7527(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=70U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=6U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
goto L5;
L6:;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
l2=si0;
goto L4;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=150U;
si0&=si1;
if(si0){
goto L5;
}
si0=l2;
si1=1276U;
si0+=si1;
l2=si0;
goto L4;
L5:;
si0=l2;
si1=1272U;
si0+=si1;
l2=si0;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7528(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f7890(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
l2=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
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
f5522(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f7529(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f8076(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=72U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
l6=si0;
si0=l5;
si1=l4;
si2=72U;
si1+=si2;
si2=l2;
si0=f7107(i,si0,si1,si2);
l5=si0;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L4:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
f5522(i,si0);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=1U;
l6=si0;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}


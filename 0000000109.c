#include "w2c2_base.h"

#include "rustpython.h"

U32 f10930(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=32U;
si0+=si1;
l5=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=l2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
l6=sj0;
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l9=sj0;
si0=l2;
si1=8U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=1U;
si0=si0 > si1;
if(si0){
goto L6;
}
sj0=0ULL;
l10=sj0;
sj0=0ULL;
l11=sj0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l10=sj0;
l11=sj0;
goto L5;
L6:;
si0=l2;
si1=3U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si0+=si1;
si1=-1U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
l10=sj0;
si0=l1;
sj0=i64_load16_u(&i->m0,(U64)si0);
l11=sj0;
goto L5;
L7:;
si0=l2;
si1=l1;
si0+=si1;
si1=-4U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l10=sj0;
si0=l1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l11=sj0;
L5:;
sj0=l10;
sj1=l7;
sj0^=sj1;
sj1=l8;
sj2=l11;
sj1^=sj2;
sj2=l6;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l9;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l9=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l6=sj1;
sj0^=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
sj1=l9;
sj0^=sj1;
sj1=8ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=6364136223846793005ULL;
sj0*=sj1;
l9=sj0;
sj1=l6;
sj0^=sj1;
sj1=24ULL;
sj0=I64_ROTL(sj0,sj1);
l6=sj0;
goto L3;
L4:;
si0=l2;
si1=16U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l2;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l7;
sj0^=sj1;
sj1=l8;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=l6;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l9;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l9=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l6=sj1;
sj0^=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
sj1=l9;
sj0^=sj1;
sj1=8ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=6364136223846793005ULL;
sj0*=sj1;
l9=sj0;
sj1=l6;
sj0^=sj1;
sj1=24ULL;
sj0=I64_ROTL(sj0,sj1);
l6=sj0;
goto L3;
L8:;
sj0=l7;
si1=l2;
si2=l1;
si1+=si2;
si2=-16U;
si1+=si2;
l12=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
sj1=l6;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=l8;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l9;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l9=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l6=sj1;
sj0^=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
sj1=l9;
sj0^=sj1;
sj1=8ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=6364136223846793005ULL;
sj0*=sj1;
l9=sj0;
sj1=l6;
sj0^=sj1;
sj1=24ULL;
sj0=I64_ROTL(sj0,sj1);
l6=sj0;
si0=l1;
l12=si0;
si0=l2;
l13=si0;
L9:;
{
sj0=l7;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
sj1=l8;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
sj2=l6;
sj1^=sj2;
sj2=6364136223846793005ULL;
sj1*=sj2;
sj2=l9;
sj1^=sj2;
sj2=8ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=6364136223846793005ULL;
sj1*=sj2;
l9=sj1;
sj2=l6;
sj1^=sj2;
sj2=24ULL;
sj1=I64_ROTL(sj1,sj2);
l6=sj1;
sj0^=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
sj1=l9;
sj0^=sj1;
sj1=8ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=6364136223846793005ULL;
sj0*=sj1;
l9=sj0;
sj1=l6;
sj0^=sj1;
sj1=24ULL;
sj0=I64_ROTL(sj0,sj1);
l6=sj0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l13;
si1=-16U;
si0+=si1;
l13=si0;
si1=16U;
si0=si0 > si1;
if(si0){
goto L9;
}
}
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
sj2=l6;
sj3=255ULL;
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l9;
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l9=sj2;
sj3=l6;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l6=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l9;
sj2^=sj3;
sj3=l6;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l1;
si4=l2;
f12862(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si1=l0;
si2=56U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si2=5U;
si1<<=(si2&31);
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L1:;
si0=l12;
si1=l13;
si2=1862636U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f10931(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si1=l1;
sj1=(U64)(si1);
sj0^=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj0^=sj1;
sj1=8ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=6364136223846793005ULL;
sj0*=sj1;
l3=sj0;
sj1=l2;
sj0^=sj1;
sj1=24ULL;
sj0=I64_ROTL(sj0,sj1);
l2=sj0;
sj1=6364136223846793005ULL;
sj0*=sj1;
sj1=l3;
sj0^=sj1;
sj1=l2;
sj0=I64_ROTL(sj0,sj1);
l2=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l4=sj0;
sj0=l2;
si0=(U32)(sj0);
l5=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-4U;
si0+=si1;
l7=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=0U;
l11=si0;
L2:;
{
si0=l6;
si1=l5;
si2=l8;
si1&=si2;
l5=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sj1=l4;
sj0^=sj1;
l2=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l2;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l2=sj0;
L5:;
{
sj0=l2;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
sj0=l3;
sj1=l3;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=0U;
goto L0;
L6:;
si0=l9;
si1=l7;
sj2=l2;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l5;
si2+=si3;
si3=l8;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0=si0 <= si1;
if(si0){
goto L4;
}
sj0=l2;
sj1=-1ULL;
sj0+=sj1;
sj1=l2;
sj0&=sj1;
l2=sj0;
si0=l10;
si1=l0;
si2=12U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l10;
si1=l0;
si2=12U;
si1*=si2;
si0+=si1;
si1=4U;
si0+=si1;
goto L0;
L4:;
si0=l0;
si1=l9;
si2=1914816U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l5=si0;
goto L2;
}
L0:;
return si0;
}

U32 f10932(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
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
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=64U;
si2+=si3;
f5515(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l1=si0;
if(si0){
goto L1;
}
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f15271(i,si0);
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f10933(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
si1=l2;
si2=-4U;
si1+=si2;
l5=si1;
si2=l5;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si1=l2;
si2=-1U;
si1+=si2;
l5=si1;
si2=l6;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L10:;
{
si0=l5;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l2;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l4;
si1=l5;
si0+=si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l8=si0;
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L10;
}
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
L9:;
si0=l2;
si1=l7;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=1114112U;
l6=si0;
si0=l2;
si1=l7;
si0-=si1;
l9=si0;
if(si0){
goto L11;
}
si0=0U;
l5=si0;
goto L4;
L11:;
si0=l4;
si1=l7;
si0+=si1;
l10=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
si0=0U;
l11=si0;
si0=12U;
l3=si0;
si0=0U;
l5=si0;
L13:;
{
si0=l9;
si1=l5;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l9;
l5=si0;
goto L4;
L14:;
si0=l10;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=1861360U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=12U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=63U;
si0&=si1;
si1=l11;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l11=si0;
goto L15;
L16:;
si0=255U;
si1=l4;
si0>>=(si1&31);
si1=l8;
si0&=si1;
l11=si0;
L15:;
si0=l3;
si1=l4;
si0+=si1;
l3=si0;
si1=108U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=1861616U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
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
goto L13;
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
goto L17;
default:
goto L13;
}
L17:;
}
si0=l11;
l6=si0;
goto L4;
L12:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=1U;
si2=l5;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
goto L4;
L8:;
si0=l5;
si1=l2;
si2=1861328U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l7;
si1=l2;
si2=1861344U;
f662(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=255U;
si0&=si1;
l6=si0;
si0=1U;
l5=si0;
goto L4;
L5:;
si0=l3;
si1=108U;
si2=1861724U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1U;
l3=si0;
si0=l5;
si1=l7;
si0+=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
l3=si0;
si0=l6;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=65533U;
l6=si0;
L1:;
si0=l3;
if(si0){
goto L18;
}
si0=l0;
si1=1114112U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L18:;
si0=l2;
si1=l3;
si0-=si1;
l5=si0;
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l5=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
si2=l3;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L19:;
si0=l5;
si1=l2;
si2=1862652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f10934(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l2;
l3=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l1;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l3=si0;
si0=l4;
si1=31U;
si0&=si1;
l5=si0;
si0=l4;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
l4=si0;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L1;
L4:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
si0=l1;
si1=3U;
si0+=si1;
l3=si0;
goto L1;
L5:;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l1;
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
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
goto L7;
L8:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l1;
si1=31U;
si0&=si1;
l6=si0;
si0=l1;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l1=si0;
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
goto L7;
L9:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l1;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l5;
si1=l6;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
si0=l3;
si1=3U;
si0+=si1;
l3=si0;
goto L7;
L10:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l3;
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
goto L6;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
L7:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l0;
si1=1114114U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

U32 f10935(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj3;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l0;
si2=l1;
f10148(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
goto L4;
L5:;
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+8U);
l5=sd0;
sj0=i64_reinterpret_f64(sd0);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=1048575U;
si0&=si1;
l8=si0;
si0=l7;
si1=-2147483648U;
si0&=si1;
l1=si0;
si0=l7;
si1=2146435072U;
si0&=si1;
l9=si0;
si1=2146435072U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=16U;
si0>>=(si1&31);
si1=l8;
si2=10U;
si1>>=(si2&31);
si0|=si1;
si1=512U;
si2=l8;
si3=0U;
si2=si2 != si3;
si3=9U;
si2<<=(si3&31);
sj3=l6;
si3=(U32)(sj3);
si1=si3?si1:si2;
si0|=si1;
si1=31744U;
si0|=si1;
l1=si0;
goto L6;
L7:;
si0=l1;
si1=16U;
si0>>=(si1&31);
l1=si0;
si0=l9;
si1=1088421888U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l9;
si1=1058013184U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=10U;
si0>>=(si1&31);
l8=si0;
si0=l9;
si1=10U;
si0>>=(si1&31);
si1=-1032192U;
si0+=si1;
si1=l1;
si0|=si1;
l1=si0;
si0=l7;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=1535U;
si0&=si1;
if(si0){
goto L8;
}
L11:;
si0=l1;
si1=l8;
si0|=si1;
l1=si0;
goto L6;
L10:;
si0=l9;
si1=1045430272U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l8;
si1=1048576U;
si0|=si1;
l7=si0;
si1=27U;
si2=l9;
si3=20U;
si2>>=(si3&31);
l8=si2;
si1-=si2;
si0>>=(si1&31);
si1=l7;
si2=26U;
si3=l8;
si2-=si3;
l8=si2;
si1>>=(si2&31);
si2=3U;
si3=l8;
si2<<=(si3&31);
si3=-1U;
si2+=si3;
si3=l7;
si2&=si3;
si3=0U;
si2=si2 != si3;
si1&=si2;
si0+=si1;
si1=l1;
si0|=si1;
l1=si0;
goto L6;
L9:;
si0=l1;
si1=31744U;
si0|=si1;
l1=si0;
goto L6;
L8:;
si0=l8;
si1=l1;
si0+=si1;
si1=1U;
si0+=si1;
l1=si0;
L6:;
sd0=l5;
sd1=INFINITY;
si0=sd0 == sd1;
sd1=l5;
sd2=-INFINITY;
si1=sd1 == sd2;
si0|=si1;
si1=l1;
si2=32767U;
si1&=si2;
si2=31744U;
si1=si1 == si2;
si0^=si1;
if(si0){
goto L12;
}
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=l1;
si2=8U;
si1<<=(si2&31);
si2=l1;
si3=65280U;
si2&=si3;
si3=8U;
si2>>=(si3&31);
si1|=si2;
i32_store16(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
goto L4;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=37U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=29U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862697U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862692U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862684U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862676U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862668U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=158913789989ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l7;
si2=l4;
si0=f7173(i,si0,si1,si2);
l0=si0;
L4:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L3:;
si0=l3;
si1=2U;
si2=1630040U;
f755(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=37U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f10936(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj3;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l0;
si2=l1;
f10148(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
goto L4;
L5:;
si0=l4;
sd0=f64_load(&i->m0,(U64)si0+8U);
l5=sd0;
sj0=i64_reinterpret_f64(sd0);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si1=1048575U;
si0&=si1;
l8=si0;
si0=l7;
si1=-2147483648U;
si0&=si1;
l1=si0;
si0=l7;
si1=2146435072U;
si0&=si1;
l9=si0;
si1=2146435072U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=16U;
si0>>=(si1&31);
si1=l8;
si2=10U;
si1>>=(si2&31);
si0|=si1;
si1=512U;
si2=l8;
si3=0U;
si2=si2 != si3;
si3=9U;
si2<<=(si3&31);
sj3=l6;
si3=(U32)(sj3);
si1=si3?si1:si2;
si0|=si1;
si1=31744U;
si0|=si1;
l1=si0;
goto L6;
L7:;
si0=l1;
si1=16U;
si0>>=(si1&31);
l1=si0;
si0=l9;
si1=1088421888U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l9;
si1=1058013184U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=10U;
si0>>=(si1&31);
l8=si0;
si0=l9;
si1=10U;
si0>>=(si1&31);
si1=-1032192U;
si0+=si1;
si1=l1;
si0|=si1;
l1=si0;
si0=l7;
si1=512U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=1535U;
si0&=si1;
if(si0){
goto L8;
}
L11:;
si0=l1;
si1=l8;
si0|=si1;
l1=si0;
goto L6;
L10:;
si0=l9;
si1=1045430272U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l8;
si1=1048576U;
si0|=si1;
l7=si0;
si1=27U;
si2=l9;
si3=20U;
si2>>=(si3&31);
l8=si2;
si1-=si2;
si0>>=(si1&31);
si1=l7;
si2=26U;
si3=l8;
si2-=si3;
l8=si2;
si1>>=(si2&31);
si2=3U;
si3=l8;
si2<<=(si3&31);
si3=-1U;
si2+=si3;
si3=l7;
si2&=si3;
si3=0U;
si2=si2 != si3;
si1&=si2;
si0+=si1;
si1=l1;
si0|=si1;
l1=si0;
goto L6;
L9:;
si0=l1;
si1=31744U;
si0|=si1;
l1=si0;
goto L6;
L8:;
si0=l8;
si1=l1;
si0+=si1;
si1=1U;
si0+=si1;
l1=si0;
L6:;
sd0=l5;
sd1=INFINITY;
si0=sd0 == sd1;
sd1=l5;
sd2=-INFINITY;
si1=sd1 == sd2;
si0|=si1;
si1=l1;
si2=32767U;
si1&=si2;
si2=31744U;
si1=si1 == si2;
si0^=si1;
if(si0){
goto L12;
}
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=l1;
i32_store16(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
goto L4;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=37U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=29U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862697U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862692U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862684U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862676U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862668U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=158913789989ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l7;
si2=l4;
si0=f7173(i,si0,si1,si2);
l0=si0;
L4:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L3:;
si0=l3;
si1=2U;
si2=1630040U;
f755(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=37U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f10937(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
F64 sd0;
si0=l2;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
l2=si0;
sj0=(U64)(si0);
l3=sj0;
si0=l2;
si1=32767U;
si0&=si1;
if(si0){
goto L4;
}
sj0=l3;
sj1=48ULL;
sj0<<=(sj1&63);
l3=sj0;
goto L1;
L4:;
si0=l2;
si1=1023U;
si0&=si1;
l1=si0;
sj0=l3;
sj1=1023ULL;
sj0&=sj1;
l4=sj0;
sj0=l3;
sj1=32768ULL;
sj0&=sj1;
l3=sj0;
si0=l2;
si1=31744U;
si0&=si1;
l2=si0;
si1=31744U;
si0=si0 != si1;
if(si0){
goto L5;
}
sj0=l3;
sj1=48ULL;
sj0<<=(sj1&63);
l3=sj0;
si0=l1;
if(si0){
goto L6;
}
sj0=l3;
sj1=9218868437227405312ULL;
sj0|=sj1;
l3=sj0;
goto L1;
L6:;
sj0=l3;
sj1=l4;
sj2=42ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=9221120237041090560ULL;
sj0|=sj1;
l3=sj0;
goto L1;
L5:;
sj0=l3;
sj1=48ULL;
sj0<<=(sj1&63);
l3=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=10U;
si0>>=(si1&31);
si1=1008U;
si0+=si1;
sj0=(U64)(si0);
sj1=52ULL;
sj0<<=(sj1&63);
sj1=l4;
sj2=42ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l3;
sj0|=sj1;
l3=sj0;
goto L1;
L3:;
si0=2U;
si1=l2;
si2=1862724U;
f755(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l4;
si1=l1;
si1=I32_CLZ(si1);
l2=si1;
si2=-16U;
si1+=si2;
si2=65535U;
si1&=si2;
si2=37U;
si1+=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=4503599627370495ULL;
sj0&=sj1;
si1=1030U;
si2=l2;
si1-=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l3;
sj0|=sj1;
l3=sj0;
L1:;
sj0=l3;
sd0=f64_reinterpret_i64(sj0);
si1=l0;
si0=f12206(i,sd0,si1);
L0:;
return si0;
}

U32 f10938(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
F64 sd0;
si0=l2;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0);
l2=si0;
si1=8U;
si0<<=(si1&31);
si1=l2;
si2=8U;
si1>>=(si2&31);
si0|=si1;
l2=si0;
si1=32767U;
si0&=si1;
if(si0){
goto L4;
}
si0=l2;
sj0=(U64)(si0);
sj1=48ULL;
sj0<<=(sj1&63);
l3=sj0;
goto L1;
L4:;
si0=l2;
si1=1023U;
si0&=si1;
l1=si0;
si0=l2;
sj0=(U64)(si0);
l3=sj0;
sj1=1023ULL;
sj0&=sj1;
l4=sj0;
sj0=l3;
sj1=32768ULL;
sj0&=sj1;
l3=sj0;
si0=l2;
si1=31744U;
si0&=si1;
l2=si0;
si1=31744U;
si0=si0 != si1;
if(si0){
goto L5;
}
sj0=l3;
sj1=48ULL;
sj0<<=(sj1&63);
l3=sj0;
si0=l1;
if(si0){
goto L6;
}
sj0=l3;
sj1=9218868437227405312ULL;
sj0|=sj1;
l3=sj0;
goto L1;
L6:;
sj0=l3;
sj1=l4;
sj2=42ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=9221120237041090560ULL;
sj0|=sj1;
l3=sj0;
goto L1;
L5:;
sj0=l3;
sj1=48ULL;
sj0<<=(sj1&63);
l3=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=10U;
si0>>=(si1&31);
si1=1008U;
si0+=si1;
sj0=(U64)(si0);
sj1=52ULL;
sj0<<=(sj1&63);
sj1=l4;
sj2=42ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l3;
sj0|=sj1;
l3=sj0;
goto L1;
L3:;
si0=2U;
si1=l2;
si2=1862724U;
f755(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l4;
si1=l1;
si1=I32_CLZ(si1);
l2=si1;
si2=-16U;
si1+=si2;
si2=65535U;
si1&=si2;
si2=37U;
si1+=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=4503599627370495ULL;
sj0&=sj1;
si1=1030U;
si2=l2;
si1-=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l3;
sj0|=sj1;
l3=sj0;
L1:;
sj0=l3;
sd0=f64_reinterpret_i64(sj0);
si1=l0;
si0=f12206(i,sd0,si1);
L0:;
return si0;
}

void f10939(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+84U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l0;
si1=1200U;
si0+=si1;
si1=1866020U;
si2=9U;
si3=l3;
si0=f12275(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
f10940(i,si0,si1);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=2970380U;
f12886(i,si0);
L3:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l4=si0;
si0=l2;
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
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l4;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=0U;
si0=f7748(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L4:;
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=416U;
si1+=si2;
si2=l2;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l7=sj2;
si3=l3;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l8=sj2;
sj3=l7;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l7=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l8;
sj2^=sj3;
sj3=l7;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=l6;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l3;
f7690(i,si0);
L5:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L2;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L2:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l3=si0;
si1=l3;
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
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L7:;
si0=l1;
si1=l2;
si2=416U;
si1+=si2;
si2=l2;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l7=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l8=sj2;
sj3=l7;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l7=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l8;
sj2^=sj3;
sj3=l7;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=l3;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l3;
f7690(i,si0);
L8:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L6;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L6:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10940(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1873304U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1873296U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1869592U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=51539607564ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=56U;
si0+=si1;
l3=si0;
si1=1873296U;
si2=12U;
si3=l2;
si4=l4;
si5=0U;
si3=f8062(i,si3,si4,si5);
si4=l0;
f9968(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
sj1=7308604914263877991ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1869496U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=1873308U;
si2=8U;
si3=l2;
si4=l5;
si5=0U;
si3=f8062(i,si3,si4,si5);
si4=l0;
f9968(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=10U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1873324U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1873316U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1869616U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=42949672970ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=1873316U;
si2=10U;
si3=l2;
si4=l5;
si5=0U;
si3=f8062(i,si3,si4,si5);
si4=l0;
f9968(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=7U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1873329U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1873326U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1869544U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=1873326U;
si2=7U;
si3=l2;
si4=l5;
si5=0U;
si3=f8062(i,si3,si4,si5);
si4=l0;
f9968(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
sj1=6872323076851130207ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1869640U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1869472U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=1873333U;
si2=8U;
si3=l2;
si4=l5;
si5=0U;
si3=f8062(i,si3,si4,si5);
si4=l0;
f9968(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=1U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
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
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10941(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
si1=16U;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l2;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=0U;
sj2=l5;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f10942(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L6:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l3=si0;
si0=0U;
l7=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
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
si2=0U;
si0=f8146(i,si0,si1,si2);
l7=si0;
L7:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l7;
si0=f8137(i,si0,si1,si2);
l5=si0;
goto L3;
L4:;
si0=l3;
si1=l4;
si2=4U;
si1+=si2;
si2=l6;
si0=f9936(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
f7690(i,si0);
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
l7=si0;
L9:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
f7690(i,si0);
L10:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
f15271(i,si0);
L11:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L12:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
l7=si0;
L14:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l8;
f7690(i,si0);
L16:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
f15271(i,si0);
L17:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10943(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
si0=0U;
l5=si0;
si0=0U;
l2=si0;
goto L4;
L5:;
si0=l3;
si1=l2;
si2=l1;
si3=l2;
f7591(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
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
goto L4;
}
si0=l1;
f7690(i,si0);
L4:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l1=si1;
si2=8U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=56U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L6:;
si0=l0;
si1=68U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l1=si2;
si3=l1;
si4=8U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
if(si0){
goto L7;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l1=si0;
L9:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L10;
}
si0=l2;
f7690(i,si0);
L10:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
f15271(i,si0);
L11:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
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
goto L12;
}
si0=l1;
f7690(i,si0);
L12:;
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
L2:;
si0=l0;
f7690(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f10944(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
default:
goto L2;
}
L4:;
si0=1U;
l6=si0;
L3:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l6=si0;
if(si0){
goto L5;
}
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l2;
si1=0U;
si2=l6;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L6;
}
L7:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L6:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l6;
si1=16U;
si0+=si1;
l10=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
si1=l10;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+56U);
l11=si2;
si3=l11;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L8;
}
L9:;
si0=l2;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L8:;
si0=l5;
si1=8U;
si0+=si1;
si1=l7;
si2=l7;
si3=l8;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=l2;
si4=60U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l6=si3;
si4=l6;
si5=l2;
si6=68U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si6=2U;
si5<<=(si6&31);
si4+=si5;
si5=l3;
si6=l4;
f11975(i,si0,si1,si2,si3,si4,si5,si6);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L11;
}
si0=l0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l3=si0;
goto L10;
L11:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l3=si0;
L10:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+56U);
l0=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=56U;
si0+=si1;
f1433(i,si0);
L12:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10945(rustpythonInstance*i,U32 l0) {
U32 l1=0;
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
U64 sj1,sj2,sj3;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+104U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L2;
}
si0=l0;
si1=1200U;
si0+=si1;
l5=si0;
si1=1862740U;
si2=4U;
si3=l3;
si0=f12275(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=141U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=4U;
si1=l3;
si2=1866589U;
si3=141U;
si1=f15390(i,si1,si2,si3);
l7=si1;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l3=si1;
si2=l7;
si1-=si2;
si2=l3;
si3=l7;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L4:;
{
si0=l7;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l4=si0;
goto L3;
L5:;
si0=l3;
si1=133U;
si0=si0 < si1;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
if(si0){
goto L4;
}
}
si0=0U;
l4=si0;
L3:;
si0=l1;
si1=68U;
si0+=si1;
si1=141U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8078(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L6:;
si0=l1;
si1=48U;
si0+=si1;
si1=l2;
si2=416U;
si1+=si2;
l4=si1;
si2=l2;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l7;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
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
goto L7;
}
si0=l3;
f7690(i,si0);
L7:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L8;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L8:;
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2970380U;
f12886(i,si0);
L10:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l7=si0;
si0=l2;
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
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l7;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l3;
si2=0U;
si0=f7748(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L11:;
si0=l1;
si1=40U;
si0+=si1;
si1=l4;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l9=sj2;
si3=l3;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=l6;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
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
goto L12;
}
si0=l3;
f7690(i,si0);
L12:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L9;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L9:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l3=si0;
si1=l3;
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
goto L2;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L14:;
si0=l1;
si1=32U;
si0+=si1;
si1=l4;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l9=sj2;
si3=l7;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l7;
si4=l3;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L15;
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
goto L15;
}
si0=l3;
f7690(i,si0);
L15:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L13;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L13:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l4=si0;
si1=l4;
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
goto L2;
}
si0=l5;
si1=1866112U;
si2=13U;
si3=l4;
si0=f12275(i,si0,si1,si2,si3);
si0=l3;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=2970380U;
f12886(i,si0);
L17:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l2=si0;
si0=l3;
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
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l2;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l4;
si2=0U;
si0=f7748(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=376U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L18:;
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=416U;
si1+=si2;
si2=l3;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=l6;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L19;
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
goto L19;
}
si0=l4;
f7690(i,si0);
L19:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+376U);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
if(si0){
goto L16;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L16:;
si0=l3;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l4=si0;
si1=l4;
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
goto L2;
}
si0=l3;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L21:;
si0=l1;
si1=16U;
si0+=si1;
si1=l3;
si2=416U;
si1+=si2;
si2=l3;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l2;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l4;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=!(si0);
if(si0){
goto L22;
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
goto L22;
}
si0=l4;
f7690(i,si0);
L22:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+376U);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
if(si0){
goto L20;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L20:;
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l4=si0;
si1=l4;
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
goto L2;
}
si0=l5;
si1=1866048U;
si2=20U;
si3=l4;
si0=f12275(i,si0,si1,si2,si3);
si0=l3;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=2970380U;
f12886(i,si0);
L24:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l2=si0;
si0=l3;
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
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l2;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=56U;
si0+=si1;
si1=l4;
si2=0U;
si0=f7748(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=376U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L25;
}
si0=l7;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L25:;
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=416U;
si1+=si2;
si2=l3;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=l6;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
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
goto L26;
}
si0=l4;
f7690(i,si0);
L26:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+376U);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
if(si0){
goto L23;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L23:;
si0=l3;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l4=si0;
si1=l4;
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
goto L2;
}
si0=l3;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L28;
}
si0=l6;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L28:;
si0=l1;
si1=l3;
si2=416U;
si1+=si2;
si2=l3;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l2;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l4;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L29;
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
goto L29;
}
si0=l4;
f7690(i,si0);
L29:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+376U);
l4=si2;
si3=l4;
si4=8U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
if(si0){
goto L27;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L27:;
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=141U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10946(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+244U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l0;
si1=1200U;
si0+=si1;
si1=1865928U;
si2=6U;
si3=l3;
si0=f12275(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si1=716U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=8U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj1=6872339526709436255ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1845304U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=1844608U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=32U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8062(i,si0,si1,si2);
l6=si0;
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L3:;
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=416U;
si1+=si2;
l5=si1;
si2=l2;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l7=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l8=sj2;
sj3=l7;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l7=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l8;
sj2^=sj3;
sj3=l7;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=l6;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
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
si0=l3;
f7690(i,si0);
L4:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L5;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L5:;
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=2970380U;
f12886(i,si0);
L7:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l4=si0;
si0=l2;
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
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l4;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=32U;
si0+=si1;
si1=l3;
si2=0U;
si0=f7748(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L8:;
si0=l1;
si1=16U;
si0+=si1;
si1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l7=sj2;
si3=l3;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l8=sj2;
sj3=l7;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l7=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l8;
sj2^=sj3;
sj3=l7;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=l6;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L9;
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
goto L9;
}
si0=l3;
f7690(i,si0);
L9:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L6;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L6:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l3=si0;
si1=l3;
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
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L11:;
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l7=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l8=sj2;
sj3=l7;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l7=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l8;
sj2^=sj3;
sj3=l7;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=l3;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
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
goto L12;
}
si0=l3;
f7690(i,si0);
L12:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L10;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L10:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l1;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10947(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L6:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l3=si0;
si0=0U;
l7=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8146(i,si0,si1,si2);
l7=si0;
L7:;
si0=l1;
si1=l7;
si0=f8106(i,si0,si1);
l5=si0;
goto L3;
L4:;
si0=l3;
si1=l4;
si2=4U;
si1+=si2;
si2=l6;
si0=f9936(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
f7690(i,si0);
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
l7=si0;
L9:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
f7690(i,si0);
L10:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
f15271(i,si0);
L11:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L12:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
l7=si0;
L14:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l8;
f7690(i,si0);
L16:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
f15271(i,si0);
L17:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10948(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+248U);
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
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si2=l0;
si3=0U;
si1=f8146(i,si1,si2,si3);
si0=f8106(i,si0,si1);
l3=si0;
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f10949(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L10:;
si0=l5;
si1=20U;
si0*=si1;
l9=si0;
si0=l7;
l8=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l5=si0;
L11:;
{
si0=l7;
si1=l5;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L12;
}
si0=l10;
si1=20U;
si0+=si1;
l8=si0;
goto L4;
L12:;
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l10;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l10;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l0;
si1=l2;
si2=l3;
si3=16U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=8U;
si3+=si4;
si2=f10804(i,si2,si3);
l8=si2;
si3=l11;
si0=f8202(i,si0,si1,si2,si3);
l11=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
si1=-20U;
si0+=si1;
l2=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l8;
f7690(i,si0);
L14:;
si0=l2;
si1=l5;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l10;
si1=32U;
si0+=si1;
l8=si0;
si0=l9;
si1=l5;
si0-=si1;
si1=-20U;
si0+=si1;
si1=20U;
si0=DIV_U(si0,si1);
l10=si0;
L16:;
{
si0=l8;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L17:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L18;
}
si0=l5;
f7690(i,si0);
L18:;
si0=l8;
si1=20U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
f15271(i,si0);
goto L8;
L13:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l8;
f7690(i,si0);
L19:;
si0=l9;
si1=l5;
si2=20U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L3;
}
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=32U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862945U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862937U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862929U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862921U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=137438953504ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=l5;
si2=l3;
si0=f7173(i,si0,si1,si2);
l11=si0;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l12;
l8=si0;
L21:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L22;
}
si0=l5;
f7690(i,si0);
L22:;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L21;
}
}
L20:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l12;
f15271(i,si0);
L23:;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L24:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l12;
l8=si0;
L26:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L27:;
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L28;
}
si0=l5;
f7690(i,si0);
L28:;
si0=l8;
si1=20U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L26;
}
}
L25:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l12;
f15271(i,si0);
goto L5;
L7:;
si0=1U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l7;
si1=l9;
si0+=si1;
l5=si0;
si1=l8;
si0-=si1;
si1=20U;
si0=DIV_U(si0,si1);
l10=si0;
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L3;
}
L29:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L30:;
si0=l8;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L31;
}
si0=l5;
f7690(i,si0);
L31:;
si0=l8;
si1=20U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L29;
}
}
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L32;
}
si0=l7;
f15271(i,si0);
L32:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l10=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l11;
l8=si0;
L34:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L35;
}
si0=l5;
f7690(i,si0);
L35:;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l11;
f15271(i,si0);
L36:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l11=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
f7690(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l11;
L0:;
return si0;
}

void f10950(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5647883775983416143ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1569655123884046800ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l6=si0;
if(si0){
goto L2;
}
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=36U;
si0+=si1;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l8;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L3;
}
L5:;
si0=l1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L3;
L4:;
si0=1860456U;
si1=43U;
si2=1862984U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l7;
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
goto L6;
}
si0=l2;
si1=0U;
si2=l6;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si1=l1;
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
goto L7;
}
si0=l1;
f1433(i,si0);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=36U;
si0+=si1;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L10;
}
si0=l2;
si1=16U;
si0+=si1;
l9=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=l9;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l2;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L8;
}
L10:;
si0=l1;
si1=0U;
sj2=l10;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L8;
L9:;
si0=1860456U;
si1=43U;
si2=1863000U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L6;
}
si0=l1;
si1=l1;
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
goto L11;
}
si0=l1;
f1433(i,si0);
L11:;
si0=l3;
si1=255U;
si0&=si1;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
default:
goto L15;
}
L15:;
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0,si1);
goto L12;
L14:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l7;
si2=l2;
si3=4U;
si4=1U;
si5=l4;
f10440(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L16;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l1=si0;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
goto L17;
L18:;
si0=2U;
l1=si0;
L17:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L12;
L16:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L12;
L13:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L19;
}
si0=l0;
si1=512U;
i32_store16(&i->m0,(U64)si0,si1);
goto L12;
L19:;
si0=l0;
si1=l7;
si2=l2;
si3=4U;
si4=1U;
si5=l4;
f10440(i,si0,si1,si2,si3,si4,si5);
L12:;
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
goto L20;
}
si0=l2;
f7690(i,si0);
L20:;
si0=l7;
si1=l7;
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
si0=l7;
f7690(i,si0);
goto L1;
L6:;
f15042(i);
UNREACHABLE;
L1:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10951(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+248U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L1;
}
si0=l0;
si1=1200U;
si0+=si1;
si1=1866076U;
si2=15U;
si3=l3;
si0=f12275(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si1=716U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=8U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
sj1=6872339526709436255ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1845304U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si1=1844608U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=48U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8062(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L4:;
si0=l1;
si1=40U;
si0+=si1;
si1=l2;
si2=416U;
si1+=si2;
l6=si1;
si2=l2;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l8=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l9=sj2;
sj3=l8;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l8=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l9;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=l7;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
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
goto L5;
}
si0=l3;
f7690(i,si0);
L5:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L2;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
goto L2;
L3:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=62U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=54U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1866784U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1866778U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1866770U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1866762U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1866754U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1866746U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1866738U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1866730U);
i64_store(&i->m0,(U64)si0,sj1);
si0=4U;
si1=l5;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l3=si1;
si2=l5;
si1-=si2;
si2=l3;
si3=l5;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L9:;
{
si0=l5;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l10=si0;
goto L8;
L10:;
si0=l3;
si1=54U;
si0=si0 < si1;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
if(si0){
goto L9;
}
}
si0=0U;
l10=si0;
L8:;
si0=l1;
si1=60U;
si0+=si1;
si1=62U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=48U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8078(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L11:;
si0=l1;
si1=32U;
si0+=si1;
si1=l6;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l8=sj2;
si3=l7;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l9=sj2;
sj3=l8;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l8=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l9;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l7;
si4=l4;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
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
goto L12;
}
si0=l3;
f7690(i,si0);
L12:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L13;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L13:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si1=940U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=5U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1866796U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1866792U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=60U;
si0+=si1;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l1;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=48U;
si0+=si1;
si1=l5;
si2=0U;
si0=f8078(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L14:;
si0=l1;
si1=24U;
si0+=si1;
si1=l6;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l8=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l9=sj2;
sj3=l8;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l8=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l9;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=l5;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L15;
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
goto L15;
}
si0=l3;
f7690(i,si0);
L15:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L16;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L16:;
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=2970380U;
f12886(i,si0);
L18:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l4=si0;
si0=l2;
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
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=l4;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=48U;
si0+=si1;
si1=l3;
si2=0U;
si0=f7748(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l4=si1;
si2=8U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L19:;
si0=l1;
si1=16U;
si0+=si1;
si1=l6;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l8=sj2;
si3=l3;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l9=sj2;
sj3=l8;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l8=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l9;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=l5;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L20;
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
goto L20;
}
si0=l3;
f7690(i,si0);
L20:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L17;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L17:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l3=si0;
si1=l3;
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
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L22:;
si0=l1;
si1=8U;
si0+=si1;
si1=l6;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l8=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l9=sj2;
sj3=l8;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l8=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l9;
sj2^=sj3;
sj3=l8;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l4;
si4=l3;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L23;
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
goto L23;
}
si0=l3;
f7690(i,si0);
L23:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L21;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L21:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
si0=1U;
si1=62U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10952(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1863132U;
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
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=1863137U;
si2=5U;
si3=l2;
si4=8U;
si3+=si4;
si4=1863144U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1863160U;
si2=4U;
si3=l0;
si4=1863164U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1863180U;
si2=4U;
si3=l0;
si4=16U;
si3+=si4;
si4=1863184U;
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

void f10953(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l3;
if(si0){
goto L3;
}
si0=l2;
f15271(i,si0);
si0=1U;
l2=si0;
goto L2;
L3:;
si0=l2;
si1=l3;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=l2;
si0-=si1;
l4=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L6;
}
L7:;
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l3;
l1=si0;
L8:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=l1;
si0+=si1;
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L8;
}
}
si0=1U;
l5=si0;
goto L4;
L6:;
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=4U;
si1=l4;
si2=l1;
si3=l2;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
si1=l3;
si2=-4U;
si1+=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
L10:;
{
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si1=l4;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
L5:;
si0=0U;
l5=si0;
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10954(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L6;
}
si0=1U;
l2=si0;
si0=1U;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
goto L4;
L6:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
goto L4;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l4;
if(si0){
goto L7;
}
si0=l2;
f15271(i,si0);
si0=1U;
l2=si0;
si0=0U;
l4=si0;
goto L4;
L7:;
si0=l2;
si1=l4;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=l2;
si0-=si1;
l5=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L10;
}
L11:;
si0=l2;
si1=-1U;
si0+=si1;
l5=si0;
si0=l4;
l1=si0;
L12:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l1;
si0+=si1;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L12;
}
}
si0=1U;
l3=si0;
goto L8;
L10:;
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=4U;
si1=l5;
si2=l1;
si3=l2;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
si1=l4;
si2=-4U;
si1+=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L13;
}
L14:;
{
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L14;
}
}
L13:;
si0=l2;
si1=l5;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L8;
}
L9:;
si0=0U;
l3=si0;
L8:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10955(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
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
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l4=si1;
si2=1U;
si3=l4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
sj1=l5;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L1:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=1U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L8;
default:
goto L9;
}
L9:;
si0=l6;
si1=l8;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l6;
si1=l8;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L5;
L11:;
si0=l7;
si1=l8;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
L10:;
si0=l6;
si1=l8;
si0-=si1;
l6=si0;
L8:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l8;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l6;
si1=31U;
si0&=si1;
l10=si0;
si0=l6;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l6=si0;
goto L13;
L15:;
si0=l6;
si1=255U;
si0&=si1;
l6=si0;
si0=1U;
l4=si0;
si0=l1;
si1=64U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L12;
L14:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l9;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
goto L13;
L16:;
si0=l9;
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
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
L13:;
si0=1U;
l4=si0;
si0=l1;
si1=64U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=2U;
l4=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
L12:;
si0=l1;
si1=l4;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l6;
si2=l2;
si1=f10956(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l1;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
f10605(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=1U;
l4=si0;
si0=l1;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=2U;
l4=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
L17:;
si0=l1;
si1=l4;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=l6;
si2=l2;
si1=f10956(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L2;
}
goto L3;
L5:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l4;
f7690(i,si0);
L18:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
L4:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L2;
}
L3:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f10956(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L2;
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
goto L1;
L4:;
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=1U;
l0=si0;
goto L1;
L3:;
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
goto L1;
L2:;
si0=l2;
si1=l0;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
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
si0=l2;
si1=l0;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=4U;
l0=si0;
L1:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=f15269(i,si0);
l3=si0;
if(si0){
goto L5;
}
si0=1U;
si1=l0;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l3;
si1=l2;
si2=12U;
si1+=si2;
si2=l0;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f10957(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=l5;
si3=l6;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=68U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l2;
si5=i32_load(&i->m0,(U64)si5+8U);
si6=l3;
f13324(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L9;
}
si0=0U;
l9=si0;
si0=l6;
l5=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L12:;
si0=1U;
l9=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si2=l3;
si3=l1;
f10958(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L3;
}
goto L10;
L11:;
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=l3;
f8205(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
f7690(i,si0);
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L13;
}
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
goto L13;
}
si0=l6;
f7690(i,si0);
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
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
goto L8;
}
goto L7;
L9:;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l6;
f7690(i,si0);
L7:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=1U;
l9=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l6;
si0=!(si0);
l9=si0;
si0=l5;
f7690(i,si0);
L3:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l1;
si0=si0 == si1;
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
l6=si0;
goto L14;
L15:;
si0=l4;
si1=40U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f10675(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si2=l3;
si3=l1;
f10958(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L16;
}
si0=l7;
f7690(i,si0);
L16:;
si0=l3;
l7=si0;
L14:;
si0=l9;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si2=0U;
si1=si1 != si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
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
goto L17;
}
si0=l3;
f7690(i,si0);
L17:;
si0=l9;
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l2;
f7690(i,si0);
L18:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
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
L2:;
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10958(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l3;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L6:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
l8=si0;
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
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l9;
si2=0U;
si0=f8146(i,si0,si1,si2);
l7=si0;
L7:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l7;
si0=f8078(i,si0,si1,si2);
l7=si0;
goto L3;
L4:;
si0=l2;
si1=l4;
si2=12U;
si1+=si2;
si2=l6;
si0=f9936(i,si0,si1,si2);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l9;
f7690(i,si0);
L8:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L3:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10959(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
f10675(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si1=l1;
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
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=0U;
si0=f8078(i,si0,si1,si2);
l1=si0;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f10960(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L7;
}
si0=1U;
l3=si0;
si0=1U;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L5;
L7:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L5;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l5;
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
si0=1U;
l3=si0;
si0=0U;
l5=si0;
goto L5;
L8:;
si0=l3;
si1=l5;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l0=si0;
si1=l3;
si0-=si1;
l6=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=-1U;
si0+=si1;
l6=si0;
si0=l5;
l0=si0;
L13:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=l0;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L13;
}
}
si0=1U;
l4=si0;
goto L9;
L11:;
si0=1U;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L9;
}
si0=4U;
si1=l6;
si2=l0;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l0=si0;
si1=l5;
si2=-4U;
si1+=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L14;
}
L15:;
{
si0=l3;
si1=l0;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L9;
}
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L15;
}
}
L14:;
si0=l3;
si1=l6;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L9;
}
L10:;
si0=0U;
l4=si0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+192U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=0U;
si0=f8078(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f10961(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
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
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
L4:;
si0=l4;
si1=l0;
si2=l1;
si0=f15390(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+192U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=0U;
si0=f8078(i,si0,si1,si2);
l1=si0;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
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
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f10962(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
f10675(i,si0,si1,si2);
si0=l2;
si1=200U;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8078(i,si0,si1,si2);
l2=si0;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f10963(rustpythonInstance*i,U32 l0) {
U32 l1=0;
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
U64 sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L2;
}
si0=l0;
si1=1200U;
si0+=si1;
l4=si0;
si1=1866100U;
si2=3U;
si3=l2;
si0=f12275(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=421U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=4U;
si1=l3;
si2=1866168U;
si3=421U;
si1=f15390(i,si1,si2,si3);
l6=si1;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l3=si1;
si2=l6;
si1-=si2;
si2=l3;
si3=l6;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L4:;
{
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l7=si0;
goto L3;
L5:;
si0=l3;
si1=413U;
si0=si0 < si1;
l7=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l7;
if(si0){
goto L4;
}
}
si0=0U;
l7=si0;
L3:;
si0=l1;
si1=52U;
si0+=si1;
si1=421U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8078(i,si0,si1,si2);
l6=si0;
si0=l2;
si1=376U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L6:;
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=416U;
si1+=si2;
l7=si1;
si2=l2;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l5;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l5;
si4=l6;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
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
goto L7;
}
si0=l3;
f7690(i,si0);
L7:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L8;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L8:;
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2970380U;
f12886(i,si0);
L10:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l6=si0;
si0=l2;
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
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l6;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f7748(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L11:;
si0=l1;
si1=24U;
si0+=si1;
si1=l7;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l9=sj2;
si3=l3;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=l5;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
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
goto L12;
}
si0=l3;
f7690(i,si0);
L12:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L9;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L9:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l3=si0;
si1=l3;
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
goto L2;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L14:;
si0=l1;
si1=16U;
si0+=si1;
si1=l7;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l3;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L15;
}
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
goto L15;
}
si0=l3;
f7690(i,si0);
L15:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L13;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L13:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l7=si0;
si1=l7;
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
goto L2;
}
si0=l4;
si1=1865976U;
si2=12U;
si3=l7;
si0=f12275(i,si0,si1,si2,si3);
si0=l3;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=2970380U;
f12886(i,si0);
L17:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l2=si0;
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
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l2;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=40U;
si0+=si1;
si1=l7;
si2=0U;
si0=f7748(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L18:;
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=416U;
si1+=si2;
si2=l3;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l7;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l7;
si4=l5;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l7;
f7690(i,si0);
L19:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L16;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L16:;
si0=l3;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l7=si0;
si1=l7;
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
goto L2;
}
si0=l3;
si1=376U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L21:;
si0=l1;
si1=l3;
si2=416U;
si1+=si2;
si2=l3;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l2;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l7;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l7;
f7690(i,si0);
L22:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+376U);
l7=si2;
si3=l7;
si4=8U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
if(si0){
goto L20;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L20:;
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l1;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=421U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10964(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si3=l2;
si4=l3;
f10604(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L8;
}
si0=1U;
l3=si0;
goto L7;
L8:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l3;
si1=l2;
si2=l1;
si0=f15390(i,si0,si1,si2);
goto L1;
L6:;
si0=l3;
si1=l2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l2;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L2;
L10:;
si0=l6;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L9:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L2;
L12:;
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
L11:;
si0=l3;
si1=l2;
si0-=si1;
l1=si0;
if(si0){
goto L14;
}
si0=1U;
l3=si0;
goto L13;
L14:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
L13:;
si0=l3;
si1=l6;
si2=l2;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l6;
si1=l5;
si2=l2;
si3=l3;
si4=1863400U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
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

void f10965(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L9;
}
si0=1U;
l6=si0;
goto L8;
L9:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
L8:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l5;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si0=f2125(i,si0);
l5=si0;
L10:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
si2=l2;
si1-=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l5;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
f11740(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L7:;
si0=l3;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l3;
si1=l2;
si0-=si1;
l8=si0;
si0=1U;
l1=si0;
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L11:;
si0=l1;
si1=l5;
si2=l2;
si1+=si2;
si2=l8;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l8;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l9;
si1=l8;
si0+=si1;
l10=si0;
si0=0U;
l1=si0;
si0=l8;
si1=1U;
si0>>=(si1&31);
l11=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=0U;
l3=si0;
si0=0U;
si1=l8;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l7=si0;
si0=l10;
si1=-2U;
si0+=si1;
l12=si0;
si0=l9;
l1=si0;
L14:;
{
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l12;
si2=l3;
si1+=si2;
l2=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l7;
si1=l3;
si2=-2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=0U;
si1=l3;
si0-=si1;
l1=si0;
L13:;
si0=l8;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
si1=l1;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=l10;
si2=l11;
si1-=si2;
si2=l11;
si3=l1;
si4=-1U;
si3^=si4;
si2+=si3;
si1+=si2;
l1=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
L12:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=l3;
si2=1863416U;
f675(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l5;
si2=1863416U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10966(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
l6=si0;
si0=0U;
si1=l3;
si2=l2;
si1-=si2;
l7=si1;
si2=l7;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l4;
si0=DIV_U(si0,si1);
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L9:;
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f11741(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
goto L7;
L8:;
si0=l3;
si1=l2;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
f11300(i,si0,si1);
L7:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=1863481U;
si1=27U;
si2=1863600U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l3;
si2=1863616U;
f675(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=l7;
si2=1863616U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1863456U;
si1=25U;
si2=1863432U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f10967(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l6=si0;
si0=0U;
si1=l3;
si2=l2;
si1-=si2;
l7=si1;
si2=l7;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l4;
si0=DIV_U(si0,si1);
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=f2125(i,si0);
l6=si0;
L8:;
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l6;
si2=l3;
si1-=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l2;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f11743(i,si0,si1);
si0=l0;
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
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l3;
si1=l2;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l4;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
f11352(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l5;
si1=40U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l3=si1;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+32U);
l4=si2;
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+44U);
l9=sj0;
sj1=1095216660480ULL;
sj0&=sj1;
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
L12:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l5;
sj1=l9;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1861154U;
si1=43U;
si2=l5;
si3=40U;
si2+=si3;
si3=1863664U;
si4=1863680U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l2;
si1=l3;
si2=1863648U;
f675(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=l7;
si2=1863648U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1863456U;
si1=25U;
si2=1863632U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1863481U;
si1=27U;
si2=1863600U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10968(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l2;
si0+=si1;
l6=si0;
si0=l1;
l7=si0;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
L5:;
{
si0=l8;
l10=si0;
si0=l7;
l8=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si0=i32_load8_s(&i->m0,(U64)si0);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
si0=l11;
si1=255U;
si0&=si1;
l11=si0;
goto L12;
L13:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l11;
si1=31U;
si0&=si1;
l12=si0;
si0=l11;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l12;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l11=si0;
si0=l8;
si1=2U;
si0+=si1;
l7=si0;
goto L12;
L14:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l11;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l7;
si1=l12;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l11=si0;
si0=l8;
si1=3U;
si0+=si1;
l7=si0;
goto L12;
L15:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l12;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l11=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=4U;
si0+=si1;
l7=si0;
L12:;
si0=l7;
si1=l8;
si0-=si1;
si1=l10;
si0+=si1;
l8=si0;
si0=l11;
si1=-9U;
si0+=si1;
l11=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=1U;
si1=l11;
si0<<=(si1&31);
si1=8388639U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
if(si0){
goto L9;
}
L11:;
si0=l9;
si1=l2;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L1;
L10:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
goto L5;
L9:;
si0=l10;
si1=l9;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
si1=l2;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L16;
}
goto L2;
L17:;
si0=l1;
si1=l9;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L16:;
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
si1=l2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l10;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L6;
L8:;
si0=l9;
si0=!(si0);
if(si0){
goto L18;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=l9;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=l9;
si0-=si1;
l2=si0;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l2;
f10675(i,si0,si1,si2);
si0=l8;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
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
goto L3;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8078(i,si0,si1,si2);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l8;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
L19:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L1;
L7:;
si0=l1;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l10;
si3=l9;
si2-=si3;
f10675(i,si0,si1,si2);
si0=l11;
si1=200U;
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
goto L3;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l11;
si2=0U;
si0=f8078(i,si0,si1,si2);
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l11;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
L20:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l10;
si1=1U;
si0+=si1;
l9=si0;
goto L5;
}
L4:;
si0=l1;
si1=l2;
si2=l9;
si3=l2;
si4=1863712U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
si2=l9;
si3=l10;
si4=1863728U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10969(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l2;
si0+=si1;
l6=si0;
si0=l2;
l7=si0;
L5:;
{
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si1=-1U;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L12;
}
si0=l6;
si1=-2U;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L14;
}
si0=l9;
si1=31U;
si0&=si1;
l6=si0;
goto L13;
L14:;
si0=l6;
si1=-3U;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l12=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=l9;
si1=15U;
si0&=si1;
l6=si0;
goto L15;
L16:;
si0=l6;
si1=-4U;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l12;
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
L15:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
L13:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L11;
}
L12:;
si0=l8;
l6=si0;
si0=l9;
si1=-9U;
si0+=si1;
l9=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l8;
l6=si0;
si0=1U;
si1=l9;
si0<<=(si1&31);
si1=8388639U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l8;
si2=l1;
si1-=si2;
l9=si1;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
if(si0){
goto L9;
}
L11:;
si0=l7;
if(si0){
goto L8;
}
goto L1;
L10:;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l8;
l6=si0;
goto L5;
L9:;
si0=l7;
si1=l6;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L17;
}
goto L2;
L18:;
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L17:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l7;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L6;
L8:;
si0=l7;
si1=l2;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L19;
}
goto L3;
L20:;
si0=l1;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l7;
f10675(i,si0,si1,si2);
si0=l6;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8078(i,si0,si1,si2);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
L21:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L1;
L7:;
si0=l1;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l6;
si1+=si2;
si2=l7;
si3=l6;
si2-=si3;
f10675(i,si0,si1,si2);
si0=l10;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8078(i,si0,si1,si2);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
L22:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l8;
l6=si0;
si0=l9;
l7=si0;
goto L5;
}
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=l1;
si1=l2;
si2=0U;
si3=l7;
si4=1863744U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
si2=l6;
si3=l7;
si4=1863760U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10970(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
si1=l1;
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
goto L6;
}
si0=l2;
si1=l2;
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
goto L6;
}
si0=l2;
si1=l2;
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
goto L6;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3320200219022213590ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3806347648170214779ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=0U;
l6=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L13:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=l1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l2;
l5=si0;
goto L5;
L11:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
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
f7690(i,si0);
goto L1;
L9:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l2;
f7690(i,si0);
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L16:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=l1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L6;
L14:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=1863840U;
si3=9U;
si4=l3;
f8199(i,si0,si1,si2,si3,si4);
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3320200219022213590ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3806347648170214779ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l5;
si1=l1;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L21:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l6=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L21;
}
L20:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L18;
}
goto L17;
L19:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
L18:;
si0=l5;
f7690(i,si0);
L17:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=60U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si1=56U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1864236U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864228U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864220U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864212U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864204U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864196U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864188U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864180U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=257698037820ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si0=l3;
si1=l5;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=l2;
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
si0=l2;
f7690(i,si0);
L23:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L4;
L22:;
si0=1U;
si1=60U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l2;
f7690(i,si0);
L24:;
si0=l1;
si1=l1;
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
L4:;
si0=l1;
f7690(i,si0);
L3:;
si0=l6;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l2;
f7690(i,si0);
L25:;
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
goto L1;
}
si0=l1;
f7690(i,si0);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10971(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=280U;
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
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
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
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=l6;
si3=l3;
f10970(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L5;
}
si0=l8;
l3=si0;
goto L4;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
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
l6=si0;
L8:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si1=l12;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=68U;
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
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8146(i,si0,si1,si2);
l5=si0;
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
si0=f8164(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
l5=si0;
L11:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l6;
f7690(i,si0);
L12:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
f15271(i,si0);
L13:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L14;
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
L14:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
l5=si0;
L16:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L17:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
f7690(i,si0);
L18:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L16;
}
}
L15:;
si0=0U;
l5=si0;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L1;
L6:;
si0=l3;
si1=l4;
si2=4U;
si1+=si2;
si2=l12;
si0=f9936(i,si0,si1,si2);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
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
goto L19;
}
si0=l5;
f7690(i,si0);
L19:;
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
goto L20;
}
si0=l9;
f7690(i,si0);
L20:;
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l8;
f7690(i,si0);
L21:;
si0=l10;
si1=l10;
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
si0=l10;
f7690(i,si0);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l8;
l5=si0;
L23:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l6;
f7690(i,si0);
L24:;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l8;
f15271(i,si0);
L25:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L26;
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
L26:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
l5=si0;
L28:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L29:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l6;
f7690(i,si0);
L30:;
si0=l5;
si1=20U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l8;
f15271(i,si0);
L31:;
si0=1U;
l5=si0;
si0=l9;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f7690(i,si0);
goto L1;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f10972(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
l5=si0;
si0=l1;
l6=si0;
si0=l2;
if(si0){
goto L16;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
l6=si0;
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L1;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L20;
}
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=25U;
si0=f15269(i,si0);
l7=si0;
if(si0){
goto L19;
}
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=1673168U;
si1=24U;
si2=l4;
si3=16U;
si2+=si3;
si3=1673284U;
si4=1687428U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L20:;
si0=l7;
si1=2147483645U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l3;
si1=l7;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L18;
}
si0=1669610U;
si1=43U;
si2=1687444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1673168U;
si1=24U;
si2=l4;
si3=16U;
si2+=si3;
si3=1673284U;
si4=1687412U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L19:;
si0=l7;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1863892U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863884U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863876U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863868U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=107374182425ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
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
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
goto L7;
L18:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=-4U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si1=84U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si3=l7;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L23;
}
si0=l6;
sj1=l11;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L23:;
si0=l10;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l5;
si1=l5;
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
goto L28;
L29:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l7;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si2=144U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l6;
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=-1U;
l6=si0;
si0=0U;
l7=si0;
L30:;
{
si0=l13;
si1=l7;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l5;
si1=l7;
si0+=si1;
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L30;
}
}
si0=l12;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l12;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=56U;
si0+=si1;
si0=f10168(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L27;
}
L28:;
si0=l10;
si1=0U;
si2=l10;
si2=i32_load8_u(&i->m0,(U64)si2+84U);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l7;
if(si0){
goto L31;
}
si0=l10;
si1=84U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L31:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l13=si0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l13;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=0U;
l6=si0;
L33:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=9U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l10;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1863840U;
si2=9U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L26;
}
L34:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
if(si0){
goto L33;
}
}
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=56U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864088U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864080U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864072U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864064U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864056U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864048U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864040U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=274877907008ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
si1=l7;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
goto L25;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=23U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863943U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863936U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863928U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=98784247831ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
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
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l10;
si1=0U;
si2=l10;
si2=i32_load8_u(&i->m0,(U64)si2+84U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l6;
if(si0){
goto L8;
}
si0=l10;
si1=84U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
goto L8;
L26:;
si0=l13;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0-=si1;
l7=si0;
si1=l9;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l9;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L35;
}
si0=l7;
si1=56U;
si0+=si1;
sj1=l11;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L35:;
si0=l7;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l6;
si1=l6;
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
L36:;
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l8;
if(si0){
goto L37;
}
si0=l7;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L37:;
si0=l6;
if(si0){
goto L38;
}
si0=l3;
si0=f10973(i,si0);
l7=si0;
goto L25;
L38:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3320200219022213590ULL;
sj0^=sj1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3806347648170214779ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L24;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l4;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1864016U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L39;
case 1:
goto L42;
case 2:
goto L41;
case 3:
goto L40;
default:
goto L43;
}
L43:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si1=l7;
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
goto L39;
}
si0=l7;
f1433(i,si0);
goto L39;
L42:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si1=0U;
si2=l7;
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
goto L39;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
goto L39;
L41:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si1=0U;
si2=l7;
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
goto L39;
}
si0=l7;
si1=0U;
f1440(i,si0,si1);
goto L39;
L40:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si1=l7;
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
goto L39;
}
si0=l7;
f1433(i,si0);
L39:;
si0=l4;
si1=16U;
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
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
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
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l7;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
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
goto L25;
}
si0=l6;
f7690(i,si0);
L25:;
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
goto L8;
}
si0=l5;
f7690(i,si0);
goto L8;
L24:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L16:;
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=l5;
si3=l3;
f10970(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L45;
}
si0=l0;
si1=56U;
si0+=si1;
sj1=l11;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L45:;
si0=l0;
si1=68U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=64U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
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
si0=l6;
if(si0){
goto L46;
}
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L46:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l7;
f7690(i,si0);
L47:;
si0=l3;
si0=!(si0);
if(si0){
goto L48;
}
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
goto L49;
}
si0=l3;
f7690(i,si0);
L49:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l8;
f7690(i,si0);
L48:;
si0=l1;
if(si0){
goto L50;
}
si0=l2;
si0=!(si0);
if(si0){
goto L50;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=l2;
f7690(i,si0);
L50:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L44:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
goto L4;
L15:;
si0=0U;
si1=0U;
si2=1863824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l6;
si1=l7;
si2=1863896U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l6;
si1=l8;
si2=1863912U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1U;
si1=23U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l7;
si1=l6;
si2=1863852U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863789U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863784U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863776U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
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
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
f7690(i,si0);
goto L5;
L6:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l1;
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
si0=l1;
f7690(i,si0);
L4:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
f7690(i,si0);
L2:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l7;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f10973(rustpythonInstance*i,U32 l0) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=29U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863972U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863967U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863959U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1863951U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=l1;
si0=f7173(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L2:;
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f10974(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
if(si0){
goto L4;
}
si0=l4;
si1=l1;
si2=l2;
si3=l3;
f8204(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l6=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
goto L3;
L4:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l9;
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
goto L10;
}
si0=l10;
si1=l10;
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
goto L10;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L11:;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=9U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1863840U;
si2=9U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l2;
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+1208U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L16;
}
si0=l7;
si1=16U;
si0+=si1;
l12=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l5;
si1=l12;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+1208U);
l6=si2;
si3=l6;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l6;
si1=l7;
si0=si0 == si1;
if(si0){
goto L13;
}
L16:;
si0=l5;
si1=1208U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L13;
L14:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f8204(i,si0,si1,si2,si3);
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
goto L7;
L13:;
si0=l5;
si1=1216U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+68U);
si0=f13453(i,si0,si1,si2);
l7=si0;
if(si0){
goto L18;
}
si0=0U;
l11=si0;
goto L17;
L18:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L17:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+1208U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l5;
si1=1208U;
si0+=si1;
f1433(i,si0);
L19:;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
L12:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l10;
si2=460U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l10;
si3=468U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f11360(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=2U;
si0<<=(si1&31);
l13=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l15=si0;
si0=0U;
l6=si0;
L20:;
{
si0=l13;
si1=l6;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l14;
si0=!(si0);
if(si0){
goto L6;
}
si0=l15;
f15271(i,si0);
goto L6;
L21:;
si0=l15;
si1=l6;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=376U;
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L23;
}
si0=l7;
si1=16U;
si0+=si1;
l17=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l5;
si1=l17;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+376U);
l12=si2;
si3=l12;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l12;
si1=l7;
si0=si0 == si1;
if(si0){
goto L22;
}
L23:;
si0=l16;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L22:;
si0=l5;
si1=384U;
si0+=si1;
si1=l11;
si0=f10931(i,si0,si1);
l7=si0;
if(si0){
goto L25;
}
si0=0U;
l7=si0;
goto L24;
L25:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
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
goto L10;
}
L24:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+376U);
l12=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l12;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l16;
f1433(i,si0);
L26:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L20;
}
}
si0=l10;
si1=l10;
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
goto L10;
}
si0=0U;
si1=l9;
si2=l10;
si3=l9;
si2=si2 == si3;
l1=si2;
si0=si2?si0:si1;
l17=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=332U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
if(si0){
goto L29;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L30:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L28;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l12;
si1=332U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L30;
}
}
L29:;
si0=l7;
si1=l7;
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
goto L10;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l7;
si2=l17;
si3=l10;
si4=l3;
si5=l12;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l5=si0;
goto L8;
L28:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l10;
f7690(i,si0);
L31:;
si0=l1;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
l5=si0;
goto L8;
L32:;
si0=l17;
si1=l17;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L9;
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
l17=si0;
si0=l6;
l7=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L8;
L10:;
f15042(i);
UNREACHABLE;
L9:;
si0=l17;
f7690(i,si0);
L8:;
si0=l14;
si0=!(si0);
if(si0){
goto L33;
}
si0=l15;
f15271(i,si0);
L33:;
si0=l10;
si1=l9;
si0=si0 == si1;
l6=si0;
L7:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l10;
f7690(i,si0);
L34:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L3;
L6:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f8204(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l10;
f7690(i,si0);
L35:;
si0=l9;
si1=l9;
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
L5:;
si0=l9;
f7690(i,si0);
L3:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10975(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l8;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l8;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L11:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2258965645003429056ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6053589369881491730ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L12;
}
si0=l4;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l8=si0;
goto L5;
L12:;
si0=l2;
if(si0){
goto L13;
}
si0=l6;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
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
goto L7;
}
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L13:;
si0=l6;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si1=8U;
si0&=si1;
if(si0){
goto L14;
}
si0=l9;
si1=16U;
si0+=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si1=l10;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l8=si2;
si3=l8;
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L8;
}
L14:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L8;
L9:;
si0=l4;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l8=si0;
goto L5;
L8:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
si0=l9;
si0=!(si0);
if(si0){
goto L15;
}
goto L6;
L16:;
si0=l9;
if(si0){
goto L6;
}
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l9=si0;
si1=8U;
si0&=si1;
l8=si0;
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l8;
if(si0){
goto L19;
}
si0=l9;
si1=16U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l1;
si1=l8;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L19;
}
goto L18;
L20:;
si0=l8;
if(si0){
goto L22;
}
si0=l9;
si1=16U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l1;
si1=l8;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
if(si0){
goto L21;
}
L22:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L21:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L23:;
si0=l5;
si1=16U;
si0+=si1;
si1=l9;
si2=l2;
si3=l4;
f10970(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l9;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si1=8U;
si0+=si1;
si0=f10437(i,si0);
l8=si0;
L24:;
si0=l5;
si1=32U;
si0+=si1;
si1=l9;
si2=l8;
si0=f8164(i,si0,si1,si2);
l8=si0;
si0=0U;
l9=si0;
goto L17;
L19:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l11;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l9=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l9;
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
goto L7;
}
L25:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
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
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L26:;
si0=l9;
if(si0){
goto L27;
}
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=8U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=84U;
si0+=si1;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=0U;
si0=f5566(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=60U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1862528U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
sj1=l11;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l7;
si2=l5;
si3=32U;
si2+=si3;
si3=l4;
f9977(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
f7690(i,si0);
goto L17;
L29:;
si0=1914132U;
si1=70U;
si2=l5;
si3=16U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L28:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L30;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
f7690(i,si0);
L30:;
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
goto L1;
}
goto L2;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l9=si0;
si0=l1;
l8=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
f7690(i,si0);
si0=0U;
l9=si0;
si0=l1;
l8=si0;
goto L3;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
f7690(i,si0);
L4:;
si0=1U;
l9=si0;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l3;
f7690(i,si0);
L31:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
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
goto L1;
}
L2:;
si0=l1;
f7690(i,si0);
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10976(rustpythonInstance*i,U32 l0) {
U32 l1=0;
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
U64 sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+188U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L3;
}
si0=l0;
si1=1200U;
si0+=si1;
l5=si0;
si1=1865960U;
si2=5U;
si3=l3;
si0=f12275(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
f10977(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si1=732U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=467U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=4U;
si1=l3;
si2=1864240U;
si3=467U;
si1=f15390(i,si1,si2,si3);
l7=si1;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l3=si1;
si2=l7;
si1-=si2;
si2=l3;
si3=l7;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L5:;
{
si0=l7;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
l8=si0;
goto L4;
L6:;
si0=l3;
si1=459U;
si0=si0 < si1;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
if(si0){
goto L5;
}
}
si0=0U;
l8=si0;
L4:;
si0=l1;
si1=52U;
si0+=si1;
si1=467U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8078(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=376U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L7:;
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=416U;
si1+=si2;
l4=si1;
si2=l2;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l7;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
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
goto L8;
}
si0=l3;
f7690(i,si0);
L8:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L9;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L9:;
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=2970380U;
f12886(i,si0);
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l7=si0;
si0=l2;
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
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l7;
si2=1312U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f7748(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L12:;
si0=l1;
si1=24U;
si0+=si1;
si1=l4;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l9=sj2;
si3=l3;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l3;
si4=l6;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=!(si0);
if(si0){
goto L13;
}
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
goto L13;
}
si0=l3;
f7690(i,si0);
L13:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L10;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L10:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=849U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l3=si0;
si1=l3;
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
goto L3;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+376U);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L15:;
si0=l1;
si1=16U;
si0+=si1;
si1=l4;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+384U);
l9=sj2;
si3=l7;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l7;
si4=l3;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L16;
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
goto L16;
}
si0=l3;
f7690(i,si0);
L16:;
si0=l2;
si1=0U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L14;
}
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L14:;
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
f7744(i,si0,si1,si2,si3);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+188U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L3;
}
si0=l5;
si1=1864707U;
si2=7U;
si3=l3;
si0=f12275(i,si0,si1,si2,si3);
l6=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=467U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=4U;
si1=l3;
si2=1864240U;
si3=467U;
si1=f15390(i,si1,si2,si3);
l2=si1;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l3=si1;
si2=l2;
si1-=si2;
si2=l3;
si3=l2;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
L18:;
{
si0=l2;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=1U;
l4=si0;
goto L17;
L19:;
si0=l3;
si1=459U;
si0=si0 < si1;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
if(si0){
goto L18;
}
}
si0=0U;
l4=si0;
L17:;
si0=l1;
si1=52U;
si0+=si1;
si1=467U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=40U;
si0+=si1;
si1=l3;
si2=0U;
si0=f8078(i,si0,si1,si2);
l2=si0;
si0=l7;
si1=376U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
sj1=l9;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L20:;
si0=l1;
si1=8U;
si0+=si1;
si1=l7;
si2=416U;
si1+=si2;
si2=l7;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
si3=l6;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l7;
si4=392U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l10=sj2;
sj3=l9;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l10;
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l6;
si4=l2;
f12861(i,si0,si1,si2,si3,si4);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L21;
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
goto L21;
}
si0=l3;
f7690(i,si0);
L21:;
si0=l7;
si1=0U;
si2=l7;
si2=i32_load(&i->m0,(U64)si2+376U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l3;
if(si0){
goto L22;
}
si0=l7;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L22:;
si0=l1;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
si1=467U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=467U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10977(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=13U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1876725U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1876720U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1869448U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=55834574861ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=56U;
si0+=si1;
l5=si0;
si1=1876720U;
si2=13U;
si3=l2;
si4=l4;
si5=0U;
si3=f8062(i,si3,si4,si5);
si4=l0;
f9968(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=14U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1876739U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1876733U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1869520U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=60129542158ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=1876733U;
si2=14U;
si3=l2;
si4=l4;
si5=0U;
si3=f8062(i,si3,si4,si5);
si4=l0;
f9968(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
sj1=6872324172135227231ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1869568U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=1876747U;
si2=8U;
si3=l2;
si4=l4;
si5=0U;
si3=f8062(i,si3,si4,si5);
si4=l0;
f9968(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1U;
si1=13U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
si1=14U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10978(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
goto L8;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l5;
si1=l5;
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
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=0U;
l6=si0;
si0=l5;
l8=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2107831292826120692ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3044701271088271634ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1869964U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1860952U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=1869996U;
f683(i,si0,si1);
UNREACHABLE;
L12:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l7;
si2=664U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9951(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l7;
si3=l5;
f7589(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l9=si0;
si0=l7;
l8=si0;
si0=l10;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L1;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
L16:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=2U;
l9=si0;
si0=l5;
l7=si0;
L14:;
si0=l7;
f7690(i,si0);
L13:;
si0=l9;
switch(si0){
case 0:
goto L18;
case 1:
goto L19;
case 2:
goto L8;
default:
goto L19;
}
L19:;
si0=1U;
l6=si0;
goto L11;
L18:;
si0=0U;
si0=f5566(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1862528U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=l4;
si3=24U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L21;
}
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l8;
f7690(i,si0);
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
l6=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2107831292826120692ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3044701271088271634ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
L23:;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l7;
f10461(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l7;
f7690(i,si0);
L24:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
f7690(i,si0);
goto L7;
L21:;
si0=1U;
l6=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l8;
f7690(i,si0);
L20:;
si0=l7;
l8=si0;
L11:;
si0=1U;
l7=si0;
goto L6;
L10:;
si0=1914132U;
si1=70U;
si2=l4;
si3=24U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=l3;
f10979(i,si0,si1,si2);
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l9=si0;
if(si0){
goto L5;
}
si0=1U;
l6=si0;
si0=0U;
l7=si0;
L6:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l2;
f7690(i,si0);
L25:;
si0=l7;
if(si0){
goto L4;
}
si0=l8;
l1=si0;
goto L2;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l12=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l2;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l2;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L28:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=l7;
si0=si0 != si1;
if(si0){
goto L28;
}
}
L27:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=0U;
l6=si0;
si0=0U;
l1=si0;
si0=l2;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
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
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
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
si1=l5;
si2=0U;
si0=f8146(i,si0,si1,si2);
l1=si0;
L29:;
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si2=l1;
si0=f8110(i,si0,si1,si2);
l1=si0;
goto L2;
L26:;
si0=l3;
si1=l4;
si2=92U;
si1+=si2;
si2=l7;
si0=f9936(i,si0,si1,si2);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l5;
f7690(i,si0);
L30:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
f15271(i,si0);
goto L2;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L31;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l5;
f7690(i,si0);
L31:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l5;
f7690(i,si0);
L32:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L33;
}
si0=l8;
l1=si0;
goto L2;
L33:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l8;
l1=si0;
goto L2;
L34:;
si0=l1;
f7690(i,si0);
si0=l8;
l1=si0;
goto L2;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10979(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=256U;
si1+=si2;
si2=l1;
si3=l5;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=68U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l4;
si6=l2;
f13323(i,si0,si1,si2,si3,si4,si5,si6);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L23:;
si0=l2;
if(si0){
goto L20;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=1U;
l2=si0;
si0=l6;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L15;
}
L24:;
si0=l2;
si1=l7;
si2=l8;
si0=f15390(i,si0,si1,si2);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l6;
f7690(i,si0);
L25:;
si0=l8;
l6=si0;
goto L9;
L22:;
si0=1U;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=1864772U;
l8=si0;
si0=34U;
l6=si0;
si0=1U;
l9=si0;
goto L6;
L21:;
si0=l4;
si0=!(si0);
if(si0){
goto L18;
}
si0=1U;
l7=si0;
si0=1864806U;
l8=si0;
si0=35U;
l6=si0;
si0=1U;
l9=si0;
goto L6;
L20:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L19:;
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
goto L26;
}
si0=l1;
f7690(i,si0);
L26:;
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
goto L27;
}
si0=l5;
f7690(i,si0);
L27:;
si0=0U;
l7=si0;
si0=l4;
if(si0){
goto L28;
}
si0=1864772U;
l8=si0;
si0=34U;
l6=si0;
goto L7;
L28:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1864772U;
l8=si0;
si0=34U;
l6=si0;
si0=l4;
l11=si0;
si0=0U;
l9=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L8;
L18:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L30;
}
sj0=l12;
sj1=-8433930480299741807ULL;
sj0^=sj1;
sj1=l13;
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L31;
}
si0=l8;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L14;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l8;
si2=1U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l1;
si1=l1;
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
goto L12;
L31:;
si0=l3;
si1=24U;
si0+=si1;
si1=44U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864728U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1864768U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864760U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864752U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864744U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864736U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=44U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l3;
si2=48U;
si1+=si2;
si0=f7584(i,si0,si1);
l6=si0;
goto L13;
L30:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=0U;
l9=si0;
si0=1864806U;
l8=si0;
si0=35U;
l6=si0;
si0=l1;
l11=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L6;
L29:;
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=l1;
f10461(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l1;
f7690(i,si0);
L32:;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l7=si0;
goto L9;
L17:;
si0=l4;
si0=!(si0);
if(si0){
goto L33;
}
si0=1864841U;
l8=si0;
si0=32U;
l6=si0;
si0=1U;
l9=si0;
goto L6;
L33:;
si0=0U;
l8=si0;
si0=0U;
l6=si0;
si0=1U;
l2=si0;
goto L9;
L16:;
f53(i);
UNREACHABLE;
L15:;
si0=1U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=l3;
si1=8U;
si0+=si1;
si1=14U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864714U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864720U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=14U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l3;
si2=48U;
si1+=si2;
si0=f7580(i,si0,si1);
l6=si0;
L13:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
L12:;
si0=l1;
f7690(i,si0);
L11:;
si0=1U;
l7=si0;
si0=l2;
if(si0){
goto L9;
}
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
l9=si0;
goto L5;
L8:;
si0=l5;
si0=!(si0);
l7=si0;
si0=l11;
f7690(i,si0);
L7:;
si0=0U;
l9=si0;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l8;
si2=l3;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L5:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
si0=!(si0);
if(si0){
goto L2;
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
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L4:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l5;
si1=0U;
si0=si0 != si1;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L34;
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
goto L34;
}
si0=l5;
f7690(i,si0);
L34:;
si0=l4;
si1=0U;
si0=si0 != si1;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
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
goto L1;
}
si0=l4;
f7690(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10980(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L9;
}
si0=1U;
l7=si0;
goto L8;
L9:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l7;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15271(i,si0);
goto L2;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=1U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L12;
}
si0=l5;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=256ULL;
si0=sj0 < sj1;
if(si0){
goto L11;
}
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=29U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1896497U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1896492U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1896484U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1896476U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L10;
}
f15042(i);
UNREACHABLE;
L11:;
si0=l7;
sj1=l8;
i64_store8(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
f7690(i,si0);
goto L2;
L10:;
si0=l3;
si1=l2;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
f15271(i,si0);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
f7690(i,si0);
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
f7690(i,si0);
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
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
si0=l1;
f7690(i,si0);
goto L1;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=l2;
f9901(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10981(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l3;
si2=l1;
f10461(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
f7690(i,si0);
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=256U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
f15271(i,si0);
goto L3;
L11:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
f7690(i,si0);
goto L3;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=256U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=l7;
si2=256U;
si0=f15390(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
f15271(i,si0);
goto L7;
L8:;
si0=0U;
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=256U;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
l7=si0;
L12:;
{
si0=l7;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=3U;
si0+=si1;
si1=l1;
si2=3U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=2U;
si0+=si1;
si1=l1;
si2=2U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=5U;
si0+=si1;
l7=si0;
si0=l1;
si1=5U;
si0+=si1;
l1=si0;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l8;
si1=255U;
i32_store8(&i->m0,(U64)si0+255U,si1);
L7:;
si0=l2;
if(si0){
goto L13;
}
si0=1U;
l1=si0;
si0=0U;
l7=si0;
si0=0U;
l3=si0;
goto L4;
L13:;
si0=l4;
si1=l3;
si2=l2;
f10461(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
f7690(i,si0);
L14:;
si0=l1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
f15271(i,si0);
goto L2;
L6:;
si0=1U;
si1=256U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=256U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=1099511628032ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=45U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=37U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864981U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864976U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864968U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864960U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864952U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864944U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=193273528365ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L15;
}
f15042(i);
UNREACHABLE;
L15:;
si0=l3;
si1=l7;
si2=l4;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
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
goto L2;
}
si0=l2;
f7690(i,si0);
L2:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=45U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10982(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=3U;
l8=si0;
si0=0U;
l1=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
L8:;
{
si0=l8;
l11=si0;
si0=l6;
si1=l1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l9;
si1=l10;
si2=l9;
si2=!(si2);
si3=l10;
si4=0U;
si3=si3 != si4;
si2&=si3;
l12=si2;
si0=si2?si0:si1;
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l11;
si2=l1;
si1+=si2;
l1=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L7;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l8=si0;
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l12;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l1;
si2=-3U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=5U;
si0+=si1;
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l11;
si2=l1;
si1+=si2;
l1=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L7;
}
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
L10:;
si0=0U;
l11=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
si2=l3;
f7248(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
L11:;
si0=l8;
si1=l11;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l11;
si2=l3;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
f7247(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
L12:;
si0=l8;
si1=l11;
si0+=si1;
si1=40U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si0=f10190(i,si0,si1);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
f7247(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=l1;
si0+=si1;
si1=41U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L9:;
si0=2U;
l8=si0;
si0=l7;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L14;
case 2:
goto L17;
case 3:
goto L17;
case 4:
goto L14;
case 5:
goto L17;
case 6:
goto L17;
case 7:
goto L17;
case 8:
goto L17;
case 9:
goto L17;
case 10:
goto L17;
case 11:
goto L17;
case 12:
goto L17;
case 13:
goto L17;
case 14:
goto L17;
case 15:
goto L17;
case 16:
goto L17;
case 17:
goto L17;
case 18:
goto L17;
case 19:
goto L17;
case 20:
goto L17;
case 21:
goto L17;
case 22:
goto L17;
case 23:
goto L17;
case 24:
goto L17;
case 25:
goto L15;
case 26:
goto L17;
case 27:
goto L17;
case 28:
goto L17;
case 29:
goto L17;
case 30:
goto L16;
default:
goto L18;
}
L18:;
si0=l12;
si1=92U;
si0=si0 == si1;
if(si0){
goto L14;
}
L17:;
si0=1U;
si1=4U;
si2=l12;
si3=-32U;
si2+=si3;
si3=255U;
si2&=si3;
si3=95U;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
goto L14;
L16:;
si0=1U;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L14;
L15:;
si0=1U;
l8=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L14:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l8;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l11;
si2=l8;
si1+=si2;
l8=si1;
si2=l11;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L8;
}
}
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=38U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=30U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865019U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865013U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865005U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864997U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864989U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=163208757286ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l8;
si2=l5;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=38U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1861154U;
si1=43U;
si2=l5;
si3=40U;
si2+=si3;
si3=1865028U;
si4=1865064U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f10983(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=3U;
l6=si0;
si0=0U;
l1=si0;
si0=0U;
l7=si0;
si0=0U;
l8=si0;
L8:;
{
si0=l6;
l9=si0;
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l7;
si1=l8;
si2=l7;
si2=!(si2);
si3=l8;
si4=0U;
si3=si3 != si4;
si2&=si3;
l6=si2;
si0=si2?si0:si1;
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l9;
si2=l1;
si1+=si2;
l1=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L7;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1U;
l9=si0;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
si2=-3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
L10:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si0=f10190(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L9:;
si0=2U;
l6=si0;
si0=l5;
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L11;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L11;
case 5:
goto L14;
case 6:
goto L14;
case 7:
goto L14;
case 8:
goto L14;
case 9:
goto L14;
case 10:
goto L14;
case 11:
goto L14;
case 12:
goto L14;
case 13:
goto L14;
case 14:
goto L14;
case 15:
goto L14;
case 16:
goto L14;
case 17:
goto L14;
case 18:
goto L14;
case 19:
goto L14;
case 20:
goto L14;
case 21:
goto L14;
case 22:
goto L14;
case 23:
goto L14;
case 24:
goto L14;
case 25:
goto L12;
case 26:
goto L14;
case 27:
goto L14;
case 28:
goto L14;
case 29:
goto L14;
case 30:
goto L13;
default:
goto L15;
}
L15:;
si0=l10;
si1=92U;
si0=si0 == si1;
if(si0){
goto L11;
}
L14:;
si0=1U;
si1=4U;
si2=l10;
si3=-32U;
si2+=si3;
si3=255U;
si2&=si3;
si3=95U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
goto L11;
L13:;
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
goto L11;
L12:;
si0=1U;
l6=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L11:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l9;
si2=l6;
si1+=si2;
l6=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L8;
}
}
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=38U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=30U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865019U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865013U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865005U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864997U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1864989U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=163208757286ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l6;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=38U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1861154U;
si1=43U;
si2=l3;
si3=40U;
si2+=si3;
si3=1865028U;
si4=1865080U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f10984(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=1U;
si2=l5;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+8U);
f1403(i,si0,si1,si2,si3);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=l1;
si3=l6;
f1402(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L12;
}
si0=l5;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=256ULL;
si0=sj0 < sj1;
if(si0){
goto L11;
}
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=29U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=21U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1896497U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1896492U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1896484U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1896476U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=124554051613ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
si2=l4;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
si0=l5;
f7690(i,si0);
goto L1;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
sj0=l7;
si0=(U32)(sj0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l6=si0;
si0=l8;
si1=255U;
si0&=si1;
l10=si0;
si0=1U;
l1=si0;
L14:;
{
si0=l3;
si1=l6;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l2;
si1=l9;
si2=-8U;
si1+=si2;
l11=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
goto L7;
L13:;
si0=l9;
if(si0){
goto L15;
}
si0=0U;
l1=si0;
goto L5;
L15:;
si0=1U;
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l1=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
l1=si0;
goto L5;
L16:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=2U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=0U;
l1=si0;
goto L5;
L17:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=3U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=0U;
l1=si0;
goto L5;
L18:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=4U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
l1=si0;
goto L5;
L19:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=5U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=0U;
l1=si0;
goto L5;
L20:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=l9;
si1=6U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=l8;
si2=255U;
si1&=si2;
si0=si0 == si1;
l1=si0;
goto L5;
L10:;
si0=1U;
si1=29U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
f15042(i);
UNREACHABLE;
L8:;
si0=l9;
si1=-8U;
si0+=si1;
l11=si0;
si0=0U;
l2=si0;
L7:;
si0=l8;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l1=si0;
L21:;
{
si0=l3;
si1=l2;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
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
goto L6;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
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
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L21;
}
}
L6:;
si0=0U;
l1=si0;
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l8;
si1=255U;
si0&=si1;
l6=si0;
L22:;
{
si0=l3;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=1U;
l1=si0;
goto L5;
L23:;
si0=l9;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L5:;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=1U;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f10985(rustpythonInstance*i,U32 l0) {
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
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l3=si0;
si0=0U;
l4=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=0U;
l4=si0;
si0=1499U;
l5=si0;
si0=1499U;
l6=si0;
L7:;
{
si0=-1U;
si1=l5;
si2=1U;
si1>>=(si2&31);
si2=l4;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=1136004U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l0;
si1=si1 != si2;
si2=l7;
si3=l0;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
l6=si0;
goto L8;
L9:;
si0=l7;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
L8:;
si0=l6;
si1=l4;
si0-=si1;
l5=si0;
si0=l6;
si1=l4;
si0=si0 > si1;
if(si0){
goto L7;
}
}
si0=0U;
l6=si0;
si0=l0;
l4=si0;
goto L4;
L6:;
si0=0U;
l6=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=1136008U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 > si1;
if(si0){
goto L4;
}
L10:;
si0=l4;
si1=4194303U;
si0&=si1;
l5=si0;
si0=l0;
l4=si0;
si0=l5;
si1=12U;
si0*=si1;
si1=1147996U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=4785083194015744ULL;
si0=sj0 == sj1;
l6=si0;
si0=l7;
l4=si0;
goto L4;
L5:;
si0=l3;
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
l4=si0;
si0=0U;
l6=si0;
L4:;
si0=l6;
if(si0){
goto L12;
}
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l9=si0;
si0=l4;
si1=l0;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L18;
}
si0=0U;
l4=si0;
si0=1407U;
l5=si0;
si0=1407U;
l6=si0;
L19:;
{
si0=-1U;
si1=l5;
si2=1U;
si1>>=(si2&31);
si2=l4;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
si2=1124748U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l0;
si1=si1 != si2;
si2=l5;
si3=l0;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l7;
l6=si0;
goto L20;
L21:;
si0=l5;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l7;
si1=1U;
si0+=si1;
l4=si0;
L20:;
si0=l6;
si1=l4;
si0-=si1;
l5=si0;
si0=l6;
si1=l4;
si0=si0 > si1;
if(si0){
goto L19;
}
goto L14;
}
L18:;
si0=l3;
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
l4=si0;
goto L16;
L17:;
si0=105U;
si1=105U;
si2=l7;
si3=3U;
si2<<=(si3&31);
si3=1124752U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=55296U;
si3^=si4;
si4=-1114112U;
si3+=si4;
si4=-1112064U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l4;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
L16:;
si0=l4;
si1=l0;
si0=si0 == si1;
if(si0){
goto L14;
}
L15:;
si0=0U;
l4=si0;
si0=l9;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=l8;
si0=f808(i,si0);
if(si0){
goto L2;
}
goto L13;
L14:;
si0=0U;
l4=si0;
si0=l9;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=0U;
l6=si0;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=0U;
l6=si0;
si0=0U;
l4=si0;
si0=l8;
si0=f806(i,si0);
if(si0){
goto L2;
}
L13:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
si0=l1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l6;
l4=si0;
goto L11;
L22:;
si0=l2;
si1=l1;
si0+=si1;
l10=si0;
si0=l2;
si1=2U;
si0+=si1;
l0=si0;
si0=l6;
l4=si0;
L23:;
{
si0=l0;
l2=si0;
si0=l4;
l11=si0;
si0=l3;
si1=255U;
si0&=si1;
l4=si0;
si0=l3;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
l8=si0;
if(si0){
goto L25;
}
si0=0U;
l0=si0;
si0=1499U;
l5=si0;
si0=1499U;
l6=si0;
L27:;
{
si0=-1U;
si1=l5;
si2=1U;
si1>>=(si2&31);
si2=l0;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si2=1136004U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l4;
si1=si1 != si2;
si2=l5;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l7;
l6=si0;
goto L28;
L29:;
si0=l5;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l7;
si1=1U;
si0+=si1;
l0=si0;
L28:;
si0=l6;
si1=l0;
si0-=si1;
l5=si0;
si0=l6;
si1=l0;
si0=si0 > si1;
if(si0){
goto L27;
}
}
si0=1114113U;
l6=si0;
si0=l4;
l0=si0;
goto L24;
L26:;
si0=1114113U;
l6=si0;
si0=l1;
si1=1136008U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l0;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 > si1;
if(si0){
goto L24;
}
L30:;
si0=l0;
si1=4194303U;
si0&=si1;
l5=si0;
si0=l4;
l0=si0;
si0=l5;
si1=12U;
si0*=si1;
l5=si0;
si1=1147996U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l5;
si1=1148000U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
if(si0){
goto L31;
}
si0=1114112U;
si1=1114113U;
sj2=l12;
si2=(U32)(sj2);
si0=si2?si0:si1;
l6=si0;
L31:;
si0=l7;
l0=si0;
goto L24;
L25:;
si0=l3;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l4;
si0^=si1;
l0=si0;
si0=1114113U;
l6=si0;
L24:;
si0=l6;
si1=1114114U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l9=si0;
si0=l0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l8;
if(si0){
goto L37;
}
si0=0U;
l0=si0;
si0=1407U;
l5=si0;
si0=1407U;
l6=si0;
L38:;
{
si0=-1U;
si1=l5;
si2=1U;
si1>>=(si2&31);
si2=l0;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si2=1124748U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l4;
si1=si1 != si2;
si2=l5;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l7;
l6=si0;
goto L39;
L40:;
si0=l5;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l7;
si1=1U;
si0+=si1;
l0=si0;
L39:;
si0=l6;
si1=l0;
si0-=si1;
l5=si0;
si0=l6;
si1=l0;
si0=si0 > si1;
if(si0){
goto L38;
}
goto L33;
}
L37:;
si0=l3;
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
l0=si0;
goto L35;
L36:;
si0=105U;
si1=105U;
si2=l1;
si3=1124752U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l0;
si4=55296U;
si3^=si4;
si4=-1114112U;
si3+=si4;
si4=-1112064U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l0;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
l0=si0;
L35:;
si0=l0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L33;
}
L34:;
si0=l9;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=1U;
l4=si0;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L32;
}
si0=1U;
l4=si0;
si0=l13;
si0=f808(i,si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l11;
si1=1U;
si0^=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
goto L0;
L41:;
si0=1U;
l4=si0;
si0=l11;
si1=1U;
si0&=si1;
if(si0){
goto L32;
}
si0=0U;
goto L0;
L33:;
si0=l9;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=0U;
goto L0;
L42:;
si0=0U;
l4=si0;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L32;
}
si0=0U;
l4=si0;
si0=l13;
si0=f806(i,si0);
if(si0){
goto L2;
}
L32:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l0=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L23;
}
L12:;
si0=1860456U;
si1=43U;
si2=1865096U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l3;
si1=255U;
si0&=si1;
l0=si0;
L3:;
si0=l3;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l3;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si0=f808(i,si0);
si0=!(si0);
if(si0){
goto L2;
}
L43:;
si0=l4;
si1=1U;
si0^=si1;
goto L0;
L2:;
si0=l4;
L0:;
return si0;
}

void f10986(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
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
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=-1U;
si0+=si1;
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=1U;
l3=si0;
L5:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
f7247(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l4;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l4;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L5;
}
}
L3:;
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
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10987(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L5:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l5;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=l4;
f7247(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
goto L6;
L8:;
si0=l5;
si1=32U;
si0^=si1;
l5=si0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=l4;
f7247(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l5;
si1=32U;
si0|=si1;
l5=si0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
f7247(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
L6:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
L3:;
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
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f10988(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=1U;
l9=si0;
si0=1U;
si1=l6;
si2=l5;
si0=si2?si0:si1;
l5=si0;
if(si0){
goto L30;
}
si0=l2;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L28;
}
si0=l3;
si1=1U;
si0=f15273(i,si0,si1);
l9=si0;
si0=!(si0);
if(si0){
goto L25;
}
L32:;
si0=l8;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l9;
si4=l3;
f10192(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L31:;
si0=1U;
l6=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L28;
}
si0=l3;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L27;
}
L33:;
si0=l8;
si1=l1;
si2=l2;
si3=l6;
si4=l3;
f10192(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L30:;
si0=l4;
si1=64U;
si2=68U;
si3=l3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=21U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si1=13U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865851U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865846U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865838U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=90194313237ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l7;
si1=l6;
si2=l8;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l3=si0;
goto L34;
L35:;
si0=l4;
si1=56U;
si2=64U;
si3=l3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_s(&i->m0,(U64)si0);
l10=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L36;
}
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L40;
}
si0=1U;
l11=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l2;
si2=l5;
si3=l2;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si0=DIV_U(si0,si1);
l12=si0;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L28;
}
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L21;
}
L41:;
si0=l2;
si1=l12;
si2=l5;
si1*=si2;
l3=si1;
si0-=si1;
l13=si0;
si0=l3;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l13;
si1=l2;
si2=1865596U;
f666(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=0U;
l6=si0;
si0=1U;
l11=si0;
si0=l2;
si1=-1U;
si0+=si1;
l3=si0;
si1=l2;
si2=0U;
si3=l5;
si2-=si3;
l5=si2;
si3=l2;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
l14=si1;
si0=DIV_U(si0,si1);
l15=si0;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L28;
}
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L20;
}
L42:;
si0=l14;
si1=l3;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l14;
si1=l3;
si0=si0 <= si1;
l3=si0;
si0=l11;
si1=l14;
si2=1U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l16=si0;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
L44:;
{
si0=l5;
si1=l14;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l6;
si1=l12;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l9;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l8;
si1=24U;
si0+=si1;
si1=l1;
si2=l5;
si1+=si2;
si2=l14;
si3=l11;
si4=l6;
si3+=si4;
si4=l12;
f10192(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l9;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l16;
si1=l6;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l14;
si0*=si1;
l5=si0;
si0=l9;
si1=1U;
si0+=si1;
l6=si0;
si0=l3;
si1=l15;
si0=si0 >= si1;
l9=si0;
si0=l3;
si1=l3;
si2=l15;
si1=si1 < si2;
si0+=si1;
l3=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L44;
}
}
L43:;
si0=l15;
si1=l14;
si0*=si1;
l3=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l6;
si1=l2;
si2=l3;
si1-=si2;
l5=si1;
si2=1U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l2=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=l7;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l8;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
si2=l5;
si3=l11;
si4=l6;
si3+=si4;
si4=l9;
f10192(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=1114114U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=1861154U;
si1=43U;
si2=l8;
si3=48U;
si2+=si3;
si3=1865564U;
si4=1865740U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L39:;
si0=l13;
si1=1U;
si0<<=(si1&31);
l3=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l8;
si1=40U;
si0+=si1;
si1=l1;
si2=l13;
si3=l11;
si4=l3;
f10192(i,si0,si1,si2,si3,si4);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l5;
si1=1U;
si0<<=(si1&31);
l15=si0;
si0=0U;
l6=si0;
L45:;
{
si0=l6;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l3;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l11;
si1=l3;
si0+=si1;
si1=l10;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l5;
si0*=si1;
si1=l13;
si0+=si1;
l9=si0;
si1=l5;
si0+=si1;
l14=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l14;
si1=l2;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l3;
si1=1U;
si0+=si1;
l16=si0;
si1=l15;
si0+=si1;
l14=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l14;
si1=l7;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l6;
si1=l6;
si2=l12;
si1=si1 < si2;
si0+=si1;
l6=si0;
si0=l8;
si1=32U;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l5;
si3=l11;
si4=l16;
si3+=si4;
si4=l15;
f10192(i,si0,si1,si2,si3,si4);
si0=l14;
l3=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+32U);
l9=si0;
si1=1114114U;
si0=si0 == si1;
if(si0){
goto L45;
}
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=1861154U;
si1=43U;
si2=l8;
si3=48U;
si2+=si3;
si3=1865564U;
si4=1865676U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L38:;
si0=l9;
si1=l7;
si2=1865788U;
f663(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L36:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=18U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1865836U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865828U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865820U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
sj1=77309411346ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l7;
si1=l6;
si2=l8;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l3=si0;
L34:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L29:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L28:;
f53(i);
UNREACHABLE;
L27:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L26:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=1861154U;
si1=43U;
si2=l8;
si3=48U;
si2+=si3;
si3=1865564U;
si4=1865580U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L25:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L24:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=1861154U;
si1=43U;
si2=l8;
si3=48U;
si2+=si3;
si3=1865564U;
si4=1865580U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=1U;
si1=21U;
f52(i,si0,si1);
UNREACHABLE;
L22:;
f15042(i);
UNREACHABLE;
L21:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=l3;
si1=l7;
si2=1865612U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=1861154U;
si1=43U;
si2=l8;
si3=48U;
si2+=si3;
si3=1865564U;
si4=1865692U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
si0=l9;
si1=l14;
si2=1865644U;
f675(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l14;
si1=l2;
si2=1865644U;
f666(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l16;
si1=l14;
si2=1865660U;
f675(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l14;
si1=l7;
si2=1865660U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l3;
si1=l7;
si2=1865628U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l3;
si1=l2;
si2=1865708U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l6;
si1=l2;
si2=1865724U;
f675(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=l7;
si2=1865724U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l5;
si1=l9;
si2=1865756U;
f675(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l9;
si1=l2;
si2=1865756U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l6;
si1=l9;
si2=1865772U;
f675(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si1=l7;
si2=1865772U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=1861154U;
si1=43U;
si2=l8;
si3=48U;
si2+=si3;
si3=1865564U;
si4=1865804U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=18U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l4;
f7690(i,si0);
L1:;
si0=l8;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10989(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si1=1U;
si0>>=(si1&31);
l5=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L5:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l1;
si1=l2;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=0U;
l2=si0;
L6:;
{
si0=l2;
si1=1U;
si0+=si1;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l9;
si1=32U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l9;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l9;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l9;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L9;
L12:;
si0=l9;
si1=-87U;
si0+=si1;
l10=si0;
goto L10;
L11:;
si0=l9;
si1=-55U;
si0+=si1;
l10=si0;
L10:;
si0=l5;
si1=l7;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L9;
L13:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l9=si0;
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l9;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l9;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L9;
L16:;
si0=l9;
si1=-55U;
si0+=si1;
l5=si0;
goto L14;
L15:;
si0=l9;
si1=-87U;
si0+=si1;
l5=si0;
L14:;
si0=l5;
si1=l10;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=l8;
f7247(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L17:;
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L7;
L9:;
si0=l4;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1865172U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L18;
}
si0=l3;
si1=l1;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L18:;
f15042(i);
UNREACHABLE;
L8:;
si0=l6;
l2=si0;
si0=l5;
l1=si0;
L7:;
si0=l1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L2:;
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
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10990(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=6U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=1865180U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L6;
}
si0=32U;
l7=si0;
goto L5;
L6:;
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
goto L3;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
sj1=6654878835304983675ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-6060419710178097712ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L12;
}
sj0=l8;
sj1=-2107831292826120692ULL;
sj0^=sj1;
sj1=l9;
sj2=3044701271088271634ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
L13:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l10;
si1=1U;
si0=si0 == si1;
l11=si0;
goto L9;
L14:;
si0=l10;
si1=1U;
si0=si0 == si1;
l11=si0;
goto L10;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si1=8U;
si0&=si1;
if(si0){
goto L16;
}
si0=l7;
si1=16U;
si0+=si1;
l11=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
si1=l11;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=l7;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
if(si0){
goto L15;
}
L16:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L15:;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
L17:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l3;
si1=56U;
si0+=si1;
f1433(i,si0);
L18:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l10;
si1=1U;
si0=si0 == si1;
l11=si0;
goto L9;
L19:;
si0=l10;
si1=1U;
si0=si0 == si1;
l11=si0;
goto L10;
L11:;
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
goto L8;
}
si0=2U;
l11=si0;
L10:;
si0=l3;
f7690(i,si0);
si0=l11;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l11;
si1=0U;
si0=si0 != si1;
l11=si0;
L9:;
si0=l11;
if(si0){
goto L7;
}
L8:;
si0=l6;
si1=64U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l6;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=847U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=1864928U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l6;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+64U);
switch(si0){
case 0:
goto L20;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L21;
default:
goto L24;
}
L24:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
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
goto L20;
}
si0=l1;
f1433(i,si0);
goto L20;
L23:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=0U;
si2=l1;
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
goto L20;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L20;
L22:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si1=0U;
si2=l1;
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
goto L20;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L20;
L21:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
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
goto L20;
}
si0=l1;
f1433(i,si0);
L20:;
si0=l6;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l5;
si1=l1;
si2=l6;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
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
goto L25;
}
si0=l3;
f7690(i,si0);
L25:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L4;
L7:;
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
goto L5;
}
si0=l3;
f7690(i,si0);
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l2;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L27;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l5;
si2=l3;
si3=l2;
si4=l7;
si5=l3;
si6=l4;
TF(i->t0,si6,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5);
goto L26;
L27:;
si0=l3;
if(si0){
goto L29;
}
si0=1U;
l1=si0;
goto L28;
L29:;
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
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
L28:;
si0=l1;
si1=l5;
si2=l3;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
L26:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f15042(i);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10991(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l5=si2;
si3=l3;
f10980(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l8=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=104U;
si0+=si1;
si1=1U;
si2=l2;
si3=l4;
si3=i32_load(&i->m0,(U64)si3+16U);
l1=si3;
f1403(i,si0,si1,si2,si3);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+104U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=112U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=104U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=36U;
si0+=si1;
si1=l7;
si2=l8;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=l8;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+140U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
l1=si0;
si0=-1U;
l3=si0;
L5:;
{
si0=l4;
si1=l1;
f1399(i,si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
}
si0=l4;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
f15271(i,si0);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l7;
si1=l5;
si2=1865500U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f10992(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
l6=si0;
si0=l3;
if(si0){
goto L9;
}
si0=l6;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l2;
si2=l4;
f13362(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L10;
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
goto L6;
}
si0=l2;
f7690(i,si0);
goto L6;
L10:;
si0=l3;
if(si0){
goto L8;
}
si0=0U;
l3=si0;
goto L6;
L9:;
si0=l6;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=l2;
si2=l4;
si3=l3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l9=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l9;
si2=0U;
si0=f8146(i,si0,si1,si2);
l9=si0;
L11:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l9;
si0=f8170(i,si0,si1,si2);
l3=si0;
L7:;
si0=l3;
si1=l3;
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
goto L5;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
si2=l3;
f7608(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+40U);
l9=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
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
goto L12;
}
si0=l3;
f7690(i,si0);
L12:;
si0=l6;
l3=si0;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l5;
si4=8U;
si3+=si4;
f9917(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
f7690(i,si0);
L1:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10993(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
if(si0){
goto L6;
}
si0=0U;
l6=si0;
si0=0U;
l3=si0;
L8:;
{
si0=l6;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
f7247(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l6;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=255U;
si0&=si1;
l7=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=255U;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L2;
}
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=50U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=48U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1865252U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l6;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865244U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865236U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865228U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865220U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865212U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865204U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=214748364850ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=l7;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L10:;
si0=l1;
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
goto L1;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l6=si0;
L11:;
{
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l8;
si3=l5;
f1413(i,si0,si1,si2,si3);
si0=l6;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
L12:;
si0=l3;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
f7247(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l3;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=255U;
si0&=si1;
l7=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=255U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L11;
}
L5:;
si0=1U;
si1=50U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=l7;
si1=l5;
si2=1865188U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L14:;
si0=l1;
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
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10994(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l4;
f10981(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l11=si0;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L7;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L2;
L7:;
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
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l4;
si0+=si1;
l13=si0;
goto L5;
L8:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l4;
si0+=si1;
l13=si0;
L5:;
si0=l11;
si1=7U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l11;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
L12:;
{
si0=l9;
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
f7247(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
si1=l13;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L2;
}
L11:;
si0=0U;
l1=si0;
si0=l11;
si1=2U;
si0=si0 == si1;
l2=si0;
si0=l11;
si1=3U;
si0=si0 == si1;
l14=si0;
si0=l11;
si1=4U;
si0=si0 == si1;
l15=si0;
si0=l11;
si1=5U;
si0=si0 == si1;
l16=si0;
si0=l11;
si1=6U;
si0=si0 == si1;
l17=si0;
L14:;
{
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l2;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l14;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l15;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l16;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l17;
if(si0){
goto L16;
}
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=l3;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
si0=l9;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
f7247(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
L15:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L2;
}
L10:;
si0=l8;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=l8;
si0=si0 == si1;
si1=l1;
si2=l8;
si1-=si2;
l18=si1;
si1=!(si1);
si0|=si1;
l17=si0;
si0=l11;
si1=-8U;
si0+=si1;
l15=si0;
si0=l8;
si1=l1;
si0-=si1;
l19=si0;
si0=0U;
l16=si0;
L18:;
{
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l4=si0;
si0=l8;
l1=si0;
si0=l19;
l2=si0;
si0=l17;
if(si0){
goto L21;
}
L22:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
if(si0){
goto L22;
}
}
si0=l18;
l4=si0;
si0=l18;
si1=l15;
si0=si0 > si1;
if(si0){
goto L20;
}
L21:;
si0=l3;
si1=16843009U;
si0*=si1;
l1=si0;
L23:;
{
si0=l8;
si1=l4;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L20;
}
si0=l14;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l2=si0;
si1=-1U;
si0^=si1;
si1=l2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L20;
}
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l15;
si0=si0 <= si1;
if(si0){
goto L23;
}
}
L20:;
si0=l11;
si1=l4;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l11;
si1=l4;
si0-=si1;
l2=si0;
si0=l8;
si1=l4;
si0+=si1;
l1=si0;
L25:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l9;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l16;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l16;
f7247(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
L26:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l16;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
L19:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l13;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L18;
}
L9:;
si0=l3;
si1=l9;
si2=1865256U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
f15271(i,si0);
L27:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10995(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L12;
}
L13:;
si0=l4;
si1=l5;
si2=l4;
si1=f98(i,si1,si2);
l1=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l5;
si1=l1;
si0+=si1;
l7=si0;
si1=l4;
si2=l1;
si1-=si2;
l2=si1;
si0=f99(i,si0,si1);
l1=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=1861892U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si0=1860952U;
l7=si0;
si0=l4;
if(si0){
goto L14;
}
si0=0U;
l10=si0;
goto L2;
L14:;
si0=l9;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l6;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=l6;
si0=si0 == si1;
si1=l1;
si2=l6;
si1-=si2;
l1=si1;
si2=l9;
si3=l1;
si4=l9;
si3=si3 < si4;
si1=si3?si1:si2;
l11=si1;
si1=!(si1);
si0|=si1;
l12=si0;
si0=l9;
si1=-8U;
si0+=si1;
l13=si0;
si0=0U;
l14=si0;
si0=l5;
l15=si0;
si0=l4;
l16=si0;
L15:;
{
si0=l15;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L19;
}
si0=0U;
l2=si0;
si0=12U;
l1=si0;
si0=0U;
l17=si0;
L20:;
{
si0=l16;
si1=l17;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=65533U;
l2=si0;
si0=l16;
l17=si0;
goto L18;
L21:;
si0=l15;
si1=l17;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l18=si0;
si1=1861360U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l19=si0;
si0=l1;
si1=12U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l18;
si1=63U;
si0&=si1;
si1=l2;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
goto L22;
L23:;
si0=255U;
si1=l19;
si0>>=(si1&31);
si1=l18;
si0&=si1;
l2=si0;
L22:;
si0=l1;
si1=l19;
si0+=si1;
l1=si0;
si1=108U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
si0=l1;
si1=1861616U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
switch(si0){
case 0:
goto L24;
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
goto L18;
default:
goto L20;
}
L24:;
}
si0=l17;
si1=-1U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l17=si0;
si0=65533U;
l2=si0;
goto L17;
L19:;
si0=l1;
si1=255U;
si0&=si1;
l2=si0;
si0=1U;
l17=si0;
goto L16;
L18:;
si0=l17;
if(si0){
goto L17;
}
si0=0U;
l10=si0;
goto L2;
L17:;
si0=l16;
si1=l17;
si0=si0 < si1;
if(si0){
goto L4;
}
L16:;
si0=0U;
l18=si0;
si0=l6;
l1=si0;
si0=l11;
l19=si0;
si0=l12;
if(si0){
goto L27;
}
L28:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L28;
}
}
si0=l11;
l18=si0;
si0=l11;
si1=l13;
si0=si0 > si1;
if(si0){
goto L26;
}
L27:;
si0=l2;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l1=si0;
L29:;
{
si0=l6;
si1=l18;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l19=si0;
si1=-1U;
si0^=si1;
si1=l19;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L26;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l19=si0;
si1=-1U;
si0^=si1;
si1=l19;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L26;
}
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L29;
}
}
L26:;
si0=l9;
si1=l18;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l9;
si1=l18;
si0-=si1;
l19=si0;
si0=l6;
si1=l18;
si0+=si1;
l1=si0;
L30:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L30;
}
L25:;
si0=l15;
si1=l17;
si0+=si1;
l15=si0;
si0=l17;
si1=l14;
si0+=si1;
l14=si0;
si0=0U;
l10=si0;
si0=l16;
si1=l17;
si0-=si1;
l16=si0;
if(si0){
goto L15;
}
goto L2;
}
L11:;
si0=l1;
si1=l4;
si2=1861844U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l14=si0;
si0=l5;
l18=si0;
si0=l4;
l16=si0;
L31:;
{
si0=l18;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L35;
}
si0=0U;
l19=si0;
si0=12U;
l1=si0;
si0=0U;
l17=si0;
L36:;
{
si0=l16;
si1=l17;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=65533U;
l19=si0;
si0=l16;
l17=si0;
goto L34;
L37:;
si0=l18;
si1=l17;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=1861360U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=12U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l10;
si1=63U;
si0&=si1;
si1=l19;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l19=si0;
goto L38;
L39:;
si0=255U;
si1=l2;
si0>>=(si1&31);
si1=l10;
si0&=si1;
l19=si0;
L38:;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si1=107U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
si0=l1;
si1=1861616U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
switch(si0){
case 0:
goto L40;
case 1:
goto L36;
case 2:
goto L36;
case 3:
goto L36;
case 4:
goto L36;
case 5:
goto L36;
case 6:
goto L36;
case 7:
goto L36;
case 8:
goto L36;
case 9:
goto L36;
case 10:
goto L36;
case 11:
goto L36;
case 12:
goto L34;
default:
goto L36;
}
L40:;
}
si0=l17;
si1=-1U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l17=si0;
si0=65533U;
l19=si0;
goto L33;
L35:;
si0=l1;
si1=255U;
si0&=si1;
l19=si0;
si0=1U;
l17=si0;
goto L32;
L34:;
si0=l17;
if(si0){
goto L33;
}
si0=0U;
l10=si0;
goto L2;
L33:;
si0=l16;
si1=l17;
si0=si0 < si1;
if(si0){
goto L4;
}
L32:;
si0=l17;
si1=l14;
si0+=si1;
l13=si0;
si0=l18;
si1=l17;
si0+=si1;
l18=si0;
si0=l16;
si1=l17;
si0-=si1;
l16=si0;
si0=l6;
l1=si0;
si0=l9;
l2=si0;
L42:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L42;
}
goto L9;
}
L41:;
si0=0U;
l10=si0;
si0=l13;
l14=si0;
si0=l16;
if(si0){
goto L31;
}
goto L2;
}
L9:;
si0=l4;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l14;
si1=l4;
si2=1861876U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=0U;
l14=si0;
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=0U;
l18=si0;
si0=12U;
l1=si0;
si0=0U;
l17=si0;
L43:;
{
si0=l4;
si1=l17;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l4;
l17=si0;
goto L6;
L44:;
si0=l5;
si1=l17;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l19=si0;
si1=1861360U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=12U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l19;
si1=63U;
si0&=si1;
si1=l18;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l18=si0;
goto L45;
L46:;
si0=255U;
si1=l2;
si0>>=(si1&31);
si1=l19;
si0&=si1;
l18=si0;
L45:;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si1=107U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
si0=l1;
si1=1861616U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
switch(si0){
case 0:
goto L47;
case 1:
goto L43;
case 2:
goto L43;
case 3:
goto L43;
case 4:
goto L43;
case 5:
goto L43;
case 6:
goto L43;
case 7:
goto L43;
case 8:
goto L43;
case 9:
goto L43;
case 10:
goto L43;
case 11:
goto L43;
case 12:
goto L6;
default:
goto L43;
}
L47:;
}
si0=l17;
si1=-1U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l17=si0;
goto L5;
L7:;
si0=l1;
si1=108U;
si2=1861724U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l17;
if(si0){
goto L5;
}
si0=0U;
l10=si0;
goto L2;
L5:;
si0=0U;
l14=si0;
si0=l4;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l4;
l16=si0;
L4:;
si0=l17;
si1=l16;
si2=1862492U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l14;
si0+=si1;
l7=si0;
si0=l4;
si1=l14;
si0-=si1;
l10=si0;
L2:;
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=8U;
si0=si0 < si1;
if(si0){
goto L51;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l18=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l6;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=l6;
si0=si0 == si1;
si1=l1;
si2=l6;
si1-=si2;
l15=si1;
si1=!(si1);
si0|=si1;
l16=si0;
si0=l9;
si1=-8U;
si0+=si1;
l5=si0;
si0=l6;
si1=l1;
si0-=si1;
l13=si0;
L52:;
{
si0=0U;
l19=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l6;
l2=si0;
si0=l13;
l17=si0;
si0=l16;
if(si0){
goto L55;
}
L56:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
if(si0){
goto L56;
}
}
si0=l15;
l19=si0;
si0=l15;
si1=l5;
si0=si0 > si1;
if(si0){
goto L54;
}
L55:;
si0=l18;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l2=si0;
L57:;
{
si0=l6;
si1=l19;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l17=si0;
si1=-1U;
si0^=si1;
si1=l17;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L54;
}
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l17=si0;
si1=-1U;
si0^=si1;
si1=l17;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L54;
}
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L57;
}
}
L54:;
si0=l9;
si1=l19;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l9;
si1=l19;
si0-=si1;
l17=si0;
si0=l6;
si1=l19;
si0+=si1;
l2=si0;
L58:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L58;
}
goto L50;
}
L53:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l18=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L52;
}
goto L49;
}
L51:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l19=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L59;
}
si0=l19;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L49;
}
L60:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l6;
l2=si0;
si0=l9;
l17=si0;
L62:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l19;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L62;
}
goto L50;
}
L61:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l19=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L60;
}
goto L49;
}
L59:;
si0=l19;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
L50:;
si0=l1;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L48;
}
si0=l1;
si1=l10;
si2=1861860U;
f666(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=1860952U;
l7=si0;
si0=0U;
l1=si0;
L48:;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
L1:;
si0=l1;
if(si0){
goto L66;
}
si0=1U;
l2=si0;
goto L65;
L66:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L64;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L63;
}
L65:;
si0=l2;
si1=l7;
si2=l1;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L64:;
f53(i);
UNREACHABLE;
L63:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10996(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L12;
}
L13:;
si0=l3;
si1=l4;
si2=l3;
si1=f98(i,si1,si2);
l1=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l4;
si1=l1;
si0+=si1;
l6=si0;
si0=l3;
si1=l1;
si0-=si1;
l1=si0;
goto L1;
L12:;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=1860952U;
l6=si0;
si0=l3;
if(si0){
goto L14;
}
si0=0U;
l1=si0;
goto L2;
L14:;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=l5;
si0=si0 == si1;
si1=l1;
si2=l5;
si1-=si2;
l1=si1;
si2=l8;
si3=l1;
si4=l8;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si1=!(si1);
si0|=si1;
l10=si0;
si0=l8;
si1=-8U;
si0+=si1;
l11=si0;
si0=0U;
l12=si0;
si0=l4;
l13=si0;
si0=l3;
l14=si0;
L15:;
{
si0=l13;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L19;
}
si0=0U;
l2=si0;
si0=12U;
l1=si0;
si0=0U;
l15=si0;
L20:;
{
si0=l14;
si1=l15;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=65533U;
l2=si0;
si0=l14;
l15=si0;
goto L18;
L21:;
si0=l13;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l16=si0;
si1=1861360U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si0=l1;
si1=12U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l16;
si1=63U;
si0&=si1;
si1=l2;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
goto L22;
L23:;
si0=255U;
si1=l17;
si0>>=(si1&31);
si1=l16;
si0&=si1;
l2=si0;
L22:;
si0=l1;
si1=l17;
si0+=si1;
l1=si0;
si1=108U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l1;
si1=1861616U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
switch(si0){
case 0:
goto L24;
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
goto L18;
default:
goto L20;
}
L24:;
}
si0=l15;
si1=-1U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si0=65533U;
l2=si0;
goto L17;
L19:;
si0=l1;
si1=255U;
si0&=si1;
l2=si0;
si0=1U;
l15=si0;
goto L16;
L18:;
si0=l15;
if(si0){
goto L17;
}
si0=0U;
l1=si0;
goto L2;
L17:;
si0=l14;
si1=l15;
si0=si0 < si1;
if(si0){
goto L4;
}
L16:;
si0=0U;
l16=si0;
si0=l5;
l1=si0;
si0=l9;
l17=si0;
si0=l10;
if(si0){
goto L27;
}
L28:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L28;
}
}
si0=l9;
l16=si0;
si0=l9;
si1=l11;
si0=si0 > si1;
if(si0){
goto L26;
}
L27:;
si0=l2;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l1=si0;
L29:;
{
si0=l5;
si1=l16;
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l17=si0;
si1=-1U;
si0^=si1;
si1=l17;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L26;
}
si0=l18;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0^=si1;
l17=si0;
si1=-1U;
si0^=si1;
si1=l17;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L26;
}
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L29;
}
}
L26:;
si0=l8;
si1=l16;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l8;
si1=l16;
si0-=si1;
l17=si0;
si0=l5;
si1=l16;
si0+=si1;
l1=si0;
L30:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L30;
}
L25:;
si0=l13;
si1=l15;
si0+=si1;
l13=si0;
si0=l15;
si1=l12;
si0+=si1;
l12=si0;
si0=0U;
l1=si0;
si0=l14;
si1=l15;
si0-=si1;
l14=si0;
if(si0){
goto L15;
}
goto L2;
}
L11:;
si0=l1;
si1=l3;
si2=1861844U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l12=si0;
si0=l4;
l16=si0;
si0=l3;
l14=si0;
L31:;
{
si0=l16;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L35;
}
si0=0U;
l17=si0;
si0=12U;
l1=si0;
si0=0U;
l15=si0;
L36:;
{
si0=l14;
si1=l15;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=65533U;
l17=si0;
si0=l14;
l15=si0;
goto L34;
L37:;
si0=l16;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l18=si0;
si1=1861360U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=12U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l18;
si1=63U;
si0&=si1;
si1=l17;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l17=si0;
goto L38;
L39:;
si0=255U;
si1=l2;
si0>>=(si1&31);
si1=l18;
si0&=si1;
l17=si0;
L38:;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si1=107U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l1;
si1=1861616U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
switch(si0){
case 0:
goto L40;
case 1:
goto L36;
case 2:
goto L36;
case 3:
goto L36;
case 4:
goto L36;
case 5:
goto L36;
case 6:
goto L36;
case 7:
goto L36;
case 8:
goto L36;
case 9:
goto L36;
case 10:
goto L36;
case 11:
goto L36;
case 12:
goto L34;
default:
goto L36;
}
L40:;
}
si0=l15;
si1=-1U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
si0=65533U;
l17=si0;
goto L33;
L35:;
si0=l1;
si1=255U;
si0&=si1;
l17=si0;
si0=1U;
l15=si0;
goto L32;
L34:;
si0=l15;
if(si0){
goto L33;
}
si0=0U;
l1=si0;
goto L2;
L33:;
si0=l14;
si1=l15;
si0=si0 < si1;
if(si0){
goto L4;
}
L32:;
si0=l15;
si1=l12;
si0+=si1;
l18=si0;
si0=l16;
si1=l15;
si0+=si1;
l16=si0;
si0=l14;
si1=l15;
si0-=si1;
l14=si0;
si0=l5;
l1=si0;
si0=l8;
l2=si0;
L42:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l17;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L42;
}
goto L9;
}
L41:;
si0=0U;
l1=si0;
si0=l18;
l12=si0;
si0=l14;
if(si0){
goto L31;
}
goto L2;
}
L9:;
si0=l3;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l12;
si1=l3;
si2=1861876U;
f662(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=0U;
l12=si0;
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=0U;
l16=si0;
si0=12U;
l1=si0;
si0=0U;
l15=si0;
L43:;
{
si0=l3;
si1=l15;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
l15=si0;
goto L6;
L44:;
si0=l4;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l17=si0;
si1=1861360U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=12U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l17;
si1=63U;
si0&=si1;
si1=l16;
si2=6U;
si1<<=(si2&31);
si0|=si1;
l16=si0;
goto L45;
L46:;
si0=255U;
si1=l2;
si0>>=(si1&31);
si1=l17;
si0&=si1;
l16=si0;
L45:;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si1=107U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l1;
si1=1861616U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
switch(si0){
case 0:
goto L47;
case 1:
goto L43;
case 2:
goto L43;
case 3:
goto L43;
case 4:
goto L43;
case 5:
goto L43;
case 6:
goto L43;
case 7:
goto L43;
case 8:
goto L43;
case 9:
goto L43;
case 10:
goto L43;
case 11:
goto L43;
case 12:
goto L6;
default:
goto L43;
}
L47:;
}
si0=l15;
si1=-1U;
si0+=si1;
l1=si0;
si1=1U;
si2=l1;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l15=si0;
goto L5;
L7:;
si0=l1;
si1=108U;
si2=1861724U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l15;
if(si0){
goto L5;
}
si0=0U;
l1=si0;
goto L2;
L5:;
si0=0U;
l12=si0;
si0=l3;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l3;
l14=si0;
L4:;
si0=l15;
si1=l14;
si2=1862492U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l12;
si0+=si1;
l6=si0;
si0=l3;
si1=l12;
si0-=si1;
l1=si0;
L2:;
sj0=l7;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10997(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L2;
}
L3:;
si0=l5;
si1=l4;
si0=f99(i,si0,si1);
l7=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l7;
si1=l4;
si2=1861892U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l9;
si1=-8U;
si0+=si1;
l11=si0;
si0=l6;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L9;
}
L10:;
{
si0=l10;
si1=255U;
si0&=si1;
l12=si0;
si1=16843009U;
si0*=si1;
l2=si0;
si0=0U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
L12:;
{
si0=l6;
si1=l1;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l13=si0;
si1=-1U;
si0^=si1;
si1=l13;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l13=si0;
si1=-1U;
si0^=si1;
si1=l13;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L12;
}
}
L11:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=l1;
si0-=si1;
l2=si0;
si0=l6;
si1=l1;
si0+=si1;
l1=si0;
L14:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L14;
}
goto L6;
}
L13:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L5;
}
L9:;
si0=l1;
si1=l6;
si0-=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=l1;
si0-=si1;
l15=si0;
L15:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l6;
l1=si0;
si0=l15;
l2=si0;
L17:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si2=255U;
si1&=si2;
l13=si1;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
if(si0){
goto L17;
}
}
si0=l14;
l1=si0;
si0=l14;
si1=l11;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l13;
si1=16843009U;
si0*=si1;
l2=si0;
si0=l14;
l1=si0;
L19:;
{
si0=l6;
si1=l1;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l10=si0;
si1=-1U;
si0^=si1;
si1=l10;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L18;
}
si0=l12;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l10=si0;
si1=-1U;
si0^=si1;
si1=l10;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L18;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L19;
}
}
L18:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=l1;
si0-=si1;
l2=si0;
si0=l6;
si1=l1;
si0+=si1;
l1=si0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
goto L6;
}
L16:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L5;
}
L8:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L21;
}
si0=l13;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
L22:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l6;
l1=si0;
si0=l9;
l2=si0;
L24:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L24;
}
goto L6;
}
L23:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L5;
}
L21:;
si0=l13;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
goto L6;
L7:;
L25:;
{
si0=l10;
si1=255U;
si0&=si1;
l12=si0;
si1=16843009U;
si0*=si1;
l2=si0;
si0=0U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
L27:;
{
si0=l6;
si1=l1;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l13=si0;
si1=-1U;
si0^=si1;
si1=l13;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L26;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0^=si1;
l13=si0;
si1=-1U;
si0^=si1;
si1=l13;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L26;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L27;
}
}
L26:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=l1;
si0-=si1;
l2=si0;
si0=l6;
si1=l1;
si0+=si1;
l1=si0;
L29:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
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
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
f10933(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L25;
}
goto L5;
}
L6:;
si0=l7;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l7;
si1=l4;
si2=1861860U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1860952U;
l5=si0;
si0=0U;
l7=si0;
L4:;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10998(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
l5=si0;
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
si0+=si1;
l6=si0;
L4:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=1U;
si0+=si1;
l1=si0;
l4=si0;
si0=l5;
si1=9U;
si0=si0 == si1;
if(si0){
goto L4;
}
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
l5=si0;
L6:;
{
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
L9:;
{
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
l1=si0;
si0=l4;
si1=9U;
si0=si0 == si1;
if(si0){
goto L9;
}
}
si0=l5;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l5;
si2=1U;
f7248(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
goto L7;
L8:;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L7:;
si0=l7;
si1=l5;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l2;
l1=si0;
goto L6;
}
L5:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=0U;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=0U;
l1=si0;
si0=0U;
l2=si0;
L12:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l3;
si1=l1;
f7247(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=0U;
si2=l2;
si3=1U;
si2+=si3;
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3);
l2=si3;
si4=10U;
si3=si3 == si4;
si1=si3?si1:si2;
si2=l2;
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
goto L13;
L14:;
si0=l7;
si1=l2;
si2=l7;
si1=REM_U(si1,si2);
si0-=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l3;
si1=l1;
si2=l5;
f7248(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0+=si1;
l8=si0;
goto L16;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0+=si1;
l8=si0;
L16:;
si0=l8;
si1=32U;
si2=l5;
si0=f15392(i,si0,si1,si2);
si0=l3;
si1=l1;
si2=l5;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l2;
si0+=si1;
l2=si0;
L13:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L12;
}
goto L10;
}
L11:;
f53(i);
UNREACHABLE;
L10:;
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
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10999(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si1=208U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=1U;
l8=si0;
si0=l6;
si1=112U;
si0+=si1;
si1=1U;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+8U);
l10=si3;
f1403(i,si0,si1,si2,si3);
si0=l6;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l6;
si2=120U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=72U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=88U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=104U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=44U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=36U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+148U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=28U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=16U;
si1+=si2;
f1399(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l1;
if(si0){
goto L14;
}
si0=1U;
l8=si0;
goto L13;
L14:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l8;
si1=l7;
si2=l1;
si0=f15390(i,si0,si1,si2);
l12=si0;
si0=l11;
si1=l10;
si0+=si1;
l7=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l7;
si1=l1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l10;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l12;
si1=l11;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=l10;
si0=f15390(i,si0,si1,si2);
si0=l4;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
L15:;
si0=l6;
si1=112U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=96U;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=-1U;
si0+=si1;
si1=-2U;
si2=l4;
si0=si2?si0:si1;
l8=si0;
si0=l6;
si1=128U;
si0+=si1;
l4=si0;
L16:;
{
si0=l6;
si1=l4;
f1399(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l10;
si0+=si1;
l11=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l12;
si1=l7;
si0+=si1;
si1=l13;
si2=l10;
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L16;
}
goto L2;
}
L12:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l11;
si1=l7;
si2=1865320U;
f675(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l7;
si1=l1;
si2=1865320U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l10;
si1=l7;
si2=1865336U;
f755(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l7;
si1=l11;
si2=1865352U;
f675(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l11;
si1=l1;
si2=1865352U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L3;
}
L17:;
si0=l8;
si1=l7;
si2=l1;
si0=f15390(i,si0,si1,si2);
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l6;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si1=188U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L18:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L19:;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l9;
f15271(i,si0);
L20:;
si0=l6;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11000(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=0U;
l8=si0;
si0=l4;
si1=0U;
si0=si0 != si1;
si1=l5;
si2=0U;
si1=(U32)((I32)si1<(I32)si2);
si0|=si1;
l9=si0;
if(si0){
goto L24;
}
si0=l5;
si0=!(si0);
if(si0){
goto L28;
}
si0=1U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L24;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
goto L27;
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L26;
}
L27:;
si0=1U;
l4=si0;
si0=0U;
l5=si0;
goto L25;
L26:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L21;
}
L25:;
si0=l4;
si1=l9;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L3;
L24:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
if(si0){
goto L22;
}
si0=0U;
l5=si0;
si0=1U;
l4=si0;
goto L3;
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=1U;
si0+=si1;
l1=si0;
si1=l5;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l9;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l8=si0;
si1=l4;
si0*=si1;
si1=l13;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L20;
}
L30:;
si0=0U;
l1=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l7;
si1=40U;
si0+=si1;
si1=0U;
si2=l4;
f7248(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
L31:;
si0=l6;
si1=l1;
si0+=si1;
si1=l10;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=l1;
si2=l4;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l13;
si1=l8;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l8;
si0=!(si0);
if(si0){
goto L32;
}
si0=l8;
l3=si0;
si0=l11;
l1=si0;
L33:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l7;
si1=40U;
si0+=si1;
si1=l5;
f7247(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L34:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l5;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l5;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l7;
si1=40U;
si0+=si1;
si1=l5;
si2=l4;
f7248(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L35:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l5;
si0+=si1;
si1=l10;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=l5;
si2=l4;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L33;
}
}
L32:;
si0=l11;
si1=l8;
si0+=si1;
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l5;
si0-=si1;
si1=l13;
si2=l8;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l7;
si1=40U;
si0+=si1;
si1=l5;
si2=l4;
f7248(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
L36:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l5;
si0+=si1;
si1=l1;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
f15271(i,si0);
goto L2;
L23:;
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
goto L2;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l13;
si1=l10;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l9;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l16=si2;
si3=l10;
si4=l8;
si5=l5;
si0=f11001(i,si0,si1,si2,si3,si4,si5);
l2=si0;
if(si0){
goto L38;
}
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=l11;
si2=l9;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L11;
L38:;
si0=l2;
si1=l9;
si0&=si1;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l13;
si1=l10;
si0-=si1;
l5=si0;
si1=l9;
si2=2147483647U;
si1^=si2;
si2=l2;
si1=I32_DIV_S(si1,si2);
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=1U;
l8=si0;
si0=l2;
si1=l5;
si0*=si1;
si1=l9;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
L39:;
si0=0U;
l5=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=1U;
si2=l16;
si3=l10;
f1403(i,si0,si1,si2,si3);
si0=l7;
si1=40U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l7;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=96U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=104U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=112U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=120U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=128U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=68U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=60U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+172U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=52U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l16;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
l17=si0;
si0=0U;
l4=si0;
L40:;
{
si0=l7;
si1=16U;
si0+=si1;
si1=l17;
f1399(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l1;
si1=l9;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l11;
si1=l4;
si0+=si1;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l5;
si0-=si1;
si1=l1;
si2=l4;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l7;
si1=24U;
si0+=si1;
si1=l5;
si2=l4;
f7248(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
L41:;
si0=l8;
si1=l5;
si0+=si1;
si1=l6;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=l5;
si2=l4;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l5;
si0-=si1;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l7;
si1=24U;
si0+=si1;
si1=l5;
si2=l13;
f7248(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
L42:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=l5;
si0+=si1;
si1=l12;
si2=l13;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=l5;
si2=l13;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l10;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L40;
}
goto L12;
}
L37:;
si0=l7;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l0;
si1=l1;
si2=l7;
si3=136U;
si2+=si3;
si3=l7;
si4=40U;
si3+=si4;
si4=l8;
si5=l5;
f10999(i,si0,si1,si2,si3,si4,si5);
goto L1;
L21:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=l8;
si1=l13;
si2=1865272U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=1865392U;
si1=31U;
si2=1865368U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l4;
si1=l1;
si2=1865424U;
f675(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l1;
si1=l9;
si2=1865424U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=25U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1865480U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865472U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865464U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1865456U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
sj1=107374182425ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l6;
si1=l4;
si2=l7;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L11;
L44:;
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L43:;
f15042(i);
UNREACHABLE;
L12:;
si0=l7;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l7;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l7;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L45:;
si0=l9;
si1=l4;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l11;
si1=l4;
si0+=si1;
l1=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l5;
si0-=si1;
si1=l9;
si2=l4;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l7;
si1=24U;
si0+=si1;
si1=l5;
si2=l4;
f7248(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
L46:;
si0=l8;
si1=l5;
si0+=si1;
si1=l1;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
L11:;
si0=l14;
si0=!(si0);
if(si0){
goto L47;
}
si0=l12;
f15271(i,si0);
L47:;
si0=l15;
si0=!(si0);
if(si0){
goto L8;
}
si0=l16;
f15271(i,si0);
goto L8;
L10:;
si0=l4;
si1=l9;
si2=1865440U;
f662(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l9;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l17=si2;
si3=l10;
si4=l8;
si5=l5;
si0=f11001(i,si0,si1,si2,si3,si4,si5);
l2=si0;
if(si0){
goto L54;
}
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l4;
si1=l6;
si2=l9;
si0=f15390(i,si0,si1,si2);
si0=l9;
l5=si0;
goto L48;
L54:;
si0=l9;
si1=l2;
si2=l10;
si1*=si2;
l5=si1;
si0-=si1;
l4=si0;
si0=1U;
l11=si0;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l4;
si0=f15269(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L52;
}
L55:;
si0=0U;
l5=si0;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=1U;
si2=l17;
si3=l10;
f1403(i,si0,si1,si2,si3);
si0=l7;
si1=40U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l7;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=40U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=96U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=104U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=112U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=120U;
si0+=si1;
si1=l7;
si2=136U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=128U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=68U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=60U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+172U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=52U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l17;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
si0=0U;
l4=si0;
L56:;
{
si0=l7;
si1=8U;
si0+=si1;
si1=l12;
f1399(i,si0,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L49;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L51;
}
si0=l1;
si1=l9;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l6;
si1=l4;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l5;
si0-=si1;
si1=l1;
si2=l4;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l7;
si1=24U;
si0+=si1;
si1=l5;
si2=l4;
f7248(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
L57:;
si0=l11;
si1=l5;
si0+=si1;
si1=l8;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=l5;
si2=l4;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l10;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L56;
}
goto L49;
}
L53:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L52:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L51:;
si0=l4;
si1=l1;
si2=1865288U;
f675(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l1;
si1=l9;
si2=1865288U;
f666(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l7;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l7;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L58;
}
si0=l7;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L58:;
si0=l9;
si1=l4;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l9;
si1=l4;
si0-=si1;
l1=si0;
si0=l6;
si1=l4;
si0+=si1;
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si1=l5;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L59;
}
si0=l7;
si1=24U;
si0+=si1;
si1=l5;
si2=l1;
f7248(i,si0,si1,si2);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
L59:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si1=l5;
si0+=si1;
si1=l10;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l1;
si0+=si1;
l5=si0;
L48:;
si0=l16;
si0=!(si0);
if(si0){
goto L60;
}
si0=l17;
f15271(i,si0);
L60:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=l13;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L7:;
si0=l4;
si1=l9;
si2=1865304U;
f662(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L61;
}
si0=1U;
l4=si0;
si0=1U;
si1=l9;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L3;
L61:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l9;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L3;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L2:;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
si0=l7;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f11001(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=72U;
si0+=si1;
si1=1U;
si2=l2;
si3=l3;
f1403(i,si0,si1,si2,si3);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l8=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=16U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
l11=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
l12=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=40U;
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
l14=si0;
si1=l6;
si2=72U;
si1+=si2;
si2=48U;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=0U;
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+108U);
si1=0U;
si0=si0 != si1;
l17=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l13;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=128U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=136U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=144U;
si0+=si1;
l4=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=152U;
si0+=si1;
l7=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l17;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l16=si0;
si0=l5;
l3=si0;
L5:;
{
si0=l6;
si1=l9;
f1399(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
si0=0U;
l3=si0;
si0=l5;
l16=si0;
L4:;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+168U,si1);
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L6:;
si0=l16;
si1=l5;
si2=l16;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l16=si0;
goto L1;
L2:;
si0=l13;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=128U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=136U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=144U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=152U;
si0+=si1;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l17;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=-1U;
l16=si0;
L7:;
{
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
f1399(i,si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=l6;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
si0=l6;
si1=176U;
si0+=si1;
i->g0=si0;
si0=l16;
L0:;
return si0;
}

void f11002(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=1U;
l5=si0;
L2:;
{
si0=l5;
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si1=223U;
si0&=si1;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
l5=si0;
if(si0){
goto L5;
}
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l7;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l7=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
f7247(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L5:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=l3;
f7247(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l7;
si1=96U;
si0=si0 > si1;
si1=5U;
si0<<=(si1&31);
si1=l7;
si0^=si1;
l7=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
si1=l3;
f7247(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
L3:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L2;
}
}
L1:;
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
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11003(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=l2;
f6975(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=36U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=20U;
si0+=si1;
l5=si0;
si1=l4;
si2=48U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=12U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=43U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+89U);
i32_store16(&i->m0,(U64)si0+41U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si1=12U;
si0*=si1;
l2=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L10:;
{
si0=l6;
si1=l2;
si0+=si1;
l7=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L8;
}
L11:;
si0=l5;
si1=l3;
si0*=si1;
l3=si0;
si0=l2;
si1=-12U;
si0+=si1;
l2=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
l7=si0;
si0=l3;
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
l7=si0;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l7;
si1=l2;
si0+=si1;
l7=si0;
if(si0){
goto L15;
}
si0=1U;
l9=si0;
goto L14;
L15:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
L14:;
si0=0U;
l10=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l7;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l4;
si1=96U;
si0+=si1;
si1=0U;
si2=l2;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l10=si0;
L16:;
si0=l9;
si1=l10;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l10;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L18;
case 3:
goto L19;
case 4:
goto L18;
default:
goto L21;
}
L21:;
si0=l6;
l7=si0;
goto L17;
L20:;
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
goto L17;
L19:;
si0=l6;
si1=4U;
si0+=si1;
l7=si0;
goto L17;
L18:;
si0=l5;
l7=si0;
si0=l8;
l5=si0;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=l2;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si2=l5;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l2=si0;
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
si1=l2;
si0+=si1;
si1=l7;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
switch(si0){
case 0:
goto L6;
case 1:
goto L25;
case 2:
goto L24;
case 3:
goto L23;
default:
goto L26;
}
L26:;
si0=l6;
si1=l6;
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
goto L6;
}
si0=l6;
f1433(i,si0);
goto L6;
L25:;
si0=l6;
si1=0U;
si2=l6;
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
goto L6;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L6;
L24:;
si0=l6;
si1=0U;
si2=l6;
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
goto L6;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L6;
L23:;
si0=l6;
si1=l6;
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
goto L6;
}
si0=l6;
f1433(i,si0);
goto L6;
L8:;
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+48U,si1);
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L28;
}
si0=1U;
l5=si0;
goto L27;
L28:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
L27:;
si0=l5;
si1=l3;
si2=l2;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=96U;
si1+=si2;
f7075(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l2;
f7690(i,si0);
L29:;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
f15271(i,si0);
L30:;
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
goto L1;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11004(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=528U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=496U;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=496U;
si0+=si1;
si1=24U;
si0+=si1;
l8=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l5;
si1=272U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15392(i,si0,si1,si2);
si0=l5;
si1=509U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16843009U;
i32_store(&i->m0,(U64)si0+505U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+496U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=49U;
si0+=si1;
si1=l5;
si2=272U;
si1+=si2;
si2=223U;
si0=f15390(i,si0,si1,si2);
l12=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l5;
si1=36U;
si0+=si1;
l13=si0;
si0=l1;
si1=l2;
si0+=si1;
l14=si0;
si0=l5;
si1=505U;
si0+=si1;
l15=si0;
si1=4U;
si0+=si1;
l16=si0;
L7:;
{
si0=l2;
l17=si0;
si0=0U;
l18=si0;
L12:;
{
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l18;
si1+=si2;
l19=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L11;
}
si0=l1;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
si0+=si1;
si1=l14;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L10;
}
L11:;
si0=l18;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
if(si0){
goto L9;
}
L10:;
si0=l17;
l2=si0;
goto L6;
L9:;
si0=l18;
si1=l17;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l18;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l14;
si1=l1;
si2=l18;
si0=f15390(i,si0,si1,si2);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l20=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l5;
si1=l14;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l5;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+272U,sj1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=0U;
l14=si0;
si0=l2;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l14;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l14;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l14;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l21;
si2=0U;
si0=f8146(i,si0,si1,si2);
l14=si0;
L16:;
si0=l5;
si1=272U;
si0+=si1;
si1=l2;
si2=l14;
si0=f8078(i,si0,si1,si2);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
si1=l14;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
L17:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
goto L8;
L15:;
si0=l18;
si1=l17;
si2=1865516U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l5;
si1=272U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15392(i,si0,si1,si2);
si0=l16;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=16843009U;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+496U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l12;
si1=l5;
si2=272U;
si1+=si2;
si2=223U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l17;
si0+=si1;
l14=si0;
si0=l19;
si1=1U;
si0+=si1;
l1=si0;
si0=l18;
si1=-1U;
si0^=si1;
si1=l17;
si0+=si1;
l2=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
}
si0=l19;
si1=1U;
si0+=si1;
l1=si0;
si0=l18;
si1=-1U;
si0^=si1;
si1=l17;
si0+=si1;
l2=si0;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l18;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l14=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+284U,si1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+280U,si1);
si0=l5;
sj1=-4294967296ULL;
i64_store(&i->m0,(U64)si0+272U,sj1);
si0=l19;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=0U;
l18=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l18;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l18;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=44U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l18;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l19;
si2=0U;
si0=f8146(i,si0,si1,si2);
l18=si0;
L18:;
si0=l5;
si1=272U;
si0+=si1;
si1=l1;
si2=l18;
si0=f8078(i,si0,si1,si2);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l5;
si1=l18;
f7257(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
L19:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=528U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11005(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=528U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=16U;
si0+=si1;
l8=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=24U;
si0+=si1;
l9=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l6;
si1=273U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15392(i,si0,si1,si2);
si0=l6;
si1=509U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l11=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16843009U;
i32_store(&i->m0,(U64)si0+505U,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+496U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si1=49U;
si0+=si1;
si1=l6;
si2=273U;
si1+=si2;
si2=223U;
si0=f15390(i,si0,si1,si2);
l13=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l1;
si1=l2;
si0+=si1;
l14=si0;
si0=l6;
si1=505U;
si0+=si1;
l15=si0;
si1=4U;
si0+=si1;
l16=si0;
si0=l5;
si1=88U;
si0+=si1;
l17=si0;
L6:;
{
si0=l2;
l18=si0;
si0=0U;
l19=si0;
L11:;
{
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l19;
si1+=si2;
l20=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l1;
si1=l19;
si2=1U;
si1+=si2;
l19=si1;
si0+=si1;
si1=l14;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L9;
}
L10:;
si0=l19;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
if(si0){
goto L8;
}
L9:;
si0=l18;
l2=si0;
goto L5;
L8:;
si0=l19;
si1=l18;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l19;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l17;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l19;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si2=l19;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l14;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l19;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l21;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l14;
si2=0U;
si0=f8110(i,si0,si1,si2);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
si1=l14;
f7257(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
goto L7;
L13:;
si0=l19;
si1=l18;
si2=1865516U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1U;
si1=l19;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l6;
si1=273U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15392(i,si0,si1,si2);
si0=l16;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=16843009U;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+496U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l13;
si1=l6;
si2=273U;
si1+=si2;
si2=223U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l18;
si0+=si1;
l14=si0;
si0=l20;
si1=1U;
si0+=si1;
l1=si0;
si0=l19;
si1=-1U;
si0^=si1;
si1=l18;
si0+=si1;
l2=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
}
si0=l20;
si1=1U;
si0+=si1;
l1=si0;
si0=l19;
si1=-1U;
si0^=si1;
si1=l18;
si0+=si1;
l2=si0;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l20=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l20;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l19;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l19;
si2=0U;
si0=f8110(i,si0,si1,si2);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l19=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=l19;
f7257(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l19=si0;
L15:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l19;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=528U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11006(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=528U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=16U;
si0+=si1;
l8=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=24U;
si0+=si1;
l9=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l6;
si1=273U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15392(i,si0,si1,si2);
si0=l6;
si1=509U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
l11=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16843009U;
i32_store(&i->m0,(U64)si0+505U,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+496U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si1=49U;
si0+=si1;
si1=l6;
si2=273U;
si1+=si2;
si2=223U;
si0=f15390(i,si0,si1,si2);
l13=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l1;
si1=l2;
si0+=si1;
l14=si0;
si0=l6;
si1=505U;
si0+=si1;
l15=si0;
si1=4U;
si0+=si1;
l16=si0;
L6:;
{
si0=l2;
l17=si0;
si0=0U;
l18=si0;
L11:;
{
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=l18;
si1+=si2;
l19=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=l1;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
si0+=si1;
si1=l14;
si0=si0 != si1;
if(si0){
goto L11;
}
goto L9;
}
L10:;
si0=l18;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
if(si0){
goto L8;
}
L9:;
si0=l17;
l2=si0;
goto L5;
L8:;
si0=l18;
si1=l17;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l18;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l18;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l14;
si1=l1;
si2=l18;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l18;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l18;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l20;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l14;
si2=0U;
si0=f8105(i,si0,si1,si2);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
si1=l14;
f7257(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
goto L7;
L13:;
si0=l18;
si1=l17;
si2=1865516U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l6;
si1=273U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15392(i,si0,si1,si2);
si0=l16;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=16843009U;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+496U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l13;
si1=l6;
si2=273U;
si1+=si2;
si2=223U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l17;
si0+=si1;
l14=si0;
si0=l19;
si1=1U;
si0+=si1;
l1=si0;
si0=l18;
si1=-1U;
si0^=si1;
si1=l17;
si0+=si1;
l2=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
}
si0=l19;
si1=1U;
si0+=si1;
l1=si0;
si0=l18;
si1=-1U;
si0^=si1;
si1=l17;
si0+=si1;
l2=si0;
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l18=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l18;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l18;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l19;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l18;
si2=0U;
si0=f8105(i,si0,si1,si2);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=l18;
f7257(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
L15:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l18;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=528U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11007(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=528U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=49U;
si0+=si1;
l7=si0;
si0=l6;
si1=505U;
si0+=si1;
l8=si0;
si1=4U;
si0+=si1;
l9=si0;
L1:;
{
si0=l6;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=24U;
si0+=si1;
l12=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l6;
si1=273U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15392(i,si0,si1,si2);
si0=l9;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=16843009U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+496U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=l6;
si2=273U;
si1+=si2;
si2=223U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l2;
l12=si1;
si0+=si1;
l2=si0;
si0=0U;
l10=si0;
L9:;
{
si0=l2;
si1=l10;
si0+=si1;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l10;
si2=-1U;
si1+=si2;
l10=si1;
si2=l2;
si1+=si2;
l11=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
}
si0=l12;
si1=l10;
si0+=si1;
l2=si0;
si0=l10;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l12;
si1=l2;
si2=1U;
si1+=si2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l10;
si1=-1U;
si0^=si1;
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
si1=l11;
si2=1U;
si1+=si2;
si2=l13;
si0=f15390(i,si0,si1,si2);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l10;
si2=0U;
si0=f8105(i,si0,si1,si2);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
si1=l10;
f7257(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L10:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
goto L2;
L8:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l12;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l12;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=l1;
si2=l12;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=l12;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l6;
si1=l12;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l10;
si2=0U;
si0=f8105(i,si0,si1,si2);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l6;
si1=l10;
f7257(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L11:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=528U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
si0=l2;
si1=1U;
si0+=si1;
si1=l12;
si2=1865532U;
f662(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l10;
si2=-1U;
si1^=si2;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L1;
}
}
si0=l2;
si1=l12;
si2=1865548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f11008(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=528U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=49U;
si0+=si1;
l7=si0;
si0=l6;
si1=505U;
si0+=si1;
l8=si0;
si1=4U;
si0+=si1;
l9=si0;
si0=l5;
si1=88U;
si0+=si1;
l10=si0;
L1:;
{
si0=l6;
si1=496U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=16U;
si0+=si1;
l12=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=496U;
si0+=si1;
si1=24U;
si0+=si1;
l13=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l6;
si1=273U;
si0+=si1;
si1=0U;
si2=223U;
si0=f15392(i,si0,si1,si2);
si0=l9;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=16843009U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+496U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=l6;
si2=273U;
si1+=si2;
si2=223U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l2;
l13=si1;
si0+=si1;
l2=si0;
si0=0U;
l11=si0;
L9:;
{
si0=l2;
si1=l11;
si0+=si1;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l11;
si2=-1U;
si1+=si2;
l11=si1;
si2=l2;
si1+=si2;
l12=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
}
si0=l13;
si1=l11;
si0+=si1;
l2=si0;
si0=l11;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l13;
si1=l2;
si2=1U;
si1+=si2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l11;
si1=-1U;
si0^=si1;
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l14;
si0=f15269(i,si0);
l16=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l16;
si1=l12;
si2=1U;
si1+=si2;
si2=l14;
si0=f15390(i,si0,si1,si2);
l12=si0;
si0=l15;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l15;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l11;
si2=0U;
si0=f8110(i,si0,si1,si2);
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
si1=l11;
f7257(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L10:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
goto L2;
L8:;
si0=l13;
si0=!(si0);
if(si0){
goto L11;
}
si0=l13;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l5;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l13;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l1;
si2=l13;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l11;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l11;
si2=0U;
si0=f8110(i,si0,si1,si2);
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l6;
si1=l11;
f7257(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L11:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=528U;
si0+=si1;
i->g0=si0;
goto L0;
L7:;
si0=l2;
si1=1U;
si0+=si1;
si1=l13;
si2=1865532U;
f662(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l11;
si2=-1U;
si1^=si2;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L1;
}
}
si0=l2;
si1=l13;
si2=1865548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f11009(rustpythonInstance*i) {
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
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L7;
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
goto L6;
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
f11010(i,si0);
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
goto L8;
}
si0=l3;
if(si0){
goto L9;
}
si0=l2;
f15271(i,si0);
si0=4U;
l2=si0;
goto L8;
L9:;
si0=l2;
si1=l3;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l0;
si1=336U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=328U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+320U,sj1);
si0=l0;
si1=8U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
sj1=1099511628800ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=6U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1865928U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=212U;
si0=f15392(i,si0,si1,si2);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+356U,sj1);
si0=l0;
si1=5041U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l0;
si1=5042U;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+340U,sj1);
si0=l0;
si1=5043U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l0;
si1=5044U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
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
goto L6;
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
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969980U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2969980U;
si1=l0;
si2=64U;
si1+=si2;
f12944(i,si0,si1);
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969980U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969984U);
l2=si0;
si0=l0;
si1=384U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L7:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
si0=1861154U;
si1=43U;
si2=l0;
si3=64U;
si2+=si3;
si3=1866136U;
si4=1866152U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1865920U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=1215U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1865936U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=1865944U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=1860456U;
si1=43U;
si2=1865876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f11010(rustpythonInstance*i,U32 l0) {
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
si1=1867312U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873962U;
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
si1=1817184U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967312ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877151U;
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
si1=1822368U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876951U;
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
si1=1815792U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877036U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f11011(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=252U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l1;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L6:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=0U;
l3=si0;
si0=0U;
l7=si0;
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=0U;
si0=f8146(i,si0,si1,si2);
l7=si0;
L7:;
si0=0U;
si1=0U;
si2=l1;
si3=l7;
si0=f8074(i,si0,si1,si2,si3);
l5=si0;
goto L3;
L4:;
si0=l3;
si1=l4;
si2=4U;
si1+=si2;
si2=l6;
si0=f9936(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
f7690(i,si0);
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l1=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
l7=si0;
L9:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
f7690(i,si0);
L10:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
f15271(i,si0);
L11:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L12:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
l7=si0;
L14:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L15:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l8;
f7690(i,si0);
L16:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L14;
}
}
L13:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
f15271(i,si0);
L17:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f11012(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=252U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L7:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7991598859829275278ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1415387282674118076ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l0;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l3;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
f6122(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
goto L2;
}
si0=l0;
si1=l9;
si2=1208U;
si1+=si2;
si2=l1;
si3=l5;
si4=l6;
si1=f12275(i,si1,si2,si3,si4);
si2=l4;
si3=l2;
f7738(i,si0,si1,si2,si3);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l7;
f7690(i,si0);
L11:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l0;
si1=l0;
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
L9:;
si0=l0;
f7690(i,si0);
goto L1;
L5:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l0;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l0;
si1=l0;
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
L4:;
si0=l0;
f7690(i,si0);
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l0=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
l7=si0;
L13:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
f7690(i,si0);
L14:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
f15271(i,si0);
L15:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L16:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
l7=si0;
L18:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L19:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=l6;
f7690(i,si0);
L20:;
si0=l7;
si1=20U;
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
L17:;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15271(i,si0);
goto L1;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f11013(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7991598859829275278ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1415387282674118076ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=39U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=31U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877143U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877136U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877128U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877120U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l2=si0;
si0=l3;
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
si0=l4;
sj1=167503724583ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l5;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
goto L3;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f7735(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=39U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f11014(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7991598859829275278ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1415387282674118076ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l4=si0;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877028U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877021U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877013U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877005U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l6;
si2=l3;
si3=40U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
goto L1;
L7:;
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l7;
si3=1208U;
si2+=si3;
si3=1862856U;
si4=17U;
si5=l6;
si2=f12275(i,si2,si3,si4,si5);
si3=0U;
si4=0U;
f7564(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
l2=si0;
goto L1;
L8:;
si0=l3;
si1=24U;
si0+=si1;
si1=l6;
si2=1862873U;
si3=12U;
si4=l2;
f8199(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
l2=si0;
goto L9;
L10:;
si0=l1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
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
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=92U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=0U;
si0=f5566(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=76U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=68U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l5;
si2=l3;
si3=40U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L11;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
l9=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
l2=si0;
goto L12;
L13:;
si0=l3;
si1=8U;
si0+=si1;
si1=36U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862885U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1862917U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862909U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862901U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1862893U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l3;
si2=40U;
si1+=si2;
si0=f7418(i,si0,si1);
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
goto L12;
}
si0=l1;
f7690(i,si0);
L12:;
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
goto L14;
}
si0=l5;
f7690(i,si0);
L14:;
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
l5=si0;
si0=l6;
si1=l6;
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
goto L2;
L11:;
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
goto L15;
}
si0=l5;
f7690(i,si0);
L15:;
si0=l1;
l2=si0;
L9:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L6:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1914132U;
si1=70U;
si2=l3;
si3=104U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l6;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f11015(rustpythonInstance*i) {
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
si0=i32_load(&i->m0,(U64)si0+2969684U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L7;
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
goto L6;
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
f11016(i,si0);
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
goto L8;
}
si0=l3;
if(si0){
goto L9;
}
si0=l2;
f15271(i,si0);
si0=4U;
l2=si0;
goto L8;
L9:;
si0=l2;
si1=l3;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l0;
sj1=68719476877ULL;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l0;
si1=1866589U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l0;
sj1=1024ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1862740U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=196U;
si0=f15392(i,si0,si1,si2);
si0=l0;
si1=324U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+316U,sj1);
si0=l0;
si1=5045U;
i32_store(&i->m0,(U64)si0+312U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l0;
si1=849U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l0;
si1=2966516U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l0;
si1=2966528U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+356U,sj1);
si0=l0;
si1=5046U;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l0;
si1=5047U;
i32_store(&i->m0,(U64)si0+348U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+340U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l0;
si1=5048U;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l0;
si1=5049U;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969692U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
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
goto L6;
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
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
i32_store(&i->m0,(U64)si0+64U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969956U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2969956U;
si1=l0;
si2=64U;
si1+=si2;
f12944(i,si0,si1);
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969956U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969960U);
l2=si0;
si0=l0;
si1=384U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L7:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
si0=1861154U;
si1=43U;
si2=l0;
si3=64U;
si2+=si3;
si3=1866136U;
si4=1866152U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1865920U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=1215U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1866040U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=1865944U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=1860456U;
si1=43U;
si2=1865876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f11016(rustpythonInstance*i,U32 l0) {
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
si1=1867672U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873521U;
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
si1=1868272U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873527U;
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
si1=1867168U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873533U;
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
si1=1868008U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873539U;
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
goto L5;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L5:;
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
si1=1868104U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873546U;
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
goto L6;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L6:;
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
si1=1867600U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873554U;
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
goto L7;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L7:;
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
si1=1867384U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873562U;
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
goto L8;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L8:;
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
si1=1867528U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873567U;
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
goto L9;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L9:;
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
si1=1868776U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873571U;
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
goto L10;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L10:;
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
si1=1867624U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873578U;
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
goto L11;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L11:;
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
si1=1868320U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873344U;
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
goto L12;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L12:;
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
si1=1868440U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873588U;
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
goto L13;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L13:;
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
si1=1868800U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873600U;
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
goto L14;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L14:;
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
si1=1868752U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873611U;
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
goto L15;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L15:;
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
si1=1868488U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873622U;
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
goto L16;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L16:;
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
si1=1868488U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873630U;
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
goto L17;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L17:;
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
si1=1867552U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873637U;
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
goto L18;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L18:;
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
si1=1869304U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873645U;
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
goto L19;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L19:;
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
si1=1869088U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873650U;
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
goto L20;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L20:;
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
si1=1867960U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873662U;
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
goto L21;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L21:;
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
si1=1868992U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967299ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873667U;
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
goto L22;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L22:;
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
si1=1867576U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873670U;
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
goto L23;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L23:;
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
si1=1869232U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873676U;
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
goto L24;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L24:;
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
si1=1869160U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873687U;
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
goto L25;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L25:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=16ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=1867288U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967313ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873691U;
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
goto L26;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L26:;
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
si1=1820832U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876951U;
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
goto L27;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L27:;
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
si1=1823784U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877198U;
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
goto L28;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L28:;
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
si1=1824696U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877076U;
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
goto L29;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L29:;
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
si1=1822848U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877082U;
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
goto L30;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L30:;
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
si1=1815816U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877088U;
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
goto L31;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L31:;
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
si1=1823304U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877094U;
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
goto L32;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L32:;
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
si1=1820712U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877100U;
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
goto L33;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L33:;
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
si1=1824216U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877106U;
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
goto L34;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L34:;
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
si1=1821648U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877036U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f11017(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l4=si0;
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877028U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877021U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877013U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877005U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l4;
si2=l3;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
goto L1;
L9:;
si0=l1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si1=8U;
si0&=si1;
if(si0){
goto L11;
}
si0=l4;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L10;
}
L11:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L10:;
si0=l1;
si1=56U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
f1433(i,si0);
L12:;
si0=l6;
if(si0){
goto L13;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=2U;
l6=si0;
si0=2U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=23899U;
i32_store16(&i->m0,(U64)si0,si1);
si0=2U;
l4=si0;
goto L2;
L13:;
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
f10561(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si1=8U;
si0&=si1;
if(si0){
goto L16;
}
si0=l4;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l4;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L15;
}
L16:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L15:;
si0=l3;
si1=24U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=0U;
si2=l3;
si3=1862748U;
si4=1U;
si5=1862749U;
si6=1U;
si7=l1;
si8=60U;
si7+=si8;
si7=i32_load(&i->m0,(U64)si7);
l4=si7;
si8=l4;
si9=l1;
si10=68U;
si9+=si10;
si9=i32_load(&i->m0,(U64)si9);
si10=2U;
si9<<=(si10&31);
si8+=si9;
si9=l2;
f9105(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l9;
si1=-14U;
si0&=si1;
l9=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L5;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
si2=l1;
si3=64U;
si2+=si3;
si3=l8;
sj2=f11720(i,si2,si3);
si3=l8;
f11748(i,si0,si1,sj2,si3);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L2;
L17:;
si0=l9;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l1;
si1=56U;
si0+=si1;
f1433(i,si0);
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L3;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
si2=48U;
si1+=si2;
si2=l1;
si3=64U;
si2+=si3;
si3=l8;
sj2=f11720(i,si2,si3);
si3=l8;
f11748(i,si0,si1,sj2,si3);
si0=1U;
l5=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L1;
L14:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=5U;
l6=si0;
si0=5U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1862754U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1862750U);
i32_store(&i->m0,(U64)si0,si1);
si0=5U;
l4=si0;
goto L2;
L8:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f15042(i);
UNREACHABLE;
L6:;
si0=1U;
si1=2U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1857413U;
si1=16U;
si2=l3;
si3=32U;
si2+=si3;
si3=1857432U;
si4=1857484U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=5U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1857413U;
si1=16U;
si2=l3;
si3=32U;
si2+=si3;
si3=1857432U;
si4=1857484U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=0U;
l5=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f11018(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
f6024(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=80U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=60U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+68U);
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=80U;
si2+=si3;
si3=l3;
f10942(i,si0,si1,si2,si3);
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
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f11019(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l6;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L6:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l0;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L7:;
si0=l3;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
f5586(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l0;
si1=l4;
si2=l2;
si0=f10943(i,si0,si1,si2);
l4=si0;
goto L1;
L8:;
si0=l0;
si1=l0;
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
si0=l0;
f7690(i,si0);
goto L1;
L4:;
si0=l2;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l0;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l0;
si1=l0;
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
L3:;
si0=l0;
f7690(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l0=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
l7=si0;
L10:;
{
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
f7690(i,si0);
L11:;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
f15271(i,si0);
L12:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L13:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
l7=si0;
L15:;
{
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L16:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=l6;
f7690(i,si0);
L17:;
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l1;
si1=36U;
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
si1=80U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f11020(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877190U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877183U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877175U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877167U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si0=l3;
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l7;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
f7690(i,si0);
goto L4;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
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
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8146(i,si0,si1,si2);
l2=si0;
L6:;
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=l2;
si0=f8171(i,si0,si1,si2);
l6=si0;
L4:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
sj1=l4;
sj2=1246873079362706361ULL;
sj1^=sj2;
sj2=l5;
sj3=-1924666999199742657ULL;
sj2^=sj3;
sj1|=sj2;
sj2=0ULL;
si1=sj1 != sj2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f11021(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1924666999199742657ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f10944(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
if(si0){
goto L4;
}
si0=l0;
si1=l5;
sj1=i64_load8_u(&i->m0,(U64)si1+25U);
sj2=8ULL;
sj1<<=(sj2&63);
sj2=1ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L4:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=-1U;
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
case 4:
goto L7;
case 5:
goto L6;
default:
goto L11;
}
L11:;
si0=l1;
si1=924U;
si0+=si1;
l1=si0;
goto L5;
L10:;
si0=l1;
si1=808U;
si0+=si1;
l1=si0;
goto L5;
L9:;
si0=l1;
si1=964U;
si0+=si1;
l1=si0;
goto L5;
L8:;
si0=l1;
si1=748U;
si0+=si1;
l1=si0;
goto L5;
L7:;
si0=l1;
si1=908U;
si0+=si1;
l1=si0;
goto L5;
L6:;
si0=l1;
si1=780U;
si0+=si1;
l1=si0;
L5:;
si0=l5;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1877068U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
si0=l4;
si1=l1;
si2=l5;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f11022(rustpythonInstance*i) {
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
goto L7;
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
goto L6;
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
f11023(i,si0);
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
goto L8;
}
si0=l3;
if(si0){
goto L9;
}
si0=l2;
f15271(i,si0);
si0=4U;
l2=si0;
goto L8;
L9:;
si0=l2;
si1=l3;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l0;
si1=24U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1866100U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=36U;
si0+=si1;
si1=0U;
si2=240U;
si0=f15392(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=412U;
si0+=si1;
si1=421U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=396U;
si0+=si1;
si1=l3;
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
si1=1866168U;
i32_store(&i->m0,(U64)si0+408U,si1);
si0=l0;
sj1=1024ULL;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966576U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=2966560U;
si1=2966560U;
f12907(i,si0,si1);
L10:;
si0=l0;
si1=2966564U;
i32_store(&i->m0,(U64)si0+620U,si1);
si0=l4;
si1=1863200U;
f13361(i,si0,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966584U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=2966584U;
si1=2966584U;
f13014(i,si0,si1);
L11:;
si0=l0;
si1=5050U;
i32_store(&i->m0,(U64)si0+632U,si1);
si0=l0;
si1=2966592U;
i32_store(&i->m0,(U64)si0+616U,si1);
si0=l0;
si1=5051U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l0;
si1=5052U;
i32_store(&i->m0,(U64)si0+652U,si1);
si0=l0;
si1=5053U;
i32_store(&i->m0,(U64)si0+648U,si1);
si0=l0;
si1=5054U;
i32_store(&i->m0,(U64)si0+624U,si1);
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
goto L4;
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
goto L6;
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
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
i32_store(&i->m0,(U64)si0+384U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969996U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=2969996U;
si1=l0;
si2=384U;
si1+=si2;
f12944(i,si0,si1);
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+384U);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969996U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970000U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L7:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
si0=1861154U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1866136U;
si4=1866152U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=396U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1865920U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1866104U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l0;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=1865944U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=1860456U;
si1=43U;
si2=1865876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f11023(rustpythonInstance*i,U32 l0) {
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
si1=1868656U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873539U;
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
si1=1869184U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873554U;
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
si1=1868848U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873650U;
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
si1=1868680U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873600U;
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
goto L5;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L5:;
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
si1=1868296U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873571U;
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
goto L6;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L6:;
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
si1=1867768U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874706U;
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
goto L7;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L7:;
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
si1=1868032U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873578U;
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
goto L8;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L8:;
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
si1=1868128U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873630U;
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
goto L9;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L9:;
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
si1=1868128U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873622U;
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
goto L10;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L10:;
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
si1=1869376U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874713U;
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
goto L11;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L11:;
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
si1=1867504U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874718U;
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
goto L12;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L12:;
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
si1=1868248U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874726U;
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
goto L13;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L13:;
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
si1=1868080U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874731U;
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
goto L14;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L14:;
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
si1=1868152U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874741U;
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
goto L15;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L15:;
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
si1=1867744U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874746U;
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
goto L16;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L16:;
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
si1=1868560U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874752U;
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
goto L17;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L17:;
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
si1=1869256U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874757U;
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
goto L18;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L18:;
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
si1=1867360U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874763U;
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
goto L19;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L19:;
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
si1=1868608U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874216U;
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
goto L20;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L20:;
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
si1=1868704U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874224U;
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
goto L21;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L21:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=214U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1874769U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=512U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1867408U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1874983U;
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
goto L22;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=214U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1874995U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=512U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1868344U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875209U;
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
goto L23;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L23:;
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
si1=1867864U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875221U;
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
goto L24;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L24:;
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
si1=1868200U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875228U;
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
goto L25;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L25:;
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
si1=1868896U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875237U;
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
goto L26;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L26:;
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
si1=1869040U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875244U;
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
goto L27;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L27:;
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
si1=1867480U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875253U;
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
goto L28;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L28:;
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
si1=1867120U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875260U;
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
goto L29;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L29:;
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
si1=1868512U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875268U;
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
goto L30;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=185U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1875274U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=512U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1868968U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875459U;
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
goto L31;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L31:;
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
si1=1868824U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875469U;
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
goto L32;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L32:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=148U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1875479U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=512U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1867912U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875627U;
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
goto L33;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L33:;
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
si1=1869208U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875632U;
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
goto L34;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L34:;
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
si1=1867816U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875640U;
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
goto L35;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L35:;
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
si1=1867432U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1875647U;
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
goto L36;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L36:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=714U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1875654U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=512U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1868464U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876368U;
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
goto L37;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L37:;
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
si1=1867696U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876379U;
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
goto L38;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L38:;
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
si1=1869280U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876386U;
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
goto L39;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L39:;
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
si1=1868392U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876393U;
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
goto L40;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L40:;
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
si1=1868728U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876400U;
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
goto L41;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L41:;
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
si1=1869352U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876410U;
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
goto L42;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L42:;
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
si1=1868368U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876414U;
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
goto L43;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L43:;
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
si1=1867240U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876418U;
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
goto L44;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L44:;
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
si1=1867936U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873662U;
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
goto L45;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L45:;
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
si1=1868944U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876423U;
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
goto L46;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L46:;
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
si1=1868536U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876429U;
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
goto L47;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L47:;
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
si1=1867840U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876438U;
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
goto L48;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L48:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si1=117U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1876448U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=512U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=1869064U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876565U;
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
goto L49;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L49:;
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
si1=1867648U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1873645U;
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
goto L50;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L50:;
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
si1=1869328U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876572U;
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
goto L51;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L51:;
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
si1=1868224U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1865180U;
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
goto L52;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L52:;
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
si1=1868632U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876577U;
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
goto L53;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L53:;
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
si1=1867720U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967301ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876582U;
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
goto L54;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L54:;
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
si1=1867984U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967306ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876587U;
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
goto L55;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L55:;
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
si1=1867792U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967308ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876597U;
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
goto L56;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L56:;
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
si1=1868872U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876609U;
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
goto L57;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L57:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=1867888U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967305ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876618U;
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
goto L58;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L58:;
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
si1=1868176U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876627U;
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
goto L59;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L59:;
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
si1=1869136U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967310ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876633U;
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
goto L60;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L60:;
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
si1=1867336U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809358U;
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
goto L61;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L61:;
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
si1=1824024U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877036U;
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
goto L62;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L62:;
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
si1=1817280U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1876997U;
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
goto L63;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L63:;
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
si1=1817256U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877076U;
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
goto L64;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L64:;
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
si1=1818408U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877082U;
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
goto L65;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L65:;
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
si1=1814808U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877088U;
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
goto L66;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L66:;
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
si1=1817952U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877094U;
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
goto L67;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L67:;
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
si1=1817664U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877100U;
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
goto L68;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L68:;
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
si1=1822584U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877106U;
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
goto L69;
}
si0=l0;
si1=l1;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L69:;
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
si1=1817352U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1877198U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f11024(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877028U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877021U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877013U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877005U);
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
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l5;
si2=l3;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
goto L4;
L5:;
si0=0U;
l4=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=0U;
f2438(i,si0,si1,si2,si3);
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
f2434(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=35U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=31U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1874195U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1874188U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1874180U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1874172U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1874164U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l4=si0;
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
si0=l3;
sj1=150323855395ULL;
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
goto L2;
}
si0=l2;
si1=l5;
si2=l3;
si3=48U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
goto L4;
L6:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l1=si0;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1U;
si1=35U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f11025(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
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
f5966(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=32U;
si2+=si3;
si3=l3;
f10957(i,si0,si1,si2,si3);
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

void f11026(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877190U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877183U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877175U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1877167U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
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
si0=l3;
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l7;
si2=l3;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
f7690(i,si0);
goto L4;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=0U;
l1=si0;
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
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
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8146(i,si0,si1,si2);
l1=si0;
L6:;
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=l1;
si0=f8145(i,si0,si1,si2);
l6=si0;
L4:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
sj1=l4;
sj2=-1851977428690684601ULL;
sj1^=sj2;
sj2=l5;
sj3=-786598182489054301ULL;
sj2^=sj3;
sj1|=sj2;
sj2=0ULL;
si1=sj1 != sj2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f11027(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=0ULL;
l6=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
l7=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l1;
si1=0U;
sj2=l7;
si2=!(sj2);
si0=si2?si0:si1;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L7;
default:
goto L5;
}
L7:;
sj0=1ULL;
l6=sj0;
L6:;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
L5:;
sj0=2ULL;
l6=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=1U;
si1=2U;
si2=4U;
si3=l1;
si4=64U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
si5=64U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l1;
si6=68U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
l1=si5;
si6=l2;
si7=68U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l4=si6;
si7=l1;
si8=l4;
si7=si7 < si8;
si5=si7?si5:si6;
si3=f15389(i,si3,si4,si5);
l2=si3;
si4=l1;
si5=l4;
si4-=si5;
si5=l2;
si3=si5?si3:si4;
l1=si3;
si1=si3?si1:si2;
si2=l1;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=l3;
si0&=si1;
si1=0U;
si0=si0 != si1;
sj0=(U64)(si0);
l6=sj0;
L4:;
si0=l0;
sj1=l6;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=1ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L12;
case 3:
goto L11;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L14;
}
L14:;
si0=l1;
si1=924U;
si0+=si1;
l1=si0;
goto L8;
L13:;
si0=l1;
si1=808U;
si0+=si1;
l1=si0;
goto L8;
L12:;
si0=l1;
si1=964U;
si0+=si1;
l1=si0;
goto L8;
L11:;
si0=l1;
si1=748U;
si0+=si1;
l1=si0;
goto L8;
L10:;
si0=l1;
si1=908U;
si0+=si1;
l1=si0;
goto L8;
L9:;
si0=l1;
si1=780U;
si0+=si1;
l1=si0;
L8:;
si0=l5;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1877068U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l4;
si1=l1;
si2=l5;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f11028(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l1;
si1=0U;
sj2=l4;
si2=!(sj2);
si0=si2?si0:si1;
l1=si0;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+96U);
si2=224U;
si1+=si2;
si2=l1;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
sj1=f2122(i,si1,si2,si3);
l4=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L5:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l5=si0;
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
sj1=i64_load(&i->m0,(U64)si1+1876989U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1876982U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1876974U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1876966U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
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
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
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

U32 f11029(rustpythonInstance*i) {
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
goto L7;
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
goto L6;
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
f8238(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L8:;
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
si1=1821024U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1877237U;
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
goto L9;
}
si0=l0;
si1=368U;
si0+=si1;
si1=l2;
f7267(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+376U);
l2=si0;
L9:;
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
si1=1821360U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=1877198U;
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
goto L10;
}
si0=l2;
if(si0){
goto L11;
}
si0=l3;
f15271(i,si0);
si0=4U;
l3=si0;
goto L10;
L11:;
si0=l3;
si1=l2;
si2=28U;
si1*=si2;
l4=si1;
si0=f15274(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
L10:;
si0=l0;
si1=24U;
i32_store(&i->m0,(U64)si0+416U,si1);
si0=l0;
si1=9U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1866020U;
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
si1=5055U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l0;
si1=5056U;
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
goto L4;
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
goto L6;
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
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+372U);
i32_store(&i->m0,(U64)si0+384U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969948U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=2969948U;
si1=l0;
si2=384U;
si1+=si2;
f12944(i,si0,si1);
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+384U);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969948U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969952U);
l2=si0;
si0=l0;
si1=688U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L7:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
si0=1861154U;
si1=43U;
si2=l0;
si3=384U;
si2+=si3;
si3=1866136U;
si4=1866152U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=396U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+388U,si1);
si0=l0;
si1=1865920U;
i32_store(&i->m0,(U64)si0+384U,si1);
si0=l0;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l0;
si1=1866032U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l0;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+392U,si1);
si0=l0;
si1=384U;
si0+=si1;
si1=1865944U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=1860456U;
si1=43U;
si2=1865876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}


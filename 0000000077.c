#include "w2c2_base.h"

#include "rustpython.h"

void f7730(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=l3;
si3=l4;
f7715(i,si0,si1,si2,si3);
si0=1U;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
si3=l4;
f7715(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
goto L1;
L2:;
si0=l1;
si1=56U;
si0+=si1;
l1=si0;
si0=l3;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l3;
si1=l4;
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
sj1=f2122(i,si1,si2,si3);
l7=sj1;
i64_store(&i->m0,(U64)si0+72U,sj1);
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l4;
si3=l3;
sj4=l7;
f13621(i,si0,si1,si2,si3,sj4);
si0=1U;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l6;
if(si0){
goto L1;
}
si0=l5;
si1=l2;
si2=56U;
si1+=si2;
si2=l4;
si3=l3;
sj4=l7;
f13621(i,si0,si1,si2,si3,sj4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7731(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=272U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l0;
si2=56U;
si1+=si2;
f9026(i,si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=0U;
si3=l3;
si0=f9034(i,si0,si1,si2,si3);
l1=si0;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l5=si0;
si0=l4;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L10;
}
si0=1U;
l7=si0;
goto L9;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=28U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1804066U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804058U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804050U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804042U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=480U;
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
sj1=120259084316ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l7;
si2=l4;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
goto L7;
L10:;
si0=l6;
si1=3U;
si0&=si1;
l8=si0;
si0=l6;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=0U;
l9=si0;
si0=1U;
l7=si0;
goto L12;
L13:;
si0=l6;
si1=-4U;
si0&=si1;
l10=si0;
si0=0U;
l9=si0;
si0=1U;
l7=si0;
si0=l5;
l1=si0;
L14:;
{
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si3*=si4;
si2*=si3;
si1*=si2;
si0*=si1;
l7=si0;
si0=l1;
si1=48U;
si0+=si1;
l1=si0;
si0=l10;
si1=l9;
si2=4U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L12:;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
L15:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0*=si1;
l7=si0;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L15;
}
}
L9:;
si0=l4;
si1=116U;
si0+=si1;
si1=l4;
si2=120U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l7;
si1*=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
sj1=160744431480201187ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=6017406491275292924ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=108U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l3;
f9041(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+232U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l4;
si1=144U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+196U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+233U);
i32_store16(&i->m0,(U64)si0+185U,si1);
si0=l4;
si1=l7;
i32_store8(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L21;
L25:;
si0=l0;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l0;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l0;
si2=176U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si0=si2?si0:si1;
si1=l4;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l4;
si3=128U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si1=si3?si1:si2;
si2=l1;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+160U);
si1=l6;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l6;
si1=1U;
si0+=si1;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+152U);
l7=si0;
L26:;
{
si0=0U;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l9;
if(si0){
goto L26;
}
goto L8;
}
L24:;
si0=l4;
si1=192U;
si0+=si1;
si1=l3;
si2=l2;
f6975(i,si0,si1,si2);
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
goto L27;
}
si0=l2;
f7690(i,si0);
L27:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+232U);
l7=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=144U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+196U);
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(&i->m0,(U64)si1+233U);
i32_store16(&i->m0,(U64)si0+185U,si1);
si0=l4;
si1=l7;
i32_store8(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+144U,si1);
goto L21;
L23:;
si0=l4;
si1=8U;
si0+=si1;
f7695(i,si0);
goto L7;
L22:;
si0=l4;
si1=144U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
f9039(i,si0,si1,si2);
L21:;
si0=l4;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+120U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si2=132U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l4;
si2=176U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si0=si2?si0:si1;
si1=l4;
si2=124U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l4;
si3=128U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si1=si3?si1:si2;
si2=l1;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L17;
}
si0=l4;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+112U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=104U;
si0+=si1;
l0=si0;
si0=l4;
si1=152U;
si0+=si1;
l10=si0;
si0=l1;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l7=si0;
L29:;
{
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l9;
if(si0){
goto L29;
}
}
L28:;
si0=l4;
si1=240U;
si0+=si1;
si1=l4;
si2=60U;
si1+=si2;
si2=l4;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si2=i32_load(&i->m0,(U64)si2+4U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=192U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+148U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l4;
si1=l4;
si2=192U;
si1+=si2;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l4;
si1=l4;
si2=240U;
si1+=si2;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
l1=si0;
if(si0){
goto L19;
}
si0=l4;
si1=256U;
si0+=si1;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+120U);
si3=0U;
si4=l4;
si4=i32_load(&i->m0,(U64)si4+168U);
f6896(i,si0,si1,si2,si3,si4);
goto L18;
L20:;
si0=l4;
si1=8U;
si0+=si1;
f8985(i,si0);
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L30:;
si0=l4;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l4;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l7;
f15271(i,si0);
L31:;
si0=l4;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
goto L1;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
si1=l1;
si2=-1U;
si1+=si2;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L33;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+120U);
si0=si0 == si1;
if(si0){
goto L32;
}
L33:;
si0=l0;
si1=l10;
si2=0U;
si3=0U;
si4=0U;
si5=l4;
si6=256U;
si5+=si6;
f7100(i,si0,si1,si2,si3,si4,si5);
goto L18;
L32:;
si0=l0;
si1=l10;
si2=0U;
si3=0U;
si4=0U;
si5=l4;
si6=256U;
si5+=si6;
f7101(i,si0,si1,si2,si3,si4,si5);
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
switch(si0){
case 0:
goto L34;
case 1:
goto L37;
case 2:
goto L36;
case 3:
goto L35;
default:
goto L38;
}
L38:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si1=l1;
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
goto L34;
}
si0=l1;
f1433(i,si0);
goto L34;
L37:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si1=0U;
si2=l1;
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
goto L34;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L34;
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si1=0U;
si2=l1;
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
goto L34;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L34;
L35:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l1=si0;
si1=l1;
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
goto L34;
}
si0=l1;
f1433(i,si0);
L34:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+244U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+240U);
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
si0=l1;
si1=0U;
si2=l1;
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
goto L39;
}
si0=l1;
si1=0U;
f1431(i,si0,si1);
goto L39;
L42:;
si0=l1;
si1=0U;
si2=l1;
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
goto L39;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L39;
L41:;
si0=l1;
si1=0U;
si2=l1;
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
goto L39;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L39;
L40:;
si0=l1;
si1=0U;
si2=l1;
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
goto L39;
}
si0=l1;
si1=0U;
f1431(i,si0,si1);
L39:;
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+148U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l1=si0;
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
goto L44;
}
si0=l1;
f7690(i,si0);
L44:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+172U);
l1=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
f15271(i,si0);
L45:;
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
f15271(i,si0);
L46:;
si0=l4;
si1=8U;
si0+=si1;
f8985(i,si0);
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L47;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L47:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l1=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
f15271(i,si0);
L48:;
si0=l4;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
L49:;
si0=0U;
l1=si0;
sj0=l11;
sj1=160744431480201187ULL;
sj0^=sj1;
sj1=l12;
sj2=6017406491275292924ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
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
goto L1;
}
goto L2;
L17:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=66U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=1803976U;
si2=66U;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=283467841602ULL;
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si2=l4;
si3=192U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+148U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l7=si0;
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
goto L50;
}
si0=l7;
f7690(i,si0);
L50:;
si0=l4;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l4;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l7;
f15271(i,si0);
L51:;
si0=l4;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
f15271(i,si0);
L52:;
si0=l4;
si1=8U;
si0+=si1;
f8985(i,si0);
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L53;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L53:;
si0=l4;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L54;
}
si0=l4;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L54;
}
si0=l7;
f15271(i,si0);
L54:;
si0=l4;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L55;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
L55:;
sj0=l11;
sj1=160744431480201187ULL;
sj0^=sj1;
sj1=l12;
sj2=6017406491275292924ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
goto L7;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=66U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=1803976U;
si2=66U;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=283467841602ULL;
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si2=l4;
si3=192U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
L8:;
si0=l4;
si1=8U;
si0+=si1;
f8985(i,si0);
si0=l4;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L56;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L56:;
si0=l4;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L57;
}
si0=l7;
f15271(i,si0);
L57:;
si0=l4;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
L7:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L6:;
si0=1U;
si1=28U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=1U;
si1=66U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=66U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l2;
f7690(i,si0);
L1:;
si0=l4;
si1=272U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f7732(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=28U;
si0*=si1;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L5:;
{
si0=l4;
if(si0){
goto L6;
}
si0=0U;
l5=si0;
goto L1;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=232U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l5;
si2=0U;
si0=f7733(i,si0,si1,si2);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=200U;
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
si1=28U;
si0+=si1;
l3=si0;
si0=l4;
si1=-28U;
si0+=si1;
l4=si0;
si0=l0;
si1=l10;
si2=1208U;
si1+=si2;
si2=l9;
si3=l8;
si4=l5;
si1=f12275(i,si1,si2,si3,si4);
si2=l7;
si3=l1;
si0=f7734(i,si0,si1,si2,si3);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
goto L1;
}
L4:;
si0=1803776U;
si1=43U;
si2=1804096U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1803776U;
si1=43U;
si2=1804112U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f7733(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=4416488825077291035ULL;
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
si1=1805176U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-1245627778155203468ULL;
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
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f7734(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+1208U);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l5;
si1=16U;
si0+=si1;
l7=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l6;
si1=l7;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+1208U);
l8=si2;
si3=l8;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l8;
si1=l5;
si0=si0 == si1;
if(si0){
goto L7;
}
L8:;
si0=l6;
si1=1208U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L7:;
si0=l6;
si1=1216U;
si0+=si1;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f13453(i,si0,si1,si2);
l5=si0;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L9;
L10:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L9:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+1208U);
l8=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l8;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
si1=1208U;
si0+=si1;
f1433(i,si0);
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l5;
si0=f9951(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L13;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L14:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l8;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L14;
}
}
L13:;
si0=l0;
si1=l0;
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
si0=l7;
si1=l0;
si2=l2;
si3=l3;
si4=l8;
si0=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
l6=si0;
si0=l7;
si1=l7;
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
si0=l7;
f7690(i,si0);
goto L1;
L12:;
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
goto L5;
}
si0=l7;
f7690(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=36U;
si0+=si1;
si1=0U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L16;
}
si0=l5;
si1=16U;
si0+=si1;
l7=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l6;
si1=l7;
si2=l6;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l5;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L15;
L17:;
si0=l4;
si1=56U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1807732U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L18;
case 1:
goto L21;
case 2:
goto L20;
case 3:
goto L19;
default:
goto L22;
}
L22:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
f1433(i,si0);
goto L18;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L18;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L18;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L18;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L18;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l6;
f1433(i,si0);
L18:;
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
si0=1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=364U;
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
si0=l3;
si1=l6;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
goto L2;
L16:;
si0=l6;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L15:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si1=l8;
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
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l6;
f1433(i,si0);
L23:;
si0=l2;
si0=!(si0);
if(si0){
goto L25;
}
si0=l8;
si1=l1;
si2=l2;
si3=l3;
si0=f7725(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L24;
}
goto L3;
L25:;
si0=l8;
si1=l1;
si2=l3;
si0=f7729(i,si0,si1,si2);
l10=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=392U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L27:;
{
si0=l6;
if(si0){
goto L28;
}
si0=l10;
l6=si0;
goto L24;
L28:;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l2;
si1=l7;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L26:;
si0=l4;
si1=56U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1215U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1807732U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l6;
f1433(i,si0);
goto L29;
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L29;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L29;
L31:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=0U;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=1U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L29;
}
si0=l6;
si1=0U;
f1440(i,si0,si1);
goto L29;
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l6;
f1433(i,si0);
L29:;
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
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=l3;
si1=l6;
si2=l4;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l6=si0;
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
goto L24;
}
si0=l10;
f7690(i,si0);
L24:;
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
goto L1;
}
si0=l8;
f7690(i,si0);
goto L1;
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=l2;
si0=!(si0);
l5=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l8;
f7690(i,si0);
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
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
goto L1;
}
si0=l2;
f7690(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

void f7735(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=0U;
l5=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
si4=l3;
f7736(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
l5=si0;
goto L2;
L3:;
si0=l2;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=36U;
si0+=si1;
si1=0U;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l5;
si1=16U;
si0+=si1;
l7=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si1=l7;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L4;
}
L6:;
si0=l2;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L4;
L5:;
si0=1803776U;
si1=43U;
si2=1804200U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l6;
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
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
f1433(i,si0);
L7:;
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=788U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
f7720(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
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
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=148U;
si0+=si1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=0U;
si0=f5566(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=132U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=124U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1862528U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=l4;
si3=96U;
si2+=si3;
si3=l3;
f7705(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
f7690(i,si0);
L12:;
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
goto L2;
}
si0=l6;
f7690(i,si0);
goto L2;
L11:;
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
goto L13;
}
si0=l7;
f7690(i,si0);
L13:;
si0=l6;
si1=l6;
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
si0=l6;
f7690(i,si0);
L14:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=960U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si4=l3;
f7736(i,si0,si1,si2,si3,si4);
si0=0U;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
l1=si2;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L8;
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
goto L8;
}
si0=l5;
f7690(i,si0);
goto L8;
L10:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1914132U;
si1=70U;
si2=l4;
si3=80U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
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
si0=!(sj0);
if(si0){
goto L17;
}
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
goto L16;
}
si0=l2;
f7690(i,si0);
goto L16;
L17:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=108U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=1804132U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=2024U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l2=si0;
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
goto L15;
}
si0=l2;
f7690(i,si0);
goto L15;
L16:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
L15:;
si0=l4;
si1=96U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2024U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=1804176U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=2942U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=64U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=364U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L1;
}
si0=l3;
si1=l2;
si2=l4;
si3=64U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L18:;
si0=1U;
l5=si0;
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7736(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si0=i32_load(&i->m0,(U64)si0+1208U);
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
si0=l10;
si1=l12;
si2=l10;
si2=i32_load(&i->m0,(U64)si2+1208U);
l13=si2;
si3=l13;
si4=l11;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l13;
si1=l11;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
si0=l10;
si1=1208U;
si0+=si1;
si1=0U;
sj2=l14;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L6:;
si0=l10;
si1=1216U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+68U);
si0=f13453(i,si0,si1,si2);
l2=si0;
if(si0){
goto L9;
}
si0=0U;
l2=si0;
goto L8;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L8:;
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+1208U);
l11=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1208U,si1);
si0=l11;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l10;
si1=1208U;
si0+=si1;
f1433(i,si0);
L10:;
si0=l2;
if(si0){
goto L5;
}
si0=0U;
l6=si0;
goto L4;
L5:;
si0=l9;
si1=56U;
si0+=si1;
si1=l2;
si0=f9951(i,si0,si1);
l13=si0;
if(si0){
goto L11;
}
goto L4;
L11:;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+28U);
l12=si0;
si1=332U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
if(si0){
goto L13;
}
si0=l12;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l12;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L14:;
{
si0=l2;
if(si0){
goto L15;
}
si0=0U;
l11=si0;
goto L12;
L15:;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l6;
si1=332U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L14;
}
}
L13:;
si0=l12;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L16;
}
si0=l12;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l12;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L17:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l6;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
}
L16:;
si0=l9;
si1=l9;
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
si0=l1;
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
si1=24U;
si0+=si1;
si1=l13;
si2=l1;
si3=l9;
si4=l4;
si5=l11;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l3;
si0=!(si0);
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
goto L1;
}
si0=l3;
f7690(i,si0);
goto L1;
L12:;
si0=l13;
l6=si0;
L4:;
si0=l3;
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si1=36U;
si0+=si1;
si1=0U;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=8U;
si0&=si1;
if(si0){
goto L24;
}
si0=l10;
si1=16U;
si0+=si1;
l13=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l2;
si1=l13;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=l10;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
si0=si0 == si1;
if(si0){
goto L23;
}
L24:;
si0=l2;
si1=0U;
sj2=l14;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L23:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l3;
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
goto L3;
}
si0=l2;
si1=l2;
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
goto L22;
}
si0=l2;
f1433(i,si0);
L22:;
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l8;
si3=l7;
si4=l4;
f7717(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L20;
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
goto L25;
}
si0=l3;
f7690(i,si0);
L25:;
si0=l2;
if(si0){
goto L18;
}
L21:;
si0=0U;
l10=si0;
si0=l6;
if(si0){
goto L19;
}
si0=0U;
l2=si0;
goto L1;
L20:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l10=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l3;
f7690(i,si0);
L26:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l10=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L19:;
si0=l11;
if(si0){
goto L27;
}
si0=l6;
l2=si0;
goto L1;
L27:;
si0=l9;
si1=l9;
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
si0=l1;
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
si1=8U;
si0+=si1;
si1=l6;
si2=l1;
si3=l9;
si4=l4;
si5=l11;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
goto L1;
L18:;
si0=0U;
l10=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
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
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l6;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f7737(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f7738(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=36U;
si0+=si1;
si1=0U;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=8U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si1=16U;
si0+=si1;
l6=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=l6;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l0;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
L3:;
si0=l5;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L1;
L2:;
si0=1803776U;
si1=43U;
si2=1804200U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si1=l0;
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
goto L9;
}
si0=l5;
si1=l5;
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
goto L10;
}
si0=l5;
f1433(i,si0);
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=960U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
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
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
si1=l7;
si2=l1;
si3=l3;
si0=f7723(i,si0,si1,si2,si3);
l5=si0;
goto L11;
L12:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l7;
si3=l1;
si0=f13612(i,si0,si1,si2,si3);
l5=si0;
L11:;
si0=l5;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=740U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
if(si0){
goto L13;
}
si0=l5;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
L13:;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f7723(i,si0,si1,si2,si3);
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
goto L4;
L15:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
si0=f13612(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L4;
}
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l0;
si1=1804279U;
si2=11U;
si3=l5;
si4=l3;
si0=f7724(i,si0,si1,si2,si3,si4);
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
goto L5;
L17:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=1804279U;
si3=11U;
si4=l5;
si0=f13618(i,si0,si1,si2,si3,si4);
l5=si0;
if(si0){
goto L5;
}
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l0;
si1=1804325U;
si2=10U;
si3=l5;
si4=l3;
si0=f7724(i,si0,si1,si2,si3,si4);
l5=si0;
si0=!(si0);
if(si0){
goto L18;
}
goto L6;
L19:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=1804325U;
si3=10U;
si4=l5;
si0=f13618(i,si0,si1,si2,si3,si4);
l5=si0;
if(si0){
goto L6;
}
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l0;
si1=1804369U;
si2=8U;
si3=l5;
si4=l3;
si0=f7724(i,si0,si1,si2,si3,si4);
l3=si0;
si0=!(si0);
if(si0){
goto L20;
}
goto L7;
L21:;
si0=l0;
si1=56U;
si0+=si1;
si1=l3;
si2=1804369U;
si3=8U;
si4=l5;
si0=f13618(i,si0,si1,si2,si3,si4);
l3=si0;
if(si0){
goto L7;
}
L20:;
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
goto L22;
}
si0=l0;
f7690(i,si0);
L22:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
f15042(i);
UNREACHABLE;
L8:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1804216U;
si1=32U;
si2=l4;
si3=12U;
si2+=si3;
si3=1804412U;
si4=1804492U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1804377U;
si1=32U;
si2=l4;
si3=12U;
si2+=si3;
si3=1804412U;
si4=1804428U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1804335U;
si1=34U;
si2=l4;
si3=12U;
si2+=si3;
si3=1804412U;
si4=1804444U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1804290U;
si1=35U;
si2=l4;
si3=12U;
si2+=si3;
si3=1804412U;
si4=1804460U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1804248U;
si1=31U;
si2=l4;
si3=12U;
si2+=si3;
si3=1804412U;
si4=1804476U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f7739(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f15042(i);
UNREACHABLE;
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l6;
si3=1208U;
si2+=si3;
si3=l2;
si4=l3;
si5=l7;
si2=f12275(i,si2,si3,si4,si5);
si3=l4;
f7735(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7740(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=1264U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l4;
si1=1268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l1;
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
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=652U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9951(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l4;
si3=l1;
f7589(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l4;
l7=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L1;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
L22:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L19;
L21:;
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
goto L17;
}
si0=2U;
l5=si0;
si0=l1;
l4=si0;
L20:;
si0=l4;
f7690(i,si0);
L19:;
si0=l5;
switch(si0){
case 0:
goto L16;
case 1:
goto L7;
case 2:
goto L17;
default:
goto L7;
}
L18:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
goto L5;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=912U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9951(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l4;
si3=l1;
f7589(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l4;
l1=si0;
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L29;
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
L29:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L27;
}
goto L26;
L28:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l4=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=2U;
l5=si0;
si0=l1;
l4=si0;
L27:;
si0=l4;
f7690(i,si0);
L26:;
si0=1U;
l4=si0;
si0=l5;
switch(si0){
case 0:
goto L31;
case 1:
goto L15;
case 2:
goto L25;
default:
goto L15;
}
L31:;
si0=0U;
si0=f5566(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=108U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=80U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L10;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
l5=si0;
si0=l4;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
l6=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l4;
f7690(i,si0);
L32:;
si0=l5;
si1=l6;
si0|=si1;
l4=si0;
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
goto L25;
}
si0=l1;
f7690(i,si0);
L25:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l2;
si1=l4;
si0=f7741(i,si0,si1);
l2=si0;
goto L4;
L16:;
si0=0U;
si0=f5566(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=108U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1862528U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l7;
si2=l3;
si3=80U;
si2+=si3;
si3=l2;
f7705(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L35:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=l10;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L34:;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
l2=si0;
si0=l9;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l9;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l2=si0;
L36:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l9;
f7690(i,si0);
L37:;
si0=l7;
si1=l7;
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
si0=l7;
f7690(i,si0);
L38:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+1U,si1);
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
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L33:;
si0=l3;
si1=64U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=1804580U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
f7697(i,si0,si1);
si0=l2;
si1=l3;
si2=40U;
si1+=si2;
si0=f7418(i,si0,si1);
l2=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l9;
f7690(i,si0);
goto L13;
L15:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L14:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
L13:;
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
goto L5;
}
si0=l7;
f7690(i,si0);
goto L5;
L12:;
si0=l0;
si1=256U;
i32_store16(&i->m0,(U64)si0,si1);
goto L5;
L11:;
si0=1914132U;
si1=70U;
si2=l3;
si3=64U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L9:;
si0=l3;
si1=28U;
si2=0U;
f7251(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804508U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1804532U);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804524U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804516U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=28U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l3;
si2=80U;
si1+=si2;
si0=f7580(i,si0,si1);
l2=si0;
goto L4;
L8:;
si0=1914132U;
si1=70U;
si2=l3;
si3=64U;
si2+=si3;
si3=1914204U;
si4=1914300U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L6:;
si0=1851460U;
si1=43U;
si2=1853660U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
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
goto L2;
}
si0=l1;
f7690(i,si0);
goto L2;
L4:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
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
goto L3;
}
si0=l4;
f7690(i,si0);
L3:;
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
goto L2;
}
si0=l1;
f7690(i,si0);
L2:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7741(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l2;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1804632U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
default:
goto L5;
}
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
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
goto L1;
}
si0=l1;
f1433(i,si0);
goto L1;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L1;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
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
goto L1;
}
si0=l1;
f1433(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
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
si0=si0 != si1;
if(si0){
goto L6;
}
f15042(i);
UNREACHABLE;
L6:;
si0=l0;
si1=l1;
si2=l2;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f7742(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
si0=1U;
l8=si0;
goto L5;
L6:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
L5:;
si0=0U;
l9=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si2=l6;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
L7:;
si0=l8;
si1=l9;
si0+=si1;
si1=l10;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l9;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=l6;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l2;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
L8:;
si0=l8;
si1=l6;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=l2;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=48U;
si1+=si2;
f10953(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l8;
si3=8U;
si2+=si3;
si0=f7743(i,si0,si1,si2);
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
goto L9;
}
si0=l5;
f7690(i,si0);
L9:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l1;
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
l5=si0;
si0=!(si0);
if(si0){
goto L5;
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
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+60U);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
L6:;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L8;
}
si0=4U;
l6=si0;
goto L7;
L8:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l5;
if(si0){
goto L10;
}
si0=l7;
l6=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l7;
si1=l5;
si0=f15277(i,si0,si1);
l6=si0;
goto L9;
L11:;
si0=l5;
si0=f15269(i,si0);
l6=si0;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=80U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-1851977428690684601ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1805392U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-786598182489054301ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l4;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l4;
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
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L5:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f15042(i);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
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

void f7744(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l5=si0;
si0=l0;
si1=416U;
si0+=si1;
l6=si0;
si0=l3;
si1=1200U;
si0+=si1;
l7=si0;
si0=l0;
si1=376U;
si0+=si1;
l8=si0;
L3:;
{
si0=l1;
si1=l0;
si2=l3;
si0=f11102(i,si0,si1,si2);
l9=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+192U);
l2=si0;
si1=l2;
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
si0=l7;
si1=l11;
si2=l10;
si3=l2;
si0=f12275(i,si0,si1,si2,si3);
l2=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+376U);
l12=si1;
si2=8U;
si3=l12;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
sj1=l13;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+384U);
l13=sj2;
si3=l2;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l0;
sj3=i64_load(&i->m0,(U64)si3+392U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l14=sj2;
sj3=l13;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l13=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l14;
sj2^=sj3;
sj3=l13;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l9;
f12861(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
f7690(i,si0);
L5:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+376U);
l2=si2;
si3=l2;
si4=8U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+376U,si1);
si0=l2;
if(si0){
goto L6;
}
si0=l8;
si1=0U;
f1431(i,si0,si1);
L6:;
si0=l1;
si1=28U;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7745(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
sj1=l4;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L7:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L11:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l6;
si2=1U;
si1+=si2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
si0=si0 != si1;
l9=si0;
si0=l8;
l6=si0;
si0=l9;
if(si0){
goto L11;
}
}
si0=l5;
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
goto L8;
}
goto L9;
L10:;
si0=0U;
l7=si0;
si0=l5;
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
goto L5;
}
L9:;
si0=l5;
si1=0U;
f1440(i,si0,si1);
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l7;
si2=l2;
f7746(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
sj1=-2ULL;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+8U);
l4=sj2;
sj3=l4;
sj4=-1ULL;
si3=sj3 == sj4;
sj1=si3?sj1:sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+64U);
l10=sj2;
sj3=l10;
sj4=-1ULL;
si3=sj3 == sj4;
l6=si3;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=l4;
sj1=l10;
si2=l6;
sj0=si2?sj0:sj1;
l4=sj0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l7;
f7690(i,si0);
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=25U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1804672U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804664U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804656U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1804648U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=107374182425ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l8;
si2=l3;
si0=f7173(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L3;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L3;
}
si0=l7;
f7690(i,si0);
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f7746(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=56U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=812U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=f9951(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L7;
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
L8:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L5;
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
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=l1;
si2=l2;
si3=l7;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
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
goto L2;
L6:;
si0=l5;
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
goto L3;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=847U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1808168U;
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
si1=l3;
si2=16U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
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
si0=i32_load(&i->m0,(U64)si0+52U);
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
f1433(i,si0);
goto L9;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
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
f1440(i,si0,si1);
goto L9;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
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
f1440(i,si0,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
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
f1433(i,si0);
L9:;
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
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
si1=l5;
si2=l3;
si3=16U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L5:;
si0=1803776U;
si1=43U;
si2=1808132U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1803776U;
si1=43U;
si2=1808116U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=l4;
f7690(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7747(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
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
l5=si0;
si1=1804904U;
si2=7U;
si3=l3;
si0=f12275(i,si0,si1,si2,si3);
si0=l1;
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
si0=l1;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+228U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
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
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=0U;
si0=f7748(i,si0,si1,si2);
l7=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=376U;
si0+=si1;
l6=si0;
si1=l6;
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
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L4:;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=416U;
si1+=si2;
si2=l1;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l8=sj2;
si3=l3;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l1;
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
si3=l3;
si4=l7;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
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
si0=l1;
si1=0U;
si2=l1;
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
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L2:;
si0=l1;
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
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1264U);
l4=si0;
si1=l4;
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
si0=l1;
si1=376U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=8U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L7:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=416U;
si1+=si2;
si2=l1;
si3=384U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l8=sj2;
si3=l3;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l1;
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
si3=l3;
si4=l4;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
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
si0=l1;
si1=0U;
si2=l1;
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
si0=l1;
si1=376U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L6:;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l10=si0;
si0=l1;
si1=416U;
si0+=si1;
l11=si0;
si0=l1;
si1=376U;
si0+=si1;
l12=si0;
L10:;
{
si0=l3;
si1=l1;
si2=l0;
si0=f11102(i,si0,si1,si2);
l7=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
l4=si0;
si1=l4;
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
si0=l5;
si1=l14;
si2=l13;
si3=l4;
si0=f12275(i,si0,si1,si2,si3);
l4=si0;
si0=l1;
si1=l1;
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
si0=l12;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L11:;
si0=l2;
si1=8U;
si0+=si1;
si1=l11;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+384U);
l8=sj2;
si3=l4;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l1;
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
si4=l7;
f12861(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
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
goto L12;
}
si0=l4;
f7690(i,si0);
L12:;
si0=l1;
si1=0U;
si2=l1;
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
goto L13;
}
si0=l12;
si1=0U;
f1431(i,si0,si1);
L13:;
si0=l3;
si1=28U;
si0+=si1;
l3=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f7748(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=4U;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l4=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=72U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=-6979676955750329217ULL;
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
si1=1805212U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-2556902024971124606ULL;
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
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=72U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f7749(rustpythonInstance*i,U32 l0) {
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
sj1=16ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=1822704U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967313ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809432U;
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
si1=1817424U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809600U;
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
si1=1815672U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809639U;
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
si1=1818648U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809720U;
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
si1=1815264U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809726U;
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
si1=1819776U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809732U;
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
si1=1820976U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809738U;
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
si1=1816824U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809744U;
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
si1=1824168U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967302ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809750U;
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
si1=1816680U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=1809678U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f7750(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7153801361348233433ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3921248104688026672ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=31U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=23U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1809670U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1809663U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1809655U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1809647U);
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
i64_store(&i->m0,(U64)si0+76U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
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
si3=72U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
goto L1;
L8:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si3=l1;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
sj1=l8;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L9:;
si0=l7;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L11:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=l1;
si2=1U;
si1+=si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l1;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
si0=si0 != si1;
l6=si0;
si0=l4;
l1=si0;
si0=l6;
if(si0){
goto L11;
}
}
si0=l7;
si1=0U;
si2=l7;
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
goto L4;
}
goto L5;
L10:;
si0=0U;
l5=si0;
si0=l7;
si1=0U;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
l1=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
goto L3;
L7:;
si0=1U;
si1=31U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=l7;
si1=0U;
f1440(i,si0,si1);
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l3;
si1=168U;
si0+=si1;
si1=20U;
si0+=si1;
si1=499U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=168U;
si0+=si1;
si1=12U;
si0+=si1;
si1=847U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=499U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l3;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=164U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=160U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=152U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=144U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=132U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=56U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=120U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=20U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1804700U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si2=168U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
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
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f1433(i,si0);
goto L12;
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L12;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L12;
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L12;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L12;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
f1433(i,si0);
L12:;
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+24U,sj1);
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
f7690(i,si0);
goto L2;
L3:;
si0=l3;
si1=188U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=180U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=499U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=1804740U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=168U;
si1+=si2;
f63(i,si0,si1);
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
if(si0){
goto L17;
}
si0=1U;
l4=si0;
goto L1;
L17:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7751(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7153801361348233433ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3921248104688026672ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L10;
}
si0=l4;
si1=l3;
si2=1807769U;
si3=35U;
si4=l1;
si5=l3;
f7340(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L14;
}
si0=1U;
l7=si0;
goto L13;
L14:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
L13:;
si0=l7;
si1=l6;
si2=l1;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+72U,si1);
goto L11;
L12:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=56U;
si1+=si2;
f9877(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L18;
case 3:
goto L17;
case 4:
goto L16;
default:
goto L20;
}
L20:;
si0=l4;
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
goto L15;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
si1=16U;
si0+=si1;
l1=si0;
goto L15;
L18:;
si0=l4;
si1=20U;
si0+=si1;
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
goto L15;
L17:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=4U;
si0+=si1;
l7=si0;
si0=l4;
si1=16U;
si0+=si1;
l1=si0;
goto L15;
L16:;
si0=l4;
si1=20U;
si0+=si1;
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L22;
}
si0=1U;
l8=si0;
goto L21;
L22:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
L21:;
si0=l8;
si1=l7;
si2=l1;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
switch(si0){
case 0:
goto L11;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
goto L11;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=0U;
si2=l1;
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
goto L11;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L11;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=0U;
si2=l1;
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
goto L11;
}
si0=l1;
si1=0U;
f1440(i,si0,si1);
goto L11;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l4;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1809592U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=2942U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
si1=l1;
si2=l4;
si3=88U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L27:;
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
goto L28;
}
si0=l5;
f7690(i,si0);
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l8;
l1=si0;
L30:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L31;
}
si0=l5;
f7690(i,si0);
L31:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l8;
f15271(i,si0);
L32:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l1;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L33:;
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l8;
l1=si0;
L35:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
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
goto L37;
}
si0=l5;
f7690(i,si0);
L37:;
si0=l1;
si1=20U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L35;
}
}
L34:;
si0=1U;
l5=si0;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
f15271(i,si0);
goto L2;
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=1U;
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si0=f5689(i,si0,si1);
l7=si0;
if(si0){
goto L2;
}
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si3=l1;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
sj1=l9;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L38:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L39:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l1;
si2=1U;
si1+=si2;
si2=l7;
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
l6=si0;
si0=l5;
l1=si0;
si0=l6;
if(si0){
goto L39;
}
}
si0=l2;
si1=0U;
si2=l2;
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
goto L4;
}
goto L5;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=0U;
l7=si0;
si0=l2;
si1=0U;
si2=l2;
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
goto L3;
}
L5:;
si0=l2;
si1=0U;
f1440(i,si0,si1);
L4:;
si0=0U;
l5=si0;
si0=l7;
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
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

void f7752(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7153801361348233433ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3921248104688026672ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=l2;
f7745(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1809631U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1809624U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1809616U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1809608U);
i64_store(&i->m0,(U64)si0,sj1);
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
si0=l3;
sj1=133143986207ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=l1;
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
si0=f7173(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
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

void f7753(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7153801361348233433ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3921248104688026672ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
sj0=513ULL;
l6=sj0;
si0=l3;
si1=255U;
si0&=si1;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
default:
goto L5;
}
L8:;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f8741(i,si0,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l5;
si1=2U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2+9U);
l1=si2;
si3=1U;
si2^=si3;
si3=l1;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+57U,si1);
si0=0U;
l1=si0;
goto L6;
L9:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=1U;
l1=si0;
goto L6;
L7:;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=56U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f8741(i,si0,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l1=si0;
L6:;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load8_u(&i->m0,(U64)si0+57U);
sj1=8ULL;
sj0<<=(sj1&63);
sj1=1ULL;
sj0|=sj1;
l6=sj0;
L5:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L4:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+60U);
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
goto L16;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L12;
case 5:
goto L11;
default:
goto L16;
}
L16:;
si0=l1;
si1=924U;
si0+=si1;
l1=si0;
goto L10;
L15:;
si0=l1;
si1=808U;
si0+=si1;
l1=si0;
goto L10;
L14:;
si0=l1;
si1=964U;
si0+=si1;
l1=si0;
goto L10;
L13:;
si0=l1;
si1=748U;
si0+=si1;
l1=si0;
goto L10;
L12:;
si0=l1;
si1=908U;
si0+=si1;
l1=si0;
goto L10;
L11:;
si0=l1;
si1=780U;
si0+=si1;
l1=si0;
L10:;
si0=l5;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1809712U;
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

void f7754(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
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
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f5887(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l6=si0;
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
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
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
si0=l8;
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
L6:;
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si2=l1;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=264U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
si3=si3 == si4;
si4=l5;
si5=l7;
si0=f8057(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l1;
l2=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l2;
f7690(i,si0);
L3:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
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

void f7755(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L2;
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
L3:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L1;
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
goto L3;
}
}
L2:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
f13306(i,si0,si1,si2);
goto L0;
L4:;
si0=l3;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l3;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f7756(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=l1;
si2=56U;
si1+=si2;
f5519(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L8;
}
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=5U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1919924U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=8U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=1682360U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=1679036U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7757(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L8;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=255ULL;
si0=sj0 > sj1;
if(si0){
goto L8;
}
si0=l0;
sj1=l10;
i64_store8(&i->m0,(U64)si0+1U,sj1);
si0=0U;
l8=si0;
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1913232U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=1U;
l8=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=8U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=1682360U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=1679036U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7758(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f5521(i,si0,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4294967295ULL;
sj0&=sj1;
l10=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L8;
L9:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1919904U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
si0=l0;
si1=l2;
si2=l8;
si3=l4;
si4=24U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L8:;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
goto L1;
L7:;
si0=l0;
si1=l3;
si2=1682360U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=1679036U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7759(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=l1;
si2=56U;
si1+=si2;
f5520(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L8;
}
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1919907U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=8U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=1682360U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=1679036U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7760(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=0U;
si1=si1 != si2;
si0|=si1;
l8=si0;
if(si0){
goto L8;
}
si0=l0;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L8:;
si0=l4;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1919910U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l4;
si4=8U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
si2=1682360U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=1679036U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7761(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L7:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L9;
default:
goto L3;
}
L10:;
si0=l8;
si1=1805040U;
si2=3U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L9:;
si0=l8;
si1=1805048U;
si2=6U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l8=si0;
goto L1;
L8:;
si0=l0;
si1=l3;
si2=1682360U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L4;
L5:;
si0=l0;
si1=l3;
si2=1679036U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
L4:;
si0=1U;
l8=si0;
goto L1;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=42U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=40U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1805094U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1805086U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1805078U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1805070U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1805062U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1805054U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
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
sj1=180388626474ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l0;
si1=l2;
si2=l9;
si3=l4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L12:;
si0=1U;
si1=42U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
f15042(i);
UNREACHABLE;
L2:;
si0=0U;
l8=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7762(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L2;
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
L3:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L1;
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
goto L3;
}
}
L2:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
f13302(i,si0,si1,si2);
goto L0;
L4:;
si0=l3;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l3;
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l1;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f7763(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L6:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=l1;
si2=56U;
si1+=si2;
f5517(i,si0,si1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=4294967295ULL;
sj0&=sj1;
l10=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
goto L8;
L9:;
si0=l4;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1919896U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1215U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=4U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1919934U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
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
si0=l0;
si1=l2;
si2=l8;
si3=l4;
si4=24U;
si3+=si4;
si1=f7173(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
L8:;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
goto L1;
L7:;
si0=l0;
si1=l3;
si2=1682360U;
si3=7U;
si4=l5;
si5=476U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l3;
si2=1679036U;
si3=4U;
si4=l5;
si5=504U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=l6;
si6=l1;
si1=f7151(i,si1,si2,si3,si4,si5,si6);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
f15042(i);
UNREACHABLE;
L2:;
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7764(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
l5=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l5=si0;
L7:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L6:;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L9;
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
L10:;
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
goto L10;
}
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=1807756U;
si3=13U;
si4=l4;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=1U;
l7=si0;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
L9:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=1807756U;
si3=13U;
si4=l4;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L2;
L11:;
si0=l7;
if(si0){
goto L3;
}
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=1807756U;
si3=13U;
si4=l4;
si5=16U;
si4+=si5;
f7605(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L2;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l5=si0;
goto L2;
L5:;
si0=l0;
si1=256U;
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=2U;
l5=si0;
goto L2;
L3:;
si0=1810698U;
l9=si0;
si0=257U;
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l8=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L16;
case 2:
goto L2;
case 3:
goto L12;
case 4:
goto L15;
case 5:
goto L14;
default:
goto L13;
}
L16:;
si0=1U;
l8=si0;
si0=1810898U;
l9=si0;
goto L13;
L15:;
si0=2U;
l8=si0;
si0=1825884U;
l9=si0;
goto L13;
L14:;
si0=2U;
l8=si0;
si0=1825886U;
l9=si0;
L13:;
si0=2U;
l5=si0;
si0=l2;
si1=l1;
si2=l3;
si3=l9;
si4=l8;
si0=f7577(i,si0,si1,si2,si3,si4);
l6=si0;
goto L2;
L12:;
si0=1U;
l5=si0;
L2:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L18;
}
si0=l0;
si1=l6;
si2=l2;
f7740(i,si0,si1,si2);
goto L1;
L18:;
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
goto L1;
L17:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f7765(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=108U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=56U;
si0+=si1;
l7=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
sj1=l8;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L1:;
si0=l1;
si1=60U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=l1;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l1;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l1;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l1;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l1;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l1;
si2=116U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l0;
si1=l4;
si2=8U;
si1+=si2;
si2=l3;
f13651(i,si0,si1,si2);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+108U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l1;
si1=108U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L4:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=1804911U;
si2=60U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f7766(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si1=108U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si3=l3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
sj1=l5;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L1:;
si0=l0;
si1=60U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l1;
si1=l0;
si2=112U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l0;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l1;
si1=l0;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l0;
si2=68U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l0;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l3=si0;
si0=l0;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l3=si0;
si0=l2;
si1=l4;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=54U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-4U;
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
si0=si0 == si1;
if(si0){
goto L2;
}
L4:;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+108U);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l2;
if(si0){
goto L5;
}
si0=l0;
si1=108U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L5:;
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L3:;
si0=l1;
si1=8U;
si0+=si1;
si1=1946396U;
si2=44U;
f13653(i,si0,si1,si2);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f7767(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si0=0U;
l2=si0;
si0=1804971U;
si1=9U;
si2=l0;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l0;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f7700(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L2;
}
si0=1804980U;
si1=10U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+68U);
si0=f7700(i,si0,si1,si2,si3);
l2=si0;
L2:;
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
goto L3;
}
si0=l0;
f7690(i,si0);
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
goto L4;
}
si0=l1;
f7690(i,si0);
L4:;
si0=l2;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f7768(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-4U;
si0+=si1;
l5=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l6;
si0+=si1;
l7=si0;
si0=l6;
si1=-4U;
si0+=si1;
l8=si0;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l8;
if(si0){
goto L5;
}
L6:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l6=si0;
goto L4;
L5:;
si0=l4;
si1=l8;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
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
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L8:;
{
si0=l0;
si1=l0;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=2147483646U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=-4U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=2U;
si0<<=(si1&31);
l6=si0;
L10:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=l6;
si0+=si1;
l7=si0;
si0=l6;
si1=-4U;
si0+=si1;
l8=si0;
l6=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=l8;
si0+=si1;
si1=-4U;
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
goto L2;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
goto L11;
}
si0=l0;
f7690(i,si0);
L11:;
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
goto L12;
}
si0=l0;
f7690(i,si0);
L12:;
si0=l6;
l0=si0;
si0=l6;
si0=f7767(i,si0);
if(si0){
goto L8;
}
goto L4;
L9:;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
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
goto L13;
}
si0=l0;
f7690(i,si0);
L13:;
si0=l0;
l6=si0;
L4:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L3:;
si0=1809133U;
si1=24U;
si2=l2;
si3=8U;
si2+=si3;
si3=1809160U;
si4=1809200U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=1809133U;
si1=24U;
si2=l2;
si3=8U;
si2+=si3;
si3=1809160U;
si4=1809200U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f7769(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969752U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969756U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8543856257936903781ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6837836302095031303ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7770(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-93971722028433032ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2390353658247002732ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7771(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5647883775983416143ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1569655123884046800ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7772(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8433930480299741807ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1156462258252325731ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7773(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4655076564838057917ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7196235888942362557ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7774(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=917829462180078157ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1556244773417043998ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7775(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=224U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7528136224272806065ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2646639984297676768ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7776(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969244U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969248U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7534083915750282801ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1401055887256743456ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7777(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970344U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1118695287151051108ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5031563166105938820ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1896505U;
si1=36U;
si2=1896556U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7778(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6654878835304983675ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6060419710178097712ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7779(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971212U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971216U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7612993033571494785ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-558555355215288048ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1953312U;
si1=36U;
si2=1953364U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7780(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=208U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8604045573327700528ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3099815236214414649ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7781(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969312U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969316U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6200305950221648001ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=29133077723413100ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7782(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1246873079362706361ULL;
sj0^=sj1;
si1=l5;
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
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7783(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
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
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7784(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972344U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4650341559061582816ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4708108938995935067ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1975972U;
si1=36U;
si2=1976024U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7785(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969252U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969256U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7215485279141357787ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2151535569456304994ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7786(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3910224509665732655ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4416665720204124091ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7787(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=212U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4069283891877766178ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7265653079111867781ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7788(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=252U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7991598859829275278ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1415387282674118076ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7789(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4654929921538688451ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6463729526634730258ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7790(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-9154816648712387004ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-35459604691587403ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7791(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969340U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969344U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6996622280167385893ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2470723980963297874ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7792(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=180U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7341904821385102439ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=9174914737516211374ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7793(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1895317219442546468ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4790460729189748344ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7794(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4052645416475884584ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2470913788035654428ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7795(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969228U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969232U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1391140019264218756ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1104844118896335946ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7796(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=216U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3614384654213189989ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5207385733189833471ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7797(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4356300177700950365ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=289381155511592051ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7798(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-3898019102480328733ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-658055710957078173ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7799(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971148U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971152U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5312228270125739206ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=57167679203732530ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1953312U;
si1=36U;
si2=1953364U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7800(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-653005602437147053ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4170606783940748660ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7801(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6979522882521804547ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3115833051707837487ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7802(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969220U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969224U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-3325270472894009493ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7523894612251438480ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7803(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5743334363218442881ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4024939521048349606ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7804(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969236U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969240U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7259629743280276639ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6175240624422745213ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7805(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6979676955750329217ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2556902024971124606ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7806(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971124U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971128U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2174991154754609563ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8815740060872058926ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1953312U;
si1=36U;
si2=1953364U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7807(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2187663559702001040ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4730935401355693026ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7808(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5416430769165163171ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6413089843220384395ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7809(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971068U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971072U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1009842477581235630ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1723853153252522499ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1953312U;
si1=36U;
si2=1953364U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7810(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=312U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2178613045928566244ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6045686839737550963ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7811(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971116U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971120U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7109097938613701040ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5116033385763904124ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1953312U;
si1=36U;
si2=1953364U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7812(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5063891382290364191ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7362346016008874515ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7813(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971164U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2971168U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5363385292590379113ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7987555861254270144ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1953312U;
si1=36U;
si2=1953364U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7814(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970172U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970176U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7904060838892864797ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5422378634715988645ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1881832U;
si1=36U;
si2=1881884U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7815(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970348U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970352U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7824762428631794743ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5026423977985682956ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1896505U;
si1=36U;
si2=1896556U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7816(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=9024503573531541330ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2795553761968856952ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7817(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-1851977428690684601ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-786598182489054301ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7818(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4789675353184023105ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1192269247476766825ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7819(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969260U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969264U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1417923599628355992ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9163085183622391661ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7820(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2375854249886938204ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5533592659421419889ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7821(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7483199171657607318ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4762732325281182748ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7822(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-39138388199197485ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8625686262579844249ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7823(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969268U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969272U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6328808079949154614ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9035662525533999570ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7824(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3806378391372854927ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2345574490600401742ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7825(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969304U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969308U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5776485299507707401ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4815600577594439655ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1649248U;
si1=36U;
si2=1649300U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7826(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=204U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2552335700810442878ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5095604218408327037ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7827(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969700U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2969704U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7788367115254329034ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5852094921266922914ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L8:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L5:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
si0=1837556U;
si1=36U;
si2=1837608U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f7828(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L3:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l5;
f7690(i,si0);
L1:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f7829(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8999910300027678653ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8621670557023078337ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l1;
si1=1682360U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
L7:;
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L4:;
si0=l1;
si1=1679036U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}


#include "w2c2_base.h"

#include "rustpython.h"

void f13930(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
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
f8177(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l3;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112064U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=128U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=0U;
l5=si0;
si0=1407U;
l6=si0;
si0=1407U;
l7=si0;
L8:;
{
si0=-1U;
si1=l6;
si2=1U;
si1>>=(si2&31);
si2=l5;
si1+=si2;
l6=si1;
si2=3U;
si1<<=(si2&31);
si2=1123756U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=l3;
si1=si1 != si2;
si2=l8;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
l7=si0;
goto L9;
L10:;
si0=l8;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
L9:;
si0=l7;
si1=l5;
si0-=si1;
l6=si0;
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L8;
}
goto L4;
}
L7:;
si0=l3;
si1=-65U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
l5=si0;
goto L5;
L6:;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=1123760U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=105U;
si2=l5;
si3=55296U;
si2^=si3;
si3=-2048U;
si2+=si3;
si3=1112064U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=105U;
si2=l5;
si3=1114112U;
si2=si2 != si3;
si0=si2?si0:si1;
l5=si0;
L5:;
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
goto L3;
L4:;
si0=l3;
si0=f14646(i,si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l7;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si1=1276U;
si0+=si1;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=1272U;
si0+=si1;
l3=si0;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
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

void f13931(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
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
f8074(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
l2=si0;
goto L3;
L4:;
si0=l3;
si1=56U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l6=sd0;
si1=l3;
si2=64U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
l7=sd1;
sd0=f15125(i,sd0,sd1);
l8=sd0;
sd0=l6;
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L7;
}
sd0=l7;
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L7;
}
sd0=l8;
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L6;
}
L7:;
si0=0U;
l5=si0;
sd0=l8;
si1=l2;
si0=f9033(i,sd0,si1);
l2=si0;
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=24U;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17648424U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17648416U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17648408U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=352U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=103079215128ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l11;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l10;
si2=l4;
si3=20U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l2=si0;
L5:;
si0=l3;
si1=l3;
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
si0=1U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13932(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
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
f8118(i,si0,si1,si2);
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
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l3;
si2=460U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
si2=l3;
si3=468U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=36U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f8404(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
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
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
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

void f13933(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=l3;
si2=l2;
f7824(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=20U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
si2=l4;
si3=16U;
si2+=si3;
si3=0U;
si4=l2;
f13650(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13934(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5052060429243103242ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3024658512916775759ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
si0=si0 != si1;
if(si0){
goto L8;
}
f14795(i);
UNREACHABLE;
L9:;
si0=l6;
si1=l2;
si0=f8874(i,si0,si1);
l6=si0;
L8:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13935(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5052060429243103242ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3024658512916775759ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13936(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7638191173155743497ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9003393767556397769ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l2;
si0=f8612(i,sj0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13937(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662596U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662600U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7199036073551979141ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8334505321947425047ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f8550(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13938(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662596U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662600U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7199036073551979141ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8334505321947425047ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13939(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
F64 sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4050155162030272185ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4233016263971513691ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=64U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
si1=l2;
si0=f9033(i,sd0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13940(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7638191173155743497ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9003393767556397769ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si0=f13494(i,si0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13941(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5052060429243103242ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3024658512916775759ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l5;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
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
si0=si0 != si1;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1280U;
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
goto L1;
}
L9:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13942(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662596U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662600U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7199036073551979141ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8334505321947425047ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=92U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=l2;
si0=f8883(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13943(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662596U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662600U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7199036073551979141ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=8334505321947425047ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=72U;
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
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13944(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4263007291826056010ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7753529647711480239ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=60U;
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
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13945(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3094261871248017608ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6099564375385214341ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13946(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
F64 sd0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4050155162030272185ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4233016263971513691ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+56U);
si1=l2;
si0=f9033(i,sd0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13947(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5052060429243103242ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3024658512916775759ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L10;
}
si0=4U;
l5=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=0U;
l6=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l8;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
f12617(i,si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l7=si0;
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
L4:;
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l7;
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
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=4U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13948(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7638191173155743497ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9003393767556397769ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si0=f13599(i,si0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13949(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5052060429243103242ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3024658512916775759ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f8550(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13950(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4263007291826056010ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7753529647711480239ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l5;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l5;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l8=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=17642799U;
si3=7U;
si4=l2;
f6034(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13951(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5052060429243103242ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3024658512916775759ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f8550(i,si0,si1);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13952(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-527864875366221210ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2155143486853174264ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13953(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
l4=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5052060429243103242ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3024658512916775759ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
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
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=60U;
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
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
f5522(i,si0);
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13954(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=260U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4263007291826056010ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7753529647711480239ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
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
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13955(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7638191173155743497ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9003393767556397769ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si0=f13592(i,si0,si1);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f5522(i,si0);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13956(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-527864875366221210ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2155143486853174264ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l2;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l4;
si1=1280U;
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
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
f5522(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f13957(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=8U;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=l3;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L1:;
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
goto L7;
}
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
si1=l1;
si0=f13114(i,si0,si1);
l2=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=8U;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L8;
}
si0=l0;
si1=0U;
f1352(i,si0,si1);
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l2;
si1=16U;
si0+=si1;
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
goto L4;
L7:;
f14795(i);
UNREACHABLE;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-2147483648U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
l2=si0;
goto L3;
L5:;
si0=l0;
si1=0U;
sj2=l3;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L4:;
si0=l4;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f13119(i,si0,si1,si2);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l0;
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
goto L3;
}
si0=l0;
f1354(i,si0);
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
goto L9;
}
si0=l1;
f5522(i,si0);
L9:;
si0=l2;
goto L0;
L2:;
si0=17647772U;
si1=17U;
si2=17647808U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f13958(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
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
si0=0U;
l4=si0;
si0=l3;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si2=0U;
si0=f5913(i,si0,si1,si2);
l4=si0;
L3:;
si0=l0;
si1=l3;
si2=l4;
si0=f5955(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f13959(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
f8723(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f13960(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si1=328U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L4;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L3;
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
si1=328U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l4;
si2=l2;
si3=l6;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L2;
L3:;
si0=l3;
si1=48U;
si0+=si1;
si1=l4;
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
si1=17647960U;
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
goto L6;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
default:
goto L10;
}
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
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
goto L6;
}
si0=l1;
f1354(i,si0);
goto L6;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
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
goto L6;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L6;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=0U;
si2=l1;
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
goto L6;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
goto L6;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si1=l1;
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
goto L6;
}
si0=l1;
f1354(i,si0);
L6:;
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
l1=si0;
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
goto L1;
}
si0=l2;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
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

void f13961(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l3=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L7:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l2;
si1=80U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l1;
si1=16U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+80U);
l3=si2;
si3=l3;
si4=l1;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l4;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L3:;
si0=l2;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L10;
}
si0=0U;
l1=si0;
goto L9;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L8;
}
L9:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+80U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=80U;
si0+=si1;
f1354(i,si0);
L11:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
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
goto L2;
}
si0=l2;
f5522(i,si0);
goto L0;
L8:;
f14795(i);
UNREACHABLE;
L2:;
L0:;
}

void f13962(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=l1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l3=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L5:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l6;
si1=l5;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
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
f5522(i,si0);
goto L0;
L3:;
si0=l4;
si1=336U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l3=si1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L10:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l6;
si1=l5;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si1=80U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=8U;
si0&=si1;
if(si0){
goto L7;
}
si0=l1;
si1=16U;
si0+=si1;
l6=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=l6;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+80U);
l3=si2;
si3=l3;
si4=l1;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L7:;
si0=l5;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1353(i,si0,si1,sj2,si3);
L6:;
si0=l2;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=0U;
l1=si0;
goto L12;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L11;
}
L12:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+80U);
l3=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=80U;
si0+=si1;
f1354(i,si0);
L14:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
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
goto L2;
}
si0=l2;
f5522(i,si0);
goto L0;
L11:;
f14795(i);
UNREACHABLE;
L2:;
L0:;
}

void f13963(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
if(si0){
goto L5;
}
si0=4U;
l5=si0;
si0=0U;
l6=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=4U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l6=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=340U;
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
goto L2;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l2;
si2=l4;
si3=4U;
si2+=si3;
si0=f11868(i,si0,si1,si2);
l2=si0;
L3:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13964(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
si2=l3;
f13797(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
l1=si0;
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L1;
default:
goto L3;
}
L4:;
si0=0U;
l1=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
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
goto L2;
}
si0=l4;
f5522(i,si0);
goto L2;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l5;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l5;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L8:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l8;
si1=l7;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l4;
l1=si0;
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
si0=!(sj0);
if(si0){
goto L2;
}
si0=l3;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l4;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l1=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L5;
L6:;
si0=l3;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l4;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l1=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L5:;
si0=l4;
f5522(i,si0);
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l1;
si0=!(si0);
si1=1U;
si0<<=(si1&31);
l5=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13965(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=l3;
f13797(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
case 2:
goto L5;
default:
goto L6;
}
L6:;
si0=l2;
si1=20U;
si0+=si1;
si1=l3;
si2=l1;
f7353(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
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
goto L7;
}
si0=l1;
f5522(i,si0);
L7:;
si0=l3;
if(si0){
goto L3;
}
si0=l5;
l1=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=0U;
l3=si0;
si0=l1;
si0=!(si0);
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
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
f5522(i,si0);
goto L1;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=1U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13966(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L9;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
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
goto L2;
}
goto L3;
L9:;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=1U;
l5=si0;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
L10:;
si0=l5;
si1=l7;
si2=l6;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
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
goto L1;
}
si0=l2;
f5522(i,si0);
goto L0;
L6:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
f5522(i,si0);
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
L0:;
}

U32 f13967(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
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
goto L4;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l5;
si3=1216U;
si2+=si3;
si3=17648132U;
si4=8U;
si5=l6;
si2=f9632(i,si2,si3,si4,si5);
si3=0U;
si4=0U;
f11341(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L9;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=17648140U;
si3=4U;
si4=l3;
f6034(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
if(si0){
goto L11;
}
si0=l0;
si1=l0;
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
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=12U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l9=si0;
si0=l5;
si1=l2;
si2=l3;
si1=f8550(i,si1,si2);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L13;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l10=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l11=sj0;
goto L12;
L13:;
si0=l4;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l0=si0;
if(si0){
goto L2;
}
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
l10=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l11=sj0;
L12:;
si0=l4;
si1=84U;
si0+=si1;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=0U;
sj1=l11;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l4;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l4;
si1=17359936U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=l4;
si3=32U;
si2+=si3;
si3=l3;
f5537(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
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
goto L14;
}
si0=l3;
f5522(i,si0);
L14:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L10;
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
goto L1;
}
si0=l6;
f5522(i,si0);
goto L1;
L11:;
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
goto L7;
}
L10:;
si0=l7;
f5522(i,si0);
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
goto L8;
}
si0=l6;
f5522(i,si0);
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
goto L5;
L9:;
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
goto L6;
}
goto L5;
L8:;
si0=l8;
if(si0){
goto L5;
}
goto L1;
L7:;
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
goto L5;
}
L6:;
si0=l6;
f5522(i,si0);
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L1;
L4:;
f14795(i);
UNREACHABLE;
L3:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si1=l0;
i32_store16(&i->m0,(U64)si0+110U,si1);
si0=17683216U;
si1=18U;
si2=l4;
si3=110U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

U32 f13968(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=7U;
si0+=si1;
si1=l1;
si2=7U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
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
si0=l0;
si1=1208U;
si0+=si1;
si1=l1;
si2=11U;
si3=l6;
si0=f9632(i,si0,si1,si2,si3);
l1=si0;
si0=l4;
si1=60U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+296U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=16U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
sj1=47244640267ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
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
si0=l4;
si1=8U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=76U;
si0+=si1;
si1=l0;
si2=0U;
si0=f5913(i,si0,si1,si2);
l3=si0;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si0=f5910(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L3:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f13969(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L6;
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
L7:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3094261871248017608ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6099564375385214341ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
goto L4;
L8:;
si0=l2;
si1=60U;
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
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L5:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
L4:;
si0=l2;
si1=l2;
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
goto L2;
}
L3:;
si0=l2;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13970(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l1;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=228U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=3094261871248017608ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6099564375385214341ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l3;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
goto L5;
L6:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l3;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=l2;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l2;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
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
si0=si0 != si1;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l3;
si1=1280U;
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
goto L1;
}
L9:;
si0=0U;
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
goto L2;
}
L3:;
si0=l2;
f5522(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f13971(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U64 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si3=l1;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=l2;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
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
goto L2;
}
L3:;
si0=l0;
si1=0U;
si2=l0;
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
goto L4;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
L4:;
si0=l1;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

void f13972(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si3=l2;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=l3;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
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
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f5522(i,si0);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
si2=l0;
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
goto L3;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
L3:;
L0:;
}

void f13973(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=0U;
l3=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L2;
}
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l6;
si1=l6;
si2=4U;
si1+=si2;
l7=si1;
si2=l4;
si3=-1U;
si2+=si3;
l8=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
l9=si0;
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l12=si1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l12;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l12;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L8:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
si0=l13;
si1=l11;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7638191173155743497ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9003393767556397769ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l10;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l11;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l10;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l11;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l6=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
L5:;
si0=l5;
f5522(i,si0);
L4:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l9;
si1=l7;
si2=l4;
si3=-2U;
si2+=si3;
l6=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+56U,si1);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f13974(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l3=si0;
if(si0){
goto L1;
}
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l4=si0;
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l1;
si1=f8550(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f13975(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=1U;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si2=1276U;
si3=l0;
si1=si3?si1:si2;
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
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
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
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l5;
si1=l7;
si2=l1;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
si2=l6;
si3=8U;
si2+=si3;
si1=f8912(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L4:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
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

U32 f13976(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L4;
}
si0=l5;
si1=1280U;
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
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l5=si0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L6;
}
si0=l6;
si1=1280U;
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
goto L5;
L6:;
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l6=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
if(si0){
goto L8;
}
si0=l7;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
goto L7;
L8:;
si0=l0;
si1=36U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
si0=f8912(i,si0,si1);
l0=si0;
L7:;
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=4U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
return si0;
}

U32 f13977(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=16U;
si0=f15022(i,si0);
l3=si0;
if(si0){
goto L1;
}
si0=4U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0=f8550(i,si0,si1);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0=f8550(i,si0,si1);
l6=si0;
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l1;
si1=f8550(i,si1,si2);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=17179869188ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l3=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f13978(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l7=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l8=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
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
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L17;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l8;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l6;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l6;
si1=l6;
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
goto L3;
L17:;
si0=l7;
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-2U;
si2+=si3;
l10=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L12;
L18:;
si0=l2;
si1=17651398U;
si2=8U;
si0=f13786(i,si0,si1,si2);
l7=si0;
if(si0){
goto L12;
}
si0=0U;
l7=si0;
goto L11;
L14:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l8;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l6;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L13:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=220U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l10;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l10;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L20:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0=si0 != si1;
if(si0){
goto L20;
}
}
L19:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7638191173155743497ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9003393767556397769ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
si0=l1;
si1=17462072U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l7;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
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
goto L9;
}
goto L8;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l11;
si3=-1U;
si2+=si3;
l11=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L6;
L10:;
si0=l1;
si1=17462079U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l9;
si5=l7;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l5=si0;
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
goto L8;
}
L9:;
si0=l7;
f5522(i,si0);
L8:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
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
goto L1;
}
si0=l6;
f5522(i,si0);
goto L1;
L7:;
si0=l2;
si1=17651406U;
si2=10U;
si0=f13786(i,si0,si1,si2);
l10=si0;
if(si0){
goto L6;
}
goto L5;
L6:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l10;
f14434(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L21;
case 1:
goto L22;
case 2:
goto L5;
default:
goto L21;
}
L22:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L23;
}
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
goto L23;
}
si0=l7;
f5522(i,si0);
L23:;
si0=l6;
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
goto L1;
}
si0=l6;
f5522(i,si0);
goto L1;
L21:;
si0=0U;
l10=si0;
si0=1U;
if(si0){
goto L4;
}
L5:;
si0=1U;
l10=si0;
L4:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l6;
f5522(i,si0);
L2:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13979(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=17650268U;
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
si2=17650276U;
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

U32 f13980(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662644U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=18662620U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f6737(i,si0,si1);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662620U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=252U;
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
goto L4;
}
si0=0U;
l5=si0;
si0=l4;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L6:;
si0=18662620U;
si1=l2;
si2=l4;
si3=l5;
si0=f5989(i,si0,si1,si2,si3);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
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
goto L4;
}
L7:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l2;
si2=l4;
si3=l0;
f5569(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
si0=f13981(i,si0,si1);
si0=l1;
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
f14795(i);
UNREACHABLE;
L3:;
si0=17623824U;
si1=43U;
si2=17624264U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=17623824U;
si1=43U;
si2=17624280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f13981(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l0;
si0=f5563(i,si0,si1);
l3=si0;
if(si0){
goto L10;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662596U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=18662596U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f6685(i,si0,si1);
L11:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662600U);
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=17644834U;
si2=4U;
f8911(i,si0,si1,si2);
si0=l4;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l3;
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
goto L12;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L12:;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=384U;
si1+=si2;
si2=l5;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l4;
f5522(i,si0);
L13:;
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
goto L14;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l1;
si1=l5;
si2=1216U;
si1+=si2;
si2=17644827U;
si3=7U;
si4=l4;
si1=f9632(i,si1,si2,si3,si4);
si2=l3;
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L7;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=18662604U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f6675(i,si0,si1);
L15:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=17644834U;
si2=4U;
f8911(i,si0,si1,si2);
si0=l4;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l3;
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
goto L16;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L16:;
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=384U;
si1+=si2;
si2=l5;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L17;
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
goto L17;
}
si0=l4;
f5522(i,si0);
L17:;
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
goto L18;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l1;
si1=l5;
si2=1216U;
si1+=si2;
si2=17644849U;
si3=5U;
si4=l4;
si1=f9632(i,si1,si2,si3,si4);
si2=l3;
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L6;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662612U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=18662612U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f6749(i,si0,si1);
L19:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662616U);
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=948U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=17644834U;
si2=4U;
f8911(i,si0,si1,si2);
si0=l4;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5980(i,si0,si1,si2);
l7=si0;
si0=l3;
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
goto L20;
}
si0=l6;
sj1=l8;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L20:;
si0=l2;
si1=l3;
si2=384U;
si1+=si2;
si2=l5;
si3=l7;
f13785(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L21;
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
goto L21;
}
si0=l4;
f5522(i,si0);
L21:;
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
goto L22;
}
si0=l3;
si1=376U;
si0+=si1;
si1=0U;
f1352(i,si0,si1);
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l1;
si1=l5;
si2=1216U;
si1+=si2;
si2=17644838U;
si3=11U;
si4=l4;
si1=f9632(i,si1,si2,si3,si4);
si2=l3;
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
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
goto L8;
}
si0=l1;
si1=l6;
si2=1216U;
si1+=si2;
si2=17650762U;
si3=5U;
si4=l3;
si1=f9632(i,si1,si2,si3,si4);
si2=20171005U;
si3=l0;
si2=f8550(i,si2,si3);
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
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
goto L8;
}
si0=l6;
si1=1216U;
si0+=si1;
si1=17650767U;
si2=8U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=1316U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=1308U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+36U);
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
goto L8;
}
si0=l1;
si1=l4;
si2=l3;
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
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
goto L8;
}
si0=l1;
si1=l6;
si2=1216U;
si1+=si2;
si2=17650775U;
si3=9U;
si4=l3;
si1=f9632(i,si1,si2,si3,si4);
si2=536870911U;
si3=l0;
si2=f8550(i,si2,si3);
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
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
goto L8;
}
si0=l1;
si1=l6;
si2=1216U;
si1+=si2;
si2=17650784U;
si3=9U;
si4=l3;
si1=f9632(i,si1,si2,si3,si4);
si2=-2U;
si3=l0;
si2=f8550(i,si2,si3);
si3=l0;
si0=f5565(i,si0,si1,si2,si3);
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17650436U;
si4=17650796U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17650436U;
si4=17650472U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L8:;
f14795(i);
UNREACHABLE;
L7:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17650436U;
si4=17650472U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17650436U;
si4=17650472U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17650436U;
si4=17650472U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=9U;
si1=l6;
si2=17374084U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17650436U;
si4=17650844U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17650436U;
si4=17650828U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=24U;
si2+=si3;
si3=17650436U;
si4=17650812U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f13982(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=22U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17650488U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17645660U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967307ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17650510U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=26U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17650521U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17645924U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967309ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17650547U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=l2;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=28U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17650560U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17645876U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967311ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17650588U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si1=l2;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=26U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17650603U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17645060U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967309ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17650629U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=l2;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=28U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17650642U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17645612U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967311ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17650670U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l2;
f8727(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si1=70U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=17650685U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=17645252U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=4294967303ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=17650755U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f13983(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L5;
L6:;
si0=l2;
si1=17650860U;
si2=6U;
si0=f13786(i,si0,si1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L3;
L7:;
si0=l2;
si1=17650866U;
si2=3U;
si0=f13786(i,si0,si1,si2);
l7=si0;
if(si0){
goto L3;
}
si0=0U;
l4=si0;
goto L2;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l7;
f14426(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=0U;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L8;
case 1:
goto L9;
case 2:
goto L2;
default:
goto L8;
}
L9:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
si0=l6;
f5522(i,si0);
goto L1;
L8:;
si0=l5;
l4=si0;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l8;
si3=-1U;
si2+=si3;
l8=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L11;
L12:;
si0=l2;
si1=17650869U;
si2=6U;
si0=f13786(i,si0,si1,si2);
l7=si0;
if(si0){
goto L11;
}
si0=2147483647U;
l2=si0;
goto L10;
L11:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l7;
f14426(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=2147483647U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L13;
case 1:
goto L14;
case 2:
goto L10;
default:
goto L13;
}
L14:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
si0=l6;
f5522(i,si0);
goto L1;
L13:;
si0=l1;
l2=si0;
L10:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13984(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L2;
L3:;
si0=l2;
si1=17650875U;
si2=4U;
si0=f13786(i,si0,si1,si2);
l6=si0;
if(si0){
goto L4;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
L2:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l7;
si1=l7;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L8;
L9:;
si0=l2;
si1=17650860U;
si2=6U;
si0=f13786(i,si0,si1,si2);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
L8:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l7;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L6;
L10:;
si0=l2;
si1=17650879U;
si2=5U;
si0=f13786(i,si0,si1,si2);
l8=si0;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L5;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
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
goto L1;
}
si0=l6;
f5522(i,si0);
goto L1;
L6:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l8;
f14426(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=0U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L11;
case 1:
goto L12;
case 2:
goto L5;
default:
goto L11;
}
L12:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
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
goto L13;
}
si0=l5;
f5522(i,si0);
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
goto L1;
}
si0=l6;
f5522(i,si0);
goto L1;
L11:;
si0=l4;
l2=si0;
L5:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13985(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L5;
L6:;
si0=l2;
si1=17650860U;
si2=6U;
si0=f13786(i,si0,si1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
si2=l4;
si3=-1U;
si2+=si3;
l4=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L3;
L7:;
si0=l2;
si1=17650884U;
si2=8U;
si0=f13786(i,si0,si1,si2);
l7=si0;
if(si0){
goto L3;
}
si0=0U;
l2=si0;
goto L2;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l7;
f14430(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=0U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L8;
case 1:
goto L9;
case 2:
goto L2;
default:
goto L8;
}
L9:;
si0=l0;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L1;
}
si0=l6;
f5522(i,si0);
goto L1;
L8:;
si0=l4;
l2=si0;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13986(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l3;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0|=si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=l4;
si2=17314629U;
si3=35U;
si4=l5;
si5=88U;
si4+=si5;
si5=l3;
si6=l1;
si7=l4;
si4=f13910(i,si4,si5,si6,si7);
l1=si4;
si5=l4;
f11542(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l5;
si1=80U;
si0+=si1;
si1=1985U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=60U;
si0+=si1;
si1=12U;
si0+=si1;
si1=49U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=36U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si1=49U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=17651208U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l5;
si2=84U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
f64(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si1=l4;
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
si0=l5;
si0=i32_load(&i->m0,(U64)si0+84U);
f5522(i,si0);
L8:;
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
goto L9;
}
si0=l1;
f5522(i,si0);
L9:;
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l6=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L5;
}
si0=l1;
f5522(i,si0);
goto L5;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=15U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=7U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17650899U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17650892U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=64424509455ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l4;
si2=l5;
si3=60U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L5:;
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=0U;
si1=0U;
si2=17651240U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=17639407U;
si1=43U;
si2=17651256U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=15U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13987(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=52U;
si0+=si1;
si1=l2;
si2=l1;
f13151(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+92U);
l2=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=8U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=28U;
si0+=si1;
l6=si0;
si1=l5;
si2=52U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l5;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+93U);
i32_store16(&i->m0,(U64)si0+49U,si1);
si0=l5;
si1=l2;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=l3;
si3=l4;
f13214(i,si0,si1,si2,si3);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l0;
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
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
f5522(i,si0);
L3:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
f15024(i,si0);
L4:;
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13988(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=1U;
l11=si0;
si0=1U;
l5=si0;
L3:;
{
si0=l11;
si1=l9;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
goto L5;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l10;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=l12;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l5;
f8724(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l5;
si1=l12;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l5;
f8724(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=2U;
si0+=si1;
l11=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f13989(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662672U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=18662648U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
f6629(i,si0,si1);
L1:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662648U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=252U;
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
si0=0U;
l5=si0;
si0=l4;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
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
si0=l1;
si1=8U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=12U;
si0+=si1;
si1=l3;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L7:;
si0=18662648U;
si1=l2;
si2=l4;
si3=l5;
si0=f5989(i,si0,si1,si2,si3);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
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
goto L5;
}
L8:;
si0=l5;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l2;
si2=l4;
si3=l0;
f5569(i,si0,si1,si2,si3);
si0=l5;
si1=l0;
si0=f5563(i,si0,si1);
l0=si0;
if(si0){
goto L2;
}
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L6:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f14795(i);
UNREACHABLE;
L4:;
si0=17623824U;
si1=43U;
si2=17624264U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=17623824U;
si1=43U;
si2=17624280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17644236U;
si1=43U;
si2=l1;
si3=12U;
si2+=si3;
si3=17650436U;
si4=17651300U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f13990(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=l0;
si0=f5563(i,si0,si1);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=17644236U;
si1=43U;
si2=l2;
si3=12U;
si2+=si3;
si3=17650436U;
si4=17651300U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

void f13991(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l3=si2;
si1-=si2;
l4=si1;
si2=2U;
si1>>=(si2&31);
l5=si1;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l7=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l7;
l6=si0;
goto L1;
L4:;
si0=l7;
si1=l2;
si0-=si1;
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l7;
l6=si0;
goto L2;
L5:;
si0=l0;
si1=l2;
si2=l5;
f8743(i,si0,si1,si2);
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l2=si1;
si0-=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
goto L2;
L3:;
si0=17652111U;
si1=17U;
si2=17653064U;
f634(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l7;
si1=l8;
si0-=si1;
l9=si0;
si1=l2;
si2=l9;
si1-=si2;
l10=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l6;
si1=l7;
si0-=si1;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L6;
}
L7:;
si0=l8;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l6;
si2=l9;
si1-=si2;
l8=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si2=l7;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l6;
si2=l8;
si3=l2;
si2+=si3;
l8=si2;
si3=0U;
si4=l6;
si5=l8;
si6=l6;
si5=si5 < si6;
si3=si5?si3:si4;
si2-=si3;
l8=si2;
si1-=si2;
l6=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l7;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=l6;
si3=2U;
si2<<=(si3&31);
l8=si2;
si0=f15143(i,si0,si1,si2);
si0=l7;
si1=l3;
si2=l8;
si1+=si2;
si2=l5;
si3=l6;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L8;
L9:;
si0=l7;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=l4;
si0=f15143(i,si0,si1,si2);
L8:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
L0:;
}

void f13992(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f13993(i,si0);
UNREACHABLE;
L0:;
}

void f13993(rustpythonInstance*i,U32 l0) {
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
si1=17652204U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f13994(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
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

U32 f13995(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17675001U;
si2=23U;
si3=17674828U;
si4=4U;
si5=l0;
si6=17674860U;
si7=17674832U;
si8=7U;
si9=l0;
si10=12U;
si9+=si10;
si10=17674876U;
si11=17674845U;
si12=6U;
si13=l0;
si14=28U;
si13+=si14;
si14=17675024U;
si15=17669408U;
si16=1U;
si17=l0;
si18=44U;
si17+=si18;
si18=17674908U;
si19=17674851U;
si20=9U;
si21=l2;
si22=12U;
si21+=si22;
si22=17674924U;
si0=f672(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f13996(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675712U;
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

U32 f13997(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17674788U;
si2=21U;
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
si1=17666006U;
si2=9U;
si3=l0;
si4=17666016U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17669428U;
si2=9U;
si3=l2;
si4=4U;
si3+=si4;
si4=17674812U;
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

U32 f13998(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675672U;
si2=15U;
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
si1=17668332U;
si2=5U;
si3=l0;
si4=17675632U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17675648U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=17675656U;
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

U32 f13999(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17653080U;
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
si1=17653087U;
si2=2U;
si3=l0;
si4=17653092U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17653108U;
si2=2U;
si3=l2;
si4=4U;
si3+=si4;
si4=17653112U;
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

U32 f14000(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17675040U;
si2=18U;
si3=17675058U;
si4=5U;
si5=l0;
si6=17675064U;
si7=17675080U;
si8=4U;
si9=l0;
si10=12U;
si9+=si10;
si10=17674876U;
si11=17675084U;
si12=3U;
si13=l0;
si14=28U;
si13+=si14;
si14=17674908U;
si15=17675087U;
si16=4U;
si17=l2;
si18=12U;
si17+=si18;
si18=17674924U;
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

U32 f14001(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675524U;
si2=19U;
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
si1=17669101U;
si2=4U;
si3=l0;
si4=17668308U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17669105U;
si2=9U;
si3=l2;
si4=4U;
si3+=si4;
si4=17652588U;
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

U32 f14002(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17674740U;
si2=19U;
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
si1=17674759U;
si2=8U;
si3=l0;
si4=17668308U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17674767U;
si2=3U;
si3=l2;
si4=4U;
si3+=si4;
si4=17674772U;
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

U32 f14003(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675492U;
si2=16U;
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
si1=17675084U;
si2=3U;
si3=l0;
si4=4U;
si3+=si4;
si4=17675508U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17675272U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=17652428U;
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

U32 f14004(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f14005(i,si0,si1);
L0:;
return si0;
}

U32 f14005(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17668288U;
si2=18U;
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
si1=17667624U;
si2=8U;
si3=l0;
si4=17668308U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=17668324U;
si2=8U;
si3=l0;
si4=4U;
si3+=si4;
si4=17668232U;
si0=f644(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
l1=si1;
si2=1U;
si3=l1;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=l4;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=17668332U;
si2=5U;
si3=l2;
si4=12U;
si3+=si4;
si4=17668340U;
si0=f644(i,si0,si1,si2,si3,si4);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
if(si0){
goto L3;
}
si0=l3;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L2;
L3:;
si0=1U;
l1=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L5;
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
goto L4;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102481U;
si2=1U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+24U);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
L4:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si1=0U;
si2=l0;
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
goto L6;
}
si0=l0;
si1=0U;
f1361(i,si0,si1);
L6:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f14006(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17654324U;
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

U32 f14007(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17674963U;
si2=38U;
si3=17674828U;
si4=4U;
si5=l0;
si6=17674860U;
si7=17674832U;
si8=7U;
si9=l0;
si10=12U;
si9+=si10;
si10=17674876U;
si11=17669408U;
si12=1U;
si13=l0;
si14=28U;
si13+=si14;
si14=17674908U;
si15=17674851U;
si16=9U;
si17=l2;
si18=12U;
si17+=si18;
si18=17674924U;
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

U32 f14008(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l4=si0;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
l3=si2;
si3=0U;
si4=l4;
si5=l3;
si6=l4;
si5=si5 < si6;
si3=si5?si3:si4;
si2-=si3;
l3=si2;
si1-=si2;
l6=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l5;
si1=l6;
si0-=si1;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=l5;
si0+=si1;
l4=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l0;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L4:;
{
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
l5=si0;
si0=l0;
l6=si0;
si0=l4;
l1=si0;
si0=l3;
l0=si0;
goto L5;
L6:;
si0=l4;
l5=si0;
si0=l4;
l6=si0;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
L5:;
si0=l1;
l4=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652428U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
l1=si0;
si0=l6;
l0=si0;
goto L4;
}
L3:;
si0=1U;
l0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L7:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f14009(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22;
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
si1=17675232U;
si2=17U;
si3=17667624U;
si4=8U;
si5=l0;
si6=8U;
si5+=si6;
si6=17668308U;
si7=17675084U;
si8=3U;
si9=l0;
si10=12U;
si9+=si10;
si10=17674908U;
si11=17675249U;
si12=4U;
si13=l0;
si14=16U;
si13+=si14;
si14=17674908U;
si15=17675087U;
si16=4U;
si17=l0;
si18=17675256U;
si19=17675272U;
si20=4U;
si21=l2;
si22=12U;
si21+=si22;
si22=17652460U;
si0=f672(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18,si19,si20,si21,si22);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f14010(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675413U;
si2=17U;
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
si1=17669114U;
si2=6U;
si3=l0;
si4=12U;
si3+=si4;
si4=17675216U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17669120U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=17675432U;
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

U32 f14011(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
si1=4U;
si0+=si1;
si1=44U;
si0+=si1;
si1=17674924U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=17674908U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=28U;
si0+=si1;
si1=17674892U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=17674876U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=17674876U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=17674860U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17674940U;
si2=23U;
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
si1=17674828U;
si2=4U;
si3=l2;
si4=4U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=56U;
si0+=si1;
si1=17674832U;
si2=7U;
si3=l2;
si4=12U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=56U;
si0+=si1;
si1=17674839U;
si2=6U;
si3=l2;
si4=20U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=56U;
si0+=si1;
si1=17674845U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=24U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=1U;
l0=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=17669408U;
si2=1U;
si3=l2;
si4=36U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=56U;
si0+=si1;
si1=17674851U;
si2=9U;
si3=l2;
si4=44U;
si3+=si4;
si4=1103152U;
si0=f644(i,si0,si1,si2,si3,si4);
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
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
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

U32 f14012(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17675276U;
si2=18U;
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
si1=17657944U;
si2=7U;
si3=l2;
si4=4U;
si3+=si4;
si4=17675296U;
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

U32 f14013(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675608U;
si2=22U;
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
si1=17668332U;
si2=5U;
si3=l0;
si4=17675632U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17675648U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=17675656U;
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

U32 f14014(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=17681796U;
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
si2=17681804U;
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

U32 f14015(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17665052U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=17652128U;
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

U32 f14016(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=17681771U;
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
si2=17681780U;
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

U32 f14017(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675387U;
si2=18U;
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
si1=17675405U;
si2=8U;
si3=l0;
si4=17675216U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17667624U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=17652588U;
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

U32 f14018(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675183U;
si2=22U;
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
si1=17675205U;
si2=9U;
si3=l0;
si4=17675216U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17667624U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=17652588U;
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

U32 f14019(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17666001U;
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
si1=17666006U;
si2=9U;
si3=l0;
si4=17666016U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17666032U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=17666040U;
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

U32 f14020(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675091U;
si2=14U;
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
si1=17675105U;
si2=8U;
si3=l0;
si4=17675116U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17665856U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=17675132U;
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

U32 f14021(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17675448U;
si2=16U;
si3=17675464U;
si4=4U;
si5=l0;
si6=17668308U;
si7=17675468U;
si8=5U;
si9=l0;
si10=4U;
si9+=si10;
si10=17675476U;
si11=17665856U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=17675132U;
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

U32 f14022(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17665664U;
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
si1=17665677U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=17665688U;
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

U32 f14023(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17675719U;
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
si1=17675648U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=17675736U;
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

U32 f14024(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17675312U;
si2=20U;
si3=17675205U;
si4=9U;
si5=l0;
si6=17675332U;
si7=17667624U;
si8=8U;
si9=l0;
si10=8U;
si9+=si10;
si10=17668308U;
si11=17675348U;
si12=10U;
si13=l2;
si14=12U;
si13+=si14;
si14=17674924U;
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

U32 f14025(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17675543U;
si2=16U;
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
si1=17675559U;
si2=6U;
si3=l0;
si4=17675568U;
si0=f644(i,si0,si1,si2,si3,si4);
si0=l2;
si1=8U;
si0+=si1;
si1=17675584U;
si2=6U;
si3=l2;
si4=4U;
si3+=si4;
si4=17675592U;
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

U32 f14026(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=17654088U;
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

U32 f14027(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102129U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0<<=(si1&31);
l1=si0;
L2:;
{
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=17652524U;
f646(i,si0,si1,si2);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1102508U;
si2=1U;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f14028(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=17675687U;
si2=7U;
si3=17659459U;
si4=5U;
si5=l0;
si6=8U;
si5+=si6;
si6=17675696U;
si7=17667632U;
si8=6U;
si9=l0;
si10=17675256U;
si11=17668332U;
si12=5U;
si13=l2;
si14=12U;
si13+=si14;
si14=17675132U;
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

U32 f14029(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=17675358U;
si2=20U;
si3=17675205U;
si4=9U;
si5=l0;
si6=17675216U;
si7=17667624U;
si8=8U;
si9=l0;
si10=4U;
si9+=si10;
si10=17668308U;
si11=17675378U;
si12=9U;
si13=l2;
si14=12U;
si13+=si14;
si14=17674924U;
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


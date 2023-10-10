#include "w2c2_base.h"

#include "rustpython.h"

void f430(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f431(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f432(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f433(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+240U);
L0:;
return si0;
}

void f434(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
F64 l19=0;
F64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U64 l25=0;
U64 l26=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj3;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=160U;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si1=24U;
si0+=si1;
l8=si0;
si1=l2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
l9=si0;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l10=si0;
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
l11=si0;
si0=l3;
si1=132U;
si0+=si1;
l12=si0;
si0=0U;
l13=si0;
L3:;
{
si0=l4;
si1=l13;
si2=312U;
si1*=si2;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+224U);
l2=si0;
si1=l14;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=272U;
si1*=si2;
si0+=si1;
l15=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+212U);
l1=si0;
si1=l14;
si2=220U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=120U;
si1*=si2;
si0+=si1;
l16=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=0U;
l5=si0;
L4:;
{
sd0=l20;
l19=sd0;
si0=l5;
l21=si0;
si0=l23;
l22=si0;
L6:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l1;
si1=l16;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
si0=l1;
si1=120U;
si0+=si1;
l23=si0;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
}
si0=l23;
si1=-112U;
si0+=si1;
l24=si0;
si0=l23;
l1=si0;
goto L7;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
L10:;
{
si0=l2;
si1=l15;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=156U;
si0+=si1;
l1=si0;
si0=l2;
si1=272U;
si0+=si1;
l23=si0;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
}
si0=l23;
si1=-112U;
si0+=si1;
l24=si0;
si0=0U;
l1=si0;
si0=l23;
l2=si0;
L7:;
si0=l18;
si1=l17;
si2=l5;
si3=l24;
si3=i32_load(&i->m0,(U64)si3);
l23=si3;
sd0=f14839(i,si0,si1,si2,si3);
l20=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l21;
si0=!(si0);
sd1=l19;
sd2=l20;
si1=sd1 < sd2;
si0|=si1;
if(si0){
goto L4;
}
goto L6;
}
L5:;
}
si0=l21;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l14;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=0U;
l1=si0;
L15:;
{
si0=l15;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=l15;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L14;
}
L16:;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l3;
si1=l22;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l21;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1090700U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si0=l3;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+80U);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=155U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=155U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=155U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1090736U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l3;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f64(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
if(si0){
goto L12;
}
L13:;
si0=l3;
si1=32U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
goto L11;
L12:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+92U);
l25=sj0;
si0=l3;
si1=104U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
sj1=l25;
i64_store(&i->m0,(U64)si0+144U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l12;
si2=l3;
si3=104U;
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
si1=l21;
i32_store(&i->m0,(U64)si0+152U,si1);
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
si1=l22;
i32_store(&i->m0,(U64)si0+156U,si1);
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
si0=i32_load(&i->m0,(U64)si0+116U);
sj1=l25;
si1=(U32)(sj1);
si2=l1;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l5;
si2=l1;
si0=si2?si0:si1;
f15024(i,si0);
L11:;
si0=l8;
si1=l3;
si2=32U;
si1+=si2;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l3;
si2=32U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
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
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L3;
}
}
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
goto L1;
L2:;
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
L1:;
si0=l3;
si1=160U;
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
si0=f414(i,si0,si1);
if(si0){
goto L7;
}
si0=l2;
si1=17U;
si0=f414(i,si0,si1);
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
si0=f414(i,si0,si1);
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
si0=f414(i,si0,si1);
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
si1=1086332U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f436(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=1090335U;
si1=53U;
si2=1090460U;
f634(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
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
si1=4U;
si0+=si1;
si1=0U;
si2=l12;
f530(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L22:;
si0=l11;
si1=l10;
si0+=si1;
si1=l13;
si2=l12;
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1090300U;
si1=35U;
si2=1090476U;
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

void f437(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=1090335U;
si1=53U;
si2=1090460U;
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
f530(i,si0,si1,si2);
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
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1090300U;
si1=35U;
si2=1090476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1090300U;
si1=35U;
si2=1090476U;
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

void f438(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
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
si1=l4;
si2=8U;
si1+=si2;
sj0=f493(i,si0,si1);
l5=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l6=sj0;
sj0=l5;
si0=(U32)(sj0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=0U;
l10=si0;
L2:;
{
si0=l8;
si1=l2;
si2=l7;
si1&=si2;
l11=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l6;
sj0^=sj1;
l13=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l13;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l13=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L5:;
{
si0=l3;
si1=l8;
si2=0U;
sj3=l13;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l11;
si3+=si4;
si4=l7;
si3&=si4;
si2-=si3;
si3=40U;
si2*=si3;
si1+=si2;
l2=si1;
si2=-36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=-40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
sj0=l13;
sj1=-1ULL;
sj0+=sj1;
sj1=l13;
sj0&=sj1;
l13=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
goto L5;
}
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
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
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
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
goto L7;
}
si0=l11;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
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
si2=l1;
si3=16U;
si2+=si3;
si0=f306(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L8:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f439(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
sj0=f491(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=f15142(i,si0,si1,si2);
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

void f440(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l15=0;
U32 l16=0;
U32 l17=0;
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
sj0=f493(i,si0,si1);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=l3;
si0=f306(i,si0,si1,si2);
L1:;
sj0=l6;
sj1=25ULL;
sj0>>=(sj1&63);
l7=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=0U;
l12=si0;
si0=0U;
l13=si0;
L3:;
{
si0=l10;
si1=l2;
si2=l9;
si1&=si2;
l14=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=l8;
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
si1=l10;
si2=0U;
sj3=l6;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l14;
si3+=si4;
si4=l9;
si3&=si4;
si2-=si3;
si3=40U;
si2*=si3;
si1+=si2;
l2=si1;
si2=-36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
si1=l2;
si2=-40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f15142(i,si0,si1,si2);
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
si1=l2;
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
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
l9=si1;
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
si0=l9;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
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
sj0=l15;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l6=sj0;
si0=1U;
l16=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
l16=si0;
sj0=l6;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l14;
si0+=si1;
si1=l9;
si0&=si1;
l17=si0;
L8:;
sj0=l6;
sj1=l15;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l14;
si1=l12;
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l2=si0;
si0=l16;
l13=si0;
goto L3;
L9:;
}
si0=l10;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l2=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l17=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
L10:;
si0=l10;
si1=l17;
si0+=si1;
sj1=l7;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l14=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l17;
si1=-8U;
si0+=si1;
si1=l9;
si0&=si1;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l14;
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
si0=l10;
si1=0U;
si2=l17;
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
si1=-40U;
si0+=si1;
l2=si0;
si1=l11;
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
si1=8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f441(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
sj0=f491(i,si0,si1,si2);
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si0=f15142(i,si0,si1,si2);
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

U32 f442(rustpythonInstance*i,U32 l0) {
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
si0=1090756U;
si1=43U;
si2=1090928U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1090756U;
si1=43U;
si2=1090912U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f443(rustpythonInstance*i,U32 l0) {
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
si0=1090756U;
si1=43U;
si2=1090928U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1090756U;
si1=43U;
si2=1090912U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f444(rustpythonInstance*i,U32 l0) {
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
si0=1090756U;
si1=43U;
si2=1090928U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1090756U;
si1=43U;
si2=1090912U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f445(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=8U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f257(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L4:;
si0=0U;
l1=si0;
si0=0U;
l4=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l2;
si1=l2;
si2=79U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=l2;
si3=32U;
si2+=si3;
f501(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=144U;
si0=f15022(i,si0);
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
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
si1=20U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=l2;
si3=28U;
si2+=si3;
f536(i,si0,si1,si2);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
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

void f446(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=8U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
f251(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
f15024(i,si0);
L4:;
si0=0U;
l1=si0;
si0=0U;
l4=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l2;
si1=l2;
si2=79U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=l2;
si3=32U;
si2+=si3;
f501(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=144U;
si0=f15022(i,si0);
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
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
si1=20U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=l2;
si3=28U;
si2+=si3;
f536(i,si0,si1,si2);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
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

void f447(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L5:;
L0:;
}

void f448(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si1=32U;
si0+=si1;
f447(i,si0);
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
f15024(i,si0);
L1:;
L0:;
}

void f449(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si1=48U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
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
si5=l3;
si6=l14;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15142(i,si1,si2,si3);
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
l12=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l12;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=80U;
si0+=si1;
l12=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l12;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l6;
si1=l11;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L10;
}
si0=0U;
l13=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=184U;
si0=f15022(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
si1=1U;
i32_store16(&i->m0,(U64)si0+182U,si1);
si0=l14;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l14;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l14;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=92U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l6;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=12U;
si1+=si2;
l13=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=36U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=8U;
si6+=si7;
f535(i,si0,si1,si2,si3,si4,si5,si6);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=48U;
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

void f450(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i32_load(&i->m0,(U64)si0+8U);
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
si0=i32_load(&i->m0,(U64)si0+8U);
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
si5=l8;
si6=l14;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15142(i,si1,si2,si3);
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f15024(i,si0);
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
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
if(si0){
goto L14;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=3576U;
si0=f15022(i,si0);
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
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+3436U,sj1);
si0=l10;
si1=3444U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l3;
si2=312U;
si0=f15143(i,si0,si1,si2);
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
si2=20U;
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
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+4U);
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
si5=16U;
si4+=si5;
f534(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si0=f15143(i,si0,si1,si2);
si0=l10;
si1=l3;
si2=312U;
si0=f15143(i,si0,si1,si2);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f451(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L5;
}
si0=1U;
l3=si0;
goto L4;
L5:;
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
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l3;
si1=l2;
si2=l1;
si0=f15143(i,si0,si1,si2);
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
goto L0;
L3:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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

U32 f452(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

void f453(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
si0=1090756U;
si1=43U;
si2=1090896U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=0U;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
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
f15024(i,si0);
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

void f454(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
si0=1090756U;
si1=43U;
si2=1090896U;
f604(i,si0,si1,si2);
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
f15024(i,si0);
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
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L24:;
si0=l5;
si1=212U;
si0+=si1;
l1=si0;
f223(i,si0);
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
f15024(i,si0);
L25:;
si0=l5;
si1=224U;
si0+=si1;
l1=si0;
f224(i,si0);
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
f15024(i,si0);
L26:;
si0=l5;
f225(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L27;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
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
f222(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L36:;
si0=l5;
si1=260U;
si0+=si1;
l1=si0;
f226(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L39:;
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
f15024(i,si0);
L40:;
si0=0U;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
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
f15024(i,si0);
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

void f455(rustpythonInstance*i,U32 l0) {
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
f15024(i,si0);
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
f15024(i,si0);
si0=1090756U;
si1=43U;
si2=1090896U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=0U;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
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
f15024(i,si0);
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

void f456(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1090944U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f457(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f15143(i,si0,si1,si2);
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
si1=1090756U;
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
f447(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L7:;
L0:;
}

U32 f458(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1091072U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=50U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
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
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=19U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1091084U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si2=l2;
si3=16U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=1090756U;
si1=43U;
si2=1091208U;
f604(i,si0,si1,si2);
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

void f459(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f460(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f461(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f462(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f463(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f464(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
si2=1091224U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0&=si1;
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f465(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

U32 f466(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

void f467(rustpythonInstance*i,U32 l0,U32 l1) {
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
si3=1091224U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f468(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f469(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 f470(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 f471(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
L0:;
return si0;
}

void f472(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f473(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1114112U;
L0:;
return si0;
}

void f474(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f475(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f476(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f477(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f478(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f479(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

void f480(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
si2=l3;
si3=l1;
si4=20U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=12U;
si3*=si4;
si2+=si3;
f243(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
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
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
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

U32 f481(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
L0:;
return si0;
}

U32 f482(rustpythonInstance*i,U32 l0) {
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
sj0=i64_load(&i->m0,(U64)si0+18663248U);
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
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=l4;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
L2:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=18663256U;
goto L0;
L1:;
si0=l1;
si1=l0;
i32_store16(&i->m0,(U64)si0+30U,si1);
si0=17683216U;
si1=18U;
si2=l1;
si3=30U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f483(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1091444U;
si2=l2;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=1091484U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
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
goto L5;
}
si0=l2;
f15024(i,si0);
L5:;
si0=l1;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f484(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1091496U;
si2=l2;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=1091484U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
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
goto L5;
}
si0=l2;
f15024(i,si0);
L5:;
si0=l1;
f15024(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f485(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f486(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

void f487(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
f15024(i,si0);
L3:;
si0=l1;
f15024(i,si0);
L1:;
L0:;
}

U32 f488(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=18615312U;
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
si1=18615568U;
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
si2=18618000U;
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
si2=1091412U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=3888U;
si2=1091428U;
f594(i,si0,si1,si2);
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

void f489(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l3;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l3;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
l8=si2;
si1+=si2;
l5=si1;
si0=f488(i,si0,si1);
l9=si0;
si0=l7;
si1=l5;
si0=f488(i,si0,si1);
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
l26=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l26;
si1=1U;
si0+=si1;
l20=si0;
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
goto L13;
L14:;
si0=l26;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l27=si0;
si0=l5;
si1=31U;
si0&=si1;
l28=si0;
si0=l5;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l28;
si1=6U;
si0<<=(si1&31);
si1=l27;
si0|=si1;
l5=si0;
si0=l26;
si1=2U;
si0+=si1;
l20=si0;
goto L13;
L15:;
si0=l27;
si1=6U;
si0<<=(si1&31);
si1=l26;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l27=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l27;
si1=l28;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
si0=l26;
si1=3U;
si0+=si1;
l20=si0;
goto L13;
L16:;
si0=l26;
si1=4U;
si0+=si1;
l20=si0;
si0=l27;
si1=6U;
si0<<=(si1&31);
si1=l26;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l28;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l5=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l18;
l22=si0;
goto L11;
L13:;
si0=l20;
si1=l26;
si0-=si1;
si1=l18;
si0+=si1;
l22=si0;
si0=l5;
si1=127U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l5;
si1=159U;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l5;
si1=13U;
si0>>=(si1&31);
si1=18615312U;
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
goto L26;
}
si0=l26;
si1=18615568U;
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
goto L29;
}
si0=l26;
si1=3888U;
si2=1091428U;
f594(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1U;
si1=l26;
si2=18618000U;
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
goto L24;
}
si0=3U;
si1=4U;
si2=l5;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l26=si0;
goto L24;
L28:;
si0=1U;
l26=si0;
si0=1U;
l29=si0;
si0=l5;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L25;
}
goto L24;
L27:;
si0=0U;
l29=si0;
si0=2U;
l26=si0;
si0=l5;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L24;
}
goto L22;
L26:;
si0=l26;
si1=2432U;
si2=1091412U;
f594(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l5;
si1=10U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=0U;
l29=si0;
si0=1U;
l26=si0;
goto L24;
L30:;
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
goto L23;
}
si0=l23;
l10=si0;
si0=l18;
l24=si0;
si0=l18;
l25=si0;
si0=0U;
l29=si0;
goto L17;
L24:;
si0=l5;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l5;
si1=32U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
l27=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L33;
case 1:
goto L22;
case 2:
goto L22;
case 3:
goto L22;
case 4:
goto L22;
case 5:
goto L22;
case 6:
goto L22;
case 7:
goto L22;
case 8:
goto L22;
case 9:
goto L22;
case 10:
goto L31;
case 11:
goto L22;
case 12:
goto L22;
case 13:
goto L22;
case 14:
goto L22;
case 15:
goto L22;
case 16:
goto L22;
case 17:
goto L22;
case 18:
goto L22;
case 19:
goto L22;
case 20:
goto L22;
case 21:
goto L22;
case 22:
goto L22;
case 23:
goto L22;
case 24:
goto L22;
case 25:
goto L22;
case 26:
goto L32;
default:
goto L34;
}
L34:;
si0=l27;
if(si0){
goto L22;
}
si0=l5;
si1=160U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l5;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L18;
}
goto L22;
L33:;
si0=l5;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L18;
}
goto L22;
L32:;
si0=l5;
si1=12288U;
si0=si0 != si1;
if(si0){
goto L22;
}
goto L18;
L31:;
si0=l5;
si1=160U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l5;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L18;
}
goto L22;
L23:;
si0=l17;
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l18;
si1=l17;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l3;
si1=l17;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l3;
si1=l17;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L19;
L35:;
si0=l2;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
goto L20;
L22:;
si0=0U;
l21=si0;
si0=l29;
si1=l23;
si0+=si1;
l30=si0;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l3;
l28=si0;
si0=l25;
si1=l19;
si0+=si1;
l31=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
si1=l31;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l3;
si1=l31;
si0=si0 == si1;
if(si0){
goto L38;
}
goto L36;
L39:;
si0=l2;
si1=l31;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L36;
}
L38:;
si0=l3;
si1=l31;
si0-=si1;
l28=si0;
L37:;
si0=l2;
si1=l31;
si0+=si1;
l32=si0;
si0=l28;
if(si0){
goto L41;
}
si0=0U;
l28=si0;
goto L40;
L41:;
si0=l32;
si1=l28;
si0+=si1;
l9=si0;
si0=0U;
l27=si0;
si0=l32;
l5=si0;
L42:;
{
si0=l5;
l21=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l26=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L44;
}
si0=l21;
si1=1U;
si0+=si1;
l5=si0;
si0=l26;
si1=255U;
si0&=si1;
l26=si0;
goto L43;
L44:;
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
goto L45;
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
goto L43;
L45:;
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
goto L46;
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
goto L43;
L46:;
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
goto L40;
}
si0=l21;
si1=4U;
si0+=si1;
l5=si0;
L43:;
si0=l26;
si1=-9U;
si0+=si1;
l33=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=1U;
si1=l33;
si0<<=(si1&31);
si1=8388639U;
si0&=si1;
if(si0){
goto L48;
}
L49:;
si0=l26;
si1=128U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l26;
si1=8U;
si0>>=(si1&31);
l33=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L50;
case 1:
goto L47;
case 2:
goto L47;
case 3:
goto L47;
case 4:
goto L47;
case 5:
goto L47;
case 6:
goto L47;
case 7:
goto L47;
case 8:
goto L47;
case 9:
goto L47;
case 10:
goto L52;
case 11:
goto L47;
case 12:
goto L47;
case 13:
goto L47;
case 14:
goto L47;
case 15:
goto L47;
case 16:
goto L47;
case 17:
goto L47;
case 18:
goto L47;
case 19:
goto L47;
case 20:
goto L47;
case 21:
goto L47;
case 22:
goto L47;
case 23:
goto L47;
case 24:
goto L47;
case 25:
goto L47;
case 26:
goto L53;
default:
goto L51;
}
L53:;
si0=l26;
si1=12288U;
si0=si0 != si1;
if(si0){
goto L47;
}
goto L48;
L52:;
si0=l26;
si1=160U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l26;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L47;
}
goto L48;
L51:;
si0=l33;
if(si0){
goto L47;
}
si0=l26;
si1=160U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l26;
si1=255U;
si0&=si1;
si1=1123498U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L48;
}
goto L47;
L50:;
si0=l26;
si1=5760U;
si0=si0 != si1;
if(si0){
goto L47;
}
L48:;
si0=l27;
if(si0){
goto L54;
}
si0=0U;
l28=si0;
goto L40;
L54:;
si0=l27;
si1=l28;
si0=si0 < si1;
if(si0){
goto L56;
}
si0=l27;
si1=l28;
si0=si0 == si1;
if(si0){
goto L40;
}
goto L55;
L56:;
si0=l32;
si1=l27;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L55;
}
si0=l27;
l28=si0;
goto L40;
L55:;
si0=l32;
si1=l28;
si2=0U;
si3=l27;
si4=1091652U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L47:;
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
goto L42;
}
}
L40:;
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l32;
si3=l28;
f14852(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l34=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+32U);
l35=si1;
si2=24U;
si1*=si2;
si0+=si1;
l9=si0;
L58:;
{
si0=l34;
si1=l9;
si0=si0 != si1;
if(si0){
goto L59;
}
si0=0U;
l36=si0;
si0=1091520U;
l37=si0;
goto L57;
L59:;
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
goto L60;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l38;
si0+=si1;
l33=si0;
si0=0U;
l27=si0;
L61:;
{
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
l26=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L63;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l26;
si1=255U;
si0&=si1;
l26=si0;
goto L62;
L63:;
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
goto L64;
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
goto L62;
L64:;
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
goto L65;
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
goto L62;
L65:;
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
goto L60;
}
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
L62:;
si0=l26;
si1=127U;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=0U;
l21=si0;
si0=l26;
si1=159U;
si0=si0 <= si1;
if(si0){
goto L66;
}
si0=l26;
si1=13U;
si0>>=(si1&31);
si1=18615312U;
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
goto L68;
}
si0=l21;
si1=18615568U;
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
goto L67;
}
si0=1U;
si1=l21;
si2=18618000U;
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
goto L66;
L69:;
si0=l26;
si1=31U;
si0=si0 > si1;
l21=si0;
goto L66;
L68:;
si0=l21;
si1=2432U;
si2=1091412U;
f594(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=l21;
si1=3888U;
si2=1091428U;
f594(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l21;
si1=l27;
si0+=si1;
l27=si0;
si0=l5;
si1=l33;
si0=si0 != si1;
if(si0){
goto L61;
}
}
L60:;
si0=l36;
si0=!(si0);
if(si0){
goto L70;
}
si0=l37;
si1=l36;
si0+=si1;
l33=si0;
si0=0U;
l28=si0;
si0=l37;
l5=si0;
L71:;
{
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
l26=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L73;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l26;
si1=255U;
si0&=si1;
l26=si0;
goto L72;
L73:;
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
goto L74;
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
goto L72;
L74:;
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
goto L75;
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
goto L72;
L75:;
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
goto L70;
}
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
L72:;
si0=l26;
si1=127U;
si0=si0 < si1;
if(si0){
goto L79;
}
si0=0U;
l21=si0;
si0=l26;
si1=159U;
si0=si0 <= si1;
if(si0){
goto L76;
}
si0=l26;
si1=13U;
si0>>=(si1&31);
si1=18615312U;
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
goto L78;
}
si0=l21;
si1=18615568U;
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
goto L77;
}
si0=1U;
si1=l21;
si2=18618000U;
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
goto L76;
L79:;
si0=l26;
si1=31U;
si0=si0 > si1;
l21=si0;
goto L76;
L78:;
si0=l21;
si1=2432U;
si2=1091412U;
f594(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l21;
si1=3888U;
si2=1091428U;
f594(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l21;
si1=l28;
si0+=si1;
l28=si0;
si0=l5;
si1=l33;
si0=si0 != si1;
if(si0){
goto L71;
}
}
L70:;
si0=l27;
si1=l10;
si0+=si1;
si1=l28;
si0+=si1;
si1=l14;
si0=si0 > si1;
if(si0){
goto L58;
}
}
si0=0U;
l19=si0;
si0=l38;
si1=l31;
si0+=si1;
l24=si0;
l25=si0;
L57:;
si0=l17;
si1=l25;
si0=si0 < si1;
if(si0){
goto L80;
}
si0=0U;
l19=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L81;
}
si0=l23;
l10=si0;
si0=l18;
l24=si0;
si0=l18;
l25=si0;
goto L80;
L81:;
si0=l35;
si0=!(si0);
if(si0){
goto L82;
}
si0=l23;
l10=si0;
si0=l34;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l17;
si0+=si1;
l24=si0;
l25=si0;
goto L80;
L82:;
si0=0U;
si1=0U;
si2=1091668U;
f594(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l25;
si1=l17;
si0=si0 > si1;
if(si0){
goto L83;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L84;
}
si0=l34;
f15024(i,si0);
L84:;
si0=0U;
l21=si0;
goto L17;
L83:;
si0=l17;
if(si0){
goto L87;
}
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
goto L86;
L87:;
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l17;
si0=si0 > si1;
if(si0){
goto L88;
}
si0=l3;
si1=l17;
si0=si0 == si1;
if(si0){
goto L86;
}
goto L85;
L88:;
si0=l2;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L85;
}
L86:;
si0=l25;
si1=l3;
si0=si0 < si1;
if(si0){
goto L90;
}
si0=l25;
si1=l3;
si0=si0 != si1;
if(si0){
goto L85;
}
goto L89;
L90:;
si0=l2;
si1=l25;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L85;
}
L89:;
si0=l4;
si1=36U;
si0+=si1;
si1=l2;
si2=l17;
si1+=si2;
si2=l25;
si3=l17;
si2-=si3;
f59(i,si0,si1,si2);
si0=l4;
si1=36U;
si0+=si1;
si1=l37;
si2=l36;
f59(i,si0,si1,si2);
si0=l11;
si1=l13;
si0=f488(i,si0,si1);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l28=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l26=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L91;
}
si0=l34;
f15024(i,si0);
L91:;
si0=l30;
si1=l10;
si0-=si1;
si1=l5;
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
L85:;
si0=l2;
si1=l3;
si2=l17;
si3=l25;
si4=1091684U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L36:;
si0=l2;
si1=l3;
si2=l31;
si3=l3;
si4=1091636U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L21:;
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
L20:;
si0=l18;
si0=!(si0);
if(si0){
goto L92;
}
si0=l18;
si1=l3;
si0=si0 < si1;
if(si0){
goto L93;
}
si0=l18;
si1=l3;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L92;
L93:;
si0=l2;
si1=l18;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
L92:;
si0=l4;
si1=36U;
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
si0=f488(i,si0,si1);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l28=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
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
L19:;
si0=l2;
si1=l3;
si2=l17;
si3=l18;
si4=1091620U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L18:;
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
L17:;
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
si0=l3;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l17;
if(si0){
goto L95;
}
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
l5=si0;
goto L94;
L95:;
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
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
L94:;
si0=l4;
si1=36U;
si0+=si1;
si1=l2;
si2=l17;
si1+=si2;
si2=l5;
f59(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l27=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l28=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l26=si0;
si0=0U;
l33=si0;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L96;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l5;
f515(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
L96:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l5;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
goto L6;
L7:;
si0=l2;
si1=l3;
si2=l17;
si3=l3;
si4=1091700U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l26;
si1=l28;
si2=l26;
si0=si2?si0:si1;
l32=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
si0-=si1;
si1=l27;
si0=si0 >= si1;
if(si0){
goto L97;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l5;
si2=l27;
f530(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
L97:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l5;
si0+=si1;
si1=l32;
si2=l27;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l27;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l26;
si0=!(si0);
if(si0){
goto L98;
}
si0=l28;
si0=!(si0);
if(si0){
goto L98;
}
si0=l26;
f15024(i,si0);
L98:;
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
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
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

void f490(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
f686(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=1091728U;
si1=35U;
si2=1091872U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f491(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
sj1=i64_load(&i->m0,(U64)si1+8U);
l5=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
sj1=l5;
sj2=8387220255154660723ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=l5;
sj2=7237128888997146477ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l6;
sj2=7816392313619706465ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l6;
sj2=8317987319222330741ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f492(i,si0,si1,si2);
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
f492(i,si0,si1,si2);
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

void f492(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

U64 f493(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2;
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
sj1=i64_load(&i->m0,(U64)si1+8U);
l4=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=l4;
sj2=8387220255154660723ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=l4;
sj2=7237128888997146477ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=l5;
sj2=7816392313619706465ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
sj1=l5;
sj2=8317987319222330741ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
f492(i,si0,si1,si2);
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
f492(i,si0,si1,si2);
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

U32 f494(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+49U,si1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L4:;
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L3:;
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1091892U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
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
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f495(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+49U,si1);
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L1;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1091892U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
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
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f496(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+49U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L4:;
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L3:;
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L1;
L2:;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L1:;
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1091892U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
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
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f497(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+49U,si1);
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L4:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L1;
L3:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
goto L1;
L2:;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1091892U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
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
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f498(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
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
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=10U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+49U,si1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L4:;
si0=l2;
sj1=42949672963ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L3:;
si0=l2;
sj1=42949672962ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=10U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=233U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1091892U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
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
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f499(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
F64 l14=0;
F64 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3,si4;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=12U;
si0+=si1;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=0U;
l13=si0;
L3:;
{
sd0=l15;
l14=sd0;
si0=l13;
l16=si0;
si0=l18;
l17=si0;
si0=l12;
l3=si0;
L4:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l11;
si0=si0 != si1;
if(si0){
goto L7;
}
L10:;
L11:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si1=l10;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l8;
si1=0U;
si2=l6;
si0=si2?si0:si1;
l12=si0;
L14:;
{
si0=l6;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L12;
}
si0=l6;
si1=312U;
si0+=si1;
l6=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l12;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l9;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0+=si1;
l19=si0;
si0=l3;
si1=12U;
si0+=si1;
l12=si0;
si0=0U;
l7=si0;
si0=0U;
l6=si0;
si0=l3;
l18=si0;
goto L5;
L12:;
si0=l12;
si1=l6;
si2=312U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
si2=160U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=12U;
si1*=si2;
si0+=si1;
l11=si0;
si0=l6;
if(si0){
goto L7;
}
goto L11;
}
L8:;
si0=l6;
si1=80U;
si0+=si1;
l19=si0;
si0=l6;
si1=72U;
si0+=si1;
l18=si0;
si0=l6;
si1=312U;
si0+=si1;
l6=si0;
goto L6;
L7:;
si0=l7;
l18=si0;
si1=4U;
si0+=si1;
l19=si0;
si0=l18;
si1=12U;
si0+=si1;
l7=si0;
si0=0U;
l6=si0;
L6:;
si0=l3;
l12=si0;
L5:;
si0=l12;
l3=si0;
si0=l1;
si1=l2;
si2=l18;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l19;
si3=i32_load(&i->m0,(U64)si3);
l18=si3;
sd0=f14839(i,si0,si1,si2,si3);
l15=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l12;
l3=si0;
si0=l16;
si0=!(si0);
sd1=l14;
sd2=l15;
si1=sd1 < sd2;
si0|=si1;
if(si0){
goto L3;
}
goto L4;
}
}
L2:;
si0=0U;
l16=si0;
si0=l6;
if(si0){
goto L15;
}
goto L1;
L15:;
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l16=si0;
L16:;
{
si0=l1;
si1=l2;
si2=l6;
si3=72U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l6;
si4=80U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
sd0=f14839(i,si0,si1,si2,si3);
l15=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l16;
si0=!(si0);
if(si0){
goto L18;
}
sd0=l14;
sd1=l15;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
si0=l10;
l17=si0;
si0=l7;
l16=si0;
sd0=l15;
l14=sd0;
L17:;
si0=l6;
si1=312U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L1:;
si0=l0;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f500(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
F64 l17=0;
F64 l18=0;
U32 l19=0;
U32 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=192U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=0U;
l13=si0;
L3:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
si0=l12;
si1=l11;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
{
si0=l12;
si1=4U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
if(si0){
goto L5;
}
si0=l12;
si1=120U;
si0+=si1;
l12=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l10;
si1=156U;
si0+=si1;
l5=si0;
L10:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
if(si0){
goto L8;
}
si0=l5;
si1=116U;
si0+=si1;
l12=si0;
si0=l5;
si1=272U;
si0+=si1;
l5=si0;
si0=l12;
si1=l9;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l13;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=155U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=128U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=3U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
si1=1092052U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=155U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
si1=1092080U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=l8;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=l8;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si2=72U;
si1+=si2;
f64(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L1;
L8:;
si0=l5;
si1=116U;
si0+=si1;
l10=si0;
si0=0U;
l12=si0;
goto L4;
L5:;
si0=l12;
si1=120U;
si0+=si1;
l12=si0;
L4:;
si0=l1;
si1=l2;
si2=l14;
si3=l5;
si4=4U;
si3+=si4;
l16=si3;
si3=i32_load(&i->m0,(U64)si3);
sd0=f14839(i,si0,si1,si2,si3);
l17=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l13;
si0=!(si0);
sd1=l18;
sd2=l17;
si1=sd1 < sd2;
si0|=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
sd0=l17;
l18=sd0;
goto L3;
}
L2:;
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l7;
si2=312U;
si1*=si2;
si0+=si1;
l19=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
l20=si0;
L13:;
{
si0=l6;
l13=si0;
si1=312U;
si0+=si1;
l6=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+224U);
l5=si0;
si1=l13;
si2=232U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=272U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+212U);
l12=si0;
si1=l13;
si2=220U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=120U;
si1*=si2;
si0+=si1;
l10=si0;
si0=0U;
l14=si0;
L14:;
{
sd0=l17;
l18=sd0;
si0=l14;
l7=si0;
si0=l11;
l16=si0;
L16:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L18;
}
L19:;
{
si0=l12;
si1=l10;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l12;
si1=4U;
si0+=si1;
l14=si0;
si0=l12;
si1=120U;
si0+=si1;
l11=si0;
l12=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L19;
}
}
si0=l11;
si1=-112U;
si0+=si1;
l15=si0;
si0=l11;
l12=si0;
goto L17;
L18:;
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
L20:;
{
si0=l5;
si1=l9;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
si1=156U;
si0+=si1;
l12=si0;
si0=l5;
si1=272U;
si0+=si1;
l11=si0;
l5=si0;
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L20;
}
}
si0=l11;
si1=-112U;
si0+=si1;
l15=si0;
si0=0U;
l12=si0;
si0=l11;
l5=si0;
L17:;
si0=l1;
si1=l2;
si2=l14;
si3=l15;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
sd0=f14839(i,si0,si1,si2,si3);
l17=sd0;
sd1=0.80000000000000004;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l7;
si0=!(si0);
sd1=l18;
sd2=l17;
si1=sd1 < sd2;
si0|=si1;
if(si0){
goto L14;
}
goto L16;
}
L15:;
}
si0=l7;
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
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l13;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l12=si0;
sj0=0ULL;
l21=sj0;
si0=l20;
l14=si0;
si0=l3;
l5=si0;
L24:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L23;
}
L25:;
sj0=l21;
sj1=4294967297ULL;
sj0+=sj1;
l21=sj0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
if(si0){
goto L24;
}
goto L22;
}
L23:;
si0=l8;
si1=l16;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=4U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l8;
si1=1092144U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
sj1=3ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l8;
si1=155U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l8;
si1=155U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l8;
si1=155U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
si1=1092080U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l8;
si1=2U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l8;
si1=l8;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l8;
si2=164U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l8;
si1=l8;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=176U;
si0+=si1;
si1=l8;
si2=104U;
si1+=si2;
f64(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+176U);
l5=si0;
if(si0){
goto L21;
}
L22:;
si0=l6;
si1=l19;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L12;
L21:;
}
si0=l8;
sj0=i64_load(&i->m0,(U64)si0+180U);
l22=sj0;
si0=l8;
si1=l16;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l8;
sj1=l22;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
sj1=l21;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l8;
si1=l19;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l8;
si1=l8;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
si1=40U;
si0+=si1;
si1=l8;
si2=128U;
si1+=si2;
si2=l8;
si3=72U;
si2+=si3;
f434(i,si0,si1,si2);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
l5=si0;
if(si0){
goto L11;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+52U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=60U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l8;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f501(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l15=0;
U32 l16=0;
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
U32 l27=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=21U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=2147483632U;
si0&=si1;
l4=si0;
if(si0){
goto L6;
}
si0=8U;
si1=0U;
si0=f15030(i,si0,si1);
l5=si0;
goto L5;
L6:;
si0=l4;
si0=f15022(i,si0);
l5=si0;
L5:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=128U;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-16U;
si0+=si1;
l7=si0;
si0=l0;
si1=32U;
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
si0=16U;
l11=si0;
L9:;
{
si0=l0;
si1=l9;
l12=si1;
si2=4U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l13=si0;
si0=l1;
si1=l12;
si0-=si1;
l14=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l13;
sj0=i64_load(&i->m0,(U64)si0+16U);
l15=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 < sj1;
if(si0){
goto L13;
}
si0=2U;
l16=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=l4;
si0+=si1;
l4=si0;
si0=2U;
l16=si0;
L14:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L11;
}
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
sj0=l17;
l15=sj0;
si0=l14;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
si0=si0 == si1;
if(si0){
goto L12;
}
goto L14;
}
L13:;
si0=2U;
l16=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l8;
si1=l4;
si0+=si1;
l4=si0;
si0=2U;
l16=si0;
L16:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L15;
}
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
sj0=l17;
l15=sj0;
si0=l14;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
si0=l14;
l16=si0;
L15:;
si0=l16;
si1=l12;
si0+=si1;
l9=si0;
si1=l16;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l16;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l16;
si1=1U;
si0>>=(si1&31);
l18=si0;
si0=l7;
si1=l9;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l13;
l14=si0;
L19:;
{
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l14;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l19=si0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l19;
si1=l4;
si2=8U;
si1+=si2;
l21=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-16U;
si0+=si1;
l4=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L19;
}
goto L10;
}
L18:;
si0=l12;
si1=l9;
si2=1092316U;
f683(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l9;
si1=l1;
si2=1092316U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l14;
l16=si0;
L11:;
si0=l16;
si1=l12;
si0+=si1;
l9=si0;
L10:;
si0=l9;
si1=l12;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l16;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
L23:;
si0=l9;
si1=l12;
si0-=si1;
l4=si0;
goto L20;
L22:;
si0=1092504U;
si1=44U;
si2=1092548U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l12;
si1=10U;
si0+=si1;
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l13;
si1=l9;
si2=l12;
si1-=si2;
l4=si1;
si2=l16;
si3=1U;
si4=l16;
si5=1U;
si4=si4 > si5;
si2=si4?si2:si3;
f502(i,si0,si1,si2);
L20:;
si0=l10;
si1=l11;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si1=4U;
si0<<=(si1&31);
l14=si0;
if(si0){
goto L27;
}
si0=4U;
si1=0U;
si0=f15030(i,si0,si1);
l14=si0;
goto L26;
L27:;
si0=l14;
si0=f15022(i,si0);
l14=si0;
L26:;
si0=l14;
si0=!(si0);
if(si0){
goto L24;
}
si0=l10;
si1=1U;
si0<<=(si1&31);
l11=si0;
si0=l14;
si1=l6;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l14=si0;
si0=l6;
f15024(i,si0);
si0=l14;
l6=si0;
L25:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0+=si1;
l22=si0;
l10=si0;
si0=l22;
si1=2U;
si0=si0 < si1;
if(si0){
goto L28;
}
L29:;
{
si0=l6;
si1=l22;
l10=si1;
si2=-1U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
l18=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l10;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=2U;
l10=si0;
goto L28;
L34:;
si0=l6;
si1=l10;
si2=-3U;
si1+=si2;
l13=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l16;
si2=l4;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l10;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=3U;
l10=si0;
goto L28;
L35:;
si0=l18;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
si2=l16;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L32;
}
goto L28;
L33:;
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l6;
si1=l10;
si2=-3U;
si1+=si2;
l13=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
L32:;
si0=l14;
si1=l4;
si0=si0 < si1;
if(si0){
goto L30;
}
L31:;
si0=l10;
si1=-2U;
si0+=si1;
l13=si0;
L30:;
si0=l10;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l10;
si1=l13;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 <= si1;
if(si0){
goto L40;
}
si0=l6;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si0+=si1;
l16=si0;
si1=l6;
si2=l13;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l25=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
l26=si1;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l16;
si1=l1;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l23;
si1=4U;
si0+=si1;
l27=si0;
si0=l0;
si1=l26;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=4U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
l4=si0;
si0=l16;
si1=4U;
si0<<=(si1&31);
l21=si0;
si0=l16;
si1=l26;
si0-=si1;
l20=si0;
si1=l12;
si0-=si1;
l19=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l5;
si1=l4;
si2=l19;
si3=4U;
si2<<=(si3&31);
l16=si2;
si0=f15143(i,si0,si1,si2);
l20=si0;
si1=l16;
si0+=si1;
l16=si0;
si0=l12;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L37;
}
si0=l19;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L37;
}
si0=l7;
si1=l21;
si0+=si1;
l18=si0;
L43:;
{
si0=l18;
si1=l4;
si2=-16U;
si3=0U;
si4=l16;
si5=-16U;
si4+=si5;
sj4=i64_load(&i->m0,(U64)si4);
l15=sj4;
si5=l4;
si6=-16U;
si5+=si6;
sj5=i64_load(&i->m0,(U64)si5);
l17=sj5;
si4=sj4 < sj5;
l19=si4;
si2=si4?si2:si3;
si1+=si2;
l4=si1;
si2=l16;
si3=-16U;
si4=0U;
sj5=l15;
sj6=l17;
si5=sj5 >= sj6;
si3=si5?si3:si4;
si2+=si3;
l16=si2;
si3=l19;
si1=si3?si1:si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
si1=l19;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l18;
si1=-16U;
si0+=si1;
l18=si0;
si0=l16;
si1=l20;
si0=si0 <= si1;
if(si0){
goto L37;
}
goto L43;
}
L42:;
si0=l5;
si1=l14;
si2=l18;
si0=f15143(i,si0,si1,si2);
l19=si0;
si1=l18;
si0+=si1;
l16=si0;
si0=l12;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L44;
}
si0=l19;
l18=si0;
goto L36;
L44:;
si0=l20;
si1=l12;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L45;
}
si0=l19;
l18=si0;
goto L36;
L45:;
si0=l0;
si1=l21;
si0+=si1;
l21=si0;
si0=l19;
l18=si0;
L46:;
{
si0=l14;
si1=l4;
si2=l18;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
si4=l18;
sj4=i64_load(&i->m0,(U64)si4);
l17=sj4;
si3=sj3 < sj4;
l20=si3;
si1=si3?si1:si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l19;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l18;
sj1=l15;
sj2=l17;
si1=sj1 >= sj2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l4;
si1=l20;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l21;
si0=si0 < si1;
if(si0){
goto L46;
}
goto L36;
}
L41:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1092228U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1092236U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1092332U;
f614(i,si0,si1);
UNREACHABLE;
L40:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1092228U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1092236U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1092348U;
f614(i,si0,si1);
UNREACHABLE;
L39:;
si0=l26;
si1=l16;
si2=1092364U;
f683(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l16;
si1=l1;
si2=1092364U;
f597(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l4;
l14=si0;
si0=l20;
l18=si0;
L36:;
si0=l14;
si1=l18;
si2=l16;
si3=l18;
si2-=si3;
si0=f15143(i,si0,si1,si2);
si0=l27;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=l24;
si2=l12;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l25;
si2=8U;
si1+=si2;
si2=l10;
si3=l13;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=1U;
l10=si0;
si0=l22;
si1=1U;
si0=si0 > si1;
if(si0){
goto L29;
}
}
L28:;
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
goto L9;
L24:;
}
si0=1092380U;
si1=43U;
si2=1092456U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l12;
si1=l9;
si2=1092488U;
f683(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1092380U;
si1=43U;
si2=1092424U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=1U;
f502(i,si0,si1,si2);
goto L2;
L3:;
si0=l6;
f15024(i,si0);
si0=l5;
f15024(i,si0);
L2:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1092380U;
si1=43U;
si2=1092440U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f502(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l2;
si1=-1U;
si0+=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-16U;
si0+=si1;
l3=si0;
L3:;
{
si0=l0;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si1=l4;
si2=-16U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 >= sj1;
if(si0){
goto L4;
}
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l8=si0;
si0=l3;
l6=si0;
L6:;
{
sj0=l5;
si1=l6;
si2=-16U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
l6=si0;
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
l6=si0;
L5:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
goto L0;
L1:;
si0=1092580U;
si1=46U;
si2=1092628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f503(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=21U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=12U;
si0*=si1;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=128U;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-12U;
si0+=si1;
l6=si0;
si0=l0;
si1=32U;
si0+=si1;
l7=si0;
si0=16U;
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
L7:;
{
si0=l0;
si1=l9;
l11=si1;
si2=12U;
si1*=si2;
l12=si1;
si0+=si1;
l13=si0;
si0=l1;
si1=l11;
si0-=si1;
l14=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l13;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l16=si2;
si3=l13;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l17=si3;
si4=l16;
si5=l17;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l18=si0;
si1=l16;
si2=l17;
si1-=si2;
si2=l18;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=2U;
l18=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=l12;
si0+=si1;
l17=si0;
si0=2U;
l18=si0;
L12:;
{
si0=l17;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l15;
si2=l17;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l16;
si4=l12;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l15=si0;
si1=l12;
si2=l16;
si1-=si2;
si2=l15;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l17;
si1=12U;
si0+=si1;
l17=si0;
si0=l12;
l16=si0;
si0=l19;
l15=si0;
si0=l14;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L12;
}
L11:;
si0=2U;
l18=si0;
si0=l14;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l7;
si1=l12;
si0+=si1;
l17=si0;
si0=2U;
l18=si0;
L14:;
{
si0=l17;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l15;
si2=l17;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l16;
si4=l12;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l15=si0;
si1=l12;
si2=l16;
si1-=si2;
si2=l15;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=l17;
si1=12U;
si0+=si1;
l17=si0;
si0=l12;
l16=si0;
si0=l19;
l15=si0;
si0=l14;
si1=l18;
si2=1U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l14;
l18=si0;
L13:;
si0=l18;
si1=l11;
si0+=si1;
l9=si0;
si1=l18;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l18;
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l18;
si1=1U;
si0>>=(si1&31);
l12=si0;
si0=l6;
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
l16=si0;
si0=l13;
l17=si0;
L17:;
{
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l17;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
l15=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l15;
si1=l16;
si2=8U;
si1+=si2;
l19=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=-12U;
si0+=si1;
l16=si0;
si0=l17;
si1=12U;
si0+=si1;
l17=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L17;
}
goto L8;
}
L16:;
si0=l11;
si1=l9;
si2=1092316U;
f683(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l9;
si1=l1;
si2=1092316U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l14;
l18=si0;
L9:;
si0=l18;
si1=l11;
si0+=si1;
l9=si0;
L8:;
si0=l9;
si1=l11;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l18;
si1=10U;
si0=si0 < si1;
if(si0){
goto L19;
}
L21:;
si0=l9;
si1=l11;
si0-=si1;
l16=si0;
goto L18;
L20:;
si0=1092504U;
si1=44U;
si2=1092548U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l11;
si1=10U;
si0+=si1;
l16=si0;
si1=l1;
si2=l16;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l13;
si1=l9;
si2=l11;
si1-=si2;
l16=si1;
si2=l18;
si3=1U;
si4=l18;
si5=1U;
si4=si4 > si5;
si2=si4?si2:si3;
f504(i,si0,si1,si2);
L18:;
si0=l10;
si1=l8;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si1=4U;
si0<<=(si1&31);
l17=si0;
if(si0){
goto L25;
}
si0=4U;
si1=0U;
si0=f15030(i,si0,si1);
l17=si0;
goto L24;
L25:;
si0=l17;
si0=f15022(i,si0);
l17=si0;
L24:;
si0=l17;
si0=!(si0);
if(si0){
goto L22;
}
si0=l10;
si1=1U;
si0<<=(si1&31);
l8=si0;
si0=l17;
si1=l5;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l17=si0;
si0=l5;
f15024(i,si0);
si0=l17;
l5=si0;
L23:;
si0=l5;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l17;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0+=si1;
l21=si0;
l10=si0;
si0=l21;
si1=2U;
si0=si0 < si1;
if(si0){
goto L26;
}
L27:;
{
si0=l5;
si1=l21;
l10=si1;
si2=-1U;
si1+=si2;
l21=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l17;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
l12=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l10;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=2U;
l10=si0;
goto L26;
L32:;
si0=l5;
si1=l10;
si2=-3U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l18;
si2=l16;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l10;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=3U;
l10=si0;
goto L26;
L33:;
si0=l12;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l17;
si2=l18;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L30;
}
goto L26;
L31:;
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l5;
si1=l10;
si2=-3U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
L30:;
si0=l17;
si1=l16;
si0=si0 < si1;
if(si0){
goto L28;
}
L29:;
si0=l10;
si1=-2U;
si0+=si1;
l22=si0;
L28:;
si0=l10;
si1=l22;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l10;
si1=l22;
si2=1U;
si1+=si2;
l16=si1;
si0=si0 <= si1;
if(si0){
goto L38;
}
si0=l5;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si0+=si1;
l18=si0;
si1=l5;
si2=l22;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l25=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
l26=si1;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l18;
si1=l1;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l23;
si1=4U;
si0+=si1;
l27=si0;
si0=l0;
si1=l26;
si2=12U;
si1*=si2;
si0+=si1;
l17=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=12U;
si1*=si2;
l12=si1;
si0+=si1;
l16=si0;
si0=l18;
si1=12U;
si0*=si1;
l15=si0;
si0=l18;
si1=l26;
si0-=si1;
l11=si0;
si1=l13;
si0-=si1;
l18=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l4;
si1=l16;
si2=l18;
si3=12U;
si2*=si3;
l12=si2;
si0=f15143(i,si0,si1,si2);
l19=si0;
si1=l12;
si0+=si1;
l12=si0;
si0=l13;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L35;
}
si0=l18;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L35;
}
si0=l6;
si1=l15;
si0+=si1;
l18=si0;
L41:;
{
si0=l18;
si1=l12;
si2=l12;
si3=-12U;
si2+=si3;
l15=si2;
si2=i32_load(&i->m0,(U64)si2);
si3=l16;
si4=-12U;
si3+=si4;
l11=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l15;
si5=8U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
l15=si4;
si5=l11;
si6=8U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
l11=si5;
si6=l15;
si7=l11;
si6=si6 < si7;
si4=si6?si4:si5;
si2=f15142(i,si2,si3,si4);
l14=si2;
si3=l15;
si4=l11;
si3-=si4;
si4=l14;
si2=si4?si2:si3;
l15=si2;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l11=si2;
si3=-1U;
si2^=si3;
si3=12U;
si2*=si3;
si1+=si2;
l12=si1;
si2=l16;
si3=l11;
si4=12U;
si3*=si4;
si2+=si3;
l16=si2;
si3=l15;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l18;
si1=-12U;
si0+=si1;
l18=si0;
si0=l12;
si1=l19;
si0=si0 <= si1;
if(si0){
goto L35;
}
goto L41;
}
L40:;
si0=l4;
si1=l17;
si2=l12;
si0=f15143(i,si0,si1,si2);
l18=si0;
si1=l12;
si0+=si1;
l12=si0;
si0=l13;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L42;
}
si0=l18;
l18=si0;
goto L34;
L42:;
si0=l11;
si1=l13;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L43;
}
si0=l18;
l18=si0;
goto L34;
L43:;
si0=l0;
si1=l15;
si0+=si1;
l19=si0;
si0=l18;
l18=si0;
L44:;
{
si0=l17;
si1=l18;
si2=l16;
si3=l16;
si3=i32_load(&i->m0,(U64)si3);
si4=l18;
si4=i32_load(&i->m0,(U64)si4);
si5=l16;
si6=8U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
l15=si5;
si6=l18;
si7=8U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
l11=si6;
si7=l15;
si8=l11;
si7=si7 < si8;
si5=si7?si5:si6;
si3=f15142(i,si3,si4,si5);
l14=si3;
si4=l15;
si5=l11;
si4-=si5;
si5=l14;
si3=si5?si3:si4;
l14=si3;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
l15=si3;
si1=si3?si1:si2;
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l11;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=12U;
si0+=si1;
l17=si0;
si0=l18;
si1=l15;
si2=12U;
si1*=si2;
si0+=si1;
l18=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l16;
si1=l14;
si2=31U;
si1>>=(si2&31);
si2=12U;
si1*=si2;
si0+=si1;
l16=si0;
si1=l19;
si0=si0 < si1;
if(si0){
goto L44;
}
goto L34;
}
L39:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1092228U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1092236U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1092332U;
f614(i,si0,si1);
UNREACHABLE;
L38:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1092228U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1092236U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1092348U;
f614(i,si0,si1);
UNREACHABLE;
L37:;
si0=l26;
si1=l18;
si2=1092364U;
f683(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l18;
si1=l1;
si2=1092364U;
f597(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l16;
l17=si0;
si0=l19;
l18=si0;
L34:;
si0=l17;
si1=l18;
si2=l12;
si3=l18;
si2-=si3;
si0=f15143(i,si0,si1,si2);
si0=l27;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=l24;
si2=l13;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l25;
si2=8U;
si1+=si2;
si2=l10;
si3=l22;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=1U;
l10=si0;
si0=l21;
si1=1U;
si0=si0 > si1;
if(si0){
goto L27;
}
}
L26:;
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
goto L7;
L22:;
}
si0=1092380U;
si1=43U;
si2=1092456U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l11;
si1=l9;
si2=1092488U;
f683(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1092380U;
si1=43U;
si2=1092424U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=1U;
f504(i,si0,si1,si2);
goto L2;
L3:;
si0=l5;
f15024(i,si0);
si0=l4;
f15024(i,si0);
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1092380U;
si1=43U;
si2=1092440U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f504(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=l2;
si1=-1U;
si0+=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l2;
si1=12U;
si0*=si1;
si1=l0;
si0+=si1;
si1=-24U;
si0+=si1;
l3=si0;
L3:;
{
si0=l0;
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si2=-12U;
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=8U;
si2+=si3;
l7=si2;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l6;
si4=8U;
si3+=si4;
l9=si3;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
si4=l8;
si5=l10;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l11=si0;
si1=l8;
si2=l10;
si1-=si2;
si2=l11;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l7=si0;
si0=l3;
l4=si0;
L6:;
{
si0=l4;
si1=12U;
si0+=si1;
l6=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si3=l4;
si4=8U;
si3+=si4;
l9=si3;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
si4=l8;
si5=l10;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l11=si0;
si1=l8;
si2=l10;
si1-=si2;
si2=l11;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l6;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
si0=l2;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
l6=si0;
L5:;
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
goto L0;
L1:;
si0=1092580U;
si1=46U;
si2=1092628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f505(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si1=1U;
si0>>=(si1&31);
l2=si0;
si1=2147483646U;
si0&=si1;
l3=si0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=13U;
si0<<=(si1&31);
si1=l1;
si0^=si1;
l5=si0;
si1=17U;
si0>>=(si1&31);
si1=l5;
si0^=si1;
l5=si0;
si1=5U;
si0<<=(si1&31);
si1=l5;
si0^=si1;
l6=si0;
si1=-1U;
si2=l1;
si3=-1U;
si2+=si3;
si2=I32_CLZ(si2);
si1>>=(si2&31);
l7=si1;
si0&=si1;
l5=si0;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
l4=si0;
goto L1;
L3:;
si0=l6;
si1=13U;
si0<<=(si1&31);
si1=l6;
si0^=si1;
l5=si0;
si1=17U;
si0>>=(si1&31);
si1=l5;
si0^=si1;
l5=si0;
si1=5U;
si0<<=(si1&31);
si1=l5;
si0^=si1;
l6=si0;
si1=l7;
si0&=si1;
l5=si0;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0|=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l6;
si1=13U;
si0<<=(si1&31);
si1=l6;
si0^=si1;
l5=si0;
si1=17U;
si0>>=(si1&31);
si1=l5;
si0^=si1;
l5=si0;
si1=5U;
si0<<=(si1&31);
si1=l5;
si0^=si1;
si1=l7;
si0&=si1;
l5=si0;
si1=0U;
si2=l1;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
si0-=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l1;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l0=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L2:;
si0=l5;
si1=l1;
si2=1092472U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=l1;
si2=1092472U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f506(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=49U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
l4=si0;
si0=1U;
l5=si0;
L2:;
{
si0=l4;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l2;
si4=l7;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l3=si0;
si1=l7;
si2=l2;
si1-=si2;
si2=l3;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=l1;
si0=si0 == si1;
goto L0;
L3:;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l7;
l2=si0;
si0=l6;
l3=si0;
si0=l1;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l1;
si1=l1;
si0=si0 == si1;
goto L0;
L1:;
si0=0U;
l5=si0;
si0=1U;
l4=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l2;
si4=l7;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l3=si0;
si1=l7;
si2=l2;
si1-=si2;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L8;
}
si0=l1;
si1=-2U;
si0+=si1;
l8=si0;
si0=l0;
si1=20U;
si0+=si1;
l2=si0;
si0=1U;
l9=si0;
si0=0U;
l5=si0;
L9:;
{
si0=l8;
si1=l5;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l7;
si0-=si1;
l10=si0;
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l6;
si2=l4;
si3=l7;
si4=l4;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
l7=si0;
si0=l11;
l6=si0;
si0=l3;
si1=l10;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L9;
}
}
si0=l5;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L5;
}
L8:;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l7;
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l0;
si1=l4;
si2=l5;
f507(i,si0,si1,si2);
si0=l0;
si1=l4;
f508(i,si0,si1);
L10:;
si0=l4;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l2;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l5=si0;
si1=l2;
si2=l7;
si1-=si2;
si2=l5;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L15;
}
si0=1U;
l2=si0;
goto L14;
L15:;
si0=l1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
si0=1U;
l9=si0;
L16:;
{
si0=l8;
si1=l4;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0-=si1;
l10=si0;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l6;
si2=l5;
si3=l2;
si4=l5;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
l2=si0;
si0=l11;
l6=si0;
si0=l3;
si1=l10;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L16;
}
}
si0=l4;
si1=l1;
si0=si0 < si1;
l2=si0;
L14:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l7;
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l0;
si1=l4;
si2=l5;
f507(i,si0,si1,si2);
si0=l0;
si1=l4;
f508(i,si0,si1);
L17:;
si0=l4;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l2;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l5=si0;
si1=l2;
si2=l7;
si1-=si2;
si2=l5;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L12;
}
si0=1U;
l2=si0;
goto L11;
L13:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L5;
}
goto L4;
L12:;
si0=l1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
si0=1U;
l9=si0;
L18:;
{
si0=l8;
si1=l4;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0-=si1;
l10=si0;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l6;
si2=l5;
si3=l2;
si4=l5;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
l2=si0;
si0=l11;
l6=si0;
si0=l3;
si1=l10;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L18;
}
}
si0=l4;
si1=l1;
si0=si0 < si1;
l2=si0;
L11:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l7;
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l0;
si1=l4;
si2=l5;
f507(i,si0,si1,si2);
si0=l0;
si1=l4;
f508(i,si0,si1);
L19:;
si0=0U;
l3=si0;
si0=l4;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l2;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l5=si0;
si1=l2;
si2=l7;
si1-=si2;
si2=l5;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L21;
}
si0=1U;
l3=si0;
goto L20;
L21:;
si0=l1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
si0=1U;
l9=si0;
L22:;
{
si0=l8;
si1=l4;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0-=si1;
l10=si0;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l6;
si2=l5;
si3=l2;
si4=l5;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
l2=si0;
si0=l11;
l6=si0;
si0=l3;
si1=l10;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L22;
}
}
si0=l4;
si1=l1;
si0=si0 < si1;
l3=si0;
L20:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l7;
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l0;
si1=l4;
si2=l5;
f507(i,si0,si1,si2);
si0=l0;
si1=l4;
f508(i,si0,si1);
L23:;
si0=0U;
l3=si0;
si0=l4;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si3=l7;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l2;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l5=si0;
si1=l2;
si2=l7;
si1-=si2;
si2=l5;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L25;
}
si0=1U;
l3=si0;
goto L24;
L25:;
si0=l1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
si0=1U;
l9=si0;
L26:;
{
si0=l8;
si1=l4;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0-=si1;
l10=si0;
si0=l7;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l6;
si2=l5;
si3=l2;
si4=l5;
si5=l2;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
l2=si0;
si0=l11;
l6=si0;
si0=l3;
si1=l10;
si2=l3;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L26;
}
}
si0=l4;
si1=l1;
si0=si0 < si1;
l3=si0;
L24:;
si0=1U;
l9=si0;
si0=l4;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l2;
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l9=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=l4;
si2=l5;
f507(i,si0,si1,si2);
si0=l0;
si1=l4;
f508(i,si0,si1);
L7:;
si0=l9;
goto L0;
L6:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
L5:;
si0=l4;
si1=l1;
si2=1092564U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=l1;
si2=1092564U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f507(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 sj1;
si0=l2;
si1=-1U;
si0+=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l3=si0;
L3:;
{
si0=l0;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si2=-8U;
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l6;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l8=si3;
si4=l7;
si5=l8;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l9=si0;
si1=l7;
si2=l8;
si1-=si2;
si2=l9;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l4;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l10=si0;
si0=l3;
l8=si0;
L6:;
{
si0=l0;
si1=l8;
si0+=si1;
l4=si0;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si1=l4;
si2=-16U;
si1+=si2;
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=l4;
si4=-12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l4=si3;
si4=l7;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l9=si0;
si1=l7;
si2=l4;
si1-=si2;
si2=l9;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l6;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
l6=si0;
L5:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
goto L0;
L1:;
si0=1092580U;
si1=46U;
si2=1092628U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f508(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=l0;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l0;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l5=si3;
si4=l4;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l6=si0;
si1=l4;
si2=l5;
si1-=si2;
si2=l6;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l0;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l5;
si4=l0;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l6=si0;
si1=l0;
si2=l5;
si1-=si2;
si2=l6;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si1=-2U;
si0+=si1;
l6=si0;
L4:;
{
si0=l4;
si1=-8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=12U;
si0+=si1;
l0=si0;
si0=l4;
si1=8U;
si0+=si1;
l1=si0;
si0=l4;
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l0=si2;
si3=l5;
si4=l0;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l1=si0;
si1=l0;
si2=l5;
si1-=si2;
si2=l1;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
goto L4;
}
L3:;
si0=l4;
l2=si0;
L2:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
L0:;
}

void f509(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1;
si0=i->g0;
si1=256U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=21U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
si0=1U;
l7=si0;
L5:;
{
si0=l1;
l8=si0;
si0=l0;
l9=si0;
L8:;
{
si0=l4;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
f510(i,si0,si1);
goto L1;
L9:;
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l0;
si1=l1;
f505(i,si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
L10:;
si0=l1;
si1=2U;
si0>>=(si1&31);
l10=si0;
si1=3U;
si0*=si1;
l11=si0;
si0=l10;
si1=1U;
si0<<=(si1&31);
l12=si0;
si0=0U;
l13=si0;
si0=l1;
si1=49U;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l10;
si1=1U;
si0+=si1;
l14=si0;
si0=0U;
l15=si0;
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l0;
si2=l10;
si3=-1U;
si2+=si3;
l18=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l19=si1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l16;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l19;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l19=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l19;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l10;
l21=si0;
si0=l18;
l10=si0;
si0=l13;
l16=si0;
si0=l17;
l20=si0;
goto L12;
L13:;
si0=1U;
l15=si0;
si0=l18;
l21=si0;
L12:;
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l20;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l16;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l19=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l19;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l21;
l14=si0;
si0=l16;
l13=si0;
si0=l20;
l18=si0;
goto L14;
L15:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L14:;
si0=l18;
si1=l0;
si2=l10;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l20=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l20;
si0=si2?si0:si1;
l17=si0;
si1=31U;
si0>>=(si1&31);
si1=l15;
si0+=si1;
l15=si0;
si0=l12;
si1=1U;
si0|=si1;
l20=si0;
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si1=l0;
si2=l12;
si3=-1U;
si2+=si3;
l19=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l21=si1;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=l16;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l21;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l21=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l21;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l12;
l23=si0;
si0=l19;
l12=si0;
si0=l13;
l16=si0;
si0=l22;
l18=si0;
goto L16;
L17:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l19;
l23=si0;
L16:;
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si1=l18;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l16;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l21=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l21;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l23;
l20=si0;
si0=l16;
l13=si0;
si0=l18;
l19=si0;
goto L18;
L19:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L18:;
si0=l19;
si1=l0;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l13;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l18=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l18;
si0=si2?si0:si1;
l21=si0;
si1=31U;
si0>>=(si1&31);
si1=l15;
si0+=si1;
l18=si0;
si0=l11;
si1=1U;
si0+=si1;
l15=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si1=l0;
si2=l11;
si3=-1U;
si2+=si3;
l22=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l23=si1;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=l16;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l23;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l23=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l23;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l11;
l25=si0;
si0=l22;
l11=si0;
si0=l13;
l16=si0;
si0=l24;
l19=si0;
goto L20;
L21:;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si0=l22;
l25=si0;
L20:;
si0=l17;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
l22=si0;
si0=l21;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
l21=si0;
si0=l0;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l19;
si2=l13;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l16;
si4=l13;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l23=si0;
si1=l13;
si2=l16;
si1-=si2;
si2=l23;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L23;
}
si0=l25;
l15=si0;
si0=l16;
l13=si0;
si0=l19;
l17=si0;
goto L22;
L23:;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
L22:;
si0=l10;
si1=l14;
si2=l22;
si0=si2?si0:si1;
l10=si0;
si0=l12;
si1=l20;
si2=l21;
si0=si2?si0:si1;
l12=si0;
si0=l11;
si1=l15;
si2=l17;
si3=l0;
si4=l11;
si5=3U;
si4<<=(si5&31);
si3+=si4;
l16=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l13;
si5=l16;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
l16=si5;
si6=l13;
si7=l16;
si6=si6 < si7;
si4=si6?si4:si5;
si2=f15142(i,si2,si3,si4);
l14=si2;
si3=l13;
si4=l16;
si3-=si4;
si4=l14;
si2=si4?si2:si3;
l16=si2;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l11=si0;
si0=l16;
si1=31U;
si0>>=(si1&31);
si1=l18;
si0+=si1;
l13=si0;
L11:;
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l0;
si2=l10;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l15=si1;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l16;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l14=si2;
si3=l15;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l14;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l15=si0;
si1=l14;
si2=l16;
si1-=si2;
si2=l15;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L25;
}
si0=l12;
l19=si0;
si0=l10;
l12=si0;
si0=l14;
l16=si0;
si0=l18;
l20=si0;
goto L24;
L25:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l10;
l19=si0;
L24:;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l20;
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l16;
si4=l10;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l15=si0;
si1=l10;
si2=l16;
si1-=si2;
si2=l15;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l19;
l11=si0;
si0=l16;
l10=si0;
si0=l20;
l14=si0;
goto L26;
L27:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
L26:;
si0=l14;
si1=l0;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l16=si3;
si4=l10;
si5=l16;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l14=si0;
si1=l10;
si2=l16;
si1-=si2;
si2=l14;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L30;
}
si0=l11;
l12=si0;
goto L29;
L30:;
si0=l13;
si1=11U;
si0=si0 < si1;
l10=si0;
si0=1U;
l13=si0;
si0=l10;
if(si0){
goto L29;
}
si0=l1;
si1=1U;
si0>>=(si1&31);
l11=si0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=-8U;
si0+=si1;
l10=si0;
si0=l0;
l16=si0;
L31:;
{
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l16;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L31;
}
}
si0=l1;
si1=l12;
si2=-1U;
si1^=si2;
si0+=si1;
l12=si0;
si0=1U;
l10=si0;
goto L28;
L29:;
si0=l13;
si0=!(si0);
l10=si0;
L28:;
si0=l6;
si1=l7;
si2=l10;
si1&=si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=l0;
si1=l1;
si0=f506(i,si0,si1);
if(si0){
goto L1;
}
L32:;
si0=l3;
si0=!(si0);
if(si0){
goto L35;
}
si0=l12;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l16=si2;
si3=l10;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l16;
si5=l11;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l13=si0;
si1=l16;
si2=l11;
si1-=si2;
si2=l13;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L33;
}
si0=l0;
l9=si0;
si0=l1;
l8=si0;
L35:;
si0=l12;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l9;
si1=l9;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=12U;
si0+=si1;
l16=si0;
si0=l8;
si1=-1U;
si0+=si1;
l13=si0;
si0=l9;
si1=8U;
si0+=si1;
l14=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=0U;
l23=si0;
L36:;
{
si0=l16;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
si2=l16;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l10;
si4=l11;
si5=l10;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l12=si0;
si1=l11;
si2=l10;
si1-=si2;
si2=l12;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L6;
}
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l13;
si1=l23;
si2=1U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L36;
}
}
si0=l13;
l23=si0;
goto L6;
L34:;
si0=l12;
si1=l1;
si2=1092644U;
f594(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l18=si0;
si0=l0;
si1=12U;
si0+=si1;
l19=si0;
si0=l0;
si1=8U;
si0+=si1;
l17=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=0U;
l12=si0;
si0=l1;
l13=si0;
L37:;
{
si0=l12;
si1=l13;
si2=-1U;
si1+=si2;
l15=si1;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l19;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L39:;
{
si0=l20;
si1=l16;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=l16;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l10;
si5=l11;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l14=si0;
si1=l10;
si2=l11;
si1-=si2;
si2=l14;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L38;
}
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l15;
si1=l12;
si2=1U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L39;
}
}
si0=l15;
l12=si0;
L38:;
si0=l18;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
L41:;
{
si0=l12;
si1=l13;
si2=-1U;
si1+=si2;
l13=si1;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l16;
si1=4U;
si0+=si1;
l11=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l16;
si1=-8U;
si0+=si1;
l15=si0;
l16=si0;
si0=l20;
si1=l14;
si2=l10;
si3=l11;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l10;
si5=l11;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l14=si0;
si1=l10;
si2=l11;
si1-=si2;
si2=l14;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L41;
}
}
si0=l17;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l16;
si1=l15;
si2=8U;
si1+=si2;
l11=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
goto L37;
L40:;
}
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l12;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si0=l1;
si1=l10;
si0-=si1;
l1=si0;
si1=21U;
si0=si0 >= si1;
if(si0){
goto L8;
}
goto L2;
L42:;
}
si0=l10;
si1=l1;
si2=1092660U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l12;
si1=l8;
si2=1092724U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l23;
si1=l13;
si2=l23;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l20=si0;
si0=l9;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=-8U;
si0+=si1;
l16=si0;
si0=l8;
l27=si0;
L44:;
{
si0=l23;
si1=l27;
si2=-1U;
si1+=si2;
l27=si1;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l20;
l27=si0;
goto L43;
L45:;
si0=l16;
si1=4U;
si0+=si1;
l11=si0;
si0=l16;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
si0=l12;
si1=l15;
si2=l11;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l10;
si4=l11;
si5=l10;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l12=si0;
si1=l11;
si2=l10;
si1-=si2;
si2=l12;
si0=si2?si0:si1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L44;
}
}
L43:;
si0=l23;
si1=l27;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l27;
si1=l13;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l14;
si1=l27;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=128U;
l17=si0;
si0=0U;
l12=si0;
si0=0U;
l6=si0;
si0=0U;
l11=si0;
si0=0U;
l18=si0;
si0=128U;
l7=si0;
si0=l14;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
l1=si0;
L46:;
{
si0=l20;
si1=l1;
si0-=si1;
l16=si0;
si1=2056U;
si0=si0 < si1;
l22=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l16;
si1=3U;
si0>>=(si1&31);
l13=si0;
si0=l18;
si1=l11;
si0=si0 < si1;
l14=si0;
si1=l6;
si2=l12;
si1=si1 < si2;
si0|=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l13;
si1=-128U;
si0+=si1;
l16=si0;
si1=l17;
si2=l14;
si0=si2?si0:si1;
l17=si0;
si0=l7;
si1=l16;
si2=l13;
si3=l0;
si1=si3?si1:si2;
si2=l14;
si0=si2?si0:si1;
l7=si0;
goto L47;
L48:;
si0=l13;
si1=l16;
si2=4U;
si1>>=(si2&31);
l7=si1;
si0-=si1;
l17=si0;
L47:;
si0=l18;
si1=l11;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l7;
if(si0){
goto L50;
}
si0=l5;
l11=si0;
l18=si0;
goto L49;
L50:;
si0=0U;
l13=si0;
si0=l5;
l18=si0;
l11=si0;
si0=l1;
l16=si0;
L51:;
{
si0=l11;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
si2=l15;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l14=si3;
si4=l10;
si5=l14;
si6=l10;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15142(i,si1,si2,si3);
l0=si1;
si2=l14;
si3=l10;
si2-=si3;
si3=l0;
si1=si3?si1:si2;
si2=-1U;
si1^=si2;
si2=31U;
si1>>=(si2&31);
si0+=si1;
l11=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l7;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L51;
}
}
L49:;
si0=l6;
si1=l12;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l17;
if(si0){
goto L53;
}
si0=l5;
si1=128U;
si0+=si1;
l12=si0;
l6=si0;
goto L52;
L53:;
si0=l20;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l13=si0;
si0=l5;
si1=128U;
si0+=si1;
l6=si0;
l12=si0;
L54:;
{
si0=l12;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l12;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
si2=l15;
si3=l16;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l14=si3;
si4=l10;
si5=l14;
si6=l10;
si5=si5 < si6;
si3=si5?si3:si4;
si1=f15142(i,si1,si2,si3);
l0=si1;
si2=l14;
si3=l10;
si2-=si3;
si3=l0;
si1=si3?si1:si2;
si2=31U;
si1>>=(si2&31);
si0+=si1;
l12=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
si0=l17;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L54;
}
}
L52:;
si0=l11;
si1=l18;
si0-=si1;
l16=si0;
si1=l12;
si2=l6;
si1-=si2;
l13=si1;
si2=l16;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
l16=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
si1=l18;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l24=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l25=si0;
si0=l14;
si1=l20;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2);
l13=si2;
si3=-1U;
si2^=si3;
l0=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=1U;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l16;
si1=-1U;
si0+=si1;
l14=si0;
si1=1U;
si0&=si1;
l29=si0;
si0=l16;
si1=2U;
si0=si0 != si1;
if(si0){
goto L58;
}
goto L57;
L58:;
si0=l14;
si1=-2U;
si0&=si1;
l21=si0;
si0=0U;
l16=si0;
L59:;
{
si0=l20;
si1=l13;
si2=-1U;
si1^=si2;
si2=3U;
si1<<=(si2&31);
si2=-2048U;
si1|=si2;
si0+=si1;
si1=l1;
si2=l18;
si3=l16;
si2+=si3;
l13=si2;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l20;
si2=l6;
si3=l16;
si2+=si3;
l0=si2;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l1;
si2=l13;
si3=2U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l20;
si2=l0;
si3=2U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
l13=si2;
si3=-1U;
si2^=si3;
l0=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L59;
}
}
si0=l6;
si1=l16;
si0+=si1;
l6=si0;
si0=l18;
si1=l16;
si0+=si1;
l18=si0;
L57:;
si0=l29;
si0=!(si0);
if(si0){
goto L56;
}
si0=l20;
si1=l13;
si2=-1U;
si1^=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l18;
si2=i32_load8_u(&i->m0,(U64)si2+1U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l20;
si2=l6;
si2=i32_load8_u(&i->m0,(U64)si2+1U);
si3=-1U;
si2^=si3;
l0=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
L56:;
si0=l20;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l24;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l16;
si1=l25;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
L55:;
si0=l20;
si1=0U;
si2=l17;
si1-=si2;
si2=0U;
si3=l6;
si4=l12;
si3=si3 == si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=l1;
si1=l7;
si2=0U;
si3=l18;
si4=l11;
si3=si3 == si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l22;
si0=!(si0);
if(si0){
goto L46;
}
}
si0=l18;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l11;
si1=l18;
si0-=si1;
si1=1U;
si0&=si1;
if(si0){
goto L63;
}
si0=l11;
l12=si0;
si0=l20;
l16=si0;
goto L62;
L63:;
si0=l1;
si1=l11;
si2=-1U;
si1+=si2;
l12=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l13;
si1=l20;
si2=-8U;
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
L62:;
si0=l18;
si1=-1U;
si0^=si1;
si1=0U;
si2=l11;
si1-=si2;
si0=si0 == si1;
if(si0){
goto L60;
}
si0=l16;
si1=-16U;
si0+=si1;
l16=si0;
si0=l12;
si1=-2U;
si0+=si1;
l11=si0;
L64:;
{
si0=l1;
si1=l11;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l12;
si1=l16;
si2=8U;
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l11;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l12;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=-16U;
si0+=si1;
l16=si0;
si0=l18;
si1=l11;
si0=si0 < si1;
l12=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
si0=l12;
if(si0){
goto L64;
}
}
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
goto L60;
L61:;
si0=l6;
si1=l12;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l1;
l16=si0;
goto L60;
L65:;
si0=l12;
si1=l6;
si0-=si1;
si1=1U;
si0&=si1;
if(si0){
goto L67;
}
si0=l1;
l16=si0;
si0=l12;
l11=si0;
goto L66;
L67:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l1;
si1=l20;
si2=l12;
si3=-1U;
si2+=si3;
l11=si2;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l16=si0;
L66:;
si0=l6;
si1=-1U;
si0^=si1;
si1=0U;
si2=l12;
si1-=si2;
si0=si0 == si1;
if(si0){
goto L60;
}
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
L68:;
{
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l16;
si1=l20;
si2=l11;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l12;
si1=l20;
si2=l11;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l13=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l6;
si1=l11;
si0=si0 < si1;
l12=si0;
si0=l11;
si1=-2U;
si0+=si1;
l11=si0;
si0=l12;
if(si0){
goto L68;
}
}
L60:;
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l16;
si2=l28;
si1-=si2;
si2=3U;
si1>>=(si2&31);
si2=l23;
si1+=si2;
l1=si1;
si0=si0 <= si1;
if(si0){
goto L69;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l9;
si1=l9;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l8;
si2=l1;
si1-=si2;
l16=si1;
si2=l1;
si3=l16;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si0=l8;
si1=3U;
si0>>=(si1&31);
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si1=l16;
si2=-1U;
si1+=si2;
l16=si1;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l0;
si1=l16;
si2=l2;
si3=l10;
si4=l4;
f509(i,si0,si1,si2,si3,si4);
si0=l9;
l0=si0;
goto L70;
L71:;
si0=l9;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f509(i,si0,si1,si2,si3,si4);
si0=l10;
l3=si0;
si0=l16;
l1=si0;
L70:;
si0=l11;
si1=l12;
si0=si0 >= si1;
l6=si0;
si0=l23;
si1=l27;
si0=si0 >= si1;
l7=si0;
si0=l1;
si1=21U;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L2;
L69:;
}
si0=l1;
si1=l8;
si2=1092756U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l27;
si1=l13;
si2=1092740U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l23;
si1=l27;
si2=1092740U;
f683(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=1U;
f507(i,si0,si1,si2);
L1:;
si0=l5;
si1=256U;
si0+=si1;
i->g0=si0;
L0:;
}

void f510(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=l1;
si1=1U;
si0>>=(si1&31);
l2=si0;
L3:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si1=1U;
si0<<=(si1&31);
l3=si0;
si1=1U;
si0|=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l2;
l5=si0;
L5:;
{
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
l4=si0;
goto L6;
L7:;
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si2=i32_load(&i->m0,(U64)si2+4U);
l3=si2;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+4U);
l6=si3;
si4=l3;
si5=l6;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l7=si0;
si1=l3;
si2=l6;
si1-=si2;
si2=l7;
si0=si2?si0:si1;
si1=31U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
l4=si0;
L6:;
si0=l5;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si2=i32_load(&i->m0,(U64)si2+4U);
l6=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+4U);
l7=si3;
si4=l6;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l8=si0;
si1=l6;
si2=l7;
si1-=si2;
si2=l8;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
l5=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
l3=si0;
si1=1U;
si0|=si1;
l4=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L5;
}
}
L4:;
si0=l2;
if(si0){
goto L3;
}
}
si0=l1;
si1=-1U;
si0+=si1;
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l0;
si1=l0;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
si0=1U;
l4=si0;
si0=0U;
l3=si0;
L13:;
{
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l4;
l4=si0;
goto L14;
L15:;
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+4U);
l6=si2;
si3=l8;
si3=i32_load(&i->m0,(U64)si3+4U);
l7=si3;
si4=l6;
si5=l7;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l8=si0;
si1=l6;
si2=l7;
si1-=si2;
si2=l8;
si0=si2?si0:si1;
si1=31U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
l4=si0;
L14:;
si0=l3;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+4U);
l7=si2;
si3=l6;
si3=i32_load(&i->m0,(U64)si3+4U);
l8=si3;
si4=l7;
si5=l8;
si4=si4 < si5;
si2=si4?si2:si3;
si0=f15142(i,si0,si1,si2);
l2=si0;
si1=l7;
si2=l8;
si1-=si2;
si2=l2;
si0=si2?si0:si1;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L16;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
l3=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
l6=si0;
si1=1U;
si0|=si1;
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
L16:;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L12;
}
}
L11:;
si0=l5;
si1=l1;
si2=1092676U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l3;
si1=l5;
si2=1092692U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=l5;
si2=1092708U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
goto L0;
L2:;
si0=l4;
si1=l1;
si2=1092708U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=l1;
si2=1092692U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f511(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f512(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f513(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=120U;
si0*=si1;
l4=si0;
si0=l1;
si1=17895698U;
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
si2=120U;
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
f511(i,si0,si1,si2,si3);
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

void f514(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=536870912U;
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
si2=2U;
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
f511(i,si0,si1,si2,si3);
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

void f515(rustpythonInstance*i,U32 l0,U32 l1) {
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
f511(i,si0,si1,si2,si3);
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

void f516(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=272U;
si0*=si1;
l4=si0;
si0=l1;
si1=7895161U;
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
si2=272U;
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
f511(i,si0,si1,si2,si3);
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

void f517(rustpythonInstance*i,U32 l0,U32 l1) {
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
f511(i,si0,si1,si2,si3);
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

void f518(rustpythonInstance*i,U32 l0,U32 l1) {
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
f511(i,si0,si1,si2,si3);
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

void f519(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=48U;
si0*=si1;
l4=si0;
si0=l1;
si1=44739243U;
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
si2=48U;
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
f511(i,si0,si1,si2,si3);
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

void f520(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=134217728U;
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
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
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
f511(i,si0,si1,si2,si3);
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

void f521(rustpythonInstance*i,U32 l0,U32 l1) {
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
f511(i,si0,si1,si2,si3);
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

void f522(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=312U;
si0*=si1;
l4=si0;
si0=l1;
si1=6882961U;
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
si2=312U;
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
f511(i,si0,si1,si2,si3);
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

void f523(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=304U;
si0*=si1;
l4=si0;
si0=l1;
si1=7064091U;
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
si2=304U;
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
f511(i,si0,si1,si2,si3);
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

void f524(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=268435456U;
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
si2=3U;
si1<<=(si2&31);
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
f511(i,si0,si1,si2,si3);
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

void f525(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f511(i,si0,si1,si2,si3);
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

void f526(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=536870912U;
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
si2=2U;
si1<<=(si2&31);
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
f511(i,si0,si1,si2,si3);
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

void f527(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=134217728U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=4U;
si1<<=(si2&31);
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
f511(i,si0,si1,si2,si3);
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

void f528(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si0<<=(si1&31);
l4=si0;
si0=l2;
si1=134217728U;
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
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
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
f511(i,si0,si1,si2,si3);
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

void f529(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=248U;
si0*=si1;
l4=si0;
si0=l2;
si1=8659209U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
si2=248U;
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
f511(i,si0,si1,si2,si3);
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


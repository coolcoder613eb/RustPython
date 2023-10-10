#include "w2c2_base.h"

#include "rustpython.h"

void f2330(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=24U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
si2=l0;
si3=l2;
si2=si2 < si3;
l4=si2;
si0=si2?si0:si1;
si1=33U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
l4=si0;
si1=l2;
si2=2U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l7=si0;
si0=l0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=l6;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=l4;
si2=l5;
si0=f15391(i,si0,si1,si2);
si0=l4;
si1=l8;
si2=l6;
si0=f15390(i,si0,si1,si2);
goto L1;
L5:;
si0=l2;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=0U;
si1=l0;
si0-=si1;
l10=si0;
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
si0-=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
l11=si0;
si0=l2;
l5=si0;
L6:;
{
si0=l8;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
L8:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l5;
si1=l2;
si0+=si1;
l5=si0;
si0=l7;
l6=si0;
goto L8;
}
L7:;
si0=l10;
si1=l5;
si0+=si1;
l5=si0;
if(si0){
goto L9;
}
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=1U;
l9=si0;
L10:;
{
si0=l9;
si1=l2;
si0+=si1;
l4=si0;
si0=l8;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L11:;
{
si0=l8;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l4;
si1=l2;
si0+=si1;
l4=si0;
si0=l6;
l5=si0;
goto L11;
L12:;
si0=l6;
l5=si0;
si0=l4;
si1=l0;
si0-=si1;
l4=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L1;
}
L9:;
si0=l5;
si1=l11;
si2=l5;
si3=l11;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si0=l7;
l6=si0;
goto L6;
}
L4:;
si0=l3;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=l1;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l7;
si1=l8;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L1;
L3:;
si0=l4;
if(si0){
goto L14;
}
si0=l2;
si1=3U;
si0&=si1;
l12=si0;
si0=l2;
si1=-1U;
si0+=si1;
l13=si0;
si0=0U;
si1=l2;
si0-=si1;
l14=si0;
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0-=si1;
l15=si0;
si0=0U;
si1=l4;
si0-=si1;
l11=si0;
si0=0U;
si1=l2;
si2=-4U;
si1&=si2;
si0-=si1;
l10=si0;
L15:;
{
si0=0U;
l4=si0;
si0=l13;
si1=3U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=0U;
l6=si0;
si0=l1;
l4=si0;
L17:;
{
si0=l4;
si1=l11;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=8U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si2=12U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=l6;
si2=-4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
si0=0U;
si1=l6;
si0-=si1;
l4=si0;
L16:;
si0=l14;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L18;
}
si0=l15;
si1=l4;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l5;
si0+=si1;
l5=si0;
si0=l12;
l6=si0;
L19:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L19;
}
}
L18:;
si0=l1;
si1=l8;
si0+=si1;
l1=si0;
si0=l15;
si1=l11;
si0+=si1;
l15=si0;
si0=l0;
si1=l2;
si0-=si1;
l0=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l0;
si1=3U;
si0&=si1;
l13=si0;
si0=l0;
si1=-1U;
si0+=si1;
l14=si0;
si0=l1;
si1=l0;
si2=2U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
l15=si0;
si0=0U;
si1=l12;
si0-=si1;
l11=si0;
si0=0U;
si1=l0;
si2=-4U;
si1&=si2;
si0-=si1;
l10=si0;
L20:;
{
si0=0U;
l4=si0;
si0=l14;
si1=3U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=0U;
l6=si0;
si0=l1;
l4=si0;
L22:;
{
si0=l4;
si1=l11;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=4U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=l4;
si2=8U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l4;
si2=12U;
si1+=si2;
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l10;
si1=l6;
si2=-4U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=0U;
si1=l6;
si0-=si1;
l4=si0;
L21:;
si0=l13;
si0=!(si0);
if(si0){
goto L23;
}
si0=l15;
si1=l4;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l5;
si0+=si1;
l5=si0;
si0=l13;
l6=si0;
L24:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l15;
si1=l12;
si0+=si1;
l15=si0;
si0=l1;
si1=l12;
si0+=si1;
l1=si0;
si0=l2;
si1=l0;
si0-=si1;
l2=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L20;
}
}
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2331(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
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
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=l1;
si2=l2;
si3=48U;
si2+=si3;
f2315(i,si0,si1,si2);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l1=si0;
if(si0){
goto L1;
}
si0=8U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
f15271(i,si0);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f2332(rustpythonInstance*i,U32 l0,U32 l1) {
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
f2158(i,si0,si1,si2);
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

U32 f2333(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l0;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si0=f2354(i,si0,si1);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=500U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1306620U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1306624U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
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

void f2334(rustpythonInstance*i,U32 l0) {
L0:;
}

void f2335(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
F64 sd1;
si0=8U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
case 4:
goto L6;
case 5:
goto L5;
case 6:
goto L4;
case 7:
goto L3;
case 8:
goto L1;
case 9:
goto L2;
default:
goto L10;
}
L10:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L9:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l0;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=l0;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+8U);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0,sd1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=6U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=9U;
l2=si0;
L1:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

U32 f2336(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f2337(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=1U;
si2=l3;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L2;
case 2:
goto L10;
case 3:
goto L3;
case 4:
goto L9;
case 5:
goto L4;
case 6:
goto L5;
case 7:
goto L8;
case 8:
goto L6;
case 9:
goto L7;
default:
goto L11;
}
L11:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
l0=si0;
L13:;
{
si0=l4;
si1=l0;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
l0=si0;
goto L12;
L14:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=l1;
si0=f2337(i,si0,si1);
l2=si0;
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
l3=si0;
si0=l2;
if(si0){
goto L13;
}
}
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
L12:;
si0=l0;
si1=l4;
si0=si0 >= si1;
l3=si0;
goto L1;
L10:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 == sj1;
goto L0;
L9:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=6U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si0=!(si0);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
si2=0U;
si1=si1 != si2;
si0^=si1;
goto L0;
L8:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=9U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
goto L0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=11U;
si0=si0 == si1;
goto L0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
goto L0;
L5:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=8U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
goto L0;
L4:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
goto L0;
L3:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 == sj1;
goto L0;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2U;
si0+=si1;
l4=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=0U;
l3=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L15:;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si0=!(si0);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
si2=0U;
si1=si1 != si2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l5;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L16;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si0=sj0 == sj1;
goto L0;
L16:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
si0=!(si0);
goto L0;
L1:;
si0=l3;
L0:;
return si0;
}

U32 f2338(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=20U;
si0+=si1;
si1=748U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=748U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1306652U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f2339(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=-1U;
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L9;
case 2:
goto L9;
case 3:
goto L34;
case 4:
goto L34;
case 5:
goto L34;
case 6:
goto L34;
case 7:
goto L34;
case 8:
goto L34;
case 9:
goto L9;
case 10:
goto L9;
case 11:
goto L9;
case 12:
goto L9;
case 13:
goto L10;
case 14:
goto L10;
case 15:
goto L10;
case 16:
goto L10;
case 17:
goto L34;
case 18:
goto L9;
case 19:
goto L33;
case 20:
goto L32;
case 21:
goto L32;
case 22:
goto L9;
case 23:
goto L31;
case 24:
goto L10;
case 25:
goto L9;
case 26:
goto L9;
case 27:
goto L10;
case 28:
goto L9;
case 29:
goto L9;
case 30:
goto L9;
case 31:
goto L10;
case 32:
goto L10;
case 33:
goto L31;
case 34:
goto L30;
case 35:
goto L10;
case 36:
goto L10;
case 37:
goto L10;
case 38:
goto L10;
case 39:
goto L9;
case 40:
goto L9;
case 41:
goto L29;
case 42:
goto L29;
case 43:
goto L8;
case 44:
goto L28;
case 45:
goto L27;
case 46:
goto L7;
case 47:
goto L26;
case 48:
goto L25;
case 49:
goto L24;
case 50:
goto L6;
case 51:
goto L23;
case 52:
goto L9;
case 53:
goto L10;
case 54:
goto L9;
case 55:
goto L10;
case 56:
goto L10;
case 57:
goto L10;
case 58:
goto L10;
case 59:
goto L10;
case 60:
goto L22;
case 61:
goto L21;
case 62:
goto L10;
case 63:
goto L9;
case 64:
goto L10;
case 65:
goto L20;
case 66:
goto L4;
case 67:
goto L4;
case 68:
goto L4;
case 69:
goto L4;
case 70:
goto L4;
case 71:
goto L4;
case 72:
goto L4;
case 73:
goto L19;
case 74:
goto L18;
case 75:
goto L9;
case 76:
goto L3;
case 77:
goto L9;
case 78:
goto L9;
case 79:
goto L17;
case 80:
goto L9;
case 81:
goto L16;
case 82:
goto L15;
case 83:
goto L2;
case 84:
goto L9;
case 85:
goto L10;
case 86:
goto L10;
case 87:
goto L10;
case 88:
goto L14;
case 89:
goto L13;
case 90:
goto L10;
case 91:
goto L12;
case 92:
goto L11;
case 93:
goto L10;
default:
goto L9;
}
L34:;
si0=1U;
goto L0;
L33:;
si0=-3U;
goto L0;
L32:;
si0=-2U;
goto L0;
L31:;
si0=1U;
goto L0;
L30:;
si0=2U;
goto L0;
L29:;
si0=l2;
si1=-1U;
si0+=si1;
goto L0;
L28:;
si0=0U;
si1=l1;
si0-=si1;
goto L0;
L27:;
si0=l1;
si1=-1U;
si0^=si1;
goto L0;
L26:;
si0=2U;
goto L0;
L25:;
si0=-2U;
si1=l1;
si0-=si1;
goto L0;
L24:;
si0=-3U;
si1=l1;
si0-=si1;
goto L0;
L23:;
si0=-1U;
si1=1U;
si2=l2;
si0=si2?si0:si1;
goto L0;
L22:;
si0=l2;
goto L0;
L21:;
si0=l2;
si1=1U;
si0^=si1;
goto L0;
L20:;
si0=l1;
si1=255U;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L5;
}
L35:;
si0=1306668U;
si1=43U;
si2=1306740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1U;
si1=l1;
si2=1U;
si1<<=(si2&31);
si0-=si1;
goto L0;
L18:;
si0=1U;
si1=l1;
si0-=si1;
goto L0;
L17:;
si0=-2U;
goto L0;
L16:;
si0=1U;
goto L0;
L15:;
si0=l1;
si1=-1U;
si0+=si1;
goto L0;
L14:;
si0=1U;
goto L0;
L13:;
si0=0U;
si1=l2;
si0-=si1;
goto L0;
L12:;
si0=1U;
goto L0;
L11:;
si0=-2U;
goto L0;
L10:;
si0=0U;
l3=si0;
L9:;
si0=l3;
goto L0;
L8:;
si0=l1;
si1=240U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l1;
si2=1U;
si1&=si2;
si0+=si1;
si1=l1;
si2=2U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
si0+=si1;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=1U;
si1&=si2;
si0+=si1;
si1=-1U;
si0^=si1;
goto L0;
L7:;
si0=-2U;
si1=-1U;
si2=l1;
si0=si2?si0:si1;
goto L0;
L6:;
si0=-4U;
si1=-3U;
si2=l1;
si0=si2?si0:si1;
goto L0;
L5:;
si0=0U;
si1=l1;
si0-=si1;
goto L0;
L4:;
si0=1U;
si1=l1;
si0-=si1;
goto L0;
L3:;
si0=-2U;
si1=-1U;
si2=l1;
si0=si2?si0:si1;
goto L0;
L2:;
si0=l1;
si1=8U;
si0>>=(si1&31);
si1=255U;
si0&=si1;
si1=l1;
si2=255U;
si1&=si2;
si0+=si1;
goto L0;
L1:;
si0=1306668U;
si1=43U;
si2=1306740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f2340(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1307020U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1307008U;
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

U32 f2341(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1306799U;
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
si2=1306816U;
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

U32 f2342(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
si1=(U32)(U32)(I8)(U8)(si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1307056U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1307032U;
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

U32 f2343(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1307100U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1307080U;
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

U32 f2344(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1307172U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1307120U;
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

U32 f2345(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1307240U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1307224U;
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

U32 f2346(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f2347(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f2348(rustpythonInstance*i,U32 l0) {
L0:;
}

void f2349(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L8;
}
si0=l2;
if(si0){
goto L9;
}
si0=1U;
l1=si0;
goto L4;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
goto L6;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
if(si0){
goto L10;
}
si0=1U;
si1=0U;
si0=f15277(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l3;
f15271(i,si0);
goto L4;
L10:;
si0=l3;
si1=l2;
si0=f15274(i,si0,si1);
l1=si0;
goto L5;
L7:;
si0=l2;
if(si0){
goto L11;
}
si0=1U;
l1=si0;
goto L4;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
L6:;
si0=l2;
si0=f15269(i,si0);
l1=si0;
L5:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
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
goto L0;
L3:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2350(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l4;
si2=l2;
si3=l3;
si4=16U;
si3+=si4;
f2349(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

U32 f2351(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=4U;
l2=si0;
si0=l1;
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L1;
case 2:
goto L2;
default:
goto L1;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=1667594341U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
goto L0;
L4:;
si0=1U;
si1=4U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si3=1818326629U;
si2=si2 == si3;
si0=si2?si0:si1;
goto L0;
L2:;
si0=4U;
si1=2U;
si2=l0;
si3=1307472U;
si4=6U;
si2=f15389(i,si2,si3,si4);
si0=si2?si0:si1;
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

void f2352(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=1U;
l2=si0;
si0=4U;
l3=si0;
si0=l1;
si1=255U;
si0&=si1;
si1=-40U;
si0+=si1;
switch(si0){
case 0:
goto L2;
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
goto L2;
case 7:
goto L1;
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
goto L1;
case 16:
goto L1;
case 17:
goto L1;
case 18:
goto L1;
case 19:
goto L1;
case 20:
goto L2;
case 21:
goto L1;
case 22:
goto L2;
case 23:
goto L1;
case 24:
goto L1;
case 25:
goto L1;
case 26:
goto L1;
case 27:
goto L1;
case 28:
goto L1;
case 29:
goto L1;
case 30:
goto L2;
case 31:
goto L1;
case 32:
goto L1;
case 33:
goto L1;
case 34:
goto L1;
case 35:
goto L1;
case 36:
goto L1;
case 37:
goto L1;
case 38:
goto L2;
case 39:
goto L1;
case 40:
goto L1;
case 41:
goto L1;
case 42:
goto L1;
case 43:
goto L2;
case 44:
goto L2;
case 45:
goto L1;
case 46:
goto L1;
case 47:
goto L1;
case 48:
goto L1;
case 49:
goto L1;
case 50:
goto L1;
case 51:
goto L2;
case 52:
goto L1;
case 53:
goto L1;
case 54:
goto L1;
case 55:
goto L1;
case 56:
goto L1;
case 57:
goto L2;
case 58:
goto L1;
case 59:
goto L2;
case 60:
goto L1;
case 61:
goto L1;
case 62:
goto L1;
case 63:
goto L2;
case 64:
goto L1;
case 65:
goto L2;
case 66:
goto L1;
case 67:
goto L1;
case 68:
goto L1;
case 69:
goto L1;
case 70:
goto L1;
case 71:
goto L1;
case 72:
goto L1;
case 73:
goto L1;
case 74:
goto L1;
case 75:
goto L2;
case 76:
goto L1;
case 77:
goto L2;
case 78:
goto L1;
case 79:
goto L1;
case 80:
goto L1;
case 81:
goto L2;
case 82:
goto L1;
case 83:
goto L2;
default:
goto L1;
}
L2:;
si0=0U;
l2=si0;
si0=l1;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

U32 f2353(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1307552U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1307532U;
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

U32 f2354(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l0=si0;
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l4=si0;
si0=254U;
l5=si0;
si0=1U;
l6=si0;
goto L7;
L8:;
si0=2U;
l6=si0;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=1U;
l4=si0;
si0=253U;
l5=si0;
goto L7;
L9:;
si0=4U;
l6=si0;
si0=l3;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=2U;
l4=si0;
si0=251U;
l5=si0;
si0=3U;
l6=si0;
goto L7;
L10:;
si0=l3;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=3U;
l4=si0;
si0=247U;
l5=si0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l4;
si2=12U;
si1*=si2;
l4=si1;
si2=1307308U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=1307312U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l8=si3;
si3=i32_load(&i->m0,(U64)si3+12U);
l9=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=l5;
si0&=si1;
l10=si0;
L11:;
{
si0=l10;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=12U;
si0*=si1;
si1=1307296U;
si0+=si1;
l0=si0;
si0=l6;
si1=4U;
si2=l6;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l4=si0;
L12:;
{
si0=l4;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=20U;
si0+=si1;
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
l5=si0;
l0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=l3;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=1U;
l0=si0;
si0=l7;
si1=1307574U;
si2=3U;
si3=l9;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l10;
si1=l1;
si2=-1U;
si1^=si2;
si0&=si1;
l10=si0;
si0=l7;
si1=l5;
si2=l4;
si3=l9;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L11;
}
goto L1;
}
L6:;
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
goto L4;
L5:;
si0=l2;
si1=l10;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l7;
si1=1307574U;
si2=3U;
si3=l9;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
L4:;
si0=l7;
si1=1307572U;
si2=2U;
si3=l9;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=l2;
si2=11U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=754U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1307256U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l8;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L2;
}
L3:;
si0=0U;
l0=si0;
goto L1;
L2:;
si0=1U;
l0=si0;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f2355(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
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
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=3U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
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
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
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
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=4U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f2356(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f2357(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
switch(si0){
case 0:
goto L1;
case 1:
goto L2;
default:
goto L3;
}
L3:;
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L4:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si1=l1;
si2=24U;
si1+=si2;
l9=si1;
si0+=si1;
si1=-1U;
si0+=si1;
l10=si0;
si0=l8;
si1=5U;
si0=si0 < si1;
l11=si0;
L6:;
{
si0=l4;
si1=l6;
si0+=si1;
l12=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=l5;
si1=l6;
si0-=si1;
l14=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l12;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l15=si0;
si1=l12;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l15;
si1=l12;
si0-=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l15=si0;
L13:;
{
si0=l12;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l3;
si1=l14;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
goto L10;
L12:;
si0=l5;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
l15=si0;
L14:;
{
si0=l12;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l14;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L8;
}
L11:;
si0=l14;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l3=si0;
L10:;
si0=l13;
si1=16843009U;
si0*=si1;
l15=si0;
L15:;
{
si0=l12;
si1=l3;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
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
goto L9;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
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
goto L9;
}
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L15;
}
}
L9:;
si0=l14;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
L16:;
{
si0=l12;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l3;
l15=si0;
goto L7;
L17:;
si0=l14;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L8:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L5;
L7:;
si0=l1;
si1=l15;
si2=l6;
si1+=si2;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l8;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l6;
si1=l7;
si0=si0 > si1;
l15=si0;
if(si0){
goto L18;
}
si0=l11;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si1=l4;
si2=l6;
si3=l8;
si2-=si3;
l3=si2;
si1+=si2;
si2=l15;
si0=si2?si0:si1;
si1=l9;
si2=l8;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L18;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l2;
si0-=si1;
l15=si0;
si0=l4;
si1=l2;
si0+=si1;
l2=si0;
goto L1;
L19:;
si0=l8;
si1=4U;
si2=1307896U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L20;
}
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
L20:;
si0=l12;
si1=l3;
si0-=si1;
l15=si0;
si0=l4;
si1=l3;
si0+=si1;
l2=si0;
goto L1;
L2:;
si0=0U;
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L21;
}
goto L1;
L21:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L22;
}
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
L22:;
si0=l12;
si1=l3;
si0-=si1;
l15=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l2=si0;
L1:;
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2358(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
si0=4U;
l3=si0;
si0=l2;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si1=255U;
si0&=si1;
l6=si0;
si0=l4;
l7=si0;
goto L3;
L4:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l5;
si1=31U;
si0&=si1;
l6=si0;
si0=l5;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l6=si0;
si0=l1;
si1=2U;
si0+=si1;
l7=si0;
goto L3;
L5:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l7;
si1=l6;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l1;
si1=3U;
si0+=si1;
l7=si0;
goto L3;
L6:;
si0=l7;
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
l6=si0;
si0=l1;
si1=4U;
si0+=si1;
l7=si0;
L3:;
si0=l6;
si1=33U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si2=l2;
si1+=si2;
l6=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l8;
si1=255U;
si0&=si1;
l8=si0;
goto L7;
L8:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l8;
si1=31U;
si0&=si1;
l10=si0;
si0=l8;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l8=si0;
goto L7;
L9:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l8;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l9;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
goto L7;
L10:;
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
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
L7:;
si0=0U;
l7=si0;
si0=l8;
si1=-97U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
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
goto L1;
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
goto L1;
case 16:
goto L1;
case 17:
goto L14;
case 18:
goto L11;
default:
goto L1;
}
L14:;
si0=1U;
l7=si0;
goto L11;
L13:;
si0=2U;
l7=si0;
goto L11;
L12:;
si0=3U;
l7=si0;
L11:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
si0=l5;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l1;
si1=2U;
si0+=si1;
l4=si0;
goto L15;
L16:;
si0=l1;
si1=4U;
si2=3U;
si3=l5;
si4=-17U;
si3=si3 > si4;
si1=si3?si1:si2;
si0+=si1;
l4=si0;
L15:;
si0=l6;
l1=si0;
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si1=1U;
si0+=si1;
l1=si0;
goto L17;
L18:;
si0=l1;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l4;
si1=2U;
si0+=si1;
l1=si0;
goto L17;
L19:;
si0=l4;
si1=4U;
si2=3U;
si3=l1;
si4=-17U;
si3=si3 > si4;
si1=si3?si1:si2;
si0+=si1;
l1=si0;
L17:;
si0=l6;
si1=l1;
si0-=si1;
l2=si0;
si0=l7;
l3=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2359(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=4U;
l3=si0;
si0=l2;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
si1=255U;
si0&=si1;
l6=si0;
goto L3;
L4:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l4;
si1=31U;
si0&=si1;
l6=si0;
si0=l4;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l6=si0;
si0=l1;
si1=2U;
si0+=si1;
l5=si0;
goto L3;
L5:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l5;
si1=l6;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l1;
si1=3U;
si0+=si1;
l5=si0;
goto L3;
L6:;
si0=l5;
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
l6=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=4U;
l3=si0;
goto L1;
L7:;
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
L3:;
si0=0U;
l4=si0;
si0=l6;
si1=-60U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
case 2:
goto L11;
case 3:
goto L1;
case 4:
goto L1;
case 5:
goto L1;
case 6:
goto L1;
case 7:
goto L1;
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
goto L1;
case 16:
goto L1;
case 17:
goto L1;
case 18:
goto L1;
case 19:
goto L1;
case 20:
goto L1;
case 21:
goto L1;
case 22:
goto L1;
case 23:
goto L1;
case 24:
goto L1;
case 25:
goto L1;
case 26:
goto L1;
case 27:
goto L1;
case 28:
goto L1;
case 29:
goto L1;
case 30:
goto L1;
case 31:
goto L1;
case 32:
goto L1;
case 33:
goto L1;
case 34:
goto L9;
default:
goto L1;
}
L11:;
si0=1U;
l4=si0;
goto L8;
L10:;
si0=2U;
l4=si0;
goto L8;
L9:;
si0=3U;
l4=si0;
L8:;
si0=l1;
si1=l2;
si0+=si1;
si1=l5;
si0-=si1;
l2=si0;
si0=l4;
l3=si0;
si0=l5;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2360(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l2;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
goto L20;
L21:;
si0=l1;
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
goto L22;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l3=si0;
si0=l1;
si1=2U;
si0+=si1;
l4=si0;
goto L20;
L22:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l4;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
si0=l1;
si1=3U;
si0+=si1;
l4=si0;
goto L20;
L23:;
si0=l4;
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
l3=si0;
si0=l1;
si1=4U;
si0+=si1;
l4=si0;
L20:;
si0=l1;
si1=l2;
si0+=si1;
l5=si0;
si0=l3;
si1=-37U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L19;
case 2:
goto L19;
case 3:
goto L19;
case 4:
goto L19;
case 5:
goto L19;
case 6:
goto L19;
case 7:
goto L19;
case 8:
goto L19;
case 9:
goto L19;
case 10:
goto L19;
case 11:
goto L19;
case 12:
goto L19;
case 13:
goto L19;
case 14:
goto L19;
case 15:
goto L19;
case 16:
goto L19;
case 17:
goto L19;
case 18:
goto L19;
case 19:
goto L19;
case 20:
goto L19;
case 21:
goto L19;
case 22:
goto L19;
case 23:
goto L19;
case 24:
goto L19;
case 25:
goto L19;
case 26:
goto L19;
case 27:
goto L19;
case 28:
goto L19;
case 29:
goto L19;
case 30:
goto L19;
case 31:
goto L19;
case 32:
goto L8;
case 33:
goto L6;
case 34:
goto L4;
case 35:
goto L19;
case 36:
goto L19;
case 37:
goto L19;
case 38:
goto L19;
case 39:
goto L19;
case 40:
goto L19;
case 41:
goto L12;
case 42:
goto L19;
case 43:
goto L19;
case 44:
goto L19;
case 45:
goto L19;
case 46:
goto L19;
case 47:
goto L19;
case 48:
goto L19;
case 49:
goto L19;
case 50:
goto L19;
case 51:
goto L10;
case 52:
goto L19;
case 53:
goto L19;
case 54:
goto L19;
case 55:
goto L19;
case 56:
goto L19;
case 57:
goto L19;
case 58:
goto L19;
case 59:
goto L19;
case 60:
goto L19;
case 61:
goto L17;
case 62:
goto L16;
case 63:
goto L15;
case 64:
goto L9;
case 65:
goto L7;
case 66:
goto L5;
case 67:
goto L19;
case 68:
goto L19;
case 69:
goto L19;
case 70:
goto L19;
case 71:
goto L19;
case 72:
goto L19;
case 73:
goto L13;
case 74:
goto L14;
case 75:
goto L19;
case 76:
goto L19;
case 77:
goto L19;
case 78:
goto L18;
case 79:
goto L19;
case 80:
goto L19;
case 81:
goto L19;
case 82:
goto L19;
case 83:
goto L11;
default:
goto L19;
}
L19:;
si0=l0;
si1=11U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L17:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L16:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L15:;
si0=l0;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L14:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L13:;
si0=l0;
si1=5U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L12:;
si0=l0;
si1=261U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L11:;
si0=l0;
si1=6U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l0;
si1=262U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L9:;
si0=l0;
si1=7U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L8:;
si0=l0;
si1=263U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L7:;
si0=l0;
si1=9U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L6:;
si0=l0;
si1=265U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l0;
si1=8U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l0;
si1=264U;
i32_store16(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l0;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=l4;
si0-=si1;
l2=si0;
si0=l4;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2361(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si1=l2;
si0+=si1;
l3=si0;
si0=0U;
l4=si0;
si0=l1;
l5=si0;
L2:;
{
si0=l4;
l6=si0;
si0=l5;
l4=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
l6=si0;
goto L1;
L3:;
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L4;
L5:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l7;
si1=31U;
si0&=si1;
l8=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l7=si0;
si0=l4;
si1=2U;
si0+=si1;
l5=si0;
goto L4;
L6:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l4;
si1=3U;
si0+=si1;
l5=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l9;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
goto L4;
L7:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=63U;
si1&=si2;
si0|=si1;
si1=l8;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l2;
l6=si0;
goto L1;
L8:;
si0=l4;
si1=4U;
si0+=si1;
l5=si0;
L4:;
si0=l6;
si1=l4;
si0-=si1;
si1=l5;
si0+=si1;
l4=si0;
si0=l7;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L2;
}
}
L1:;
si0=l6;
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L9:;
si0=l6;
si1=l2;
si0=si0 < si1;
l9=si0;
if(si0){
goto L12;
}
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L10;
L12:;
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
L11:;
si0=l6;
l5=si0;
si0=l1;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L17;
default:
goto L15;
}
L17:;
si0=l6;
l5=si0;
si0=l1;
l4=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L14;
L16:;
si0=l6;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
L15:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=0U;
l7=si0;
L20:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l3=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l7;
sj0=(U64)(si0);
sj1=10ULL;
sj0*=sj1;
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si1=l8;
si2=l3;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l3;
l8=si0;
si0=l7;
sj1=l10;
si1=(U32)(sj1);
l3=si1;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L20;
}
goto L14;
}
L19:;
si0=0U;
l7=si0;
L21:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l3=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si2=10U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L21;
}
}
L18:;
si0=l9;
if(si0){
goto L23;
}
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L13;
L23:;
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
L22:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=l6;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L13:;
si0=l1;
si1=l2;
si2=l6;
si3=l2;
si4=1308040U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l1;
si1=l2;
si2=0U;
si3=l6;
si4=1308024U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2362(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l19=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
f2358(i,si0,si1,si2);
si0=l3;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
si0=l3;
sj1=12884901888ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f2399(i,si0,si1);
si0=4U;
l5=si0;
si0=1114112U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
switch(si0){
case 0:
goto L2;
case 1:
goto L6;
default:
goto L5;
}
L6:;
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l1;
f2359(i,si0,si1,si2);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L4;
L5:;
si0=l1;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l9;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=l9;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l2;
si1=l9;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L8:;
si0=l1;
si1=l9;
si0-=si1;
l7=si0;
L7:;
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l9;
si1+=si2;
si2=l7;
f2359(i,si0,si1,si2);
si0=l3;
si1=32U;
si0+=si1;
l9=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l1;
f2359(i,si0,si1,si2);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l5=si0;
goto L2;
L3:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
L2:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L10:;
si0=l1;
if(si0){
goto L12;
}
si0=0U;
l10=si0;
si0=3U;
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l1=si0;
goto L11;
L12:;
si0=1U;
l8=si0;
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=255U;
si0&=si1;
l11=si0;
goto L13;
L14:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l9;
si1=31U;
si0&=si1;
l10=si0;
si0=l9;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l11=si0;
si0=l2;
si1=2U;
si0+=si1;
l7=si0;
goto L13;
L15:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l9;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l7;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l11=si0;
si0=l2;
si1=3U;
si0+=si1;
l7=si0;
goto L13;
L16:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l11=si0;
si0=l2;
si1=4U;
si0+=si1;
l7=si0;
L13:;
si0=l2;
si1=l1;
si0+=si1;
l10=si0;
si0=3U;
l12=si0;
si0=l11;
si1=-32U;
si0+=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L17;
case 2:
goto L17;
case 3:
goto L17;
case 4:
goto L17;
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
goto L20;
case 12:
goto L17;
case 13:
goto L18;
default:
goto L17;
}
L20:;
si0=0U;
l8=si0;
goto L18;
L19:;
si0=2U;
l8=si0;
L18:;
si0=l10;
si1=l7;
si0-=si1;
l1=si0;
if(si0){
goto L21;
}
si0=0U;
l10=si0;
si0=0U;
l9=si0;
si0=l7;
l2=si0;
si0=0U;
l1=si0;
goto L11;
L21:;
si0=l7;
si1=l1;
si0+=si1;
l10=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l7;
l2=si0;
si0=l8;
l12=si0;
L17:;
si0=l9;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L24;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l9;
si1=31U;
si0&=si1;
l8=si0;
si0=l9;
si1=255U;
si0&=si1;
l11=si0;
si1=223U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l8=si0;
si0=l2;
si1=2U;
si0+=si1;
l7=si0;
goto L22;
L24:;
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=255U;
si0&=si1;
l8=si0;
goto L22;
L23:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l11;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l7;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=l2;
si1=3U;
si0+=si1;
l7=si0;
goto L22;
L25:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l8=si0;
si0=l2;
si1=4U;
si0+=si1;
l7=si0;
L22:;
si0=l8;
si1=35U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l2;
si1=l1;
si0+=si1;
l11=si0;
si0=0U;
l10=si0;
goto L26;
L27:;
si0=l10;
si1=l7;
si0-=si1;
l1=si0;
if(si0){
goto L28;
}
si0=0U;
l9=si0;
si0=1U;
l10=si0;
si0=l12;
l8=si0;
si0=l7;
l2=si0;
si0=0U;
l1=si0;
goto L11;
L28:;
si0=l7;
si1=l1;
si0+=si1;
l11=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=1U;
l10=si0;
si0=l7;
l2=si0;
L26:;
si0=l9;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L31;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l9;
si1=31U;
si0&=si1;
l8=si0;
si0=l9;
si1=255U;
si0&=si1;
l9=si0;
si1=223U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l8=si0;
si0=l2;
si1=2U;
si0+=si1;
l7=si0;
goto L29;
L31:;
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=255U;
si0&=si1;
l8=si0;
goto L29;
L30:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l9;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=l7;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=l2;
si1=3U;
si0+=si1;
l7=si0;
goto L29;
L32:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l8=si0;
si0=l2;
si1=4U;
si0+=si1;
l7=si0;
L29:;
si0=0U;
l9=si0;
si0=l8;
si1=48U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l12;
l8=si0;
goto L11;
L33:;
si0=l11;
si1=l7;
si0-=si1;
l1=si0;
si0=1U;
l9=si0;
si0=l12;
l8=si0;
si0=l7;
l2=si0;
L11:;
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=l1;
f2361(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L39;
}
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=48U;
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l15=si0;
si0=0U;
l16=si0;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L40;
}
si0=2U;
l11=si0;
si0=0U;
l1=si0;
goto L36;
L40:;
si0=1U;
l11=si0;
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L42;
}
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si0=l12;
si1=255U;
si0&=si1;
l17=si0;
goto L41;
L42:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l12;
si1=31U;
si0&=si1;
l17=si0;
si0=l12;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l17;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l17=si0;
si0=l2;
si1=2U;
si0+=si1;
l7=si0;
goto L41;
L43:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l12;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l7;
si1=l17;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l17=si0;
si0=l2;
si1=3U;
si0+=si1;
l7=si0;
goto L41;
L44:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l17;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l17=si0;
si0=l2;
si1=4U;
si0+=si1;
l7=si0;
L41:;
si0=l2;
si1=l1;
si0+=si1;
l18=si0;
si0=l17;
si1=95U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=2U;
l11=si0;
si0=l17;
si1=44U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l2;
l7=si0;
goto L45;
L47:;
si0=0U;
l11=si0;
L46:;
si0=l18;
si1=l7;
si0-=si1;
l1=si0;
if(si0){
goto L48;
}
si0=0U;
l1=si0;
si0=l7;
l2=si0;
goto L36;
L48:;
si0=l7;
si1=l1;
si0+=si1;
l18=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
L45:;
si0=l12;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L51;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l12;
si1=31U;
si0&=si1;
l17=si0;
si0=l12;
si1=255U;
si0&=si1;
l12=si0;
si1=223U;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l17;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l2=si0;
si0=l7;
si1=2U;
si0+=si1;
l17=si0;
goto L49;
L51:;
si0=l7;
si1=1U;
si0+=si1;
l17=si0;
si0=l12;
si1=255U;
si0&=si1;
l2=si0;
goto L49;
L50:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l12;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l2;
si1=l17;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
si0=l7;
si1=3U;
si0+=si1;
l17=si0;
goto L49;
L52:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l17;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l7;
si1=4U;
si0+=si1;
l17=si0;
L49:;
si0=l2;
si1=46U;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=l7;
l2=si0;
goto L36;
L53:;
si0=l3;
si1=40U;
si0+=si1;
si1=l17;
si2=l18;
si3=l17;
si2-=si3;
f2361(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
if(si0){
goto L38;
}
si0=1U;
l2=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l7;
l2=si0;
goto L35;
L54:;
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L55;
}
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=1U;
l16=si0;
goto L35;
L55:;
goto L37;
L39:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+44U);
l19=sj0;
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l19;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L34;
L38:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l3;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l2=si0;
L37:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L34;
L36:;
L35:;
si0=l3;
si1=40U;
si0+=si1;
si1=l2;
si2=l1;
f2360(i,si0,si1,si2);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L56;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l1=si0;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l11;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l0;
si1=l10;
i32_store8(&i->m0,(U64)si0+22U,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si2=l6;
si3=l6;
si4=1114112U;
si3=si3 == si4;
si4=l9;
si3&=si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=2U;
si2=l5;
si3=l2;
si1=si3?si1:si2;
si2=l5;
si3=l5;
si4=255U;
si3&=si4;
si4=4U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+26U,si1);
goto L34;
L56:;
si0=l0;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0,sj1);
L34:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
si1=l1;
si2=l9;
si3=l1;
si4=1308008U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2363(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si1=l1;
si2=20U;
si1+=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+20U);
l4=si2;
si3=11U;
si2=si2 == si3;
l5=si2;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+23U);
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L1;
default:
goto L14;
}
L15:;
si0=l2;
l1=si0;
si0=l5;
if(si0){
goto L16;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
L16:;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
si1=6U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L1;
L14:;
si0=l2;
l1=si0;
si0=l5;
if(si0){
goto L17;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
L17:;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
si1=5U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=1U;
si1=l1;
si0<<=(si1&31);
si1=37U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
L18:;
si0=115U;
l1=si0;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L2;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
case 4:
goto L9;
case 5:
goto L8;
case 6:
goto L7;
case 7:
goto L6;
case 8:
goto L5;
case 9:
goto L4;
case 10:
goto L3;
default:
goto L2;
}
L13:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
L19:;
si0=115U;
l1=si0;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L30;
case 2:
goto L29;
case 3:
goto L28;
case 4:
goto L27;
case 5:
goto L26;
case 6:
goto L25;
case 7:
goto L24;
case 8:
goto L23;
case 9:
goto L22;
case 10:
goto L21;
default:
goto L20;
}
L30:;
si0=98U;
l1=si0;
goto L20;
L29:;
si0=99U;
l1=si0;
goto L20;
L28:;
si0=100U;
l1=si0;
goto L20;
L27:;
si0=111U;
l1=si0;
goto L20;
L26:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L31:;
si0=78U;
si1=110U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L20;
L25:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L32:;
si0=88U;
si1=120U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L20;
L24:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L33:;
si0=69U;
si1=101U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L20;
L23:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L34:;
si0=71U;
si1=103U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L20;
L22:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L35:;
si0=70U;
si1=102U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L20;
L21:;
si0=37U;
l1=si0;
L20:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=188978561027ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L12:;
si0=98U;
l1=si0;
goto L2;
L11:;
si0=99U;
l1=si0;
goto L2;
L10:;
si0=100U;
l1=si0;
goto L2;
L9:;
si0=111U;
l1=si0;
goto L2;
L8:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L36:;
si0=78U;
si1=110U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L2;
L7:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L37:;
si0=88U;
si1=120U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L2;
L6:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L38:;
si0=69U;
si1=101U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L2;
L5:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L39:;
si0=71U;
si1=103U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L2;
L4:;
si0=l4;
si1=11U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
L40:;
si0=70U;
si1=102U;
si2=l3;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
goto L2;
L3:;
si0=37U;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=408021893123ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L1:;
si0=l0;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2364(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+23U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
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
goto L7;
L8:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
l6=si0;
si1=255U;
si0&=si1;
l7=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=1341U;
si1=l7;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
si1=1U;
i32_store16(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
sj1=197568495617ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=46U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si0=(U32)(U32)(I8)(U8)(si0);
si1=2U;
si0<<=(si1&31);
si1=1308448U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f2357(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
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
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
L9:;
si0=95U;
si1=44U;
si2=l5;
si0=si2?si0:si1;
l13=si0;
si0=l7;
si1=l6;
si2=l2;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l1;
si0-=si1;
si1=l9;
si2=l1;
si3=l10;
si1=si3?si1:si2;
si2=l3;
si1-=si2;
l3=si1;
si2=l1;
si3=l3;
si4=l1;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si0+=si1;
l1=si0;
si1=l1;
si2=l12;
si3=1U;
si2+=si3;
l9=si2;
si1=I32_REM_S(si1,si2);
si1=!(si1);
si0+=si1;
l1=si0;
si1=l9;
si0=I32_DIV_S(si0,si1);
l14=si0;
si0=l1;
si1=l2;
si0-=si1;
l1=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L12;
}
si0=l1;
si1=l14;
si0-=si1;
l1=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
L12:;
si0=l4;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si1=l4;
si2=88U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+88U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=-1U;
si0+=si1;
si1=l12;
si0=I32_DIV_S(si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l5=si0;
si0=0U;
si1=l12;
si0-=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
si0=l12;
l7=si0;
L14:;
{
si0=l3;
si1=l5;
si0+=si1;
l2=si0;
si0=l3;
si1=l1;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=l6;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L15;
}
goto L1;
L16:;
si0=l10;
si1=l3;
si0+=si1;
si1=l1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L15:;
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+140U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l4;
si1=136U;
si0+=si1;
si1=l2;
si2=1U;
f50(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
L17:;
si0=l10;
si1=l3;
si0+=si1;
si1=l1;
si0+=si1;
l6=si0;
si1=1U;
si0+=si1;
si1=l6;
si2=l7;
si0=f15391(i,si0,si1,si2);
si0=l6;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l1;
si1=l12;
si0-=si1;
l1=si0;
si0=l7;
si1=l9;
si0+=si1;
l7=si0;
si0=l14;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+72U,sj1);
goto L10;
L11:;
si0=l4;
si1=104U;
si0+=si1;
si1=1308128U;
si2=1U;
si3=l1;
f66(i,si0,si1,si2,si3);
si0=l4;
si1=136U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=160U;
si0+=si1;
si1=12U;
si0+=si1;
si1=755U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=1308132U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=755U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l4;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=l4;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si2=136U;
si1+=si2;
f63(i,si0,si1);
si0=l14;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
l3=si0;
si0=0U;
l5=si0;
si0=0U;
si1=l12;
si0-=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l10=si0;
si0=l12;
l7=si0;
L19:;
{
si0=l3;
si1=l5;
si0+=si1;
l2=si0;
si0=l3;
si1=l1;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si1=l6;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L2;
L21:;
si0=l10;
si1=l3;
si0+=si1;
si1=l1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L20:;
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+124U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
si1=120U;
si0+=si1;
si1=l2;
si2=1U;
f50(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l10=si0;
L22:;
si0=l10;
si1=l3;
si0+=si1;
si1=l1;
si0+=si1;
l6=si0;
si1=1U;
si0+=si1;
si1=l6;
si2=l7;
si0=f15391(i,si0,si1,si2);
si0=l6;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l1;
si1=l12;
si0-=si1;
l1=si0;
si0=l7;
si1=l9;
si0+=si1;
l7=si0;
si0=l14;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L18:;
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=120U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+120U);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
f15271(i,si0);
L10:;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f2357(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=148U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=1308120U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
si1=756U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l4;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si2=136U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+160U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+80U);
l1=si1;
si0-=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+168U);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l1;
si2=l2;
f2389(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l1=si0;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=l1;
si0+=si1;
si1=l3;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+164U);
si0=!(si0);
if(si0){
goto L24;
}
si0=l3;
f15271(i,si0);
L24:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
f15271(i,si0);
L7:;
si0=l4;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=l4;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1308184U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=1307588U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=1308192U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=1308056U;
si1=43U;
si2=1308100U;
f673(i,si0,si1,si2);
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
si0=1307680U;
si1=44U;
si2=1307800U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1307680U;
si1=44U;
si2=1307800U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2365(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l4=si0;
si1=11U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=10U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=1U;
si1=l4;
si0<<=(si1&31);
l5=si0;
si1=350U;
si0&=si1;
if(si0){
goto L9;
}
si0=l5;
si1=1664U;
si0&=si1;
if(si0){
goto L8;
}
si0=l4;
si1=5U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L2;
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si1=5U;
si2=l2;
si0=si2?si0:si1;
l6=si0;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=1307582U;
si2=1307577U;
si3=l2;
si1=si3?si1:si2;
l7=si1;
si2=l6;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=0U;
l1=si0;
si0=1499U;
l5=si0;
si0=1499U;
l2=si0;
L15:;
{
si0=-1U;
si1=l5;
si2=1U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=1136004U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l4;
si1=si1 != si2;
si2=l9;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
l2=si0;
goto L16;
L17:;
si0=l9;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l5;
si1=1U;
si0+=si1;
l1=si0;
L16:;
si0=l2;
si1=l1;
si0-=si1;
l5=si0;
si0=l2;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
goto L5;
}
L14:;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=1136008U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L4;
L13:;
si0=l1;
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
l4=si0;
goto L5;
L12:;
si0=l1;
si1=4194303U;
si0&=si1;
si1=12U;
si0*=si1;
si1=1147996U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+4U);
l10=sj0;
si0=(U32)(sj0);
l1=si0;
sj0=l10;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
if(si0){
goto L6;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=1114112U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
goto L3;
L10:;
si0=l1;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
L9:;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l2;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l1;
si2=l3;
si3=8U;
si2+=si3;
f2366(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
goto L1;
L8:;
si0=l0;
si1=l1;
si2=l2;
sd2=(F64)(si2);
f2367(i,si0,si1,sd2);
goto L1;
L7:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L3;
L5:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
L4:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+40U,si1);
L3:;
si0=l8;
f15271(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f2396(i,si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l1=si1;
si0-=si1;
si1=l6;
si2=-1U;
si1+=si2;
l2=si1;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l1;
si0+=si1;
si1=l5;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
l10=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
f15271(i,si0);
goto L1;
L19:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=l4;
si1=l6;
si2=1U;
si3=l6;
si4=1308208U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2366(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
F64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=136U;
si0+=si1;
si1=l1;
si2=3U;
si3=l3;
f2363(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
f1248(i,si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+22U);
l5=si0;
if(si0){
goto L18;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1307588U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l4=si0;
goto L10;
L18:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l4=si0;
si1=11U;
si0=si0 != si1;
if(si0){
goto L16;
}
goto L15;
L17:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+140U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l4;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L15;
case 2:
goto L15;
case 3:
goto L13;
case 4:
goto L15;
case 5:
goto L12;
default:
goto L15;
}
L15:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1307588U;
i32_store(&i->m0,(U64)si0+72U,si1);
goto L10;
L14:;
si0=l3;
si1=1308275U;
i32_store(&i->m0,(U64)si0+72U,si1);
goto L11;
L13:;
si0=l3;
si1=1308277U;
i32_store(&i->m0,(U64)si0+72U,si1);
goto L11;
L12:;
si0=l1;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L19;
}
si0=l3;
si1=1308279U;
i32_store(&i->m0,(U64)si0+72U,si1);
goto L11;
L19:;
si0=l3;
si1=1308281U;
i32_store(&i->m0,(U64)si0+72U,si1);
L11:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
goto L9;
L10:;
si0=l4;
si1=255U;
si0&=si1;
si1=11U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=5U;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L20;
}
si0=10U;
l4=si0;
si0=l3;
si1=112U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=10U;
f1257(i,si0,si1,si2);
L20:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
f15271(i,si0);
goto L8;
L9:;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L38;
case 1:
goto L37;
case 2:
goto L36;
case 3:
goto L35;
case 4:
goto L34;
case 5:
goto L32;
case 6:
goto L31;
case 7:
goto L33;
case 8:
goto L33;
case 9:
goto L33;
case 10:
goto L33;
default:
goto L38;
}
L38:;
si0=l3;
sj1=493921239043ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=1308283U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=1U;
l4=si0;
goto L7;
L37:;
si0=l3;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=5U;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L39;
}
si0=l3;
si1=112U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=2U;
f1257(i,si0,si1,si2);
si0=10U;
l4=si0;
L39:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
f15271(i,si0);
goto L8;
L36:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
si1=3U;
si0=si0 != si1;
l4=si0;
if(si0){
goto L29;
}
si0=l5;
if(si0){
goto L29;
}
si0=8U;
l5=si0;
si0=1U;
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
sj0=l6;
si0=(U32)(sj0);
l7=si0;
si1=1114111U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l7;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 <= si1;
if(si0){
goto L23;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=l3;
si3=136U;
si2+=si3;
f2355(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si2=0U;
f2383(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l3;
si1=124U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=120U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+116U,si1);
goto L30;
L35:;
si0=l3;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=5U;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L40;
}
si0=10U;
l4=si0;
si0=l3;
si1=112U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=10U;
f1257(i,si0,si1,si2);
L40:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
f15271(i,si0);
goto L8;
L34:;
si0=l3;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=5U;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L41;
}
si0=l3;
si1=112U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l3;
si2=136U;
si1+=si2;
si2=8U;
f1257(i,si0,si1,si2);
si0=10U;
l4=si0;
L41:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
f15271(i,si0);
goto L8;
L33:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L46;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L48;
}
sd0=0;
l8=sd0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L47;
}
L48:;
si0=l3;
si1=136U;
si0+=si1;
si1=l2;
si2=4U;
f1027(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+136U);
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L27;
}
si0=l3;
si1=152U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L26;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
sd1=f64_load(&i->m0,(U64)si1+144U);
sj2=l6;
f1185(i,si0,sd1,sj2);
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+24U);
sd1=1.7976931348623157e+308;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
si3=1U;
si2=si2 == si3;
sd0=si2?sd0:sd1;
l8=sd0;
L47:;
sd0=l8;
sd0=-(sd0);
l8=sd0;
goto L45;
L46:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L49;
}
sd0=0;
l8=sd0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L45;
}
L49:;
si0=l3;
si1=136U;
si0+=si1;
si1=l2;
si2=4U;
f1027(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+136U);
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L25;
}
si0=l3;
si1=152U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L24;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
sd1=f64_load(&i->m0,(U64)si1+144U);
sj2=l6;
f1185(i,si0,sd1,sj2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+32U);
si0=(U32)(sj0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l3;
sj1=9218868437227405311ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
goto L44;
L50:;
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+40U);
l8=sd0;
L45:;
si0=l3;
sd1=l8;
f64_store(&i->m0,(U64)si0+128U,sd1);
sd0=l8;
sd1=1.7976931348623157e+308;
si0=sd0 == sd1;
if(si0){
goto L44;
}
sd0=l8;
sd1=-1.7976931348623157e+308;
si0=sd0 != sd1;
if(si0){
goto L43;
}
L44:;
si0=l2;
si1=l3;
si2=128U;
si1+=si2;
si0=f1264(i,si0,si1);
si0=!(si0);
if(si0){
goto L42;
}
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+128U);
l8=sd0;
L43:;
si0=l0;
si1=l1;
sd2=l8;
f2367(i,si0,si1,sd2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L42:;
si0=7U;
l5=si0;
goto L28;
L32:;
si0=l1;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
sj1=335007449091ULL;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l3;
si1=1308283U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=1U;
l4=si0;
goto L7;
L31:;
si0=l1;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L51;
}
si0=5U;
l5=si0;
goto L28;
L51:;
si0=l3;
si1=136U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
f1257(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+144U);
l9=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l10=si0;
l4=si0;
si0=l9;
si1=3U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l10;
l4=si0;
L54:;
{
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
l7=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l7;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l9;
si1=4U;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l10;
si1=l9;
si0+=si1;
l7=si0;
L55:;
{
si0=l4;
si1=l4;
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
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
si1=l5;
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
si0=l4;
si1=2U;
si0+=si1;
l5=si0;
si1=l5;
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
si0=l4;
si1=3U;
si0+=si1;
l5=si0;
si1=l5;
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
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L55;
}
}
L52:;
si0=l3;
si1=124U;
si0+=si1;
si1=l3;
si2=144U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+136U);
i64_store(&i->m0,(U64)si0+116U,sj1);
L30:;
si0=1U;
l4=si0;
goto L6;
L29:;
si0=l3;
si1=4U;
si2=18U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=1308286U;
si2=1308308U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=6U;
l5=si0;
L28:;
si0=1U;
l4=si0;
goto L5;
L27:;
si0=1198420U;
si1=46U;
si2=1198612U;
f703(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1190403U;
si1=43U;
si2=1190568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1198420U;
si1=46U;
si2=1198612U;
f703(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1190403U;
si1=43U;
si2=1190568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1308056U;
si1=43U;
si2=1308292U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l3;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=136U;
si2+=si3;
si3=16U;
f2369(i,si0,si1,si2,si3);
goto L8;
L21:;
si0=l3;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si3=136U;
si2+=si3;
si3=10U;
f2369(i,si0,si1,si2,si3);
L8:;
si0=0U;
l4=si0;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L5;
}
L6:;
si0=l3;
si1=88U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=12U;
si1+=si2;
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+116U);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=1U;
l2=si0;
si0=1308274U;
l5=si0;
goto L3;
L5:;
si0=l3;
si1=104U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+116U);
l6=sj1;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=1U;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+24U);
l2=si1;
si2=l2;
si3=255U;
si2&=si3;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
si1=2U;
si0<<=(si1&31);
si1=1020U;
si0&=si1;
l5=si0;
si1=1308504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si1=1308492U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L3:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=1308132U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=756U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=l3;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l3;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=l3;
si2=136U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=l1;
si2=l3;
si3=80U;
si2+=si3;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+104U);
l2=si3;
f2364(i,si0,si1,si2,si3);
si0=l0;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+136U);
l5=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+144U);
si4=l3;
si4=i32_load(&i->m0,(U64)si4+96U);
l7=si4;
si5=l2;
f2368(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
si0=!(si0);
if(si0){
goto L56;
}
si0=l5;
f15271(i,si0);
L56:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L57;
}
si0=l7;
f15271(i,si0);
L57:;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=0U;
si1=si1 != si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
f15271(i,si0);
goto L1;
L2:;
si0=l3;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
f15271(i,si0);
L1:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2367(rustpythonInstance*i,U32 l0,U32 l1,F64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=88U;
si0+=si1;
si1=l1;
si2=9U;
si3=0U;
f2363(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l3;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=6U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+8U);
l4=si3;
si1=si3?si1:si2;
l6=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
sd0=l2;
sd0=fabs(sd0);
l7=sd0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
l8=si0;
si1=11U;
si0=si0 != si1;
if(si0){
goto L19;
}
sd0=l2;
sd1=l2;
si0=sd0 != sd1;
if(si0){
goto L18;
}
sd0=l7;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L22;
}
si0=l4;
if(si0){
goto L21;
}
si0=l3;
si1=88U;
si0+=si1;
sd1=l7;
f2423(i,si0,sd1);
goto L4;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=3U;
l5=si0;
si0=3U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1308226U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1308224U);
i32_store16(&i->m0,(U64)si0,si1);
si0=10U;
l9=si0;
si0=1U;
l10=si0;
si0=3U;
l11=si0;
goto L2;
L21:;
si0=1U;
l10=si0;
si0=l3;
si1=88U;
si0+=si1;
si1=l5;
sd2=l7;
si3=0U;
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+22U);
si5=1U;
f2422(i,si0,si1,sd2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
goto L5;
L20:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+92U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=88U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L19:;
si0=4U;
l9=si0;
si0=0U;
l10=si0;
si0=1308230U;
l4=si0;
si0=5U;
l11=si0;
si0=115U;
l5=si0;
si0=l8;
switch(si0){
case 0:
goto L2;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L13;
case 4:
goto L14;
case 5:
goto L10;
case 6:
goto L15;
case 7:
goto L6;
case 8:
goto L8;
case 9:
goto L9;
case 10:
goto L16;
default:
goto L2;
}
L18:;
si0=3U;
l5=si0;
si0=l3;
si1=3U;
si2=0U;
f2383(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1308227U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1308229U);
i32_store8(&i->m0,(U64)si0,si1);
goto L3;
L17:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L16:;
sd0=l2;
sd1=l2;
si0=sd0 != sd1;
if(si0){
goto L23;
}
sd0=l7;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L24;
}
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l10=si0;
si0=l3;
si1=68U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
l4=si0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=387U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
sd1=l7;
sd2=100;
sd1*=sd2;
f64_store(&i->m0,(U64)si0+120U,sd1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=1308236U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=28U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=3U;
i32_store8(&i->m0,(U64)si0+116U,si1);
si0=l3;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l3;
si1=l3;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
si1=!(si1);
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+22U);
si3=0U;
si2=si2 != si3;
si1&=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=1310097U;
si2=1309912U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=1308248U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=755U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=88U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L5;
L24:;
si0=4U;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=4U;
si2=0U;
f2383(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=627469929U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L23:;
si0=4U;
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=4U;
si2=0U;
f2383(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=627990894U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L15:;
si0=88U;
si1=120U;
si2=l1;
si3=21U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si0=si2?si0:si1;
l5=si0;
goto L2;
L14:;
si0=111U;
l5=si0;
goto L2;
L13:;
si0=100U;
l5=si0;
goto L2;
L12:;
si0=99U;
l5=si0;
goto L2;
L11:;
si0=98U;
l5=si0;
goto L2;
L10:;
si0=78U;
l5=si0;
si0=0U;
l10=si0;
si0=l1;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L7;
L9:;
si0=l3;
si1=88U;
si0+=si1;
si1=l6;
sd2=l7;
si3=l1;
si4=21U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+22U);
f2419(i,si0,si1,sd2,si3,si4);
goto L4;
L8:;
si0=l1;
si1=21U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=0U;
si0=si0 != si1;
l10=si0;
L7:;
si0=l3;
si1=88U;
si0+=si1;
si1=l6;
si2=1U;
si3=l6;
si1=si3?si1:si2;
sd2=l7;
si3=l10;
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+22U);
si5=0U;
f2422(i,si0,si1,sd2,si3,si4,si5);
goto L4;
L6:;
si0=l3;
si1=88U;
si0+=si1;
si1=l6;
sd2=l7;
si3=l1;
si4=21U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+22U);
f2420(i,si0,si1,sd2,si3,si4);
goto L4;
L5:;
si0=10U;
l9=si0;
goto L2;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
L3:;
si0=10U;
l9=si0;
si0=1U;
l10=si0;
L2:;
sd0=l2;
sd1=l2;
si0=sd0 != sd1;
if(si0){
goto L26;
}
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L26;
}
si0=1U;
l8=si0;
si0=1308274U;
l6=si0;
goto L25;
L26:;
si0=1U;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+24U);
l8=si1;
si2=l8;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si1=1308504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=1308492U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L25:;
si0=l10;
si0=!(si0);
if(si0){
goto L27;
}
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=l1;
si2=l3;
si3=128U;
si2+=si3;
si3=l8;
f2364(i,si0,si1,si2,si3);
si0=l0;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+88U);
l4=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+96U);
si4=l6;
si5=l8;
f2368(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L27:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2368(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+26U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l5;
si2=l3;
si1+=si2;
si0-=si1;
l1=si0;
si1=0U;
si2=l1;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
si1=0U;
si2=l8;
si0=si2?si0:si1;
l1=si0;
si0=32U;
si1=l7;
si2=l7;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
si0=1U;
si1=l4;
si2=l4;
si3=4U;
si2=si2 == si3;
si0=si2?si0:si1;
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
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=112U;
si0+=si1;
si1=0U;
si2=l1;
f2389(i,si0,si1,si2);
L6:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l6;
si1=l6;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=128U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
f2391(i,si0,si1);
si0=l6;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=100U;
si0+=si1;
si1=755U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l6;
si1=756U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=1308328U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l6;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l6;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
goto L1;
L4:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=112U;
si0+=si1;
si1=0U;
si2=l1;
f2389(i,si0,si1,si2);
L7:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l6;
si1=l6;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=128U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
f2391(i,si0,si1);
si0=l6;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=100U;
si0+=si1;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l6;
si1=755U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=1308328U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l6;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
goto L1;
L3:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=112U;
si0+=si1;
si1=0U;
si2=l1;
f2389(i,si0,si1,si2);
L8:;
si0=l6;
si1=l1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l6;
si1=l6;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=128U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
f2391(i,si0,si1);
si0=l6;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=100U;
si0+=si1;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=755U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l6;
si1=756U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=3U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=1308328U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l6;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
goto L1;
L2:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l1;
si1=l1;
si2=1U;
si1>>=(si2&31);
l4=si1;
si0-=si1;
l3=si0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l6;
si1=56U;
si0+=si1;
si1=0U;
si2=l4;
f2389(i,si0,si1,si2);
L9:;
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l6;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f2391(i,si0,si1);
si0=l6;
si1=112U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l6;
si1=56U;
si0+=si1;
si1=0U;
si2=l3;
f2389(i,si0,si1,si2);
L10:;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l6;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f2391(i,si0,si1);
si0=l6;
si1=128U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l6;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=108U;
si0+=si1;
si1=755U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=100U;
si0+=si1;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
si1=1308352U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=755U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l6;
si1=l6;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=l6;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l6;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si1=l6;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l6;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+128U);
f15271(i,si0);
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+116U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+112U);
f15271(i,si0);
L1:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2369(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=5U;
l4=si0;
si0=l1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
si2=l3;
f1257(i,si0,si1,si2);
si0=10U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L2:;
L0:;
}

void f2370(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
si0=f2392(i,si0,si1);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
{
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+50U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+49U,si1);
si0=3U;
l1=si0;
goto L5;
L8:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+51U,si1);
si0=l3;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+50U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+49U,si1);
si0=4U;
l1=si0;
goto L5;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L4;
L6:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+49U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=2U;
l1=si0;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
l2=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=l1;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l2;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l3;
si2=32U;
si1+=si2;
si0=f2392(i,si0,si1);
l1=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
if(si0){
goto L11;
}
si0=1U;
l5=si0;
si0=0U;
l4=si0;
si0=0U;
l6=si0;
goto L1;
L11:;
si0=l4;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
l1=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L15;
default:
goto L13;
}
L15:;
si0=l4;
l2=si0;
si0=l7;
l1=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l4;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=1U;
si0+=si1;
l1=si0;
L13:;
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=1U;
l6=si0;
si0=0U;
l8=si0;
L18:;
{
si0=l2;
if(si0){
goto L19;
}
si0=l8;
l7=si0;
goto L16;
L19:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l9=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l8;
sj0=(U64)(si0);
sj1=10ULL;
sj0*=sj1;
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l9;
si1=l11;
si2=l9;
si3=10U;
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
si0=l9;
l11=si0;
si0=l8;
sj1=l10;
si1=(U32)(sj1);
l9=si1;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L18;
}
goto L12;
}
L17:;
si0=0U;
l9=si0;
L20:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l8=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=1U;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l8;
si1=l9;
si2=10U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
}
si0=l9;
l7=si0;
L16:;
si0=1U;
l5=si0;
goto L1;
L12:;
si0=0U;
l5=si0;
si0=2U;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
goto L1;
L2:;
si0=1U;
l5=si0;
si0=0U;
l6=si0;
L1:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
L22:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L32;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l1;
si1=31U;
si0&=si1;
l8=si0;
si0=l1;
si1=223U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l1=si0;
goto L32;
L34:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l9;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L32;
L35:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l1=si0;
L33:;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L31;
}
L32:;
si0=l1;
si1=91U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=7U;
l8=si0;
goto L24;
L36:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L37;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l1;
si1=31U;
si0&=si1;
l11=si0;
si0=l1;
si1=224U;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l1=si0;
goto L37;
L38:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l9;
si1=l11;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L37;
L39:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l11;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
L37:;
si0=3U;
l11=si0;
si0=5U;
l13=si0;
si0=l1;
si1=93U;
si0=si0 != si1;
if(si0){
goto L40;
}
goto L30;
L40:;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l1;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+63U,si1);
si0=l3;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=4U;
l1=si0;
goto L43;
L45:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=3U;
l1=si0;
goto L43;
L44:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=2U;
l1=si0;
L43:;
si0=l3;
si1=48U;
si0+=si1;
si1=0U;
si2=l1;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
goto L41;
L42:;
si0=l3;
si1=48U;
si0+=si1;
si1=0U;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=1U;
si0+=si1;
l2=si0;
L41:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L29;
}
L46:;
{
si0=l3;
si1=l9;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L47;
}
si0=l3;
si1=l9;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l1;
si1=31U;
si0&=si1;
l15=si0;
si0=l1;
si1=223U;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l1=si0;
goto L47;
L48:;
si0=l3;
si1=l9;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l14;
si1=l15;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L47;
L49:;
si0=l3;
si1=l9;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l15;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
L47:;
si0=l1;
si1=93U;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=3U;
l1=si0;
goto L51;
L56:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+63U,si1);
si0=l3;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=4U;
l1=si0;
goto L51;
L55:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L57;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
L57:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=1U;
si0+=si1;
l2=si0;
goto L50;
L54:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L52;
}
goto L30;
L53:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=2U;
l1=si0;
goto L51;
L52:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
l1=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L60;
case 1:
goto L59;
case 2:
goto L61;
default:
goto L59;
}
L61:;
si0=l8;
l1=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L59;
}
goto L58;
L60:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l8;
si1=1U;
si0+=si1;
l1=si0;
L59:;
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=0U;
l13=si0;
L64:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L62;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l9=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L58;
}
si0=l13;
sj0=(U64)(si0);
sj1=10ULL;
sj0*=sj1;
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l9;
si1=l11;
si2=l9;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
l14=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l9;
l11=si0;
si0=l14;
sj1=l10;
si1=(U32)(sj1);
l9=si1;
si0+=si1;
l13=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L64;
}
goto L58;
}
L63:;
si0=0U;
l13=si0;
L65:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l9=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L58;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si1=l13;
si2=10U;
si1*=si2;
si0+=si1;
l13=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L65;
}
}
L62:;
si0=l13;
si1=8U;
si0>>=(si1&31);
l9=si0;
si0=1U;
l11=si0;
goto L30;
L58:;
si0=l8;
si1=8U;
si0>>=(si1&31);
l9=si0;
si0=2U;
l11=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+52U);
l10=sj0;
goto L25;
L51:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l2;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=l1;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
L66:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
L50:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L46;
}
goto L29;
}
L31:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L21;
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L67;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L67:;
si0=l13;
l8=si0;
goto L26;
L29:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
L28:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L68;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L68:;
si0=6U;
l8=si0;
goto L24;
L27:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=44U;
si1+=si2;
si0=f2392(i,si0,si1);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L69;
}
L70:;
{
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L74;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L73;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L75;
}
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=3U;
l1=si0;
goto L72;
L75:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+63U,si1);
si0=l3;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=4U;
l1=si0;
goto L72;
L74:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L76;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
L76:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L71;
L73:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=2U;
l1=si0;
L72:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L77;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=l1;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
L77:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
L71:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l3;
si2=44U;
si1+=si2;
si0=f2392(i,si0,si1);
l1=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L70;
}
}
L69:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L78;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si1=8U;
si0>>=(si1&31);
l9=si0;
si0=0U;
l11=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+52U);
l10=sj0;
goto L25;
L78:;
si0=3U;
l11=si0;
si0=5U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
if(si0){
goto L79;
}
goto L26;
L79:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L26:;
L25:;
si0=l11;
si1=3U;
si0=si0 != si1;
if(si0){
goto L23;
}
L24:;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L80;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L81:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L82;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L82;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L82:;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L81;
}
}
L80:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L83;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L83:;
si0=l5;
si1=l12;
si1=!(si1);
si0|=si1;
if(si0){
goto L84;
}
si0=l7;
f15271(i,si0);
L84:;
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L21;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L85;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
f2385(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
L85:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj1=l10;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l9;
i32_store16(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l8;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=7U;
si0+=si1;
si1=l9;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
goto L22;
}
L21:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2371(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
L3:;
{
si0=l2;
if(si0){
goto L4;
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
goto L1;
L4:;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l1;
l5=si0;
si0=l2;
l6=si0;
L6:;
{
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l5;
si1=1U;
si0+=si1;
l8=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L7;
L8:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l7;
si1=31U;
si0&=si1;
l9=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l7=si0;
si0=l5;
si1=2U;
si0+=si1;
l8=si0;
goto L7;
L9:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l5;
si1=3U;
si0+=si1;
l8=si0;
goto L7;
L10:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l5;
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
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
l8=si0;
L7:;
si0=l5;
si1=l6;
si0+=si1;
l9=si0;
si0=l7;
si1=-123U;
si0+=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L21;
default:
goto L22;
}
L22:;
si0=l7;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=1308056U;
si1=43U;
si2=1308384U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l8;
si0=i32_load8_s(&i->m0,(U64)si0);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=255U;
si0&=si1;
l10=si0;
goto L23;
L24:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l11=si0;
si0=l10;
si1=31U;
si0&=si1;
l12=si0;
si0=l10;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l12;
si1=6U;
si0<<=(si1&31);
si1=l11;
si0|=si1;
l10=si0;
si0=l8;
si1=2U;
si0+=si1;
l8=si0;
goto L23;
L25:;
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l11=si0;
si0=l10;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l11;
si1=l12;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l10=si0;
si0=l8;
si1=3U;
si0+=si1;
l8=si0;
goto L23;
L26:;
si0=l11;
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
l10=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
L23:;
si0=l10;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l9;
si1=l8;
si0-=si1;
l6=si0;
si0=l8;
l5=si0;
goto L12;
L20:;
si0=l9;
si1=l8;
si0-=si1;
l6=si0;
si0=l7;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l8;
l5=si0;
goto L12;
L27:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l7;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l3;
si1=l7;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+66U,si1);
si0=l3;
si1=l7;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l7;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=3U;
l5=si0;
goto L13;
L28:;
si0=l3;
si1=l7;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+67U,si1);
si0=l3;
si1=l7;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l7;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+66U,si1);
si0=l3;
si1=l7;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=4U;
l5=si0;
goto L13;
L19:;
si0=l4;
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+129U);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+131U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l14=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+128U);
l7=si0;
si0=1114113U;
l8=si0;
si0=l4;
l15=si0;
si0=l5;
l1=si0;
si0=l6;
l2=si0;
goto L5;
L29:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
f15271(i,si0);
L30:;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=l2;
si0+=si1;
l9=si0;
si0=0U;
l11=si0;
si0=l1;
l5=si0;
si0=0U;
l8=si0;
L31:;
{
si0=l8;
l6=si0;
si0=l5;
l8=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L33;
}
si0=l8;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L32;
L33:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l7;
si1=31U;
si0&=si1;
l10=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l7=si0;
si0=l8;
si1=2U;
si0+=si1;
l5=si0;
goto L32;
L34:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l12=si0;
si0=l8;
si1=3U;
si0+=si1;
l5=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l12;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
goto L32;
L35:;
si0=l12;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=63U;
si1&=si2;
si0|=si1;
si1=l10;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l8;
si1=4U;
si0+=si1;
l5=si0;
L32:;
si0=l6;
si1=l8;
si0-=si1;
si1=l5;
si0+=si1;
l8=si0;
si0=l6;
if(si0){
goto L38;
}
si0=l7;
si1=123U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=1U;
l7=si0;
goto L17;
L38:;
si0=l7;
si1=-123U;
si0+=si1;
switch(si0){
case 0:
goto L49;
case 1:
goto L48;
case 2:
goto L47;
default:
goto L48;
}
L49:;
si0=l11;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L50;
}
si0=3U;
l7=si0;
goto L17;
L50:;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L51:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0+=si1;
si1=123U;
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
l11=si0;
goto L36;
L48:;
si0=l7;
si1=128U;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l7;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l7;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L53;
}
si0=l3;
si1=l7;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+130U,si1);
si0=l3;
si1=l7;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l7;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+129U,si1);
si0=3U;
l7=si0;
goto L40;
L53:;
si0=l3;
si1=l7;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+131U,si1);
si0=l3;
si1=l7;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=l7;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+130U,si1);
si0=l3;
si1=l7;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+129U,si1);
si0=4U;
l7=si0;
goto L40;
L52:;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L54:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=1U;
si0+=si1;
l4=si0;
goto L39;
L47:;
si0=l11;
si1=1U;
si0&=si1;
if(si0){
goto L41;
}
si0=l2;
si1=l6;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l2;
si1=l6;
si0=si0 == si1;
if(si0){
goto L55;
}
goto L42;
L56:;
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L42;
}
L55:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
sj1=249108103169ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=58U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
f2400(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=1U;
l16=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l17=si0;
si0=0U;
l18=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
goto L43;
L46:;
si0=l3;
si1=l7;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+129U,si1);
si0=l3;
si1=l7;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+128U,si1);
si0=2U;
l7=si0;
goto L40;
L45:;
si0=0U;
si1=0U;
si2=1308400U;
f663(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=0U;
f2383(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l16=si0;
si1=l8;
si2=l18;
si0=f15390(i,si0,si1,si2);
L43:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
sj1=141733920769ULL;
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=33U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=112U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
f2400(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l7=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=1114112U;
l8=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=l3;
si1=176U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l7;
si3=l5;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2+=si3;
f2394(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+176U);
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+180U);
l8=si0;
L62:;
si0=l15;
if(si0){
goto L64;
}
si0=1U;
l7=si0;
goto L63;
L64:;
si0=l15;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L59;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l15;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L58;
}
L63:;
si0=l7;
si1=l4;
si2=l15;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
si0=!(si0);
if(si0){
goto L65;
}
si0=l5;
f15271(i,si0);
L65:;
si0=l2;
si1=l6;
si0-=si1;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L66:;
si0=l1;
si1=l6;
si0+=si1;
l4=si0;
si0=l5;
si1=1U;
si0=si0 > si1;
if(si0){
goto L68;
}
si0=0U;
l2=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L67;
}
goto L57;
L68:;
si0=l4;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L57;
}
si0=l5;
si1=-1U;
si0+=si1;
l2=si0;
L67:;
si0=l9;
si1=8U;
si0>>=(si1&31);
l13=si0;
si0=l4;
si1=1U;
si0+=si1;
l1=si0;
si0=l15;
l14=si0;
goto L15;
L61:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
si0=!(si0);
if(si0){
goto L69;
}
si0=l5;
f15271(i,si0);
L69:;
si0=l17;
si0=!(si0);
if(si0){
goto L70;
}
si0=l16;
f15271(i,si0);
L70:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L71;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L71:;
si0=4U;
l7=si0;
goto L17;
L60:;
si0=0U;
si1=0U;
si2=1308416U;
f663(i,si0,si1,si2);
UNREACHABLE;
L59:;
f53(i);
UNREACHABLE;
L58:;
si0=1U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L57:;
si0=l4;
si1=l5;
si2=1U;
si3=l5;
si4=1308432U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L42:;
si0=l1;
si1=l2;
si2=0U;
si3=l6;
si4=1307664U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L41:;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L72:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0+=si1;
si1=125U;
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l11=si0;
goto L36;
L40:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l4;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l4;
si2=l7;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l4=si0;
L73:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l7;
si0+=si1;
l4=si0;
L39:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
L37:;
si0=l5;
si1=l9;
si0=si0 != si1;
if(si0){
goto L31;
}
goto L16;
L36:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l9;
si0=si0 != si1;
if(si0){
goto L31;
}
goto L16;
}
L18:;
si0=l3;
si1=l7;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=l3;
si1=l7;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=2U;
l5=si0;
goto L13;
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
goto L14;
L16:;
si0=1114114U;
l8=si0;
si0=0U;
l7=si0;
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L74:;
si0=l8;
si1=1114114U;
si0=si0 != si1;
if(si0){
goto L5;
}
L14:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
goto L2;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
si1=l4;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L75;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l4;
si2=l5;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
L75:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
si1=l4;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l5;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l8;
l5=si0;
si0=l6;
if(si0){
goto L6;
}
goto L11;
L12:;
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+132U);
si0=si0 != si1;
if(si0){
goto L76;
}
si0=l3;
si1=128U;
si0+=si1;
si1=l4;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
l4=si0;
L76:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+128U);
si1=l4;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+136U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l6;
if(si0){
goto L6;
}
L11:;
}
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+129U);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+131U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+132U);
l14=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+128U);
l7=si0;
si0=0U;
l2=si0;
si0=1307588U;
l1=si0;
si0=1114113U;
l8=si0;
si0=l4;
l15=si0;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L77;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l5;
f2386(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
L77:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
si2=28U;
si1*=si2;
si0+=si1;
l5=si0;
si1=l16;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l15;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l14;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l13;
i32_store16(&i->m0,(U64)si0+5U,si1);
si0=l5;
si1=l7;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=7U;
si0+=si1;
si1=l13;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
if(si0){
goto L3;
}
}
si0=l2;
l7=si0;
L2:;
si0=0U;
l4=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L78;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=4U;
si0+=si1;
l5=si0;
L79:;
{
si0=l5;
l7=si0;
si0=l5;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L80;
}
si0=l6;
si1=l4;
si2=28U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L81;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L81:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
L80:;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L82;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L82:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=28U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L1:;
si0=l3;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2372(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f2373(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-1114112U;
si0+=si1;
l4=si0;
si1=2U;
si2=l4;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
case 2:
goto L4;
case 3:
goto L3;
case 4:
goto L2;
default:
goto L6;
}
L6:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1308516U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1308716U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L5:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1308516U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1308540U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=499U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=21U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=132U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=128U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=120U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=112U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=88U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l2;
si1=1308592U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=136U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1308516U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1308636U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=1308516U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1308668U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l0;
si2=l2;
si3=40U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
L1:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f2374(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=l8;
si0=f734(i,si0,si1);
l9=si0;
goto L1;
L2:;
si0=l8;
if(si0){
goto L3;
}
si0=0U;
l9=si0;
goto L1;
L3:;
si0=l8;
si1=3U;
si0&=si1;
l10=si0;
si0=l8;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=0U;
l9=si0;
si0=0U;
l8=si0;
goto L4;
L5:;
si0=l7;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l9=si0;
si0=l8;
si1=-4U;
si0&=si1;
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l9;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l9=si0;
si0=l8;
si1=8U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l9;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l9=si0;
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l8;
si0+=si1;
l8=si0;
L6:;
{
si0=l9;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l9=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L6;
}
}
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l6;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
si1=l8;
si2=l9;
si3=l5;
si4=0U;
si5=l4;
si6=1U;
si5=si5 == si6;
si3=si5?si3:si4;
si2+=si3;
l9=si2;
si3=l10;
si3=!(si3);
si4=l8;
si5=l9;
si4=si4 > si5;
si3&=si4;
l10=si3;
si1=si3?si1:si2;
l8=si1;
si2=l9;
si1-=si2;
l9=si1;
si2=l9;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l6;
si1=40U;
si0+=si1;
si1=0U;
si2=l8;
f2389(i,si0,si1,si2);
L7:;
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l6;
si2=60U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
f2390(i,si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
if(si0){
goto L9;
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
goto L8;
L9:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=1308728U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=757U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l6;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l6;
si2=16U;
si1+=si2;
f63(i,si0,si1);
goto L8;
L10:;
si0=l6;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=1308728U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=757U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l6;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l6;
si2=16U;
si1+=si2;
f63(i,si0,si1);
L8:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L11:;
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L12:;
si0=l6;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2375(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L2;
case 2:
goto L3;
default:
goto L2;
}
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l8;
si1=l9;
si0=f734(i,si0,si1);
l6=si0;
goto L5;
L6:;
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
si1=3U;
si0&=si1;
l7=si0;
si0=l9;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
si0=0U;
l5=si0;
goto L7;
L8:;
si0=l8;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
si0=l9;
si1=-4U;
si0&=si1;
l5=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l6;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
si0=l5;
si1=8U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l6;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
L7:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=l5;
si0+=si1;
l5=si0;
L9:;
{
si0=l6;
si1=l5;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L9;
}
}
L5:;
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
f2395(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
L3:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
si2=l4;
si3=16U;
si2+=si3;
si3=32U;
si4=0U;
si5=l4;
f2374(i,si0,si1,si2,si3,si4,si5);
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
goto L1;
L2:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l1;
si2=l4;
si3=16U;
si2+=si3;
si3=32U;
si4=0U;
si5=l4;
f2374(i,si0,si1,si2,si3,si4,si5);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2376(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=l3;
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l3;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=si2?si0:si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
if(si0){
goto L9;
}
si0=1U;
l1=si0;
goto L8;
L9:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
L8:;
si0=l1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L11;
}
si0=1U;
l6=si0;
goto L10;
L11:;
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
goto L3;
}
L10:;
si0=l5;
si1=l3;
si0-=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si1=4U;
si0&=si1;
if(si0){
goto L13;
}
si0=1U;
l1=si0;
si0=l5;
si1=l3;
si0=si0 == si1;
l9=si0;
if(si0){
goto L14;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
L14:;
si0=l1;
si1=32U;
si2=l7;
si0=f15392(i,si0,si1,si2);
l8=si0;
si0=0U;
l1=si0;
si0=l5;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si1=0U;
si2=l7;
f2389(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L15:;
si0=l6;
si1=l1;
si0+=si1;
si1=l8;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l1;
si2=l7;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
if(si0){
goto L16;
}
si0=l8;
f15271(i,si0);
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l4;
si1=l1;
si2=l3;
f2389(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L17:;
si0=l6;
si1=l1;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l1;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L12;
L13:;
si0=l5;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l4;
si1=0U;
si2=l3;
f2389(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L18:;
si0=l6;
si1=l8;
si0+=si1;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l8;
si2=l3;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l2=si0;
si0=l5;
si1=l3;
si0=si0 == si1;
l5=si0;
if(si0){
goto L19;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
L19:;
si0=l2;
si1=32U;
si2=l7;
si0=f15392(i,si0,si1,si2);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l4;
si1=l1;
si2=l7;
f2389(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L20:;
si0=l6;
si1=l1;
si0+=si1;
si1=l3;
si2=l7;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
if(si0){
goto L12;
}
si0=l3;
f15271(i,si0);
L12:;
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
L6:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f2377(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=176U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f1248(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1308516U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l5=si0;
goto L7;
L8:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l5=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si1=37U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l7=si0;
si1=2U;
si2=l7;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L12;
}
L12:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1308516U;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L7;
L11:;
si0=l3;
si1=1308838U;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L9;
L10:;
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L13;
}
si0=l3;
si1=1308840U;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L9;
L13:;
si0=l3;
si1=1308842U;
i32_store(&i->m0,(U64)si0+32U,si1);
L9:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
goto L6;
L7:;
si0=l5;
si1=255U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=37U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l7=si0;
si1=2U;
si2=l7;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L6:;
si0=l7;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L2;
default:
goto L3;
}
L5:;
si0=1308872U;
si1=40U;
si2=1308912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
f1257(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=10U;
f1257(i,si0,si1,si2);
goto L1;
L2:;
si0=l6;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=152U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
f1257(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+160U);
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+152U);
l9=si0;
l7=si0;
si0=l8;
si1=3U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l9;
l7=si0;
L17:;
{
si0=l7;
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l6;
si1^=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l8;
si1=4U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l9;
si1=l8;
si0+=si1;
l6=si0;
L18:;
{
si0=l7;
si1=l7;
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
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
si1=l5;
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
si0=l7;
si1=2U;
si0+=si1;
l5=si0;
si1=l5;
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
si0=l7;
si1=3U;
si0+=si1;
l5=si0;
si1=l5;
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
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L15:;
si0=l3;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=152U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+40U,sj1);
goto L1;
L14:;
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
f1257(i,si0,si1,si2);
L1:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L20;
}
si0=1U;
l7=si0;
si0=1308844U;
l5=si0;
goto L19;
L20:;
si0=1308725U;
si1=1308724U;
si2=1308516U;
si3=l4;
si4=8U;
si3&=si4;
l7=si3;
si1=si3?si1:si2;
si2=l4;
si3=16U;
si2&=si3;
l6=si2;
si0=si2?si0:si1;
l5=si0;
si0=1U;
si1=l7;
si2=3U;
si1>>=(si2&31);
si2=l6;
si0=si2?si0:si1;
l7=si0;
L19:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
l10=sj1;
i64_store(&i->m0,(U64)si0+96U,sj1);
sj0=l10;
si0=(U32)(sj0);
l2=si0;
si0=l7;
si1=16U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l2;
si1=l7;
si0=f734(i,si0,si1);
l5=si0;
goto L21;
L22:;
si0=l7;
if(si0){
goto L23;
}
si0=0U;
l5=si0;
goto L21;
L23:;
si0=l7;
si1=3U;
si0&=si1;
l6=si0;
si0=l7;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=0U;
l5=si0;
si0=0U;
l7=si0;
goto L24;
L25:;
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
l5=si0;
si0=l7;
si1=-4U;
si0&=si1;
l7=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l5;
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
l5=si0;
si0=l7;
si1=8U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l5;
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
l5=si0;
L24:;
si0=l6;
si0=!(si0);
if(si0){
goto L21;
}
si0=l2;
si1=l7;
si0+=si1;
l7=si0;
L26:;
{
si0=l5;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L26;
}
}
L21:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l3;
si1=48U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=0U;
si1=l7;
si2=l5;
si3=l6;
si3=!(si3);
si4=l7;
si5=l5;
si4=si4 > si5;
si3&=si4;
l6=si3;
si1=si3?si1:si2;
l7=si1;
si2=l5;
si1-=si2;
l5=si1;
si2=l5;
si3=l7;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l3;
si1=112U;
si0+=si1;
si1=0U;
si2=l7;
f2389(i,si0,si1,si2);
L27:;
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=152U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
f2390(i,si0,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=l7;
if(si0){
goto L29;
}
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+64U,sj1);
goto L28;
L29:;
si0=l3;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
si1=757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=1308728U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=757U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=l3;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l3;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=152U;
si1+=si2;
f63(i,si0,si1);
L28:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+140U);
si0=!(si0);
if(si0){
goto L30;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+136U);
f15271(i,si0);
L30:;
si0=l7;
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L31;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L31:;
si0=l4;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=1308728U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=756U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=l3;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=152U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+136U,sj1);
si0=32U;
si1=48U;
si2=l4;
si3=4U;
si2&=si3;
si0=si2?si0:si1;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l7;
si1=l4;
si0=f734(i,si0,si1);
l5=si0;
goto L34;
L35:;
si0=l4;
if(si0){
goto L36;
}
si0=0U;
l5=si0;
goto L34;
L36:;
si0=l4;
si1=3U;
si0&=si1;
l6=si0;
si0=l4;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=0U;
l5=si0;
si0=0U;
l4=si0;
goto L37;
L38:;
si0=l7;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l5=si0;
si0=l4;
si1=-4U;
si0&=si1;
l4=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l5;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l5=si0;
si0=l4;
si1=8U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l5;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l5=si0;
L37:;
si0=l6;
si0=!(si0);
if(si0){
goto L34;
}
si0=l7;
si1=l4;
si0+=si1;
l7=si0;
L39:;
{
si0=l5;
si1=l7;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L39;
}
}
L34:;
si0=l3;
si1=96U;
si0+=si1;
si1=l1;
si2=l3;
si3=136U;
si2+=si3;
si3=l2;
si4=1U;
si5=l5;
f2374(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
si1=757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=757U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=1308728U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l3;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l3;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l0;
si1=l3;
si2=152U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+96U);
f15271(i,si0);
L40:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
f15271(i,si0);
goto L32;
L33:;
si0=l3;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=172U;
si0+=si1;
si1=757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
si1=756U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l3;
si1=1308848U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=756U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
si1=l3;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l3;
si1=136U;
si0+=si1;
si1=l3;
si2=112U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si1=l1;
si2=l3;
si3=136U;
si2+=si3;
si3=32U;
si4=0U;
si5=l3;
f2374(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
f15271(i,si0);
L32:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
L41:;
si0=l3;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2378(rustpythonInstance*i,U32 l0,U32 l1,F64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
sd0=l2;
sd1=l2;
si0=sd0 != sd1;
if(si0){
goto L2;
}
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L2;
}
si0=1U;
l4=si0;
si0=1308844U;
l5=si0;
goto L1;
L2:;
si0=1308725U;
si1=1308724U;
si2=1308516U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+32U);
l6=si3;
si4=8U;
si3&=si4;
l4=si3;
si1=si3?si1:si2;
si2=l6;
si3=16U;
si2&=si3;
l6=si2;
si0=si2?si0:si1;
l5=si0;
si0=1U;
si1=l4;
si2=3U;
si1>>=(si2&31);
si2=l6;
si0=si2?si0:si1;
l4=si0;
L1:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=6U;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L5;
case 3:
goto L3;
default:
goto L4;
}
L5:;
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
l7=si0;
si1=-3U;
si0+=si1;
l8=si0;
si1=255U;
si0&=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
L11:;
si0=l7;
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
si0=1308872U;
si1=40U;
si2=1308928U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
sd2=l2;
sd2=fabs(sd2);
si3=l1;
si4=37U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=l1;
si4=i32_load(&i->m0,(U64)si4+32U);
l7=si4;
si5=1U;
si4&=si5;
f2420(i,si0,si1,sd2,si3,si4);
goto L6;
L8:;
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
sd2=l2;
sd2=fabs(sd2);
si3=l1;
si4=37U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=l1;
si4=i32_load(&i->m0,(U64)si4+32U);
l7=si4;
si5=1U;
si4&=si5;
f2419(i,si0,si1,sd2,si3,si4);
goto L6;
L7:;
si0=l3;
si1=8U;
si0+=si1;
si1=l6;
si2=1U;
si3=l6;
si1=si3?si1:si2;
sd2=l2;
sd2=fabs(sd2);
si3=l1;
si4=37U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=l1;
si4=i32_load(&i->m0,(U64)si4+32U);
l7=si4;
si5=1U;
si4&=si5;
si5=0U;
f2422(i,si0,si1,sd2,si3,si4,si5);
L6:;
si0=l7;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=40U;
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
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=32U;
si1=48U;
si2=l7;
si3=4U;
si2&=si3;
si0=si2?si0:si1;
l6=si0;
si0=l4;
if(si0){
goto L15;
}
si0=0U;
l4=si0;
goto L14;
L15:;
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
l4=si0;
L14:;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l3;
si3=40U;
si2+=si3;
si3=l6;
si4=1U;
si5=l4;
f2374(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=756U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=1308728U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l3;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
goto L12;
L13:;
si0=l3;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
si1=12U;
si0+=si1;
si1=757U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=1308728U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=756U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
f63(i,si0,si1);
si0=l0;
si1=l1;
si2=l3;
si3=40U;
si2+=si3;
si3=32U;
si4=0U;
si5=l3;
f2374(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f15271(i,si0);
L12:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2379(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=1114112U;
l2=si0;
goto L2;
L3:;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l4;
si1=31U;
si0&=si1;
l5=si0;
si0=l4;
si1=223U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l4=si0;
goto L4;
L5:;
si0=l1;
si1=l3;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l4;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l6;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
goto L4;
L6:;
si0=l1;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1114112U;
l2=si0;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l3;
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
si0=si0 == si1;
if(si0){
goto L2;
}
L4:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
l2=si0;
L2:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
L1:;
si0=l2;
si1=42U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1114113U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=l2;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=l1;
si1=l3;
si2=2U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l5;
si1=31U;
si0&=si1;
l9=si0;
si0=l5;
si1=224U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l5=si0;
goto L13;
L14:;
si0=l1;
si1=l3;
si2=3U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l5;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l6;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l5=si0;
goto L13;
L15:;
si0=l1;
si1=l3;
si2=4U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l3;
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
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1U;
si0+=si1;
l9=si0;
goto L12;
L13:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1U;
si0+=si1;
l9=si0;
L12:;
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=-48U;
si0+=si1;
l3=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l3;
si1=l7;
si2=10U;
si1*=si2;
si0+=si1;
l7=si0;
L16:;
{
si0=l9;
l4=si0;
si0=l1;
si1=1114113U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l8;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=l1;
si1=l2;
si2=2U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l3;
si1=31U;
si0&=si1;
l9=si0;
si0=l3;
si1=223U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l3=si0;
goto L17;
L18:;
si0=l1;
si1=l2;
si2=3U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si0=l3;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l5;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
goto L17;
L19:;
si0=l1;
si1=l2;
si2=4U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L11;
}
L17:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=-48U;
si0+=si1;
l3=si0;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l7;
sj0=(U64)(I64)(I32)(si0);
sj1=10ULL;
sj0*=sj1;
l10=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l10;
si1=(U32)(sj1);
l5=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l6;
l2=si0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l5;
si2=l3;
si1+=si2;
l7=si1;
si2=l5;
si1=(U32)((I32)si1<(I32)si2);
si0=si0 == si1;
if(si0){
goto L16;
}
L20:;
}
si0=l0;
si1=1114116U;
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
L11:;
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
L10:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=l7;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l1=si2;
si1^=si2;
si2=l1;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2380(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
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
U32 l22=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l2;
si0+=si1;
l4=si0;
si0=0U;
l5=si0;
si0=2U;
l2=si0;
si0=0U;
l6=si0;
L6:;
{
sj0=l8;
l7=sj0;
si0=l2;
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
case 2:
goto L11;
default:
goto L10;
}
L11:;
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l5;
sj1=(U64)(si1);
sj0|=sj1;
l7=sj0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L10:;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si1=255U;
si0&=si1;
si1=37U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
goto L12;
L13:;
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l1;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l5;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=l11;
si1=37U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
si1=1U;
si0+=si1;
l12=si0;
goto L7;
L15:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l2;
si0+=si1;
si1=37U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=l4;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
l13=si0;
L17:;
{
si0=l5;
si1=l13;
si0+=si1;
l14=si0;
si1=2U;
si0+=si1;
l15=si0;
si0=l1;
si1=l13;
si0+=si1;
l10=si0;
si1=2U;
si0+=si1;
l11=si0;
si0=l10;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si1=37U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l9;
sj0=(U64)(si0);
l7=sj0;
si0=l11;
si1=l4;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l15;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=l11;
si1=37U;
si0=si0 == si1;
if(si0){
goto L18;
}
sj0=l7;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l14;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj0|=sj1;
l7=sj0;
si0=l14;
si1=3U;
si0+=si1;
l12=si0;
si0=l14;
si1=2U;
si0+=si1;
l5=si0;
si0=l10;
si1=3U;
si0+=si1;
l10=si0;
goto L7;
L20:;
si0=l15;
l5=si0;
si0=l11;
l1=si0;
goto L12;
L19:;
sj0=l7;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l14;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj0|=sj1;
l7=sj0;
goto L14;
L18:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
L21:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l2;
si0+=si1;
si1=37U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l13;
si2=2U;
si1+=si2;
l13=si1;
si0+=si1;
si1=1U;
si0+=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L8;
}
L14:;
sj0=l7;
si0=(U32)(sj0);
si1=1U;
si0+=si1;
l5=si0;
si0=1114115U;
l2=si0;
goto L2;
L12:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l2;
si0+=si1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=2U;
l2=si0;
goto L6;
L9:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
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
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l3;
si1=l2;
f2384(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=44U;
si1*=si2;
si0+=si1;
l2=si0;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
goto L1;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L25;
}
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l16=sj0;
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l3;
si1=l2;
f2384(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=44U;
si1*=si2;
si0+=si1;
l2=si0;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L25:;
si0=0U;
l17=si0;
si0=l11;
si1=40U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l11;
l15=si0;
si0=0U;
l14=si0;
si0=0U;
l18=si0;
goto L27;
L28:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l10;
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=1U;
l14=si0;
si0=0U;
l13=si0;
si0=0U;
l2=si0;
L29:;
{
si0=l10;
si1=l13;
si0+=si1;
l19=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l1=si0;
si0=-1U;
l9=si0;
si0=l15;
si1=-40U;
si0+=si1;
switch(si0){
case 0:
goto L35;
case 1:
goto L34;
default:
goto L33;
}
L35:;
si0=1U;
l9=si0;
L34:;
si0=l9;
si1=l14;
si0+=si1;
l14=si0;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L32;
}
goto L31;
L33:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L31;
}
si0=l1;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l9=si0;
si0=l1;
si1=192U;
si0&=si1;
si1=6U;
si0>>=(si1&31);
si1=-64U;
si0|=si1;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l2;
si0-=si1;
si1=1U;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=2U;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
L36:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l2;
si0+=si1;
l15=si0;
si1=l9;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l15;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
goto L30;
L32:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l14=si0;
if(si0){
goto L37;
}
si0=1114112U;
l2=si0;
goto L2;
L37:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+36U);
l16=sj0;
si0=l19;
si1=1U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l12;
si1=l13;
si0+=si1;
l13=si0;
si1=2U;
si0+=si1;
l12=si0;
si0=l19;
si1=2U;
si0+=si1;
l10=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l13;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
sj0=l16;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l18=si0;
sj0=l16;
si0=(U32)(sj0);
l19=si0;
goto L27;
L38:;
sj0=l16;
si0=(U32)(sj0);
l19=si0;
si0=1114115U;
l2=si0;
si0=0U;
l5=si0;
goto L5;
L31:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
L39:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=1U;
si0+=si1;
l2=si0;
L30:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l10;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0+=si1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L29;
}
L27:;
si0=1U;
l1=si0;
si0=l15;
si1=255U;
si0&=si1;
si1=-32U;
si0+=si1;
switch(si0){
case 0:
goto L44;
case 1:
goto L40;
case 2:
goto L40;
case 3:
goto L41;
case 4:
goto L40;
case 5:
goto L40;
case 6:
goto L40;
case 7:
goto L40;
case 8:
goto L40;
case 9:
goto L40;
case 10:
goto L40;
case 11:
goto L45;
case 12:
goto L40;
case 13:
goto L43;
case 14:
goto L40;
case 15:
goto L40;
case 16:
goto L42;
default:
goto L40;
}
L45:;
si0=16U;
l1=si0;
goto L41;
L44:;
si0=8U;
l1=si0;
goto L41;
L43:;
si0=4U;
l1=si0;
goto L41;
L42:;
si0=2U;
l1=si0;
L41:;
si0=l10;
si1=l4;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l10;
l2=si0;
si0=l12;
l9=si0;
L48:;
{
si0=1U;
l13=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si1=-32U;
si0+=si1;
switch(si0){
case 0:
goto L51;
case 1:
goto L46;
case 2:
goto L46;
case 3:
goto L49;
case 4:
goto L46;
case 5:
goto L46;
case 6:
goto L46;
case 7:
goto L46;
case 8:
goto L46;
case 9:
goto L46;
case 10:
goto L46;
case 11:
goto L50;
case 12:
goto L46;
case 13:
goto L52;
case 14:
goto L46;
case 15:
goto L46;
case 16:
goto L53;
default:
goto L46;
}
L53:;
si0=2U;
l13=si0;
goto L49;
L52:;
si0=4U;
l13=si0;
goto L49;
L51:;
si0=8U;
l13=si0;
goto L49;
L50:;
si0=16U;
l13=si0;
L49:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l13;
si1=l1;
si0|=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L48;
}
}
si0=l4;
si1=l12;
si0+=si1;
si1=l10;
si0-=si1;
l12=si0;
L47:;
si0=0U;
si1=l12;
si2=l4;
si3=l4;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
si0=1114115U;
l2=si0;
si0=l11;
si1=40U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L2;
L46:;
si0=l9;
si1=1U;
si0+=si1;
l12=si0;
si0=l2;
si1=1U;
si0+=si1;
l10=si0;
si0=l15;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l9;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=l1;
l17=si0;
L40:;
si0=l15;
si1=255U;
si0&=si1;
l2=si0;
si1=42U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l2;
si1=-48U;
si0+=si1;
l1=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L59;
}
si0=1U;
l2=si0;
si0=2U;
l20=si0;
si0=l12;
l21=si0;
goto L57;
L59:;
si0=0U;
l20=si0;
si0=l10;
si1=l4;
si0=si0 != si1;
if(si0){
goto L60;
}
sj0=l8;
si0=(U32)(sj0);
l5=si0;
si0=l4;
l10=si0;
si0=l12;
l21=si0;
si0=0U;
l2=si0;
goto L55;
L60:;
si0=l4;
si1=l12;
si0+=si1;
si1=l10;
si0-=si1;
l21=si0;
L61:;
{
si0=l12;
l5=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=1U;
l2=si0;
si0=l5;
si1=1U;
si0+=si1;
l21=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L55;
L62:;
si0=l1;
sj0=(U64)(I64)(I32)(si0);
sj1=10ULL;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l8;
si1=(U32)(sj1);
l13=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l13;
si2=l2;
si1+=si2;
l1=si1;
si2=l13;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L56;
}
si0=l5;
si1=1U;
si0+=si1;
l12=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L61;
}
}
si0=l4;
l10=si0;
si0=0U;
l2=si0;
goto L55;
L58:;
si0=l10;
si1=l4;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=0U;
l2=si0;
si0=l4;
l10=si0;
si0=l12;
l21=si0;
goto L63;
L64:;
si0=1U;
l2=si0;
si0=l12;
si1=1U;
si0+=si1;
l21=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
L63:;
si0=l15;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l12;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=1U;
l20=si0;
L57:;
goto L54;
L56:;
si0=1114116U;
l2=si0;
si0=l11;
si1=40U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L2;
L55:;
si0=l1;
si1=l1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
l13=si1;
si0^=si1;
si1=l13;
si0-=si1;
l22=si0;
si0=l15;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l5;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
L54:;
si0=3U;
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L72;
}
si0=l15;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l10;
si1=l4;
si0=si0 != si1;
if(si0){
goto L73;
}
si0=l21;
l12=si0;
goto L68;
L73:;
si0=l21;
si1=1U;
si0+=si1;
l13=si0;
si0=l10;
si1=1U;
si0+=si1;
l9=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si1=42U;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l15;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l21;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=2U;
l1=si0;
si0=l15;
si1=-48U;
si0+=si1;
l5=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L77;
}
si0=l13;
l12=si0;
goto L69;
L77:;
si0=0U;
l1=si0;
si0=l9;
si1=l4;
si0=si0 != si1;
if(si0){
goto L78;
}
si0=l4;
l9=si0;
si0=l13;
l12=si0;
si0=0U;
l2=si0;
goto L74;
L78:;
si0=l4;
si1=l21;
si0+=si1;
si1=l10;
si0-=si1;
l12=si0;
si0=0U;
l13=si0;
L79:;
{
si0=l10;
si1=l13;
si0+=si1;
l9=si0;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
sj0=(U64)(si0);
l16=sj0;
si0=l15;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L80;
}
si0=1U;
l2=si0;
sj0=l16;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l21;
si2=l13;
si1+=si2;
l13=si1;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=l13;
si1=2U;
si0+=si1;
l12=si0;
si0=l9;
si1=2U;
si0+=si1;
l9=si0;
goto L74;
L80:;
si0=l5;
sj0=(U64)(I64)(I32)(si0);
sj1=10ULL;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l9;
si2=l2;
si1+=si2;
l5=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
if(si0){
goto L75;
}
si0=l10;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0+=si1;
si1=1U;
si0+=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L79;
}
}
sj0=l16;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l21;
si2=l13;
si1+=si2;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=0U;
l2=si0;
si0=l4;
l9=si0;
goto L74;
L76:;
si0=l9;
si1=l4;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=0U;
l2=si0;
si0=l4;
l9=si0;
si0=l13;
l12=si0;
goto L81;
L82:;
si0=l21;
si1=2U;
si0+=si1;
l12=si0;
si0=l10;
si1=2U;
si0+=si1;
l9=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l15=si0;
si0=1U;
l2=si0;
L81:;
si0=l15;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l13;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=1U;
l1=si0;
goto L71;
L75:;
si0=l21;
si1=l13;
si0+=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=1114116U;
l2=si0;
si0=l11;
si1=40U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L2;
L74:;
si0=l5;
si1=l5;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
l13=si1;
si0^=si1;
si1=l13;
si0-=si1;
l5=si0;
goto L70;
L72:;
si0=l21;
l12=si0;
si0=l10;
l9=si0;
L71:;
L70:;
si0=l2;
si0=!(si0);
if(si0){
goto L67;
}
L69:;
si0=l15;
si1=255U;
si0&=si1;
l2=si0;
si1=-104U;
si0+=si1;
switch(si0){
case 0:
goto L83;
case 1:
goto L65;
case 2:
goto L65;
case 3:
goto L65;
case 4:
goto L83;
default:
goto L84;
}
L84:;
si0=l2;
si1=76U;
si0=si0 != si1;
if(si0){
goto L65;
}
L83:;
si0=l9;
si1=l4;
si0=si0 != si1;
if(si0){
goto L66;
}
L68:;
si0=l4;
l9=si0;
L67:;
si0=0U;
si1=l12;
si2=l9;
si3=l4;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
si0=1114115U;
l2=si0;
si0=l11;
si1=40U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L2;
L66:;
si0=l9;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
si1=l12;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L65:;
si0=512U;
l13=si0;
si0=3U;
l10=si0;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si1=-69U;
si0+=si1;
switch(si0){
case 0:
goto L97;
case 1:
goto L95;
case 2:
goto L93;
case 3:
goto L85;
case 4:
goto L85;
case 5:
goto L85;
case 6:
goto L85;
case 7:
goto L85;
case 8:
goto L85;
case 9:
goto L85;
case 10:
goto L85;
case 11:
goto L85;
case 12:
goto L85;
case 13:
goto L85;
case 14:
goto L85;
case 15:
goto L85;
case 16:
goto L85;
case 17:
goto L85;
case 18:
goto L85;
case 19:
goto L99;
case 20:
goto L85;
case 21:
goto L85;
case 22:
goto L85;
case 23:
goto L85;
case 24:
goto L85;
case 25:
goto L85;
case 26:
goto L85;
case 27:
goto L85;
case 28:
goto L88;
case 29:
goto L89;
case 30:
goto L92;
case 31:
goto L86;
case 32:
goto L98;
case 33:
goto L96;
case 34:
goto L94;
case 35:
goto L85;
case 36:
goto L86;
case 37:
goto L85;
case 38:
goto L85;
case 39:
goto L85;
case 40:
goto L85;
case 41:
goto L85;
case 42:
goto L87;
case 43:
goto L85;
case 44:
goto L85;
case 45:
goto L91;
case 46:
goto L90;
case 47:
goto L85;
case 48:
goto L86;
case 49:
goto L85;
case 50:
goto L85;
case 51:
goto L100;
default:
goto L85;
}
L100:;
si0=0U;
l13=si0;
goto L86;
L99:;
si0=256U;
l13=si0;
goto L86;
L98:;
si0=0U;
l10=si0;
si0=0U;
l13=si0;
goto L86;
L97:;
si0=256U;
l13=si0;
si0=0U;
l10=si0;
goto L86;
L96:;
si0=0U;
l13=si0;
si0=1U;
l10=si0;
goto L86;
L95:;
si0=256U;
l13=si0;
si0=1U;
l10=si0;
goto L86;
L94:;
si0=0U;
l13=si0;
si0=2U;
l10=si0;
goto L86;
L93:;
si0=256U;
l13=si0;
si0=2U;
l10=si0;
goto L86;
L92:;
si0=0U;
l13=si0;
si0=5U;
l10=si0;
goto L86;
L91:;
si0=256U;
l13=si0;
si0=6U;
l10=si0;
goto L86;
L90:;
si0=0U;
l13=si0;
si0=6U;
l10=si0;
goto L86;
L89:;
si0=768U;
l13=si0;
L88:;
si0=6U;
l10=si0;
goto L86;
L87:;
si0=768U;
l13=si0;
L86:;
sj0=l7;
si0=(U32)(sj0);
l11=si0;
si0=l13;
si1=l10;
si0|=si1;
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L101;
}
si0=l3;
si1=l13;
f2384(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L101:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=44U;
si1*=si2;
si0+=si1;
l13=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l22;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l20;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=40U;
si0+=si1;
si1=l10;
i32_store16(&i->m0,(U64)si0,si1);
si0=l13;
si1=36U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=32U;
si0+=si1;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=28U;
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=24U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
l1=si0;
si0=l12;
l5=si0;
si0=l9;
si1=l4;
si0=si0 == si1;
if(si0){
goto L102;
}
si0=l12;
si1=1U;
si0+=si1;
l5=si0;
si0=l9;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=l12;
l6=si0;
L102:;
si0=l9;
si1=l4;
si0=si0 != si1;
l2=si0;
si0=l13;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=32ULL;
sj0<<=(sj1&63);
si1=l12;
sj1=(U64)(si1);
sj0|=sj1;
l8=sj0;
goto L6;
L85:;
}
sj0=l8;
si0=(U32)(sj0);
l5=si0;
si0=l11;
si1=40U;
si0=si0 != si1;
if(si0){
goto L2;
}
L5:;
si0=l19;
si0=!(si0);
if(si0){
goto L2;
}
si0=l14;
f15271(i,si0);
goto L2;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L3:;
si0=1114112U;
l2=si0;
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L103;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L103:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=24U;
si0+=si1;
l2=si0;
si0=0U;
l13=si0;
L105:;
{
si0=l2;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L108;
}
si0=l2;
si1=-16U;
si0+=si1;
l4=si0;
goto L107;
L108:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L106;
}
si0=l11;
si1=l13;
si2=44U;
si1*=si2;
si0+=si1;
si1=24U;
si0+=si1;
l4=si0;
L107:;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L106;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L106:;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l2;
si1=44U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L105;
}
}
L104:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2381(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=0U;
l4=si0;
L9:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
goto L21;
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L23;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l1;
si1=31U;
si0&=si1;
l5=si0;
si0=l1;
si1=223U;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l1=si0;
goto L23;
L24:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l6;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L23;
L25:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L20;
}
L23:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L21:;
si0=l1;
si1=37U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l1;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L18;
}
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=l3;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+48U);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
f2384(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si2=44U;
si1*=si2;
si0+=si1;
l1=si0;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L14;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l1;
si1=31U;
si0&=si1;
l7=si0;
si0=l1;
si1=223U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l1=si0;
goto L14;
L28:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l6;
si1=l7;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L14;
L29:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l7;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L14;
}
L27:;
si0=l3;
si1=1114112U;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L13;
L18:;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+66U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=3U;
l1=si0;
goto L15;
L31:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+67U,si1);
si0=l3;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+66U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=4U;
l1=si0;
goto L15;
L30:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
L32:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L9;
L17:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
goto L1;
L16:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+65U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=2U;
l1=si0;
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si2=l1;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
L33:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l2;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L9;
L14:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l2=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=37U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L11;
}
goto L10;
L13:;
si0=l5;
si1=1U;
si0+=si1;
l8=si0;
si0=1114115U;
l1=si0;
goto L2;
L12:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L34:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=l1;
si0+=si1;
si1=37U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L9;
L11:;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+48U);
l9=sj0;
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
f2384(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
L35:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si2=44U;
si1*=si2;
si0+=si1;
l1=si0;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L10:;
si0=l1;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L38;
}
si0=1114112U;
l1=si0;
goto L37;
L38:;
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L39;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l6;
si1=31U;
si0&=si1;
l8=si0;
si0=l6;
si1=223U;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l6=si0;
goto L39;
L40:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l6;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l10;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
goto L39;
L41:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1114112U;
l1=si0;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l2;
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
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L37;
}
L39:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
l1=si0;
L37:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
L36:;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
si0=0U;
l7=si0;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l1;
si1=40U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l10=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L49;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l1;
si1=31U;
si0&=si1;
l7=si0;
si0=l1;
si1=224U;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l1=si0;
goto L49;
L50:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l14;
si1=l7;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L49;
L51:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l7;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
L49:;
si0=l3;
si1=l13;
si2=1U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=2U;
l15=si0;
si0=l1;
si1=-40U;
si0+=si1;
switch(si0){
case 0:
goto L53;
case 1:
goto L55;
default:
goto L54;
}
L55:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+68U);
l9=sj0;
si0=1U;
l11=si0;
goto L44;
L54:;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=1U;
l15=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L57;
}
si0=l1;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L58;
}
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+63U,si1);
si0=l3;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=4U;
l1=si0;
goto L56;
L58:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=3U;
l1=si0;
goto L56;
L57:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=2U;
l1=si0;
L56:;
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=l1;
f2397(i,si0,si1,si2);
si0=1U;
l15=si0;
goto L52;
L53:;
si0=l3;
si1=64U;
si0+=si1;
si1=0U;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+72U);
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+72U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
L52:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l10;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L59;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=l3;
si1=l6;
si2=2U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l1;
si1=31U;
si0&=si1;
l11=si0;
si0=l1;
si1=224U;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l1=si0;
goto L59;
L60:;
si0=l3;
si1=l6;
si2=3U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l2;
si1=l11;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L59;
L61:;
si0=l3;
si1=l6;
si2=4U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l11;
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
L59:;
si0=l13;
si1=2U;
si0+=si1;
l14=si0;
si0=-1U;
l2=si0;
si0=l1;
si1=-40U;
si0+=si1;
switch(si0){
case 0:
goto L64;
case 1:
goto L63;
default:
goto L65;
}
L65:;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L62;
}
goto L47;
L64:;
si0=1U;
l2=si0;
L63:;
si0=l2;
si1=l15;
si0+=si1;
l15=si0;
if(si0){
goto L47;
}
si0=l7;
l6=si0;
goto L45;
L62:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l1;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+63U,si1);
si0=l3;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=4U;
l1=si0;
goto L66;
L68:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=3U;
l1=si0;
goto L66;
L67:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=2U;
l1=si0;
L66:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+72U);
l2=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L69;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l2;
si2=l1;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
L69:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l2;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
goto L46;
L48:;
si0=0U;
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=0U;
l12=si0;
goto L43;
L47:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
si0=si0 != si1;
if(si0){
goto L70;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
L70:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=1U;
si0+=si1;
l2=si0;
L46:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l10;
si0=si0 == si1;
if(si0){
goto L5;
}
L71:;
{
si0=l14;
l13=si0;
si0=l3;
si1=l7;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L72;
}
si0=l3;
si1=l7;
si2=2U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l1;
si1=31U;
si0&=si1;
l11=si0;
si0=l1;
si1=223U;
si0=si0 > si1;
if(si0){
goto L73;
}
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l1=si0;
goto L72;
L73:;
si0=l3;
si1=l7;
si2=3U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L74;
}
si0=l14;
si1=l11;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L72;
L74:;
si0=l3;
si1=l7;
si2=4U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l11;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l13;
l14=si0;
goto L5;
L72:;
si0=-1U;
l7=si0;
si0=l1;
si1=-40U;
si0+=si1;
switch(si0){
case 0:
goto L82;
case 1:
goto L81;
default:
goto L83;
}
L83:;
si0=l1;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L80;
}
goto L6;
L82:;
si0=1U;
l7=si0;
L81:;
si0=l7;
si1=l15;
si0+=si1;
l15=si0;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L79;
}
goto L76;
L80:;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L76;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L78;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L84;
}
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=3U;
l1=si0;
goto L77;
L84:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+63U,si1);
si0=l3;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+62U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=4U;
l1=si0;
goto L77;
L79:;
si0=l13;
si1=1U;
si0+=si1;
l14=si0;
goto L45;
L78:;
si0=l3;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+61U,si1);
si0=l3;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+60U,si1);
si0=2U;
l1=si0;
L77:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
si1=l2;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L85;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l2;
si2=l1;
f2389(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
L85:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l2;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l1;
si0+=si1;
l2=si0;
goto L75;
L76:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+68U);
si0=si0 != si1;
if(si0){
goto L86;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l2;
f2387(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l2=si0;
L86:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=1U;
si0+=si1;
l2=si0;
L75:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l13;
si1=1U;
si0+=si1;
l14=si0;
si0=l6;
l7=si0;
si0=l6;
si1=l10;
si0=si0 != si1;
if(si0){
goto L71;
}
goto L6;
}
L45:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l11=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+68U);
l9=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
L44:;
sj0=l9;
sj1=32ULL;
sj0>>=(sj1&63);
l16=sj0;
si0=l6;
si1=l10;
si0=si0 != si1;
if(si0){
goto L88;
}
si0=1114112U;
l1=si0;
si0=l14;
l8=si0;
si0=l10;
l2=si0;
goto L87;
L88:;
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L89;
}
si0=l3;
si1=l6;
si2=2U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l7;
si1=31U;
si0&=si1;
l13=si0;
si0=l7;
si1=224U;
si0=si0 >= si1;
if(si0){
goto L90;
}
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l7=si0;
goto L89;
L90:;
si0=l3;
si1=l6;
si2=3U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l15=si0;
si0=l7;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L91;
}
si0=l15;
si1=l13;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
goto L89;
L91:;
si0=l3;
si1=l6;
si2=4U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1114112U;
l1=si0;
si0=l14;
l8=si0;
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l13;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L87;
}
L89:;
si0=l3;
si1=l14;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
l1=si0;
L87:;
sj0=l16;
si0=(U32)(sj0);
l12=si0;
sj0=l9;
si0=(U32)(sj0);
l17=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+20U,si1);
L43:;
si0=1U;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=-32U;
si0+=si1;
switch(si0){
case 0:
goto L96;
case 1:
goto L42;
case 2:
goto L42;
case 3:
goto L92;
case 4:
goto L42;
case 5:
goto L42;
case 6:
goto L42;
case 7:
goto L42;
case 8:
goto L42;
case 9:
goto L42;
case 10:
goto L42;
case 11:
goto L93;
case 12:
goto L42;
case 13:
goto L95;
case 14:
goto L42;
case 15:
goto L42;
case 16:
goto L94;
default:
goto L42;
}
L96:;
si0=8U;
l6=si0;
goto L92;
L95:;
si0=4U;
l6=si0;
goto L92;
L94:;
si0=2U;
l6=si0;
goto L92;
L93:;
si0=16U;
l6=si0;
L92:;
si0=l2;
si1=l10;
si0=si0 != si1;
if(si0){
goto L98;
}
si0=l6;
l7=si0;
goto L97;
L98:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=l6;
l7=si0;
L100:;
{
si0=l3;
si1=l2;
l6=si1;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L101;
}
si0=l3;
si1=l6;
si2=2U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l13=si0;
si0=l1;
si1=31U;
si0&=si1;
l15=si0;
si0=l1;
si1=223U;
si0=si0 > si1;
if(si0){
goto L102;
}
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l13;
si0|=si1;
l1=si0;
goto L101;
L102:;
si0=l3;
si1=l6;
si2=3U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l13=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L103;
}
si0=l13;
si1=l15;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L101;
L103:;
si0=l3;
si1=l6;
si2=4U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l15;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L99;
}
L101:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
l6=si0;
si0=l1;
si1=-32U;
si0+=si1;
switch(si0){
case 0:
goto L107;
case 1:
goto L104;
case 2:
goto L104;
case 3:
goto L105;
case 4:
goto L104;
case 5:
goto L104;
case 6:
goto L104;
case 7:
goto L104;
case 8:
goto L104;
case 9:
goto L104;
case 10:
goto L104;
case 11:
goto L106;
case 12:
goto L104;
case 13:
goto L108;
case 14:
goto L104;
case 15:
goto L104;
case 16:
goto L109;
default:
goto L104;
}
L109:;
si0=2U;
l6=si0;
goto L105;
L108:;
si0=4U;
l6=si0;
goto L105;
L107:;
si0=8U;
l6=si0;
goto L105;
L106:;
si0=16U;
l6=si0;
L105:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=l7;
si0|=si1;
l7=si0;
si0=l8;
si1=1U;
si0+=si1;
l14=si0;
l8=si0;
si0=l2;
si1=l10;
si0=si0 != si1;
if(si0){
goto L100;
}
goto L99;
L104:;
}
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L42;
L99:;
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+16U,si1);
L97:;
si0=l3;
si1=1114112U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
L42:;
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f2379(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l15=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L110;
}
si0=l6;
l1=si0;
si0=l15;
l8=si0;
goto L7;
L110:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L111;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L113;
}
si0=1114112U;
l1=si0;
goto L112;
L113:;
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L114;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l8;
si1=31U;
si0&=si1;
l14=si0;
si0=l8;
si1=223U;
si0=si0 > si1;
if(si0){
goto L115;
}
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l8=si0;
goto L114;
L115:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l13=si0;
si0=l8;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L116;
}
si0=l13;
si1=l14;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
goto L114;
L116:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1114112U;
l1=si0;
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l14;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L112;
}
L114:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
l1=si0;
L112:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
L111:;
si0=3U;
l14=si0;
si0=l1;
si1=46U;
si0=si0 != si1;
if(si0){
goto L117;
}
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f2379(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l13=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l14=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L118;
}
si0=l14;
l1=si0;
si0=l13;
l8=si0;
goto L7;
L118:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L117:;
si0=l1;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L119;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L121;
}
si0=1114112U;
l1=si0;
goto L120;
L121:;
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L122;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l8;
si1=31U;
si0&=si1;
l18=si0;
si0=l8;
si1=223U;
si0=si0 > si1;
if(si0){
goto L123;
}
si0=l18;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l8=si0;
goto L122;
L123:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l19=si0;
si0=l8;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L124;
}
si0=l19;
si1=l18;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
goto L122;
L124:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1114112U;
l1=si0;
si0=l19;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l18;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L120;
}
L122:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l10=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
l1=si0;
L120:;
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
L119:;
si0=l1;
si1=-104U;
si0+=si1;
switch(si0){
case 0:
goto L145;
case 1:
goto L146;
case 2:
goto L146;
case 3:
goto L146;
case 4:
goto L145;
default:
goto L147;
}
L147:;
si0=l1;
si1=76U;
si0=si0 == si1;
if(si0){
goto L145;
}
L146:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
goto L144;
L145:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L141;
}
si0=l3;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L148;
}
si0=l3;
si1=l2;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l10=si0;
si0=l1;
si1=31U;
si0&=si1;
l18=si0;
si0=l1;
si1=223U;
si0=si0 > si1;
if(si0){
goto L149;
}
si0=l18;
si1=6U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l1=si0;
goto L148;
L149:;
si0=l3;
si1=l2;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l1;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L150;
}
si0=l10;
si1=l18;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
goto L148;
L150:;
si0=l3;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l18;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L143;
}
L148:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L144:;
si0=512U;
l2=si0;
si0=3U;
l10=si0;
si0=l1;
si1=-69U;
si0+=si1;
switch(si0){
case 0:
goto L137;
case 1:
goto L135;
case 2:
goto L133;
case 3:
goto L7;
case 4:
goto L7;
case 5:
goto L7;
case 6:
goto L7;
case 7:
goto L7;
case 8:
goto L7;
case 9:
goto L7;
case 10:
goto L7;
case 11:
goto L7;
case 12:
goto L7;
case 13:
goto L7;
case 14:
goto L7;
case 15:
goto L7;
case 16:
goto L7;
case 17:
goto L7;
case 18:
goto L7;
case 19:
goto L139;
case 20:
goto L7;
case 21:
goto L7;
case 22:
goto L7;
case 23:
goto L7;
case 24:
goto L7;
case 25:
goto L7;
case 26:
goto L7;
case 27:
goto L7;
case 28:
goto L128;
case 29:
goto L129;
case 30:
goto L132;
case 31:
goto L126;
case 32:
goto L138;
case 33:
goto L136;
case 34:
goto L134;
case 35:
goto L7;
case 36:
goto L126;
case 37:
goto L7;
case 38:
goto L7;
case 39:
goto L7;
case 40:
goto L7;
case 41:
goto L7;
case 42:
goto L127;
case 43:
goto L7;
case 44:
goto L7;
case 45:
goto L131;
case 46:
goto L130;
case 47:
goto L7;
case 48:
goto L126;
case 49:
goto L7;
case 50:
goto L7;
case 51:
goto L140;
default:
goto L151;
}
L151:;
si0=l1;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
goto L142;
L143:;
si0=l2;
si1=4U;
si0+=si1;
l1=si0;
L142:;
si0=l1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L141;
}
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L125;
}
si0=l3;
si1=l1;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l2;
si1=31U;
si0&=si1;
l5=si0;
si0=l2;
si1=223U;
si0=si0 > si1;
if(si0){
goto L152;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l2=si0;
goto L125;
L152:;
si0=l3;
si1=l1;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l2;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L153;
}
si0=l6;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
goto L125;
L153:;
si0=l3;
si1=l1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
l2=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L125;
}
L141:;
si0=l3;
si1=1114112U;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L8;
L140:;
si0=0U;
l2=si0;
goto L126;
L139:;
si0=256U;
l2=si0;
goto L126;
L138:;
si0=0U;
l10=si0;
si0=0U;
l2=si0;
goto L126;
L137:;
si0=256U;
l2=si0;
si0=0U;
l10=si0;
goto L126;
L136:;
si0=0U;
l2=si0;
si0=1U;
l10=si0;
goto L126;
L135:;
si0=256U;
l2=si0;
si0=1U;
l10=si0;
goto L126;
L134:;
si0=0U;
l2=si0;
si0=2U;
l10=si0;
goto L126;
L133:;
si0=256U;
l2=si0;
si0=2U;
l10=si0;
goto L126;
L132:;
si0=0U;
l2=si0;
si0=5U;
l10=si0;
goto L126;
L131:;
si0=256U;
l2=si0;
si0=6U;
l10=si0;
goto L126;
L130:;
si0=0U;
l2=si0;
si0=6U;
l10=si0;
goto L126;
L129:;
si0=768U;
l2=si0;
L128:;
si0=6U;
l10=si0;
goto L126;
L127:;
si0=768U;
l2=si0;
L126:;
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L154;
}
si0=l15;
l1=si0;
si0=l14;
l8=si0;
goto L2;
L154:;
si0=l2;
si1=l10;
si0|=si1;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L155;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
f2384(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
L155:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l2;
si2=44U;
si1*=si2;
si0+=si1;
l2=si0;
si1=l13;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l14;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l8;
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L157;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
goto L156;
L157:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L159;
}
si0=1114112U;
l1=si0;
goto L158;
L159:;
si0=l3;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L160;
}
si0=l3;
si1=l5;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l6;
si1=31U;
si0&=si1;
l7=si0;
si0=l6;
si1=223U;
si0=si0 > si1;
if(si0){
goto L161;
}
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l6=si0;
goto L160;
L161:;
si0=l3;
si1=l5;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l6;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L162;
}
si0=l8;
si1=l7;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
goto L160;
L162:;
si0=l3;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1114112U;
l1=si0;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l7;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L158;
}
L160:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
l1=si0;
L158:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
L156:;
si0=l4;
si1=l2;
si2=l1;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
goto L9;
L125:;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l8=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1114115U;
l1=si0;
si0=l2;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=0U;
l8=si0;
si0=1114115U;
l1=si0;
L7:;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l17;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
f15271(i,si0);
goto L2;
L6:;
si0=l13;
si1=1U;
si0+=si1;
l14=si0;
L5:;
si0=l3;
si1=1114113U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l14;
i32_store(&i->m0,(U64)si0+16U,si1);
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
f15271(i,si0);
L3:;
si0=1114112U;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L163;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L163:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=!(si0);
if(si0){
goto L164;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si1=24U;
si0+=si1;
l1=si0;
si0=0U;
l2=si0;
L165:;
{
si0=l1;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 != si1;
if(si0){
goto L168;
}
si0=l1;
si1=-16U;
si0+=si1;
l5=si0;
goto L167;
L168:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L166;
}
si0=l7;
si1=l2;
si2=44U;
si1*=si2;
si0+=si1;
si1=24U;
si0+=si1;
l5=si0;
L167:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L166;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L166:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=44U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L165;
}
}
L164:;
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
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2382(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
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
si0=f15277(i,si0,si1);
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
si0=f15277(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l5;
f15271(i,si0);
goto L5;
L12:;
si0=l5;
si1=l2;
si0=f15274(i,si0,si1);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
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
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L7:;
si0=l2;
si0=f15269(i,si0);
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

void f2383(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l2=si0;
goto L5;
L6:;
si0=l1;
si1=1U;
si0=f15273(i,si0,si1);
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

void f2384(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=44U;
si0*=si1;
l4=si0;
si0=l1;
si1=48806447U;
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=44U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f2382(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
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
si2=8U;
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

void f2385(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f2382(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
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
si2=8U;
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

void f2386(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si1=28U;
si0*=si1;
l4=si0;
si0=l1;
si1=76695845U;
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=28U;
si1*=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l5;
si2=l4;
si3=l2;
si4=16U;
si3+=si4;
f2382(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
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
si2=8U;
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

void f2387(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l2;
si1=l4;
si2=l1;
si3=l2;
si4=16U;
si3+=si4;
f2382(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
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
si2=8U;
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

void f2388(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l5;
si2=l4;
si3=l3;
si4=16U;
si3+=si4;
f2382(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f2389(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+16U,si1);
goto L3;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
L3:;
si0=l3;
si1=l4;
si2=l2;
si3=l3;
si4=16U;
si3+=si4;
f2382(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
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
si2=8U;
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

void f2390(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=127U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L3:;
{
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si1=l0;
f2387(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l4;
si1=6U;
si0>>=(si1&31);
l5=si0;
si0=l4;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l4;
si1=2047U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=-64U;
si0|=si1;
l5=si0;
si0=l3;
si1=l2;
si0-=si1;
l4=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l0;
l2=si0;
goto L7;
L8:;
si0=l1;
si1=l0;
si2=2U;
f2389(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L7:;
si0=l1;
si1=l2;
si2=2U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L6;
}
goto L1;
}
L5:;
si0=l4;
si1=12U;
si0>>=(si1&31);
l7=si0;
si0=l5;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l5=si0;
si0=l4;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si1=18U;
si0>>=(si1&31);
si1=-16U;
si0|=si1;
l8=si0;
si0=l7;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l7=si0;
si0=l3;
si1=l2;
si0-=si1;
l4=si0;
L10:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l0;
l2=si0;
goto L11;
L12:;
si0=l1;
si1=l0;
si2=4U;
f2389(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L11:;
si0=l1;
si1=l2;
si2=4U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=l7;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L10;
}
goto L1;
}
L9:;
si0=l7;
si1=-32U;
si0|=si1;
l8=si0;
si0=l3;
si1=l2;
si0-=si1;
l4=si0;
L13:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l0;
l2=si0;
goto L14;
L15:;
si0=l1;
si1=l0;
si2=3U;
f2389(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L14:;
si0=l1;
si1=l2;
si2=3U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L13;
}
}
L1:;
L0:;
}

void f2391(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=127U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=l2;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L3:;
{
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si1=l0;
f2387(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l4;
si1=6U;
si0>>=(si1&31);
l5=si0;
si0=l4;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l4;
si1=2047U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=-64U;
si0|=si1;
l5=si0;
si0=l3;
si1=l2;
si0-=si1;
l4=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l0;
l2=si0;
goto L7;
L8:;
si0=l1;
si1=l0;
si2=2U;
f2389(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L7:;
si0=l1;
si1=l2;
si2=2U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L6;
}
goto L1;
}
L5:;
si0=l4;
si1=12U;
si0>>=(si1&31);
l7=si0;
si0=l5;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l5=si0;
si0=l4;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si1=18U;
si0>>=(si1&31);
si1=-16U;
si0|=si1;
l8=si0;
si0=l7;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l7=si0;
si0=l3;
si1=l2;
si0-=si1;
l4=si0;
L10:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l0;
l2=si0;
goto L11;
L12:;
si0=l1;
si1=l0;
si2=4U;
f2389(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L11:;
si0=l1;
si1=l2;
si2=4U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=l7;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L10;
}
goto L1;
}
L9:;
si0=l7;
si1=-32U;
si0|=si1;
l8=si0;
si0=l3;
si1=l2;
si0-=si1;
l4=si0;
L13:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0-=si1;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l0;
l2=si0;
goto L14;
L15:;
si0=l1;
si1=l0;
si2=3U;
f2389(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L14:;
si0=l1;
si1=l2;
si2=3U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L13;
}
}
L1:;
L0:;
}

U32 f2392(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=1114113U;
si0=si0 != si1;
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
goto L3;
}
si0=1114112U;
l2=si0;
goto L2;
L3:;
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l4=si0;
si0=l2;
si1=31U;
si0&=si1;
l5=si0;
si0=l2;
si1=223U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l2=si0;
goto L2;
L4:;
si0=l0;
si1=l3;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
si0=l2;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l2=si0;
goto L2;
L5:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l3;
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
l2=si0;
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=1114112U;
l3=si0;
si0=l2;
si1=46U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=91U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si1=1114113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
l3=si0;
L6:;
si0=l3;
L0:;
return si0;
}

U32 f2393(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f2394(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f2395(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si1-=si2;
si2=3U;
si1+=si2;
si2=2U;
si1>>=(si2&31);
l6=si1;
si2=l3;
si3=l6;
si4=l3;
si3=si3 < si4;
si1=si3?si1:si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=l6;
f2389(i,si0,si1,si2);
L2:;
L3:;
{
si0=l1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=255U;
si0&=si1;
l6=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l7=si0;
si0=l6;
si1=31U;
si0&=si1;
l4=si0;
si0=l6;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l6=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L7;
L8:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l7=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l7;
si1=l4;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L7;
L9:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l4;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L7:;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l6;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l2;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l6;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=3U;
l6=si0;
goto L10;
L12:;
si0=l2;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=l6;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l6;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=4U;
l6=si0;
goto L10;
L11:;
si0=l2;
si1=l6;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l6;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=2U;
l6=si0;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l0;
si1=l4;
si2=l6;
f2389(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L4;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
si1=l4;
f2387(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L4:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L3;
}
}
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2396(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=1114114U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l1=si2;
si1-=si2;
si2=3U;
si3=l1;
si4=-1114112U;
si3+=si4;
si4=3U;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l4;
si2=l5;
f2389(i,si0,si1,si2);
L1:;
L2:;
{
si0=1114114U;
l4=si0;
sj0=l3;
l6=sj0;
si0=l1;
si1=-1114111U;
si0+=si1;
si1=0U;
si2=l1;
si3=-1114112U;
si2+=si3;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
default:
goto L9;
}
L9:;
si0=l1;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l6=sj0;
si0=1114112U;
l4=si0;
goto L7;
L8:;
sj0=l3;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l3;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l6=sj0;
si0=1114113U;
l4=si0;
L7:;
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L11;
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
goto L4;
L11:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
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
si0=4U;
l1=si0;
goto L4;
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=l5;
f2387(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L3;
L6:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
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
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l0;
si1=l5;
si2=l1;
f2389(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l5;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L3:;
sj0=l6;
l3=sj0;
si0=l4;
l1=si0;
goto L2;
}
L0:;
}

void f2397(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f2389(i,si0,si1,si2);
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
L0:;
}

void f2398(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+40U);
l3=si0;
switch(si0){
case 0:
goto L1;
case 1:
goto L2;
default:
goto L3;
}
L3:;
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L4;
}
goto L1;
L4:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l6=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si1=l1;
si2=24U;
si1+=si2;
l9=si1;
si0+=si1;
si1=-1U;
si0+=si1;
l10=si0;
si0=l8;
si1=5U;
si0=si0 < si1;
l11=si0;
L6:;
{
si0=l4;
si1=l6;
si0+=si1;
l12=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=l5;
si1=l6;
si0-=si1;
l14=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l12;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l15=si0;
si1=l12;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l15;
si1=l12;
si0-=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l15=si0;
L13:;
{
si0=l12;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l3;
si1=l14;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
goto L10;
L12:;
si0=l5;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=0U;
l15=si0;
L14:;
{
si0=l12;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l14;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L8;
}
L11:;
si0=l14;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l3=si0;
L10:;
si0=l13;
si1=16843009U;
si0*=si1;
l15=si0;
L15:;
{
si0=l12;
si1=l3;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
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
goto L9;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l15;
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
goto L9;
}
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L15;
}
}
L9:;
si0=l14;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
L16:;
{
si0=l12;
si1=l3;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l3;
l15=si0;
goto L7;
L17:;
si0=l14;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L8:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L5;
L7:;
si0=l1;
si1=l15;
si2=l6;
si1+=si2;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l8;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l6;
si1=l7;
si0=si0 > si1;
l15=si0;
if(si0){
goto L18;
}
si0=l11;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si1=l4;
si2=l6;
si3=l8;
si2-=si3;
l3=si2;
si1+=si2;
si2=l15;
si0=si2?si0:si1;
si1=l9;
si2=l8;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L18;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l2;
si0-=si1;
l15=si0;
si0=l4;
si1=l2;
si0+=si1;
l2=si0;
goto L1;
L19:;
si0=l8;
si1=4U;
si2=1309024U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L20;
}
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
L20:;
si0=l12;
si1=l3;
si0-=si1;
l15=si0;
si0=l4;
si1=l3;
si0+=si1;
l2=si0;
goto L1;
L2:;
si0=0U;
l2=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L21;
}
goto L1;
L21:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L22;
}
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
L22:;
si0=l12;
si1=l3;
si0-=si1;
l15=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l2=si0;
L1:;
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2399(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
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
goto L4;
}
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=1U;
l7=si0;
si0=l1;
si1=l5;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l1;
si1=l5;
si2=2U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l10=si0;
si0=l9;
si1=31U;
si0&=si1;
l11=si0;
si0=l9;
si1=223U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l9=si0;
goto L3;
L5:;
si0=l1;
si1=l5;
si2=3U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l9;
si1=240U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l10;
si1=l11;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
goto L3;
L6:;
si0=l1;
si1=l5;
si2=4U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l11;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l9=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l1;
si1=l8;
si2=l5;
si1-=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l12=si2;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=l8;
si0-=si1;
si1=3U;
si0+=si1;
si1=2U;
si0>>=(si1&31);
l1=si0;
si1=l4;
si2=l1;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l7=si0;
L7:;
si0=l7;
si1=4U;
si2=l7;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=l7;
if(si0){
goto L9;
}
si0=l10;
l11=si0;
goto L8;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l10;
si1=l7;
si0=f15277(i,si0,si1);
l11=si0;
goto L8;
L11:;
si0=l7;
si0=f15269(i,si0);
l11=si0;
L8:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si1=l3;
si0-=si1;
l12=si0;
si0=l3;
si1=-2U;
si0+=si1;
l9=si0;
si0=l6;
si1=3U;
si0+=si1;
l13=si0;
si0=12U;
l3=si0;
si0=1U;
l1=si0;
L13:;
{
si0=l8;
si1=l6;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l8;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l8;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L14;
L15:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l10=si0;
si0=l7;
si1=31U;
si0&=si1;
l4=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l7=si0;
si0=l8;
si1=2U;
si0+=si1;
l4=si0;
goto L14;
L16:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l10;
si1=l4;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l8;
si1=3U;
si0+=si1;
l4=si0;
goto L14;
L17:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l4;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l8;
si1=4U;
si0+=si1;
l4=si0;
L14:;
si0=l5;
si1=l8;
si0-=si1;
l8=si0;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l2;
si1=l1;
si2=1U;
si3=l13;
si4=l4;
si3-=si4;
si4=2U;
si3>>=(si4&31);
l10=si3;
si4=l9;
si5=l10;
si6=l9;
si5=si5 < si6;
si3=si5?si3:si4;
si4=1U;
si3+=si4;
si4=l12;
si5=l1;
si4+=si5;
si5=2U;
si4+=si5;
si5=1U;
si4=si4 == si5;
si2=si4?si2:si3;
f2388(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L18:;
si0=l11;
si1=l3;
si0+=si1;
l10=si0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=-4U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l8;
si1=l4;
si0+=si1;
l5=si0;
si0=l4;
l8=si0;
si0=l12;
si1=l1;
si0+=si1;
if(si0){
goto L13;
}
}
L12:;
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
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l10;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f2400(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f2398(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=32U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
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
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
f2398(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=8U;
l3=si0;
si0=1U;
l1=si0;
L5:;
{
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=1U;
f2388(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
L6:;
si0=l5;
si1=l3;
si0+=si1;
l7=si0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
f2398(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f2401(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U64 l32=0;
F64 l33=0;
U64 l34=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=1136U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=0U;
l5=si0;
si0=0U;
l6=si0;
goto L1;
L2:;
si0=0U;
l6=si0;
si0=0U;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L1;
case 2:
goto L4;
default:
goto L1;
}
L4:;
si0=1U;
l5=si0;
si0=1U;
l6=si0;
goto L1;
L3:;
si0=1U;
l5=si0;
L1:;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l5;
l7=si0;
goto L7;
L8:;
si0=l5;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l5;
l7=si0;
si0=l1;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=1U;
l7=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=l5;
si2=1U;
si1+=si2;
l8=si1;
si2=l2;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si1=-1U;
si0+=si1;
l10=si0;
si0=2U;
l8=si0;
L11:;
{
si0=l2;
si1=l8;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l10;
l8=si0;
goto L10;
L12:;
si0=l1;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l12=si0;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L11;
}
}
si0=l12;
si1=-2U;
si0+=si1;
l8=si0;
L10:;
si0=l5;
l7=si0;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
l7=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l5;
l7=si0;
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l12=si0;
si0=l5;
l8=si0;
L13:;
{
si0=l10;
si1=l8;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l9;
l7=si0;
goto L7;
L14:;
si0=l12;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L13;
}
}
si0=l7;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L7;
}
L9:;
si0=l3;
si1=25U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
sj0=0ULL;
l15=sj0;
si0=l5;
l16=si0;
sj0=0ULL;
l17=sj0;
si0=l7;
l11=si0;
si0=l7;
si1=l2;
si0=si0 >= si1;
l18=si0;
if(si0){
goto L18;
}
si0=l1;
si1=1U;
si0+=si1;
l19=si0;
si0=l1;
si1=-1U;
si0+=si1;
l9=si0;
sj0=0ULL;
l17=sj0;
si0=l5;
l16=si0;
si0=l7;
l11=si0;
L19:;
{
si0=l1;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l11;
si1=-1U;
si0+=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l8;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l11;
l8=si0;
L22:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L18;
}
si0=l9;
si1=l8;
si0+=si1;
l12=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L22;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=l11;
si2=1U;
si1+=si2;
l8=si1;
si2=l2;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si1=-1U;
si0+=si1;
l20=si0;
L24:;
{
si0=l2;
si1=l8;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l20;
l8=si0;
goto L23;
L25:;
si0=l1;
si1=l8;
si0+=si1;
l12=si0;
si0=l8;
si1=1U;
si0+=si1;
l21=si0;
l8=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L24;
}
}
si0=l21;
si1=-2U;
si0+=si1;
l8=si0;
L23:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L18;
}
L26:;
{
si0=l20;
si1=l11;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l9=si0;
sj0=0ULL;
l15=sj0;
goto L17;
L27:;
si0=l19;
si1=l11;
si0+=si1;
l8=si0;
si0=l11;
si1=1U;
si0+=si1;
l12=si0;
l11=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L26;
}
}
si0=l12;
si1=l2;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l12;
l11=si0;
goto L18;
L21:;
si0=l11;
l12=si0;
L20:;
si0=l8;
si1=-48U;
si0+=si1;
l8=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l12;
l11=si0;
goto L18;
L28:;
sj0=l17;
sj1=10ULL;
sj0*=sj1;
si1=l8;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l17=sj0;
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l12;
si1=1U;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L19;
}
}
L18:;
si0=l11;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l1;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l13;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L16;
}
L29:;
si0=0U;
l9=si0;
si0=l11;
l10=si0;
L17:;
si0=l16;
l21=si0;
si0=0U;
l19=si0;
goto L15;
L16:;
si0=l16;
si1=1U;
si0+=si1;
l22=si0;
si0=l11;
si1=1U;
si0+=si1;
l23=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l22;
l21=si0;
si0=l23;
l10=si0;
goto L30;
L31:;
si0=l1;
si1=1U;
si0+=si1;
l19=si0;
si0=l1;
si1=-1U;
si0+=si1;
l12=si0;
si0=l22;
l21=si0;
si0=l23;
l10=si0;
L32:;
{
si0=l1;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l8;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l10;
l8=si0;
L35:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L30;
}
si0=l12;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L35;
}
}
si0=l11;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l8=si1;
si2=l2;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l24=si0;
si1=-1U;
si0+=si1;
l9=si0;
L37:;
{
si0=l2;
si1=l8;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l9;
l8=si0;
goto L36;
L38:;
si0=l1;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l20=si0;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L37;
}
}
si0=l20;
si1=-2U;
si0+=si1;
l8=si0;
L36:;
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L30;
}
L39:;
{
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l24;
l10=si0;
goto L30;
L40:;
si0=l19;
si1=l10;
si0+=si1;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l11=si0;
l10=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L39;
}
}
si0=l11;
si1=l2;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l11;
l10=si0;
goto L30;
L34:;
si0=l10;
l11=si0;
L33:;
si0=l8;
si1=-48U;
si0+=si1;
l8=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l11;
l10=si0;
goto L30;
L41:;
sj0=l17;
sj1=10ULL;
sj0*=sj1;
si1=l8;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l17=sj0;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
si0=l11;
si1=1U;
si0+=si1;
l10=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L32;
}
}
L30:;
si0=l1;
si1=l23;
si0+=si1;
l19=si0;
sj0=0ULL;
si1=l21;
si2=l22;
si1-=si2;
l9=si1;
sj1=(U64)(si1);
sj0-=sj1;
l15=sj0;
L15:;
si0=l9;
si1=l16;
si2=l5;
si1-=si2;
l20=si1;
si0+=si1;
l12=si0;
if(si0){
goto L43;
}
si0=4U;
l14=si0;
goto L42;
L43:;
sj0=0ULL;
l25=sj0;
si0=l10;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l1;
si1=l10;
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
si1=l14;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l14;
si1|=si2;
si2=255U;
si1&=si2;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=0U;
l26=si0;
si0=l10;
si1=1U;
si0+=si1;
l22=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=0U;
l8=si0;
goto L45;
L46:;
si0=l1;
si1=l22;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l10;
l8=si0;
L48:;
{
si0=l8;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=0U;
l26=si0;
si0=0U;
l8=si0;
goto L45;
L49:;
si0=l1;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L48;
}
}
si0=0U;
l26=si0;
si0=l11;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L50;
}
si0=0U;
l8=si0;
goto L45;
L50:;
si0=l2;
si1=l10;
si2=2U;
si1+=si2;
l24=si1;
si2=l2;
si3=l24;
si2=si2 > si3;
si0=si2?si0:si1;
l27=si0;
si1=-1U;
si0+=si1;
l28=si0;
si0=l2;
si1=-2U;
si0+=si1;
l14=si0;
si0=l1;
si1=2U;
si0+=si1;
l23=si0;
L52:;
{
si0=l14;
si1=l10;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l28;
l11=si0;
goto L51;
L53:;
si0=l23;
si1=l10;
si0+=si1;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l11=si0;
l10=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L52;
}
}
L51:;
si0=0U;
l26=si0;
si0=l11;
si1=l2;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=0U;
l8=si0;
goto L45;
L54:;
si0=0U;
l26=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=0U;
l8=si0;
goto L45;
L55:;
si0=0U;
l26=si0;
si0=0U;
l8=si0;
si0=l1;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L45;
}
L56:;
{
si0=l27;
si1=l24;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=0U;
l26=si0;
si0=l27;
l22=si0;
si0=0U;
l8=si0;
goto L45;
L57:;
si0=l1;
si1=l24;
si0+=si1;
l8=si0;
si0=l24;
si1=1U;
si0+=si1;
l10=si0;
l24=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L56;
}
}
si0=0U;
l26=si0;
si0=0U;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l22=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L45;
}
L47:;
si0=0U;
l26=si0;
si0=0U;
l8=si0;
si0=l11;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L58;
case 1:
goto L45;
case 2:
goto L59;
default:
goto L45;
}
L59:;
si0=1U;
l26=si0;
si0=1U;
l8=si0;
goto L45;
L58:;
si0=1U;
l8=si0;
si0=0U;
l26=si0;
L45:;
si0=5U;
l14=si0;
si0=l8;
si1=l22;
si0+=si1;
l10=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l1;
si1=1U;
si0+=si1;
l23=si0;
si0=l1;
si1=-1U;
si0+=si1;
l22=si0;
sj0=0ULL;
l29=sj0;
si0=l21;
si1=1U;
si0+=si1;
si1=l8;
si0+=si1;
l30=si0;
l28=si0;
sj0=0ULL;
l25=sj0;
L61:;
{
si0=l1;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l10;
l11=si0;
goto L62;
L63:;
si0=l8;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l10;
l11=si0;
goto L62;
L64:;
si0=l10;
l8=si0;
L65:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L60;
}
si0=l22;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L65;
}
}
si0=l11;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L60;
}
si0=l2;
si1=l10;
si2=1U;
si1+=si2;
l8=si1;
si2=l2;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l31=si0;
si1=-1U;
si0+=si1;
l24=si0;
si0=l10;
si1=l2;
si2=l10;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l27=si0;
si0=l10;
l8=si0;
L67:;
{
si0=l27;
si1=l8;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l8;
si1=1U;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l24;
l27=si0;
goto L66;
L68:;
si0=l23;
si1=l8;
si0+=si1;
l21=si0;
si0=l11;
l8=si0;
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L67;
}
}
si0=l11;
si1=-1U;
si0+=si1;
l27=si0;
L66:;
si0=l27;
si1=l2;
si0=si0 == si1;
if(si0){
goto L60;
}
si0=l27;
si1=1U;
si0+=si1;
l8=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L60;
}
L69:;
{
si0=l24;
si1=l10;
si0=si0 != si1;
if(si0){
goto L70;
}
si0=l31;
l10=si0;
goto L60;
L70:;
si0=l23;
si1=l10;
si0+=si1;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l11=si0;
l10=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L69;
}
}
L62:;
si0=l8;
si1=-48U;
si0+=si1;
l8=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L71;
}
si0=l11;
l10=si0;
goto L60;
L71:;
sj0=l25;
sj1=10ULL;
sj0*=sj1;
si1=l8;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l32=sj0;
sj1=l25;
sj2=l25;
sj3=268435456ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l8=si2;
sj0=si2?sj0:sj1;
l25=sj0;
sj0=l32;
sj1=l29;
si2=l8;
sj0=si2?sj0:sj1;
l29=sj0;
si0=l28;
si1=1U;
si0+=si1;
l28=si0;
si0=l11;
si1=1U;
si0+=si1;
l10=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L61;
}
}
L60:;
si0=l28;
si1=l30;
si0=si0 == si1;
if(si0){
goto L42;
}
sj0=0ULL;
sj1=l29;
sj0-=sj1;
sj1=l29;
si2=l26;
sj0=si2?sj0:sj1;
l25=sj0;
sj1=l15;
sj0+=sj1;
l15=sj0;
L44:;
si0=l1;
si1=l7;
si0+=si1;
l21=si0;
si0=0U;
l11=si0;
si0=l12;
si1=20U;
si0=si0 < si1;
if(si0){
goto L72;
}
si0=l12;
si1=-19U;
si0+=si1;
l23=si0;
si0=l18;
si0=!(si0);
if(si0){
goto L75;
}
si0=l7;
l8=si0;
goto L74;
L75:;
si0=l1;
si1=1U;
si0+=si1;
l24=si0;
si0=l1;
si1=-1U;
si0+=si1;
l14=si0;
si0=l7;
l8=si0;
L76:;
{
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L80;
}
si0=l8;
l12=si0;
goto L79;
L80:;
si0=l11;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L81;
}
si0=l8;
l12=si0;
goto L79;
L81:;
si0=l8;
l11=si0;
L82:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L74;
}
si0=l14;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L82;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L74;
}
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l11=si1;
si2=l2;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l22=si0;
L84:;
{
si0=l2;
si1=l11;
si0=si0 != si1;
if(si0){
goto L85;
}
si0=l22;
l11=si0;
goto L83;
L85:;
si0=l1;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l18=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L84;
}
}
si0=l18;
si1=-2U;
si0+=si1;
l11=si0;
L83:;
si0=l11;
si1=l2;
si0=si0 == si1;
if(si0){
goto L74;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L74;
}
si0=l1;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L74;
}
L86:;
{
si0=l22;
si1=l8;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l24;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l12=si0;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L86;
}
}
si0=l12;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L78;
}
L79:;
si0=l11;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 == si1;
if(si0){
goto L77;
}
L78:;
si0=l12;
l8=si0;
goto L74;
L77:;
si0=0U;
si1=l23;
si2=-1U;
si1+=si2;
l8=si1;
si2=l8;
si3=l23;
si2=si2 > si3;
si0=si2?si0:si1;
l23=si0;
si0=l12;
si1=1U;
si0+=si1;
l8=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L76;
}
}
L74:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L87;
}
si0=l8;
si1=l1;
si2=l8;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l13;
si3=255U;
si2&=si3;
si1=si1 == si2;
si0+=si1;
l8=si0;
L87:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l1;
si1=1U;
si0+=si1;
l18=si0;
si0=l1;
si1=-1U;
si0+=si1;
l14=si0;
L88:;
{
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L90;
}
si0=l8;
l12=si0;
goto L89;
L90:;
si0=l11;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L91;
}
si0=l8;
l12=si0;
goto L89;
L91:;
si0=l8;
l11=si0;
L92:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L73;
}
si0=l14;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L92;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L73;
}
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l11=si1;
si2=l2;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l13=si0;
L94:;
{
si0=l2;
si1=l11;
si0=si0 != si1;
if(si0){
goto L95;
}
si0=l13;
l11=si0;
goto L93;
L95:;
si0=l1;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l22=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L94;
}
}
si0=l22;
si1=-2U;
si0+=si1;
l11=si0;
L93:;
si0=l11;
si1=l2;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l1;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L73;
}
L96:;
{
si0=l13;
si1=l8;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l18;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l12=si0;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L96;
}
}
si0=l12;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L73;
}
L89:;
si0=l11;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 != si1;
if(si0){
goto L73;
}
si0=0U;
si1=l23;
si2=-1U;
si1+=si2;
l8=si1;
si2=l8;
si3=l23;
si2=si2 > si3;
si0=si2?si0:si1;
l23=si0;
si0=l12;
si1=1U;
si0+=si1;
l8=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L88;
}
}
L73:;
si0=l23;
si0=!(si0);
if(si0){
goto L97;
}
si0=0U;
l14=si0;
si0=0U;
l12=si0;
si0=l16;
si1=l5;
si0=si0 == si1;
if(si0){
goto L103;
}
si0=l21;
si1=1U;
si0+=si1;
l22=si0;
si0=l21;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l12=si0;
si0=0U;
l14=si0;
L104:;
{
si0=l21;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l12;
si1=-1U;
si0+=si1;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L106;
}
si0=l8;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L106;
}
si0=l12;
l8=si0;
L107:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L103;
}
si0=l5;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L107;
}
}
si0=l11;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L103;
}
si0=l20;
si1=l12;
si2=1U;
si1+=si2;
l8=si1;
si2=l20;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l16=si0;
L109:;
{
si0=l20;
si1=l8;
si0=si0 != si1;
if(si0){
goto L110;
}
si0=l16;
l8=si0;
goto L108;
L110:;
si0=l21;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l13=si0;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L109;
}
}
si0=l13;
si1=-2U;
si0+=si1;
l8=si0;
L108:;
si0=l8;
si1=l20;
si0=si0 == si1;
if(si0){
goto L103;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L103;
}
si0=l21;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L103;
}
L111:;
{
si0=l16;
si1=l12;
si0=si0 == si1;
if(si0){
goto L102;
}
si0=l22;
si1=l12;
si0+=si1;
l8=si0;
si0=l12;
si1=1U;
si0+=si1;
l11=si0;
l12=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L111;
}
}
si0=l11;
si1=l20;
si0=si0 < si1;
if(si0){
goto L105;
}
si0=l11;
l12=si0;
goto L103;
L106:;
si0=l12;
l11=si0;
L105:;
si0=l8;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 == si1;
if(si0){
goto L112;
}
si0=l11;
l12=si0;
goto L103;
L112:;
si0=l14;
si1=l11;
si2=l20;
si1=si1 < si2;
l8=si1;
si0+=si1;
l14=si0;
si0=l11;
si1=l8;
si0+=si1;
l12=si0;
si1=l20;
si0=si0 < si1;
if(si0){
goto L104;
}
}
L103:;
si0=l12;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L102;
}
si0=l21;
si1=-1U;
si0+=si1;
l5=si0;
si0=19U;
l16=si0;
sj0=0ULL;
l17=sj0;
L114:;
{
si0=l21;
si1=l12;
si0+=si1;
l13=si0;
si0=l12;
si1=-1U;
si0+=si1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L116;
}
si0=l12;
l8=si0;
goto L115;
L116:;
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L117;
}
si0=l12;
l8=si0;
goto L115;
L117:;
si0=l12;
l8=si0;
L118:;
{
si0=l8;
if(si0){
goto L119;
}
si0=l12;
l8=si0;
goto L115;
L119:;
si0=l5;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L118;
}
}
si0=l11;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L120;
}
si0=l12;
l8=si0;
goto L115;
L120:;
si0=l20;
si1=l12;
si2=1U;
si1+=si2;
l8=si1;
si2=l20;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l18=si0;
L122:;
{
si0=l20;
si1=l8;
si0=si0 != si1;
if(si0){
goto L123;
}
si0=l18;
l8=si0;
goto L121;
L123:;
si0=l21;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l22=si0;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L122;
}
}
si0=l22;
si1=-2U;
si0+=si1;
l8=si0;
L121:;
si0=l8;
si1=l20;
si0=si0 != si1;
if(si0){
goto L124;
}
si0=l12;
l8=si0;
goto L115;
L124:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l20;
si0=si0 < si1;
if(si0){
goto L125;
}
si0=l12;
l8=si0;
goto L115;
L125:;
si0=l21;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L126;
}
si0=l12;
l8=si0;
goto L115;
L126:;
L127:;
{
si0=l18;
si1=l12;
si0=si0 == si1;
if(si0){
goto L113;
}
si0=l21;
si1=l12;
si0+=si1;
l11=si0;
si0=l12;
si1=1U;
si0+=si1;
l8=si0;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L127;
}
}
si0=l21;
si1=l8;
si0+=si1;
si1=0U;
si2=l8;
si3=l20;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
L115:;
si0=l13;
si0=!(si0);
if(si0){
goto L113;
}
si0=l16;
si0=!(si0);
if(si0){
goto L113;
}
sj0=l17;
sj1=10ULL;
sj0*=sj1;
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=-48U;
si1+=si2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l17=sj0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
si0=l8;
si1=1U;
si0+=si1;
l12=si0;
si1=l20;
si0=si0 < si1;
if(si0){
goto L114;
}
}
L113:;
si0=l20;
l11=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L98;
}
si0=l19;
si0=!(si0);
if(si0){
goto L101;
}
si0=0U;
l5=si0;
si0=0U;
l14=si0;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L99;
}
goto L100;
L102:;
si0=19U;
l16=si0;
si0=l19;
if(si0){
goto L100;
}
L101:;
si0=1309040U;
si1=43U;
si2=1309196U;
f673(i,si0,si1,si2);
UNREACHABLE;
L100:;
sj0=0ULL;
l17=sj0;
si0=l9;
if(si0){
goto L128;
}
si0=0U;
l5=si0;
si0=0U;
l14=si0;
goto L99;
L128:;
si0=l19;
si1=1U;
si0+=si1;
l18=si0;
si0=l19;
si1=-1U;
si0+=si1;
l13=si0;
si0=0U;
l11=si0;
si0=0U;
l14=si0;
L131:;
{
si0=l19;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l11;
si1=-1U;
si0+=si1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L132;
}
si0=l8;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L132;
}
si0=l11;
l8=si0;
L133:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L130;
}
si0=l13;
si1=l8;
si0+=si1;
l12=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L133;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L130;
}
si0=l9;
si1=l11;
si2=1U;
si1+=si2;
l8=si1;
si2=l9;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l22=si0;
L135:;
{
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L136;
}
si0=l22;
l8=si0;
goto L134;
L136:;
si0=l19;
si1=l8;
si0+=si1;
l12=si0;
si0=l8;
si1=1U;
si0+=si1;
l5=si0;
l8=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L135;
}
}
si0=l5;
si1=-2U;
si0+=si1;
l8=si0;
L134:;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L130;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L130;
}
si0=l19;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L130;
}
L137:;
{
si0=l22;
si1=l11;
si0=si0 != si1;
if(si0){
goto L138;
}
sj0=0ULL;
l17=sj0;
si0=0U;
l11=si0;
goto L98;
L138:;
si0=l18;
si1=l11;
si0+=si1;
l8=si0;
si0=l11;
si1=1U;
si0+=si1;
l5=si0;
l11=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L137;
}
}
si0=l5;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L129;
}
si0=l5;
l11=si0;
L132:;
si0=l8;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 != si1;
if(si0){
goto L130;
}
si0=l14;
si1=l11;
si2=l9;
si1=si1 < si2;
l8=si1;
si0+=si1;
l14=si0;
si0=l11;
si1=l8;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L131;
}
}
L130:;
si0=l11;
l5=si0;
goto L99;
L129:;
sj0=0ULL;
l17=sj0;
L99:;
si0=0U;
l11=si0;
si0=l5;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L98;
}
si0=l19;
si1=-1U;
si0+=si1;
l12=si0;
L139:;
{
si0=l19;
si1=l5;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L141;
}
si0=l5;
l8=si0;
goto L140;
L141:;
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L142;
}
si0=l5;
l8=si0;
goto L140;
L142:;
si0=l5;
l8=si0;
L143:;
{
si0=l8;
if(si0){
goto L144;
}
si0=l5;
l8=si0;
goto L140;
L144:;
si0=l12;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L143;
}
}
si0=l11;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L145;
}
si0=l5;
l8=si0;
goto L140;
L145:;
si0=l9;
si1=l5;
si2=1U;
si1+=si2;
l8=si1;
si2=l9;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l18=si0;
L147:;
{
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L148;
}
si0=l18;
l8=si0;
goto L146;
L148:;
si0=l19;
si1=l8;
si0+=si1;
l11=si0;
si0=l8;
si1=1U;
si0+=si1;
l22=si0;
l8=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L147;
}
}
si0=l22;
si1=-2U;
si0+=si1;
l8=si0;
L146:;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L149;
}
si0=l5;
l8=si0;
goto L140;
L149:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L150;
}
si0=l5;
l8=si0;
goto L140;
L150:;
si0=l19;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L151;
}
si0=l5;
l8=si0;
goto L140;
L151:;
L152:;
{
si0=l18;
si1=l5;
si0=si0 != si1;
if(si0){
goto L153;
}
si0=0U;
l11=si0;
goto L98;
L153:;
si0=l19;
si1=l5;
si0+=si1;
l11=si0;
si0=l5;
si1=1U;
si0+=si1;
l8=si0;
l5=si0;
si0=l11;
si1=1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L152;
}
}
si0=l19;
si1=l8;
si0+=si1;
si1=0U;
si2=l8;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
L140:;
si0=0U;
l11=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L98;
}
si0=l16;
si0=!(si0);
if(si0){
goto L98;
}
sj0=l17;
sj1=10ULL;
sj0*=sj1;
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=-48U;
si1+=si2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0+=sj1;
l17=sj0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
si0=l8;
si1=1U;
si0+=si1;
l5=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L139;
}
}
L98:;
si0=l11;
sj0=(U64)(si0);
si1=l14;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l25;
sj0+=sj1;
l15=sj0;
L97:;
si0=l23;
si1=0U;
si0=si0 != si1;
l11=si0;
L72:;
si0=2U;
l14=si0;
si0=l10;
si1=l2;
si0=si0 != si1;
if(si0){
goto L42;
}
sj0=l15;
sj1=-22ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L154;
}
si0=l11;
if(si0){
goto L154;
}
sj0=l15;
sj1=37ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L154;
}
sj0=l17;
sj1=9007199254740992ULL;
si0=sj0 > sj1;
if(si0){
goto L154;
}
sj0=l15;
sj1=23ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L156;
}
si0=l4;
si1=104U;
si0+=si1;
sj1=l17;
sj2=0ULL;
sj3=l15;
si3=(U32)(sj3);
si4=3U;
si3<<=(si4&31);
si4=1311280U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+112U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L154;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+104U);
l25=sj0;
sj1=9007199254740992ULL;
si0=sj0 > sj1;
if(si0){
goto L154;
}
sj0=l25;
sd0=(F64)(sj0);
sd1=1e+22;
sd0*=sd1;
l33=sd0;
goto L155;
L156:;
sj0=l15;
si0=(U32)(sj0);
l8=si0;
sj0=l17;
sd0=(F64)(sj0);
l33=sd0;
sj0=l15;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L157;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=1311616U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
sd1=l33;
sd0*=sd1;
l33=sd0;
goto L155;
L157:;
sd0=l33;
si1=1311616U;
si2=l8;
si3=3U;
si2<<=(si3&31);
si1-=si2;
sd1=f64_load(&i->m0,(U64)si1);
sd0/=sd1;
l33=sd0;
L155:;
si0=l0;
sd1=l33;
sd1=-(sd1);
sd2=l33;
si3=l6;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=0U;
l8=si0;
goto L5;
L154:;
si0=l4;
si1=88U;
si0+=si1;
sj1=l15;
sj2=l17;
si3=l3;
si3=i32_load8_u(&i->m0,(U64)si3+26U);
l8=si3;
f2441(i,si0,sj1,sj2,si3);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+88U);
l34=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
l2=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L161;
}
si0=l8;
if(si0){
goto L161;
}
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L161;
}
si0=l4;
si1=72U;
si0+=si1;
sj1=l15;
sj2=l17;
sj3=1ULL;
sj2+=sj3;
si3=0U;
f2441(i,si0,sj1,sj2,si3);
sj0=l34;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+72U);
si0=sj0 != sj1;
if(si0){
goto L162;
}
si0=l2;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+80U);
si0=si0 == si1;
if(si0){
goto L158;
}
L162:;
sj0=l15;
si0=(U32)(sj0);
l2=si0;
si1=342U;
si0+=si1;
l8=si0;
si1=650U;
si0=si0 > si1;
if(si0){
goto L160;
}
sj0=l17;
sj0=I64_CLZ(sj0);
l25=sj0;
si0=(U32)(sj0);
l1=si0;
si0=l4;
si1=56U;
si0+=si1;
si1=l8;
si2=4U;
si1<<=(si2&31);
l8=si1;
si2=1172256U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l17;
sj4=l25;
sj3<<=(sj4&63);
l29=sj3;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
sj1=511ULL;
sj0&=sj1;
sj1=511ULL;
si0=sj0 != sj1;
if(si0){
goto L163;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l32=sj0;
si0=l4;
si1=40U;
si0+=si1;
si1=l8;
si2=1172264U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l29;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=l32;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l25;
sj0+=sj1;
l25=sj0;
L163:;
si0=l2;
si1=217706U;
si0*=si1;
si1=16U;
si0=(U32)((I32)si0>>(si1&31));
sj1=l25;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=1U;
si1^=si2;
l8=si1;
si2=l1;
si1+=si2;
si0-=si1;
si1=-31692U;
si0+=si1;
l2=si0;
sj0=l25;
si1=l8;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l34=sj0;
goto L159;
L161:;
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L159;
}
goto L158;
L160:;
si0=l8;
si1=651U;
si2=1172200U;
f663(i,si0,si1,si2);
UNREACHABLE;
L159:;
sj0=l15;
l25=sj0;
sj0=l17;
l29=sj0;
sj0=l17;
sj1=10000ULL;
si0=sj0 < sj1;
if(si0){
goto L164;
}
sj0=l17;
l32=sj0;
sj0=l15;
l25=sj0;
L165:;
{
sj0=l25;
sj1=4ULL;
sj0+=sj1;
l25=sj0;
sj0=l32;
sj1=99999999ULL;
si0=sj0 > sj1;
l8=si0;
sj0=l32;
sj1=10000ULL;
sj0=DIV_U(sj0,sj1);
l29=sj0;
l32=sj0;
si0=l8;
if(si0){
goto L165;
}
}
L164:;
sj0=l29;
sj1=100ULL;
si0=sj0 >= sj1;
if(si0){
goto L167;
}
sj0=l29;
l32=sj0;
goto L166;
L167:;
L168:;
{
sj0=l25;
sj1=2ULL;
sj0+=sj1;
l25=sj0;
sj0=l29;
sj1=9999ULL;
si0=sj0 > sj1;
l8=si0;
sj0=l29;
sj1=100ULL;
sj0=DIV_U(sj0,sj1);
l32=sj0;
l29=sj0;
si0=l8;
if(si0){
goto L168;
}
}
L166:;
sj0=l32;
sj1=10ULL;
si0=sj0 < sj1;
if(si0){
goto L169;
}
L170:;
{
sj0=l25;
sj1=1ULL;
sj0+=sj1;
l25=sj0;
sj0=l32;
sj1=99ULL;
si0=sj0 > sj1;
l8=si0;
sj0=l32;
sj1=10ULL;
sj0=DIV_U(sj0,sj1);
l32=sj0;
si0=l8;
if(si0){
goto L170;
}
}
L169:;
si0=l4;
si1=l11;
i32_store8(&i->m0,(U64)si0+153U,si1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l21;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
si1=l19;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l4;
sj1=l17;
i64_store(&i->m0,(U64)si0+128U,sj1);
si0=l4;
sj1=l15;
i64_store(&i->m0,(U64)si0+120U,sj1);
si0=l4;
si1=624U;
si0+=si1;
si1=l4;
si2=120U;
si1+=si2;
si2=769U;
f2402(i,si0,si1,si2);
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si2=624U;
si1+=si2;
si2=504U;
si0=f15390(i,si0,si1,si2);
sj0=l25;
si0=(U32)(sj0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+1128U);
si0-=si1;
si1=1U;
si0+=si1;
l8=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L171;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=120U;
si1+=si2;
sj2=l34;
si3=l2;
si4=32768U;
si3+=si4;
si4=l8;
f2405(i,si0,si1,sj2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l34=sj0;
goto L158;
L171:;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=120U;
si1+=si2;
si2=l8;
f2406(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l34=sj0;
L158:;
si0=l0;
si1=l2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj2=l34;
sj1|=sj2;
sd1=f64_reinterpret_i64(sj1);
l33=sd1;
sd1=-(sd1);
sd2=l33;
si3=l6;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=0U;
l8=si0;
goto L5;
L42:;
si0=l2;
si1=l7;
si0-=si1;
l20=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L174;
}
si0=l20;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l11=si1;
si0=si0 < si1;
if(si0){
goto L174;
}
si0=l7;
l8=si0;
L176:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L175;
}
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L175;
}
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l1;
si1=l8;
si0+=si1;
l5=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l9;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=223U;
si0&=si1;
if(si0){
goto L174;
}
goto L176;
}
L175:;
si0=l11;
if(si0){
goto L174;
}
sd0=INFINITY;
l33=sd0;
si0=l8;
if(si0){
goto L173;
}
L174:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=!(si0);
if(si0){
goto L177;
}
si0=l20;
si1=l3;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0=si0 < si1;
if(si0){
goto L177;
}
si0=l7;
l8=si0;
L179:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L178;
}
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L178;
}
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l1;
si1=l8;
si0+=si1;
l5=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l9;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=223U;
si0&=si1;
if(si0){
goto L177;
}
goto L179;
}
L178:;
si0=l11;
if(si0){
goto L177;
}
sd0=INFINITY;
l33=sd0;
si0=l8;
if(si0){
goto L173;
}
L177:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
si0=!(si0);
if(si0){
goto L172;
}
si0=l20;
si1=l3;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0=si0 < si1;
if(si0){
goto L172;
}
si0=l7;
l8=si0;
L181:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L180;
}
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L180;
}
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l1;
si1=l8;
si0+=si1;
l5=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l9;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si0^=si1;
si1=223U;
si0&=si1;
si0=!(si0);
if(si0){
goto L181;
}
goto L172;
}
L180:;
si0=l11;
if(si0){
goto L172;
}
sd0=INFINITY;
l33=sd0;
si0=l8;
si0=!(si0);
if(si0){
goto L172;
}
L173:;
si0=l8;
si1=l2;
si0=si0 != si1;
if(si0){
goto L172;
}
si0=l0;
sd1=l33;
sd1=-(sd1);
sd2=l33;
si3=l6;
sd1=si3?sd1:sd2;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=0U;
l8=si0;
goto L5;
L172:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L7:;
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=1U;
l8=si0;
L5:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1136U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2402(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=512U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store16(&i->m0,(U64)si0+508U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=-1U;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=1U;
si0+=si1;
l9=si0;
si0=l5;
si1=-1U;
si0+=si1;
l10=si0;
si0=l8;
si1=-1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L2:;
{
si0=l5;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l11;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l7;
l11=si0;
L5:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L5;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l8;
si1=l7;
si2=1U;
si1+=si2;
l11=si1;
si2=l8;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si1=-1U;
si0+=si1;
l14=si0;
L7:;
{
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l14;
l11=si0;
goto L6;
L8:;
si0=l5;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l15=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L7;
}
}
si0=l15;
si1=-2U;
si0+=si1;
l11=si0;
L6:;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L1;
}
L9:;
{
si0=l14;
si1=l7;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l13;
l7=si0;
goto L1;
L10:;
si0=l9;
si1=l7;
si0+=si1;
l11=si0;
si0=l7;
si1=1U;
si0+=si1;
l12=si0;
l7=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L9;
}
}
si0=l12;
si1=l8;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l12;
l7=si0;
goto L1;
L4:;
si0=l7;
l12=si0;
L3:;
si0=l11;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l12;
l7=si0;
goto L1;
L11:;
si0=l12;
si1=l12;
si2=l8;
si1=si1 < si2;
si0+=si1;
l7=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L2;
}
}
L1:;
si0=l5;
si1=1U;
si0+=si1;
l16=si0;
si0=l5;
si1=-1U;
si0+=si1;
l14=si0;
si0=0U;
l15=si0;
L13:;
{
si0=l4;
l17=si0;
L30:;
{
si0=l15;
si1=l2;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l15;
si1=l2;
si0=si0 == si1;
l11=si0;
if(si0){
goto L26;
}
si0=l17;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
l13=si0;
goto L16;
L32:;
L33:;
{
si0=l15;
si1=l2;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l11;
if(si0){
goto L26;
}
goto L33;
}
L31:;
si0=0U;
l9=si0;
si0=0U;
l13=si0;
L34:;
{
si0=l7;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l5;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=l8;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l7;
l11=si0;
goto L35;
L36:;
si0=l10;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l7;
l11=si0;
goto L35;
L37:;
si0=l7;
l11=si0;
L38:;
{
si0=95U;
l10=si0;
si0=l11;
if(si0){
goto L39;
}
si0=l7;
l11=si0;
goto L35;
L39:;
si0=l14;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L38;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L40;
}
si0=l7;
l11=si0;
goto L35;
L40:;
si0=l8;
si1=l7;
si2=1U;
si1+=si2;
l11=si1;
si2=l8;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l18=si0;
si0=l7;
l11=si0;
L42:;
{
si0=l6;
si1=l11;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=l18;
l11=si0;
goto L41;
L43:;
si0=l16;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l19=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L42;
}
}
si0=l19;
si1=-1U;
si0+=si1;
l11=si0;
L41:;
si0=l11;
si1=l8;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l7;
l11=si0;
goto L35;
L44:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l7;
l11=si0;
goto L35;
L45:;
si0=l5;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L46;
}
si0=l7;
l11=si0;
goto L35;
L46:;
L47:;
{
si0=l18;
si1=l7;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l16;
si1=l7;
si0+=si1;
l12=si0;
si0=l7;
si1=1U;
si0+=si1;
l11=si0;
l7=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L47;
}
}
si0=l11;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L29;
}
L35:;
si0=l13;
si1=10U;
si0*=si1;
si1=l10;
si2=-48U;
si1+=si2;
si2=255U;
si1&=si2;
si0+=si1;
l13=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l9;
si1=1U;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=7U;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l12;
l9=si0;
si0=l15;
si1=l2;
si0=si0 < si1;
if(si0){
goto L34;
}
L48:;
}
si0=l15;
si1=l2;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l17;
si1=65535U;
si0&=si1;
if(si0){
goto L16;
}
si0=0U;
l17=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L30;
}
goto L15;
L49:;
}
si0=l4;
si1=65535U;
si0&=si1;
l11=si0;
if(si0){
goto L50;
}
si0=0U;
l4=si0;
si0=l13;
if(si0){
goto L27;
}
goto L26;
L50:;
si0=l11;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l11=si0;
si1=1U;
si0+=si1;
l14=si0;
si1=3U;
si0&=si1;
l10=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=1309216U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l20=sj0;
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l21=sj0;
goto L28;
L51:;
si0=l14;
si1=2147483644U;
si0&=si1;
l12=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l21=sj0;
L52:;
{
si0=l11;
sj1=l20;
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l14=si0;
sj1=l20;
si2=l14;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l14=si0;
sj1=l20;
si2=l14;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=12U;
si0+=si1;
l14=si0;
sj1=l20;
si2=l14;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=32ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L52;
}
goto L28;
}
L29:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l14=si0;
si0=l15;
if(si0){
goto L54;
}
si0=l8;
if(si0){
goto L55;
}
si0=0U;
l14=si0;
si0=0U;
l15=si0;
goto L54;
L55:;
si0=l6;
si1=1U;
si0+=si1;
l19=si0;
si0=l6;
si1=-1U;
si0+=si1;
l10=si0;
si0=0U;
l14=si0;
L56:;
{
si0=l6;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l14;
si1=-1U;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l12;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=l14;
l11=si0;
L58:;
{
si0=0U;
l15=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L54;
}
si0=l10;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L58;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l8;
si1=l14;
si2=1U;
si1+=si2;
l11=si1;
si2=l8;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si1=-1U;
si0+=si1;
l7=si0;
L60:;
{
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l7;
l11=si0;
goto L59;
L61:;
si0=l6;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l16=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L60;
}
}
si0=l16;
si1=-2U;
si0+=si1;
l11=si0;
L59:;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L54;
}
si0=l6;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l14;
l11=si0;
L62:;
{
si0=l7;
si1=l11;
si0=si0 != si1;
if(si0){
goto L63;
}
si0=l5;
l14=si0;
goto L54;
L63:;
si0=l19;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l14=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L62;
}
}
si0=l14;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L54;
}
L57:;
si0=0U;
l15=si0;
si0=l12;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l14;
si1=l14;
si2=l8;
si1=si1 < si2;
si0+=si1;
l14=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L56;
}
}
L54:;
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l7=si0;
L64:;
{
si0=l17;
l18=si0;
L69:;
{
si0=l13;
l19=si0;
si0=l9;
l16=si0;
si0=l15;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L70;
}
L72:;
{
si0=l14;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L71;
}
si0=l6;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l14;
si1=-1U;
si0+=si1;
si1=l8;
si0=si0 < si1;
if(si0){
goto L74;
}
si0=l14;
l11=si0;
goto L73;
L74:;
si0=l10;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l14;
l11=si0;
goto L73;
L75:;
si0=l14;
l11=si0;
L76:;
{
si0=95U;
l10=si0;
si0=l11;
if(si0){
goto L77;
}
si0=l14;
l11=si0;
goto L73;
L77:;
si0=l7;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L76;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L78;
}
si0=l14;
l11=si0;
goto L73;
L78:;
si0=l8;
si1=l14;
si2=1U;
si1+=si2;
l11=si1;
si2=l8;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l13=si0;
L80:;
{
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L81;
}
si0=l13;
l11=si0;
goto L79;
L81:;
si0=l6;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l9=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L80;
}
}
si0=l9;
si1=-2U;
si0+=si1;
l11=si0;
L79:;
si0=l11;
si1=l8;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l14;
l11=si0;
goto L73;
L82:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L83;
}
si0=l14;
l11=si0;
goto L73;
L83:;
si0=l6;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L84;
}
si0=l14;
l11=si0;
goto L73;
L84:;
L85:;
{
si0=l13;
si1=l14;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l5;
si1=l14;
si0+=si1;
l12=si0;
si0=l14;
si1=1U;
si0+=si1;
l11=si0;
l14=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L85;
}
}
si0=l11;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L71;
}
L73:;
si0=l19;
si1=10U;
si0*=si1;
si1=l10;
si2=-48U;
si1+=si2;
si2=255U;
si1&=si2;
si0+=si1;
l19=si0;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l16;
si1=1U;
si0+=si1;
l9=si0;
si0=l11;
si1=1U;
si0+=si1;
l14=si0;
si0=l16;
si1=7U;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l9;
l16=si0;
si0=l15;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L70;
}
goto L72;
}
L71:;
si0=l19;
l13=si0;
si0=l16;
l9=si0;
goto L53;
L70:;
si0=l15;
si1=l2;
si0=si0 != si1;
if(si0){
goto L90;
}
si0=l9;
si0=!(si0);
if(si0){
goto L67;
}
si0=l17;
si1=65535U;
si0&=si1;
l11=si0;
if(si0){
goto L89;
}
si0=0U;
l17=si0;
si0=l19;
if(si0){
goto L68;
}
goto L67;
L90:;
si0=l18;
si1=65535U;
si0&=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L87;
}
si0=l11;
si1=2U;
si0<<=(si1&31);
l12=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l20=sj0;
L91:;
{
si0=l11;
si1=l11;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=1000000000ULL;
sj1*=sj2;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
sj0=l20;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L91;
}
}
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l17=si0;
sj0=l20;
si0=(U32)(sj0);
l11=si0;
si0=!(si0);
if(si0){
goto L92;
}
si0=l17;
si1=124U;
si0=si0 > si1;
if(si0){
goto L88;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l17;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l17=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L92:;
si0=l19;
si0=!(si0);
if(si0){
goto L94;
}
si0=l17;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L94;
}
si0=1U;
l9=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
si0=l19;
l16=si0;
L96:;
{
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l16;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l12;
si0=si0 < si1;
l16=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l17=si0;
si0=l10;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L95;
}
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l9;
si1=l17;
si0=si0 < si1;
l12=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l12;
if(si0){
goto L96;
}
}
L95:;
si0=0U;
l13=si0;
si0=1U;
l19=si0;
si0=0U;
l9=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L64;
}
goto L93;
L94:;
si0=0U;
l13=si0;
si0=0U;
l9=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L64;
}
L93:;
si0=l17;
l18=si0;
si0=l17;
si1=65535U;
si0&=si1;
si1=124U;
si0=si0 <= si1;
if(si0){
goto L65;
}
si0=1309376U;
si1=43U;
si2=1309596U;
f673(i,si0,si1,si2);
UNREACHABLE;
L89:;
si0=l11;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l11=si0;
si1=1U;
si0+=si1;
l10=si0;
si1=3U;
si0&=si1;
l12=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=1309216U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l20=sj0;
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L97;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l21=sj0;
goto L86;
L97:;
si0=l10;
si1=2147483644U;
si0&=si1;
l10=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l21=sj0;
L98:;
{
si0=l11;
sj1=l20;
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l7=si0;
sj1=l20;
si2=l7;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l7=si0;
sj1=l20;
si2=l7;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=12U;
si0+=si1;
l7=si0;
sj1=l20;
si2=l7;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=32ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L98;
}
goto L86;
}
L88:;
si0=1309376U;
si1=43U;
si2=1309596U;
f673(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=0U;
l18=si0;
si0=0U;
l13=si0;
si0=0U;
l9=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L69;
}
goto L65;
L86:;
}
si0=l12;
si0=!(si0);
if(si0){
goto L99;
}
L100:;
{
si0=l11;
sj1=l20;
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
sj0=l21;
sj1=32ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L100;
}
}
L99:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l17=si0;
sj0=l21;
si0=(U32)(sj0);
l11=si0;
si0=!(si0);
if(si0){
goto L103;
}
si0=l17;
si1=124U;
si0=si0 > si1;
if(si0){
goto L102;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l17;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l17=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L103:;
si0=l19;
si0=!(si0);
if(si0){
goto L104;
}
si0=l17;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L104;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
si0=1U;
l7=si0;
si0=l19;
l15=si0;
L106:;
{
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l15;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l12;
si0=si0 < si1;
l15=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l17=si0;
si0=l10;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L105;
}
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l7;
si1=l17;
si0=si0 < si1;
l12=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l12;
if(si0){
goto L106;
}
}
L105:;
si0=1U;
l19=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L67;
}
goto L101;
L104:;
si0=l19;
if(si0){
goto L101;
}
goto L67;
L102:;
si0=1309376U;
si1=43U;
si2=1309612U;
f673(i,si0,si1,si2);
UNREACHABLE;
L101:;
si0=l17;
si1=65535U;
si0&=si1;
si1=124U;
si0=si0 > si1;
if(si0){
goto L66;
}
L68:;
si0=l3;
si1=8U;
si0+=si1;
si1=l17;
si2=65535U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l17=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L67:;
si0=l6;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=-1U;
si0+=si1;
l10=si0;
L107:;
{
si0=l14;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l6;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l14;
si1=-1U;
si0+=si1;
si1=l8;
si0=si0 < si1;
if(si0){
goto L110;
}
si0=l14;
l12=si0;
goto L109;
L110:;
si0=l11;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L111;
}
si0=l14;
l12=si0;
goto L109;
L111:;
si0=l14;
l11=si0;
L112:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L108;
}
si0=l10;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L112;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L108;
}
si0=l8;
si1=l14;
si2=1U;
si1+=si2;
l11=si1;
si2=l8;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l7=si0;
L114:;
{
si0=l8;
si1=l11;
si0=si0 != si1;
if(si0){
goto L115;
}
si0=l7;
l11=si0;
goto L113;
L115:;
si0=l6;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l15=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L114;
}
}
si0=l15;
si1=-2U;
si0+=si1;
l11=si0;
L113:;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L108;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L108;
}
si0=l6;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L108;
}
L116:;
{
si0=l7;
si1=l14;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l9;
si1=l14;
si0+=si1;
l11=si0;
si0=l14;
si1=1U;
si0+=si1;
l12=si0;
l14=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L116;
}
}
si0=l12;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L20;
}
L109:;
si0=l12;
si1=1U;
si0+=si1;
l14=si0;
si0=l11;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 == si1;
if(si0){
goto L107;
}
L108:;
}
si0=0U;
l14=si0;
si0=l17;
si1=65535U;
si0&=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L120;
}
si0=l11;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l11=si0;
si1=1U;
si0+=si1;
l10=si0;
si1=3U;
si0&=si1;
l12=si0;
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L122;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l20=sj0;
goto L121;
L122:;
si0=l10;
si1=2147483644U;
si0&=si1;
l10=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l20=sj0;
L123:;
{
si0=l11;
si1=l11;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=12U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L123;
}
}
L121:;
si0=l12;
si0=!(si0);
if(si0){
goto L124;
}
L125:;
{
si0=l11;
si1=l11;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
sj0=l20;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L125;
}
}
L124:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l11=si0;
sj0=l20;
si0=(U32)(sj0);
l12=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l11;
si1=124U;
si0=si0 > si1;
if(si0){
goto L118;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l11=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L126:;
si0=l11;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L120;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
si0=1U;
l7=si0;
si0=1U;
l15=si0;
L128:;
{
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l15;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l12;
si0=si0 < si1;
l15=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l14=si0;
si0=l10;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L127;
}
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l7;
si1=l14;
si0=si0 < si1;
l12=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l12;
if(si0){
goto L128;
}
}
L127:;
si0=l15;
si0=!(si0);
if(si0){
goto L119;
}
si0=l14;
si1=124U;
si0=si0 > si1;
if(si0){
goto L117;
}
L120:;
si0=l3;
si1=8U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+508U,si1);
L119:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L20;
L118:;
si0=1309376U;
si1=43U;
si2=1309628U;
f673(i,si0,si1,si2);
UNREACHABLE;
L117:;
si0=1309376U;
si1=43U;
si2=1309628U;
f673(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1309376U;
si1=43U;
si2=1309612U;
f673(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l3;
si1=8U;
si0+=si1;
si1=l18;
si2=65535U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l17=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
si0=0U;
l13=si0;
si0=0U;
l9=si0;
goto L64;
}
L53:;
si0=l9;
si0=!(si0);
if(si0){
goto L129;
}
si0=l17;
si1=65535U;
si0&=si1;
l11=si0;
if(si0){
goto L133;
}
si0=0U;
l14=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L129;
}
goto L132;
L133:;
si0=l11;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l11=si0;
si1=1U;
si0+=si1;
l10=si0;
si1=3U;
si0&=si1;
l12=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=1309216U;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l20=sj0;
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L135;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l21=sj0;
goto L134;
L135:;
si0=l10;
si1=2147483644U;
si0&=si1;
l10=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l21=sj0;
L136:;
{
si0=l11;
sj1=l20;
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l7=si0;
sj1=l20;
si2=l7;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l7=si0;
sj1=l20;
si2=l7;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=12U;
si0+=si1;
l7=si0;
sj1=l20;
si2=l7;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=32ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L136;
}
}
L134:;
si0=l12;
si0=!(si0);
if(si0){
goto L137;
}
L138:;
{
si0=l11;
sj1=l20;
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
sj0=l21;
sj1=32ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L138;
}
}
L137:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l14=si0;
sj0=l21;
si0=(U32)(sj0);
l11=si0;
si0=!(si0);
if(si0){
goto L139;
}
si0=l14;
si1=124U;
si0=si0 > si1;
if(si0){
goto L130;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l14=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L139:;
si0=l13;
si0=!(si0);
if(si0){
goto L141;
}
si0=l14;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L141;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
si0=1U;
l7=si0;
si0=l13;
l9=si0;
L143:;
{
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l9;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l12;
si0=si0 < si1;
l9=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l14=si0;
si0=l10;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L142;
}
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l7;
si1=l14;
si0=si0 < si1;
l12=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l12;
if(si0){
goto L143;
}
}
L142:;
si0=1U;
l13=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L129;
}
goto L140;
L141:;
si0=l13;
si0=!(si0);
if(si0){
goto L129;
}
L140:;
si0=l14;
si1=65535U;
si0&=si1;
si1=124U;
si0=si0 > si1;
if(si0){
goto L131;
}
L132:;
si0=l3;
si1=8U;
si0+=si1;
si1=l14;
si2=65535U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+508U,si1);
goto L129;
L131:;
si0=1309376U;
si1=43U;
si2=1309644U;
f673(i,si0,si1,si2);
UNREACHABLE;
L130:;
si0=1309376U;
si1=43U;
si2=1309644U;
f673(i,si0,si1,si2);
UNREACHABLE;
L129:;
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si2=504U;
si0=f15390(i,si0,si1,si2);
si1=l15;
i32_store(&i->m0,(U64)si0+504U,si1);
goto L17;
L28:;
si0=l10;
si0=!(si0);
if(si0){
goto L144;
}
L145:;
{
si0=l11;
sj1=l20;
si2=l11;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l21;
sj1+=sj2;
l21=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
sj0=l21;
sj1=32ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L145;
}
}
L144:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l4=si0;
sj0=l21;
si0=(U32)(sj0);
l11=si0;
si0=!(si0);
if(si0){
goto L146;
}
si0=l4;
si1=124U;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L146:;
si0=l13;
si0=!(si0);
if(si0){
goto L148;
}
si0=l4;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L148;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
si0=1U;
l14=si0;
L150:;
{
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l13;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l12;
si0=si0 < si1;
l13=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l4=si0;
si0=l10;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L149;
}
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l14;
si1=l4;
si0=si0 < si1;
l12=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l12;
if(si0){
goto L150;
}
}
L149:;
si0=l13;
si0=!(si0);
if(si0){
goto L26;
}
si0=1U;
l13=si0;
goto L147;
L148:;
si0=l13;
si0=!(si0);
if(si0){
goto L26;
}
L147:;
si0=l4;
si1=65535U;
si0&=si1;
si1=124U;
si0=si0 > si1;
if(si0){
goto L25;
}
L27:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=65535U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L26:;
si0=l5;
si1=1U;
si0+=si1;
l14=si0;
si0=l5;
si1=-1U;
si0+=si1;
l10=si0;
L152:;
{
si0=l7;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L155;
}
si0=l5;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L154;
}
si0=l11;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 != si1;
if(si0){
goto L154;
}
si0=l7;
l11=si0;
L156:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L151;
}
si0=l10;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L156;
}
}
si0=l12;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L151;
}
si0=l8;
si1=l7;
si2=1U;
si1+=si2;
l11=si1;
si2=l8;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l15=si0;
si0=l7;
l11=si0;
L158:;
{
si0=l6;
si1=l11;
si0=si0 != si1;
if(si0){
goto L159;
}
si0=l15;
l11=si0;
goto L157;
L159:;
si0=l14;
si1=l11;
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l9=si0;
l11=si0;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L158;
}
}
si0=l9;
si1=-1U;
si0+=si1;
l11=si0;
L157:;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L151;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L151;
}
si0=l5;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L151;
}
L160:;
{
si0=l15;
si1=l7;
si0=si0 == si1;
if(si0){
goto L155;
}
si0=l14;
si1=l7;
si0+=si1;
l11=si0;
si0=l7;
si1=1U;
si0+=si1;
l12=si0;
l7=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L160;
}
}
si0=l12;
si1=l8;
si0=si0 < si1;
if(si0){
goto L153;
}
L155:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l15;
si1=1U;
si0+=si1;
l13=si0;
si0=l15;
si1=-1U;
si0+=si1;
l7=si0;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=0U;
l12=si0;
L161:;
{
si0=l12;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l15;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si0=l12;
si1=-1U;
si0+=si1;
si1=l14;
si0=si0 < si1;
if(si0){
goto L164;
}
si0=l12;
l10=si0;
goto L163;
L164:;
si0=l11;
si1=255U;
si0&=si1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L165;
}
si0=l12;
l10=si0;
goto L163;
L165:;
si0=l12;
l11=si0;
L166:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L162;
}
si0=l7;
si1=l11;
si0+=si1;
l10=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L166;
}
}
si0=l10;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L162;
}
si0=l14;
si1=l12;
si2=1U;
si1+=si2;
l11=si1;
si2=l14;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l9=si0;
L168:;
{
si0=l14;
si1=l11;
si0=si0 != si1;
if(si0){
goto L169;
}
si0=l9;
l11=si0;
goto L167;
L169:;
si0=l15;
si1=l11;
si0+=si1;
l10=si0;
si0=l11;
si1=1U;
si0+=si1;
l8=si0;
l11=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 == si1;
if(si0){
goto L168;
}
}
si0=l8;
si1=-2U;
si0+=si1;
l11=si0;
L167:;
si0=l11;
si1=l14;
si0=si0 == si1;
if(si0){
goto L162;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L162;
}
si0=l15;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L162;
}
L170:;
{
si0=l9;
si1=l12;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l13;
si1=l12;
si0+=si1;
l11=si0;
si0=l12;
si1=1U;
si0+=si1;
l10=si0;
l12=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L170;
}
}
L163:;
si0=l10;
si1=1U;
si0+=si1;
l12=si0;
si0=l11;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 == si1;
if(si0){
goto L161;
}
L162:;
}
si0=l3;
si1=8U;
si0+=si1;
si1=10U;
si0=f2403(i,si0,si1);
si0=!(si0);
if(si0){
goto L172;
}
si0=l3;
si1=8U;
si0+=si1;
si1=1U;
si0=f2404(i,si0,si1);
si0=!(si0);
if(si0){
goto L171;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L20;
L172:;
si0=1309376U;
si1=43U;
si2=1309580U;
f673(i,si0,si1,si2);
UNREACHABLE;
L171:;
si0=1309376U;
si1=43U;
si2=1309580U;
f673(i,si0,si1,si2);
UNREACHABLE;
L154:;
si0=l7;
l12=si0;
L153:;
si0=l12;
si1=1U;
si0+=si1;
l7=si0;
si0=l11;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 == si1;
if(si0){
goto L152;
}
}
L151:;
si0=0U;
l14=si0;
si0=l4;
si1=65535U;
si0&=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l11;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l11=si0;
si1=1U;
si0+=si1;
l10=si0;
si1=3U;
si0&=si1;
l12=si0;
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L173;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l20=sj0;
goto L23;
L173:;
si0=l10;
si1=2147483644U;
si0&=si1;
l10=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l20=sj0;
L174:;
{
si0=l11;
si1=l11;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=12U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L174;
}
goto L23;
}
L25:;
si0=1309376U;
si1=43U;
si2=1309548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1309376U;
si1=43U;
si2=1309548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l12;
si0=!(si0);
if(si0){
goto L175;
}
L176:;
{
si0=l11;
si1=l11;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
sj0=l20;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L176;
}
}
L175:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l11=si0;
sj0=l20;
si0=(U32)(sj0);
l12=si0;
si0=!(si0);
if(si0){
goto L177;
}
si0=l11;
si1=124U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l11=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L177:;
si0=l11;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
si0=1U;
l7=si0;
si0=1U;
l15=si0;
L179:;
{
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l15;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l12;
si0=si0 < si1;
l15=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l14=si0;
si0=l10;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L178;
}
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l7;
si1=l14;
si0=si0 < si1;
l12=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l12;
if(si0){
goto L179;
}
}
L178:;
si0=l15;
si0=!(si0);
if(si0){
goto L21;
}
si0=l14;
si1=124U;
si0=si0 > si1;
if(si0){
goto L18;
}
L22:;
si0=l3;
si1=8U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+508U,si1);
L21:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
L20:;
si0=l0;
si1=l3;
si2=8U;
si1+=si2;
si2=504U;
si0=f15390(i,si0,si1,si2);
si1=l2;
i32_store(&i->m0,(U64)si0+504U,si1);
goto L17;
L19:;
si0=1309376U;
si1=43U;
si2=1309564U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1309376U;
si1=43U;
si2=1309564U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l3;
si1=512U;
si0+=si1;
i->g0=si0;
goto L0;
L16:;
si0=l17;
si1=65535U;
si0&=si1;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l11=si0;
si1=1U;
si0+=si1;
l10=si0;
si1=3U;
si0&=si1;
l12=si0;
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L181;
}
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l20=sj0;
goto L180;
L181:;
si0=l10;
si1=2147483644U;
si0&=si1;
l10=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l20=sj0;
L182:;
{
si0=l11;
si1=l11;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=1000000000ULL;
sj1*=sj2;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=1000000000ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=1000000000ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=12U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=1000000000ULL;
sj1*=sj2;
sj2=l20;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L182;
}
}
L180:;
si0=l12;
si0=!(si0);
if(si0){
goto L183;
}
L184:;
{
si0=l11;
si1=l11;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=1000000000ULL;
sj1*=sj2;
sj2=l20;
sj1+=sj2;
l20=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
sj0=l20;
sj1=32ULL;
sj0>>=(sj1&63);
l20=sj0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L184;
}
}
L183:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l4=si0;
sj0=l20;
si0=(U32)(sj0);
l11=si0;
si0=!(si0);
if(si0){
goto L185;
}
si0=l4;
si1=124U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
L185:;
si0=l13;
si0=!(si0);
if(si0){
goto L187;
}
si0=l4;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L187;
}
si0=1U;
l9=si0;
si0=l3;
si1=8U;
si0+=si1;
l11=si0;
si0=l13;
l19=si0;
L189:;
{
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l19;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l12;
si0=si0 < si1;
l19=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+508U);
l4=si0;
si0=l10;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L188;
}
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l9;
si1=l4;
si0=si0 < si1;
l12=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l12;
if(si0){
goto L189;
}
}
L188:;
si0=1U;
l13=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L13;
}
goto L186;
L187:;
si0=l13;
si0=!(si0);
if(si0){
goto L13;
}
L186:;
si0=l4;
l17=si0;
si0=l4;
si1=65535U;
si0&=si1;
si1=124U;
si0=si0 > si1;
if(si0){
goto L14;
}
L15:;
si0=l3;
si1=8U;
si0+=si1;
si1=l17;
si2=65535U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+508U);
si2=1U;
si1+=si2;
l4=si1;
i32_store16(&i->m0,(U64)si0+508U,si1);
goto L13;
L14:;
}
si0=1309376U;
si1=43U;
si2=1309532U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1309376U;
si1=43U;
si2=1309532U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f2403(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l2=si0;
if(si0){
goto L1;
}
si0=1U;
goto L0;
L1:;
si0=l2;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l3=si0;
si1=1U;
si0+=si1;
l4=si0;
si1=3U;
si0&=si1;
l2=si0;
si0=l1;
sj0=(U64)(si0);
l5=sj0;
si0=l3;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L3;
}
sj0=0ULL;
l6=sj0;
si0=l0;
l1=si0;
goto L2;
L3:;
si0=l4;
si1=2147483644U;
si0&=si1;
l3=si0;
sj0=0ULL;
l6=sj0;
si0=l0;
l1=si0;
L4:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l5;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l5;
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
l4=si0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l5;
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
l4=si0;
si1=l4;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l5;
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
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
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
L6:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l5;
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
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L6;
}
}
L5:;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
if(si0){
goto L7;
}
si0=1U;
goto L0;
L7:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l3=si0;
si1=124U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+500U,si1);
L8:;
si0=l1;
L0:;
return si0;
}

U32 f2404(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
l3=si0;
si0=1U;
l4=si0;
si0=l1;
l5=si0;
L5:;
{
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=l5;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
si0=si0 < si1;
l5=si0;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l2=si0;
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 < si1;
l1=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
if(si0){
goto L5;
}
}
L4:;
si0=1U;
l1=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l1;
if(si0){
goto L2;
}
si0=1U;
l1=si0;
goto L1;
L2:;
si0=l1;
l3=si0;
si0=0U;
l1=si0;
si0=l2;
si1=65535U;
si0&=si1;
l6=si0;
si1=124U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+500U,si1);
si0=1U;
goto L0;
L1:;
si0=l1;
L0:;
return si0;
}

void f2405(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=1008U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
si2=504U;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l3;
si1=-1U;
si0+=si1;
l7=si0;
si1=-12U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
sj0=0ULL;
sj1=l2;
si2=1U;
si3=l3;
si2-=si3;
l1=si2;
si3=64U;
si4=l1;
si5=64U;
si4=(U32)((I32)si4<(I32)si5);
si2=si4?si2:si3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
sj1>>=(sj2&63);
si2=l1;
si3=63U;
si2=(U32)((I32)si2>(I32)si3);
sj0=si2?sj0:sj1;
l8=sj0;
sj1=4503599627370495ULL;
si0=sj0 > sj1;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=11U;
si0+=si1;
l1=si0;
si1=2046U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
sj0=0ULL;
l8=sj0;
si0=2047U;
l1=si0;
goto L1;
L3:;
sj0=l2;
sj1=11ULL;
sj0>>=(sj1&63);
sj1=4503599627370495ULL;
sj0&=sj1;
l8=sj0;
L1:;
si0=l6;
sj1=l8;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=9007199254740990ULL;
sj1&=sj2;
l9=sj1;
sj2=l9;
sj3=9007199254740992ULL;
sj2|=sj3;
si3=l1;
sj3=(U64)(si3);
sj4=52ULL;
sj3<<=(sj4&63);
sj4=l8;
sj3|=sj4;
sj4=9218868437227405312ULL;
sj3&=sj4;
l9=sj3;
si3=!(sj3);
l5=si3;
sj1=si3?sj1:sj2;
l8=sj1;
si1=(U32)(sj1);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+504U,si1);
si0=l6;
sj1=l8;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l1=si1;
i32_store(&i->m0,(U64)si0+508U,si1);
si0=l6;
si1=2U;
si2=1U;
si3=l1;
si1=si3?si1:si2;
i32_store16(&i->m0,(U64)si0+1004U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=504U;
si0+=si1;
si1=5U;
si2=0U;
si3=l4;
si2-=si3;
si0=f2426(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L15;
}
L16:;
si0=-1075U;
sj1=l9;
sj2=52ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=-1076U;
si1+=si2;
si2=l5;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l10=si0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L18;
}
si0=l10;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
l11=si0;
si0=0U;
si1=l10;
si0-=si1;
l10=si0;
si1=31U;
si0&=si1;
l1=si0;
if(si0){
goto L17;
}
goto L8;
L18:;
si0=l10;
si1=31U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=32U;
si1=l1;
si0-=si1;
l5=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+1004U);
l4=si0;
if(si0){
goto L19;
}
si0=0U;
l11=si0;
goto L11;
L19:;
si0=l4;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l4=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l12=si0;
si0=l4;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l6;
si1=504U;
si0+=si1;
l4=si0;
si0=0U;
l11=si0;
goto L12;
L20:;
si0=l11;
si1=2147483644U;
si0&=si1;
l13=si0;
si0=l6;
si1=504U;
si0+=si1;
l4=si0;
si0=0U;
l11=si0;
L21:;
{
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=l1;
si1<<=(si2&31);
si2=l11;
si3=l5;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=l1;
si1<<=(si2&31);
si2=l14;
si3=l5;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
l14=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=l1;
si1<<=(si2&31);
si2=l11;
si3=l5;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=l1;
si1<<=(si2&31);
si2=l14;
si3=l5;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l13;
si1=-4U;
si0+=si1;
l13=si0;
if(si0){
goto L21;
}
goto L12;
}
L17:;
si0=32U;
si1=l1;
si0-=si1;
l5=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l4=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l12=si0;
si0=l4;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l6;
l4=si0;
si0=0U;
l11=si0;
goto L14;
L22:;
si0=l11;
si1=2147483644U;
si0&=si1;
l13=si0;
si0=l6;
l4=si0;
si0=0U;
l11=si0;
L23:;
{
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=l1;
si1<<=(si2&31);
si2=l11;
si3=l5;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=l1;
si1<<=(si2&31);
si2=l14;
si3=l5;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
l14=si0;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=l1;
si1<<=(si2&31);
si2=l11;
si3=l5;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=l1;
si1<<=(si2&31);
si2=l14;
si3=l5;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l13;
si1=-4U;
si0+=si1;
l13=si0;
if(si0){
goto L23;
}
goto L14;
}
L15:;
si0=1309376U;
si1=43U;
si2=1309660U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l12;
si0=!(si0);
if(si0){
goto L13;
}
L24:;
{
si0=l4;
si1=l11;
si2=l5;
si1>>=(si2&31);
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l1;
si2<<=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L24;
}
}
L13:;
si0=l11;
si1=l5;
si0>>=(si1&31);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l1=si0;
si1=124U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l6;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+500U,si1);
goto L8;
L12:;
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
L25:;
{
si0=l4;
si1=l11;
si2=l5;
si1>>=(si2&31);
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l11=si2;
si3=l1;
si2<<=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L25;
}
}
L11:;
si0=l11;
si1=l5;
si0>>=(si1&31);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+1004U);
l1=si0;
si1=124U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+1004U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+1004U,si1);
L10:;
si0=l10;
si1=32U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l10;
si1=5U;
si0>>=(si1&31);
l5=si0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+1004U);
l1=si1;
si0+=si1;
l4=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si1=125U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=504U;
si1+=si2;
si2=l1;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l6;
si1=504U;
si0+=si1;
l1=si0;
goto L7;
L26:;
si0=l4;
si1=126U;
si0=si0 < si1;
if(si0){
goto L4;
}
L9:;
si0=1309376U;
si1=43U;
si2=1309692U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l10;
si1=32U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l10;
si1=5U;
si0>>=(si1&31);
l5=si0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
l1=si1;
si0+=si1;
l4=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=125U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l6;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l1;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l6;
l1=si0;
L7:;
si0=l1;
si1=0U;
si2=l5;
si3=2U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
si1=l4;
i32_store16(&i->m0,(U64)si0+500U,si1);
goto L4;
L6:;
si0=l4;
si1=126U;
si0=si0 < si1;
if(si0){
goto L4;
}
L5:;
si0=1309376U;
si1=43U;
si2=1309676U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=255U;
l13=si0;
si0=l6;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l4=si0;
si1=l6;
si1=i32_load16_u(&i->m0,(U64)si1+1004U);
l1=si1;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l6;
si1=504U;
si0+=si1;
si1=-4U;
si0+=si1;
l11=si0;
si0=l6;
si1=-4U;
si0+=si1;
l12=si0;
L29:;
{
si0=l4;
if(si0){
goto L30;
}
si0=0U;
l13=si0;
goto L27;
L30:;
si0=l12;
si1=l4;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l11;
si2=l4;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L29;
}
}
L28:;
si0=1U;
l13=si0;
L27:;
si0=l7;
si1=-11U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L32;
}
sj0=l2;
sj1=11ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=l13;
switch(si0){
case 0:
goto L35;
case 1:
goto L34;
default:
goto L36;
}
L36:;
sj0=0ULL;
l2=sj0;
goto L33;
L35:;
sj0=l8;
sj1=1ULL;
sj0&=sj1;
l2=sj0;
goto L33;
L34:;
sj0=1ULL;
l2=sj0;
L33:;
sj0=0ULL;
sj1=l2;
sj2=l8;
sj1+=sj2;
l8=sj1;
sj2=4503599627370495ULL;
sj1&=sj2;
si2=11U;
si3=12U;
sj4=l8;
sj5=9007199254740992ULL;
si4=sj4 < sj5;
si2=si4?si2:si3;
si3=l3;
si2+=si3;
l4=si2;
si3=2046U;
si2=(U32)((I32)si2>(I32)si3);
l1=si2;
sj0=si2?sj0:sj1;
l8=sj0;
si0=2047U;
si1=l4;
si2=l1;
si0=si2?si0:si1;
l4=si0;
goto L31;
L32:;
sj0=0ULL;
l8=sj0;
sj0=0ULL;
sj1=l2;
si2=1U;
si3=l3;
si2-=si3;
l4=si2;
si3=64U;
si4=l4;
si5=64U;
si4=(U32)((I32)si4<(I32)si5);
si2=si4?si2:si3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
sj1>>=(sj2&63);
si2=l4;
si3=63U;
si2=(U32)((I32)si2>(I32)si3);
sj0=si2?sj0:sj1;
l2=sj0;
si0=l13;
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
default:
goto L37;
}
L39:;
sj0=l2;
sj1=1ULL;
sj0&=sj1;
l8=sj0;
goto L37;
L38:;
sj0=1ULL;
l8=sj0;
L37:;
sj0=l8;
sj1=l2;
sj0+=sj1;
l8=sj0;
sj1=4503599627370495ULL;
si0=sj0 > sj1;
l4=si0;
L31:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1008U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2406(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=l1;
si1=5U;
si2=l2;
si0=f2426(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=31U;
si0&=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=32U;
si1=l3;
si0-=si1;
l4=si0;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l5=si0;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l5;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l5=si0;
si1=1U;
si0+=si1;
l6=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=l5;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=0U;
l6=si0;
si0=l1;
l5=si0;
goto L11;
L12:;
si0=l6;
si1=2147483644U;
si0&=si1;
l8=si0;
si0=0U;
l6=si0;
si0=l1;
l5=si0;
L13:;
{
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l3;
si1<<=(si2&31);
si2=l6;
si3=l4;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l3;
si1<<=(si2&31);
si2=l9;
si3=l4;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l3;
si1<<=(si2&31);
si2=l6;
si3=l4;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l3;
si1<<=(si2&31);
si2=l9;
si3=l4;
si2>>=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
if(si0){
goto L13;
}
}
L11:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
L14:;
{
si0=l5;
si1=l6;
si2=l4;
si1>>=(si2&31);
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l3;
si2<<=(si3&31);
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L14;
}
}
L9:;
si0=l6;
si1=l4;
si0>>=(si1&31);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l3=si0;
si1=124U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+500U,si1);
L8:;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l5=si0;
si0=l2;
si1=32U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l2;
si1=5U;
si0>>=(si1&31);
l4=si0;
si1=l5;
si0+=si1;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
si0=l3;
si1=125U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l1;
si1=l4;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l1;
si2=l5;
si3=2U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l1;
si1=0U;
si2=l4;
si0=f15392(i,si0,si1,si2);
si1=l3;
i32_store16(&i->m0,(U64)si0+500U,si1);
si0=l3;
l5=si0;
goto L15;
L16:;
si0=l3;
si1=126U;
si0=si0 >= si1;
if(si0){
goto L7;
}
L15:;
sj0=0ULL;
l10=sj0;
sj0=0ULL;
l11=sj0;
si0=0U;
l6=si0;
si0=l5;
si1=65535U;
si0&=si1;
l3=si0;
l4=si0;
si0=l3;
switch(si0){
case 0:
goto L2;
case 1:
goto L17;
case 2:
goto L6;
default:
goto L18;
}
L18:;
si0=l5;
si1=65535U;
si0&=si1;
si1=2U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si0+=si1;
l3=si0;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
sj0=(U64)(si0);
si1=l6;
si1=I32_CLZ(si1);
l6=si1;
si2=32U;
si1+=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
l10=sj1;
sj0<<=(sj1&63);
si1=l3;
si2=-12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
si2=32U;
si3=l6;
si2-=si3;
sj2=(U64)(si2);
sj1>>=(sj2&63);
sj0|=sj1;
l11=sj0;
si0=1U;
l6=si0;
sj0=l12;
sj1=l10;
sj0<<=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l1;
si1=-16U;
si0+=si1;
l6=si0;
L20:;
{
si0=l4;
l3=si0;
si1=12U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l3;
si1=-4U;
si0+=si1;
l4=si0;
si0=l6;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
}
L19:;
si0=l3;
si1=12U;
si0=si0 != si1;
l6=si0;
si0=l5;
si1=65535U;
si0&=si1;
if(si0){
goto L4;
}
si0=0U;
l4=si0;
si0=0U;
l3=si0;
goto L3;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
sj0=(U64)(si0);
si1=l3;
si1=I32_CLZ(si1);
si2=32U;
si1+=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l11=sj0;
goto L5;
L7:;
si0=1309376U;
si1=43U;
si2=1309708U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=l11;
sj1=I64_CLZ(sj1);
sj0<<=(sj1&63);
l11=sj0;
L5:;
si0=0U;
l6=si0;
L4:;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si1=5U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=I32_CLZ(si0);
l3=si0;
L3:;
sj0=1ULL;
l12=sj0;
sj0=l11;
sj1=2047ULL;
sj0&=sj1;
l10=sj0;
sj1=1024ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
L2:;
sj0=l10;
sj1=1024ULL;
si0=sj0 == sj1;
si1=l6;
si2=0U;
si1=si1 != si2;
sj2=l11;
sj3=2048ULL;
sj2&=sj3;
sj3=11ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si1|=si2;
si0&=si1;
sj0=(U64)(si0);
l12=sj0;
L1:;
si0=l0;
si1=2047U;
si2=1022U;
si3=1023U;
sj4=l12;
sj5=l11;
sj6=11ULL;
sj5>>=(sj6&63);
sj4+=sj5;
l11=sj4;
sj5=9007199254740992ULL;
si4=sj4 < sj5;
si2=si4?si2:si3;
si3=l4;
si4=l3;
si3-=si4;
si2+=si3;
l5=si2;
si3=l5;
si4=2046U;
si3=si3 > si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=0ULL;
sj2=l11;
sj3=4503599627370495ULL;
sj2&=sj3;
si3=l5;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f2407(rustpythonInstance*i,U32 l0) {
L0:;
}

void f2408(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L1:;
L0:;
}

void f2409(rustpythonInstance*i,U32 l0) {
L0:;
}

void f2410(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si2=1309992U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1310008U;
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
si2=1310024U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f2411(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L5;
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
goto L4;
}
si0=l3;
si1=l1;
si0-=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=l3;
si0-=si1;
l5=si0;
si0=l0;
si1=255U;
si0&=si1;
l6=si0;
si0=1U;
l7=si0;
si0=l1;
l3=si0;
L6:;
{
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
si0=l4;
si1=l2;
si2=-8U;
si1+=si2;
l6=si1;
si0=si0 > si1;
if(si0){
goto L2;
}
goto L3;
L5:;
si0=l2;
if(si0){
goto L7;
}
si0=0U;
goto L0;
L7:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l7=si0;
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l7=si0;
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l7=si0;
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l7=si0;
if(si0){
goto L1;
}
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l7=si0;
if(si0){
goto L1;
}
si0=l2;
si1=5U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l7=si0;
if(si0){
goto L1;
}
si0=l2;
si1=6U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
l7=si0;
goto L1;
L4:;
si0=l2;
si1=-8U;
si0+=si1;
l6=si0;
si0=0U;
l4=si0;
L3:;
si0=l0;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l3=si0;
L8:;
{
si0=l1;
si1=l4;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
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
goto L2;
}
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
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
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
}
L2:;
si0=0U;
l7=si0;
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l4;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0^=si1;
si1=l2;
si0+=si1;
l5=si0;
si0=l0;
si1=255U;
si0&=si1;
l1=si0;
L9:;
{
si0=l5;
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si0=si0 == si1;
l7=si0;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si0=l4;
if(si0){
goto L9;
}
}
L1:;
si0=l7;
L0:;
return si0;
}

U32 f2412(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
l2=si0;
i->g0=si0;
si0=l1;
si1=2U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
si0=l1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=30768U;
si0=si0 == si1;
l3=si0;
goto L2;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=l1;
si3=1310553U;
si4=2U;
f760(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L5;
}
si0=0U;
l1=si0;
si0=l2;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l4;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L8:;
si0=l0;
si1=l3;
si0-=si1;
l6=si0;
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=l3;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l6;
si1=31U;
si0&=si1;
l9=si0;
si0=l6;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l6=si0;
goto L12;
L14:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
goto L12;
L15:;
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
l6=si0;
goto L12;
L13:;
si0=l6;
si1=255U;
si0&=si1;
l6=si0;
L12:;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L10;
}
si0=l6;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=1U;
l1=si0;
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=2U;
l1=si0;
si0=l6;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=3U;
si1=4U;
si2=l6;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L16:;
si0=l1;
si1=l3;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L18;
L19:;
si0=l4;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L18:;
si0=l0;
si1=l3;
si0-=si1;
l0=si0;
L17:;
si0=l0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
goto L10;
L11:;
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
L10:;
si0=1U;
l1=si0;
L6:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l2;
si1=24U;
si0+=si1;
l1=si0;
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l2;
si1=l1;
si2=l4;
si3=l0;
si4=l6;
si5=l3;
si6=0U;
f2410(i,si0,si1,si2,si3,si4,si5,si6);
goto L4;
L20:;
si0=l2;
si1=l1;
si2=l4;
si3=l0;
si4=l6;
si5=l3;
si6=1U;
f2410(i,si0,si1,si2,si3,si4,si5,si6);
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si0=si0 != si1;
l3=si0;
L2:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L1:;
si0=l4;
si1=l0;
si2=l3;
si3=l0;
si4=1310040U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f2413(rustpythonInstance*i,U32 l0,U32 l1) {
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
f2447(i,si0,si1);
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
f2444(i,si0,si1,si2);
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

U32 f2414(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f2444(i,si0,si1,si2);
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

void f2415(rustpythonInstance*i,U32 l0,U32 l1) {
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
f2447(i,si0,si1);
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
f2444(i,si0,si1,si2);
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
L0:;
}

U32 f2416(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f2417(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si1=l1;
si2=24U;
si1+=si2;
l7=si1;
si0+=si1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l6;
si1=5U;
si0=si0 < si1;
l10=si0;
L2:;
{
si0=l9;
si1=l4;
si0+=si1;
l11=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si1=l4;
si0-=si1;
l13=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l11;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l2=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l11;
si0-=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l2=si0;
L9:;
{
si0=l11;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l14;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l14;
si1=l13;
si2=-8U;
si1+=si2;
l15=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L6;
L8:;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=0U;
l2=si0;
L10:;
{
si0=l11;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l13;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L4;
}
L7:;
si0=l13;
si1=-8U;
si0+=si1;
l15=si0;
si0=0U;
l14=si0;
L6:;
si0=l12;
si1=16843009U;
si0*=si1;
l2=si0;
L11:;
{
si0=l11;
si1=l14;
si0+=si1;
l16=si0;
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
goto L5;
}
si0=l16;
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
goto L5;
}
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si1=l15;
si0=si0 <= si1;
if(si0){
goto L11;
}
}
L5:;
si0=l13;
si1=l14;
si0=si0 == si1;
if(si0){
goto L4;
}
L12:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l14;
l2=si0;
goto L3;
L13:;
si0=l13;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L4:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l1;
si1=l2;
si2=l4;
si1+=si2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l4;
si1=l5;
si0=si0 > si1;
l2=si0;
if(si0){
goto L14;
}
si0=l10;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
si1=l9;
si2=l4;
si3=l6;
si2-=si3;
l14=si2;
si1+=si2;
si2=l2;
si0=si2?si0:si1;
si1=l7;
si2=l6;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L14;
}
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
goto L1;
L15:;
si0=l6;
si1=4U;
si2=1310056U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2418(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F64 sd1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f2429(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si1=52U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=44U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=11877U;
i32_store16(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+58U,si1);
si0=l3;
si1=1310080U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=1310076U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1310072U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=32U;
si3+=si4;
f2401(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=l0;
si1=l3;
sd1=f64_load(&i->m0,(U64)si1+24U);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=l2;
si1=!(si1);
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2419(rustpythonInstance*i,U32 l0,U32 l1,F64 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
sd1=INFINITY;
si0=sd0 < sd1;
if(si0){
goto L4;
}
sd0=l2;
sd1=l2;
si0=sd0 != sd1;
if(si0){
goto L3;
}
sd0=l2;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L5;
}
sd0=l2;
sd1=-INFINITY;
si0=sd0 == sd1;
if(si0){
goto L5;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=3U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1310094U;
si2=1310076U;
si3=l3;
si1=si3?si1:si2;
l0=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
si1=l0;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l5;
sd1=l2;
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l5;
si1=l1;
si1=!(si1);
si2=l4;
si1&=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1310097U;
si2=1309912U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=56U;
si0+=si1;
si1=20U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=758U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=20U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=387U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
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
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=1310100U;
i32_store(&i->m0,(U64)si0+32U,si1);
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
sj1=8589934593ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=l5;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l5;
si2=32U;
si1+=si2;
f63(i,si0,si1);
goto L1;
L3:;
si0=l5;
si1=3U;
si2=0U;
f2446(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=1310091U;
si2=1310088U;
si3=l3;
si1=si3?si1:si2;
l3=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2420(rustpythonInstance*i,U32 l0,U32 l1,F64 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=304U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
sd1=INFINITY;
si0=sd0 < sd1;
if(si0){
goto L8;
}
sd0=l2;
sd1=l2;
si0=sd0 != sd1;
if(si0){
goto L7;
}
sd0=l2;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L6;
}
sd0=l2;
sd1=-INFINITY;
si0=sd0 == sd1;
if(si0){
goto L6;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l5;
sd1=l2;
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l5;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=60U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=759U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1310116U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+204U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l5;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l5;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l5;
si1=l5;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si1=1U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+32U);
l1=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
sj1=433791696897ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l6=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=101U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si1=176U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2417(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+176U);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L5;
}
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+77U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
if(si0){
goto L9;
}
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L5;
}
L9:;
si0=l7;
si1=l1;
si0-=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l1;
si0+=si1;
l8=si0;
goto L3;
L7:;
si0=l5;
si1=3U;
si2=0U;
f2446(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=1310091U;
si2=1310088U;
si3=l3;
si1=si3?si1:si2;
l3=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=3U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1310094U;
si2=1310076U;
si3=l3;
si1=si3?si1:si2;
l0=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
si1=l0;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=1310124U;
si1=43U;
si2=1310260U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l8=si0;
si0=l5;
si1=l5;
si2=184U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l8;
si0-=si1;
l7=si0;
si0=l6;
si1=l8;
si0+=si1;
l8=si0;
L3:;
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+80U);
l7=si0;
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
default:
goto L14;
}
L14:;
si0=l5;
si1=l7;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l5;
si1=176U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2417(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+176U);
if(si0){
goto L11;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
if(si0){
goto L15;
}
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
L15:;
si0=l7;
si1=l1;
si0-=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l1;
si0+=si1;
l1=si0;
goto L10;
L13:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l7=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
if(si0){
goto L16;
}
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
L16:;
si0=l7;
si1=l1;
si0-=si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l1;
si0+=si1;
l1=si0;
goto L10;
L12:;
si0=1310124U;
si1=43U;
si2=1310276U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+68U);
l8=si1;
si0-=si1;
l7=si0;
si0=l1;
si1=l8;
si0+=si1;
l1=si0;
L10:;
si0=l5;
si1=176U;
si0+=si1;
si1=l1;
si2=l7;
si3=10U;
f686(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+176U);
if(si0){
goto L17;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l5;
si1=69U;
si2=101U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=!(si1);
si2=l4;
si1&=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l5;
si1=1310097U;
si2=1309912U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l5;
si1=172U;
si0+=si1;
si1=48U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=144U;
si0+=si1;
si1=20U;
si0+=si1;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=144U;
si0+=si1;
si1=12U;
si0+=si1;
si1=758U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=758U;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l5;
si1=l5;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l5;
si1=l5;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=112U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l5;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l5;
si1=300U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=296U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=288U;
si0+=si1;
sj1=12884901920ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=280U;
si0+=si1;
sj1=12884901888ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=268U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=264U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=256U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=248U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
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
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=216U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l5;
si1=3U;
i32_store8(&i->m0,(U64)si0+204U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l5;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l5;
si1=120U;
si0+=si1;
si1=20U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l5;
si1=1310292U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=l5;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l5;
si1=l5;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l0;
si1=l5;
si2=120U;
si1+=si2;
f63(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
goto L1;
L17:;
si0=l5;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+177U);
i32_store8(&i->m0,(U64)si0+144U,si1);
si0=1310324U;
si1=43U;
si2=l5;
si3=144U;
si2+=si3;
si3=1310368U;
si4=1310384U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l5;
si1=304U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2421(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l2;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=5U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=6U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si1=46U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l3;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l4=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=l3;
si0-=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l4;
si0-=si1;
l6=si0;
si0=l3;
l4=si0;
L7:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
if(si0){
goto L7;
}
}
si0=l5;
si1=l2;
si2=-8U;
si1+=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
goto L5;
L6:;
si0=l2;
si1=-8U;
si0+=si1;
l7=si0;
si0=0U;
l5=si0;
L5:;
L8:;
{
si0=l3;
si1=l5;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0^=si1;
si1=l4;
si2=774778414U;
si1^=si2;
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
si2=774778414U;
si1^=si2;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L8;
}
}
L4:;
si0=l2;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l5;
si0-=si1;
l6=si0;
si0=l3;
si1=l5;
si0+=si1;
l4=si0;
L9:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L9;
}
}
L2:;
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
L1:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=-1U;
si0+=si1;
l4=si0;
L12:;
{
si0=l4;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=48U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L12;
}
goto L10;
}
L11:;
si0=l2;
si1=-1U;
si0+=si1;
si1=l2;
si2=l5;
si3=46U;
si2=si2 == si3;
si0=si2?si0:si1;
l6=si0;
L10:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f2422(rustpythonInstance*i,U32 l0,U32 l1,F64 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=352U;
si0-=si1;
l6=si0;
i->g0=si0;
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
sj1=9223372036854775807ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
sd1=INFINITY;
si0=sd0 < sd1;
if(si0){
goto L9;
}
sd0=l2;
sd1=l2;
si0=sd0 != sd1;
if(si0){
goto L8;
}
sd0=l2;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L7;
}
sd0=l2;
sd1=-INFINITY;
si0=sd0 == sd1;
if(si0){
goto L7;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L9:;
si0=l6;
sd1=l2;
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l6;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=60U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=759U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=0U;
si2=l1;
si3=-1U;
si2+=si3;
l7=si2;
si3=l7;
si4=l1;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=1310116U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=l6;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l6;
si1=l6;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l6;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si1=1U;
i32_store16(&i->m0,(U64)si0+76U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+32U);
l7=si1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
sj1=433791696897ULL;
i64_store(&i->m0,(U64)si0+60U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l6;
si1=101U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si1=208U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
f2417(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+208U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L6;
}
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+77U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l9=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
if(si0){
goto L10;
}
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L6;
}
L10:;
si0=l9;
si1=l7;
si0-=si1;
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l7;
si0+=si1;
l10=si0;
goto L4;
L8:;
si0=l6;
si1=8U;
si0+=si1;
si1=3U;
si2=0U;
f2446(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=1310091U;
si2=1310088U;
si3=l3;
si1=si3?si1:si2;
l7=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
si1=l7;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=3U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
sj1=12884901891ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1310094U;
si2=1310076U;
si3=l3;
si1=si3?si1:si2;
l0=si1;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
si1=l0;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=1310124U;
si1=43U;
si2=1310400U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l10=si0;
si0=l6;
si1=l6;
si2=216U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+212U);
si1=l10;
si0-=si1;
l9=si0;
si0=l8;
si1=l10;
si0+=si1;
l10=si0;
L4:;
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+80U);
l9=si0;
switch(si0){
case 0:
goto L13;
case 1:
goto L14;
default:
goto L15;
}
L15:;
si0=l6;
si1=l9;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
l10=si0;
si0=l6;
si1=208U;
si0+=si1;
si1=l6;
si2=40U;
si1+=si2;
f2417(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+208U);
if(si0){
goto L12;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L13;
}
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+77U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l9=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
if(si0){
goto L16;
}
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L13;
}
L16:;
si0=l9;
si1=l7;
si0-=si1;
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l7;
si0+=si1;
l7=si0;
goto L11;
L14:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+77U);
if(si0){
goto L13;
}
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+77U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+72U);
l9=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+76U);
if(si0){
goto L17;
}
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L13;
}
L17:;
si0=l9;
si1=l7;
si0-=si1;
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l7;
si0+=si1;
l7=si0;
goto L11;
L13:;
si0=1310124U;
si1=43U;
si2=1310416U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
si0=l6;
si1=l6;
si2=216U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+212U);
si1=l7;
si0-=si1;
l9=si0;
si0=l10;
si1=l7;
si0+=si1;
l7=si0;
L11:;
si0=l6;
si1=208U;
si0+=si1;
si1=l7;
si2=l9;
si3=10U;
f686(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+208U);
if(si0){
goto L2;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+216U);
l11=sj1;
i64_store(&i->m0,(U64)si0+96U,sj1);
sj0=l11;
sj1=-4ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L19;
}
sj0=l11;
si1=l5;
sj1=(U64)(si1);
sj0+=sj1;
si1=l1;
sj1=(U64)(si1);
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L19;
}
si0=l6;
sj1=l11;
si1=(U32)(sj1);
si2=-1U;
si1^=si2;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l6;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=196U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
l1=si0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=387U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=1310116U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=l6;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si1=l6;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l6;
si1=l6;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l6;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=336U;
si0+=si1;
si1=l6;
si2=176U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si1=152U;
si0+=si1;
si1=l6;
si2=336U;
si1+=si2;
si2=l4;
f2421(i,si0,si1,si2);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+144U);
si1=!(si1);
si2=l4;
si1&=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l6;
si1=1310097U;
si2=1309912U;
si3=l4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=208U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=758U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=1310100U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=760U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=l6;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=l6;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=l6;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l0;
si1=l6;
si2=208U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+156U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+152U);
f15271(i,si0);
goto L18;
L19:;
si0=l6;
si1=69U;
si2=101U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l6;
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
l7=si0;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=176U;
si0+=si1;
si1=20U;
si0+=si1;
l3=si0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
l5=si0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=758U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l6;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=1310116U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=l6;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l6;
si1=l6;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l6;
si1=l6;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l6;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=112U;
si0+=si1;
si1=l6;
si2=176U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si1=128U;
si0+=si1;
si1=l6;
si2=112U;
si1+=si2;
si2=l4;
f2421(i,si0,si1,si2);
si0=l6;
si1=l1;
si2=2U;
si1=si1 < si2;
si2=l4;
si1&=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l6;
si1=1310097U;
si2=1309912U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l6;
si1=204U;
si0+=si1;
si1=48U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=758U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=760U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l6;
si1=l6;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l6;
si2=144U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l6;
si1=l6;
si2=128U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l6;
si1=332U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=328U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=320U;
si0+=si1;
sj1=12884901920ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=312U;
si0+=si1;
sj1=12884901888ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=300U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=296U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=288U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=280U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=268U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=264U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=256U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=248U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+240U,si1);
si0=l6;
si1=3U;
i32_store8(&i->m0,(U64)si0+236U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l6;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+224U,sj1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l6;
si1=2U;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l6;
si1=152U;
si0+=si1;
si1=20U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l6;
si1=1310292U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=l6;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l6;
si1=l6;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l0;
si1=l6;
si2=152U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+132U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+128U);
f15271(i,si0);
L18:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
f15271(i,si0);
goto L1;
L3:;
si0=1U;
si1=3U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l6;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+209U);
i32_store8(&i->m0,(U64)si0+176U,si1);
si0=1310324U;
si1=43U;
si2=l6;
si3=176U;
si2+=si3;
si3=1310368U;
si4=1310432U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l6;
si1=352U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2423(rustpythonInstance*i,U32 l0,F64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sd1=l1;
f64_store(&i->m0,(U64)si0,sd1);
si0=l2;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=1310116U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=759U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si1=88U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+16U);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
sj1=433791696897ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l2;
si1=101U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
f2417(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=l4;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
if(si0){
goto L10;
}
si0=-1U;
l6=si0;
si0=0U;
l4=si0;
goto L9;
L12:;
si0=l3;
si1=l5;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
L11:;
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
L10:;
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si0-=si1;
l6=si0;
goto L9;
L13:;
si0=l3;
si1=l5;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si0-=si1;
l6=si0;
si0=l5;
l4=si0;
L9:;
si0=l2;
si1=80U;
si0+=si1;
si1=l3;
si2=l4;
si1+=si2;
si2=l6;
si3=10U;
f685(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
if(si0){
goto L7;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+84U);
l4=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=20U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=20U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=758U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=140U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=128U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=120U;
si0+=si1;
sj1=12884901888ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1310484U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l2;
si2=40U;
si1+=si2;
f63(i,si0,si1);
goto L5;
L8:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=1309724U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=32U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1);
si2=0U;
si3=0U;
si0=f723(i,si0,sd1,si2,si3);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l9=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
l4=si0;
si0=l9;
si1=3U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
l4=si0;
L16:;
{
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l6;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l9;
si1=4U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l7;
si1=l9;
si0+=si1;
l6=si0;
L17:;
{
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L17;
}
}
L14:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=l2;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+81U);
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=1310324U;
si1=43U;
si2=l2;
si3=40U;
si2+=si3;
si3=1310368U;
si4=1310500U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l2;
sd0=f64_load(&i->m0,(U64)si0);
l1=sd0;
sd0=l1;
sd1=l1;
sd1=f15382(i,sd1);
sd0-=sd1;
sd0=fabs(sd0);
sd1=2.2204460492503131e-16;
si0=sd0 < sd1;
if(si0){
goto L18;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=1309724U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=32U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=80U;
si0+=si1;
sd1=l1;
si2=0U;
si3=0U;
si0=f723(i,si0,sd1,si2,si3);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L18:;
si0=l2;
si1=60U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=52U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=515U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1310116U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l2;
si2=40U;
si1+=si2;
f63(i,si0,si1);
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
f15271(i,si0);
L19:;
si0=l2;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=l3;
si1=l4;
si2=0U;
si3=l5;
si4=1310448U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l3;
si1=l4;
si2=l5;
si3=l4;
si4=1310464U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1309748U;
si1=55U;
si2=l2;
si3=64U;
si2+=si3;
si3=1309804U;
si4=1309896U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1309748U;
si1=55U;
si2=l2;
si3=64U;
si2+=si3;
si3=1309804U;
si4=1309896U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2424(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
F64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f937(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si1=-65536U;
si0+=si1;
si1=-131071U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
sj0=i64_load32_u(&i->m0,(U64)si0+33U);
si1=l3;
sj1=i64_load8_u(&i->m0,(U64)si1+39U);
sj2=48ULL;
sj1<<=(sj2&63);
si2=l3;
sj2=i64_load16_u(&i->m0,(U64)si2+37U);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=8ULL;
sj0<<=(sj1&63);
si1=l3;
sj1=i64_load8_u(&i->m0,(U64)si1+32U);
sj0|=sj1;
l6=sj0;
sj0=I64_CTZ(sj0);
l7=sj0;
si0=(U32)(sj0);
si1=63U;
si0&=si1;
si1=l5;
si0+=si1;
l8=si0;
sj1=l6;
sj2=l7;
sj1>>=(sj2&63);
l6=sj1;
sj1=I64_CLZ(sj1);
si1=(U32)(sj1);
si0-=si1;
si1=63U;
si0+=si1;
l5=si0;
si1=-1074U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si1=-1022U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
sj0=53ULL;
l7=sj0;
si0=l5;
si1=1024U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l5;
si1=51U;
si0+=si1;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l7=sj0;
L3:;
sj0=l6;
sj1=l7;
sj0>>=(sj1&63);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
sj0=l6;
sd0=(F64)(sj0);
l9=sd0;
sd0=-(sd0);
sd1=l9;
si2=l4;
sd0=si2?sd0:sd1;
sd1=1;
si2=l8;
sd1=f15373(i,sd1,si2);
sd0*=sd1;
l9=sd0;
sj0=1ULL;
l6=sj0;
goto L1;
L2:;
si0=l2;
if(si0){
goto L7;
}
si0=1U;
l10=si0;
si0=l2;
si1=1U;
si2=l1;
si3=l2;
si1=f15390(i,si1,si2,si3);
si0+=si1;
l5=si0;
goto L6;
L7:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l10;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l8=si0;
l1=si0;
si0=l2;
si1=3U;
si0&=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
l1=si0;
L11:;
{
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l5=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l8;
si1=l2;
si0+=si1;
l5=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L12;
}
L13:;
{
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
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
si0=l1;
si1=1U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
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
si0=l1;
si1=2U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
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
si0=l1;
si1=3U;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
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
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l2;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L18;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L6;
case 5:
goto L16;
case 6:
goto L15;
default:
goto L6;
}
L19:;
sj0=1ULL;
l6=sj0;
si0=l8;
si1=1310088U;
si2=3U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L17;
}
sd0=INFINITY;
l9=sd0;
si0=l8;
f15271(i,si0);
goto L1;
L18:;
sd0=INFINITY;
l9=sd0;
sj0=1ULL;
l6=sj0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1851878955U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1851878957U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1718511915U;
si0=si0 != si1;
if(si0){
goto L14;
}
sd0=INFINITY;
l9=sd0;
si0=l8;
f15271(i,si0);
goto L1;
L17:;
si0=l8;
si1=1310076U;
si2=3U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L6;
}
sd0=INFINITY;
l9=sd0;
si0=l8;
f15271(i,si0);
goto L1;
L16:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=8751735898823356009ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
sd0=INFINITY;
l9=sd0;
sj0=1ULL;
l6=sj0;
si0=l8;
f15271(i,si0);
goto L1;
L15:;
sj0=1ULL;
l6=sj0;
si0=l8;
si1=1310528U;
si2=9U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L20;
}
sd0=INFINITY;
l9=sd0;
si0=l8;
f15271(i,si0);
goto L1;
L20:;
si0=l8;
si1=1310544U;
si2=9U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L6;
}
sd0=-INFINITY;
l9=sd0;
si0=l8;
f15271(i,si0);
goto L1;
L14:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=1718511917U;
si0=si0 != si1;
if(si0){
goto L6;
}
sd0=-INFINITY;
l9=sd0;
si0=l8;
f15271(i,si0);
goto L1;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=0U;
l11=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=0U;
f2446(i,si0,si1,si2);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l10;
si1=l2;
si0=f2412(i,si0,si1);
l1=si0;
si0=112U;
si1=l10;
si2=l2;
si0=f2411(i,si0,si1,si2);
l12=si0;
si0=46U;
si1=l10;
si2=l2;
si0=f2411(i,si0,si1,si2);
l13=si0;
si0=l1;
if(si0){
goto L23;
}
si0=l2;
if(si0){
goto L24;
}
si0=l3;
si1=16U;
si0+=si1;
si1=1310553U;
si2=2U;
f2443(i,si0,si1,si2);
goto L21;
L24:;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=45U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l3;
si1=16U;
si0+=si1;
si1=1310555U;
si2=3U;
f2443(i,si0,si1,si2);
si0=1U;
l11=si0;
goto L22;
L25:;
si0=l3;
si1=16U;
si0+=si1;
si1=1310553U;
si2=2U;
f2443(i,si0,si1,si2);
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=43U;
si0=si0 == si1;
l11=si0;
goto L22;
L23:;
si0=l2;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l13;
if(si0){
goto L26;
}
si0=0U;
l8=si0;
si0=l10;
l1=si0;
L27:;
{
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L29;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
goto L28;
L29:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l4;
si1=31U;
si0&=si1;
l15=si0;
si0=l4;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l4=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L28;
L30:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l14;
si1=l15;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L28;
L31:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l15;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L28:;
si0=l4;
si1=112U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l4;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L33;
}
goto L21;
L34:;
si0=l3;
si1=16U;
si0+=si1;
si1=1310563U;
si2=2U;
f2443(i,si0,si1,si2);
goto L32;
L33:;
si0=l8;
si1=l11;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
f2415(i,si0,si1);
L32:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L27;
}
goto L21;
}
L26:;
si0=0U;
l8=si0;
si0=l10;
l1=si0;
L35:;
{
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L37;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l14=si0;
si0=l4;
si1=31U;
si0&=si1;
l15=si0;
si0=l4;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l15;
si1=6U;
si0<<=(si1&31);
si1=l14;
si0|=si1;
l4=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L36;
L38:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l14;
si1=l15;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L36;
L39:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l15;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L36;
L37:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
L36:;
si0=l4;
si1=112U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l8;
si1=l11;
si0=si0 < si1;
if(si0){
goto L40;
}
L41:;
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
f2415(i,si0,si1);
L40:;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L21:;
si0=l13;
si1=l12;
si2=1U;
si1^=si2;
si0&=si1;
if(si0){
goto L43;
}
si0=l12;
si1=l13;
si0|=si1;
if(si0){
goto L42;
}
si0=l3;
si1=16U;
si0+=si1;
si1=1310558U;
si2=3U;
f2443(i,si0,si1,si2);
goto L42;
L43:;
si0=l3;
si1=16U;
si0+=si1;
si1=1310561U;
si2=2U;
f2443(i,si0,si1,si2);
L42:;
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=0U;
f938(i,si0,si1,si2,si3);
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+40U);
l9=sd0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si0=!(si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L44:;
si0=l1;
sj0=(U64)(si0);
l6=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l10;
f15271(i,si0);
L1:;
si0=l0;
sd1=l9;
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2425(rustpythonInstance*i,U32 l0,F64 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3,sj4;
F64 sd0,sd1;
si0=i->g0;
si1=224U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sd1=l1;
sj1=i64_reinterpret_f64(sd1);
l3=sj1;
sj2=63ULL;
sj1>>=(sj2&63);
i64_store32(&i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=1310565U;
si2=1309912U;
sj3=l3;
sj4=0ULL;
si3=(U64)((I64)sj3<(I64)sj4);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+8U,si1);
sd0=l1;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L3;
}
sd0=l1;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L2;
}
sd0=l1;
sd1=-INFINITY;
si0=sd0 == sd1;
if(si0){
goto L2;
}
sd0=l1;
sd1=l1;
si0=sd0 != sd1;
if(si0){
goto L4;
}
si0=l2;
si1=68U;
si0+=si1;
si1=761U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=20U;
si0+=si1;
si1=732U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=732U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l3;
sj2=4503599627370495ULL;
sj1&=sj2;
sj2=4503599627370496ULL;
sj1|=sj2;
sj2=l3;
sj3=1ULL;
sj2<<=(sj3&63);
sj3=9007199254740990ULL;
sj2&=sj3;
sj3=l3;
sj4=52ULL;
sj3>>=(sj4&63);
si3=(U32)(sj3);
si4=2047U;
si3&=si4;
l4=si3;
sj1=si3?sj1:sj2;
l3=sj1;
sj2=52ULL;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
sj1=l3;
sj2=4503599627370495ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l2;
si1=758U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l4;
si2=-1023U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+94U,si1);
si0=l2;
si1=l2;
si2=94U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=220U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=216U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=208U;
si0+=si1;
sj1=12884901920ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=200U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=188U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=184U;
si0+=si1;
si1=8U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=176U;
si0+=si1;
sj1=8589934624ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=168U;
si0+=si1;
sj1=55834574848ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=156U;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=144U;
si0+=si1;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=136U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=20U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1310568U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l2;
si2=16U;
si1+=si2;
f63(i,si0,si1);
goto L1;
L4:;
si0=l2;
si1=3U;
si2=0U;
f2446(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1310088U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1310090U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l2;
si1=108U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=1310624U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=758U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l2;
si2=96U;
si1+=si2;
f63(i,si0,si1);
goto L1;
L2:;
si0=l2;
si1=108U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=1310600U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=758U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l2;
si2=96U;
si1+=si2;
f63(i,si0,si1);
L1:;
si0=l2;
si1=224U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2426(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=1008U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=135U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=-4U;
si0+=si1;
l4=si0;
si0=l3;
si1=4U;
si0|=si1;
l5=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+1172248U);
l6=sj0;
si0=l3;
si1=32U;
si0+=si1;
l7=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+1172240U);
l8=sj0;
si0=l3;
si1=24U;
si0+=si1;
l9=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+1172232U);
l10=sj0;
si0=l3;
si1=16U;
si0+=si1;
l11=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+1172224U);
l12=sj0;
si0=l3;
si1=8U;
si0+=si1;
l13=si0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+1172216U);
l14=sj0;
L7:;
{
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l15=si0;
si0=l7;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=10U;
i32_store16(&i->m0,(U64)si0+500U,si1);
si0=10U;
l16=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
sj0=i64_load32_u(&i->m0,(U64)si0+4U);
l17=sj0;
si0=l3;
si1=l3;
sj1=i64_load32_u(&i->m0,(U64)si1);
si2=l0;
sj2=i64_load32_u(&i->m0,(U64)si2);
l18=sj2;
sj1*=sj2;
l19=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l17;
sj2=l18;
sj1*=sj2;
sj2=l19;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+4U,sj1);
si0=l3;
sj1=l18;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2+8U);
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+8U,sj1);
si0=l3;
sj1=l18;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2+12U);
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+12U,sj1);
si0=l3;
sj1=l18;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2+16U);
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l18;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2+20U);
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+20U,sj1);
si0=l3;
sj1=l18;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2+24U);
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l18;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2+28U);
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+28U,sj1);
si0=l3;
sj1=l18;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2+32U);
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=l18;
si2=l3;
sj2=i64_load32_u(&i->m0,(U64)si2+36U);
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l18=sj1;
i64_store32(&i->m0,(U64)si0+36U,sj1);
sj0=l18;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l16=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l20=si0;
si1=124U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+500U,si1);
L10:;
si0=l15;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=1U;
l21=si0;
si0=2U;
l22=si0;
si0=l5;
l23=si0;
L12:;
{
si0=l0;
si1=l21;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si1=504U;
si0+=si1;
si1=8U;
si0+=si1;
l25=si0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=504U;
si0+=si1;
si1=16U;
si0+=si1;
l26=si0;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=504U;
si0+=si1;
si1=32U;
si0+=si1;
l16=si0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=504U;
si0+=si1;
si1=24U;
si0+=si1;
l20=si0;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l14;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l3;
sj0=i64_load32_u(&i->m0,(U64)si0+508U);
l17=sj0;
si0=l3;
sj1=l14;
sj2=4294967295ULL;
sj1&=sj2;
si2=l24;
sj2=(U64)(si2);
l18=sj2;
sj1*=sj2;
l19=sj1;
i64_store32(&i->m0,(U64)si0+504U,sj1);
si0=l3;
sj1=l17;
sj2=l18;
sj1*=sj2;
sj2=l19;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+508U,sj1);
si0=l25;
sj1=l12;
sj2=4294967295ULL;
sj1&=sj2;
sj2=l18;
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load32_u(&i->m0,(U64)si1+516U);
sj2=l18;
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+516U,sj1);
si0=l26;
sj1=l10;
sj2=4294967295ULL;
sj1&=sj2;
sj2=l18;
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
si1=10U;
i32_store16(&i->m0,(U64)si0+1004U,si1);
si0=l3;
si1=l3;
sj1=i64_load32_u(&i->m0,(U64)si1+524U);
sj2=l18;
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+524U,sj1);
si0=l20;
si1=l20;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l18;
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load32_u(&i->m0,(U64)si1+532U);
sj2=l18;
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0+532U,sj1);
si0=l16;
si1=l16;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l18;
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l17=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load32_u(&i->m0,(U64)si1+540U);
sj2=l18;
sj1*=sj2;
sj2=l17;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l18=sj1;
i64_store32(&i->m0,(U64)si0+540U,sj1);
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+1004U);
l16=si0;
sj0=l18;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l20=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l16;
si1=124U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=504U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+1004U);
si2=1U;
si1+=si2;
l16=si1;
i32_store16(&i->m0,(U64)si0+1004U,si1);
L14:;
si0=0U;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
l20=si1;
si2=l21;
si1-=si2;
l24=si1;
si2=l24;
si3=l20;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l16;
si2=65535U;
si1&=si2;
l27=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l16;
si1=65535U;
si0&=si1;
if(si0){
goto L15;
}
goto L13;
L16:;
si0=l21;
si1=l27;
si0+=si1;
l16=si0;
si1=125U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l16;
si1=l20;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l3;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l16;
si3=l20;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L17:;
si0=l3;
si1=l16;
i32_store16(&i->m0,(U64)si0+500U,si1);
L15:;
si0=0U;
l25=si0;
si0=l3;
si1=504U;
si0+=si1;
l20=si0;
si0=l27;
l26=si0;
si0=l23;
l16=si0;
L18:;
{
si0=l16;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l28=si1;
si2=l20;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l24=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=l28;
si0=si0 < si1;
l28=si0;
si0=l25;
si1=1U;
si0&=si1;
if(si0){
goto L20;
}
si0=l28;
l25=si0;
goto L19;
L20:;
si0=l16;
si1=l24;
si2=1U;
si1+=si2;
l24=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=l24;
si1=!(si1);
si0|=si1;
l25=si0;
L19:;
si0=l16;
si1=4U;
si0+=si1;
l16=si0;
si0=l20;
si1=4U;
si0+=si1;
l20=si0;
si0=l26;
si1=-1U;
si0+=si1;
l26=si0;
if(si0){
goto L18;
}
}
si0=l25;
si0=!(si0);
if(si0){
goto L13;
}
si0=l21;
si1=l27;
si0+=si1;
l16=si0;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
l26=si1;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l22;
si1=l27;
si0+=si1;
l25=si0;
si0=l3;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=1U;
l28=si0;
L23:;
{
si0=l16;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l20=si1;
si2=l28;
si1+=si2;
l24=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=l20;
si0=si0 < si1;
l28=si0;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l26=si0;
si0=l24;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l16;
si1=4U;
si0+=si1;
l16=si0;
si0=l25;
si1=l26;
si0=si0 < si1;
l20=si0;
si0=l25;
si1=1U;
si0+=si1;
l25=si0;
si0=l20;
if(si0){
goto L23;
}
}
L22:;
si0=l28;
si0=!(si0);
if(si0){
goto L13;
}
L21:;
si0=l26;
si1=124U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=l26;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+500U,si1);
L13:;
si0=l22;
si1=1U;
si0+=si1;
l22=si0;
si0=l23;
si1=4U;
si0+=si1;
l23=si0;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
si1=l15;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l3;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l16=si0;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l4;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
L24:;
{
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l3;
si1=l16;
si2=-1U;
si1+=si2;
l16=si1;
i32_store16(&i->m0,(U64)si0+500U,si1);
si0=l20;
si1=-4U;
si0+=si1;
l20=si0;
si0=l16;
si1=65535U;
si0&=si1;
if(si0){
goto L24;
}
}
L8:;
si0=l0;
si1=l3;
si2=504U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=-135U;
si0+=si1;
l2=si0;
si1=134U;
si0=si0 > si1;
if(si0){
goto L7;
}
}
L6:;
si0=1U;
l24=si0;
si0=l1;
l16=si0;
si0=13U;
si1=9U;
si2=1U;
si3=l1;
si4=10U;
si3=si3 == si4;
si1=si3?si1:si2;
si2=l1;
si3=5U;
si2=si2 == si3;
si0=si2?si0:si1;
l26=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l26;
l20=si0;
si0=l1;
l16=si0;
si0=1U;
l24=si0;
L26:;
{
si0=l16;
si1=1U;
si2=l20;
si3=1U;
si2&=si3;
si0=si2?si0:si1;
si1=l24;
si0*=si1;
l24=si0;
si0=l20;
si1=3U;
si0=si0 > si1;
l25=si0;
si0=l16;
si1=l16;
si0*=si1;
l16=si0;
si0=l20;
si1=1U;
si0>>=(si1&31);
l20=si0;
si0=l25;
if(si0){
goto L26;
}
}
L25:;
si0=l2;
si1=l26;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l20=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l16;
si1=l24;
si0*=si1;
sj0=(U64)(si0);
l18=sj0;
goto L3;
L5:;
si0=0U;
l16=si0;
goto L1;
L4:;
L27:;
{
si0=l2;
si1=l26;
si0-=si1;
l2=si0;
si1=l26;
si0=si0 >= si1;
if(si0){
goto L27;
}
goto L2;
}
L3:;
L28:;
{
si0=l20;
si1=65535U;
si0&=si1;
l16=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l16;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l24=si0;
si1=1U;
si0+=si1;
l25=si0;
si1=3U;
si0&=si1;
l20=si0;
sj0=0ULL;
l10=sj0;
si0=l0;
l16=si0;
si0=l24;
si1=3U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l25;
si1=2147483644U;
si0&=si1;
l24=si0;
sj0=0ULL;
l10=sj0;
si0=l0;
l16=si0;
L31:;
{
si0=l16;
si1=l16;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l18;
sj1*=sj2;
sj2=l10;
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l16;
si1=4U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l18;
sj1*=sj2;
sj2=l10;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l18;
sj1*=sj2;
sj2=l10;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l16;
si1=12U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l18;
sj1*=sj2;
sj2=l10;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=32ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l24;
si1=-4U;
si0+=si1;
l24=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l20;
si0=!(si0);
if(si0){
goto L32;
}
L33:;
{
si0=l16;
si1=l16;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l18;
sj1*=sj2;
sj2=l10;
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l16;
si1=4U;
si0+=si1;
l16=si0;
sj0=l10;
sj1=32ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=l20;
si1=-1U;
si0+=si1;
l20=si0;
if(si0){
goto L33;
}
}
L32:;
sj0=l10;
si0=(U32)(sj0);
l16=si0;
si0=!(si0);
if(si0){
goto L29;
}
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l20=si0;
si1=124U;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=0U;
l16=si0;
goto L1;
L34:;
si0=l0;
si1=l20;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+500U,si1);
L29:;
si0=l2;
si1=l26;
si0-=si1;
l2=si0;
si1=l26;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l20=si0;
goto L28;
}
L2:;
si0=1U;
l16=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=1310640U;
l24=si0;
si0=l1;
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L35;
case 1:
goto L37;
case 2:
goto L37;
case 3:
goto L37;
case 4:
goto L37;
case 5:
goto L36;
default:
goto L37;
}
L37:;
si0=1311024U;
si1=40U;
si2=1311184U;
f673(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1310864U;
l24=si0;
L35:;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l20=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l20;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l16=si0;
si1=1U;
si0+=si1;
l25=si0;
si1=3U;
si0&=si1;
l20=si0;
si0=l24;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l18=sj0;
si0=l16;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L39;
}
sj0=0ULL;
l10=sj0;
si0=l0;
l16=si0;
goto L38;
L39:;
si0=l25;
si1=2147483644U;
si0&=si1;
l24=si0;
sj0=0ULL;
l10=sj0;
si0=l0;
l16=si0;
L40:;
{
si0=l16;
sj1=l18;
si2=l16;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l10;
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l16;
si1=4U;
si0+=si1;
l25=si0;
sj1=l18;
si2=l25;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l10;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l25=si0;
sj1=l18;
si2=l25;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l10;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l16;
si1=12U;
si0+=si1;
l25=si0;
sj1=l18;
si2=l25;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l10;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=32ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l24;
si1=-4U;
si0+=si1;
l24=si0;
if(si0){
goto L40;
}
}
L38:;
si0=l20;
si0=!(si0);
if(si0){
goto L41;
}
L42:;
{
si0=l16;
sj1=l18;
si2=l16;
sj2=i64_load32_u(&i->m0,(U64)si2);
sj1*=sj2;
sj2=l10;
sj1+=sj2;
l10=sj1;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l16;
si1=4U;
si0+=si1;
l16=si0;
sj0=l10;
sj1=32ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=l20;
si1=-1U;
si0+=si1;
l20=si0;
if(si0){
goto L42;
}
}
L41:;
sj0=l10;
si0=(U32)(sj0);
l20=si0;
if(si0){
goto L43;
}
si0=1U;
l16=si0;
goto L1;
L43:;
si0=0U;
l16=si0;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0+500U);
l24=si0;
si1=124U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l24;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l16=si0;
si0=l0;
si1=l0;
si1=i32_load16_u(&i->m0,(U64)si1+500U);
si2=1U;
si1+=si2;
i32_store16(&i->m0,(U64)si0+500U,si1);
L1:;
si0=l3;
si1=1008U;
si0+=si1;
i->g0=si0;
si0=l16;
L0:;
return si0;
}

U32 f2427(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1311200U;
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

void f2428(rustpythonInstance*i,U32 l0) {
L0:;
}

void f2429(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=l1;
si1=l2;
si0+=si1;
l3=si0;
si0=0U;
l4=si0;
si0=l2;
if(si0){
goto L4;
}
si0=1U;
l5=si0;
si0=l1;
l2=si0;
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l1;
l2=si0;
L5:;
{
si0=l4;
l7=si0;
si0=l2;
l4=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=1U;
si0+=si1;
l2=si0;
si0=l8;
si1=255U;
si0&=si1;
l8=si0;
goto L6;
L7:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l8;
si1=31U;
si0&=si1;
l9=si0;
si0=l8;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l8=si0;
si0=l4;
si1=2U;
si0+=si1;
l2=si0;
goto L6;
L8:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l8;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l10;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
si0=l4;
si1=3U;
si0+=si1;
l2=si0;
goto L6;
L9:;
si0=l4;
si1=4U;
si0+=si1;
l2=si0;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l4;
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
l8=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l6=si0;
si0=1U;
l5=si0;
si0=l7;
l4=si0;
goto L3;
L6:;
si0=l2;
si1=l4;
si0-=si1;
si1=l7;
si0+=si1;
l4=si0;
si0=l8;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
si0=l8;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l4;
l6=si0;
goto L3;
L11:;
si0=l4;
l6=si0;
si0=l8;
si1=8U;
si0>>=(si1&31);
l9=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L3;
case 5:
goto L3;
case 6:
goto L3;
case 7:
goto L3;
case 8:
goto L3;
case 9:
goto L3;
case 10:
goto L13;
case 11:
goto L3;
case 12:
goto L3;
case 13:
goto L3;
case 14:
goto L3;
case 15:
goto L3;
case 16:
goto L3;
case 17:
goto L3;
case 18:
goto L3;
case 19:
goto L3;
case 20:
goto L3;
case 21:
goto L3;
case 22:
goto L3;
case 23:
goto L3;
case 24:
goto L3;
case 25:
goto L3;
case 26:
goto L14;
default:
goto L16;
}
L16:;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
l6=si0;
goto L3;
L15:;
si0=l8;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L14:;
si0=l8;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L13:;
si0=l8;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L12:;
si0=l8;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L3;
L10:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=0U;
l6=si0;
goto L2;
L3:;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L17;
}
L18:;
{
si0=l3;
l9=si0;
si1=-1U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L19;
}
si0=l9;
si1=-2U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l8;
si1=31U;
si0&=si1;
l8=si0;
goto L20;
L21:;
si0=l9;
si1=-3U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l12=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L23;
}
si0=l8;
si1=15U;
si0&=si1;
l8=si0;
goto L22;
L23:;
si0=l9;
si1=-4U;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l12;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L22:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L20:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L17;
}
L19:;
si0=l8;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l8;
si1=128U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l8;
si1=8U;
si0>>=(si1&31);
l10=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L29;
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
goto L27;
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
goto L28;
default:
goto L26;
}
L29:;
si0=l8;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L24;
L28:;
si0=l8;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L25;
}
goto L24;
L27:;
si0=l8;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L25;
}
goto L24;
L26:;
si0=l10;
if(si0){
goto L24;
}
si0=l8;
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
L25:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L18;
}
goto L17;
L24:;
}
si0=l4;
si1=l2;
si0-=si1;
si1=l9;
si0+=si1;
l6=si0;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=0U;
l7=si0;
L1:;
si0=l0;
si1=l6;
si2=l7;
si1-=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}


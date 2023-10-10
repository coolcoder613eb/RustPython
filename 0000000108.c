#include "w2c2_base.h"

#include "rustpython.h"

U32 f10830(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l1;
si0=f12015(i,si0);
L0:;
return si0;
}

void f10831(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10832(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10832(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f5584(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l3;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l7;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
l9=si0;
goto L10;
L11:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l10=si0;
si0=l3;
si1=31U;
si0&=si1;
l9=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l9=si0;
si0=l7;
si1=2U;
si0+=si1;
l7=si0;
goto L10;
L12:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l10;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
si0=l7;
si1=3U;
si0+=si1;
l7=si0;
goto L10;
L13:;
si0=l10;
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
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
L10:;
si0=0U;
l3=si0;
si0=3054U;
l11=si0;
si0=3054U;
l10=si0;
L17:;
{
si0=l11;
si1=1U;
si0>>=(si1&31);
si1=l3;
si0+=si1;
l12=si0;
si1=12U;
si0*=si1;
l11=si0;
si1=2035376U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l11;
si2=2035380U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=-1U;
si1=l13;
si2=l9;
si1=si1 > si2;
si2=l14;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l12;
l10=si0;
goto L19;
L20:;
si0=l13;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l12;
si1=1U;
si0+=si1;
l3=si0;
L19:;
si0=l10;
si1=l3;
si0-=si1;
l11=si0;
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L17;
}
goto L16;
L18:;
}
si0=l11;
si1=2035384U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=22U;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
si0=2035300U;
si1=l9;
si0=f15118(i,si0,si1);
si1=255U;
si0&=si1;
l3=si0;
si1=22U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=1U;
si1=l3;
si0<<=(si1&31);
si1=6291460U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
L15:;
si0=l7;
si1=l8;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L7;
L14:;
}
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
L21:;
{
si0=l7;
l3=si0;
si1=1U;
si0+=si1;
l7=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l3=si0;
si0=3054U;
l11=si0;
si0=3054U;
l10=si0;
L24:;
{
si0=l11;
si1=1U;
si0>>=(si1&31);
si1=l3;
si0+=si1;
l12=si0;
si1=12U;
si0*=si1;
l11=si0;
si1=2035376U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l11;
si2=2035380U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=-1U;
si1=l13;
si2=l9;
si1=si1 > si2;
si2=l14;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l13=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l12;
l10=si0;
goto L26;
L27:;
si0=l13;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l12;
si1=1U;
si0+=si1;
l3=si0;
L26:;
si0=l10;
si1=l3;
si0-=si1;
l11=si0;
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L24;
}
goto L23;
L25:;
}
si0=l11;
si1=2035384U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=22U;
si0=si0 == si1;
if(si0){
goto L22;
}
L23:;
si0=2035300U;
si1=l9;
si0=f15118(i,si0,si1);
si1=255U;
si0&=si1;
l3=si0;
si1=22U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=1U;
si1=l3;
si0<<=(si1&31);
si1=6291460U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
L22:;
si0=l7;
si1=l8;
si0=si0 != si1;
if(si0){
goto L21;
}
}
L7:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si0+=si1;
l3=si0;
goto L4;
L6:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1268U;
si0+=si1;
l3=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
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
goto L1;
}
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
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

void f10833(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10834(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10834(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
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
f5584(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
l3=si0;
goto L3;
L4:;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L6;
}
si0=l7;
if(si0){
goto L8;
}
si0=1U;
l8=si0;
si0=1U;
si1=l3;
si2=l7;
si0=f15390(i,si0,si1,si2);
goto L7;
L8:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l3;
si2=l7;
si0=f15390(i,si0,si1,si2);
l9=si0;
l3=si0;
si0=l7;
si1=3U;
si0&=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
l3=si0;
L10:;
{
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l11=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l11;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l7;
si1=4U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l9;
si1=l7;
si0+=si1;
l11=si0;
L11:;
{
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si2=-65U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l10;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L7:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L5;
L6:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l7;
f64(i,si0,si1,si2);
L5:;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
f7690(i,si0);
L3:;
si0=l0;
si1=l3;
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
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10835(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
f10836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10836(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=92U;
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
sj1=5416430769165163171ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6413089843220384395ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
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
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
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
si0=l6;
si0=f7766(i,si0);
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
goto L8;
}
si0=l6;
f7690(i,si0);
L8:;
si0=l7;
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
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
L9:;
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
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10837(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6257(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=56U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L3:;
si0=0U;
l8=si0;
si0=l3;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l8;
si1=16U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l6;
si1=l9;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+56U);
l10=si2;
si3=l10;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l8;
if(si0){
goto L5;
}
L6:;
si0=l6;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L5:;
si0=l6;
si1=56U;
si0+=si1;
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l9;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l8;
f1433(i,si0);
L7:;
si0=0U;
si1=l6;
si2=l3;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1-=si2;
l8=si1;
si2=l8;
si3=l6;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
L4:;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L8;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L8:;
si0=l8;
si1=l2;
si0=f12593(i,si0,si1);
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
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

void f10838(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5930(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f10839(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
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
goto L3;
}
si0=l3;
f7690(i,si0);
L3:;
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
f7690(i,si0);
L4:;
si0=l6;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10839(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
si3=1862740U;
si4=4U;
f11109(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l2=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
if(si0){
goto L4;
}
si0=l1;
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
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L5;
}
L6:;
si0=l1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L5:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l2;
f8218(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
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
goto L3;
}
goto L2;
L4:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+40U);
l8=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L8;
}
si0=l5;
si1=16U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l6;
si2=l1;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L7;
}
L8:;
si0=l1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L7:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l6;
si2=l5;
si3=l3;
si4=l4;
si5=32U;
si4+=si5;
f8217(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l4;
si2=24U;
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
l3=si1;
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
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
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
si0=f8137(i,si0,si1,si2);
l2=si0;
goto L9;
L10:;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
L9:;
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
L3:;
si0=l1;
f1433(i,si0);
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
f15042(i);
UNREACHABLE;
L0:;
}

void f10840(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10841(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10841(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f5584(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l7;
si0+=si1;
l8=si0;
L7:;
{
si0=l3;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L8;
L9:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l7;
si1=31U;
si0&=si1;
l10=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l7=si0;
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
goto L8;
L10:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l9;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l3;
si1=3U;
si0+=si1;
l3=si0;
goto L8;
L11:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l3;
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
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
L8:;
si0=l7;
si1=-58U;
si0+=si1;
si1=-11U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l7;
si1=65535U;
si0&=si1;
l9=si0;
si1=-8304U;
si0+=si1;
l7=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=1U;
si1=l7;
si0<<=(si1&31);
si1=1009U;
si0&=si1;
if(si0){
goto L12;
}
L13:;
si0=l9;
si1=-178U;
si0+=si1;
l7=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=1U;
si1=l7;
si0<<=(si1&31);
si1=131U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
L12:;
si0=l3;
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si0+=si1;
l3=si0;
goto L4;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1268U;
si0+=si1;
l3=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L1;
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
goto L2;
}
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
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

U32 f10842(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l1;
si0=f12012(i,si0);
L0:;
return si0;
}

void f10843(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10844(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10844(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=192U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l2;
f6086(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=96U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l4;
si1=l5;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f2371(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+172U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=0U;
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+191U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si2=96U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=191U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
si2=l4;
si3=168U;
si2+=si3;
si3=l4;
si4=8U;
si3+=si4;
f13645(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l8=si0;
si1=4U;
si0+=si1;
l3=si0;
L6:;
{
si0=l3;
l9=si0;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l8;
si1=l6;
si2=28U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L8:;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
L7:;
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L9:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l3;
si1=28U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+172U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
f15271(i,si0);
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
si0=!(si0);
l8=si0;
goto L3;
L4:;
si0=l4;
si1=l4;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
si2=l2;
si1=f10056(i,si1,si2);
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=1U;
l8=si0;
L3:;
si0=l4;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
l3=si0;
L12:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
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
si0=l9;
f7690(i,si0);
L13:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l4;
si1=148U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+144U);
f15271(i,si0);
L14:;
si0=l4;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15271(i,si0);
L15:;
si0=l4;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L17:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L18:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l9;
f7690(i,si0);
L19:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l4;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+128U);
f15271(i,si0);
L20:;
si0=l8;
if(si0){
goto L22;
}
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=0U;
l9=si0;
goto L21;
L22:;
si0=1U;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
L21:;
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
goto L1;
}
si0=l5;
f7690(i,si0);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=1U;
l9=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10845(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6045(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L5;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l3;
si1=l7;
si2=l3;
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
goto L4;
}
L5:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L4:;
si0=l3;
si1=56U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l6;
f1433(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si2=1268U;
si3=l8;
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
f7690(i,si0);
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10846(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l2;
f5684(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
if(si0){
goto L4;
}
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l4;
si1=72U;
si0+=si1;
si1=l5;
si2=l3;
si3=l2;
f7306(i,si0,si1,si2,si3);
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=0U;
l5=si0;
si0=0U;
l3=si0;
si0=l2;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
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
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=116U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
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
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=88U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8146(i,si0,si1,si2);
l3=si0;
L5:;
si0=l4;
si1=72U;
si0+=si1;
si1=l2;
si2=l3;
si0=f8060(i,si0,si1,si2);
l3=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
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

void f10847(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6077(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
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
si1=l3;
si2=l2;
si0=f10848(i,si0,si1,si2);
l6=si0;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
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
f7690(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10848(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
if(si0){
goto L2;
}
si0=0U;
l5=si0;
si0=0U;
l4=si0;
L12:;
{
si0=l4;
si1=255U;
si0&=si1;
l6=si0;
si0=l0;
si1=1U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+21U);
l4=si2;
si3=l4;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l6;
if(si0){
goto L11;
}
si0=l5;
si1=255U;
si0&=si1;
l6=si0;
si0=l4;
si1=0U;
si0=si0 != si1;
l7=si0;
l5=si0;
si0=l6;
si0=!(si0);
si1=l7;
si0^=si1;
if(si0){
goto L12;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=1866833U;
l4=si0;
si0=9U;
l6=si0;
goto L9;
L11:;
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
l4=si1;
si2=1U;
si3=l4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L13:;
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L15;
}
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si1=116U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l4=si0;
if(si0){
goto L14;
}
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1673219U;
si1=16U;
si2=l3;
si3=24U;
si2+=si3;
si3=1673236U;
si4=1687904U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+12U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l4;
if(si0){
goto L16;
}
si0=l0;
si1=12U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L16:;
si0=l0;
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
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=1860952U;
si3=0U;
si4=l3;
si5=24U;
si4+=si5;
f7629(i,si0,si1,si2,si3,si4);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L7;
}
si0=l2;
si1=-1U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+116U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+120U);
l4=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l6;
f7239(i,si0);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l4;
f15271(i,si0);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+112U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
l4=si1;
si2=1U;
si3=l4;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=12U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L18;
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
goto L18;
}
si0=l4;
f7690(i,si0);
L18:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
l4=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+12U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l6;
if(si0){
goto L19;
}
si0=l0;
si1=12U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L19:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L8;
default:
goto L4;
}
L10:;
si0=1866818U;
si1=1866020U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l6;
si2=si2 == si3;
l6=si2;
si0=si2?si0:si1;
l4=si0;
si0=15U;
si1=9U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
L9:;
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1866860U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f63(i,si0,si1);
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
si0=l6;
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
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l7=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+20U,si1);
L8:;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=328U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l0=si1;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l0;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l0;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L21:;
{
si0=l4;
if(si0){
goto L22;
}
si0=l7;
l4=si0;
goto L2;
L22:;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l6;
si1=l5;
si0=si0 != si1;
if(si0){
goto L21;
}
}
L20:;
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
goto L2;
}
goto L3;
L7:;
si0=1673219U;
si1=16U;
si2=l3;
si3=24U;
si2+=si3;
si3=1673236U;
si4=1687976U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1687920U;
si1=40U;
si2=1687960U;
f703(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l0=si1;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=1866833U;
l4=si0;
si0=9U;
l0=si0;
goto L23;
L24:;
si0=1866818U;
si1=1866020U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l0;
si2=si2 == si3;
l0=si2;
si0=si2?si0:si1;
l4=si0;
si0=15U;
si1=9U;
si2=l0;
si0=si2?si0:si1;
l0=si0;
L23:;
si0=l3;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=1215U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1867032U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=476U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0=l2;
si1=l4;
si2=l3;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
L4:;
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
goto L2;
}
L3:;
si0=l7;
f7690(i,si0);
L2:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
return si0;
}

void f10849(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10850(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10850(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=40U;
si0+=si1;
si1=l3;
si2=l2;
f5911(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=1U;
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
l6=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
l7=si0;
goto L3;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0+=si1;
l10=si0;
si0=l4;
si1=60U;
si0+=si1;
l11=si0;
si0=0U;
l12=si0;
si0=l8;
l13=si0;
si0=1114113U;
l14=si0;
si0=0U;
l7=si0;
L5:;
{
si0=l14;
si1=1114113U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l12;
l15=si0;
si0=l13;
l16=si0;
si0=l14;
l3=si0;
si0=l17;
l12=si0;
goto L16;
L17:;
si0=l13;
si1=l10;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l13;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L19;
}
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l18=si0;
si0=l3;
si1=31U;
si0&=si1;
l16=si0;
si0=l3;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l16;
si1=6U;
si0<<=(si1&31);
si1=l18;
si0|=si1;
l3=si0;
si0=l13;
si1=2U;
si0+=si1;
l16=si0;
goto L18;
L20:;
si0=l18;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l18=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l18;
si1=l16;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
si0=l13;
si1=3U;
si0+=si1;
l16=si0;
goto L18;
L21:;
si0=l18;
si1=6U;
si0<<=(si1&31);
si1=l13;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l16;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l13;
si1=4U;
si0+=si1;
l16=si0;
goto L18;
L19:;
si0=l13;
si1=1U;
si0+=si1;
l16=si0;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
L18:;
si0=l12;
si1=l13;
si0-=si1;
si1=l16;
si0+=si1;
l15=si0;
L16:;
si0=1U;
l19=si0;
si0=1114113U;
l14=si0;
si0=l3;
si1=132U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L23;
}
si0=l3;
si1=30U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=1U;
si1=l3;
si0<<=(si1&31);
si1=1879054336U;
si0&=si1;
if(si0){
goto L13;
}
si0=l3;
si1=10U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l12;
l18=si0;
si0=l15;
l12=si0;
si0=l16;
l13=si0;
goto L10;
L24:;
si0=l3;
si1=13U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l16;
l20=si0;
si0=l15;
l17=si0;
si0=l12;
l18=si0;
goto L14;
L23:;
si0=l3;
si1=-8232U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=133U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L15;
}
L22:;
L25:;
{
si0=l15;
l18=si0;
si0=l16;
si1=l10;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l16;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l16;
si1=1U;
si0+=si1;
l20=si0;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
goto L26;
L27:;
si0=l16;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l13=si0;
si0=l3;
si1=31U;
si0&=si1;
l20=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l20;
si1=6U;
si0<<=(si1&31);
si1=l13;
si0|=si1;
l3=si0;
si0=l16;
si1=2U;
si0+=si1;
l20=si0;
goto L26;
L28:;
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l16;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l13=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l13;
si1=l20;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
si0=l16;
si1=3U;
si0+=si1;
l20=si0;
goto L26;
L29:;
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l16;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l20;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l16;
si1=4U;
si0+=si1;
l20=si0;
L26:;
si0=l18;
si1=l16;
si0-=si1;
si1=l20;
si0+=si1;
l15=si0;
si0=l3;
si1=132U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L30;
}
si0=l20;
l16=si0;
si0=l3;
si1=30U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=1U;
si1=l3;
si0<<=(si1&31);
si1=1879054336U;
si0&=si1;
if(si0){
goto L12;
}
si0=l3;
si1=10U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l20;
l16=si0;
si0=l3;
si1=13U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l15;
l17=si0;
goto L14;
L30:;
si0=l3;
si1=-8232U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=133U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l20;
l16=si0;
si0=l3;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L15:;
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l7;
si0=!(si0);
if(si0){
goto L37;
}
si0=l9;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l8;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L36;
}
si0=l9;
si1=l7;
si0-=si1;
l9=si0;
L37:;
si0=l9;
if(si0){
goto L35;
}
si0=1U;
l3=si0;
goto L34;
L36:;
si0=l8;
si1=l9;
si2=l7;
si3=l9;
si4=1874252U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L35:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L32;
}
L34:;
si0=l3;
si1=l8;
si2=l7;
si1+=si2;
si2=l9;
si0=f15390(i,si0,si1,si2);
l18=si0;
si0=0U;
l20=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l9;
si1=4U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l18;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l3=si0;
si1=l18;
si0-=si1;
l7=si0;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L39;
}
L40:;
si0=l18;
si1=-1U;
si0+=si1;
l16=si0;
si0=l9;
l3=si0;
L41:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L38;
}
si0=l16;
si1=l3;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L41;
}
}
si0=1U;
l20=si0;
goto L38;
L39:;
si0=1U;
l20=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L38;
}
si0=4U;
si1=l7;
si2=l3;
si3=l18;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
si1=l9;
si2=-4U;
si1+=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L42;
}
L43:;
{
si0=l18;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L38;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L43;
}
}
L42:;
si0=l18;
si1=l7;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l20=si0;
L38:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l16=si0;
si1=200U;
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
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l18;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
si0=l7;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L44;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L31;
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
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
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l18;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l16;
si2=0U;
si0=f8146(i,si0,si1,si2);
l3=si0;
L44:;
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l3;
si0=f8078(i,si0,si1,si2);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l4;
si1=l3;
f7257(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L45:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L33:;
si0=l4;
si1=52U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l16;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8137(i,si0,si1,si2);
l7=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
f7690(i,si0);
goto L3;
L32:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L31:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=l20;
si1=l10;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=1114112U;
l14=si0;
si0=l17;
l12=si0;
si0=l10;
l13=si0;
goto L10;
L46:;
si0=l20;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L48;
}
si0=l20;
si1=1U;
si0+=si1;
l13=si0;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
goto L47;
L48:;
si0=l20;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l16=si0;
si0=l3;
si1=31U;
si0&=si1;
l12=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l12;
si1=6U;
si0<<=(si1&31);
si1=l16;
si0|=si1;
l3=si0;
si0=l20;
si1=2U;
si0+=si1;
l13=si0;
goto L47;
L49:;
si0=l16;
si1=6U;
si0<<=(si1&31);
si1=l20;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l16=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l16;
si1=l12;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
si0=l20;
si1=3U;
si0+=si1;
l13=si0;
goto L47;
L50:;
si0=1114112U;
l14=si0;
si0=l20;
si1=4U;
si0+=si1;
l13=si0;
si0=l16;
si1=6U;
si0<<=(si1&31);
si1=l20;
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
l3=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l17;
l12=si0;
goto L10;
L47:;
si0=2U;
si1=1U;
si2=l3;
si3=10U;
si2=si2 == si3;
l16=si2;
si0=si2?si0:si1;
l19=si0;
si0=1114113U;
si1=l3;
si2=l16;
si0=si2?si0:si1;
l14=si0;
si0=l17;
si1=l20;
si0-=si1;
si1=l13;
si0+=si1;
l12=si0;
goto L10;
L13:;
si0=l16;
l20=si0;
si0=l12;
l18=si0;
L12:;
si0=l3;
si1=128U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=2U;
si1=3U;
si2=l3;
si3=2048U;
si2=si2 < si3;
si0=si2?si0:si1;
l19=si0;
L11:;
si0=l15;
l12=si0;
si0=l20;
l13=si0;
L10:;
si0=l19;
si1=l18;
si0+=si1;
l19=si0;
si1=l18;
si2=l6;
si0=si2?si0:si1;
l3=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l7;
si0=!(si0);
if(si0){
goto L51;
}
si0=l9;
si1=l7;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L51;
}
goto L1;
L52:;
si0=l8;
si1=l7;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L51:;
si0=l3;
si0=!(si0);
if(si0){
goto L53;
}
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l3;
si1=l9;
si0=si0 == si1;
if(si0){
goto L53;
}
goto L1;
L54:;
si0=l8;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L53:;
si0=l3;
si1=l7;
si0-=si1;
l16=si0;
if(si0){
goto L56;
}
si0=1U;
l3=si0;
goto L55;
L56:;
si0=l16;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l16;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
L55:;
si0=l3;
si1=l8;
si2=l7;
si1+=si2;
si2=l16;
si0=f15390(i,si0,si1,si2);
l20=si0;
si0=0U;
l15=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l16;
si1=4U;
si0=si0 < si1;
if(si0){
goto L58;
}
si0=l20;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l3=si0;
si1=l20;
si0-=si1;
l7=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L57;
}
L58:;
si0=l20;
si1=-1U;
si0+=si1;
l18=si0;
si0=l16;
l3=si0;
L59:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l18;
si1=l3;
si0+=si1;
l7=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L59;
}
}
si0=1U;
l15=si0;
goto L6;
L57:;
si0=1U;
l15=si0;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L6;
}
si0=4U;
si1=l7;
si2=l3;
si3=l20;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
si1=l16;
si2=-4U;
si1+=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
L60:;
{
si0=l20;
si1=l3;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L7;
}
goto L60;
}
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=1U;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l20;
si1=l7;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l15=si0;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l18=si0;
si1=200U;
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
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l16;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l20;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
si0=l7;
si1=77U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L62;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=64U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L61;
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
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l16;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l18;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l16;
si2=0U;
si0=f8146(i,si0,si1,si2);
l3=si0;
L62:;
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l3;
si0=f8078(i,si0,si1,si2);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L63;
}
si0=l4;
si1=l3;
f7257(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L63:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l19;
l7=si0;
goto L5;
L61:;
}
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f15042(i);
UNREACHABLE;
L1:;
si0=l8;
si1=l9;
si2=l7;
si3=l3;
si4=1874236U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f10851(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l1;
si0=f7140(i,si0);
L0:;
return si0;
}

void f10852(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
f10853(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10853(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=92U;
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
sj1=5416430769165163171ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6413089843220384395ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
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
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1264U;
si2=1268U;
si3=l3;
si4=77U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si1=si3?si1:si2;
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
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10854(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10855(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10855(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6279(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
goto L1;
L2:;
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=l6;
si3=l8;
si2-=si3;
l9=si2;
si1+=si2;
l10=si1;
si2=l8;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=l6;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l8;
if(si0){
goto L7;
}
si0=l9;
l6=si0;
goto L5;
L8:;
si0=l10;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l9;
l6=si0;
goto L5;
L7:;
si0=l7;
si1=l6;
si2=0U;
si3=l9;
si4=1863696U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L3;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
l8=si0;
si0=0U;
l6=si0;
L3:;
si0=l8;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
f7690(i,si0);
L11:;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
f7690(i,si0);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10856(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6257(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=56U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L3:;
si0=l3;
si1=60U;
si0+=si1;
si1=l2;
si0=f9015(i,si0,si1);
l2=si0;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
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

void f10857(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6014(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
si0=1U;
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
l6=si0;
si1=2U;
si0=si0 != si1;
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
si1=l4;
si1=i32_load(&i->m0,(U64)si1+84U);
si2=l6;
si3=0U;
si2=si2 != si3;
si3=l2;
si0=f10858(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
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
f7690(i,si0);
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10858(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=l6;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L1:;
si0=l0;
si1=12U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
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
goto L2;
}
si0=l0;
si1=0U;
f1431(i,si0,si1);
L2:;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si2=2U;
si3=l2;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si2=7U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=44U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l9;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f5805(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
if(si0){
goto L6;
}
si0=l10;
l12=si0;
goto L5;
L7:;
si0=l9;
si1=l7;
si2=l4;
si3=7U;
si2+=si3;
si3=l3;
si0=f10419(i,si0,si1,si2,si3);
l12=si0;
goto L3;
L6:;
si0=l11;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l2=si1;
si2=l4;
si3=8U;
si2+=si3;
si0=f10418(i,si0,si1,si2);
l12=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
l1=si0;
L9:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
f7690(i,si0);
L10:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l5;
f7690(i,si0);
L11:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L5;
}
si0=l11;
f15271(i,si0);
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
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
goto L3;
}
si0=l1;
f7690(i,si0);
goto L3;
L4:;
si0=0U;
l14=si0;
si0=l2;
if(si0){
goto L15;
}
si0=4U;
l15=si0;
goto L14;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=f15269(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l11;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l15;
l5=si0;
si0=l11;
l1=si0;
L16:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l13;
f7690(i,si0);
L17:;
si0=l5;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l16;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L18;
}
si0=l11;
f15271(i,si0);
L18:;
si0=l7;
si0=!(si0);
if(si0){
goto L19;
}
si0=l9;
l1=si0;
L20:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l5;
f7690(i,si0);
L21:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l8;
si0=!(si0);
if(si0){
goto L22;
}
si0=l9;
f15271(i,si0);
L22:;
si0=0U;
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
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
goto L12;
}
si0=l1;
f7690(i,si0);
goto L12;
L13:;
si0=4U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l14;
l7=si0;
si0=l2;
l8=si0;
si0=l15;
l9=si0;
L3:;
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
goto L23;
}
si0=l0;
sj1=l6;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L23:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
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
goto L24;
}
si0=l0;
si1=0U;
f1431(i,si0,si1);
L24:;
si0=l12;
if(si0){
goto L31;
}
si0=l5;
if(si0){
goto L32;
}
si0=0U;
l12=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L25;
}
goto L26;
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=25U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1873520U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1873512U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1873504U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1873496U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
sj1=107374182425ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l3;
si1=l0;
si2=l4;
si3=32U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l12=si0;
goto L30;
L31:;
si0=l5;
si0=!(si0);
if(si0){
goto L29;
}
L30:;
si0=l13;
l1=si0;
L33:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l0;
f7690(i,si0);
L34:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L33;
}
}
L29:;
si0=l7;
if(si0){
goto L26;
}
goto L25;
L28:;
si0=1U;
si1=25U;
f52(i,si0,si1);
UNREACHABLE;
L27:;
f15042(i);
UNREACHABLE;
L26:;
si0=l13;
f15271(i,si0);
L25:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l12;
L0:;
return si0;
}

U32 f10859(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l1;
si0=f14043(i,si0);
L0:;
return si0;
}

void f10860(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f5895(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=l3;
si3=l2;
f10861(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
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
goto L1;
}
si0=l5;
f7690(i,si0);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10861(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=0U;
sj2=l8;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l4;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=l2;
f8216(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
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
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=l2;
si2=0U;
si0=f8137(i,si0,si1,si2);
l5=si0;
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
goto L5;
}
goto L4;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
si0=l2;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L4;
}
L5:;
si0=l1;
f1433(i,si0);
L4:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10862(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l1;
si0=f14860(i,si0);
L0:;
return si0;
}

void f10863(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6109(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l3=si0;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=1U;
l6=si0;
goto L2;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+88U);
l8=sj0;
si0=(U32)(sj0);
l6=si0;
if(si0){
goto L4;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
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
L4:;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
if(si0){
goto L5;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
L5:;
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l3;
si3=l7;
si4=l6;
si5=l5;
si6=l2;
f10864(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l5=si0;
si0=1U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l7=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
default:
goto L7;
}
L8:;
si0=0U;
l6=si0;
goto L6;
L7:;
si0=l2;
si1=l5;
si0=f7375(i,si0,si1);
l5=si0;
si0=l7;
l6=si0;
L6:;
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
f7690(i,si0);
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10864(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+20U);
if(si0){
goto L3;
}
si0=0U;
l8=si0;
si0=0U;
l9=si0;
L12:;
{
si0=l9;
si1=255U;
si0&=si1;
l10=si0;
si0=l1;
si1=1U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+21U);
l9=si2;
si3=l9;
si4=l10;
si3=si3 == si4;
l10=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l10;
if(si0){
goto L11;
}
si0=l8;
si1=255U;
si0&=si1;
l10=si0;
si0=l9;
si1=0U;
si0=si0 != si1;
l11=si0;
l8=si0;
si0=l10;
si0=!(si0);
si1=l11;
si0^=si1;
if(si0){
goto L12;
}
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l10=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=1866833U;
l9=si0;
si0=9U;
l10=si0;
goto L9;
L11:;
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
l9=si1;
si2=1U;
si3=l9;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=12U;
si0+=si1;
sj1=l12;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L13:;
si0=l1;
si1=16U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L15;
}
si0=l6;
si1=-1U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=116U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l10;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l9=si0;
if(si0){
goto L14;
}
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1673219U;
si1=16U;
si2=l7;
si3=40U;
si2+=si3;
si3=1673236U;
si4=1687904U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+12U);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l9;
if(si0){
goto L16;
}
si0=l1;
si1=12U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L16:;
si0=l1;
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
goto L6;
}
si0=l7;
si1=60U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=52U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
si2=1860952U;
si3=0U;
si4=l7;
si5=40U;
si4+=si5;
f7628(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+112U);
if(si0){
goto L5;
}
si0=l6;
si1=-1U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+116U);
l8=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+120U);
l9=si0;
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l10;
f7239(i,si0);
si0=l6;
sj1=l12;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l9;
f15271(i,si0);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+112U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
l9=si1;
si2=1U;
si3=l9;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=12U;
si0+=si1;
sj1=l12;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l9;
f7690(i,si0);
L18:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+12U);
l9=si2;
si3=l9;
si4=1U;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l9;
if(si0){
goto L19;
}
si0=l1;
si1=12U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
L19:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=0U;
l1=si0;
goto L7;
L10:;
si0=1866818U;
si1=1866020U;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+8U);
si3=l10;
si2=si2 == si3;
l10=si2;
si0=si2?si0:si1;
l9=si0;
si0=15U;
si1=9U;
si2=l10;
si0=si2?si0:si1;
l10=si0;
L9:;
si0=l7;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=1215U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=1866860U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l7;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
f63(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=508U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l9;
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
si0=l6;
si1=l9;
si2=l7;
si3=8U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l9=si0;
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
goto L20;
}
si0=l3;
f7690(i,si0);
L20:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l4;
f7690(i,si0);
L21:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l5;
f7690(i,si0);
L22:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+20U,si1);
goto L2;
L8:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l10;
si0=!(si0);
if(si0){
goto L23;
}
si0=0U;
l1=si0;
goto L7;
L23:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=1U;
l1=si0;
goto L7;
L24:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l9;
f7690(i,si0);
L25:;
si0=0U;
l9=si0;
L7:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
f15042(i);
UNREACHABLE;
L5:;
si0=1673219U;
si1=16U;
si2=l7;
si3=40U;
si2+=si3;
si3=1673236U;
si4=1687976U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1687920U;
si1=40U;
si2=1687960U;
f703(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l7;
si1=l6;
si2=l3;
si3=l4;
si4=l5;
f7342(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l7;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10865(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6015(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=56U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1439(i,si0,sj1,si2);
L3:;
si0=l3;
si1=60U;
si0+=si1;
si1=l2;
si0=f9016(i,si0,si1);
l2=si0;
si0=l3;
si1=0U;
si2=l3;
si2=i32_load8_u(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l6;
if(si0){
goto L4;
}
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
f1440(i,si0,si1);
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l2;
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

U32 f10866(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l1;
si0=f10177(i,si0);
L0:;
return si0;
}

void f10867(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10868(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10868(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l2;
f6037(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l3=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=1U;
l5=si0;
goto L5;
L6:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+28U);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
sj0=l6;
si0=(U32)(sj0);
l11=si0;
si0=l3;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L8;
}
L9:;
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l11;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
si2=l9;
si3=l14;
si4=l3;
f760(i,si0,si1,si2,si3,si4);
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f10926(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L11;
}
si0=1U;
l15=si0;
si0=0U;
l3=si0;
si0=0U;
l14=si0;
goto L10;
L11:;
si0=0U;
l3=si0;
si0=1U;
l15=si0;
si0=0U;
l14=si0;
L12:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=l14;
si0-=si1;
l5=si0;
si0=l10;
si1=l14;
si0+=si1;
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si1=l3;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l5;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L13:;
si0=l15;
si1=l3;
si0+=si1;
si1=l16;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l5;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l17;
si1=l3;
si0-=si1;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l12;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L14:;
si0=l15;
si1=l3;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l12;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f10926(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
if(si0){
goto L12;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L10:;
si0=l10;
si1=l14;
si0+=si1;
l12=si0;
si0=l5;
si1=l3;
si0-=si1;
si1=l9;
si2=l14;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l5;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L15:;
si0=l15;
si1=l3;
si0+=si1;
si1=l12;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L7;
L8:;
si0=l5;
if(si0){
goto L19;
}
si0=l9;
if(si0){
goto L20;
}
si0=1U;
l3=si0;
si0=l9;
l5=si0;
goto L18;
L20:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
l5=si0;
goto L18;
L19:;
si0=l9;
if(si0){
goto L17;
}
si0=l11;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=0U;
l5=si0;
si0=1U;
l3=si0;
L18:;
si0=l3;
si1=l10;
si2=l9;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L7;
L17:;
si0=0U;
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l11;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l11;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=32U;
si0=f15269(i,si0);
l15=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l15;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
si2=l9;
si3=l17;
si4=l14;
f760(i,si0,si1,si2,si3,si4);
si0=0U;
l14=si0;
L22:;
{
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=96U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f10926(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=l14;
si0-=si1;
l5=si0;
si0=l10;
si1=l14;
si0+=si1;
l16=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+104U);
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si1=l3;
si0-=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l5;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L23:;
si0=l15;
si1=l3;
si0+=si1;
si1=l16;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l5;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l17;
si1=l3;
si0-=si1;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l12;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L24:;
si0=l15;
si1=l3;
si0+=si1;
si1=l13;
si2=l12;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=l12;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l10;
si1=l14;
si0+=si1;
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si0-=si1;
si1=l9;
si2=l14;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l5;
f7248(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L25:;
si0=l15;
si1=l3;
si0+=si1;
si1=l12;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=32U;
si0+=si1;
si1=l3;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L7;
L16:;
si0=l7;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L27;
}
si0=1U;
l14=si0;
goto L26;
L27:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l14=si0;
si0=!(si0);
if(si0){
goto L1;
}
L26:;
si0=l14;
si1=l5;
si2=l3;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
L7:;
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
goto L28;
}
si0=l7;
f7690(i,si0);
L28:;
si0=l11;
si1=l11;
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
si0=l11;
f7690(i,si0);
L29:;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l8;
f7690(i,si0);
L5:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f10869(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=64U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6011(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
goto L1;
L2:;
si0=0U;
l6=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si4=0U;
si5=l3;
si6=0U;
si5=(U32)((I32)si5>(I32)si6);
si3=si5?si3:si4;
f2126(i,si0,si1,si2,si3);
si0=l4;
si1=80U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l3=si0;
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
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10870(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10871(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10871(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l2;
f6110(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l7=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
sj0=l7;
si0=(U32)(sj0);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L4;
}
si0=l6;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L3;
L4:;
si0=l6;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=56U;
si0+=si1;
si0=f2125(i,si0);
l3=si0;
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l9;
si2=l8;
si3=l3;
f9901(i,si0,si1,si2,si3);
si0=0U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+12U);
l9=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si1=l6;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l8;
si4=l9;
f10604(i,si0,si1,si2,si3,si4);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l3;
si4=l10;
f760(i,si0,si1,si2,si3,si4);
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f10926(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
if(si0){
goto L6;
}
si0=0U;
l3=si0;
goto L5;
L6:;
si0=0U;
l3=si0;
L7:;
{
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
f10926(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
if(si0){
goto L7;
}
}
L5:;
si0=l5;
si1=l5;
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
si0=l5;
f7690(i,si0);
L8:;
si0=l3;
si1=l2;
si0=f12593(i,si0,si1);
l5=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l3=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
f7690(i,si0);
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10872(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
f10873(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10873(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=196U;
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
sj1=2258965645003429056ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6053589369881491730ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l2;
si1=1682360U;
si2=7U;
si3=l4;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
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
si1=1679036U;
si2=4U;
si3=l4;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l5;
si5=l3;
si0=f7151(i,si0,si1,si2,si3,si4,si5);
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
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l3;
si1=l8;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+56U);
l6=si2;
si3=l6;
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l6;
si1=l7;
si0=si0 == si1;
if(si0){
goto L8;
}
L9:;
si0=l3;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L8:;
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
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
goto L10;
}
si0=l3;
si1=56U;
si0+=si1;
f1433(i,si0);
goto L10;
L11:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=56U;
si0+=si1;
f1433(i,si0);
L12:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
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
L10:;
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
f7690(i,si0);
L2:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10874(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10875(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10875(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f5584(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l6=si0;
goto L1;
L2:;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
si0=l8;
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
goto L13;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l9=si0;
si0=l8;
si1=2U;
si0+=si1;
l11=si0;
goto L12;
L13:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
si0=l8;
si1=3U;
si0+=si1;
l11=si0;
goto L12;
L14:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
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
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l8;
si1=4U;
si0+=si1;
l11=si0;
L12:;
si0=l9;
si1=128U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=0U;
l6=si0;
si0=1499U;
l12=si0;
si0=1499U;
l10=si0;
L16:;
{
si0=-1U;
si1=l12;
si2=1U;
si1>>=(si2&31);
si2=l6;
si1+=si2;
l13=si1;
si2=3U;
si1<<=(si2&31);
si2=1136004U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l9;
si1=si1 != si2;
si2=l12;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l12=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l13;
l10=si0;
goto L17;
L18:;
si0=l12;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l13;
si1=1U;
si0+=si1;
l6=si0;
L17:;
si0=l10;
si1=l6;
si0-=si1;
l12=si0;
si0=l10;
si1=l6;
si0=si0 > si1;
if(si0){
goto L16;
}
goto L6;
}
L15:;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=1136008U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L5;
L11:;
si0=l8;
si1=1U;
si0+=si1;
l11=si0;
si0=l6;
si1=255U;
si0&=si1;
l9=si0;
L10:;
si0=l9;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=26U;
si0=si0 < si1;
si1=5U;
si0<<=(si1&31);
si1=l9;
si0^=si1;
l9=si0;
goto L6;
L9:;
si0=l6;
si1=4194303U;
si0&=si1;
si1=12U;
si0*=si1;
si1=1147996U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+4U);
l14=sj0;
si0=(U32)(sj0);
l6=si0;
sj0=l14;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
if(si0){
goto L7;
}
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=1114112U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+68U,si1);
goto L4;
L8:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L7:;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+64U,si1);
goto L4;
L6:;
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+64U,si1);
L5:;
si0=l4;
si1=1114113U;
i32_store(&i->m0,(U64)si0+72U,si1);
L4:;
si0=l4;
si1=80U;
si0+=si1;
si1=l11;
si2=l8;
si3=l7;
si2+=si3;
si3=l11;
si2-=si3;
f64(i,si0,si1,si2);
si0=l4;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1932U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=5034U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1874200U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f63(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+80U);
f15271(i,si0);
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l6=si0;
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
si0=l3;
f7690(i,si0);
L1:;
si0=l0;
si1=l6;
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

void f10876(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si2=l2;
f6045(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
l3=si0;
goto L2;
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+56U);
l3=si1;
si2=8U;
si3=l3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=56U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L4:;
si0=l5;
si1=68U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si1=60U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L5;
}
si0=l5;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L5:;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
l3=si0;
L7:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l11;
f7690(i,si0);
L8:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
f15271(i,si0);
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L1;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
f7690(i,si0);
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10877(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l1;
si0=f7658(i,si0);
L0:;
return si0;
}

void f10878(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=72U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l4;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
f10879(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10879(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l2;
f6273(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L3;
}
si0=1U;
l3=si0;
goto L2;
L3:;
si0=l4;
si1=l6;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l5;
si4=l4;
si4=i32_load(&i->m0,(U64)si4+8U);
si5=l2;
f9908(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
si0=1U;
l3=si0;
goto L4;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=0U;
l9=si0;
si0=l8;
si1=1U;
si0>>=(si1&31);
l10=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l10;
si1=2147483646U;
si0&=si1;
l11=si0;
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=0U;
l9=si0;
si0=l7;
l12=si0;
L8:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l12;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=32ULL;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l13;
sj2=32ULL;
sj1=I64_ROTL(sj1,sj2);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l11;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l8;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l3;
si1=l7;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l10;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si2=l10;
si3=l9;
si4=-1U;
si3^=si4;
si2+=si3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l3=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l12;
si2=0U;
si0=f8137(i,si0,si1,si2);
l5=si0;
L4:;
si0=l6;
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
goto L2;
}
si0=l6;
f7690(i,si0);
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
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

void f10880(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l4;
f10756(i,si0,si1,si2,si3);
L0:;
}

void f10881(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=5035U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=5036U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10882(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l4;
f10760(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10883(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L2;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
goto L1;
L2:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
si0=f2125(i,si0);
l4=si0;
L1:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f10884(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l4;
f10828(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10885(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l4;
si1=16U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L2;
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
goto L1;
}
L2:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
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
l1=si0;
si0=l5;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
f1433(i,si0);
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L0:;
}

void f10886(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=56U;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L2;
}
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L2:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l6;
si0=f2125(i,si0);
l1=si0;
L1:;
si0=l3;
si1=31U;
si0=(U32)((I32)si0>>(si1&31));
si1=l1;
si0&=si1;
si1=l3;
si0+=si1;
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L8;
}
si0=l3;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l6;
si1=l3;
si0=f10887(i,si0,si1);
l1=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l5;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l5;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=3U;
l1=si0;
si0=1U;
l7=si0;
goto L9;
L12:;
si0=l5;
si1=l1;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=1U;
l7=si0;
si0=1U;
l1=si0;
goto L9;
L11:;
si0=l5;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l5;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=2U;
l1=si0;
si0=1U;
l7=si0;
goto L9;
L10:;
si0=l5;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l5;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l5;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=4U;
l1=si0;
si0=0U;
l7=si0;
L9:;
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l5;
si2=24U;
si1+=si2;
si2=l1;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si1=l3;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
si2=l3;
si1-=si2;
si2=l1;
si1=si1 > si2;
si0|=si1;
if(si0){
goto L14;
}
si0=1U;
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
if(si0){
goto L13;
}
si0=l1;
si1=l3;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2139062144U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l8=si0;
goto L13;
L14:;
si0=0U;
l8=si0;
si0=l3;
si1=l1;
si2=-1U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L15;
}
si0=1U;
l8=si0;
goto L13;
L15:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l8=si0;
si0=l3;
si1=l1;
si2=-2U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L16;
}
si0=1U;
l8=si0;
goto L13;
L16:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l8=si0;
si0=l3;
si1=l1;
si2=-3U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L17;
}
si0=1U;
l8=si0;
goto L13;
L17:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=1U;
l8=si0;
si0=l3;
si1=l1;
si2=-4U;
si1+=si2;
l6=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L13;
}
si0=l6;
si1=0U;
si0=si0 != si1;
l8=si0;
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
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
si0=l5;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=0U;
l3=si0;
si0=0U;
l1=si0;
si0=l4;
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
l1=si0;
si0=!(si0);
if(si0){
goto L4;
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
si0=l5;
si1=8U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l5;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=0U;
si0=f8146(i,si0,si1,si2);
l1=si0;
L18:;
si0=l5;
si1=l4;
si2=l1;
si0=f8078(i,si0,si1,si2);
l1=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=18U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1870201U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1870193U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1870185U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=77309411346ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l6;
si2=l5;
si3=24U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l1=si0;
L7:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L6:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f15042(i);
UNREACHABLE;
L4:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=18U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f10887(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
L4:;
{
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
goto L5;
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l4=si0;
si0=l0;
si1=31U;
si0&=si1;
l5=si0;
si0=l0;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l0=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L5;
L7:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
si0=l0;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l4;
si1=l5;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l0=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L5;
L8:;
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
l0=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L5:;
si0=l0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L1;
}
L3:;
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=255U;
si0&=si1;
goto L0;
L9:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l0;
si1=31U;
si0&=si1;
l3=si0;
si0=l0;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
goto L0;
L10:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l0;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l2;
si1=l3;
si2=12U;
si1<<=(si2&31);
si0|=si1;
goto L0;
L11:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l1;
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
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
goto L0;
L2:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l1;
si1=l2;
si2=1863384U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
goto L0;
L1:;
si0=1860456U;
si1=43U;
si2=1863368U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f10888(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=5037U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=5038U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=5039U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=5040U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=5036U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10889(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
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
si2=l3;
si3=l4;
f10800(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10890(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
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
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=l4;
f10808(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10891(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l4;
si3=l3;
si4=0U;
si5=2147483647U;
f10685(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=-1U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l6=si0;
L1:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10892(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l4;
f10861(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10893(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si1=8U;
si0&=si1;
if(si0){
goto L2;
}
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L2;
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
goto L1;
}
L2:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si4=l3;
f8218(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si1=56U;
si0+=si1;
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
goto L3;
}
si0=l1;
f1433(i,si0);
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10894(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
si2=l4;
f10895(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L3;
}
si0=1U;
l3=si0;
goto L2;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l7=si1;
si2=8U;
si3=l7;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=56U;
si0+=si1;
sj1=l8;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L4:;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=60U;
si0+=si1;
si1=l7;
si2=l3;
f7270(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l7=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l3;
si3=2U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L6;
}
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L6:;
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
si0=0U;
l3=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f15271(i,si0);
L7:;
si0=l1;
l4=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10895(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=6024102831536450768ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3796322966896913709ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l1;
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f11268(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
if(si0){
goto L3;
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
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L5:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l2;
f7690(i,si0);
L6:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
}
L4:;
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
L2:;
si0=l4;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L7;
}
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
si1=8U;
si0&=si1;
if(si0){
goto L9;
}
si0=l2;
si1=16U;
si0+=si1;
l4=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l4;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l5=si2;
si3=l5;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
if(si0){
goto L8;
}
L9:;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
sj2=l6;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L8:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l2;
si2=l4;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=52U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f11268(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l2=si0;
if(si0){
goto L11;
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
goto L10;
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L13:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L14;
}
si0=l4;
f7690(i,si0);
L14:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L10:;
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
goto L1;
L7:;
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
goto L19;
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
goto L19;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
f14775(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L29;
}
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
goto L30;
}
si0=l1;
f7690(i,si0);
L30:;
si0=l4;
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
goto L19;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si2=l4;
f7608(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=0U;
l8=si0;
goto L27;
L29:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
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
si0=l1;
f7690(i,si0);
goto L1;
L28:;
si0=l7;
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L27;
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
L31:;
{
si0=l5;
if(si0){
goto L32;
}
si0=0U;
l8=si0;
goto L27;
L32:;
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
si1=288U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L31;
}
}
L27:;
si0=l8;
si1=2970484U;
si2=l8;
si0=si2?si0:si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l5;
si3=l2;
si4=l7;
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L24;
case 1:
goto L25;
case 2:
goto L23;
default:
goto L24;
}
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L20;
L25:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L20;
L24:;
si0=l1;
if(si0){
goto L22;
}
L23:;
si0=4U;
l5=si0;
si0=0U;
l1=si0;
goto L21;
L22:;
si0=l1;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=l1;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L34;
}
si0=l8;
l5=si0;
goto L33;
L34:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l5=si0;
goto L33;
L35:;
si0=l7;
si0=f15269(i,si0);
l5=si0;
L33:;
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
L21:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=0U;
l1=si0;
L40:;
{
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=l2;
f14699(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L42;
case 1:
goto L36;
default:
goto L42;
}
L42:;
si0=l5;
si0=!(si0);
if(si0){
goto L43;
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
goto L43;
}
si0=l5;
f7690(i,si0);
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+40U);
l1=si1;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=l1;
if(si0){
goto L39;
}
si0=l2;
f15271(i,si0);
si0=4U;
l2=si0;
goto L38;
L41:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+36U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
f7257(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
L44:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=1U;
si0+=si1;
l1=si0;
goto L40;
}
L39:;
si0=l2;
si1=l1;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0=f15274(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L16;
}
L38:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
L37:;
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
goto L15;
L36:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
L46:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
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
goto L47;
}
si0=l2;
f7690(i,si0);
L47:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L46;
}
}
L45:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L20:;
si0=l4;
si1=l4;
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
goto L1;
L19:;
f15042(i);
UNREACHABLE;
L18:;
f53(i);
UNREACHABLE;
L17:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=4U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l4;
f7690(i,si0);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10896(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=56U;
si0+=si1;
sj1=l6;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L2:;
si0=l1;
si1=60U;
si0+=si1;
si1=l4;
si2=l3;
si0=f11370(i,si0,si1,si2);
l4=si0;
si0=0U;
l5=si0;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L4;
}
si0=l3;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
goto L3;
L4:;
si0=l3;
if(si0){
goto L5;
}
si0=l1;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L5:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
f7690(i,si0);
L6:;
si0=l4;
l1=si0;
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

U32 f10897(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3;
si0=l0;
si1=56U;
si0+=si1;
l0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=l3;
si3=l4;
si0=f10806(i,si0,si1,si2,si3);
goto L0;
L1:;
si0=l0;
si1=l2;
si2=l4;
si0=f10821(i,si0,si1,si2);
L0:;
return si0;
}

U32 f10898(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
l5=si1;
si2=8U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si0=!(si0);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
if(si0){
goto L4;
}
si0=l0;
si1=56U;
si0+=si1;
sj1=l6;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L4:;
si0=l0;
si1=60U;
si0+=si1;
si1=l4;
si2=l2;
si3=l3;
si0=f11371(i,si0,si1,si2,si3);
l5=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l5;
if(si0){
goto L5;
}
si0=l0;
si1=56U;
si0+=si1;
sj1=l6;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si1=l4;
si2=l2;
si0=f11376(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+56U);
l3=si2;
si3=l3;
si4=8U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=56U;
si0+=si1;
si1=0U;
f1431(i,si0,si1);
L1:;
si0=l5;
L0:;
return si0;
}

void f10899(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
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
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=1U;
l5=si0;
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
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=l1;
si3=64U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=68U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l2;
f11799(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l1=si0;
si0=0U;
l5=si0;
goto L2;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
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
L2:;
si0=l0;
si1=l1;
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
f15042(i);
UNREACHABLE;
L0:;
}

void f10900(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l3;
si3=l4;
f10839(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10901(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f10902(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=f15014(i);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f10903(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10904(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
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
si0=l0;
f7690(i,si0);
L1:;
L0:;
}

void f10905(rustpythonInstance*i,U32 l0) {
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
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l3=si0;
L4:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L5;
}
si0=l4;
f7690(i,si0);
L5:;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L4;
}
}
L3:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
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
goto L1;
}
si0=l3;
f7690(i,si0);
L1:;
L0:;
}

void f10906(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10907(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10908(rustpythonInstance*i,U32 l0) {
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

void f10909(rustpythonInstance*i,U32 l0) {
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

void f10910(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10911(rustpythonInstance*i,U32 l0) {
L0:;
}

void f10912(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f760(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=0U;
l4=si0;
si0=l5;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
si1=29U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=l3;
si1=l5;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l3;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l1;
si1=l3;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L8:;
si0=l1;
si1=l3;
si0+=si1;
l7=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
si0=l7;
si1=-2U;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l7;
si1=31U;
si0&=si1;
l8=si0;
goto L11;
L12:;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l11=si0;
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L14;
}
si0=l7;
si1=15U;
si0&=si1;
l8=si0;
goto L13;
L14:;
si0=l8;
si1=-1U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l11;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L13:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L11:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l9;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L10:;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
l4=si0;
goto L6;
L15:;
si0=l8;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=-1U;
l4=si0;
si0=l8;
si1=128U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=-2U;
l4=si0;
si0=l8;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=-3U;
si1=-4U;
si2=l8;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
L16:;
si0=l4;
si1=l3;
si0+=si1;
l4=si0;
if(si0){
goto L17;
}
si0=0U;
l4=si0;
goto L6;
L17:;
si0=l4;
si1=l6;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L18;
}
goto L2;
L19:;
si0=l1;
si1=l4;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L18:;
si0=l1;
si1=l4;
si0+=si1;
l3=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
si0=l3;
si1=-2U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
goto L6;
L7:;
si0=0U;
l4=si0;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
L5:;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l5;
si1=24U;
si0+=si1;
l4=si0;
si0=l5;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+72U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si0=l5;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l5;
si1=l4;
si2=l8;
si3=l2;
si4=l1;
si5=l3;
si6=0U;
f10913(i,si0,si1,si2,si3,si4,si5,si6);
goto L3;
L20:;
si0=l5;
si1=l4;
si2=l8;
si3=l2;
si4=l1;
si5=l3;
si6=1U;
f10913(i,si0,si1,si2,si3,si4,si5,si6);
L3:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
l3=si0;
L1:;
si0=l1;
si1=l6;
si2=0U;
si3=l3;
si4=1862508U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f10913(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U64 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si1=l5;
si0-=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=l5;
si2=l9;
si3=l5;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l4;
si1=-1U;
si0+=si1;
l11=si0;
si0=l2;
si1=l5;
si0-=si1;
l12=si0;
si0=0U;
si1=l5;
si0-=si1;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l14=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l15=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
L6:;
{
sj0=1ULL;
si1=l2;
si2=l8;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l16;
sj0&=sj1;
l17=sj0;
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
sj0=l17;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L11;
}
si0=l5;
l18=si0;
si0=l8;
l19=si0;
goto L7;
L11:;
L12:;
{
si0=l13;
si1=l8;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l12;
si1=l8;
si0+=si1;
l20=si0;
si0=l8;
si1=l5;
si0-=si1;
l19=si0;
l8=si0;
sj0=l16;
si1=l20;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
goto L12;
}
L10:;
sj0=l17;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L8;
}
si0=l14;
l18=si0;
si0=l8;
l19=si0;
goto L7;
L9:;
si0=l5;
si1=l19;
si0+=si1;
l7=si0;
si0=l5;
l18=si0;
goto L7;
L8:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
L13:;
{
si0=l13;
si1=l8;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l12;
si1=l8;
si0+=si1;
l20=si0;
si0=l8;
si1=l5;
si0-=si1;
l19=si0;
l8=si0;
sj0=l16;
si1=l20;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L13;
}
}
si0=l5;
si1=l19;
si0+=si1;
l7=si0;
si0=l5;
l18=si0;
si0=l5;
l14=si0;
L7:;
si0=l9;
si1=l9;
si2=l14;
si3=l9;
si4=l14;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l6;
si0=si2?si0:si1;
l8=si0;
si1=-1U;
si0+=si1;
l20=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l11;
si1=l8;
si0+=si1;
l21=si0;
si0=0U;
si1=l8;
si0-=si1;
l20=si0;
si0=l8;
si1=l19;
si0+=si1;
si1=-1U;
si0+=si1;
l8=si0;
L19:;
{
si0=l20;
si0=!(si0);
if(si0){
goto L17;
}
si0=l8;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l20;
si1=1U;
si0+=si1;
l20=si0;
si0=l2;
si1=l8;
si0+=si1;
l22=si0;
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
l23=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l21;
si1=-1U;
si0+=si1;
l21=si0;
si0=l23;
si1=l22;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L19;
}
}
si0=l7;
si1=l9;
si0-=si1;
si1=l20;
si0-=si1;
l7=si0;
si0=l5;
l8=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L16;
}
goto L15;
L18:;
si0=l8;
if(si0){
goto L5;
}
L17:;
si0=l18;
si1=l9;
si2=l18;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l22=si0;
si0=l2;
si1=l19;
si0+=si1;
l23=si0;
si0=l9;
l8=si0;
L20:;
{
si0=l22;
si1=l8;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l1;
si1=l19;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
goto L2;
L21:;
si0=l10;
si1=l8;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l19;
si1=l8;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l23;
si1=l8;
si0+=si1;
l20=si0;
si0=l4;
si1=l8;
si0+=si1;
l21=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l20;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L20;
}
}
si0=l7;
si1=l15;
si0-=si1;
l7=si0;
si0=l15;
l8=si0;
si0=l6;
if(si0){
goto L15;
}
L16:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
l14=si0;
L15:;
si0=l7;
si1=l5;
si0-=si1;
l8=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
goto L1;
L14:;
}
si0=l8;
si1=l3;
si2=1862120U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l20;
si1=l5;
si2=1862104U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l10;
si1=l5;
si2=1862072U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l19;
si2=l9;
si1+=si2;
l8=si1;
si2=l3;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l3;
si2=1862088U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l19;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f10914(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si2=1862024U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1862040U;
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
si2=1862056U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f10915(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si0=f749(i,si0,si1,si2);
L0:;
return si0;
}

void f10916(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=1862136U;
si1=53U;
si2=1862264U;
f703(i,si0,si1,si2);
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
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si0=f15269(i,si0);
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
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
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
si1=0U;
si2=l10;
f7248(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l12=si0;
L22:;
si0=l11;
si1=l12;
si0+=si1;
si1=l13;
si2=l10;
si0=f15390(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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
si0=f15390(i,si0,si1,si2);
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
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1861908U;
si1=35U;
si2=1862280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
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

U32 f10917(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f10918(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f10919(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
if(si0){
goto L5;
}
si0=4U;
l3=si0;
goto L4;
L5:;
si0=l2;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=536870912U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l1;
l3=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si1=l4;
si0=f15277(i,si0,si1);
l3=si0;
goto L6;
L8:;
si0=l4;
si0=f15269(i,si0);
l3=si0;
L6:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=0U;
l1=si0;
si0=l2;
l7=si0;
L9:;
{
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L9;
}
}
L4:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l1;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f15042(i);
UNREACHABLE;
L0:;
}

void f10920(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10921(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
l9=si0;
L6:;
{
si0=l4;
l5=si0;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l9;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l1;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
si4=l7;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l10;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l9=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L7;
L10:;
si0=l1;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
goto L5;
L11:;
si0=l1;
si1=-1U;
si0+=si1;
l10=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l10;
si1=l3;
si2=1862412U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=l3;
si2=1862396U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l11;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l2;
si5=l10;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=4U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
L7:;
si0=l9;
l1=si0;
si0=l5;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10921(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L2;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l4;
if(si0){
goto L6;
}
si0=l3;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=1U;
l7=si0;
si0=0U;
l8=si0;
goto L4;
L7:;
si0=0U;
l8=si0;
si0=1U;
l4=si0;
L8:;
{
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l4;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l1;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
l7=si0;
goto L4;
L9:;
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=l7;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
l8=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l7=si0;
l4=si0;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L8;
L10:;
}
si0=l4;
si1=1U;
si0+=si1;
l7=si0;
goto L4;
L6:;
si0=l3;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
l10=si0;
L12:;
{
si0=l4;
si1=1U;
si0>>=(si1&31);
l7=si0;
si1=-1U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l8;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
si0=l10;
si1=l8;
si0-=si1;
l4=si0;
goto L3;
L13:;
si0=l4;
si1=4U;
si0=si0 < si1;
l8=si0;
si0=l7;
l10=si0;
si0=l7;
l4=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
}
si0=0U;
l8=si0;
si0=l7;
si1=0U;
si0-=si1;
l4=si0;
goto L3;
L11:;
si0=l8;
si1=l3;
si2=1862460U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L4:;
si0=l7;
si1=l3;
si2=l7;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l8;
si0-=si1;
l4=si0;
L3:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10922(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10923(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=4U;
si0+=si1;
l9=si0;
si0=l1;
l10=si0;
L6:;
{
si0=l4;
l5=si0;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l10;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l1;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l7;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l11;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l10=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L7;
L10:;
si0=l1;
if(si0){
goto L11;
}
si0=0U;
l1=si0;
goto L5;
L11:;
si0=l1;
si1=-1U;
si0+=si1;
l11=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l11;
si1=l3;
si2=1862412U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l1;
si1=l3;
si2=1862396U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l2;
si5=l11;
si6=2U;
si5<<=(si6&31);
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
L7:;
si0=l10;
l1=si0;
si0=l5;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10923(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L2;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l4;
if(si0){
goto L6;
}
si0=l3;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=1U;
l7=si0;
si0=0U;
l8=si0;
goto L4;
L7:;
si0=0U;
l8=si0;
si0=1U;
l4=si0;
L8:;
{
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l4;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l7=si3;
si4=l1;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
l7=si0;
goto L4;
L9:;
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=l7;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
l8=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l7=si0;
l4=si0;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L8;
L10:;
}
si0=l4;
si1=1U;
si0+=si1;
l7=si0;
goto L4;
L6:;
si0=l3;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
l10=si0;
L12:;
{
si0=l4;
si1=1U;
si0>>=(si1&31);
l7=si0;
si1=-1U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l8;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
si1=255U;
si0&=si1;
if(si0){
goto L13;
}
si0=l10;
si1=l8;
si0-=si1;
l4=si0;
goto L3;
L13:;
si0=l4;
si1=4U;
si0=si0 < si1;
l8=si0;
si0=l7;
l10=si0;
si0=l7;
l4=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
}
si0=0U;
l8=si0;
si0=l7;
si1=0U;
si0-=si1;
l4=si0;
goto L3;
L11:;
si0=l8;
si1=l3;
si2=1862460U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L4:;
si0=l7;
si1=l3;
si2=l7;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l8;
si0-=si1;
l4=si0;
L3:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10924(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10923(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=4U;
si0+=si1;
l10=si0;
L6:;
{
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l6;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l5;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l11=si3;
si4=l7;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l5=si0;
goto L7;
L11:;
si0=l6;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l11;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
if(si0){
goto L8;
}
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l4;
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
goto L5;
L10:;
si0=l5;
si1=l3;
si2=1862428U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=l3;
si2=1862444U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=-1U;
si0+=si1;
l5=si0;
L7:;
si0=l5;
si1=1U;
si0>>=(si1&31);
l1=si0;
si0=l5;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10925(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10921(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L6:;
{
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
l5=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l6;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l5;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l10=si3;
si4=l7;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l5=si0;
goto L7;
L11:;
si0=l6;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l7;
si4=l10;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
if(si0){
goto L8;
}
si0=l5;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l5;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si4=l4;
si5=3U;
si4<<=(si5&31);
si3+=si4;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
f10674(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
goto L5;
L10:;
si0=l5;
si1=l3;
si2=1862428U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si1=l3;
si2=1862444U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=-1U;
si0+=si1;
l5=si0;
L7:;
si0=l5;
si1=1U;
si0>>=(si1&31);
l1=si0;
si0=l5;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10926(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l2;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L7:;
si0=l4;
si1=l6;
si0-=si1;
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=l6;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
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
si0=l5;
si1=31U;
si0&=si1;
l9=si0;
si0=l5;
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
l5=si0;
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
si0=l5;
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
l5=si0;
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
l5=si0;
goto L12;
L13:;
si0=l5;
si1=255U;
si0&=si1;
l5=si0;
L12:;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L17;
}
si0=l5;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=1U;
l3=si0;
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=2U;
l3=si0;
si0=l5;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=3U;
si1=4U;
si2=l5;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L18:;
si0=l1;
si1=l3;
si2=l6;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l4;
si1=l6;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L2;
L21:;
si0=l2;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L20:;
si0=l4;
si1=l6;
si0-=si1;
l4=si0;
L19:;
si0=l4;
if(si0){
goto L22;
}
si0=0U;
l4=si0;
goto L16;
L22:;
si0=1U;
l3=si0;
si0=l2;
si1=l6;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=l4;
si1=-32U;
si0=si0 < si1;
L17:;
si0=l3;
si1=1U;
si0^=si1;
l4=si0;
L16:;
si0=l1;
si1=l4;
i32_store8(&i->m0,(U64)si0+12U,si1);
goto L3;
L11:;
si0=l1;
si1=l3;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
goto L9;
L10:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
L9:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+14U,si1);
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L4:;
si0=l1;
si1=8U;
si0+=si1;
l6=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l0;
si1=l6;
si2=l2;
si3=l3;
si4=l5;
si5=l4;
si6=0U;
f10914(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L23:;
si0=l0;
si1=l6;
si2=l2;
si3=l3;
si4=l5;
si5=l4;
si6=1U;
f10914(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L3:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=1U;
l3=si0;
L1:;
si0=l1;
si1=l3;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
si2=l6;
si3=l4;
si4=1862476U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f10927(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l5=sj2;
si3=l2;
sj3=(U64)(si3);
sj2^=sj3;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2^=sj3;
sj3=8ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=6364136223846793005ULL;
sj2*=sj3;
l6=sj2;
sj3=l5;
sj2^=sj3;
sj3=24ULL;
sj2=I64_ROTL(sj2,sj3);
l5=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
sj3=l6;
sj2^=sj3;
sj3=l5;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
si3=l2;
si4=l3;
f12861(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f10928(rustpythonInstance*i,U64 l0,U64 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=64U;
si0+=si1;
l5=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l4;
sj1=l1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l4;
sj1=l1;
sj2=8387220255154660723ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=l1;
sj2=7237128888997146477ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l4;
sj1=l0;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
sj1=l0;
sj2=7816392313619706465ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
sj1=l0;
sj2=8317987319222330741ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f10918(i,si0,si1,si2);
si0=l4;
si1=255U;
i32_store8(&i->m0,(U64)si0+79U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=79U;
si1+=si2;
si2=1U;
f10918(i,si0,si1,si2);
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l0=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+24U);
l1=sj0;
si0=l5;
sj0=i64_load32_u(&i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+56U);
l7=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+32U);
l8=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l4;
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
sj2=l1;
sj3=l0;
sj2+=sj3;
l0=sj2;
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
sj3=l1;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l0;
sj3^=sj4;
l1=sj3;
sj2+=sj3;
l0=sj2;
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
sj3=l0;
sj4=l1;
sj5=17ULL;
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l1=sj3;
sj2+=sj3;
l0=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l6=sj1;
sj0^=sj1;
l8=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l0;
sj3=l1;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l1=sj2;
sj3=l7;
sj2+=sj3;
l0=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
l8=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l0;
sj3=l1;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l1=sj2;
sj3=l6;
sj2+=sj3;
l0=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l6=sj1;
sj0^=sj1;
l8=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l1;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l0;
sj2^=sj3;
l1=sj2;
sj3=l7;
sj2+=sj3;
l0=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l1;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l0;
sj1^=sj2;
l1=sj1;
sj2=13ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l1;
sj3=l6;
sj2+=sj3;
sj1^=sj2;
l1=sj1;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l1;
sj2=l7;
sj1+=sj2;
l1=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0^=sj1;
sj1=l1;
sj0^=sj1;
si0=(U32)(sj0);
L0:;
return si0;
}

void f10929(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si1=l2;
sj1=(U64)(si1);
sj0^=sj1;
sj1=6364136223846793005ULL;
sj0*=sj1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj0^=sj1;
sj1=8ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=6364136223846793005ULL;
sj0*=sj1;
l4=sj0;
sj1=l3;
sj0^=sj1;
sj1=24ULL;
sj0=I64_ROTL(sj0,sj1);
l3=sj0;
sj1=6364136223846793005ULL;
sj0*=sj1;
sj1=l4;
sj0^=sj1;
sj1=l3;
sj0=I64_ROTL(sj0,sj1);
l3=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l5=sj0;
sj0=l3;
si0=(U32)(sj0);
l6=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=-4U;
si0+=si1;
l8=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l12=si0;
L4:;
{
si0=l7;
si1=l6;
si2=l9;
si1&=si2;
l6=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=l5;
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
L5:;
{
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
sj0=l4;
sj1=l4;
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
si0=l6;
si1=l12;
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l6=si0;
goto L4;
L6:;
si0=l10;
si1=l8;
sj2=l3;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l6;
si2+=si3;
si3=l9;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
sj0=l3;
sj1=-1ULL;
sj0+=sj1;
sj1=l3;
sj0&=sj1;
l3=sj0;
si0=l11;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L5;
}
}
}
si0=1U;
l9=si0;
goto L1;
L3:;
si0=l1;
si1=l10;
si2=1914816U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
l9=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}


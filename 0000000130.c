#include "w2c2_base.h"

#include "rustpython.h"

void f13030(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=56U;
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
sj1=-4958086748684780626ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5786366710083316220ULL;
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
si1=72U;
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

void f13031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=56U;
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
sj1=-4958086748684780626ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5786366710083316220ULL;
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
si1=148U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=l2;
si0=f8883(i,si0,si1);
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

void f13032(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f13033(i,si0,si1,si2,si3);
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

void f13033(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4958086748684780626ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5786366710083316220ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
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
goto L4;
}
goto L3;
L6:;
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
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L10;
}
si0=4U;
l11=si0;
goto L9;
L10:;
si0=l3;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
l9=si0;
L11:;
{
si0=l5;
si1=l8;
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
si0=l11;
si1=l8;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L11;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
L9:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l8=si0;
si0=l3;
si1=l3;
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
goto L3;
}
L4:;
si0=l3;
f5522(i,si0);
L3:;
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
goto L0;
L2:;
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13034(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f13035(i,si0,si1,si2,si3);
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

void f13035(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4958086748684780626ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5786366710083316220ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
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
goto L4;
}
goto L3;
L6:;
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
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L10;
}
si0=4U;
l11=si0;
goto L9;
L10:;
si0=l3;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
l9=si0;
L11:;
{
si0=l5;
si1=l8;
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
si0=l11;
si1=l8;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L11;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
L9:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l8=si0;
si0=l3;
si1=l3;
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
goto L3;
}
L4:;
si0=l3;
f5522(i,si0);
L3:;
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
goto L0;
L2:;
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13036(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f13037(i,si0,si1,si2,si3);
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

void f13037(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L7;
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
L8:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L6;
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
goto L8;
}
}
L7:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4958086748684780626ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5786366710083316220ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
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
goto L4;
}
goto L3;
L6:;
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
goto L4;
}
goto L3;
L5:;
si0=l3;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L10;
}
si0=4U;
l11=si0;
goto L9;
L10:;
si0=l3;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=0U;
l8=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=f15022(i,si0);
l11=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
l9=si0;
L11:;
{
si0=l5;
si1=l8;
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
si0=l11;
si1=l8;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L11;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
L9:;
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si0=f14167(i,si0,si1);
l8=si0;
si0=l3;
si1=l3;
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
goto L3;
}
L4:;
si0=l3;
f5522(i,si0);
L3:;
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
goto L0;
L2:;
si0=4U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f13038(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
if(si0){
goto L4;
}
si0=1U;
l5=si0;
goto L3;
L4:;
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
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l5;
si1=l1;
si2=l2;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=0U;
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=12U;
si0*=si1;
l3=si0;
L6:;
{
si0=l4;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L7;
}
si0=1U;
l5=si0;
goto L5;
L7:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l3;
si1=-12U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
f15024(i,si0);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L10:;
{
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L11:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L12:;
si0=l5;
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
return si0;
}

void f13039(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=72U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=l2;
f7957(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
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
si0=l5;
si1=l3;
si2=l2;
si0=f13040(i,si0,si1,si2);
l3=si0;
L1:;
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
L0:;
}

U32 f13040(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l4=si0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L10;
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
L11:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L9;
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
goto L11;
}
}
L10:;
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l6=si1;
si0=si0 == si1;
if(si0){
goto L12;
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
L13:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L9;
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
goto L13;
}
}
L12:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=255U;
l7=si0;
goto L7;
L9:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=17623824U;
si1=43U;
si2=17624496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l0;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l7=si0;
L7:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L15;
}
si0=255U;
l6=si0;
goto L14;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l6=si0;
L14:;
si0=l4;
si1=1272U;
si2=1276U;
si3=l6;
si4=l7;
si3|=si4;
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
si0=si0 != si1;
if(si0){
goto L5;
}
goto L1;
L6:;
si0=l3;
si1=l0;
si2=56U;
si1+=si2;
si2=l1;
si3=l2;
f8886(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
si0=f9908(i,si0,si1);
l7=si0;
goto L2;
L16:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
goto L2;
L5:;
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
f5522(i,si0);
goto L2;
L4:;
si0=17623824U;
si1=43U;
si2=17624480U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=17623824U;
si1=43U;
si2=17624480U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
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
goto L17;
}
si0=l0;
f5522(i,si0);
L17:;
si0=l3;
si1=48U;
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

void f13041(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f13042(i,si0,si1,si2,si3);
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

void f13042(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
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
f7984(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=108U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=76U;
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=56U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l4;
si3=104U;
si2+=si3;
si3=l2;
f13181(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
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
si0=0U;
l5=si0;
si0=l6;
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
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l5;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=132U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=68U;
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
sj1=0ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+112U,sj1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=104U;
si0+=si1;
si1=l7;
si2=0U;
si0=f5913(i,si0,si1,si2);
l5=si0;
L7:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si0=f5946(i,si0,si1,si2);
l5=si0;
goto L5;
L6:;
si0=1U;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
L5:;
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
goto L3;
}
si0=l3;
f5522(i,si0);
goto L3;
L4:;
si0=1U;
l2=si0;
si0=l3;
l5=si0;
L3:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=192U;
si0+=si1;
i->g0=si0;
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
}

void f13043(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=56U;
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
sj1=-4958086748684780626ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5786366710083316220ULL;
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
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=f8870(i,si0,si1);
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

U32 f13044(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l2;
if(si0){
goto L1;
}
si0=1U;
goto L0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=95U;
si0=si0 != si1;
L0:;
return si0;
}

void f13045(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
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
goto L2;
}
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
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si1=f13024(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13046(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l2=si1;
si2=1U;
si3=l2;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
sj1=l4;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13047(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f8669(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13048(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
f1140(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si0=f9908(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13049(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f8674(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13050(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f8676(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13051(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
l2=si1;
si2=1U;
si3=l2;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
sj1=l4;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13052(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 != si1;
if(si0){
goto L2;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si0=f13053(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f13053(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f11345(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=5U;
si0+=si1;
l3=si0;
si1=262U;
si0=si0 < si1;
if(si0){
goto L8;
}
L9:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l5=sj0;
si0=0U;
l1=si0;
goto L6;
L8:;
si0=l3;
si1=l0;
si2=1308U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1300U);
si1=l3;
si2=2U;
si1<<=(si2&31);
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
goto L5;
}
goto L1;
L10:;
si0=l3;
si1=l1;
si2=17637160U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=8U;
l7=si0;
si0=0U;
l3=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
l3=si0;
L11:;
si0=l7;
si1=l6;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l5=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l5;
sj0|=sj1;
l5=sj0;
si0=1U;
l1=si0;
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=l5;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l1=si0;
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
l1=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
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
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l0;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L12:;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=l1;
si0=f5991(i,si0,si1,si2);
l1=si0;
L5:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
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

void f13054(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
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
goto L2;
}
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
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si1=f13026(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13055(rustpythonInstance*i,U32 l0) {
L0:;
}

void f13056(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
F64 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
F64 sd0;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
f8636(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l2;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si0=l3;
sd0=f64_load(&i->m0,(U64)si0+16U);
l6=sd0;
si0=0U;
l2=si0;
si0=0U;
l1=si0;
si0=l5;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=28U;
si0+=si1;
si1=l4;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L5:;
sd0=l6;
si1=l5;
si2=l1;
si0=f5926(i,sd0,si1,si2);
l1=si0;
goto L3;
L4:;
si0=1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
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
f14795(i);
UNREACHABLE;
L0:;
}

void f13057(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
l8=si0;
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
L4:;
si0=l7;
si1=1304U;
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
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=0U;
si1=l1;
si2=56U;
si1+=si2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l7;
si1=1280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=0U;
si1=l2;
sj2=l9;
sj3=0ULL;
si2=sj2 != sj3;
si0=si2?si0:si1;
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
l2=si0;
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l3;
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
si0=l5;
si1=8U;
si0+=si1;
si1=l8;
si2=l7;
si3=l3;
si4=l4;
f8686(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
goto L2;
L5:;
si0=l2;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l10=si0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l2=si1;
si0=si0 == si1;
if(si0){
goto L8;
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
l2=si0;
L9:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l5;
si1=l8;
si2=l7;
si3=56U;
si2+=si3;
si3=l4;
f8687(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L6;
L7:;
si0=l10;
si1=1304U;
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
l6=si0;
si0=l2;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L6:;
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
goto L2;
}
si0=l7;
f5522(i,si0);
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
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

void f13058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f8689(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13059(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
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
l3=si0;
i->g0=si0;
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
if(si0){
goto L7;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L6;
}
L7:;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l5;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
goto L4;
L6:;
si0=l3;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1217880U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1217872U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1217864U);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L5:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=8U;
l1=si0;
si0=0U;
l5=si0;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=(U32)(sj0);
l9=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
l5=si0;
L8:;
si0=l1;
si1=l7;
si2=l5;
si0=f15143(i,si0,si1,si2);
sj0=l4;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l8;
sj0|=sj1;
l4=sj0;
si0=1U;
l5=si0;
L4:;
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l6;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+24U,si1);
L3:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=l3;
si3=8U;
si2+=si3;
si1=f9908(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13060(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
f1136(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si0=f9908(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13061(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
if(si0){
goto L4;
}
si0=l1;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l1=si0;
goto L3;
L4:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=8U;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
l7=si0;
L5:;
si0=l6;
si1=l5;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l4=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l4;
sj0|=sj1;
l4=sj0;
si0=1U;
l1=si0;
L3:;
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=l3;
si3=8U;
si2+=si3;
si1=f9908(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13062(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f8695(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13063(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f1148(i,si0,si1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si2=l3;
si3=8U;
si2+=si3;
si1=f9908(i,si1,si2);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13064(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=0U;
l3=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si1=!(sj1);
si0&=si1;
l3=si0;
L1:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+1U,si1);
L0:;
}

void f13065(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
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
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
si3=l3;
f8700(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13066(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=1304U;
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
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L2:;
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
si2=l2;
si3=56U;
si2+=si3;
f951(i,si0,si1,si2);
si0=1U;
l5=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
si1=l2;
si2=72U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=0U;
si1=si1 != si2;
si0^=si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
si1=!(sj1);
si0&=si1;
l5=si0;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si0=f9908(i,si0,si1);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13067(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
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
goto L2;
}
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
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si1=f13040(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f13068(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L2:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L3:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L4:;
L0:;
}

void f13069(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L2;
default:
goto L5;
}
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
l3=si0;
L7:;
{
si0=l3;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
f15024(i,si0);
L8:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13070(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
l3=si0;
L10:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
f15024(i,si0);
L11:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
l3=si0;
L13:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L14:;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
l3=si0;
L16:;
{
si0=l3;
f8277(i,si0);
si0=l3;
si1=92U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
f13070(i,si0);
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f13070(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-11U;
si0+=si1;
l2=si0;
si1=19U;
si2=l2;
si3=27U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L29;
case 2:
goto L28;
case 3:
goto L27;
case 4:
goto L26;
case 5:
goto L25;
case 6:
goto L24;
case 7:
goto L23;
case 8:
goto L22;
case 9:
goto L21;
case 10:
goto L20;
case 11:
goto L19;
case 12:
goto L18;
case 13:
goto L17;
case 14:
goto L16;
case 15:
goto L15;
case 16:
goto L14;
case 17:
goto L13;
case 18:
goto L12;
case 19:
goto L11;
case 20:
goto L10;
case 21:
goto L9;
case 22:
goto L8;
case 23:
goto L7;
case 24:
goto L6;
case 25:
goto L5;
default:
goto L31;
}
L31:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
f13070(i,si0);
si0=l2;
f15024(i,si0);
L32:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
f13070(i,si0);
si0=l2;
f15024(i,si0);
L33:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L30:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l3;
l2=si0;
L35:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L29:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L28:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L27:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L26:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f8349(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L36:;
si0=l2;
si1=12U;
si0+=si1;
l1=si0;
f8349(i,si0);
si0=l2;
si1=16U;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=28U;
si0+=si1;
f13071(i,si0);
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l3;
f15024(i,si0);
L41:;
si0=l1;
f15024(i,si0);
L38:;
si0=l2;
si1=24U;
si0+=si1;
l1=si0;
f8349(i,si0);
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L42:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L44:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
si1=28U;
si0+=si1;
f13071(i,si0);
L45:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
f15024(i,si0);
L46:;
si0=l1;
f15024(i,si0);
L43:;
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L25:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L24:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
l2=si0;
L48:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l2;
f8275(i,si0);
L49:;
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L48;
}
}
L47:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l3;
f15024(i,si0);
L50:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
l2=si0;
L52:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L52;
}
}
L51:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L23:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l3;
l2=si0;
L54:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L54;
}
}
L53:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L22:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L55;
}
si0=0U;
l6=si0;
L56:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L57;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L58:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L58;
}
}
L57:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L59:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L56;
}
}
L55:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L21:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=0U;
l6=si0;
L61:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L63:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L64;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L64:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L61;
}
}
L60:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L20:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=0U;
l6=si0;
L66:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L68:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L68;
}
}
L67:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L69;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L69:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L66;
}
}
L65:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L19:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l6=si0;
L71:;
{
si0=l4;
si1=l6;
si2=7U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
f8275(i,si0);
si0=l3;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+112U);
l2=si0;
L73:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l3;
si1=112U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L74;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L74:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L71;
}
}
L70:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
goto L0;
L18:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L17:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L16:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L75:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L76;
}
si0=l3;
l2=si0;
L77:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L77;
}
}
L76:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L78;
}
si0=l3;
l2=si0;
L79:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L79;
}
}
L78:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L80;
}
si0=l3;
f15024(i,si0);
L80:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l6;
l2=si0;
L82:;
{
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L83;
}
si0=l3;
f15024(i,si0);
L83:;
si0=l2;
f8275(i,si0);
si0=l2;
si1=88U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L82;
}
}
L81:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L12:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l3;
l2=si0;
L85:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L85;
}
}
L84:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L11:;
si0=l1;
si1=-2U;
si0+=si1;
l2=si0;
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L89;
case 1:
goto L88;
case 2:
goto L87;
case 3:
goto L86;
default:
goto L2;
}
L89:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L88:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
goto L4;
L87:;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L2;
L86:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l3;
l2=si0;
L91:;
{
si0=l2;
f8276(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L91;
}
}
L90:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
goto L2;
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
f13070(i,si0);
si0=l2;
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L92;
}
si0=l3;
l2=si0;
L93:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L93;
}
}
L92:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L94;
}
si0=l3;
l2=si0;
L95:;
{
si0=l2;
f8275(i,si0);
si0=l2;
si1=56U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L95;
}
}
L94:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
goto L1;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L3:;
si0=l3;
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f13071(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f13070(i,si0);
si0=l0;
f15024(i,si0);
L0:;
}

void f13072(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
case 4:
goto L5;
case 5:
goto L4;
case 6:
goto L3;
default:
goto L10;
}
L10:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
l3=si0;
L12:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
goto L0;
L9:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13070(i,si0);
si0=l3;
f15024(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=-2U;
si0+=si1;
l3=si0;
si1=4U;
si2=l3;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
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
default:
goto L2;
}
L16:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L15:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L14:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L13:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
l3=si0;
L18:;
{
si0=l3;
f8276(i,si0);
si0=l3;
si1=24U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
l3=si0;
L20:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
l3=si0;
L22:;
{
si0=l3;
f8275(i,si0);
si0=l3;
si1=56U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
f15024(i,si0);
L23:;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
l3=si0;
L25:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L25;
}
}
L24:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
f15024(i,si0);
L26:;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
f13070(i,si0);
si0=l3;
f15024(i,si0);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
l3=si0;
L28:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
f15024(i,si0);
L29:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
l3=si0;
L31:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L32:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
f15024(i,si0);
L33:;
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
l3=si0;
L35:;
{
si0=l3;
f8280(i,si0);
si0=l3;
si1=64U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15024(i,si0);
goto L0;
L4:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15024(i,si0);
goto L0;
L3:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
f13072(i,si0);
si0=l3;
f15024(i,si0);
L36:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15024(i,si0);
L2:;
goto L0;
L1:;
si0=l1;
f15024(i,si0);
L0:;
}

void f13073(rustpythonInstance*i,U32 l0) {
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
f5522(i,si0);
L1:;
L0:;
}

U32 f13074(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
si0=-1U;
l3=si0;
si0=l1;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=3U;
si0&=si1;
if(si0){
goto L1;
}
si0=-1U;
si1=l4;
si2=l0;
si1+=si2;
si2=0U;
si3=l1;
si2-=si3;
si1&=si2;
si2=l0;
si1-=si2;
si2=2U;
si1>>=(si2&31);
si2=l0;
si3=3U;
si2&=si3;
si0=si2?si0:si1;
goto L0;
L1:;
si0=-1U;
si1=l1;
si1=I32_CTZ(si1);
l5=si1;
si2=2U;
si3=l5;
si4=2U;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si0<<=(si1&31);
si1=-1U;
si0^=si1;
si1=l0;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
sj1=1082274622760356609ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l5;
si0>>=(si1&31);
l3=si0;
si1=l4;
si2=l0;
si1&=si2;
si2=l5;
si1>>=(si2&31);
si0-=si1;
l6=si0;
si0=l3;
si1=-1U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=4U;
si1&=si2;
si2=l5;
si1>>=(si2&31);
l4=si1;
si2=1U;
si1>>=(si2&31);
si0|=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=2U;
si1=l4;
si2=l1;
si1*=si2;
si0-=si1;
si1=l1;
si0*=si1;
l1=si0;
si0=l3;
si1=257U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=2U;
si1=l1;
si2=l4;
si1*=si2;
si0-=si1;
si1=l1;
si0*=si1;
l1=si0;
si0=l3;
si1=65537U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=2U;
si1=l1;
si2=l4;
si1*=si2;
si0-=si1;
si1=l1;
si0*=si1;
l1=si0;
L3:;
si0=l1;
si1=l0;
si0&=si1;
si1=l6;
si0*=si1;
si1=l0;
si0&=si1;
l3=si0;
L2:;
si0=l3;
L0:;
return si0;
}

void f13075(rustpythonInstance*i,U32 l0) {
L0:;
}

void f13076(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
f8349(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
si0=l0;
si1=12U;
si0+=si1;
l1=si0;
f8349(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f13070(i,si0);
si0=l2;
f15024(i,si0);
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f15024(i,si0);
L6:;
si0=l1;
f15024(i,si0);
L3:;
si0=l0;
si1=24U;
si0+=si1;
l1=si0;
f8349(i,si0);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
f13070(i,si0);
si0=l2;
f15024(i,si0);
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
f15024(i,si0);
L11:;
si0=l1;
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f13077(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f13070(i,si0);
si0=l1;
f15024(i,si0);
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=36U;
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
f15024(i,si0);
L1:;
L0:;
}

void f13078(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f13070(i,si0);
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f13079(rustpythonInstance*i,U32 l0) {
L0:;
}

void f13080(rustpythonInstance*i,U32 l0) {
L0:;
}

void f13081(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
L0:;
}

void f13082(rustpythonInstance*i,U32 l0) {
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

void f13083(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-5U;
si0+=si1;
l2=si0;
si1=3U;
si2=l2;
si3=5U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L1;
case 2:
goto L1;
case 3:
goto L3;
default:
goto L4;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
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
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
goto L2;
L3:;
si0=l1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
default:
goto L5;
}
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
goto L6;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
l2=si0;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
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
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
L0:;
}

void f13084(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L2:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L3:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L4:;
si0=l0;
si1=12U;
si0+=si1;
l2=si0;
f8347(i,si0);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
L0:;
}

void f13085(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=4U;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
default:
goto L1;
}
L6:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L2;
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L2;
L4:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
l2=si0;
L8:;
{
si0=l2;
f8276(i,si0);
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l3;
f15024(i,si0);
L1:;
L0:;
}

void f13086(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
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
switch(si0){
case 0:
goto L1;
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
goto L7;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L6;
case 11:
goto L1;
case 12:
goto L5;
case 13:
goto L1;
case 14:
goto L1;
default:
goto L8;
}
L8:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L7:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L6:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L5:;
si0=l0;
si1=8U;
si0+=si1;
f13087(i,si0);
goto L1;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L10;
default:
goto L1;
}
L12:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
goto L9;
L11:;
si0=l1;
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
goto L9;
L10:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=-2U;
si0+=si1;
l2=si0;
si1=1U;
si2=l2;
si3=97U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L13;
case 3:
goto L13;
case 4:
goto L15;
default:
goto L13;
}
L17:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L14;
}
goto L13;
L16:;
si0=l1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
goto L14;
L15:;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L13:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15024(i,si0);
goto L0;
L1:;
L0:;
}

void f13087(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1114115U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
f13086(i,si0);
si0=l0;
f15024(i,si0);
L1:;
L0:;
}

void f13088(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=24U;
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
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L2:;
L0:;
}

void f13089(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f8347(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L1:;
L0:;
}

void f13090(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L1;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=4U;
si0+=si1;
l0=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
si1=4U;
si0+=si1;
l0=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L1:;
L0:;
}

void f13091(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
l3=si0;
L2:;
{
si0=l3;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L3:;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
f15024(i,si0);
L4:;
L0:;
}

void f13092(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L3;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f13092(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
l3=si0;
goto L1;
L4:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
if(si0){
goto L1;
}
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=24U;
si0+=si1;
l8=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
l9=si1;
si2=-1U;
si1+=si2;
l5=si1;
si0+=si1;
l10=si0;
si0=l6;
si1=l4;
si0+=si1;
l11=si0;
si0=l9;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
L9:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l11;
si3=l3;
si4=l4;
si3-=si4;
f682(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l4;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si1=l5;
si0-=si1;
l12=si0;
si1=l9;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l6;
si1=l12;
si0+=si1;
si1=l8;
si2=l9;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L10;
}
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l3=si0;
si0=l1;
si1=l12;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l13;
si0-=si1;
l4=si0;
goto L5;
L10:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L9;
}
goto L6;
}
L8:;
L11:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l11;
si3=l3;
si4=l4;
si3-=si4;
f682(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l4;
si0+=si1;
l3=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l5;
si0-=si1;
l13=si0;
si1=l9;
si0+=si1;
l12=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l12;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L12;
}
L13:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L11;
}
goto L6;
L12:;
}
si0=l9;
si1=4U;
si2=17623808U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
L6:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l13=si1;
si0-=si1;
l4=si0;
L5:;
si0=l6;
si1=l13;
si0+=si1;
l3=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13093(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=38U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=0U;
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=56U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
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
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l2=si0;
L2:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=8U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f13094(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si0=f677(i,si0,si1,si2);
L0:;
return si0;
}

U32 f13095(rustpythonInstance*i,U32 l0,U32 l1) {
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
f8715(i,si0,si1);
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
f8716(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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

U32 f13096(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f8716(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

void f13097(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
default:
goto L5;
}
L7:;
si0=l2;
if(si0){
goto L5;
}
si0=1U;
l3=si0;
si0=0U;
l1=si0;
si0=17623384U;
l2=si0;
goto L3;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=l0;
si1=l1;
f64(i,si0,si1);
goto L0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L8;
}
si0=1U;
l3=si0;
si0=0U;
l1=si0;
goto L3;
L8:;
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
L3:;
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

U32 f13098(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f13099(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=1U;
l4=si0;
si0=1U;
l5=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
L4:;
si0=l5;
si1=l2;
si2=l6;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l4;
si1=l5;
si2=l6;
si0=f15143(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=30U;
si0+=si1;
si1=l1;
si2=30U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
si1=i32_load16_u(&i->m0,(U64)si1);
i32_store16(&i->m0,(U64)si0,si1);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f13100(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
F64 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L17;
case 2:
goto L16;
case 3:
goto L15;
case 4:
goto L8;
case 5:
goto L14;
case 6:
goto L13;
case 7:
goto L12;
case 8:
goto L11;
case 9:
goto L10;
default:
goto L9;
}
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l0=si0;
si1=l0;
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
goto L7;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+8U);
l5=sd0;
si0=0U;
l1=si0;
si0=l0;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
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
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L18:;
sd0=l5;
si1=l0;
si2=l1;
si0=f5926(i,sd0,si1,si2);
l1=si0;
goto L1;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
l0=si0;
si1=l0;
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
goto L7;
}
si0=l1;
si1=16U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l5=sd0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+8U);
l7=sd0;
si0=0U;
l1=si0;
si0=l0;
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
l1=si0;
si0=!(si0);
if(si0){
goto L6;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
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
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L19:;
sd0=l7;
sd1=l5;
si2=l0;
si3=l1;
si0=f6004(i,sd0,sd1,si2,si3);
l1=si0;
goto L1;
L15:;
si0=l3;
si1=1264U;
si2=1268U;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+1U);
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=1U;
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L4;
}
L20:;
si0=l0;
si1=l4;
si2=l1;
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l0;
si2=0U;
si0=f5916(i,si0,si1,si2);
l1=si0;
goto L1;
L13:;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l0;
f8898(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
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
goto L7;
}
si0=l2;
si1=l1;
si2=0U;
si0=f5946(i,si0,si1,si2);
l1=si0;
goto L1;
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L22;
}
si0=4U;
l6=si0;
goto L21;
L22:;
si0=l8;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=0U;
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
l4=si0;
L23:;
{
si0=l2;
si1=l9;
si2=l1;
si1+=si2;
f13120(i,si0,si1);
si0=l6;
si1=l1;
si0+=si1;
si1=l0;
si2=l2;
si1=f13100(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L23;
}
}
L21:;
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si0=f14167(i,si0,si1);
l1=si0;
goto L1;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L7;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+1292U);
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
goto L7;
L9:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=f13053(i,si0,si1);
l1=si0;
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=21U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l2;
si1=l0;
si2=l1;
f8911(i,si0,si1,si2);
si0=l3;
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
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si2=0U;
si0=f5980(i,si0,si1,si2);
l1=si0;
goto L1;
L24:;
si0=l3;
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
goto L7;
}
si0=l3;
si1=1208U;
si0+=si1;
si1=l0;
si2=l1;
si3=l4;
si0=f9632(i,si0,si1,si2,si3);
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
L7:;
f14795(i);
UNREACHABLE;
L6:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f13101(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f11345(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=5U;
si0+=si1;
l3=si0;
si1=262U;
si0=si0 < si1;
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=16U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=72U;
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
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+52U,sj1);
si0=l2;
si1=l1;
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
goto L2;
}
si0=l2;
si1=44U;
si0+=si1;
si1=l0;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L7:;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=l1;
si0=f5991(i,si0,si1,si2);
l3=si0;
goto L4;
L5:;
si0=l3;
si1=l0;
si2=1308U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1300U);
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
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
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L4:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L3:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=l3;
si1=l5;
si2=17637144U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f13102(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+48U);
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
si0=si0 != si1;
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l1;
si1=l0;
si2=0U;
si0=f5946(i,si0,si1,si2);
L0:;
return si0;
}

void f13103(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
l3=si0;
goto L3;
L5:;
si0=l3;
si1=l1;
si0-=si1;
l5=si0;
si0=l1;
si1=12U;
si0*=si1;
si1=l4;
si0+=si1;
si1=4U;
si0+=si1;
l4=si0;
L6:;
{
si0=l4;
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
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L4:;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L3:;
si0=l3;
if(si0){
goto L9;
}
si0=0U;
l7=si0;
goto L8;
L9:;
si0=l3;
l7=si0;
si0=l0;
l5=si0;
L10:;
{
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
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
goto L1;
}
si0=l4;
si1=4U;
si0+=si1;
l8=si0;
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
goto L11;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L11:;
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L10;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0-=si1;
si1=l1;
si2=l3;
si1-=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l2;
si1=l7;
si2=l9;
f8742(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
goto L13;
L14:;
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L12;
}
L13:;
si0=l0;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l0=si0;
si0=0U;
l4=si0;
L15:;
{
si0=l1;
si1=l4;
si0+=si1;
l6=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=l4;
si0+=si1;
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=8U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=4U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L15;
}
}
L12:;
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L2:;
si0=17623384U;
si1=35U;
si2=17623496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13104(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
l4=si0;
goto L1;
L3:;
si0=l4;
si1=l1;
si0-=si1;
l6=si0;
si0=l1;
si1=5U;
si0<<=(si1&31);
si1=l5;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
L4:;
{
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L4;
}
}
si0=l1;
l4=si0;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
l8=si0;
si0=0U;
l9=si0;
L10:;
{
si0=l5;
si1=l9;
si0+=si1;
l7=si0;
si1=l0;
si2=l9;
si1+=si2;
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=12U;
si0+=si1;
l10=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l12=si0;
si0=l7;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l7;
si1=4U;
si0+=si1;
si1=0U;
si2=l13;
f50(i,si0,si1,si2);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
L11:;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l12;
si0+=si1;
si1=l11;
si2=l13;
si0=f15143(i,si0,si1,si2);
si0=l10;
si1=l12;
si2=l13;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l6;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
if(si0){
goto L13;
}
si0=1U;
l10=si0;
goto L12;
L13:;
si0=l12;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l12;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L7;
}
L12:;
si0=l10;
si1=l13;
si2=l12;
si0=f15143(i,si0,si1,si2);
l13=si0;
si0=l6;
si1=28U;
si0+=si1;
si0=i32_load16_u(&i->m0,(U64)si0);
l10=si0;
si0=l6;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l7;
si1=20U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L14:;
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=30U;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=28U;
si0+=si1;
si1=l10;
i32_store16(&i->m0,(U64)si0,si1);
si0=l7;
si1=24U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0-=si1;
si1=l1;
si2=l4;
si1-=si2;
l12=si1;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l2;
si1=l4;
si2=l12;
f8744(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
goto L16;
L17:;
si0=l4;
l7=si0;
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L15;
}
L16:;
si0=l0;
si1=l4;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l7;
si1=l1;
si0+=si1;
si1=l4;
si0-=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L18:;
{
si0=l3;
si1=l6;
f13099(i,si0,si1);
si0=l7;
si1=24U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L18;
}
}
L15:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=1U;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f13105(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
l5=si0;
goto L3;
L5:;
si0=l5;
si1=l1;
si0-=si1;
l7=si0;
si0=l6;
si1=l1;
si2=20U;
si1*=si2;
si0+=si1;
l8=si0;
L6:;
{
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l8;
si1=12U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
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
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L8:;
si0=l8;
si1=20U;
si0+=si1;
l8=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L4:;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L3:;
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l8=si0;
goto L9;
L10:;
si0=l5;
l11=si0;
si0=0U;
l7=si0;
L11:;
{
si0=l6;
si1=l7;
si0+=si1;
l8=si0;
si1=16U;
si0+=si1;
si1=l0;
si2=l7;
si1+=si2;
l10=si1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=8U;
si0+=si1;
l12=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=0U;
l9=si0;
si0=l8;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l8;
si1=0U;
si2=l14;
f50(i,si0,si1,si2);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L12:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si0+=si1;
si1=l13;
si2=l14;
si0=f15143(i,si0,si1,si2);
si0=l12;
si1=l9;
si2=l14;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si1=l10;
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
si0=l8;
si1=12U;
si0+=si1;
l8=si0;
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
goto L13;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L13:;
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=20U;
si0+=si1;
l7=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L11;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si0-=si1;
si1=l1;
si2=l5;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l2;
si1=l8;
si2=l7;
f8749(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L14:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
si1=l0;
si2=l1;
si3=20U;
si2*=si3;
si1+=si2;
si2=l3;
si3=4U;
si2+=si3;
f8522(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=17623384U;
si1=35U;
si2=17623496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f13106(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=17623512U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
l1=si3;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=1102474U;
si2=7U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

U32 f13107(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l0;
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
si2=-4U;
si1+=si2;
si2=l5;
si3=l1;
si4=l2;
si3-=si4;
si4=1U;
si5=l4;
si6=24U;
si5+=si6;
f10790(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
l3=si0;
goto L1;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=0U;
l3=si0;
si0=l4;
si1=28U;
si0+=si1;
si1=l5;
si2=l0;
si3=l2;
si4=0U;
si5=l4;
si6=24U;
si5+=si6;
f10792(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
l3=si0;
goto L1;
L11:;
si0=0U;
si1=0U;
si2=17623672U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l7;
si0-=si1;
l8=si0;
si1=l6;
si0+=si1;
l9=si0;
si1=l1;
si2=l7;
si1-=si2;
l3=si1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l8;
si1=l6;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=0U;
l3=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=0U;
f8720(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l10;
si2=l8;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l4;
si1=48U;
si0+=si1;
l6=si0;
si0=0U;
l0=si0;
si0=0U;
l2=si0;
L14:;
{
si0=l2;
si1=l0;
si0|=si1;
si1=7U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=l8;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=l2;
si4=l8;
si3-=si4;
si4=0U;
si5=l6;
f10790(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
l3=si0;
goto L6;
L20:;
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+48U);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+36U);
si4=l4;
si4=i32_load(&i->m0,(U64)si4+56U);
si5=2U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si4=i32_load(&i->m0,(U64)si4+28U);
si5=l8;
si6=2U;
si5<<=(si6&31);
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f10433(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
goto L6;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l2;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=l2;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l0=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l1=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=l5;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+36U);
si3=l1;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=l0;
si4=l1;
si3-=si4;
si4=0U;
si5=l6;
f10792(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
l3=si0;
goto L6;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l0;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l0;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l0;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L15;
L18:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
si1=255U;
si0&=si1;
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=0U;
l2=si0;
goto L22;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=0U;
l0=si0;
L22:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
goto L15;
L17:;
si0=17623384U;
si1=35U;
si2=17623624U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=17623384U;
si1=35U;
si2=17623640U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 < si1;
if(si0){
goto L14;
}
goto L5;
}
L13:;
si0=l9;
si1=l3;
si2=17623704U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l7;
si1=l1;
si2=17623688U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=17623384U;
si1=35U;
si2=17623656U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=0U;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
f8720(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si2=l6;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l13=si0;
si0=l4;
si1=l6;
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l8;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l9;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=36U;
si0+=si1;
l9=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L27;
}
si0=l1;
si1=l5;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L27;
}
si0=l2;
si1=l6;
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-4U;
si0+=si1;
l2=si0;
si0=l11;
si1=4U;
si0+=si1;
l8=si0;
L28:;
{
si0=l4;
si1=72U;
si0+=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si2=i32_load(&i->m0,(U64)si2);
si3=l10;
si4=l1;
si5=2U;
si4<<=(si5&31);
si3+=si4;
l0=si3;
si3=i32_load(&i->m0,(U64)si3);
si4=l13;
si5=l7;
si6=2U;
si5<<=(si6&31);
si4+=si5;
l6=si4;
si4=i32_load(&i->m0,(U64)si4);
f10433(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
si1=255U;
si0&=si1;
if(si0){
goto L30;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l4;
si1=l7;
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L29;
L30:;
si0=l4;
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L29:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L27;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l1;
si1=l5;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L28;
}
}
L27:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
goto L25;
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
L25:;
si0=l10;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=2U;
si1<<=(si2&31);
l2=si1;
si0-=si1;
si1=l13;
si2=l2;
si3=4U;
si2+=si3;
si0=f15143(i,si0,si1,si2);
L24:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l9;
f8330(i,si0);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l13;
f15024(i,si0);
goto L1;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l1;
si3=l2;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L2;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
goto L3;
L4:;
si0=0U;
l2=si0;
si0=0U;
l1=si0;
L3:;
si0=l8;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l8;
si3=l2;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L2:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=36U;
si0+=si1;
f8330(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f13108(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l0;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
si2=-8U;
si1+=si2;
si2=l5;
si3=l1;
si4=l2;
si3-=si4;
si4=1U;
si5=l4;
si6=24U;
si5+=si6;
f10788(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
l3=si0;
goto L1;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=0U;
l3=si0;
si0=l4;
si1=28U;
si0+=si1;
si1=l5;
si2=l0;
si3=l2;
si4=0U;
si5=l4;
si6=24U;
si5+=si6;
f10793(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
l3=si0;
goto L1;
L11:;
si0=0U;
si1=0U;
si2=17623672U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l7;
si0-=si1;
l8=si0;
si1=l6;
si0+=si1;
l9=si0;
si1=l1;
si2=l7;
si1-=si2;
l3=si1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l8;
si1=l6;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=0U;
l3=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l8;
si2=0U;
f8722(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l10;
si2=l8;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l4;
si1=48U;
si0+=si1;
l6=si0;
si0=0U;
l0=si0;
si0=0U;
l2=si0;
L14:;
{
si0=l2;
si1=l0;
si0|=si1;
si1=7U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=l8;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l2;
si4=l8;
si3-=si4;
si4=0U;
si5=l6;
f10788(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
l3=si0;
goto L6;
L20:;
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+48U);
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si3=i32_load(&i->m0,(U64)si3+36U);
si4=l4;
si4=i32_load(&i->m0,(U64)si4+56U);
si5=3U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l4;
si4=i32_load(&i->m0,(U64)si4+28U);
si5=l8;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si4=i32_load(&i->m0,(U64)si4+4U);
f10433(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
goto L6;
L19:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l2;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=l2;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l0=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l1=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+36U);
si3=l1;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l0;
si4=l1;
si3-=si4;
si4=0U;
si5=l6;
f10793(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
l3=si0;
goto L6;
L21:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l0;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=l0;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=l0;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L15;
L18:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
si1=255U;
si0&=si1;
if(si0){
goto L23;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+56U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=0U;
l2=si0;
goto L22;
L23:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+64U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=0U;
l0=si0;
L22:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+68U,si1);
goto L15;
L17:;
si0=17623384U;
si1=35U;
si2=17623624U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=17623384U;
si1=35U;
si2=17623640U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+64U);
l8=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+52U);
si0=si0 < si1;
if(si0){
goto L14;
}
goto L5;
}
L13:;
si0=l9;
si1=l3;
si2=17623704U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l7;
si1=l1;
si2=17623688U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=17623384U;
si1=35U;
si2=17623656U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=0U;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=0U;
f8722(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l5;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l13=si0;
si0=l4;
si1=l6;
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l8;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l11;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l12;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l13;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l10;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l9;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=36U;
si0+=si1;
l8=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L27;
}
si0=l1;
si1=l5;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L27;
}
si0=l2;
si1=l6;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l2=si0;
L28:;
{
si0=l4;
si1=72U;
si0+=si1;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l10;
si4=l1;
si5=3U;
si4<<=(si5&31);
si3+=si4;
l0=si3;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l13;
si5=l7;
si6=3U;
si5<<=(si6&31);
si4+=si5;
l6=si4;
si4=i32_load(&i->m0,(U64)si4+4U);
f10433(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L26;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+73U);
si1=255U;
si0&=si1;
if(si0){
goto L30;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l4;
si1=l7;
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
goto L29;
L30:;
si0=l4;
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
L29:;
si0=l2;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L27;
}
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
si1=l5;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L28;
}
}
L27:;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
goto L25;
L26:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L24;
}
L25:;
si0=l10;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0-=si1;
si1=l13;
si2=l2;
si3=8U;
si2+=si3;
si0=f15143(i,si0,si1,si2);
L24:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l8;
f8342(i,si0);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l13;
f15024(i,si0);
goto L1;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+56U);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+68U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l1;
si3=l2;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L2;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+56U);
l2=si0;
goto L3;
L4:;
si0=0U;
l2=si0;
si0=0U;
l1=si0;
L3:;
si0=l8;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l8;
si3=l2;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L2:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=36U;
si0+=si1;
f8342(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
f15024(i,si0);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f13109(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=18657636U;
si0=f7755(i,si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18657632U);
l2=si0;
if(si0){
goto L1;
}
si0=l1;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
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
si1=64U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l2=si0;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l5=si0;
if(si0){
goto L2;
}
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=17359512U;
si1=30U;
si2=l1;
si3=76U;
si2+=si3;
si3=17359544U;
si4=17359664U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18657632U);
l2=si1;
si2=l5;
si3=l2;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18657632U,si1);
si0=l2;
if(si0){
goto L4;
}
si0=l5;
l2=si0;
goto L1;
L4:;
si0=l5;
f15024(i,si0);
L1:;
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=l2;
si3=32U;
si2+=si3;
si3=l4;
si4=l3;
si4=i32_load(&i->m0,(U64)si4+12U);
si3=TF(i->t0,si4,U32 (*)(rustpythonInstance*,U32))(i,si3);
f37(i,si0,si1,si2,si3);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17623720U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13110(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
sj0=f13755(i,si0,si1);
l3=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l4=sj0;
sj0=l3;
si0=(U32)(sj0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l10=si0;
L1:;
{
si0=l9;
si1=l5;
si2=l8;
si1&=si2;
l11=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l4;
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
goto L2;
}
L4:;
{
si0=l9;
sj1=l13;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l11;
si1+=si2;
si2=l8;
si1&=si2;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l5=si0;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=l6;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
L5:;
sj0=l13;
sj1=-1ULL;
sj0+=sj1;
sj1=l13;
sj0&=sj1;
l13=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
goto L4;
}
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
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
goto L6;
}
si0=l11;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l5=si0;
goto L1;
L6:;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L7;
}
si0=l1;
si1=1U;
si2=l1;
si3=16U;
si2+=si3;
si0=f12264(i,si0,si1,si2);
L7:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f13111(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l1;
si2=l2;
f13750(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l4=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l4;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l4;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l4;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l4;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l4;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l4;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
sj0*=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l4;
sj3=-1ULL;
sj2^=sj3;
sj1*=sj2;
l4=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l4;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l4;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l4;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l4;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l4;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l4;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0^=sj1;
sj1=l5;
sj0=I64_ROTL(sj0,sj1);
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
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-20U;
si0+=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l8;
si1=l7;
si2=l10;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=l6;
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
goto L4;
}
L6:;
{
si0=l9;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l7;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=1U;
l2=si0;
goto L1;
L4:;
sj0=l4;
sj1=l4;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=0U;
l2=si0;
goto L1;
L8:;
si0=l7;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l7=si0;
goto L3;
}
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f13112(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L2;
}
si0=0U;
l0=si0;
goto L1;
L2:;
si0=l3;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l1;
si2=l2;
f13750(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l4=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l4;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l4;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l4;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l4;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l4;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l4;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
sj0*=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l4;
sj3=-1ULL;
sj2^=sj3;
sj1*=sj2;
l4=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l4;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l4;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l4;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l4;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l4;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l4;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0^=sj1;
sj1=l5;
sj0=I64_ROTL(sj0,sj1);
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
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-20U;
si0+=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l8;
si1=l7;
si2=l10;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=l6;
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
goto L4;
}
L6:;
{
si0=l9;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l7;
si2+=si3;
si3=l10;
si2&=si3;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l0=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l12;
si1=si3?si1:si2;
si2=l2;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=1U;
l0=si0;
goto L1;
L4:;
sj0=l4;
sj1=l4;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=0U;
l0=si0;
goto L1;
L8:;
si0=l7;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l7=si0;
goto L3;
}
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f13113(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l2;
si2=l3;
f13750(i,si0,si1,si2);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l6=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l6;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l6;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l6;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l6;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l6;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
l7=sj1;
sj0*=sj1;
sj1=l7;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l7;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l7;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l7;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l7;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l7;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l7;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l7;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj3=-1ULL;
sj2^=sj3;
sj1*=sj2;
l6=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l6;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l6;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l6;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l6;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l6;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l6;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l6;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0^=sj1;
sj1=l7;
sj0=I64_ROTL(sj0,sj1);
l7=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=l1;
si3=16U;
si2+=si3;
si0=f12267(i,si0,si1,si2);
L1:;
sj0=l7;
sj1=25ULL;
sj0>>=(sj1&63);
l8=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l9=sj0;
sj0=l7;
si0=(U32)(sj0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=0U;
l13=si0;
si0=0U;
l14=si0;
L3:;
{
si0=l12;
si1=l10;
si2=l11;
si1&=si2;
l15=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=l9;
sj0^=sj1;
l7=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l7;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
L6:;
{
si0=l12;
si1=0U;
sj2=l7;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l15;
si2+=si3;
si3=l11;
si2&=si3;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l10=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=l10;
si2=-20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
sj0=l7;
sj1=-1ULL;
sj0+=sj1;
sj1=l7;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si2=-20U;
si1+=si2;
l3=si1;
si2=16U;
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
si0=l10;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
sj0=l6;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
si0=1U;
l16=si0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
l16=si0;
sj0=l7;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l15;
si0+=si1;
si1=l11;
si0&=si1;
l17=si0;
L8:;
sj0=l7;
sj1=l6;
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
l10=si0;
si0=l16;
l14=si0;
goto L3;
L9:;
}
si0=l12;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l10=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l12;
si1=l12;
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
l10=si0;
L10:;
si0=l12;
si1=l17;
si0+=si1;
sj1=l8;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l15=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l17;
si1=-8U;
si0+=si1;
si1=l11;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l15;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l10;
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
si1=2U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l12;
si1=0U;
si2=l17;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
si1=-20U;
si0+=si1;
l10=si0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=4U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13114(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=68U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f13750(i,si0,si1,si2);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+24U);
l3=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l3;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l3;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l3;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l3;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l3;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l3;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l3;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
l4=sj1;
sj0*=sj1;
sj1=l4;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l4;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l4;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l4;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l4;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l4;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l4;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l3;
sj3=-1ULL;
sj2^=sj3;
sj1*=sj2;
l3=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l3;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l3;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l3;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l3;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l3;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l3;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l3;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0^=sj1;
sj1=l4;
sj0=I64_ROTL(sj0,sj1);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si2=l0;
si3=16U;
si2+=si3;
si0=f12266(i,si0,si1,si2);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-4U;
si0+=si1;
l6=si0;
sj0=l4;
sj1=25ULL;
sj0>>=(sj1&63);
l7=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
sj0=l4;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
L3:;
{
si0=l5;
si1=l9;
si2=l10;
si1&=si2;
l13=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sj1=l8;
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l9=si0;
L8:;
{
si0=l9;
si1=l6;
sj2=l4;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l13;
si2+=si3;
si3=l10;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si1-=si2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=68U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l14;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l9;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L6;
}
L9:;
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
}
L7:;
sj0=l3;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l4=sj0;
si0=1U;
l14=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
f5522(i,si0);
goto L2;
L5:;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
l14=si0;
sj0=l4;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l13;
si0+=si1;
si1=l10;
si0&=si1;
l15=si0;
L4:;
sj0=l4;
sj1=l3;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l13;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l9=si0;
si0=l14;
l12=si0;
goto L3;
L10:;
}
si0=0U;
l9=si0;
si0=l5;
si1=l15;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l14=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l15=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
L11:;
si0=l5;
si1=l15;
si0+=si1;
sj1=l7;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l13=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l14;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l9;
L0:;
return si0;
}

U32 f13115(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si1=l2;
si2=12U;
si1+=si2;
sj0=f13751(i,si0,si1);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si2=l3;
si0=f12265(i,si0,si1,si2);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-4U;
si0+=si1;
l6=si0;
sj0=l4;
sj1=25ULL;
sj0>>=(sj1&63);
l7=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
sj0=l4;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l5;
si1=l9;
si2=l3;
si1&=si2;
l9=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l8;
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
l13=sj0;
L6:;
{
sj0=l13;
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
sj0=l12;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l13=sj0;
si0=1U;
l14=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L4;
L7:;
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l13=sj0;
si0=l6;
sj1=l4;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l9;
si1+=si2;
si2=l3;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L2;
}
L5:;
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
l14=si0;
sj0=l13;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l9;
si0+=si1;
si1=l3;
si0&=si1;
l15=si0;
L4:;
sj0=l13;
sj1=l12;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l9=si0;
si0=l14;
l11=si0;
goto L3;
L8:;
}
si0=l5;
si1=l15;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l15=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
L9:;
si0=l5;
si1=l15;
si0+=si1;
sj1=l7;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l6=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=-8U;
si0+=si1;
si1=l3;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l9;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
L0:;
return si0;
}

U32 f13116(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
si1=l1;
sj0=f13755(i,si0,si1);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si2=l4;
si0=f12264(i,si0,si1,si2);
L1:;
sj0=l5;
sj1=25ULL;
sj0>>=(sj1&63);
l6=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
sj0=l5;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l12=si0;
si0=0U;
l13=si0;
L3:;
{
si0=l11;
si1=l9;
si2=l10;
si1&=si2;
l14=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=l7;
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
goto L4;
}
L6:;
{
si0=l4;
si1=l11;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l14;
si2+=si3;
si3=l10;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1-=si2;
l9=si1;
si2=-8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l8;
si1=l9;
si2=-16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L2;
L4:;
sj0=l15;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=1U;
l16=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
l16=si0;
sj0=l5;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l14;
si0+=si1;
si1=l10;
si0&=si1;
l17=si0;
L8:;
sj0=l5;
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
l9=si0;
si0=l16;
l13=si0;
goto L3;
L9:;
}
si0=0U;
l4=si0;
si0=l11;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l11;
si1=l11;
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
l9=si0;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l11;
si1=l17;
si0+=si1;
sj1=l6;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l17;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l9;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l17;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l9=si0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f13117(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
si1=l1;
sj0=f13755(i,si0,si1);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si2=l4;
si0=f12264(i,si0,si1,si2);
L1:;
sj0=l5;
sj1=25ULL;
sj0>>=(sj1&63);
l6=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
sj0=l5;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l12=si0;
si0=0U;
l13=si0;
L3:;
{
si0=l11;
si1=l9;
si2=l10;
si1&=si2;
l14=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=l7;
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
goto L4;
}
L6:;
{
si0=l4;
si1=l11;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si3=l14;
si2+=si3;
si3=l10;
si2&=si3;
si3=4U;
si2<<=(si3&31);
si1-=si2;
l9=si1;
si2=-8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l8;
si1=l9;
si2=-16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L2;
L4:;
sj0=l15;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=1U;
l16=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
l16=si0;
sj0=l5;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l14;
si0+=si1;
si1=l10;
si0&=si1;
l17=si0;
L8:;
sj0=l5;
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
l9=si0;
si0=l16;
l13=si0;
goto L3;
L9:;
}
si0=0U;
l4=si0;
si0=l11;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
si0=l11;
si1=l11;
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
l9=si0;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l11;
si1=l17;
si0+=si1;
sj1=l6;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l17;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l9;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l17;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l9=si0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f13118(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si1=l2;
si2=12U;
si1+=si2;
sj0=f13754(i,si0,si1);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si2=l3;
si0=f12268(i,si0,si1,si2);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-4U;
si0+=si1;
l6=si0;
sj0=l4;
sj1=25ULL;
sj0>>=(sj1&63);
l7=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
sj0=l4;
si0=(U32)(sj0);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l5;
si1=l9;
si2=l3;
si1&=si2;
l9=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l8;
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
l13=sj0;
L6:;
{
sj0=l13;
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
sj0=l12;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l13=sj0;
si0=1U;
l14=si0;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
goto L4;
L7:;
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l13=sj0;
si0=l6;
sj1=l4;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l9;
si1+=si2;
si2=l3;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L2;
}
L5:;
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
l14=si0;
sj0=l13;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l9;
si0+=si1;
si1=l3;
si0&=si1;
l15=si0;
L4:;
sj0=l13;
sj1=l12;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l9=si0;
si0=l14;
l11=si0;
goto L3;
L8:;
}
si0=l5;
si1=l15;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l15=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
L9:;
si0=l5;
si1=l15;
si0+=si1;
sj1=l7;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l6=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l15;
si1=-8U;
si0+=si1;
si1=l3;
si0&=si1;
si1=l5;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l9;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l15;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
L0:;
return si0;
}

U32 f13119(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l0;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l0;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l0;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l1;
si2=l2;
f13750(i,si0,si1,si2);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
l4=sj0;
sj1=56ULL;
sj0<<=(sj1&63);
sj1=l4;
sj2=65280ULL;
sj1&=sj2;
sj2=40ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=l4;
sj2=16711680ULL;
sj1&=sj2;
sj2=24ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=4278190080ULL;
sj2&=sj3;
sj3=8ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0|=sj1;
sj1=l4;
sj2=8ULL;
sj1>>=(sj2&63);
sj2=4278190080ULL;
sj1&=sj2;
sj2=l4;
sj3=24ULL;
sj2>>=(sj3&63);
sj3=16711680ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l4;
sj3=40ULL;
sj2>>=(sj3&63);
sj3=65280ULL;
sj2&=sj3;
sj3=l4;
sj4=56ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
sj0*=sj1;
sj1=l5;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l5;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l5;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l5;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l5;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l5;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l4;
sj3=-1ULL;
sj2^=sj3;
sj1*=sj2;
l4=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l4;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l4;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l4;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l4;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l4;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l4;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l4;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0^=sj1;
sj1=l5;
sj0=I64_ROTL(sj0,sj1);
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
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-4U;
si0+=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=0U;
l11=si0;
L3:;
{
si0=l8;
si1=l7;
si2=l10;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=l6;
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
goto L4;
}
L6:;
{
si0=l9;
sj1=l5;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l10;
si1&=si2;
l12=si1;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si1=l0;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L7:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
goto L6;
}
L5:;
si0=l8;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
l2=si0;
goto L1;
L4:;
sj0=l4;
sj1=l4;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
si0=0U;
l2=si0;
goto L1;
L8:;
si0=l7;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l7=si0;
goto L3;
}
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f13120(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
sj1=4050155162030272184ULL;
si0=sj0 > sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=4233016263971513691ULL;
si1=(U64)((I64)sj1>(I64)sj2);
sj2=l4;
sj3=4233016263971513691ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L10;
}
sj0=l3;
sj1=-6879226489707195440ULL;
si0=sj0 > sj1;
sj1=l4;
sj2=1280318486529463543ULL;
si1=(U64)((I64)sj1>(I64)sj2);
sj2=l4;
sj3=1280318486529463543ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L11;
}
sj0=l3;
sj1=3774697963921938272ULL;
sj0^=sj1;
sj1=l4;
sj2=-8343973563354575502ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
sj0=l3;
sj1=-4958086748684780626ULL;
sj0^=sj1;
sj1=l4;
sj2=-5786366710083316220ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=6U;
l1=si0;
goto L2;
L11:;
sj0=l3;
sj1=-6879226489707195439ULL;
sj0^=sj1;
sj1=l4;
sj2=1280318486529463543ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
sj0=l3;
sj1=8080311700465507813ULL;
sj0^=sj1;
sj1=l4;
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662508U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662512U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L2;
L10:;
sj0=l3;
sj1=-5931764594261734996ULL;
si0=sj0 > sj1;
sj1=l4;
sj2=6370977829563918538ULL;
si1=(U64)((I64)sj1>(I64)sj2);
sj2=l4;
sj3=6370977829563918538ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L12;
}
sj0=l3;
sj1=4050155162030272185ULL;
sj0^=sj1;
sj1=l4;
sj2=4233016263971513691ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l3;
sj1=-6183105157369620055ULL;
sj0^=sj1;
sj1=l4;
sj2=4941792373208104515ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L9;
}
si0=9U;
l1=si0;
goto L2;
L12:;
sj0=l3;
sj1=-5931764594261734995ULL;
sj0^=sj1;
sj1=l4;
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
sj0=l3;
sj1=-2295367307525992740ULL;
sj0^=sj1;
sj1=l4;
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
si0=8U;
l1=si0;
sj0=l3;
sj1=-8990866679616540847ULL;
sj0^=sj1;
sj1=l4;
sj2=8450201886133083679ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L9:;
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=17623912U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=17623384U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=17623944U;
f614(i,si0,si1);
UNREACHABLE;
L8:;
si0=l0;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+56U);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=1U;
l1=si0;
goto L2;
L7:;
si0=l0;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1+56U);
f64_store(&i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=64U;
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0,sd1);
si0=2U;
l1=si0;
goto L2;
L6:;
si0=l0;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4U;
l1=si0;
goto L2;
L5:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=64U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=5U;
l1=si0;
goto L2;
L4:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=7U;
l1=si0;
goto L2;
L3:;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L14;
}
si0=1U;
l1=si0;
goto L13;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l1;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l1=si0;
L13:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=3U;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=17624512U;
si1=36U;
si2=17624564U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f13121(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
F64 l5=0;
U32 l6=0;
F64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L17;
case 2:
goto L16;
case 3:
goto L15;
case 4:
goto L8;
case 5:
goto L14;
case 6:
goto L13;
case 7:
goto L12;
case 8:
goto L11;
case 9:
goto L10;
default:
goto L9;
}
L17:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
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
goto L7;
}
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+8U);
l5=sd0;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l0;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L18:;
sd0=l5;
si1=l4;
si2=l1;
si0=f5926(i,sd0,si1,si2);
l1=si0;
goto L1;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+100U);
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
goto L7;
}
si0=l1;
si1=16U;
si0+=si1;
sd0=f64_load(&i->m0,(U64)si0);
l5=sd0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0+8U);
l7=sd0;
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
goto L19;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=64U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
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
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l0;
si2=0U;
si0=f5913(i,si0,si1,si2);
l1=si0;
L19:;
sd0=l7;
sd1=l5;
si2=l4;
si3=l1;
si0=f6004(i,sd0,sd1,si2,si3);
l1=si0;
goto L1;
L15:;
si0=l3;
si1=1264U;
si2=1268U;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+1U);
si1=si3?si1:si2;
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
si0=si0 != si1;
if(si0){
goto L1;
}
goto L7;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=1U;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
L20:;
si0=l4;
si1=l0;
si2=l1;
si0=f15143(i,si0,si1,si2);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
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
si2=0U;
si0=f5916(i,si0,si1,si2);
l1=si0;
goto L1;
L13:;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l0;
f8897(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
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
goto L7;
}
si0=l2;
si1=l1;
si2=0U;
si0=f5946(i,si0,si1,si2);
l1=si0;
goto L1;
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L22;
}
si0=4U;
l9=si0;
goto L21;
L22:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l8;
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=f15022(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
l4=si0;
si0=l8;
l6=si0;
L23:;
{
si0=l2;
si1=l1;
f2300(i,si0,si1);
si0=l4;
si1=l0;
si2=l2;
si1=f13121(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L23;
}
}
L21:;
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si0=f14167(i,si0,si1);
l1=si0;
goto L1;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
si0=si0 != si1;
if(si0){
goto L1;
}
goto L7;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+1292U);
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
si0=si0 != si1;
if(si0){
goto L1;
}
goto L7;
L9:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=f13053(i,si0,si1);
l1=si0;
goto L1;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=21U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l2;
si1=l4;
si2=l1;
f8911(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L7;
}
si0=l2;
si1=l1;
si2=0U;
si0=f5980(i,si0,si1,si2);
l1=si0;
goto L1;
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+192U);
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
goto L7;
}
si0=l3;
si1=1208U;
si0+=si1;
si1=l4;
si2=l1;
si3=l0;
si0=f9632(i,si0,si1,si2,si3);
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
si0=si0 != si1;
if(si0){
goto L1;
}
L7:;
f14795(i);
UNREACHABLE;
L6:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=4U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f13122(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0+192U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
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
si0=l3;
si1=1208U;
si0+=si1;
si1=l1;
si2=l2;
si3=l0;
si0=f9632(i,si0,si1,si2,si3);
L0:;
return si0;
}

void f13123(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
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
si1=1208U;
si0+=si1;
si1=17624664U;
si2=4U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
f13124(i,si0,si1);
si0=l2;
si1=344U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=18661092U;
f6698(i,si0);
L3:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
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
si2=1320U;
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
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L4;
}
si0=l4;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L4:;
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
si2=l6;
si3=l5;
f13785(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
f1352(i,si0,si1);
L2:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L7;
}
si0=l5;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L7:;
si0=l1;
si1=l2;
si2=384U;
si1+=si2;
si2=l6;
si3=l3;
f13785(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
f1352(i,si0,si1);
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
f5575(i,si0,si1,si2,si3);
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f13124(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=14U;
si0=f15022(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=6U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637327U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637321U);
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
si1=17628132U;
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
si0=l5;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=56U;
si0+=si1;
l3=si0;
si1=17637321U;
si2=14U;
si3=l2;
si4=l4;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17637289U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637282U);
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
si1=17628252U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=47244640267ULL;
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
goto L1;
}
si0=l3;
si1=17637282U;
si2=11U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=7U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17637347U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17637344U);
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
si1=17628420U;
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
goto L1;
}
si0=l3;
si1=17637344U;
si2=7U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=18U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17637280U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637272U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637264U);
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
si1=17628228U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=77309411346ULL;
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
goto L1;
}
si0=l3;
si1=17637264U;
si2=18U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=17U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17637309U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637301U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637293U);
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
si1=17628204U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=73014444049ULL;
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
goto L1;
}
si0=l3;
si1=17637293U;
si2=17U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
sj1=8315172552240492387ULL;
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
si1=17628156U;
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
goto L1;
}
si0=l3;
si1=17637351U;
si2=8U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17637317U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637310U);
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
si1=17628372U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=47244640267ULL;
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
goto L1;
}
si0=l3;
si1=17637310U;
si2=11U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
sj1=8315722355164802915ULL;
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
si1=17628348U;
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
goto L1;
}
si0=l3;
si1=17637359U;
si2=8U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17637458U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637451U);
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
si1=17628396U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=47244640267ULL;
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
goto L1;
}
si0=l3;
si1=17637451U;
si2=11U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=12U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17637470U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637462U);
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
si1=17628276U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=51539607564ULL;
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
goto L1;
}
si0=l3;
si1=17637462U;
si2=12U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=9U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+17637343U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637335U);
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
si1=17628324U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=38654705673ULL;
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
goto L1;
}
si0=l3;
si1=17637335U;
si2=9U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17637374U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637367U);
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
si1=17628444U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=47244640267ULL;
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
goto L1;
}
si0=l3;
si1=17637367U;
si2=11U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=11U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+17637481U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637474U);
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
si1=17628180U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
sj1=47244640267ULL;
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
goto L1;
}
si0=l3;
si1=17637474U;
si2=11U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=10U;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+17637493U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17637485U);
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
si1=17628300U;
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
goto L1;
}
si0=l3;
si1=17637485U;
si2=10U;
si3=l2;
si4=l5;
si5=0U;
si3=f5925(i,si3,si4,si5);
si4=l0;
f13833(i,si0,si1,si2,si3,si4);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L15:;
si0=1U;
si1=14U;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=1U;
si1=18U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1U;
si1=17U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=10U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

U32 f13125(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si0+=si1;
l2=si0;
si0=l6;
si1=l1;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
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
si0=l6;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
goto L1;
L5:;
si0=l6;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l6=si0;
goto L1;
L4:;
si0=l6;
si1=12U;
si0+=si1;
l7=si0;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L1;
L3:;
si0=l6;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l6=si0;
goto L1;
L2:;
si0=l6;
si1=12U;
si0+=si1;
l7=si0;
si0=l6;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L1:;
si0=l2;
si1=l1;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l2;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l6;
si3=l1;
si2+=si3;
si3=l2;
si4=l1;
si3-=si4;
si4=l0;
si4=i32_load(&i->m0,(U64)si4+12U);
l1=si4;
f12872(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L18;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l2;
l6=si0;
goto L19;
L20:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L13;
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
goto L19;
}
si0=l2;
f5522(i,si0);
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L26;
case 1:
goto L25;
case 2:
goto L24;
case 3:
goto L23;
case 4:
goto L22;
default:
goto L26;
}
L26:;
si0=l2;
si1=8U;
si0+=si1;
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
goto L21;
L25:;
si0=l2;
si1=8U;
si0+=si1;
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l2=si0;
goto L21;
L24:;
si0=l2;
si1=12U;
si0+=si1;
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
goto L21;
L23:;
si0=l2;
si1=8U;
si0+=si1;
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l2=si0;
goto L21;
L22:;
si0=l2;
si1=12U;
si0+=si1;
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L21:;
si0=l4;
si1=l3;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l2;
si3=l3;
si2+=si3;
si3=l4;
si4=l3;
si3-=si4;
si4=l1;
f12872(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L16;
}
si0=l2;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l2;
l4=si0;
goto L27;
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L13;
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
goto L27;
}
si0=l2;
f5522(i,si0);
L27:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=l4;
si3=4U;
si4=l1;
f13126(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l2=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
if(si0){
goto L17;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=l1;
f5571(i,si0,si1,si2);
goto L9;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L29;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f5522(i,si0);
L29:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+24U);
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l5;
si2=26U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L7;
L17:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
l2=si0;
si0=l5;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l2;
si2=1U;
si1&=si2;
i32_store8(&i->m0,(U64)si0+17U,si1);
goto L9;
L16:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L30;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f5522(i,si0);
L30:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+24U);
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l5;
si2=26U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L8;
L15:;
si0=l1;
si1=l2;
si2=17624100U;
f683(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l2;
si1=l7;
si2=17624100U;
f597(i,si0,si1,si2);
UNREACHABLE;
L13:;
f14795(i);
UNREACHABLE;
L12:;
si0=l3;
si1=l4;
si2=17624116U;
f683(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l4;
si1=l7;
si2=17624116U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L31;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f5522(i,si0);
L31:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=l8;
sj1=255ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
l2=si0;
sj0=l8;
sj1=65280ULL;
sj0&=sj1;
si0=!(sj0);
l1=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l4;
f5522(i,si0);
L32:;
si0=l2;
si1=l1;
si0|=si1;
l1=si0;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l6;
f5522(i,si0);
L7:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f13126(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l5;
sj1=5523395248386ULL;
si2=l3;
si3=-1U;
si2+=si3;
sj2=(U64)(si2);
sj3=255ULL;
sj2&=sj3;
sj3=3ULL;
sj2<<=(sj3&63);
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0+3U,sj1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l8=si1;
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
l3=si0;
si0=l7;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L7:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=17629148U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l6=si0;
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
L6:;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=2U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=17629148U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
l9=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
si2=l7;
si3=16U;
si2<<=(si3&31);
si1|=si2;
si2=8U;
si1<<=(si2&31);
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
l9=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
si2=l7;
si3=16U;
si2<<=(si3&31);
si1|=si2;
si2=8U;
si1<<=(si2&31);
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l6;
if(si0){
goto L8;
}
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=3U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=17629148U;
si3=13U;
si4=l5;
si5=16U;
si4+=si5;
f11856(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l7=si0;
si0=l5;
si0=i32_load16_u(&i->m0,(U64)si0+9U);
l9=si0;
si0=l0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
si2=l7;
si3=16U;
si2<<=(si3&31);
si1|=si2;
si2=8U;
si1<<=(si2&31);
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=17402954U;
l3=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l7=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L15;
case 2:
goto L11;
case 3:
goto L10;
case 4:
goto L14;
case 5:
goto L13;
default:
goto L12;
}
L15:;
si0=1U;
l7=si0;
si0=17403154U;
l3=si0;
goto L12;
L14:;
si0=2U;
l7=si0;
si0=17416680U;
l3=si0;
goto L12;
L13:;
si0=2U;
l7=si0;
si0=17416682U;
l3=si0;
L12:;
si0=l4;
si1=l1;
si2=l2;
si3=l3;
si4=l7;
si0=f11753(i,si0,si1,si2,si3,si4);
l3=si0;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L11:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=l1;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L10:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=l1;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f13127(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si0+=si1;
l2=si0;
si0=l5;
si1=l1;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
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
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
goto L1;
L5:;
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l5=si0;
goto L1;
L4:;
si0=l5;
si1=12U;
si0+=si1;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L3:;
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l5=si0;
goto L1;
L2:;
si0=l5;
si1=12U;
si0+=si1;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L1:;
si0=l2;
si1=l1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L14;
case 4:
goto L13;
default:
goto L17;
}
L17:;
si0=l0;
si1=8U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
goto L12;
L16:;
si0=l0;
si1=8U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l0=si0;
goto L12;
L15:;
si0=l0;
si1=12U;
si0+=si1;
l6=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
goto L12;
L14:;
si0=l0;
si1=8U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=4U;
si0+=si1;
l0=si0;
goto L12;
L13:;
si0=l0;
si1=12U;
si0+=si1;
l6=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L12:;
si0=l4;
si1=l3;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l1;
si0-=si1;
l2=si0;
si1=l4;
si2=l3;
si1-=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
si1=l1;
si0+=si1;
si1=l0;
si2=l3;
si1+=si2;
si2=l2;
si0=f15143(i,si0,si1,si2);
goto L0;
L11:;
si0=l1;
si1=l2;
si2=17624148U;
f683(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=l6;
si2=17624148U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=l4;
si2=17624164U;
f683(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=l6;
si2=17624164U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l4;
si2=17624180U;
f685(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f13128(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
si1=1208U;
si0+=si1;
si1=17624632U;
si2=6U;
si3=l3;
si0=f9632(i,si0,si1,si2,si3);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si1=716U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=8U;
si0=f15022(i,si0);
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
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=17607840U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=17607720U;
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
si1=l4;
si2=0U;
si0=f5925(i,si0,si1,si2);
l6=si0;
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
goto L3;
}
si0=l4;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L3:;
si0=l1;
si1=24U;
si0+=si1;
si1=l2;
si2=384U;
si1+=si2;
l4=si1;
si2=l5;
si3=l6;
f13785(i,si0,si1,si2,si3);
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
si0=l3;
f5522(i,si0);
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
f1352(i,si0,si1);
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
si0=i32_load(&i->m0,(U64)si0+18661092U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=18661092U;
f6698(i,si0);
L7:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661096U);
l5=si0;
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
si1=l5;
si2=1320U;
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
si0=f5579(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=964U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
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
goto L8;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L8:;
si0=l1;
si1=16U;
si0+=si1;
si1=l4;
si2=l6;
si3=l5;
f13785(i,si0,si1,si2,si3);
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
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
f5522(i,si0);
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
f1352(i,si0,si1);
L6:;
si0=l2;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=845U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=804U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+1272U);
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
goto L11;
}
si0=l2;
si1=376U;
si0+=si1;
sj1=l7;
si2=1000000000U;
si0=f1350(i,si0,sj1,si2);
L11:;
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si2=l6;
si3=l3;
f13785(i,si0,si1,si2,si3);
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
f5522(i,si0);
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
f1352(i,si0,si1);
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
f5575(i,si0,si1,si2,si3);
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
f14795(i);
UNREACHABLE;
L0:;
}

void f13129(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=96U;
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
sj1=8080311700465507813ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3405249472825529671ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=72U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=1U;
l6=si0;
goto L4;
L6:;
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
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
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=17624388U;
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
goto L9;
}
si0=l6;
f1354(i,si0);
goto L9;
L12:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L9;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L9;
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L9;
}
si0=l6;
si1=0U;
f1361(i,si0,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
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
goto L9;
}
si0=l6;
f1354(i,si0);
L9:;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
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
goto L2;
}
si0=l0;
si1=l1;
si2=l6;
si3=l3;
si4=16U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l6=si0;
goto L3;
L5:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=0U;
si0=si0 != si1;
si1=l2;
si2=64U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0|=si1;
l6=si0;
L4:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=0U;
l6=si0;
L3:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=17623824U;
si1=43U;
si2=17624480U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}


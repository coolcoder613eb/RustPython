#include "w2c2_base.h"

#include "rustpython.h"

U32 f1430(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U32 l3) {
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
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si0|=si1;
l6=si0;
si1=-1640531527U;
si0*=si1;
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
L4:;
{
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L6;
}
si0=l0;
si1=l5;
si2=2U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l5;
si0=si0 != si1;
l10=si0;
si0=l9;
l5=si0;
si0=l10;
if(si0){
goto L5;
}
L6:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=2967844U;
si1=0U;
si0=f1436(i,si0,si1);
l11=si0;
if(si0){
goto L7;
}
si0=l8;
f1442(i,si0);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
l11=si0;
L7:;
L8:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l5=si0;
if(si0){
goto L9;
}
si0=f1443(i);
l5=si0;
L9:;
si0=l7;
si1=0U;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+24U);
l10=si1;
si2=1U;
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=24U;
si0+=si1;
l9=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L10;
}
si0=l9;
f1451(i,si0);
L10:;
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L8;
}
si0=l9;
f1452(i,si0);
goto L8;
L11:;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
L12:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L13;
}
si0=l9;
f1452(i,si0);
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L14;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967836U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2967836U,si1);
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L5:;
si0=l5;
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
goto L4;
}
L3:;
si0=l9;
si1=l10;
si2=1281640U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=8U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l2;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l11;
f1453(i,si0);
UNREACHABLE;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
L0:;
return si0;
}

void f1431(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U64 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l3=si0;
L4:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l4=si0;
if(si0){
goto L5;
}
si0=f1443(i);
l4=si0;
L5:;
si0=l3;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
f1451(i,si0);
L6:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L4;
}
si0=l6;
f1452(i,si0);
goto L4;
L7:;
}
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l8=si0;
si0=0U;
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l8;
if(si0){
goto L8;
}
si0=0U;
l10=si0;
si0=0U;
l4=si0;
goto L1;
L8:;
si0=l9;
si1=28U;
si0+=si1;
l11=si0;
si0=l2;
si1=76U;
si0+=si1;
l12=si0;
si0=l9;
si1=32U;
si0+=si1;
l13=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l15=si0;
si0=0U;
l3=si0;
si0=0U;
l16=si0;
si0=0U;
l10=si0;
L9:;
{
si0=l8;
l4=si0;
si1=4U;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=1U;
l10=si0;
goto L2;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l3;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=1U;
l10=si0;
L11:;
si0=l4;
l16=si0;
si0=l5;
l11=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
goto L9;
L10:;
si0=l11;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l13;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
L13:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l17=si0;
si1=9U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l17;
l5=si0;
si0=l15;
l18=si0;
si0=l12;
l19=si0;
si0=8U;
l17=si0;
goto L14;
L15:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l18=si0;
si0=l14;
l19=si0;
L14:;
si0=l5;
si1=l17;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
si2=1U;
f1438(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
f52(i,si0,si1);
UNREACHABLE;
L18:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l18=si0;
si0=l14;
l19=si0;
L17:;
si0=l7;
si1=l3;
si0+=si1;
l3=si0;
si0=l18;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l19;
si1=l19;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
goto L9;
L16:;
}
si0=1282020U;
si1=17U;
si2=1282040U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l6;
si2=1281640U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si1=9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
L1:;
si0=l4;
si0=!(si0);
if(si0){
goto L22;
}
si0=1U;
sj1=1ULL;
si2=l2;
si3=80U;
si2+=si3;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l4=si0;
if(si0){
goto L21;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+80U);
l20=sj0;
sj1=1000000000ULL;
sj0=DIV_U(sj0,sj1);
l21=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si0=sj0 < sj1;
if(si0){
goto L23;
}
sj0=l21;
sj1=3294967296ULL;
sj0*=sj1;
sj1=l20;
sj0+=sj1;
si0=(U32)(sj0);
l4=si0;
si0=l9;
si1=8U;
si0+=si1;
l8=si0;
sj0=l21;
sj1=l22;
si0=sj0 != sj1;
if(si0){
goto L24;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 >= si1;
if(si0){
goto L23;
}
L24:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=13U;
si1<<=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
si2=17U;
si1>>=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l5;
si2=1000000U;
si1=REM_U(si1,si2);
si2=l4;
si1+=si2;
l4=si1;
si2=-1000000000U;
si1+=si2;
si2=l4;
si3=l4;
si4=999999999U;
si3=si3 > si4;
l5=si3;
si1=si3?si1:si2;
l4=si1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l7=si1;
si2=-1000000000U;
si1*=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
sj1=l21;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
si2=l7;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L20;
L23:;
si0=l1;
if(si0){
goto L20;
}
L22:;
si0=0U;
l8=si0;
si0=l10;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l4=si0;
goto L19;
L21:;
si0=l2;
si1=l4;
i32_store16(&i->m0,(U64)si0+80U,si1);
si0=1986890U;
si1=43U;
si2=l2;
si3=80U;
si2+=si3;
si3=1992124U;
si4=1992172U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L20:;
si0=l3;
si1=l10;
si2=255U;
si1&=si2;
si0|=si1;
l4=si0;
si0=1U;
l8=si0;
L19:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l4=si0;
si1=8U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l4;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l4=si0;
goto L25;
L27:;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
goto L25;
L26:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L28;
}
si0=l6;
f1452(i,si0);
L28:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l2;
si1=80U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=52U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=60U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=60U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l2;
si1=0U;
si2=l4;
si3=l5;
si4=8U;
si3=si3 > si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l5;
si2=l6;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l6;
if(si0){
goto L30;
}
si0=l8;
si1=7U;
si0&=si1;
l6=si0;
si0=0U;
l4=si0;
si0=l8;
si1=8U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=0U;
si1=l8;
si2=-8U;
si1&=si2;
si0-=si1;
l8=si0;
si0=4U;
l4=si0;
L33:;
{
si0=l2;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l8;
si1=l4;
si2=8U;
si1+=si2;
l4=si1;
si0+=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L33;
}
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
L32:;
si0=l6;
si0=!(si0);
if(si0){
goto L31;
}
L34:;
{
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L34;
}
}
L31:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L29;
}
L30:;
si0=l3;
f15271(i,si0);
L29:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f1454(i,si0);
UNREACHABLE;
L0:;
}

U32 f1432(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
L1:;
{
si0=l7;
si1=9U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
L11:;
{
si0=l6;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l6;
l8=si0;
goto L12;
L13:;
si0=l6;
l8=si0;
L14:;
{
si0=l8;
si1=16U;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L12:;
si0=l8;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l8;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
goto L8;
}
L10:;
si0=l1;
if(si0){
goto L15;
}
L16:;
{
si0=l6;
si1=8U;
si0&=si1;
if(si0){
goto L17;
}
L18:;
{
si0=l6;
si1=16U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l8;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
}
L17:;
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l6;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
l6=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
goto L8;
}
L15:;
L19:;
{
si0=l6;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L20;
}
L21:;
{
si0=l6;
si1=16U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l8;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l6;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-8U;
si0&=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L21;
}
}
L20:;
si0=l6;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l6;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
si3=l8;
si4=l6;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
l6=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L19;
}
goto L8;
}
L9:;
L22:;
{
si0=l6;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l6;
l8=si0;
goto L23;
L24:;
si0=l6;
l8=si0;
L25:;
{
si0=l8;
si1=16U;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l6;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=l9;
si4=l8;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L25;
}
}
L23:;
si0=l8;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l0;
si1=l8;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L8:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967844U);
if(si0){
goto L26;
}
si0=l4;
si1=8U;
si0+=si1;
f1442(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967844U);
l6=si0;
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+2967844U,si1);
si0=0U;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+2967848U,sj1);
si0=0U;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+2967856U,sj1);
si0=0U;
si1=l4;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+2967864U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967836U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2967836U,si1);
L26:;
L27:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l6=si0;
if(si0){
goto L28;
}
si0=f1443(i);
l6=si0;
L28:;
si0=l5;
si1=0U;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+24U);
l9=si1;
si2=1U;
si3=l9;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=24U;
si0+=si1;
l8=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L29;
}
si0=l8;
f1451(i,si0);
L29:;
si0=l6;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l6;
si1=2U;
si0&=si1;
if(si0){
goto L27;
}
si0=l8;
f1452(i,si0);
goto L27;
L30:;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=9U;
si0&=si1;
si1=9U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l7=si0;
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
si0=l8;
f1452(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L1;
L7:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L6:;
si0=1281656U;
si1=28U;
si2=1281812U;
f703(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si1=l9;
si2=1281640U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si1=16U;
i32_store(&i->m0,(U64)si0+2967860U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2967848U,si1);
si0=0U;
si1=l3;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+2967864U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2967852U,si1);
si0=2967848U;
f1453(i,si0);
UNREACHABLE;
L3:;
si0=l7;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=wasi_snapshot_preview1__sched_yield(i);
L31:;
si0=l6;
l7=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
goto L1;
}
L0:;
return si0;
}

void f1433(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si1=1U;
si0|=si1;
l2=si0;
si1=-1640531527U;
si0*=si1;
l3=si0;
L5:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l4=si0;
if(si0){
goto L6;
}
si0=f1443(i);
l4=si0;
L6:;
si0=l3;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f1451(i,si0);
L7:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L5;
}
si0=l6;
f1452(i,si0);
goto L5;
L8:;
}
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si1=28U;
si0+=si1;
l9=si0;
si0=0U;
l8=si0;
goto L9;
L10:;
L11:;
{
si0=l4;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l8;
si1=4U;
si0+=si1;
l9=si0;
L9:;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
L12:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L12;
}
goto L2;
}
L4:;
si0=l5;
si1=l6;
si2=1281640U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=32U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l1;
si1=16U;
si0+=si1;
f15044(i,si0);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=sj0 < sj1;
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
l8=si0;
sj0=l10;
sj1=l11;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 <= si1;
if(si0){
goto L13;
}
L14:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=13U;
si1<<=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
si2=17U;
si1>>=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
si2=5U;
si1<<=(si2&31);
si2=l5;
si1^=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
sj1=l10;
si2=l6;
sj3=0ULL;
si4=l5;
si5=1000000U;
si4=REM_U(si4,si5);
f15045(i,si0,sj1,si2,sj3,si4);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l8;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
L13:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-3U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
f1454(i,si0);
UNREACHABLE;
L1:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-3U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L15;
}
si0=l6;
f1452(i,si0);
L15:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1434(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
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
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L1:;
{
si0=l8;
si1=10U;
si0=si0 < si1;
if(si0){
goto L8;
}
L9:;
{
si0=l5;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
l9=si0;
goto L10;
L11:;
si0=l5;
l9=si0;
L12:;
{
si0=l9;
si1=20U;
si0+=si1;
l5=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
}
L10:;
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
si0=l0;
si1=l9;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
goto L7;
}
L8:;
L13:;
{
si0=l5;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
l9=si0;
goto L14;
L15:;
si0=l5;
l9=si0;
L16:;
{
si0=l9;
si1=20U;
si0+=si1;
l5=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l10=si2;
si3=l10;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
L14:;
si0=l9;
si1=3U;
si0&=si1;
if(si0){
goto L17;
}
si0=l8;
si1=1U;
si0+=si1;
l9=si0;
si0=l8;
si1=3U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=wasi_snapshot_preview1__sched_yield(i);
L18:;
si0=l9;
l8=si0;
goto L2;
L17:;
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
si0=l0;
si1=l9;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l9;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L7:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967844U);
if(si0){
goto L19;
}
si0=l3;
si1=8U;
si0+=si1;
f1442(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967844U);
l9=si0;
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+2967844U,si1);
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+2967848U,sj1);
si0=0U;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+2967856U,sj1);
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+2967864U,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L19;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967836U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2967836U,si1);
L19:;
L20:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l9=si0;
if(si0){
goto L21;
}
si0=f1443(i);
l9=si0;
L21:;
si0=l4;
si1=0U;
si2=l9;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l5=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
l10=si1;
si2=1U;
si3=l10;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=24U;
si0+=si1;
l5=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
f1451(i,si0);
L22:;
si0=l9;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
si1=2U;
si0&=si1;
if(si0){
goto L20;
}
si0=l5;
f1452(i,si0);
goto L20;
L23:;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
si1=12U;
si0&=si1;
if(si0){
goto L3;
}
L24:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l9;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l9;
si1=2U;
si0&=si1;
if(si0){
goto L2;
}
si0=l5;
f1452(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
L6:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L5:;
si0=1281656U;
si1=28U;
si2=1281828U;
f703(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=l10;
si2=1281640U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=20U;
i32_store(&i->m0,(U64)si0+2967860U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2967848U,si1);
si0=0U;
si1=l2;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+2967864U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2967852U,si1);
si0=2967848U;
f1453(i,si0);
UNREACHABLE;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
goto L1;
}
L0:;
return si0;
}

void f1435(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l19=0;
U32 l20=0;
U64 l21=0;
U64 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L4:;
{
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=-20U;
si1+=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=l3;
si3=si3 == si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l0;
si1=-1640531527U;
si0*=si1;
l6=si0;
L8:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l3=si0;
if(si0){
goto L9;
}
si0=f1443(i);
l3=si0;
L9:;
si0=l6;
si1=0U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l7=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l7;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l5=si1;
si2=1U;
si3=l5;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=24U;
si0+=si1;
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
f1451(i,si0);
L10:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=2U;
si0&=si1;
if(si0){
goto L8;
}
si0=l4;
f1452(i,si0);
goto L8;
L11:;
}
si0=l8;
si1=l7;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
si0=0U;
l10=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l5;
if(si0){
goto L12;
}
si0=0U;
l7=si0;
si0=0U;
l11=si0;
si0=0U;
l3=si0;
goto L5;
L12:;
si0=l9;
si1=28U;
si0+=si1;
l12=si0;
si0=l2;
si1=76U;
si0+=si1;
l13=si0;
si0=l9;
si1=32U;
si0+=si1;
l14=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l16=si0;
si0=0U;
l7=si0;
si0=0U;
l17=si0;
si0=0U;
l11=si0;
L13:;
{
si0=l5;
l3=si0;
si1=4U;
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l7;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=1U;
l11=si0;
goto L6;
L16:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l7;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
si1=12U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=1U;
l11=si0;
L15:;
si0=l3;
l17=si0;
si0=l6;
l12=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
goto L13;
L14:;
si0=l12;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l14;
si1=l17;
i32_store(&i->m0,(U64)si0,si1);
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l18=si0;
si1=9U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l18;
l6=si0;
si0=l16;
l19=si0;
si0=l13;
l20=si0;
si0=8U;
l18=si0;
goto L18;
L19:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l15;
l20=si0;
L18:;
si0=l6;
si1=l18;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
si2=1U;
f1438(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l6;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l15;
l20=si0;
L21:;
si0=l8;
si1=l7;
si0+=si1;
l7=si0;
si0=l19;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l20;
si1=l20;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
goto L13;
L20:;
}
si0=1282020U;
si1=17U;
si2=1282040U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l7;
si1=l4;
si2=1281640U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=9U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L23;
}
si0=1U;
sj1=1ULL;
si2=l2;
si3=80U;
si2+=si3;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l3=si0;
if(si0){
goto L24;
}
si0=0U;
l10=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+80U);
l21=sj0;
sj1=1000000000ULL;
sj0=DIV_U(sj0,sj1);
l22=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si0=sj0 < sj1;
if(si0){
goto L23;
}
sj0=l22;
sj1=3294967296ULL;
sj0*=sj1;
sj1=l21;
sj0+=sj1;
si0=(U32)(sj0);
l3=si0;
si0=l9;
si1=8U;
si0+=si1;
l5=si0;
sj0=l22;
sj1=l23;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 >= si1;
if(si0){
goto L23;
}
L25:;
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+16U);
l6=si1;
si2=13U;
si1<<=(si2&31);
si2=l6;
si1^=si2;
l6=si1;
si2=17U;
si1>>=(si2&31);
si2=l6;
si1^=si2;
l6=si1;
si2=5U;
si1<<=(si2&31);
si2=l6;
si1^=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l6;
si2=1000000U;
si1=REM_U(si1,si2);
si2=l3;
si1+=si2;
l3=si1;
si2=-1000000000U;
si1+=si2;
si2=l3;
si3=l3;
si4=999999999U;
si3=si3 > si4;
l6=si3;
si1=si3?si1:si2;
l3=si1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l8=si1;
si2=-1000000000U;
si1*=si2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
sj1=l22;
si2=l6;
sj2=(U64)(si2);
sj1+=sj2;
si2=l8;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l10=si0;
goto L23;
L24:;
si0=l2;
si1=l3;
i32_store16(&i->m0,(U64)si0+80U,si1);
si0=1986890U;
si1=43U;
si2=l2;
si3=80U;
si2+=si3;
si3=1992124U;
si4=1992172U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=l11;
si1=255U;
si0&=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l10;
si1=l1;
si0|=si1;
si0=!(si0);
if(si0){
goto L27;
}
L28:;
{
si0=l3;
si1=-20U;
si0+=si1;
l5=si0;
si1=l7;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l0;
si1=l8;
si2=-2U;
si1&=si2;
si2=l6;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
l8=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
l3=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L28;
}
}
si0=1U;
l0=si0;
goto L26;
L27:;
L29:;
{
si0=l0;
si1=l3;
si2=-2U;
si1&=si2;
si2=-20U;
si1+=si2;
si2=l6;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si0=si0 != si1;
l7=si0;
si0=l5;
l3=si0;
si0=l7;
if(si0){
goto L29;
}
}
si0=0U;
l0=si0;
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l3=si0;
si1=8U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l3;
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l3=si0;
goto L1;
L31:;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
goto L1;
L30:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l3;
si1=2U;
si0&=si1;
if(si0){
goto L32;
}
si0=l4;
f1452(i,si0);
L32:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si0=l2;
si1=80U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=44U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=52U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=60U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=60U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+20U);
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l2;
si1=0U;
si2=l3;
si3=l5;
si4=8U;
si3=si3 > si4;
l0=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=l5;
si2=l0;
si0=si2?si0:si1;
l4=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l0;
if(si0){
goto L33;
}
si0=l4;
si1=7U;
si0&=si1;
l0=si0;
si0=0U;
l3=si0;
si0=l4;
si1=8U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=0U;
si1=l4;
si2=-8U;
si1&=si2;
si0-=si1;
l4=si0;
si0=4U;
l3=si0;
L36:;
{
si0=l2;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l3;
si2=8U;
si1+=si2;
l3=si1;
si0+=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L36;
}
}
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
L35:;
si0=l0;
si0=!(si0);
if(si0){
goto L34;
}
L37:;
{
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L37;
}
}
L34:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L2;
}
L33:;
si0=l7;
f15271(i,si0);
L2:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
f1454(i,si0);
UNREACHABLE;
L0:;
}

U32 f1436(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=8U;
si0+=si1;
f1442(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967836U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2967836U,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f1437(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1438(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=8U;
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l5=si0;
l6=si0;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
l4=si0;
L1:;
si0=-2147483647U;
l7=si0;
si0=l4;
si1=l6;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l6;
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L6;
L7:;
si0=0U;
si1=-1U;
si2=l2;
si3=-1U;
si2+=si3;
si2=I32_CLZ(si2);
si1>>=(si2&31);
si2=l2;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l2=si0;
if(si0){
goto L8;
}
si0=l2;
l6=si0;
si0=0U;
l7=si0;
goto L2;
L8:;
si0=8U;
l4=si0;
si0=l5;
si1=8U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=4U;
si0+=si1;
l8=si0;
si0=l5;
l9=si0;
goto L9;
L10:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
l4=si0;
L9:;
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si1=536870911U;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=0U;
l7=si0;
goto L2;
L13:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l8;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l4;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l6;
si1=2147483645U;
si0=si0 < si1;
if(si0){
goto L11;
}
L14:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1281943U;
si1=43U;
si2=l3;
si3=8U;
si2+=si3;
si3=1281988U;
si4=1282004U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=l6;
si1=2147483644U;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=0U;
l7=si0;
goto L2;
L15:;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l4;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=2147483644U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=4U;
l7=si0;
si0=l8;
si1=l5;
si2=4U;
si3=l6;
si0=f33(i,si0,si1,si2,si3);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
goto L4;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
l7=si0;
si0=l6;
si1=4U;
si0=f32(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l8;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L4;
L11:;
si0=l8;
f15271(i,si0);
L6:;
goto L2;
L5:;
si0=1282056U;
si1=32U;
si2=1282088U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=-2147483647U;
l7=si0;
goto L2;
L3:;
si0=l5;
l6=si0;
si0=0U;
l7=si0;
L2:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1439(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l4=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l6=si0;
si0=l3;
si1=24U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
L2:;
{
si0=l8;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
L7:;
{
si0=l5;
si1=255U;
si0&=si1;
l9=si0;
si0=l0;
si1=l5;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L5;
}
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
goto L7;
}
L6:;
L8:;
{
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l5;
si1=255U;
si0&=si1;
l9=si0;
si0=l0;
si1=l5;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
goto L5;
L9:;
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=255U;
si0&=si1;
l9=si0;
si0=l0;
si1=l5;
si2=2U;
si1|=si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2);
l5=si2;
si3=l5;
si4=l9;
si3=si3 == si4;
l9=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L3;
}
goto L8;
}
L5:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L4:;
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L3;
}
si0=l8;
si1=1U;
si0+=si1;
l5=si0;
si0=l8;
si1=3U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=wasi_snapshot_preview1__sched_yield(i);
L10:;
si0=l5;
l8=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
goto L2;
L3:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967844U);
if(si0){
goto L11;
}
si0=l3;
si1=8U;
si0+=si1;
f1442(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967844U);
l5=si0;
si0=0U;
si1=1U;
i32_store(&i->m0,(U64)si0+2967844U,si1);
si0=0U;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+2967848U,sj1);
si0=0U;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+2967856U,sj1);
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+2967864U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967836U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2967836U,si1);
L11:;
L13:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l5=si0;
if(si0){
goto L14;
}
si0=f1443(i);
l5=si0;
L14:;
si0=l4;
si1=0U;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l9=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=24U;
si0+=si1;
l9=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
f1451(i,si0);
L15:;
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L13;
}
si0=l9;
f1452(i,si0);
goto L13;
L16:;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l8=si0;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L17;
}
si0=l9;
f1452(i,si0);
L17:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
goto L2;
L12:;
}
si0=l9;
si1=l8;
si2=1282220U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2967848U,si1);
si0=0U;
si1=l2;
si2=1000000000U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+2967864U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2967852U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2967860U,si1);
si0=2967848U;
f1453(i,si0);
UNREACHABLE;
L0:;
return si0;
}

void f1440(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=-1640531527U;
si0*=si1;
l3=si0;
L5:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l4=si0;
if(si0){
goto L6;
}
si0=f1443(i);
l4=si0;
L6:;
si0=l3;
si1=0U;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
si1-=si2;
si0>>=(si1&31);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
l8=si1;
si2=1U;
si3=l8;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=24U;
si0+=si1;
l6=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
f1451(i,si0);
L7:;
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L5;
}
si0=l6;
f1452(i,si0);
goto L5;
L8:;
}
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si1=28U;
si0+=si1;
l9=si0;
si0=0U;
l8=si0;
goto L9;
L10:;
L11:;
{
si0=l4;
l8=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l8;
si1=4U;
si0+=si1;
l9=si0;
L9:;
si0=l9;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=1U;
l5=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
L12:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l0;
si0=si0 != si1;
l5=si0;
si0=l8;
si1=l0;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L12;
}
goto L2;
}
L4:;
si0=l5;
si1=l6;
si2=1282220U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=32U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l5=si0;
L2:;
si0=l2;
si1=16U;
si0+=si1;
f15044(i,si0);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=sj0 < sj1;
if(si0){
goto L15;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
l8=si0;
sj0=l10;
sj1=l11;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l6;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 <= si1;
if(si0){
goto L15;
}
L16:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l7=si1;
si2=13U;
si1<<=(si2&31);
si2=l7;
si1^=si2;
l7=si1;
si2=17U;
si1>>=(si2&31);
si2=l7;
si1^=si2;
l7=si1;
si2=5U;
si1<<=(si2&31);
si2=l7;
si1^=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=l10;
si2=l6;
sj3=0ULL;
si4=l7;
si5=1000000U;
si4=REM_U(si4,si5);
f15045(i,si0,sj1,si2,sj3,si4);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l8;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
goto L14;
L15:;
si0=l1;
if(si0){
goto L14;
}
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
l6=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L13;
L17:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=0U;
l6=si0;
goto L13;
L14:;
si0=1U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=1U;
l6=si0;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L13:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
f1454(i,si0);
UNREACHABLE;
L1:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l4;
si1=2U;
si0&=si1;
if(si0){
goto L18;
}
si0=l6;
f1452(i,si0);
L18:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1441(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
sj1=1ULL;
si2=l2;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l3=si0;
if(si0){
goto L5;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=1000000000ULL;
sj0=DIV_U(sj0,sj1);
l5=sj0;
si0=-1U;
si1=l0;
si2=3U;
si1*=si2;
l0=si1;
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
si1=1U;
si0+=si1;
si1=1U;
si2=l0;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
if(si0){
goto L7;
}
si0=0U;
l0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=64ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=64U;
l7=si0;
goto L6;
L7:;
si0=l6;
si1=33554431U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l6;
si1=33554432U;
si0=si0 < si1;
si1=6U;
si0<<=(si1&31);
l7=si0;
si0=l3;
if(si0){
goto L9;
}
si0=l7;
l0=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l3;
si0=f15277(i,si0,si1);
l0=si0;
L8:;
si0=l0;
si0=!(si0);
if(si0){
goto L3;
}
sj0=l5;
sj1=3294967296ULL;
sj0*=sj1;
sj1=l4;
sj0+=sj1;
si0=(U32)(sj0);
l7=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
si0=0U;
l3=si0;
L10:;
{
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=l0;
f1456(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L11:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
l7=si0;
goto L6;
L12:;
si0=l0;
if(si0){
goto L14;
}
si0=64U;
l7=si0;
goto L13;
L14:;
si0=64U;
si1=l0;
si2=6U;
si1<<=(si2&31);
l8=si1;
si0=f15277(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=l3;
si2=l8;
si0=f15390(i,si0,si1,si2);
L13:;
si0=l3;
f15271(i,si0);
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=31U;
si2=l6;
si2=I32_CLZ(si2);
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L5:;
si0=l2;
si1=l3;
i32_store16(&i->m0,(U64)si0,si1);
si0=1986890U;
si1=43U;
si2=l2;
si3=1992124U;
si4=1992172U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l7;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=64U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f1442(rustpythonInstance*i,U32 l0) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967836U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+2967836U,si1);
si0=l1;
si1=3U;
si0*=si1;
l2=si0;
L2:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967840U);
l3=si0;
if(si0){
goto L3;
}
si0=f1443(i);
l3=si0;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=6U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=24U;
si0+=si1;
l4=si0;
L5:;
{
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=1U;
si3=l6;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f1451(i,si0);
L6:;
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si0=l5;
si1=-64U;
si0+=si1;
l5=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=6U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=24U;
si0+=si1;
l4=si0;
L8:;
{
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l6;
si1=2U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
f1452(i,si0);
L9:;
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si0=l5;
si1=-64U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
goto L8;
}
L7:;
}
si0=l1;
si1=l3;
si0=f1441(i,si0,si1);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l4;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L12:;
{
si0=l8;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+8U);
si0-=si1;
si1=31U;
si0&=si1;
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L14:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=-1640531527U;
si0*=si1;
si1=l10;
si0>>=(si1&31);
l5=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l11;
si1=l5;
si2=6U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si1=4U;
si0+=si1;
si1=l5;
si2=28U;
si1+=si2;
si2=l2;
si0=si2?si0:si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
l4=si0;
si0=l6;
if(si0){
goto L14;
}
}
L13:;
si0=l8;
si1=64U;
si0+=si1;
l8=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+2967840U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=6U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=24U;
si0+=si1;
l4=si0;
L15:;
{
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l6;
si1=2U;
si0&=si1;
if(si0){
goto L16;
}
si0=l4;
f1452(i,si0);
L16:;
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si0=l5;
si1=-64U;
si0+=si1;
l5=si0;
if(si0){
goto L15;
}
goto L1;
}
L11:;
si0=l5;
si1=l1;
si2=1282352U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+2967840U,si1);
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f1443(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2,si3;
si0=3U;
si1=0U;
si0=f1441(i,si0,si1);
l0=si0;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967840U);
l1=si1;
si2=l0;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+2967840U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
goto L0;
L1:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L2:;
si0=l0;
f15271(i,si0);
si0=l1;
L0:;
return si0;
}

void f1444(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-163230743173927068ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=-4493808902380553279ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f1445(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f1446(i,si0);
UNREACHABLE;
L0:;
}

void f1446(rustpythonInstance*i,U32 l0) {
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
si1=1282368U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1447(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=38U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1282404U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f1445(i,si0);
UNREACHABLE;
L0:;
}

void f1448(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1449(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1282388U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1450(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1282388U;
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

void f1451(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=0U;
l1=si0;
L1:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L2:;
{
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=3U;
si0=si0 < si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l3=si0;
l1=si0;
si0=l2;
if(si0){
goto L1;
}
si0=wasi_snapshot_preview1__sched_yield(i);
si0=l3;
l1=si0;
goto L1;
L4:;
si0=1282564U;
f1447(i,si0);
UNREACHABLE;
L3:;
si0=l0;
si1=l2;
si2=1U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=l2;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
}
}
L0:;
}

void f1452(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L2:;
{
si0=l1;
l2=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0&=si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=2U;
si1|=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=l2;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L3:;
{
si0=l2;
si1=-4U;
si0&=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L4;
}
si0=l3;
l1=si0;
L5:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
}
L4:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L9;
}
L10:;
{
si0=l0;
si1=l2;
si2=1U;
si1&=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L8;
}
si0=l1;
l2=si0;
si0=l1;
si1=4U;
si0=si0 < si1;
if(si0){
goto L10;
}
goto L6;
}
L9:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-3U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
L8:;
si0=1282580U;
f1447(i,si0);
UNREACHABLE;
L7:;
si0=l0;
si1=l2;
si2=-3U;
si1&=si2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=l2;
si3=si3 == si4;
l2=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L1;
}
L6:;
si0=l1;
l2=si0;
goto L3;
}
L1:;
L0:;
}

void f1453(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1282564U;
f1447(i,si0);
UNREACHABLE;
L0:;
}

void f1454(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1282580U;
f1447(i,si0);
UNREACHABLE;
L0:;
}

void f1455(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f1456(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=6U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=33554432U;
si0=si0 < si1;
si1=6U;
si0<<=(si1&31);
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=64U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=6U;
si1<<=(si2&31);
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
f1455(i,si0,si1,si2,si3);
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

void f1457(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-163230743173927068ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=-4493808902380553279ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f1458(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f1459(i,si0);
UNREACHABLE;
L0:;
}

void f1459(rustpythonInstance*i,U32 l0) {
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
si1=1282596U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1460(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=1282768U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=38U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1282729U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
f1458(i,si0);
UNREACHABLE;
L0:;
}

void f1461(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1462(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1282616U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1463(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1282616U;
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

F64 f1464(rustpythonInstance*i,F64 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6;
sd0=l0;
sd1=1;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L1;
}
sd0=l0;
sd1=4294967296;
si0=sd0 < sd1;
sd1=l0;
sd2=0;
si1=sd1 >= sd2;
l1=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
sd0=l0;
si0=I32_TRUNC_U_F64(sd0);
l2=si0;
goto L2;
L3:;
si0=0U;
l2=si0;
L2:;
sd0=l0;
si1=-1U;
si2=l2;
si3=0U;
si4=l1;
si2=si4?si2:si3;
sd3=l0;
sd4=4294967295;
si3=sd3 > sd4;
si1=si3?si1:si2;
l1=si1;
sd1=(F64)(si1);
sd0-=sd1;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L1;
}
sd0=1;
l0=sd0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si1=7U;
si0&=si1;
l3=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=7U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=1U;
l2=si0;
si0=1U;
l1=si0;
goto L5;
L6:;
si0=0U;
si1=l2;
si2=-8U;
si1&=si2;
si0-=si1;
l4=si0;
si0=1U;
l2=si0;
si0=8U;
l1=si0;
L7:;
{
si0=l1;
si1=l1;
si2=-1U;
si1+=si2;
si2=l1;
si3=-2U;
si2+=si3;
si3=l1;
si4=-3U;
si3+=si4;
si4=l1;
si5=-4U;
si4+=si5;
si5=l1;
si6=-5U;
si5+=si6;
si6=l1;
si7=-6U;
si6+=si7;
si7=l1;
si8=-7U;
si7+=si8;
si8=l2;
si7*=si8;
si6*=si7;
si5*=si6;
si4*=si5;
si3*=si4;
si2*=si3;
si1*=si2;
si0*=si1;
l2=si0;
si0=l4;
si1=l1;
si2=8U;
si1+=si2;
l1=si1;
si0+=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l1;
si1=-7U;
si0+=si1;
l1=si0;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
{
si0=l1;
si1=l2;
si0*=si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
sd0=(F64)(si0);
l0=sd0;
L4:;
sd0=l0;
goto L0;
L1:;
sd0=l0;
sd1=0.5;
si0=sd0 < sd1;
if(si0){
goto L10;
}
sd0=l0;
sd1=-1;
sd0+=sd1;
l0=sd0;
sd1=0.5;
sd0+=sd1;
sd1=l0;
sd2=5;
sd1+=sd2;
l5=sd1;
sd2=0.5;
sd1+=sd2;
l6=sd1;
sd1=f15376(i,sd1);
sd0*=sd1;
sd1=0.0012086577526594748;
sd2=l5;
sd1/=sd2;
sd2=24.014098241189721;
sd3=l0;
sd4=3;
sd3+=sd4;
sd2/=sd3;
sd3=76.180091729485028;
sd4=l0;
sd5=1;
sd4+=sd5;
sd3/=sd4;
sd4=0;
sd3+=sd4;
sd4=-86.505320329272053;
sd5=l0;
sd6=2;
sd5+=sd6;
sd4/=sd5;
sd3+=sd4;
sd2+=sd3;
sd3=-1.2317395783752254;
sd4=l0;
sd5=4;
sd4+=sd5;
sd3/=sd4;
sd2+=sd3;
sd1+=sd2;
sd2=-5.3970243871319904e-06;
sd3=l0;
sd4=6;
sd3+=sd4;
sd2/=sd3;
sd1+=sd2;
sd2=1.000000000189712;
sd1+=sd2;
sd1=f15376(i,sd1);
sd2=0.91893853320467267;
sd1+=sd2;
sd2=l6;
sd1-=sd2;
sd0+=sd1;
sd0=f15365(i,sd0);
goto L0;
L10:;
sd0=3.1415926535897931;
sd1=l0;
sd2=3.1415926535897931;
sd1*=sd2;
sd1=f15384(i,sd1);
sd2=1;
sd3=l0;
sd2-=sd3;
sd2=f1464(i,sd2);
sd1*=sd2;
sd0/=sd1;
L0:;
return sd0;
}

F64 f1465(rustpythonInstance*i,F64 l0) {
F64 l1=0;
F64 l2=0;
F64 l3=0;
F64 l4=0;
U32 si0;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9,sd10,sd11,sd12,sd13,sd14,sd15,sd16,sd17,sd18,sd19,sd20,sd21,sd22,sd23,sd24,sd25,sd26,sd27,sd28;
sd0=l0;
sd1=0;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L1;
}
sd0=2;
sd1=l0;
sd2=2;
sd1+=sd2;
sd0/=sd1;
l1=sd0;
sd0=l1;
sd1=l1;
sd2=4;
sd1*=sd2;
sd2=-2;
sd1+=sd2;
l2=sd1;
sd2=l2;
sd3=l2;
sd4=l2;
sd5=l2;
sd6=l2;
sd7=l2;
sd8=l2;
sd9=l2;
sd10=l2;
sd11=l2;
sd12=l2;
sd13=l2;
sd14=l2;
sd15=l2;
sd16=l2;
sd17=l2;
sd18=l2;
sd19=l2;
sd20=l2;
sd21=l2;
sd22=l2;
sd23=l2;
sd24=l2;
sd25=l2;
sd26=l2;
sd27=l2;
sd28=0;
sd27*=sd28;
sd28=1.2099999999999999e-16;
sd27+=sd28;
l3=sd27;
sd26*=sd27;
sd27=-9.3999999999999999e-17;
sd26+=sd27;
l4=sd26;
sd25*=sd26;
sd26=l3;
sd25-=sd26;
sd26=-1.5230000000000001e-15;
sd25+=sd26;
l3=sd25;
sd24*=sd25;
sd25=l4;
sd24-=sd25;
sd25=7.1059999999999999e-15;
sd24+=sd25;
l4=sd24;
sd23*=sd24;
sd24=l3;
sd23-=sd24;
sd24=3.8099999999999998e-16;
sd23+=sd24;
l3=sd23;
sd22*=sd23;
sd23=l4;
sd22-=sd23;
sd23=-1.12708e-13;
sd22+=sd23;
l4=sd22;
sd21*=sd22;
sd22=l3;
sd21-=sd22;
sd22=3.1309199999999997e-13;
sd21+=sd22;
l3=sd21;
sd20*=sd21;
sd21=l4;
sd20-=sd21;
sd21=8.9448700000000004e-13;
sd20+=sd21;
l4=sd20;
sd19*=sd20;
sd20=l3;
sd19-=sd20;
sd20=-6.8860269999999998e-12;
sd19+=sd20;
l3=sd19;
sd18*=sd19;
sd19=l4;
sd18-=sd19;
sd19=2.3940379999999998e-12;
sd18+=sd19;
l4=sd18;
sd17*=sd18;
sd18=l3;
sd17-=sd18;
sd18=9.6467910999999994e-11;
sd17+=sd18;
l3=sd17;
sd16*=sd17;
sd17=l4;
sd16-=sd17;
sd17=-2.27365122e-10;
sd16+=sd17;
l4=sd16;
sd15*=sd16;
sd16=l3;
sd15-=sd16;
sd16=-9.9136415599999992e-10;
sd15+=sd16;
l3=sd15;
sd14*=sd15;
sd15=l4;
sd14-=sd15;
sd15=5.0593434950000004e-09;
sd14+=sd15;
l4=sd14;
sd13*=sd14;
sd14=l3;
sd13-=sd14;
sd14=6.5290544390000001e-09;
sd13+=sd14;
l3=sd13;
sd12*=sd13;
sd13=l4;
sd12-=sd13;
sd13=-8.5238095914999995e-08;
sd12+=sd13;
l4=sd12;
sd11*=sd12;
sd12=l3;
sd11-=sd12;
sd12=1.5626441722000001e-08;
sd11+=sd12;
l3=sd11;
sd10*=sd11;
sd11=l4;
sd10-=sd11;
sd11=1.30365583558e-06;
sd10+=sd11;
l4=sd10;
sd9*=sd10;
sd10=l3;
sd9-=sd10;
sd10=-1.624290004647e-06;
sd9+=sd10;
l3=sd9;
sd8*=sd9;
sd9=l4;
sd8-=sd9;
sd9=-2.0278578112534001e-05;
sd8+=sd9;
l4=sd8;
sd7*=sd8;
sd8=l3;
sd7-=sd8;
sd8=4.2523324806907003e-05;
sd7+=sd8;
l3=sd7;
sd6*=sd7;
sd7=l4;
sd6-=sd7;
sd7=0.00036683949785276101;
sd6+=sd7;
l4=sd6;
sd5*=sd6;
sd6=l3;
sd5-=sd6;
sd6=-0.00094659534448203605;
sd5+=sd6;
l3=sd5;
sd4*=sd5;
sd5=l4;
sd4-=sd5;
sd5=-0.0095615147868086305;
sd4+=sd5;
l4=sd4;
sd3*=sd4;
sd4=l3;
sd3-=sd4;
sd4=0.019476473204185836;
sd3+=sd4;
l3=sd3;
sd2*=sd3;
sd3=l4;
sd2-=sd3;
sd3=0.64196979235649021;
sd2+=sd3;
sd1*=sd2;
sd2=-1.3026537197817094;
sd1+=sd2;
sd2=0.5;
sd1*=sd2;
sd2=l0;
sd3=l0;
sd2*=sd3;
sd1-=sd2;
sd2=l3;
sd1-=sd2;
sd1=f15365(i,sd1);
sd0*=sd1;
goto L0;
L1:;
f1460(i);
UNREACHABLE;
L0:;
return sd0;
}

U32 f1466(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L3;
}
L4:;
si0=l2;
si1=40U;
si0+=si1;
l3=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=32U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1283156U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1282820U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=450U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1282932U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si0=344U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si2=256U;
si0=f15392(i,si0,si1,si2);
si0=l3;
si1=312U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+304U,sj1);
si0=l3;
si1=296U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=292U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l3;
si1=280U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=276U;
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l3;
sj1=65536ULL;
i64_store(&i->m0,(U64)si0+328U,sj1);
si0=l3;
sj1=65536ULL;
i64_store(&i->m0,(U64)si0+320U,sj1);
si0=l3;
si1=64U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l3;
si1=300U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=284U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L6;
}
si0=l1;
f15271(i,si0);
L6:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=8U;
si1=344U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f1467(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1283063U;
si2=11U;
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
si1=1283060U;
si2=3U;
si3=l2;
si4=4U;
si3+=si4;
si4=1283076U;
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

void f1468(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1469(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1282972U;
si2=8U;
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
si1=1282980U;
si2=4U;
si3=l0;
si4=264U;
si3+=si4;
si4=1283020U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=64U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1282984U;
si2=10U;
si3=l2;
si4=12U;
si3+=si4;
si4=1282996U;
si0=f715(i,si0,si1,si2,si3,si4);
si1=1283012U;
si2=5U;
si3=l0;
si4=256U;
si3+=si4;
si4=1282996U;
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

U32 f1470(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f1471(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1472(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1473(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1282972U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1283052U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
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

void f1474(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1475(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=40U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1283092U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1476(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1477(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
L0:;
}

void f1478(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=8022581950583112360ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=-6873779364335875264ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

U32 f1479(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

U32 f1480(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=458U;
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
si1=1283132U;
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

void f1481(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1482(rustpythonInstance*i,U32 l0,U32 l1) {
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
sj0=(U64)(si0);
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

U32 f1483(rustpythonInstance*i,U32 l0,U32 l1) {
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
sj0=(U64)(si0);
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

U32 f1484(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f1485(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f1486(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1283228U;
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
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1283242U;
si2=3U;
si3=l2;
si4=8U;
si3+=si4;
si4=1283248U;
si0=f715(i,si0,si1,si2,si3,si4);
l1=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1283264U;
si2=6U;
si3=l2;
si4=12U;
si3+=si4;
si4=1283248U;
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

void f1487(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=1U;
l5=si0;
si0=l4;
si1=1U;
i32_store16(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l4;
sj1=261993005057ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=61U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f1488(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
L8:;
si0=l5;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f1488(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
if(si0){
goto L10;
}
si0=0U;
l7=si0;
goto L9;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L12;
}
si0=1U;
l7=si0;
goto L11;
L12:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
L11:;
si0=l7;
si1=l6;
si2=l5;
si0=f15390(i,si0,si1,si2);
L9:;
si0=l3;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L13;
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
goto L15;
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
goto L14;
case 16:
goto L1;
case 17:
goto L1;
case 18:
goto L16;
default:
goto L1;
}
L16:;
si0=l2;
si1=1285639U;
si2=21U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=l2;
si1=1285660U;
si2=10U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l2;
si1=1285670U;
si2=18U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=72U;
si0+=si1;
si1=l7;
si2=l5;
si3=10U;
f686(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
if(si0){
goto L17;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+80U);
l8=sj0;
si0=!(sj0);
if(si0){
goto L18;
}
sj0=l8;
sj1=640ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L17;
}
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L17:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=100U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1285868U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=1283300U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=1U;
si2=1285876U;
si3=0U;
si4=l4;
f954(i,si0,si1,si2,si3,si4);
L19:;
si0=1U;
f15040(i,si0);
UNREACHABLE;
L13:;
si0=l2;
si1=1285636U;
si2=3U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L7:;
si0=1285576U;
si1=43U;
si2=1285620U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1285576U;
si1=43U;
si2=1285688U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1488(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1283380U;
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

void f1489(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
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
L1:;
L0:;
}

void f1490(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1491(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
f1507(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L2:;
si0=l1;
f1491(i,si0);
si0=l1;
f15271(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+36U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
f15271(i,si0);
L3:;
L0:;
}

void f1492(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
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
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 l55=0;
U32 l56=0;
U64 l57=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=1440U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=10U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1283404U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1283396U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=42949672970ULL;
i64_store(&i->m0,(U64)si0+972U,sj1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+968U,si1);
si0=l1;
si1=32U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f248(i,si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+48U);
sj2=8192ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+144U);
l3=sj0;
si0=l1;
si1=344U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=l1;
si2=160U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
si1=l1;
si2=32U;
si1+=si2;
si2=136U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=368U;
si0+=si1;
l5=si0;
si1=l1;
si2=32U;
si1+=si2;
si2=144U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=32U;
si0+=si1;
l6=si0;
si1=l1;
si2=32U;
si1+=si2;
si2=152U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=384U;
si0+=si1;
l7=si0;
si1=l1;
si2=32U;
si1+=si2;
si2=160U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=196U;
si1+=si2;
si2=148U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
si2=96U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=136U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=144U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=152U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=160U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0+1080U,sj1);
si0=l1;
si1=5U;
i32_store(&i->m0,(U64)si0+1076U,si1);
si0=l1;
si1=1283406U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1096U,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=172U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=8U;
si1+=si2;
si2=140U;
si0=f15390(i,si0,si1,si2);
l8=si0;
si0=l1;
si1=60U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=1283468U;
i32_store(&i->m0,(U64)si0+1132U,si1);
si0=l1;
si1=42U;
i32_store(&i->m0,(U64)si0+1092U,si1);
si0=l1;
si1=1283426U;
i32_store(&i->m0,(U64)si0+1088U,si1);
si0=l1;
si1=15U;
i32_store(&i->m0,(U64)si0+1068U,si1);
si0=l1;
si1=1283411U;
i32_store(&i->m0,(U64)si0+1064U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+932U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+920U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+908U,si1);
si0=l1;
sj1=5126ULL;
i64_store(&i->m0,(U64)si0+892U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+880U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+872U,si1);
si0=l1;
sj1=6ULL;
i64_store(&i->m0,(U64)si0+860U,sj1);
si0=l1;
si1=1283528U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0+848U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+836U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+824U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1283534U;
si3=12U;
f444(i,si0,si1,si2,si3);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=236U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=656U;
si0+=si1;
si1=248U;
si0+=si1;
l9=si0;
si1=l1;
si2=344U;
si1+=si2;
si2=248U;
si1+=si2;
l10=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=256U;
si0+=si1;
l11=si0;
si1=l1;
si2=344U;
si1+=si2;
si2=256U;
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=264U;
si0+=si1;
l13=si0;
si1=l1;
si2=344U;
si1+=si2;
si2=264U;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=272U;
si0+=si1;
l15=si0;
si1=l1;
si2=344U;
si1+=si2;
si2=272U;
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=280U;
si0+=si1;
l17=si0;
si1=l1;
si2=344U;
si1+=si2;
si2=280U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=288U;
si0+=si1;
l19=si0;
si1=l1;
si2=344U;
si1+=si2;
si2=288U;
si1+=si2;
l20=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=296U;
si0+=si1;
l21=si0;
si1=l1;
si2=344U;
si1+=si2;
si2=296U;
si1+=si2;
l22=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+896U,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+580U);
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0+892U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=276U;
si0+=si1;
l23=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=264U;
si0+=si1;
l5=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=252U;
si0+=si1;
l24=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=236U;
si0+=si1;
l25=si0;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=224U;
si0+=si1;
l6=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=216U;
si0+=si1;
l26=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=204U;
si0+=si1;
l27=si0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=192U;
si0+=si1;
l28=si0;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=180U;
si0+=si1;
l29=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1283546U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1136U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1080U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1283546U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l1;
si1=344U;
si0+=si1;
si1=236U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l30=si1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=236U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=296U;
si0+=si1;
l31=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=288U;
si0+=si1;
l32=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=280U;
si0+=si1;
l33=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=272U;
si0+=si1;
l34=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=256U;
si0+=si1;
l35=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=248U;
si0+=si1;
l36=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+1208U,sj1);
si0=l1;
si1=l30;
si2=4130U;
si1|=si2;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1283547U;
si3=9U;
f444(i,si0,si1,si2,si3);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=208U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=232U;
si0+=si1;
l37=si0;
si1=l1;
si2=344U;
si1+=si2;
si2=232U;
si1+=si2;
l38=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
si2=344U;
si1+=si2;
si2=224U;
si1+=si2;
l39=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l36;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l35;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l33;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+560U);
i64_store(&i->m0,(U64)si0+1184U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+1208U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+580U);
l30=si0;
si0=l1;
si1=1283556U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=33U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=l30;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=656U;
si0+=si1;
si1=276U;
si0+=si1;
l40=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=252U;
si0+=si1;
l41=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=236U;
si0+=si1;
l42=si0;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=224U;
si0+=si1;
l30=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=216U;
si0+=si1;
l43=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=204U;
si0+=si1;
l44=si0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=192U;
si0+=si1;
l45=si0;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=180U;
si0+=si1;
l46=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1283589U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+824U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1283589U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l47=si1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=236U;
si0=f15390(i,si0,si1,si2);
si0=l21;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+896U,sj1);
si0=l1;
si1=l47;
si2=4130U;
si1|=si2;
i32_store(&i->m0,(U64)si0+892U,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1283590U;
si3=12U;
f444(i,si0,si1,si2,si3);
si0=l7;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=208U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=656U;
si0+=si1;
si1=232U;
si0+=si1;
l48=si0;
si1=l38;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=l39;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+560U);
i64_store(&i->m0,(U64)si0+872U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+896U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+580U);
l47=si0;
si0=l1;
si1=1283602U;
i32_store(&i->m0,(U64)si0+864U,si1);
si0=l1;
si1=28U;
i32_store(&i->m0,(U64)si0+868U,si1);
si0=l1;
si1=l47;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0+892U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1244U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1232U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1220U,si1);
si0=l1;
sj1=5158ULL;
i64_store(&i->m0,(U64)si0+1204U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1192U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1184U,si1);
si0=l1;
sj1=11ULL;
i64_store(&i->m0,(U64)si0+1172U,sj1);
si0=l1;
si1=1283630U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0+1160U,sj1);
si0=l1;
sj1=11ULL;
i64_store(&i->m0,(U64)si0+1144U,sj1);
si0=l1;
si1=1283641U;
i32_store(&i->m0,(U64)si0+1140U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1080U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1283652U;
si3=12U;
f444(i,si0,si1,si2,si3);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+376U,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=208U;
si0=f15390(i,si0,si1,si2);
si0=l37;
si1=l38;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l39;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l36;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l35;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l33;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+560U);
i64_store(&i->m0,(U64)si0+1184U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+1208U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+580U);
l7=si0;
si0=l1;
si1=1283664U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=106U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=l7;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l45;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1283770U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+824U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1283778U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=208U;
si0=f15390(i,si0,si1,si2);
si0=l43;
si1=l1;
si2=344U;
si1+=si2;
si2=216U;
si1+=si2;
l49=si1;
si2=88U;
si0=f15390(i,si0,si1,si2);
l50=si0;
si0=l1;
si1=58U;
i32_store(&i->m0,(U64)si0+868U,si1);
si0=l1;
si1=1283779U;
i32_store(&i->m0,(U64)si0+864U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l26;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
sj1=7ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l28;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1283837U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1136U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+1080U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1283844U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=208U;
si0=f15390(i,si0,si1,si2);
si0=l26;
si1=l49;
si2=88U;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l1;
si1=50U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=1283845U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
sj1=1028ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
sj1=5ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l45;
sj1=4290672329703ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1283895U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+824U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
sj1=1114112ULL;
i64_store(&i->m0,(U64)si0+768U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1283900U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l1;
si1=344U;
si0+=si1;
si1=212U;
si0+=si1;
l26=si0;
si1=17U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=208U;
si0+=si1;
l43=si0;
si1=1283901U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=240U;
si0+=si1;
l47=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=208U;
si0+=si1;
l51=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=5U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=196U;
si0+=si1;
l52=si0;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1283918U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1283923U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l26;
si1=20U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=1283924U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=240U;
si0+=si1;
l53=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=208U;
si0+=si1;
l54=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=196U;
si0+=si1;
l55=si0;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=172U;
si0+=si1;
l56=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1283944U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1283951U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l26;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=1283952U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=12U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1283999U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1284011U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l26;
si1=42U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=1284012U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l53;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l55;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l56;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1284054U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1284061U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l26;
si1=43U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=1284062U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=19U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1284105U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1284124U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l26;
si1=32U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=1284125U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l53;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=18U;
i32_store(&i->m0,(U64)si0,si1);
si0=l55;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l56;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1284157U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1284175U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l26;
si1=55U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=1284176U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=7U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1284231U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1284238U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l26;
si1=62U;
i32_store(&i->m0,(U64)si0,si1);
si0=l43;
si1=1284239U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l40;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l41;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l53;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l42;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l50;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l44;
si1=21U;
i32_store(&i->m0,(U64)si0,si1);
si0=l55;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l45;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l46;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l56;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1284301U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=1284322U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l26=si1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=192U;
si0=f15390(i,si0,si1,si2);
si0=l48;
si1=l38;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l30;
si1=l39;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+560U);
i64_store(&i->m0,(U64)si0+872U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+896U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+664U,sj1);
si0=l1;
si1=1284323U;
i32_store(&i->m0,(U64)si0+864U,si1);
si0=l1;
si1=34U;
i32_store(&i->m0,(U64)si0+868U,si1);
si0=l1;
si1=l26;
si2=34U;
si1|=si2;
i32_store(&i->m0,(U64)si0+892U,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=15U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1284357U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1284372U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si2=192U;
si0=f15390(i,si0,si1,si2);
l30=si0;
si0=l37;
si1=l38;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l39;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l36;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l35;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l33;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l32;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+560U);
i64_store(&i->m0,(U64)si0+1184U,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+584U);
i64_store(&i->m0,(U64)si0+1208U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+976U,sj1);
si0=l1;
si1=1284373U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=61U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=l13;
si2=34U;
si1|=si2;
i32_store(&i->m0,(U64)si0+1204U,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+944U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+932U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+920U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+908U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+896U,si1);
si0=l1;
si1=1060U;
i32_store(&i->m0,(U64)si0+892U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+880U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+872U,si1);
si0=l1;
si1=73U;
i32_store(&i->m0,(U64)si0+868U,si1);
si0=l1;
si1=1284462U;
i32_store(&i->m0,(U64)si0+864U,si1);
si0=l1;
si1=21U;
i32_store(&i->m0,(U64)si0+860U,si1);
si0=l1;
si1=1284434U;
i32_store(&i->m0,(U64)si0+856U,si1);
si0=l1;
si1=999U;
i32_store(&i->m0,(U64)si0+852U,si1);
si0=l1;
si1=999U;
i32_store(&i->m0,(U64)si0+848U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+836U,si1);
si0=l1;
si1=21U;
i32_store(&i->m0,(U64)si0+832U,si1);
si0=l1;
si1=1284434U;
i32_store(&i->m0,(U64)si0+828U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+824U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+808U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+784U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+772U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+768U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+760U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+744U,si1);
si0=l1;
si1=7U;
i32_store(&i->m0,(U64)si0+740U,si1);
si0=l1;
si1=1284455U;
i32_store(&i->m0,(U64)si0+736U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+728U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+720U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+704U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+688U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+672U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+664U,sj1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=13U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1284535U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1284548U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=2U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=208U;
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=l49;
si2=88U;
si0=f15390(i,si0,si1,si2);
l2=si0;
si0=l1;
si1=87U;
i32_store(&i->m0,(U64)si0+1180U,si1);
si0=l1;
si1=1284549U;
i32_store(&i->m0,(U64)si0+1176U,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l24;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l47;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=1028U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l51;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l27;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l52;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l28;
si1=999U;
i32_store(&i->m0,(U64)si0,si1);
si0=l29;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1284636U;
i32_store(&i->m0,(U64)si0+1168U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1136U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1256U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1120U,sj1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1096U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1084U,si1);
si0=l1;
si1=1114112U;
i32_store(&i->m0,(U64)si0+1080U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1072U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1056U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+1016U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1000U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+968U,sj1);
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
si2=1284646U;
si3=1U;
f1513(i,si0,si1,si2,si3);
si0=l1;
si1=656U;
si0+=si1;
si1=212U;
si0+=si1;
si1=113U;
i32_store(&i->m0,(U64)si0,si1);
si0=l54;
si1=1284647U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=304U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f250(i,si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=312U;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=344U;
si0+=si1;
si1=l1;
si2=968U;
si1+=si2;
f401(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=7U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=l2;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1959827U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1959824U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1060U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=968U;
si0+=si1;
si1=32U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1036U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1020U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1012U;
si0+=si1;
sj1=17179869184ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
i32_store16(&i->m0,(U64)si0+1066U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+1052U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+976U,sj1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+992U,sj1);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+1063U,si1);
si0=l1;
si1=0U;
i32_store16(&i->m0,(U64)si0+1061U,si1);
si0=l1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+1028U,sj1);
si0=l1;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+1004U,sj1);
si0=l1;
si1=1044U;
si0+=si1;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=256U;
i32_store16(&i->m0,(U64)si0+1064U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+968U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1068U,si1);
si0=l1;
si1=l1;
si2=344U;
si1+=si2;
si2=1284231U;
si3=7U;
si1=f1530(i,si1,si2,si3);
l2=si1;
i32_store8(&i->m0,(U64)si0+1061U,si1);
si0=l1;
si1=l1;
si2=344U;
si1+=si2;
si2=1284157U;
si3=18U;
si1=f1530(i,si1,si2,si3);
l6=si1;
i32_store8(&i->m0,(U64)si0+1058U,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=1283546U;
si2=1U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l1;
si1=344U;
si0+=si1;
si1=1283589U;
si2=1U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=1U;
l5=si0;
si0=l1;
si1=344U;
si0+=si1;
si1=1283528U;
si2=6U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=1U;
si1=10U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283944U;
si2=7U;
si0=f1530(i,si0,si1,si2);
l5=si0;
L1:;
si0=l1;
si1=l5;
i32_store8(&i->m0,(U64)si0+1054U,si1);
si0=l1;
si1=l1;
si2=344U;
si1+=si2;
si2=1284535U;
si3=13U;
sj1=f1531(i,si1,si2,si3);
i64_store(&i->m0,(U64)si0+976U,sj1);
si0=l1;
si1=l1;
si2=344U;
si1+=si2;
si2=1284054U;
si3=7U;
si1=f1530(i,si1,si2,si3);
i32_store8(&i->m0,(U64)si0+1057U,si1);
si0=l2;
si1=l6;
si0|=si1;
l27=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=344U;
si0+=si1;
si1=1283895U;
si2=5U;
si0=f1530(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1052U,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=1283944U;
si2=7U;
si0=f1530(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1053U,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=1283770U;
si2=8U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L14;
}
goto L13;
L19:;
si0=l1;
si1=1288U;
si0+=si1;
si1=1284760U;
si2=14U;
f14979(i,si0,si1,si2);
si0=l1;
si1=704U;
si0+=si1;
l2=si0;
si1=l1;
si2=1296U;
si1+=si2;
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=14U;
i32_store(&i->m0,(U64)si0+692U,si1);
si0=l1;
si1=1284760U;
i32_store(&i->m0,(U64)si0+688U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1288U);
i64_store(&i->m0,(U64)si0+696U,sj1);
si0=l1;
si1=1016U;
si0+=si1;
l6=si0;
si1=l1;
si2=656U;
si1+=si2;
f1501(i,si0,si1);
si0=l1;
si1=1288U;
si0+=si1;
si1=1284774U;
si2=10U;
f14979(i,si0,si1,si2);
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=10U;
i32_store(&i->m0,(U64)si0+692U,si1);
si0=l1;
si1=1284774U;
i32_store(&i->m0,(U64)si0+688U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1288U);
i64_store(&i->m0,(U64)si0+696U,sj1);
si0=l6;
si1=l1;
si2=656U;
si1+=si2;
f1501(i,si0,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=1283895U;
si2=5U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L23;
}
si0=l1;
si1=656U;
si0+=si1;
si1=1284784U;
si2=11U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
l2=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+660U);
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
f15271(i,si0);
L23:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1052U,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=1283944U;
si2=7U;
si0=f1530(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L21;
}
goto L20;
L22:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283944U;
si2=7U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L20;
}
L21:;
si0=l1;
si1=656U;
si0+=si1;
si1=1284795U;
si2=13U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
l2=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+660U);
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
f15271(i,si0);
L20:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1053U,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=1283770U;
si2=8U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L14;
}
goto L11;
L18:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283944U;
si2=7U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L15;
}
L17:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283770U;
si2=8U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L14;
}
goto L13;
L16:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283770U;
si2=8U;
si0=f1530(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L11;
}
goto L14;
L15:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1053U,si1);
si0=l1;
si1=344U;
si0+=si1;
si1=1283770U;
si2=8U;
si0=f1530(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283770U;
si2=8U;
sj0=f1531(i,si0,si1,si2);
l3=sj0;
sj1=256ULL;
si0=sj0 >= sj1;
if(si0){
goto L12;
}
si0=l1;
sj1=l3;
i64_store8(&i->m0,(U64)si0+1066U,sj1);
L13:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283837U;
si2=7U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L10;
}
si0=l27;
if(si0){
goto L8;
}
goto L9;
L12:;
si0=1285452U;
si1=43U;
si2=l1;
si3=656U;
si2+=si3;
si3=1285528U;
si4=1285560U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l1;
si1=1288U;
si0+=si1;
si1=1284808U;
si2=14U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1288U);
l23=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1292U);
l29=si0;
si0=l1;
si1=656U;
si0+=si1;
si1=l23;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+1296U);
l5=si2;
f756(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si1=664U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
L26:;
si0=1U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L27;
}
si0=l23;
l2=si0;
si0=l23;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L29;
case 1:
goto L28;
case 2:
goto L30;
default:
goto L28;
}
L30:;
si0=1U;
l6=si0;
si0=l23;
l2=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L28;
}
goto L27;
L29:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l23;
si1=1U;
si0+=si1;
l2=si0;
L28:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=0U;
l24=si0;
L32:;
{
si0=l5;
if(si0){
goto L33;
}
si0=l24;
l6=si0;
goto L27;
L33:;
si0=1U;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l13=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l24;
si1=255U;
si0&=si1;
si1=10U;
si0*=si1;
l24=si0;
si1=8U;
si0>>=(si1&31);
if(si0){
goto L27;
}
si0=l13;
si1=l25;
si2=l13;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
l28=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l13;
l25=si0;
si0=l24;
si1=255U;
si0&=si1;
si1=l28;
si2=255U;
si1&=si2;
si0+=si1;
l24=si0;
si1=255U;
si0&=si1;
si1=l24;
si0=si0 == si1;
if(si0){
goto L32;
}
goto L27;
}
L31:;
si0=0U;
l6=si0;
L34:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l13=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=1U;
l6=si0;
goto L27;
L35:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=10U;
si0*=si1;
si1=l13;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L34;
}
}
L27:;
si0=l29;
si0=!(si0);
if(si0){
goto L36;
}
si0=l23;
f15271(i,si0);
L36:;
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+1066U,si1);
goto L24;
L25:;
si0=l29;
si0=!(si0);
if(si0){
goto L24;
}
si0=l23;
f15271(i,si0);
L24:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283837U;
si2=7U;
si0=f1530(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283837U;
si2=7U;
sj0=f1531(i,si0,si1,si2);
l3=sj0;
sj1=256ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=l1;
sj1=l3;
i64_store8(&i->m0,(U64)si0+1067U,sj1);
goto L8;
L9:;
si0=l1;
si1=1288U;
si0+=si1;
si1=1284822U;
si2=13U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1288U);
l23=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1292U);
l29=si0;
si0=l1;
si1=656U;
si0+=si1;
si1=l23;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+1296U);
l5=si2;
f756(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l1;
si1=664U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L37;
}
L38:;
si0=1U;
l6=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L39;
}
si0=l23;
l2=si0;
si0=l23;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L41;
case 1:
goto L40;
case 2:
goto L42;
default:
goto L40;
}
L42:;
si0=1U;
l6=si0;
si0=l23;
l2=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L40;
}
goto L39;
L41:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l23;
si1=1U;
si0+=si1;
l2=si0;
L40:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=0U;
l24=si0;
L44:;
{
si0=l5;
if(si0){
goto L45;
}
si0=l24;
l6=si0;
goto L39;
L45:;
si0=1U;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l13=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l24;
si1=255U;
si0&=si1;
si1=10U;
si0*=si1;
l24=si0;
si1=8U;
si0>>=(si1&31);
if(si0){
goto L39;
}
si0=l13;
si1=l25;
si2=l13;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
l28=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l13;
l25=si0;
si0=l24;
si1=255U;
si0&=si1;
si1=l28;
si2=255U;
si1&=si2;
si0+=si1;
l24=si0;
si1=255U;
si0&=si1;
si1=l24;
si0=si0 == si1;
if(si0){
goto L44;
}
goto L39;
}
L43:;
si0=0U;
l6=si0;
L46:;
{
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l13=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L47;
}
si0=1U;
l6=si0;
goto L39;
L47:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=10U;
si0*=si1;
si1=l13;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L46;
}
}
L39:;
si0=l29;
si0=!(si0);
if(si0){
goto L48;
}
si0=l23;
f15271(i,si0);
L48:;
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+1067U,si1);
goto L8;
L37:;
si0=l29;
si0=!(si0);
if(si0){
goto L8;
}
si0=l23;
f15271(i,si0);
L8:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283999U;
si2=12U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L50;
}
si0=l1;
si1=344U;
si0+=si1;
si1=1284231U;
si2=7U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L50;
}
si0=l27;
if(si0){
goto L49;
}
si0=l1;
si1=656U;
si0+=si1;
si1=1284835U;
si2=16U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
l2=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+660U);
si0=!(si0);
if(si0){
goto L50;
}
si0=l2;
f15271(i,si0);
L50:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1056U,si1);
L49:;
si0=l1;
si1=344U;
si0+=si1;
si1=1283918U;
si2=5U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L6;
}
goto L5;
L7:;
si0=1285452U;
si1=43U;
si2=l1;
si3=656U;
si2+=si3;
si3=1285528U;
si4=1285544U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1059U,si1);
L5:;
si0=l1;
si1=344U;
si0+=si1;
si1=1284105U;
si2=19U;
si0=f1530(i,si0,si1,si2);
if(si0){
goto L53;
}
si0=l27;
if(si0){
goto L51;
}
si0=l1;
si1=656U;
si0+=si1;
si1=1284851U;
si2=23U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
l2=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+660U);
si0=!(si0);
if(si0){
goto L54;
}
si0=l2;
f15271(i,si0);
L54:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1060U,si1);
goto L52;
L53:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1060U,si1);
si0=l27;
if(si0){
goto L51;
}
L52:;
si0=l1;
si1=656U;
si0+=si1;
si1=1284874U;
si2=21U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
l2=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+660U);
si0=!(si0);
if(si0){
goto L55;
}
si0=l2;
f15271(i,si0);
L55:;
si0=l1;
si1=1288U;
si0+=si1;
si1=1284874U;
si2=21U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1288U);
l2=si0;
if(si0){
goto L57;
}
goto L56;
L57:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1292U);
l6=si0;
si0=l1;
si1=656U;
si0+=si1;
si1=l2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+1296U);
l5=si2;
f756(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
si1=664U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L56;
}
L58:;
si0=l1;
si1=1288U;
si0+=si1;
si1=l2;
si2=l5;
si3=10U;
f686(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1288U);
if(si0){
goto L59;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+1296U);
l3=sj0;
si0=!(sj0);
if(si0){
goto L60;
}
sj0=l3;
sj1=640ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L59;
}
L60:;
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0+984U,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L51;
}
si0=l2;
f15271(i,si0);
goto L51;
L59:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si0=!(si0);
if(si0){
goto L61;
}
si0=l1;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+660U,si1);
si0=l1;
si1=1285396U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l1;
si1=1283300U;
i32_store(&i->m0,(U64)si0+664U,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=1U;
si2=1285424U;
si3=0U;
si4=l1;
f954(i,si0,si1,si2,si3,si4);
L61:;
si0=1U;
f15040(i,si0);
UNREACHABLE;
L56:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+664U,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+660U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=1285452U;
si1=43U;
si2=l1;
si3=656U;
si2+=si3;
si3=1285496U;
si4=1285512U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L51:;
si0=l1;
si1=24U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=1284434U;
si3=21U;
f1532(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=7U;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+24U);
l5=si2;
si0=si2?si0:si1;
l2=si0;
if(si0){
goto L82;
}
si0=1U;
l6=si0;
goto L81;
L82:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L78;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L80;
}
L81:;
si0=l6;
si1=l5;
si2=1284455U;
si3=l5;
si1=si3?si1:si2;
si2=l2;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1044U);
si0=!(si0);
if(si0){
goto L83;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1040U);
f15271(i,si0);
L83:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+1048U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+1044U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+1040U,si1);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+1286U,si1);
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+1287U,si1);
si0=l1;
si1=1400U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=1284301U;
si3=21U;
f1533(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
si1=1288U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l30;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1308U;
si0+=si1;
si1=l1;
si2=1055U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=1400U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1400U);
l3=sj1;
i64_store(&i->m0,(U64)si0+1288U,sj1);
si0=l1;
si1=1288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=1287U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1292U);
l23=si0;
si0=l1;
si1=l1;
si2=1286U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1300U,si1);
si0=l23;
sj1=l3;
si1=(U32)(sj1);
l2=si1;
si0=si0 == si1;
if(si0){
goto L84;
}
si0=l1;
si1=1288U;
si0+=si1;
si1=12U;
si0+=si1;
l25=si0;
si0=l23;
si1=l2;
si0-=si1;
si1=-12U;
si0+=si1;
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1296U);
l24=si0;
si0=l1;
si1=968U;
si0+=si1;
si1=24U;
si0+=si1;
l28=si0;
L85:;
{
si0=l1;
si1=l2;
si2=12U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+1288U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l2;
si2=l24;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
si1=656U;
si0+=si1;
si1=l25;
si2=l2;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+20U);
f1487(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
si0=!(si0);
if(si0){
goto L84;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1000U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+996U);
si0=si0 != si1;
if(si0){
goto L86;
}
si0=l28;
si1=l2;
si2=l13;
si3=12U;
si2=DIV_U(si2,si3);
si3=1U;
si2+=si3;
f1499(i,si0,si1,si2);
L86:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+992U);
si1=l2;
si2=24U;
si1*=si2;
si0+=si1;
l6=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+656U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1000U,si1);
si0=l13;
si1=-12U;
si0+=si1;
l13=si0;
si0=l5;
l2=si0;
si0=l5;
si1=l23;
si0=si0 != si1;
if(si0){
goto L85;
}
}
L84:;
si0=l1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1286U);
l2=si1;
i32_store8(&i->m0,(U64)si0+1062U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1287U);
if(si0){
goto L89;
}
si0=l27;
if(si0){
goto L87;
}
si0=l1;
si1=656U;
si0+=si1;
si1=1284895U;
si2=25U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
l2=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+660U);
si0=!(si0);
if(si0){
goto L89;
}
si0=l2;
f15271(i,si0);
L89:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1063U,si1);
L88:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1286U);
l2=si0;
L87:;
si0=l1;
si1=1004U;
si0+=si1;
l5=si0;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L79;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=7U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l2;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1284458U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1284455U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1012U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1008U);
si0=si0 != si1;
if(si0){
goto L91;
}
si0=l5;
si1=l6;
f1494(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1012U);
l6=si0;
L91:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1004U);
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1012U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1012U,si1);
goto L79;
L90:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L80:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L79:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+976U);
l3=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L94;
}
si0=1284920U;
l6=si0;
si0=21U;
l2=si0;
sj0=l3;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L92;
case 1:
goto L93;
default:
goto L92;
}
L94:;
si0=1284941U;
l6=si0;
si0=19U;
l2=si0;
L93:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L77;
}
si0=l13;
si1=l6;
si2=l2;
si0=f15390(i,si0,si1,si2);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1012U);
l6=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1008U);
si0=si0 != si1;
if(si0){
goto L95;
}
si0=l5;
si1=l6;
f1494(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1012U);
l6=si0;
L95:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1004U);
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1012U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+1012U,si1);
L92:;
si0=l1;
si1=656U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=1284357U;
si3=15U;
f1533(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+656U);
si0=!(si0);
if(si0){
goto L96;
}
si0=l1;
si1=1320U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+656U);
i64_store(&i->m0,(U64)si0+1320U,sj1);
si0=l5;
si1=l1;
si2=1320U;
si1+=si2;
f1503(i,si0,si1);
L96:;
si0=l1;
si1=1336U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=1283546U;
si3=1U;
f1533(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1336U);
l5=si0;
si0=!(si0);
if(si0){
goto L97;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1340U);
l13=si1;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+1344U);
l23=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l24=si0;
si0=!(si0);
if(si0){
goto L76;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=2U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L75;
}
si0=l6;
si1=25389U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l1;
si1=680U;
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=676U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l1;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+664U,sj1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+660U,si1);
si0=1U;
l29=si0;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l1;
si1=1400U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f1505(i,si0,si1);
si0=1U;
l13=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L98;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L78;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L74;
}
L98:;
si0=l13;
si1=l24;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1408U);
l28=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1404U);
l30=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
l27=si0;
goto L63;
L97:;
si0=l1;
si1=1352U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=1283589U;
si3=1U;
f1533(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1352U);
l5=si0;
si0=!(si0);
if(si0){
goto L99;
}
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1356U);
l13=si1;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l1;
si1=l5;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+1360U);
l23=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l24=si0;
si0=!(si0);
if(si0){
goto L73;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=11U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l6;
si1=7U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1285039U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1285032U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=680U;
si0+=si1;
si1=l23;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=676U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+672U,si1);
si0=l1;
sj1=47244640267ULL;
i64_store(&i->m0,(U64)si0+664U,sj1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+660U,si1);
si0=1U;
l13=si0;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l1;
si1=1400U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f1505(i,si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L100;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L78;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L71;
}
L100:;
si0=l13;
si1=l24;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1408U);
l28=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1404U);
l30=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
l27=si0;
si0=2U;
l29=si0;
goto L63;
L99:;
si0=l1;
si1=1368U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=1283630U;
si3=11U;
f1533(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1368U);
si0=!(si0);
if(si0){
goto L101;
}
si0=l1;
si1=1384U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=1368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1368U);
i64_store(&i->m0,(U64)si0+1384U,sj1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1061U,si1);
si0=l1;
si1=1400U;
si0+=si1;
si1=l1;
si2=1384U;
si1+=si2;
f1504(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1408U);
l28=si0;
if(si0){
goto L106;
}
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=9U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1285064U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1285056U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1404U);
if(si0){
goto L107;
}
si0=l1;
si1=1400U;
si0+=si1;
si1=0U;
f1494(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1408U);
l5=si0;
L107:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
sj1=38654705673ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1408U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+1408U,si1);
si0=9U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1285073U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1285065U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1404U);
si0=si0 != si1;
if(si0){
goto L108;
}
si0=l1;
si1=1400U;
si0+=si1;
si1=l2;
f1494(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1408U);
l2=si0;
L108:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=38654705673ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1408U);
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+1408U,si1);
si0=13U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l5;
si1=5U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1285079U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1285074U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1404U);
si0=si0 != si1;
if(si0){
goto L109;
}
si0=l1;
si1=1400U;
si0+=si1;
si1=l2;
f1494(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1408U);
l2=si0;
L109:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
l2=si0;
sj1=55834574861ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+1408U);
si2=1U;
si1+=si2;
l28=si1;
i32_store(&i->m0,(U64)si0+1408U,si1);
si0=l28;
si0=!(si0);
if(si0){
goto L105;
}
L106:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
l27=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l27;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L110;
}
si0=1U;
si1=l5;
si2=l2;
si0=f15390(i,si0,si1,si2);
goto L102;
L110:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L78;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l13;
si1=l5;
si2=l2;
si0=f15390(i,si0,si1,si2);
l5=si0;
si0=l2;
si1=-7U;
si0+=si1;
switch(si0){
case 0:
goto L104;
case 1:
goto L102;
case 2:
goto L103;
default:
goto L102;
}
L105:;
si0=0U;
si1=0U;
si2=1285088U;
f663(i,si0,si1,si2);
UNREACHABLE;
L104:;
si0=l5;
si1=1285104U;
si2=7U;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L102;
}
goto L64;
L103:;
si0=l5;
si1=1285056U;
si2=9U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L64;
}
L102:;
si0=l1;
si1=668U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+660U,si1);
si0=l1;
si1=1285172U;
i32_store(&i->m0,(U64)si0+656U,si1);
si0=l1;
si1=1283300U;
i32_store(&i->m0,(U64)si0+664U,si1);
si0=l1;
si1=656U;
si0+=si1;
si1=1285180U;
f683(i,si0,si1);
UNREACHABLE;
L101:;
si0=l1;
si1=1424U;
si0+=si1;
si1=l1;
si2=344U;
si1+=si2;
si2=1283528U;
si3=6U;
f1533(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1424U);
si0=!(si0);
if(si0){
goto L114;
}
si0=l1;
si1=656U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=1424U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+1424U);
i64_store(&i->m0,(U64)si0+656U,sj1);
si0=l1;
si1=1400U;
si0+=si1;
si1=l1;
si2=656U;
si1+=si2;
f1504(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1408U);
l28=si0;
si0=!(si0);
if(si0){
goto L111;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
l27=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l27;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L113;
}
si0=1U;
l13=si0;
goto L112;
L114:;
si0=0U;
l29=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l27=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l27;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l27;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l30=si0;
si0=1U;
l28=si0;
si0=1U;
l8=si0;
si0=0U;
l13=si0;
goto L62;
L113:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L78;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si0=f15269(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L65;
}
L112:;
si0=l13;
si1=l5;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=l1;
si1=344U;
si0+=si1;
si1=1283944U;
si2=7U;
si0=f1530(i,si0,si1,si2);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1404U);
l30=si0;
si0=0U;
l29=si0;
goto L62;
L111:;
si0=0U;
si1=0U;
si2=1285196U;
f663(i,si0,si1,si2);
UNREACHABLE;
L78:;
f53(i);
UNREACHABLE;
L77:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L76:;
si0=1284960U;
si1=23U;
si2=1285000U;
f703(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=1U;
si1=2U;
f52(i,si0,si1);
UNREACHABLE;
L74:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L73:;
si0=1284960U;
si1=23U;
si2=1285016U;
f703(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=1U;
si1=11U;
f52(i,si0,si1);
UNREACHABLE;
L71:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L70:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L69:;
si0=1U;
si1=9U;
f52(i,si0,si1);
UNREACHABLE;
L68:;
si0=1U;
si1=13U;
f52(i,si0,si1);
UNREACHABLE;
L67:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L66:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L65:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L64:;
si0=l2;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1404U);
l30=si0;
si0=3U;
l29=si0;
L63:;
L62:;
si0=l1;
si1=1424U;
si0+=si1;
si1=1285212U;
si2=14U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1424U);
l24=si0;
if(si0){
goto L119;
}
si0=0U;
l2=si0;
goto L118;
L119:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1428U);
l10=si0;
si0=l1;
si1=1400U;
si0+=si1;
si1=l24;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+1432U);
l2=si2;
f756(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1400U);
si0=!(si0);
if(si0){
goto L121;
}
si0=l1;
si1=1408U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L120;
}
L121:;
si0=0U;
l25=si0;
si0=l2;
switch(si0){
case 0:
goto L122;
case 1:
goto L123;
case 2:
goto L123;
case 3:
goto L123;
case 4:
goto L123;
case 5:
goto L123;
case 6:
goto L124;
default:
goto L123;
}
L124:;
si0=l24;
si1=1285226U;
si2=6U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L120;
}
L123:;
si0=l24;
l6=si0;
si0=l24;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L128;
case 1:
goto L125;
case 2:
goto L127;
default:
goto L125;
}
L128:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L126;
}
goto L122;
L127:;
si0=l24;
l6=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L125;
}
goto L122;
L126:;
si0=l24;
si1=1U;
si0+=si1;
l6=si0;
L125:;
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L129;
}
si0=0U;
l23=si0;
L130:;
{
si0=l23;
l5=si0;
si0=l2;
si0=!(si0);
l25=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L122;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l23=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L122;
}
si0=l5;
sj0=(U64)(si0);
sj1=10ULL;
sj0*=sj1;
l57=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L122;
}
si0=l23;
si1=l12;
si2=l23;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
l14=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l23;
l12=si0;
si0=l14;
sj1=l57;
si1=(U32)(sj1);
l16=si1;
si0+=si1;
l23=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L130;
}
goto L122;
}
L129:;
si0=0U;
l5=si0;
L131:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l23=si0;
si1=10U;
si0=si0 < si1;
l25=si0;
si0=l23;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L132;
}
goto L122;
L132:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l23;
si1=l5;
si2=10U;
si1*=si2;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L131;
}
}
L122:;
si0=l10;
si0=!(si0);
if(si0){
goto L133;
}
si0=l24;
f15271(i,si0);
L133:;
si0=1U;
l2=si0;
si0=l25;
if(si0){
goto L117;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
if(si0){
goto L116;
}
goto L115;
L120:;
si0=0U;
l2=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L118;
}
si0=l24;
f15271(i,si0);
L118:;
L117:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+972U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+968U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1036U);
l5=si0;
si0=!(si0);
if(si0){
goto L134;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1028U);
l2=si0;
L135:;
{
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L136;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L136:;
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L135;
}
}
L134:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1032U);
si0=!(si0);
if(si0){
goto L137;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+1028U);
f15271(i,si0);
L137:;
si0=l1;
si1=l28;
i32_store(&i->m0,(U64)si0+1036U,si1);
si0=l1;
si1=l30;
i32_store(&i->m0,(U64)si0+1032U,si1);
si0=l1;
si1=l27;
i32_store(&i->m0,(U64)si0+1028U,si1);
si0=l0;
si1=l1;
si2=968U;
si1+=si2;
si2=104U;
si0=f15390(i,si0,si1,si2);
l2=si0;
si1=112U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=108U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=105U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l29;
i32_store8(&i->m0,(U64)si0+104U,si1);
si0=l1;
si1=344U;
si0+=si1;
f1491(i,si0);
si0=l1;
si1=1440U;
si0+=si1;
i->g0=si0;
goto L0;
L116:;
si0=l1;
si1=1412U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+1404U,si1);
si0=l1;
si1=1286000U;
i32_store(&i->m0,(U64)si0+1400U,si1);
si0=l1;
si1=1283300U;
i32_store(&i->m0,(U64)si0+1408U,si1);
si0=l1;
si1=1400U;
si0+=si1;
si1=1U;
si2=1286008U;
si3=0U;
si4=l1;
f954(i,si0,si1,si2,si3,si4);
L115:;
si0=1U;
f15040(i,si0);
UNREACHABLE;
L0:;
}

void f1493(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f1494(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=12U;
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
f1493(i,si0,si1,si2,si3);
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

void f1495(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1493(i,si0,si1,si2,si3);
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

void f1496(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=24U;
si0*=si1;
l4=si0;
si0=l1;
si1=89478486U;
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=24U;
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
f1493(i,si0,si1,si2,si3);
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

void f1497(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
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
f1493(i,si0,si1,si2,si3);
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

void f1498(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1493(i,si0,si1,si2,si3);
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

void f1499(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=24U;
si0*=si1;
l4=si0;
si0=l2;
si1=89478486U;
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
si2=24U;
si1*=si2;
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
f1493(i,si0,si1,si2,si3);
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

void f1500(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=12U;
si1*=si2;
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
f1493(i,si0,si1,si2,si3);
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

void f1501(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
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
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=32U;
si0+=si1;
l3=si0;
si0=l1;
si1=28U;
si0+=si1;
l4=si0;
si0=l1;
si1=24U;
si0+=si1;
l5=si0;
si0=l1;
si1=8U;
si0+=si1;
l6=si0;
L1:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=0U;
l9=si0;
goto L2;
L3:;
si0=1U;
l9=si0;
L2:;
L5:;
{
si0=l9;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
default:
goto L8;
}
L9:;
si0=l7;
l9=si0;
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=l8;
si2=12U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L7;
}
L10:;
si0=l7;
si1=l9;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l10=si0;
si0=l7;
si1=l9;
si0=si0 == si1;
if(si0){
goto L11;
}
L12:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L13:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L14:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
goto L5;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=0U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si1=12U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=l11;
sj2=32ULL;
sj1>>=(sj2&63);
i64_store32(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
f1502(i,si0,si1);
sj0=l11;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l10;
f15271(i,si0);
L18:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L16;
}
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l5;
si1=l9;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L15;
}
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
L20:;
si0=l13;
si1=l9;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l10=si0;
si0=l13;
si1=l9;
si0=si0 == si1;
if(si0){
goto L21;
}
L22:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L23:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l12;
f15271(i,si0);
L24:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l9;
f15271(i,si0);
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l10=si0;
si0=l7;
si1=l9;
si0=si0 == si1;
if(si0){
goto L27;
}
L28:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L29:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L26;
}
si0=l8;
f15271(i,si0);
L26:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l10=si0;
si0=l7;
si1=l9;
si0=si0 == si1;
if(si0){
goto L31;
}
L32:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L33;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L33:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L32;
}
}
L31:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l8;
f15271(i,si0);
L30:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L16:;
si0=l8;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l10=si0;
si0=l14;
si1=l9;
si0=si0 == si1;
if(si0){
goto L35;
}
L36:;
{
si0=l9;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L37:;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L34;
}
si0=l12;
f15271(i,si0);
L34:;
si0=l1;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L15:;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0+4U);
l11=sj0;
goto L4;
L7:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0+4U);
l11=sj0;
goto L4;
L6:;
si0=0U;
l9=si0;
goto L5;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l9=si1;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=0U;
l13=si0;
si0=0U;
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L39;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l12=si0;
L39:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l13=si0;
L40:;
si0=l0;
si1=l9;
si2=l12;
si3=l13;
si2+=si3;
si3=1U;
si2+=si3;
f1500(i,si0,si1,si2);
L38:;
si0=l0;
si1=l9;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
l9=si0;
sj1=l11;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l9;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
}
L0:;
}

void f1502(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
l5=si0;
L9:;
{
si0=l3;
si1=l5;
si0+=si1;
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=58U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=0U;
l7=si0;
si0=l3;
l6=si0;
si0=l4;
l5=si0;
goto L5;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l1;
si1=l5;
si2=-1U;
si1^=si2;
si2=l4;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l7=si0;
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
L5:;
si0=l5;
if(si0){
goto L11;
}
si0=1U;
l8=si0;
goto L10;
L11:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L2;
}
L10:;
si0=l8;
si1=l3;
si2=l5;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=l5;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 == sj1;
if(si0){
goto L12;
}
si0=l2;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1286056U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=473U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1286072U;
f683(i,si0,si1);
UNREACHABLE;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=48U;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967300ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=24U;
si0+=si1;
l11=si0;
si0=1U;
l1=si0;
L14:;
{
si0=0U;
l5=si0;
si0=l4;
if(si0){
goto L20;
}
si0=1U;
l3=si0;
si0=0U;
l4=si0;
si0=l6;
l7=si0;
si0=1U;
l8=si0;
goto L19;
L20:;
L23:;
{
si0=l6;
si1=l5;
si0+=si1;
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=58U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=1U;
l3=si0;
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L23;
}
}
si0=l6;
l7=si0;
si0=l4;
l5=si0;
goto L21;
L22:;
si0=l3;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0^=si1;
si1=l4;
si0+=si1;
l4=si0;
si0=0U;
l3=si0;
L21:;
si0=l5;
if(si0){
goto L24;
}
si0=0U;
l5=si0;
si0=1U;
l8=si0;
goto L19;
L24:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L18;
}
L19:;
si0=l2;
si1=16U;
si0+=si1;
si1=l8;
si2=l6;
si3=l5;
si1=f15390(i,si1,si2,si3);
l8=si1;
si2=l5;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L25;
}
si0=l11;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
}
L25:;
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L16;
}
goto L15;
L18:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=l2;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1286056U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=473U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1286072U;
f683(i,si0,si1);
UNREACHABLE;
L16:;
si0=l2;
si1=l1;
si2=1U;
si3=2U;
si4=l3;
si2=si4?si2:si3;
f1500(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
L15:;
si0=l10;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l6=si0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L14;
}
}
L13:;
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
L4:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=4U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f1503(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si0-=si1;
si1=-12U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L2:;
{
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=l6;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
if(si0){
goto L8;
}
si0=1U;
l9=si0;
goto L7;
L8:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=f15269(i,si0);
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
L7:;
si0=l9;
si1=l8;
si2=l3;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l8;
si2=l5;
si3=12U;
si2=DIV_U(si2,si3);
si3=1U;
si2+=si3;
f1500(i,si0,si1,si2);
L3:;
si0=l0;
si1=l8;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=12U;
si1*=si2;
si0+=si1;
l8=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=-12U;
si0+=si1;
l5=si0;
si0=l7;
l3=si0;
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1504(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+8U);
l6=si2;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l8=si0;
if(si0){
goto L4;
}
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l8;
si1=l7;
si2=l1;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l4;
si1=l5;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l8=si0;
si1=3U;
si2=l8;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si1=178956969U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l7;
si1=1U;
si0+=si1;
l10=si0;
si1=12U;
si0*=si1;
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l7;
si1=178956970U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l7=si0;
si0=l8;
if(si0){
goto L7;
}
si0=l7;
l11=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l8;
si0=f15277(i,si0,si1);
l11=si0;
goto L6;
L8:;
si0=l8;
si0=f15269(i,si0);
l11=si0;
L6:;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=l3;
si0-=si1;
si1=-24U;
si0+=si1;
l9=si0;
si0=12U;
l5=si0;
si0=1U;
l8=si0;
L10:;
{
si0=l2;
si1=l3;
si2=l5;
si1+=si2;
si2=l6;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L15;
}
si0=1U;
l10=si0;
goto L14;
L15:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l10;
si1=l7;
si2=l1;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l8;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 == si1;
if(si0){
goto L12;
}
goto L11;
L13:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l2;
si1=16U;
si0+=si1;
si1=l8;
si2=l9;
si3=12U;
si2=DIV_U(si2,si3);
si3=1U;
si2+=si3;
f1500(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
L11:;
si0=l11;
si1=l5;
si0+=si1;
l7=si0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=-12U;
si0+=si1;
l9=si0;
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
l5=si1;
si0+=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l7;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f1505(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
if(si0){
goto L5;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+8U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
if(si0){
goto L8;
}
si0=1U;
l3=si0;
goto L4;
L8:;
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
l3=si0;
if(si0){
goto L4;
}
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=0U;
si0=si0 != si1;
l5=si0;
si0=1U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L9;
}
si0=0U;
l4=si0;
goto L3;
L9:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
si1=l5;
si0+=si1;
l5=si0;
goto L3;
L4:;
si0=l3;
si1=l5;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l6=sj0;
si0=0U;
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
si0=0U;
l5=si0;
goto L3;
L10:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l5=si0;
L3:;
si0=l5;
si1=3U;
si2=l5;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si1=178956969U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l8;
si1=1U;
si0+=si1;
l9=si0;
si1=12U;
si0*=si1;
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l8;
si1=178956970U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l5;
if(si0){
goto L12;
}
si0=l8;
l10=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l8;
si1=l5;
si0=f15277(i,si0,si1);
l10=si0;
goto L11;
L13:;
si0=l5;
si0=f15269(i,si0);
l10=si0;
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L14;
}
si0=l10;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l13=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=16U;
l8=si0;
si0=1U;
l3=si0;
L15:;
{
si0=l7;
if(si0){
goto L22;
}
si0=l1;
l9=si0;
goto L21;
L22:;
si0=0U;
l9=si0;
si0=l1;
if(si0){
goto L20;
}
L21:;
si0=l4;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=l12;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l2;
si1=l4;
si2=l11;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
if(si0){
goto L23;
}
si0=1U;
l1=si0;
goto L18;
L23:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si0=f15269(i,si0);
l1=si0;
if(si0){
goto L18;
}
si0=1U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=0U;
l9=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 == si1;
if(si0){
goto L24;
}
sj0=l13;
l6=sj0;
goto L16;
L24:;
si0=0U;
l9=si0;
si0=l4;
if(si0){
goto L25;
}
sj0=l13;
l6=sj0;
si0=0U;
l4=si0;
si0=0U;
l5=si0;
goto L17;
L25:;
si0=l12;
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l5=si0;
si0=0U;
l9=si0;
sj0=l13;
l6=sj0;
goto L17;
L19:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l1;
si1=l7;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l5;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l6=sj0;
si0=0U;
l7=si0;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l12;
si1=l4;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
l5=si0;
si0=0U;
l7=si0;
L17:;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=l5;
si3=1U;
si2+=si3;
f1500(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
L16:;
si0=l10;
si1=l8;
si0+=si1;
l5=si0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si1=12U;
si0+=si1;
l8=si0;
si0=l9;
l1=si0;
goto L15;
}
L14:;
si0=l8;
si1=l5;
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

void f1506(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=4U;
l2=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
l5=si0;
si1=12U;
si0=DIV_U(si0,si1);
l6=si0;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=0U;
l10=si0;
si0=l6;
l11=si0;
goto L9;
L10:;
si0=l5;
si1=-2147483645U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=-2147483644U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l11=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l11;
si1=l5;
si0=f15277(i,si0,si1);
l2=si0;
goto L11;
L12:;
si0=l5;
si0=f15269(i,si0);
l2=si0;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=0U;
l1=si0;
si0=0U;
l10=si0;
L14:;
{
si0=l4;
si1=l1;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=l1;
si0+=si1;
l13=si0;
si1=4U;
si0+=si1;
si1=l11;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l11;
si1=12U;
si0+=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L8;
}
L13:;
si0=l11;
si1=12U;
si0+=si1;
l4=si0;
si0=l5;
si1=l1;
si0-=si1;
si1=-12U;
si0+=si1;
si1=12U;
si0=DIV_U(si0,si1);
l11=si0;
L9:;
si0=l3;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
si1=l11;
si2=l8;
si3=12U;
si2*=si3;
si1+=si2;
si2=l7;
si3=12U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
goto L2;
L7:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l4;
si2=l1;
si1-=si2;
si2=12U;
si1=DIV_U(si1,si2);
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
L15:;
{
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L16:;
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L15;
}
}
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L3;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l11;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
si1=l11;
si2=l8;
si3=12U;
si2*=si3;
si1+=si2;
si2=l7;
si3=12U;
si2*=si3;
si0=f15391(i,si0,si1,si2);
L3:;
si0=l9;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L2:;
si0=l9;
si1=l1;
si2=l7;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1507(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=8U;
si0+=si1;
l4=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=l3;
l6=si0;
L4:;
{
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l4;
l0=si0;
L6:;
{
si0=l6;
si1=-320U;
si0+=si1;
l6=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
l0=si0;
sj0=l5;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=0U;
sj2=l5;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=3U;
si2>>=(si3&31);
si1-=si2;
si2=40U;
si1*=si2;
si0+=si1;
l0=si0;
si1=-20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L7:;
si0=l0;
si1=-40U;
si0+=si1;
l0=si0;
si1=28U;
si0+=si1;
l7=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L9:;
{
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L10:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L9;
}
}
L8:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L11:;
sj0=l9;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=l2;
if(si0){
goto L4;
}
}
L2:;
si0=l1;
si1=l1;
si2=1U;
si1+=si2;
sj1=(U64)(si1);
sj2=40ULL;
sj1*=sj2;
si1=(U32)(sj1);
l0=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si0-=si1;
f15271(i,si0);
L1:;
L0:;
}

U32 f1508(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2,si3,si4;
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
goto L4;
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
goto L8;
L10:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
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
sj0=(U64)(si0);
sj1=20ULL;
sj0*=sj1;
l9=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L5;
}
sj0=l9;
si0=(U32)(sj0);
si1=7U;
si0+=si1;
si1=-8U;
si0&=si1;
l10=si0;
si1=l1;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l7=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l7;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=8U;
l12=si0;
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
l12=si0;
goto L12;
L13:;
si0=l7;
si0=f15269(i,si0);
l12=si0;
L12:;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
L11:;
si0=l12;
si1=l10;
si0+=si1;
si1=255U;
si2=l11;
si0=f15392(i,si0,si1,si2);
l12=si0;
si0=l1;
si1=-1U;
si0+=si1;
l10=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l10;
si3=8U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l13=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
if(si0){
goto L14;
}
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L14:;
si0=l11;
si1=-20U;
si0+=si1;
l14=si0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l16=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l17=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=0U;
l2=si0;
L15:;
{
si0=l11;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L16;
}
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l17;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l18;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l14;
si1=0U;
si2=l2;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l7;
si0=si2?si0:si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
f1542(i,si0,si1,si2);
si0=l12;
si1=l10;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+16U);
l9=sj2;
sj3=6364136223846793005ULL;
sj2*=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3+24U);
sj2^=sj3;
sj3=l9;
sj2=I64_ROTL(sj2,sj3);
si2=(U32)(sj2);
l19=si2;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
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
si0=l12;
si1=l7;
si2=l10;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L18;
}
}
L17:;
si0=l12;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l10;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L19:;
si0=l12;
si1=l1;
si0+=si1;
si1=l19;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-20U;
si0*=si1;
si1=l12;
si0+=si1;
si1=-20U;
si0+=si1;
l1=si0;
si1=16U;
si0+=si1;
si1=l2;
si2=-20U;
si1*=si2;
si2=l11;
si1+=si2;
si2=-20U;
si1+=si2;
l7=si1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
L16:;
si0=l2;
si1=l5;
si0=si0 == si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
if(si0){
goto L3;
}
goto L15;
}
L7:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
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
l11=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l12=si0;
si0=0U;
l1=si0;
L22:;
{
si0=l10;
si1=l1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l9;
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
l9=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l9;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=-2U;
si0+=si1;
l12=si0;
if(si0){
goto L22;
}
}
L21:;
si0=l11;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
si1=l1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l9;
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
si0=l10;
si1=l6;
si0+=si1;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L24;
L25:;
si0=l10;
si1=8U;
si0+=si1;
si1=l10;
si2=l6;
si0=f15391(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L23;
}
L24:;
si0=l10;
si1=-20U;
si0+=si1;
l20=si0;
si0=l2;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l16=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l17=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=0U;
l1=si0;
L26:;
{
si0=l10;
si1=l1;
l6=si1;
si0+=si1;
l13=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l20;
si1=0U;
si2=l6;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l11=si0;
si0=l6;
si1=-20U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-20U;
si0+=si1;
l7=si0;
L29:;
{
si0=l3;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l17;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l18;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l15;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si0=si2?si0:si1;
si1=l11;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l3;
f1542(i,si0,si1,si2);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
l9=sj1;
sj2=6364136223846793005ULL;
sj1*=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+24U);
sj1^=sj2;
sj2=l9;
sj1=I64_ROTL(sj1,sj2);
si1=(U32)(sj1);
l19=si1;
si0&=si1;
l2=si0;
l12=si0;
si0=l10;
si1=l2;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L30;
}
si0=8U;
l1=si0;
si0=l2;
l12=si0;
L31:;
{
si0=l12;
si1=l1;
si0+=si1;
l12=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l10;
si1=l12;
si2=l5;
si1&=si2;
l12=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l9=sj0;
si0=!(sj0);
if(si0){
goto L31;
}
}
L30:;
si0=l10;
sj1=l9;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l12;
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
si0=l10;
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
si1=l2;
si0-=si1;
si1=l6;
si2=l2;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l10;
si1=l1;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l12;
si1=l19;
si2=25U;
si1>>=(si2&31);
l19=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l19;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-20U;
si0*=si1;
si1=l10;
si0+=si1;
si1=-20U;
si0+=si1;
l1=si0;
si0=l2;
si1=255U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l19=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l19;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l19=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l19;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l19=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l1;
si1=l19;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+13U);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+14U);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l19=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+15U);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si1=l19;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l12=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+17U);
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+18U);
l2=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+18U);
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+19U);
l19=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+19U);
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l14=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l12;
i32_store8(&i->m0,(U64)si0+17U,si1);
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+18U,si1);
si0=l1;
si1=l19;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=l1;
si1=l14;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L29;
L33:;
}
si0=l13;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
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
si1=l19;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l10;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L27:;
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
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
goto L1;
L6:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1171700U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1171708U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1171792U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si1=l6;
sj1=(U64)(si1);
sj2=20ULL;
sj1*=sj2;
si1=(U32)(sj1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l11;
si1=l1;
si0-=si1;
f15271(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=-2147483647U;
L0:;
return si0;
}

void f1509(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1286088U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=473U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=32U;
si0+=si1;
f15028(i,si0);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972504U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=2972472U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
f15018(i,si0);
L1:;
si0=l4;
si1=2972472U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f15021(i,si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972468U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=2972444U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
f15012(i,si0);
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972444U);
l3=si0;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972444U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l3;
if(si0){
goto L5;
}
si0=0U;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=f15014(i);
si1=1U;
si0^=si1;
l3=si0;
L6:;
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=2972444U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f1524(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=f15014(i);
if(si0){
goto L7;
}
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L7:;
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
if(si0){
goto L8;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=32U;
si1+=si2;
si2=4U;
si1|=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L9:;
si0=l4;
si1=40U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L12;
case 3:
goto L11;
default:
goto L14;
}
L14:;
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=f14991(i,si0);
si1=255U;
si0&=si1;
l3=si0;
goto L10;
L13:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+41U);
l3=si0;
goto L10;
L12:;
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
goto L10;
L11:;
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
L10:;
si0=l3;
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L15:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=3U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
f15271(i,si0);
L16:;
si0=l0;
f15271(i,si0);
goto L2;
L5:;
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1991652U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1510(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1511(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f10952(i,si0,si1);
L0:;
return si0;
}

U32 f1512(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

void f1513(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=l2;
si1=l3;
si0+=si1;
l4=si0;
si0=0U;
l5=si0;
si0=l2;
l6=si0;
L2:;
{
si0=l5;
l7=si0;
si0=1114112U;
l8=si0;
si0=l6;
l5=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l5;
si1=1U;
si0+=si1;
l6=si0;
si0=l9;
si1=255U;
si0&=si1;
l9=si0;
goto L3;
L4:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l9;
si1=31U;
si0&=si1;
l10=si0;
si0=l9;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l9=si0;
si0=l5;
si1=2U;
si0+=si1;
l6=si0;
goto L3;
L5:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l9;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l6;
si1=l10;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
si0=l5;
si1=3U;
si0+=si1;
l6=si0;
goto L3;
L6:;
si0=1114112U;
l8=si0;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l5;
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
goto L1;
}
si0=l5;
si1=4U;
si0+=si1;
l6=si0;
L3:;
si0=l7;
si1=l5;
si0-=si1;
si1=l6;
si0+=si1;
l5=si0;
si0=l9;
si1=45U;
si0=si0 == si1;
if(si0){
goto L2;
}
}
si0=1114112U;
l8=si0;
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l7;
si0+=si1;
l6=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l5;
si1=255U;
si0&=si1;
l8=si0;
goto L1;
L7:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l9=si0;
si0=l5;
si1=31U;
si0&=si1;
l7=si0;
si0=l5;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l8=si0;
goto L1;
L8:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l9;
si1=l7;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l8=si0;
goto L1;
L9:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l6;
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
l8=si0;
L1:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l0;
si1=l1;
si2=304U;
si0=f15390(i,si0,si1,si2);
L0:;
}

void f1514(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=512U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
f4198(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l3=si0;
si1=-1U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+4U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=112U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f1522(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+96U);
l3=si0;
si1=-1U;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+4U);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=64U;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=56U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si2=l4;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=496U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f1506(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=46U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=38U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286230U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286224U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286216U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286208U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286200U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286192U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
f1494(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
sj1=197568495662ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+64U);
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+504U);
l1=si0;
si1=12U;
si0*=si1;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+500U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+496U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l4;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l3;
si1=56U;
si0+=si1;
si1=l4;
si2=l1;
f1500(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l4=si0;
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=l4;
si2=12U;
si1*=si2;
si0+=si1;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
f15271(i,si0);
L6:;
si0=l2;
si1=512U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1687124U;
si1=71U;
si2=1687196U;
f703(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1286112U;
si1=43U;
si2=1286176U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1U;
si1=46U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1515(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1516(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=272U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=7U;
l5=si0;
si0=7U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1959827U);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1959824U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
sj0=0ULL;
l7=sj0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=-1ULL;
l8=sj0;
si0=4U;
l9=si0;
si0=1U;
l10=si0;
si0=0U;
l11=si0;
si0=1U;
l12=si0;
si0=0U;
l13=si0;
si0=0U;
l14=si0;
si0=0U;
l15=si0;
si0=0U;
l16=si0;
si0=7U;
l17=si0;
si0=0U;
l18=si0;
si0=0U;
l19=si0;
si0=0U;
l20=si0;
si0=0U;
l21=si0;
si0=4U;
l22=si0;
si0=0U;
l23=si0;
si0=0U;
l24=si0;
si0=4U;
l25=si0;
si0=0U;
l26=si0;
si0=0U;
l27=si0;
si0=4U;
l28=si0;
si0=0U;
l3=si0;
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l17=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+68U);
l18=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l19=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l20=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+52U);
l21=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l22=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l23=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l24=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l25=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l26=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l27=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l28=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l8=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l29=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=92U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=2U;
si0+=si1;
si1=l1;
si2=103U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+84U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l1;
si1=i32_load16_u(&i->m0,(U64)si1+101U);
i32_store16(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+100U);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+99U);
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+98U);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+97U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
l13=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+95U);
l14=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+94U);
l15=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+93U);
l16=si0;
L3:;
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l17;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l18;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l19;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l20;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l21;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l22;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l23;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l24;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l25;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l26;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l27;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l28;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=l7;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l29;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=116U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=127U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
i32_store8(&i->m0,(U64)si0+124U,si1);
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+123U,si1);
si0=l2;
si1=l11;
i32_store8(&i->m0,(U64)si0+122U,si1);
si0=l2;
si1=l12;
i32_store8(&i->m0,(U64)si0+121U,si1);
si0=l2;
si1=l13;
i32_store8(&i->m0,(U64)si0+120U,si1);
si0=l2;
si1=l14;
i32_store8(&i->m0,(U64)si0+119U,si1);
si0=l2;
si1=l15;
i32_store8(&i->m0,(U64)si0+118U,si1);
si0=l2;
si1=l16;
i32_store8(&i->m0,(U64)si0+117U,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l2;
si1=l2;
si1=i32_load16_u(&i->m0,(U64)si1+4U);
i32_store16(&i->m0,(U64)si0+125U,si1);
si0=l1;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+104U);
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970380U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=2970380U;
f12886(i,si0);
L5:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
si1=8U;
si0+=si1;
f13383(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
si1=8U;
si0+=si1;
f11863(i,si0);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2970384U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l2;
si1=128U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+2970384U);
f7620(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l5;
l1=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=128U;
si1+=si2;
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l6=si2;
si2=i32_load(&i->m0,(U64)si2+12U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
f15271(i,si0);
L8:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 != si1;
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
si0=l5;
f15271(i,si0);
L9:;
si0=l2;
si1=128U;
si0+=si1;
f7621(i,si0);
si0=l0;
si1=l2;
si2=128U;
si1+=si2;
si2=144U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=272U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
UNREACHABLE;
L0:;
}

void f1517(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
l5=si0;
L3:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L4:;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
f15271(i,si0);
L5:;
si0=l5;
si1=24U;
si0+=si1;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
f15271(i,si0);
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l6=si0;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
l5=si0;
L8:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L9:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
f15271(i,si0);
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+48U);
l6=si0;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
l5=si0;
L12:;
{
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L13:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
f15271(i,si0);
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+60U);
l6=si0;
si0=l1;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
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
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l6;
f15271(i,si0);
L18:;
si0=l1;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=104U;
si1=f15390(i,si1,si2,si3);
si2=120U;
si0=f15390(i,si0,si1,si2);
L0:;
}

void f1518(rustpythonInstance*i,U32 l0) {
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
f15271(i,si0);
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
f15271(i,si0);
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
f15271(i,si0);
goto L0;
L5:;
si0=l0;
si1=8U;
si0+=si1;
f1519(i,si0);
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
si3=96U;
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
f15271(i,si0);
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
si3=96U;
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
f15271(i,si0);
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
f15271(i,si0);
goto L0;
L1:;
L0:;
}

void f1519(rustpythonInstance*i,U32 l0) {
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
f1518(i,si0);
si0=l0;
f15271(i,si0);
L1:;
L0:;
}

U32 f1520(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1521(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
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
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U64 l24=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=496U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L4;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=176U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=4U;
si0|=si1;
l6=si0;
si0=l0;
si1=88U;
si0+=si1;
l7=si0;
si0=1286293U;
sj0=(U64)(si0);
sj1=51539607552ULL;
sj0|=sj1;
l8=sj0;
si0=0U;
l9=si0;
L5:;
{
si0=l2;
si1=24U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+84U);
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
si3=8U;
si2+=si3;
si3=1286250U;
si4=1286247U;
si5=l9;
si6=1U;
si5&=si6;
l10=si5;
si3=si5?si3:si4;
si4=3U;
si2=f1541(i,si2,si3,si4);
si3=l0;
f7735(i,si0,si1,si2,si3);
si0=1286240U;
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
l12=si0;
si0=0U;
l4=si0;
goto L6;
L7:;
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
si2=l0;
f8205(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
f7690(i,si0);
L8:;
si0=l13;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l4=si0;
goto L6;
L9:;
si0=l12;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l12;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L6:;
si0=l2;
si1=56U;
si0+=si1;
si1=l2;
si2=32U;
si1+=si2;
si2=l11;
si3=l4;
f1509(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+56U);
switch(si0){
case 0:
goto L16;
case 1:
goto L3;
case 2:
goto L19;
case 3:
goto L18;
case 4:
goto L17;
default:
goto L16;
}
L19:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=324U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
goto L4;
}
si0=0U;
l14=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+176U,sj1);
si0=l2;
si1=176U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=8U;
si1+=si2;
si0=f5724(i,si0,si1);
l9=si0;
si0=l2;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+320U,si1);
si0=l2;
si1=l9;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l2;
si1=288U;
si0+=si1;
si1=l4;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
si3=8U;
si2+=si3;
si2=f10437(i,si2);
si0=f8126(i,si0,si1,si2);
l10=si0;
goto L11;
L18:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l2;
si1=214U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=6U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l2;
si1=1988598U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+300U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l2;
si1=1286316U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=288U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L20;
}
si0=l2;
si1=2972508U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+300U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l2;
si1=1286316U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=l2;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=l2;
si2=176U;
si1+=si2;
si2=l2;
si3=288U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L15;
}
L20:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+92U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l11;
f15271(i,si0);
L21:;
si0=l4;
f15271(i,si0);
goto L3;
L17:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+60U);
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l2;
si1=476U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=6U;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l2;
si1=1988598U;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+300U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l2;
si1=1286348U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=288U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L22;
}
si0=l2;
si1=2972508U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+300U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l2;
si1=1286348U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=l2;
si2=172U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=l2;
si2=176U;
si1+=si2;
si2=l2;
si3=288U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L14;
}
L22:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
l9=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+92U);
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
f15271(i,si0);
goto L3;
L16:;
si0=l2;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l6;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=3U;
si0=si0 > si1;
if(si0){
goto L13;
}
goto L12;
L15:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l2;
si1=1988560U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l2;
si1=298U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l2;
si1=l2;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=l2;
si2=400U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l2;
si1=l2;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l2;
si1=288U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L14:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l2;
si1=1988560U;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l2;
si1=298U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l2;
si1=l2;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=l2;
si2=400U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l2;
si1=l2;
si2=160U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l2;
si1=288U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L13:;
si0=l2;
si1=477U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966000U);
l11=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2965996U);
l13=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967824U);
l14=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+344U,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l2;
si1=1286268U;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l2;
si1=17U;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l2;
si1=4U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0+312U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
sj1=463856467969ULL;
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l2;
si1=1286276U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l2;
si1=1286276U;
sj1=(U64)(si1);
sj2=73014444032ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+300U,sj1);
si0=l11;
si1=1182732U;
si2=l14;
si3=2U;
si2=si2 == si3;
l14=si2;
si0=si2?si0:si1;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=l2;
si1=l2;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+340U,si1);
si0=l13;
si1=1182932U;
si2=l14;
si0=si2?si0:si1;
si1=l2;
si2=288U;
si1+=si2;
si2=l11;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L12:;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+72U);
l13=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+80U);
l11=si2;
f1523(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l15=si0;
if(si0){
goto L24;
}
si0=l2;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0+288U,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L25;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
L25:;
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+288U);
i64_store(&i->m0,(U64)si0+40U,sj1);
goto L23;
L24:;
si0=l15;
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si1=l15;
si0-=si1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l15;
si2=l11;
f1498(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L26:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l4;
si0+=si1;
si1=l13;
si2=l11;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l4;
si2=l11;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
L23:;
si0=l4;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+44U);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l4;
f1495(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
L27:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=l4;
si0+=si1;
si1=10U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=1U;
si1+=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
goto L4;
}
si0=l3;
si1=l3;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=7U;
si0=f15269(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l13;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1286243U);
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1286240U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+164U,sj1);
si0=l2;
si1=l13;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l2;
si1=176U;
si0+=si1;
si1=l16;
si2=l14;
si3=2U;
si4=l2;
si5=160U;
si4+=si5;
si5=l0;
si5=i32_load(&i->m0,(U64)si5+96U);
si6=106U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
f2328(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+176U);
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si1=288U;
si0+=si1;
si1=l2;
si2=176U;
si1+=si2;
si2=112U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=400U;
si0+=si1;
si1=l2;
si2=288U;
si1+=si2;
si2=l7;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=8U;
si2+=si3;
f14700(i,si0,si1,si2);
si0=l13;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l13;
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
si0=l2;
si1=l2;
si2=400U;
si1+=si2;
si2=l13;
si3=0U;
si1=f8069(i,si1,si2,si3);
l13=si1;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l2;
si1=6U;
i32_store(&i->m0,(U64)si0+96U,si1);
goto L35;
L36:;
si0=l2;
si1=96U;
si0+=si1;
si1=56U;
si0+=si1;
l13=si0;
si1=l5;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=48U;
si0+=si1;
l18=si0;
si1=l5;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=40U;
si0+=si1;
l19=si0;
si1=l5;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=32U;
si0+=si1;
l20=si0;
si1=l5;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=24U;
si0+=si1;
l21=si0;
si1=l5;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=16U;
si0+=si1;
l22=si0;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
l23=si0;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
i64_store(&i->m0,(U64)si0+96U,sj1);
sj0=l24;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L30;
case 1:
goto L33;
case 2:
goto L33;
case 3:
goto L33;
case 4:
goto L34;
case 5:
goto L33;
case 6:
goto L37;
default:
goto L33;
}
L37:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+100U);
l13=si0;
L35:;
si0=l11;
si0=!(si0);
si1=l9;
si2=1U;
si1^=si2;
si0|=si1;
l14=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l2;
si1=l17;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l2;
si1=l0;
si2=l13;
si3=l2;
si4=288U;
si3+=si4;
f7565(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=0U;
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
if(si0){
goto L39;
}
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l10=si0;
si0=0U;
l17=si0;
si0=l16;
si1=1U;
si0=si0 == si1;
if(si0){
goto L40;
}
goto L39;
L41:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
L40:;
si0=l13;
f7690(i,si0);
si0=l14;
si1=1U;
si0^=si1;
l10=si0;
si0=0U;
l17=si0;
L39:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l14=si0;
si1=6U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L29;
}
goto L28;
L38:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+96U);
l13=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l13;
si1=5U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L45;
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
goto L45;
default:
goto L43;
}
L45:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
goto L43;
L44:;
si0=l2;
si1=96U;
si0+=si1;
f1518(i,si0);
L43:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
f15271(i,si0);
L42:;
si0=0U;
l17=si0;
goto L29;
L34:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=14U;
si0=si0 == si1;
if(si0){
goto L30;
}
L33:;
si0=l2;
si1=288U;
si0+=si1;
si1=56U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+96U);
l24=sj1;
i64_store(&i->m0,(U64)si0+288U,sj1);
sj0=l24;
si0=(U32)(sj0);
l13=si0;
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L52;
case 1:
goto L48;
default:
goto L51;
}
L52:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+292U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L50;
}
L51:;
si0=l13;
si1=3U;
si0=si0 != si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+304U);
si2=9U;
si1=si1 != si2;
si0|=si1;
l18=si0;
goto L49;
L50:;
si0=0U;
l18=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L49;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+328U);
si1=0U;
si0=si0 != si1;
l18=si0;
L49:;
si0=l11;
si0=!(si0);
if(si0){
goto L48;
}
si0=2U;
l17=si0;
si0=l18;
si0=!(si0);
if(si0){
goto L47;
}
L48:;
si0=l0;
si1=l2;
si2=288U;
si1+=si2;
si2=l16;
si3=l14;
si0=f7566(i,si0,si1,si2,si3);
l13=si0;
si0=1U;
l17=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+288U);
si1=5U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=1U;
l17=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+292U);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L53;
case 1:
goto L46;
case 2:
goto L46;
case 3:
goto L46;
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
goto L46;
case 12:
goto L53;
default:
goto L46;
}
L53:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+300U);
si0=!(si0);
if(si0){
goto L46;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+296U);
f15271(i,si0);
goto L46;
L47:;
si0=l2;
si1=288U;
si0+=si1;
f1518(i,si0);
L46:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+340U);
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+336U);
f15271(i,si0);
goto L29;
L32:;
si0=l14;
si1=5U;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+100U);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L56;
case 1:
goto L54;
case 2:
goto L54;
case 3:
goto L54;
case 4:
goto L54;
case 5:
goto L54;
case 6:
goto L54;
case 7:
goto L54;
case 8:
goto L54;
case 9:
goto L54;
case 10:
goto L54;
case 11:
goto L54;
case 12:
goto L56;
default:
goto L54;
}
L56:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+108U);
si0=!(si0);
if(si0){
goto L54;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+104U);
f15271(i,si0);
goto L54;
L55:;
si0=l2;
si1=96U;
si0+=si1;
f1518(i,si0);
L54:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L57;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
f15271(i,si0);
L57:;
si0=l10;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L28;
}
goto L29;
L31:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L30:;
si0=l2;
si1=96U;
si0+=si1;
f1518(i,si0);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+148U);
si0=!(si0);
if(si0){
goto L58;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+144U);
f15271(i,si0);
L58:;
si0=2U;
l17=si0;
L29:;
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
goto L59;
}
si0=l4;
f7690(i,si0);
L59:;
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
goto L28;
}
si0=l3;
f7690(i,si0);
L28:;
si0=1U;
l14=si0;
si0=0U;
l10=si0;
si0=l17;
switch(si0){
case 0:
goto L63;
case 1:
goto L62;
case 2:
goto L60;
default:
goto L63;
}
L63:;
si0=0U;
l10=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L61;
}
si0=1U;
l14=si0;
si0=l9;
si1=1U;
si0^=si1;
si1=1U;
si0&=si1;
if(si0){
goto L61;
}
goto L60;
L62:;
si0=l13;
l10=si0;
L61:;
si0=0U;
l14=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
L60:;
si0=l15;
si0=!(si0);
if(si0){
goto L64;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+76U);
si0=!(si0);
if(si0){
goto L64;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
f15271(i,si0);
L64:;
si0=l10;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si1=320U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+28U);
l9=si1;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l9;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l9;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L67:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L65;
}
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l11;
si1=l13;
si0=si0 != si1;
if(si0){
goto L67;
}
}
L66:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L68;
}
si0=l12;
f7690(i,si0);
L68:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L69;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
L69:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L70;
}
si0=l4;
f7690(i,si0);
L70:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l4;
f7690(i,si0);
L71:;
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
goto L1;
}
goto L2;
L65:;
si0=l0;
si1=l10;
f7334(i,si0,si1);
L10:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
l9=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l12;
f7690(i,si0);
si0=l14;
l9=si0;
goto L5;
}
L4:;
f15042(i);
UNREACHABLE;
L3:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l12;
f7690(i,si0);
L72:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+44U);
si0=!(si0);
if(si0){
goto L73;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+40U);
f15271(i,si0);
L73:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L74;
}
si0=l4;
f7690(i,si0);
L74:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l4;
f7690(i,si0);
L75:;
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l10=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f7690(i,si0);
L1:;
si0=l2;
si1=496U;
si0+=si1;
i->g0=si0;
si0=l10;
L0:;
return si0;
}

void f1522(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=528U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+484U);
l4=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+480U);
l5=si2;
si1-=si2;
l6=si1;
si2=1U;
si1+=si2;
si2=1U;
si1>>=(si2&31);
si2=l6;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+12U);
si1=si3?si1:si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l6;
si2=l3;
si0=f1508(i,si0,si1,si2);
L1:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=480U;
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l5;
i32_store(&i->m0,(U64)si0+488U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+492U,si1);
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=40U;
si0+=si1;
l7=si0;
si0=l0;
si1=4U;
si0+=si1;
l8=si0;
L3:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=20U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+496U,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0+520U,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+512U,sj1);
si0=l12;
si1=l11;
si2=l12;
si0=si2?si0:si1;
l13=si0;
si1=l6;
si2=l2;
si3=496U;
si2+=si3;
f1542(i,si0,si1,si2);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+512U);
l14=sj0;
sj1=6364136223846793005ULL;
sj0*=sj1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+520U);
sj0^=sj1;
sj1=l14;
sj0=I64_ROTL(sj0,sj1);
l14=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l0;
si1=1U;
si2=l3;
si0=f1508(i,si0,si1,si2);
L4:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=-20U;
si0+=si1;
l16=si0;
sj0=l14;
sj1=25ULL;
sj0>>=(sj1&63);
l17=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l18=sj0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
sj0=l14;
si0=(U32)(sj0);
l1=si0;
si0=0U;
l20=si0;
si0=0U;
l21=si0;
L6:;
{
si0=l15;
si1=l1;
si2=l19;
si1&=si2;
l22=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
sj1=l18;
sj0^=sj1;
l14=sj0;
sj1=-1ULL;
sj0^=sj1;
sj1=l14;
sj2=-72340172838076673ULL;
sj1+=sj2;
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l14=sj0;
si0=!(sj0);
if(si0){
goto L7;
}
L9:;
{
si0=l6;
si1=l16;
si2=0U;
sj3=l14;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l22;
si3+=si4;
si4=l19;
si3&=si4;
si2-=si3;
si3=20U;
si2*=si3;
l24=si2;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l13;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l25=si1;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l25;
si1=si3?si1:si2;
si2=l6;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
L10:;
sj0=l14;
sj1=-1ULL;
sj0+=sj1;
sj1=l14;
sj0&=sj1;
l14=sj0;
si0=!(sj0);
if(si0){
goto L7;
}
goto L9;
}
L8:;
si0=l15;
si1=l24;
si0+=si1;
si1=-20U;
si0+=si1;
l6=si0;
si1=16U;
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l22;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=12U;
si0+=si1;
l22=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l22;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L11;
}
si0=l11;
si0=!(si0);
if(si0){
goto L11;
}
si0=l12;
f15271(i,si0);
L11:;
si0=l6;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
f15271(i,si0);
goto L5;
L7:;
sj0=l23;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l14=sj0;
si0=1U;
l24=si0;
si0=l21;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
l24=si0;
sj0=l14;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l22;
si0+=si1;
si1=l19;
si0&=si1;
l26=si0;
L12:;
sj0=l14;
sj1=l23;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l22;
si1=l20;
si2=8U;
si1+=si2;
l20=si1;
si0+=si1;
l1=si0;
si0=l24;
l21=si0;
goto L6;
L13:;
}
si0=l15;
si1=l26;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L14;
}
si0=l15;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9187201950435737472ULL;
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l26=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
L14:;
si0=l15;
si1=l26;
si0+=si1;
sj1=l17;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l22=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l26;
si1=-8U;
si0+=si1;
si1=l19;
si0&=si1;
si1=l15;
si0+=si1;
si1=8U;
si0+=si1;
si1=l22;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
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
si0=l16;
si1=0U;
si2=l26;
si1-=si2;
si2=20U;
si1*=si2;
si0+=si1;
l1=si0;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
L5:;
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l2;
si1=528U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1523(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=0U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
L2:;
{
si0=l2;
l4=si0;
si1=-1U;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si1=-2U;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l7=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si1=31U;
si0&=si1;
l5=si0;
goto L4;
L5:;
si0=l4;
si1=-3U;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l8=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l5;
si1=15U;
si0&=si1;
l5=si0;
goto L6;
L7:;
si0=l4;
si1=-4U;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l8;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
L6:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l7;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
L4:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l6;
si2=63U;
si1&=si2;
si0|=si1;
l5=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
L3:;
si0=l5;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l5;
si1=32U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=128U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
l6=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L8;
case 2:
goto L8;
case 3:
goto L8;
case 4:
goto L8;
case 5:
goto L8;
case 6:
goto L8;
case 7:
goto L8;
case 8:
goto L8;
case 9:
goto L8;
case 10:
goto L11;
case 11:
goto L8;
case 12:
goto L8;
case 13:
goto L8;
case 14:
goto L8;
case 15:
goto L8;
case 16:
goto L8;
case 17:
goto L8;
case 18:
goto L8;
case 19:
goto L8;
case 20:
goto L8;
case 21:
goto L8;
case 22:
goto L8;
case 23:
goto L8;
case 24:
goto L8;
case 25:
goto L8;
case 26:
goto L12;
default:
goto L10;
}
L13:;
si0=l5;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L8;
L12:;
si0=l5;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L8;
L11:;
si0=l5;
si1=255U;
si0&=si1;
si1=1124490U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=2U;
si0&=si1;
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l6;
if(si0){
goto L8;
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
goto L8;
}
L9:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L8:;
}
si0=l4;
si1=l1;
si0-=si1;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1524(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=4U;
si1+=si2;
si2=10U;
si3=l2;
si4=8U;
si3+=si4;
f15016(i,si0,si1,si2,si3);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
l4=si2;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L4;
}
si0=1987224U;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+24U);
l5=si2;
si3=4U;
si2=si2 == si3;
l4=si2;
si0=si2?si0:si1;
l1=si0;
si0=2U;
si1=l5;
si2=l4;
si0=si2?si0:si1;
l5=si0;
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0+25U);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+27U);
si2=16U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
goto L3;
L4:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l5=si0;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0>>=(si1&31);
l4=si0;
goto L3;
L5:;
si0=l1;
if(si0){
goto L6;
}
si0=0U;
l1=si0;
goto L2;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l4;
si2=-1U;
si1+=si2;
l1=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=l4;
si2=-2U;
si1+=si2;
l1=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=13U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
L7:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1<<=(si2&31);
si2=l5;
si3=255U;
si2&=si3;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1525(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
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
si0=l1;
si1=l2;
si2=l3;
f1542(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=-4U;
si0+=si1;
l5=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
sj1=6364136223846793005ULL;
sj0*=sj1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
sj0^=sj1;
sj1=l6;
sj0=I64_ROTL(sj0,sj1);
l6=sj0;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
sj0=l6;
si0=(U32)(sj0);
l0=si0;
si0=0U;
l9=si0;
L3:;
{
si0=l4;
si1=l0;
si2=l8;
si1&=si2;
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=l7;
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
si0=l5;
sj1=l6;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l10;
si1+=si2;
si2=l8;
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
si0=l4;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=-4U;
si0+=si1;
l2=si0;
goto L1;
L4:;
sj0=l11;
sj1=l11;
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
si0=l10;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l0=si0;
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

U32 f1526(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=224U;
si0+=si1;
si1=l2;
si2=l3;
sj0=f2122(i,si0,si1,si2);
l6=sj0;
sj1=l6;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l7=sj1;
sj0^=sj1;
sj1=l7;
sj0-=sj1;
l8=sj0;
si0=l0;
si1=16U;
si0+=si1;
l9=si0;
sj0=0ULL;
l10=sj0;
si0=0U;
l11=si0;
L9:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=8U;
si0&=si1;
if(si0){
goto L11;
}
si0=l12;
si1=16U;
si0+=si1;
l13=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l0;
si1=l13;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l14=si2;
si3=l14;
si4=l12;
si3=si3 == si4;
l12=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
if(si0){
goto L10;
}
L11:;
si0=l0;
si1=0U;
sj2=l7;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
L10:;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
sj0=(U64)(si0);
l15=sj0;
sj0=1ULL;
l10=sj0;
sj0=l8;
l16=sj0;
sj0=l8;
l17=sj0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
sj0=l16;
l7=sj0;
L14:;
{
sj0=l17;
sj1=l15;
sj0&=sj1;
l18=sj0;
sj0=l7;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l16=sj0;
sj0=l7;
sj1=l17;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
sj1=1ULL;
sj0+=sj1;
l17=sj0;
si0=l13;
sj1=l18;
si1=(U32)(sj1);
l12=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
sj1=2ULL;
sj0+=sj1;
l7=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
sj0=l7;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L17;
case 1:
goto L16;
default:
goto L17;
}
L17:;
si0=l19;
si1=l12;
si2=l11;
si3=1U;
si2=si2 == si3;
si0=si2?si0:si1;
l19=si0;
sj0=l16;
l7=sj0;
si0=1U;
l11=si0;
goto L14;
L16:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=-2ULL;
sj1=-1ULL;
si2=l11;
sj0=si2?sj0:sj1;
l18=sj0;
si0=l19;
si1=l12;
si2=l11;
si0=si2?si0:si1;
l12=si0;
si0=l13;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
f1433(i,si0);
goto L13;
L15:;
sj0=l16;
l7=sj0;
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
sj1=l18;
si1=(U32)(sj1);
si2=24U;
si1*=si2;
si0+=si1;
l14=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
si0=sj0 != sj1;
if(si0){
goto L14;
}
}
si0=l14;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l0;
f1433(i,si0);
L18:;
si0=l5;
si1=l2;
si2=l3;
si3=l1;
si4=l13;
f13638(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L20;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=255U;
si0&=si1;
if(si0){
goto L19;
}
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l13;
f7690(i,si0);
goto L9;
L20:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l13;
f7690(i,si0);
L21:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L6;
L19:;
si0=l13;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l13;
f7690(i,si0);
L13:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=8U;
si3=l13;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
sj1=l7;
si2=1000000000U;
si0=f1429(i,si0,sj1,si2);
L22:;
sj0=l18;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L26;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
sj1=l18;
si1=(U32)(sj1);
l13=si1;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=24U;
si1*=si2;
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l13;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l12;
si0=si0 == si1;
if(si0){
goto L23;
}
L27:;
si0=0U;
l11=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=8U;
si3=si3 == si4;
l12=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=0ULL;
l10=sj0;
si0=l12;
if(si0){
goto L9;
}
goto L24;
L26:;
si0=l3;
if(si0){
goto L29;
}
si0=1U;
l13=si0;
goto L28;
L29:;
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
l13=si0;
si0=!(si0);
if(si0){
goto L3;
}
L28:;
si0=l13;
si1=l2;
si2=l3;
si0=f15390(i,si0,si1,si2);
l13=si0;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+88U);
si2=8U;
si1+=si2;
si0=f10804(i,si0,si1);
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l14=si0;
l13=si0;
si0=l14;
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l9;
si1=l14;
f1496(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l13;
si2=24U;
si1*=si2;
si0+=si1;
l13=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l13=si0;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
l12=si0;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l4=si0;
sj0=l18;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l0;
si1=32U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=3U;
si0*=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1<<=(si2&31);
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l12;
si1=1U;
si0<<=(si1&31);
l14=si0;
si0=1U;
l13=si0;
L31:;
{
si0=l13;
l12=si0;
si1=1U;
si0<<=(si1&31);
l13=si0;
si0=l12;
si1=l14;
si0=si0 < si1;
if(si0){
goto L31;
}
}
si0=l12;
if(si0){
goto L33;
}
si0=0U;
l14=si0;
si0=8U;
l13=si0;
goto L32;
L33:;
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l14;
if(si0){
goto L35;
}
si0=l9;
l13=si0;
goto L34;
L35:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l9;
si1=l14;
si0=f15277(i,si0,si1);
l13=si0;
goto L34;
L36:;
si0=l14;
si0=f15269(i,si0);
l13=si0;
L34:;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
l14=si0;
si0=l13;
l9=si0;
si0=l12;
si1=2U;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l14=si0;
si0=l14;
si1=l13;
si2=255U;
si3=l14;
si1=f15392(i,si1,si2,si3);
si0+=si1;
l9=si0;
si0=l12;
l14=si0;
L37:;
si0=l9;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
L32:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L38:;
si0=l0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l14;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l13=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l12;
si1=-1U;
si0+=si1;
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l11=si0;
si1=l13;
si2=24U;
si1*=si2;
si0+=si1;
l3=si0;
sj0=0ULL;
l16=sj0;
L40:;
{
si0=l11;
si1=24U;
si0+=si1;
l19=si0;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=l7;
sj2=63ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
l7=sj1;
sj0^=sj1;
sj1=l7;
sj0-=sj1;
l7=sj0;
l17=sj0;
L42:;
{
sj0=l7;
sj1=l17;
sj2=5ULL;
sj1*=sj2;
sj0+=sj1;
l18=sj0;
sj0=l17;
si0=(U32)(sj0);
l12=si0;
sj0=l7;
sj1=5ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
l7=sj0;
sj0=l18;
sj1=1ULL;
sj0+=sj1;
l17=sj0;
si0=l13;
si1=l9;
si2=l12;
si1&=si2;
l12=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L42;
}
}
si0=l14;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
L41:;
sj0=l16;
sj1=1ULL;
sj0+=sj1;
l16=sj0;
si0=l19;
l11=si0;
si0=l19;
si1=l3;
si0=si0 != si1;
if(si0){
goto L40;
}
}
L39:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=0U;
l4=si0;
goto L8;
L25:;
si0=0U;
l11=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l12=si2;
si3=l12;
si4=8U;
si3=si3 == si4;
l12=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=0ULL;
l10=sj0;
si0=l12;
if(si0){
goto L9;
}
L24:;
si0=0U;
l11=si0;
si0=l0;
si1=0U;
f1431(i,si0,si1);
sj0=0ULL;
l10=sj0;
goto L9;
L23:;
}
si0=l13;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l14;
l4=si0;
L8:;
si0=0U;
l12=si0;
si0=l0;
si1=0U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
l13=si2;
si3=l13;
si4=8U;
si3=si3 == si4;
l13=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
if(si0){
goto L43;
}
si0=l0;
si1=0U;
f1431(i,si0,si1);
L43:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l13=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l12=si0;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l4;
f7690(i,si0);
L6:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l12;
goto L0;
L5:;
f15042(i);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l12;
si1=l13;
si2=1286424U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f1527(rustpythonInstance*i,U32 l0) {
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

U32 f1528(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1529(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=l0;
f7571(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=252U;
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
goto L8;
}
si0=0U;
si1=0U;
si2=l5;
si3=l4;
si0=f8074(i,si0,si1,si2,si3);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si1=200U;
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
goto L8;
}
si0=l6;
si1=l7;
si2=1208U;
si1+=si2;
si2=1286440U;
si3=8U;
si4=l4;
si1=f12275(i,si1,si2,si3,si4);
si2=0U;
si3=l0;
f7738(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=36U;
si0+=si1;
si1=0U;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=8U;
si0&=si1;
if(si0){
goto L11;
}
si0=l5;
si1=16U;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l4;
si1=l8;
si2=l4;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=l5;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L9;
}
L11:;
si0=l4;
si1=0U;
sj2=l9;
si3=1000000000U;
si0=f1432(i,si0,si1,sj2,si3);
goto L9;
L10:;
si0=1803776U;
si1=43U;
si2=1804200U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
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
goto L8;
}
si0=l4;
si1=l4;
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
goto L12;
}
si0=l4;
f1433(i,si0);
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
l7=si0;
si0=64U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L16;
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
si0=l3;
si1=8U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=8U;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=92U;
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
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l3;
sj1=34359738376ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l7;
si2=0U;
si0=f8146(i,si0,si1,si2);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l5;
si1=1286448U;
si2=15U;
si3=l4;
si4=l0;
si0=f1538(i,si0,si1,si2,si3,si4);
l4=si0;
goto L17;
L18:;
si0=l5;
si1=56U;
si0+=si1;
si1=l0;
si2=1286448U;
si3=15U;
si4=l4;
si0=f1526(i,si0,si1,si2,si3,si4);
l4=si0;
L17:;
si0=l4;
if(si0){
goto L15;
}
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
goto L19;
}
si0=l5;
f7690(i,si0);
L19:;
si0=l3;
si1=24U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+84U);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si3=1286508U;
si4=7U;
si2=f1541(i,si2,si3,si4);
si3=l0;
f7735(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
if(si0){
goto L14;
}
si0=l4;
si1=1286440U;
si2=8U;
si3=l6;
si4=l0;
si0=f1538(i,si0,si1,si2,si3,si4);
l5=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L21;
}
si0=1U;
l5=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
f7690(i,si0);
L22:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l10=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
if(si0){
goto L20;
}
si0=1U;
l0=si0;
si0=1U;
l6=si0;
si0=1U;
l7=si0;
si0=l10;
l4=si0;
goto L2;
L21:;
si0=l4;
l6=si0;
si0=l5;
l4=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L4;
L20:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l11=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=l0;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+88U);
si3=8U;
si2+=si3;
si3=1286622U;
si4=4U;
si2=f1541(i,si2,si3,si4);
si3=0U;
si4=0U;
f7564(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l12=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=2U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966000U);
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2965996U);
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967824U);
l6=si0;
si0=l3;
si1=120U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=116U;
si0+=si1;
si1=1286440U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=112U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=100U;
si0+=si1;
si1=1286736U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=1286532U;
sj1=(U64)(si1);
sj2=42949672960ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=76U;
si0+=si1;
si1=1286736U;
sj1=(U64)(si1);
sj2=42949672960ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1286728U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
sj1=700079669249ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l5;
si1=1182932U;
si2=l6;
si3=2U;
si2=si2 == si3;
l6=si2;
si0=si2?si0:si1;
si1=l3;
si2=64U;
si1+=si2;
si2=l4;
si3=1182732U;
si4=l6;
si2=si4?si2:si3;
si2=i32_load(&i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
goto L13;
L16:;
si0=8U;
si1=64U;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=1286463U;
si1=45U;
si2=l3;
si3=64U;
si2+=si3;
si3=1286516U;
si4=1286544U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
l5=si0;
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L13:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L34;
case 1:
goto L33;
case 2:
goto L32;
case 3:
goto L35;
default:
goto L34;
}
L35:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=500U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l5;
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
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=62U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l4;
si1=54U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286614U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286608U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286600U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286592U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286584U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286576U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286568U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1286560U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=266287972414ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l5;
si2=l3;
si3=64U;
si2+=si3;
si0=f7173(i,si0,si1,si2);
l4=si0;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=l8;
f7690(i,si0);
L36:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l11;
f7690(i,si0);
L37:;
si0=1U;
l0=si0;
si0=0U;
l10=si0;
si0=l6;
if(si0){
goto L31;
}
goto L7;
L34:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
l4=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=3U;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l3;
si1=76U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1286764U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=478U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=4U;
si2=1286772U;
si3=0U;
si4=l3;
f954(i,si0,si1,si2,si3,si4);
goto L25;
L38:;
si0=l2;
si0=!(si0);
if(si0){
goto L29;
}
goto L24;
L33:;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=3U;
si0=si0 > si1;
if(si0){
goto L28;
}
goto L26;
L32:;
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967828U);
si1=3U;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1286904U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=479U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=4U;
si2=1286912U;
si3=0U;
si4=l3;
f954(i,si0,si1,si2,si3,si4);
goto L27;
L31:;
si0=l7;
f15271(i,si0);
goto L7;
L30:;
si0=1U;
si1=62U;
f52(i,si0,si1);
UNREACHABLE;
L29:;
si0=l3;
si1=76U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1286820U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=136U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=64U;
si0+=si1;
f15028(i,si0);
goto L24;
L28:;
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=1286844U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=479U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=4U;
si2=1286852U;
si3=0U;
si4=l3;
f954(i,si0,si1,si2,si3,si4);
goto L26;
L27:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+48U);
si2=l3;
si2=i32_load(&i->m0,(U64)si2+56U);
si0=f7651(i,si0,si1,si2);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L39;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L39:;
si0=l4;
si0=!(si0);
if(si0){
goto L40;
}
si0=0U;
l0=si0;
si0=1U;
l10=si0;
si0=1U;
l5=si0;
goto L6;
L40:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l12;
f7690(i,si0);
goto L23;
L26:;
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l6=si0;
si0=7U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l4;
si1=3U;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1286883U);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1286880U);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=30064771079ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l3;
si3=48U;
si2+=si3;
si3=l5;
si4=l6;
si5=l3;
si6=64U;
si5+=si6;
f7563(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L42;
}
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
goto L43;
}
si0=l4;
f7690(i,si0);
L43:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L44;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L44:;
si0=l12;
si1=l12;
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
si0=l12;
f7690(i,si0);
goto L1;
L42:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L45;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
f15271(i,si0);
L45:;
si0=1U;
l5=si0;
si0=0U;
l10=si0;
si0=1U;
l0=si0;
si0=0U;
l6=si0;
si0=1U;
l7=si0;
goto L5;
L41:;
si0=1U;
si1=7U;
f52(i,si0,si1);
UNREACHABLE;
L25:;
si0=l8;
si1=l8;
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
si0=l11;
si1=l11;
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
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l3;
si2=64U;
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+48U);
si3=l3;
si3=i32_load(&i->m0,(U64)si3+56U);
si0=f7561(i,si0,si1,si2,si3);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L46;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L46:;
si0=l4;
si0=!(si0);
if(si0){
goto L24;
}
si0=0U;
l7=si0;
si0=1U;
l10=si0;
si0=1U;
l5=si0;
si0=1U;
l0=si0;
si0=1U;
l6=si0;
goto L5;
L24:;
si0=l5;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L47;
}
si0=l3;
si1=l11;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l10;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l3;
si2=64U;
si1+=si2;
si0=f1521(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=1U;
l5=si0;
si0=0U;
l10=si0;
si0=1U;
l0=si0;
si0=1U;
l6=si0;
si0=0U;
l7=si0;
goto L5;
L47:;
si0=l12;
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=l12;
f7690(i,si0);
L48:;
si0=0U;
l4=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
L23:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l8;
f7690(i,si0);
L49:;
si0=l11;
si1=l11;
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
si0=l11;
f7690(i,si0);
goto L1;
L8:;
f15042(i);
UNREACHABLE;
L7:;
si0=0U;
l5=si0;
L6:;
si0=1U;
l6=si0;
si0=1U;
l7=si0;
L5:;
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
goto L50;
}
si0=l12;
f7690(i,si0);
L50:;
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L51;
}
si0=l8;
f7690(i,si0);
L51:;
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l11;
f7690(i,si0);
goto L2;
L4:;
si0=l6;
f7690(i,si0);
si0=l5;
l4=si0;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l0;
f7690(i,si0);
L52:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l0;
f7690(i,si0);
L53:;
si0=1U;
l5=si0;
si0=1U;
l0=si0;
si0=1U;
l6=si0;
si0=1U;
l7=si0;
L2:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L56;
case 1:
goto L55;
case 2:
goto L54;
default:
goto L57;
}
L57:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L56:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f15271(i,si0);
goto L1;
L55:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
goto L1;
L54:;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L1:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}


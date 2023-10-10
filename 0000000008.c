#include "w2c2_base.h"

#include "rustpython.h"

void f830(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=l3;
l7=si0;
L3:;
{
si0=l7;
if(si0){
goto L5;
}
si0=0U;
l8=si0;
si0=0U;
l7=si0;
si0=l2;
l9=si0;
si0=0U;
l10=si0;
goto L4;
L5:;
si0=0U;
l10=si0;
L7:;
{
si0=l2;
si1=l10;
si0+=si1;
l11=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=0U;
l8=si0;
si0=l2;
l9=si0;
si0=l7;
l10=si0;
goto L4;
L6:;
si0=1U;
l8=si0;
si0=l11;
si1=1U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0^=si1;
si1=l7;
si0+=si1;
l7=si0;
L4:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si1=47U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=296U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1167432U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=296U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l11;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=8589934593ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=1167416U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=88U;
si0+=si1;
si1=1167020U;
si2=l4;
si3=104U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l6=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
l11=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
si0=l11;
si1=4U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=2U;
l11=si0;
si0=1167060U;
l10=si0;
goto L9;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l6=si0;
si0=l11;
si1=4U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l11;
si1=3U;
si0=si0 != si1;
if(si0){
goto L8;
}
L12:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l12;
f15271(i,si0);
L13:;
si0=l6;
f15271(i,si0);
goto L8;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l11=si0;
si1=8U;
si0>>=(si1&31);
l13=si0;
si0=l11;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+92U);
l10=si0;
L9:;
si0=l0;
si1=l13;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l13;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L14;
}
si0=l11;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l11;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0-=si1;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l11;
si1=16U;
si0+=si1;
si1=l6;
si2=l10;
f886(i,si0,si1,si2);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
L16:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l6;
si0+=si1;
si1=l2;
si2=l10;
si0=f15390(i,si0,si1,si2);
si0=l11;
si1=l6;
si2=l10;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L15:;
si0=1U;
l6=si0;
si0=l9;
l2=si0;
si0=l8;
if(si0){
goto L3;
}
goto L2;
L14:;
}
si0=1167256U;
si1=16U;
si2=l4;
si3=24U;
si2+=si3;
si3=1167272U;
si4=1167304U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f831(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
f832(i,si0,si1,si2,si3);
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15271(i,si0);
L1:;
L0:;
}

void f832(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=208U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+28U);
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+26U);
l5=si1;
i32_store8(&i->m0,(U64)si0+22U,si1);
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+25U);
l6=si1;
i32_store8(&i->m0,(U64)si0+21U,si1);
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+24U);
l7=si1;
i32_store8(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=51U;
si0+=si1;
si1=11U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=45U;
si0+=si1;
si1=1U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l4;
si1=41U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=47U;
si0+=si1;
si1=l5;
si2=-1U;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1167460U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=40U;
si0+=si1;
sj1=1ULL;
si2=l5;
sj2=(U64)(si2);
sj3=3ULL;
sj2<<=(sj3&63);
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=76U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=68U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=301U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=116U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=1167432U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+108U,sj1);
si0=l4;
si1=32U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
sj1=21474836480ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=1U;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=144U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1167412U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l4;
sj1=1099511628032ULL;
i64_store(&i->m0,(U64)si0+124U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=184549376U;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l4;
si1=164U;
si0+=si1;
si1=271U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=302U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+168U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+196U,sj1);
si0=2U;
l1=si0;
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=1167416U;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l4;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=1167020U;
si2=l4;
si3=184U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+168U);
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=4U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=1167060U;
l8=si0;
goto L9;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l1=si0;
si1=8U;
si0>>=(si1&31);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+172U);
l8=si0;
goto L9;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+172U);
l5=si0;
si0=l2;
si1=4U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=4U;
l1=si0;
goto L12;
L13:;
si0=4U;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l5;
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
goto L14;
}
si0=l8;
f15271(i,si0);
L14:;
si0=l5;
f15271(i,si0);
L12:;
L9:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+124U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L15;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L16:;
si0=l5;
si1=4U;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L15;
}
si0=l5;
f15271(i,si0);
L15:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+36U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L17;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L18:;
si0=l5;
si1=4U;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
if(si0){
goto L17;
}
si0=l5;
f15271(i,si0);
L17:;
si0=l1;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L6;
}
L8:;
si0=l7;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l3;
si1=12U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=l1;
sj3=l10;
sj4=32ULL;
sj3>>=(sj4&63);
si3=(U32)(sj3);
f836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
l1=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+21U);
l6=si0;
L19:;
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=l3;
si3=36U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
f836(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
l1=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L4;
}
L20:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+23U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=112U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1167440U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l4;
sj1=1099511628032ULL;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=184549376U;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l4;
si1=302U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=4U;
l1=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+132U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=1167444U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=184U;
si0+=si1;
si1=1167020U;
si2=l4;
si3=120U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l2=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L24;
}
si0=l2;
si1=4U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=1167060U;
l7=si0;
si0=2U;
l1=si0;
goto L23;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+184U);
l1=si0;
si1=8U;
si0>>=(si1&31);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
l7=si0;
goto L23;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
l5=si0;
si0=l2;
si1=4U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L26;
}
L27:;
si0=4U;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
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
goto L28;
}
si0=l7;
f15271(i,si0);
L28:;
si0=l5;
f15271(i,si0);
L26:;
L23:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+92U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L29;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L30;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L30:;
si0=l5;
si1=4U;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L29;
}
si0=l5;
f15271(i,si0);
L29:;
si0=l1;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L21;
}
L22:;
si0=l4;
si1=12U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si1=132U;
si0+=si1;
si1=296U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=303U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l3;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l4;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1167416U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=184U;
si0+=si1;
si1=1167020U;
si2=l4;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l0;
si1=1167060U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L33:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+184U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L32:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+188U);
l0=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+184U);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L34:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l0;
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
goto L35;
}
si0=l2;
f15271(i,si0);
L35:;
si0=l0;
f15271(i,si0);
goto L1;
L31:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=303U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l3;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1167432U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=1167072U;
si2=l4;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+120U);
l2=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L37;
}
si0=l2;
si1=4U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=2U;
l2=si0;
si0=1167060U;
l3=si0;
goto L2;
L37:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l3=si0;
si0=l2;
si1=4U;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
L38:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
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
goto L39;
}
si0=l5;
f15271(i,si0);
L39:;
si0=l3;
f15271(i,si0);
goto L3;
L36:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l2=si0;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=8U;
si0>>=(si1&31);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l3=si0;
goto L2;
L21:;
si0=l0;
si1=l2;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l2;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L7:;
UNREACHABLE;
L6:;
si0=l0;
si1=l2;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l2;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+89U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+92U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+89U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+92U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si1=296U;
i32_store(&i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+100U,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1167432U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=184U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=1167020U;
si2=l4;
si3=88U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l2=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+120U);
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=1167060U;
l3=si0;
si0=2U;
l2=si0;
goto L41;
L43:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
si0=l1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L40;
}
L44:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
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
goto L45;
}
si0=l3;
f15271(i,si0);
L45:;
si0=l2;
f15271(i,si0);
goto L40;
L42:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+120U);
l2=si0;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l2;
si1=8U;
si0>>=(si1&31);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+124U);
l3=si0;
L41:;
si0=l0;
si1=l1;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l1;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L40:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l1;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=l1;
si2=16U;
si1>>=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f833(rustpythonInstance*i,U32 l0) {
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

void f834(rustpythonInstance*i,U32 l0) {
L0:;
}

void f835(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
L1:;
L0:;
}

void f836(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+23U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si0=l4;
si1=296U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1167404U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=72U;
si0+=si1;
si1=1167020U;
si2=l4;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=1167060U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l0=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+72U);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
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
goto L7;
}
si0=l3;
f15271(i,si0);
L7:;
si0=l0;
f15271(i,si0);
goto L2;
L3:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=2U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1167412U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
sj1=1099511628032ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=184549376U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=296U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=302U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=1167416U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=1167020U;
si2=l4;
si3=72U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=1167060U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L8;
L10:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0,sj1);
goto L8;
L9:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+60U);
l0=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L8;
}
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
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
goto L12;
}
si0=l3;
f15271(i,si0);
L12:;
si0=l0;
f15271(i,si0);
L8:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
if(si0){
goto L2;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L13:;
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
UNREACHABLE;
L0:;
}

void f837(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=2147483632U;
si0&=si1;
l4=si0;
if(si0){
goto L5;
}
si0=4U;
si1=0U;
si0=f15277(i,si0,si1);
l5=si0;
goto L4;
L5:;
si0=l4;
si0=f15269(i,si0);
l5=si0;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=128U;
si0=f15269(i,si0);
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
si1=44U;
si0+=si1;
l8=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=16U;
l12=si0;
L7:;
{
si0=l0;
si1=l10;
l13=si1;
si2=4U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l14=si0;
si0=l1;
si1=l13;
si0-=si1;
l15=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l14;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l14;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l14;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l16;
si1=0U;
si2=l2;
si0=si2?si0:si1;
si1=l14;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=2U;
l17=si0;
si0=l15;
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l8;
si1=l4;
si0+=si1;
l4=si0;
si0=2U;
l17=si0;
L13:;
{
si0=l4;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
si0=l19;
si1=0U;
si2=l18;
si0=si2?si0:si1;
si1=l16;
si0=si0 < si1;
if(si0){
goto L9;
}
L14:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l19;
l16=si0;
si0=l18;
l2=si0;
si0=l15;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L13;
}
L11:;
si0=2U;
l17=si0;
si0=l15;
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
l17=si0;
L16:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=0U;
si2=l4;
si3=-8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l2=si2;
si0=si2?si0:si1;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l18;
l16=si0;
si0=l15;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
si0=l15;
l17=si0;
L15:;
si0=l17;
si1=l13;
si0+=si1;
l10=si0;
si1=l17;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l17;
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l17;
si1=1U;
si0>>=(si1&31);
l16=si0;
si0=l7;
si1=l17;
si2=l13;
si1+=si2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l14;
l4=si0;
L19:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l15=si0;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l15;
si1=l2;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-16U;
si0+=si1;
l2=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L19;
}
goto L8;
}
L18:;
si0=l13;
si1=l10;
si2=1167588U;
f675(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l10;
si1=l1;
si2=1167588U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l15;
l17=si0;
L9:;
si0=l17;
si1=l13;
si0+=si1;
l10=si0;
L8:;
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l10;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l17;
si1=10U;
si0=si0 < si1;
if(si0){
goto L23;
}
L25:;
si0=l10;
si1=l13;
si0-=si1;
l2=si0;
goto L22;
L24:;
si0=1167760U;
si1=44U;
si2=1167804U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l13;
si1=10U;
si0+=si1;
l2=si0;
si1=l1;
si2=l2;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l14;
si1=l10;
si2=l13;
si1-=si2;
l2=si1;
si2=l17;
si3=1U;
si4=l17;
si5=1U;
si4=si4 > si5;
si2=si4?si2:si3;
si3=l9;
f838(i,si0,si1,si2,si3);
L22:;
si0=l11;
si1=l12;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si1=4U;
si0<<=(si1&31);
l4=si0;
if(si0){
goto L29;
}
si0=4U;
si1=0U;
si0=f15277(i,si0,si1);
l4=si0;
goto L28;
L29:;
si0=l4;
si0=f15269(i,si0);
l4=si0;
L28:;
si0=l4;
si0=!(si0);
if(si0){
goto L26;
}
si0=l11;
si1=1U;
si0<<=(si1&31);
l12=si0;
si0=l4;
si1=l6;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=l6;
f15271(i,si0);
si0=l4;
l6=si0;
L27:;
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1U;
si0+=si1;
l22=si0;
l11=si0;
si0=l22;
si1=2U;
si0=si0 < si1;
if(si0){
goto L20;
}
L30:;
{
si0=l6;
si1=l22;
l11=si1;
si2=-1U;
si1+=si2;
l22=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
l16=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=2U;
l11=si0;
goto L20;
L35:;
si0=l6;
si1=l11;
si2=-3U;
si1+=si2;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l17;
si2=l2;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l11;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=3U;
l11=si0;
goto L20;
L36:;
si0=l16;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=l17;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L20;
}
goto L33;
L34:;
si0=l11;
si1=3U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l6;
si1=l11;
si2=-3U;
si1+=si2;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L33:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L31;
}
L32:;
si0=l11;
si1=-2U;
si0+=si1;
l14=si0;
L31:;
si0=l11;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L42;
}
si0=l11;
si1=l14;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 <= si1;
if(si0){
goto L41;
}
si0=l6;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l23;
si1=i32_load(&i->m0,(U64)si1);
l24=si1;
si0+=si1;
l17=si0;
si1=l6;
si2=l14;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l25=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
l26=si1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l17;
si1=l1;
si0=si0 > si1;
if(si0){
goto L39;
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
l4=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=4U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l2=si0;
si0=l17;
si1=4U;
si0<<=(si1&31);
l15=si0;
si0=l17;
si1=l26;
si0-=si1;
l18=si0;
si1=l19;
si0-=si1;
l17=si0;
si1=l19;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l5;
si1=l2;
si2=l17;
si3=4U;
si2<<=(si3&31);
l16=si2;
si0=f15390(i,si0,si1,si2);
l13=si0;
si1=l16;
si0+=si1;
l16=si0;
si0=l19;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L38;
}
si0=l17;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L38;
}
si0=l7;
si1=l15;
si0+=si1;
l17=si0;
L44:;
{
si0=l17;
si1=l2;
si2=l2;
si3=-16U;
si2+=si3;
l15=si2;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=0U;
si2=si2 != si3;
si3=l16;
si4=-16U;
si3+=si4;
l16=si3;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=0U;
si5=l16;
si6=4U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si3=si5?si3:si4;
si4=l15;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3=si3 < si4;
si2&=si3;
l15=si2;
si3=4U;
si2<<=(si3&31);
l18=si2;
si1-=si2;
l2=si1;
si2=l16;
si3=l18;
si2+=si3;
l16=si2;
si3=l15;
si1=si3?si1:si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l15;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L38;
}
si0=l17;
si1=-16U;
si0+=si1;
l17=si0;
si0=l16;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L38;
}
goto L44;
}
L43:;
si0=l5;
si1=l4;
si2=l16;
si0=f15390(i,si0,si1,si2);
l17=si0;
si1=l16;
si0+=si1;
l16=si0;
si0=l19;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L45;
}
si0=l17;
l17=si0;
goto L37;
L45:;
si0=l18;
si1=l19;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L46;
}
si0=l17;
l17=si0;
goto L37;
L46:;
si0=l0;
si1=l15;
si0+=si1;
l13=si0;
si0=l17;
l17=si0;
L47:;
{
si0=l4;
si1=l2;
si2=l17;
si3=l17;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=0U;
si3=si3 != si4;
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=0U;
si6=l2;
si7=4U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
si4=si6?si4:si5;
si5=l17;
si6=12U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si4=si4 < si5;
si3&=si4;
l15=si3;
si1=si3?si1:si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l18;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l17;
si1=l15;
si2=1U;
si1^=si2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l2;
si1=l15;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L47;
}
goto L37;
}
L42:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1167500U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1167508U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1167604U;
f683(i,si0,si1);
UNREACHABLE;
L41:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1167500U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1167508U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1167620U;
f683(i,si0,si1);
UNREACHABLE;
L40:;
si0=l26;
si1=l17;
si2=1167636U;
f675(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l17;
si1=l1;
si2=1167636U;
f666(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l2;
l4=si0;
si0=l13;
l17=si0;
L37:;
si0=l4;
si1=l17;
si2=l16;
si3=l17;
si2-=si3;
si0=f15390(i,si0,si1,si2);
si0=l27;
si1=l26;
i32_store(&i->m0,(U64)si0,si1);
si0=l23;
si1=l24;
si2=l19;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l25;
si1=l25;
si2=8U;
si1+=si2;
si2=l11;
si3=l14;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=1U;
l11=si0;
si0=l22;
si1=1U;
si0=si0 > si1;
if(si0){
goto L30;
}
goto L20;
}
L26:;
si0=1167652U;
si1=43U;
si2=1167728U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l13;
si1=l10;
si2=1167744U;
f675(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l10;
si1=l1;
si0=si0 < si1;
if(si0){
goto L7;
}
}
si0=l6;
f15271(i,si0);
si0=l5;
f15271(i,si0);
goto L2;
L6:;
si0=1167652U;
si1=43U;
si2=1167696U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=1U;
si3=l2;
si3=i32_load(&i->m0,(U64)si3);
f838(i,si0,si1,si2,si3);
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1167652U;
si1=43U;
si2=1167712U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f838(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=-32U;
si0+=si1;
l4=si0;
L3:;
{
si0=l2;
l5=si0;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=-16U;
si0+=si1;
l7=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=0U;
si2=l6;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si0=si2?si0:si1;
l10=si0;
si1=l7;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=1U;
l13=si0;
si0=l4;
l6=si0;
L6:;
{
si0=l6;
si1=16U;
si0+=si1;
l7=si0;
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l6;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-16U;
si0+=si1;
l6=si0;
si0=l5;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
l7=si0;
L5:;
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
goto L0;
L1:;
si0=1167820U;
si1=46U;
si2=1167868U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f839(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f840(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
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
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l3=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=1U;
l3=si0;
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=2U;
l3=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l3=si0;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=16U;
si0+=si1;
si1=l0;
si2=l3;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l0;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l0;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L5:;
si0=1167256U;
si1=16U;
si2=l2;
si3=8U;
si2+=si3;
si3=1167272U;
si4=1167304U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f841(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
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
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=3U;
l1=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
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
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=4U;
l1=si0;
L1:;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l2;
si3=4U;
si2+=si3;
si3=l1;
f829(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
f15271(i,si0);
L8:;
si0=l3;
f15271(i,si0);
L6:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
si1=4U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f842(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1167884U;
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

U32 f843(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1167908U;
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

void f844(rustpythonInstance*i,U32 l0) {
L0:;
}

void f845(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
si2=1167932U;
si3=l5;
si4=4U;
si3+=si4;
si4=1167932U;
si5=l5;
si6=8U;
si5+=si6;
si6=l4;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f846(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f841(i,si0,si1);
L0:;
return si0;
}

U32 f847(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f840(i,si0,si1);
L0:;
return si0;
}

U32 f848(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1167884U;
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

U32 f849(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=1167908U;
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

U32 f850(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l1;
si3=l2;
f829(i,si0,si1,si2,si3);
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

U32 f851(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=l2;
f886(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l4;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L1:;
si0=1167256U;
si1=16U;
si2=l3;
si3=8U;
si2+=si3;
si3=1167272U;
si4=1167304U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f852(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f853(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=1167948U;
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
si1=1103454U;
si2=7U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

U32 f854(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=l2;
f886(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l4;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=0U;
goto L0;
L1:;
si0=1167256U;
si1=16U;
si2=l3;
si3=8U;
si2+=si3;
si3=1167272U;
si4=1167304U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f855(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f829(i,si0,si1,si2,si3);
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

void f856(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L8:;
{
si0=l5;
si1=-128U;
si0+=si1;
l5=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l6;
si1=8U;
si0+=si1;
l8=si0;
l6=si0;
sj0=l7;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L8;
}
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l4;
sj2=-1ULL;
sj1+=sj2;
sj2=l4;
sj1&=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L7:;
si0=l1;
si1=24U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l4;
sj2=-1ULL;
sj1+=sj2;
sj2=l4;
sj1&=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l5;
sj2=l4;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=1U;
si2<<=(si3&31);
si3=240U;
si2&=si3;
si1-=si2;
si2=-16U;
si1+=si2;
l6=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=6U;
si0=si0 != si1;
if(si0){
goto L4;
}
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
f816(i,si0);
goto L3;
L4:;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
si1=-1U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si1=4U;
si2=l6;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l6;
si1=4U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l6;
si1=134217728U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l10=si0;
si0=l8;
if(si0){
goto L10;
}
si0=l10;
l11=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l10;
si1=l8;
si0=f15277(i,si0,si1);
l11=si0;
goto L9;
L11:;
si0=l8;
si0=f15269(i,si0);
l11=si0;
L9:;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
si0=l11;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l11;
si1=12U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l14=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=1U;
l1=si0;
L13:;
{
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l8;
l6=si0;
L15:;
{
si0=l5;
si1=-128U;
si0+=si1;
l5=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l6;
si1=8U;
si0+=si1;
l8=si0;
l6=si0;
sj0=l7;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L15;
}
}
L14:;
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si1=l5;
sj2=l7;
sj2=I64_CTZ(sj2);
si2=(U32)(sj2);
si3=1U;
si2<<=(si3&31);
si3=240U;
si2&=si3;
si1-=si2;
si2=-16U;
si1+=si2;
l6=si1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
sj0=l7;
sj1=-1ULL;
sj0+=sj1;
sj1=l7;
sj0&=sj1;
l7=sj0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l9;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si1=l1;
si2=l3;
si3=1U;
si2+=si3;
l6=si2;
si3=-1U;
si4=l6;
si2=si4?si2:si3;
f887(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
goto L16;
L17:;
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
L18:;
{
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l8;
l6=si0;
L20:;
{
si0=l5;
si1=-128U;
si0+=si1;
l5=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l6;
si1=8U;
si0+=si1;
l8=si0;
l6=si0;
sj0=l7;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L20;
}
}
L19:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
sj0=l7;
sj1=-1ULL;
sj0+=sj1;
l4=sj0;
si0=l5;
sj1=l7;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=1U;
si1<<=(si2&31);
si2=240U;
si1&=si2;
si0-=si1;
si1=-16U;
si0+=si1;
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
f15271(i,si0);
L21:;
sj0=l4;
sj1=l7;
sj0&=sj1;
l7=sj0;
si0=l3;
if(si0){
goto L18;
}
goto L12;
}
L16:;
si0=l11;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si1=l15;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=12U;
si0+=si1;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
if(si0){
goto L13;
}
}
L12:;
si0=l13;
si0=!(si0);
if(si0){
goto L22;
}
si0=l12;
si0=!(si0);
if(si0){
goto L22;
}
si0=l14;
f15271(i,si0);
L22:;
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
L3:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l10;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f857(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

U64 f858(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
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
l2=si0;
i->g0=si0;
si0=l2;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
sj1=l3;
sj2=7816392313619706465ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
sj1=l3;
sj2=8317987319222330741ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
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
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=76U;
si1+=si2;
si2=4U;
f859(i,si0,si1,si2);
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l5;
f859(i,si0,si1,si2);
si0=l2;
si1=255U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=76U;
si1+=si2;
si2=1U;
f859(i,si0,si1,si2);
L1:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+24U);
l3=sj0;
si0=l2;
sj0=i64_load32_u(&i->m0,(U64)si0+64U);
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
sj2=l3;
sj3=l4;
sj2+=sj3;
l4=sj2;
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
sj3=l3;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l4;
sj3^=sj4;
l3=sj3;
sj2+=sj3;
l4=sj2;
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
sj3=l4;
sj4=l3;
sj5=17ULL;
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l3=sj3;
sj2+=sj3;
l4=sj2;
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
sj3=l3;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l3=sj2;
sj3=l7;
sj2+=sj3;
l4=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
l8=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l4;
sj3=l3;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l3=sj2;
sj3=l6;
sj2+=sj3;
l4=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l6=sj1;
sj0^=sj1;
l8=sj0;
sj1=16ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l8;
sj2=l3;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l4;
sj2^=sj3;
l3=sj2;
sj3=l7;
sj2+=sj3;
l4=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l3;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l4;
sj1^=sj2;
l3=sj1;
sj2=13ULL;
sj1=I64_ROTL(sj1,sj2);
sj2=l3;
sj3=l6;
sj2+=sj3;
sj1^=sj2;
l3=sj1;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l3;
sj2=l7;
sj1+=sj2;
l3=sj1;
sj2=32ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l3;
sj0^=sj1;
L0:;
return sj0;
}

void f859(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

void f860(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=8U;
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

void f861(rustpythonInstance*i,U32 l0) {
L0:;
}

void f862(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f62(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
switch(si0){
case 0:
goto L6;
case 1:
goto L8;
case 2:
goto L7;
default:
goto L6;
}
L9:;
si0=l0;
si1=l1;
si2=l2;
f15091(i,si0,si1,si2);
goto L2;
L8:;
si0=l3;
si1=325U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=6U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1988598U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1168120U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=72U;
si0+=si1;
si0=f15027(i,si0);
if(si0){
goto L5;
}
si0=l3;
si1=2972508U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1168120U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=32U;
si0+=si1;
si1=l3;
si2=56U;
si1+=si2;
si2=l3;
si3=72U;
si2+=si3;
f15025(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=297U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1988560U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=298U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=72U;
si0+=si1;
si1=1988576U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=l1;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=f15014(i);
si1=1U;
si0^=si1;
l4=si0;
L10:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l3;
si1=84U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1168120U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=325U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l5;
si2=-1U;
si1+=si2;
si2=-2U;
si1&=si2;
si2=l1;
si1+=si2;
si2=2U;
si1+=si2;
si2=l3;
si3=72U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+48U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=f15014(i);
if(si0){
goto L11;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L11:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l3;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1168120U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=325U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=72U;
si0+=si1;
f15028(i,si0);
L5:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L2;
L4:;
si0=l3;
si1=83U;
si0+=si1;
si1=l3;
si2=58U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+56U);
i32_store16(&i->m0,(U64)si0+81U,si1);
si0=1168128U;
si1=43U;
si2=l3;
si3=72U;
si2+=si3;
si3=1168172U;
si4=1168320U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+49U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L12;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=f15014(i);
if(si0){
goto L12;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
L12:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+84U,sj1);
si0=l3;
si1=1168000U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=1167992U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si1=l3;
si2=56U;
si1+=si2;
si2=1167959U;
si3=l3;
si4=72U;
si3+=si4;
si4=1168104U;
f845(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f863(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=4U;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=1831885595U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=1831951131U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L4:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=1832016667U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L6:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=1832082203U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L8:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=1832147739U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L10:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=4U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=1832475419U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L12:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
si1=11U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si3=l2;
si4=7U;
si3+=si4;
si4=l2;
si4=i32_load8_u(&i->m0,(U64)si4+1U);
f891(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l4=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L14;
}
L15:;
si0=4U;
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
si1=11U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=0U;
si3=l2;
si4=11U;
si3+=si4;
si4=l2;
si4=i32_load8_u(&i->m0,(U64)si4+1U);
f891(i,si0,si1,si2,si3,si4);
si0=4U;
l4=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
l4=si0;
goto L1;
L14:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f864(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si2=4U;
si1+=si2;
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=2U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
si2=12U;
si1+=si2;
si2=l3;
si3=4U;
si2+=si3;
f863(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L4:;
si0=1U;
l0=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=1168336U;
si1=16U;
si2=l2;
si3=8U;
si2+=si3;
si3=1168352U;
si4=1168384U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
l4=si1;
si2=1182788U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=1182792U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=1168336U;
si1=16U;
si2=l2;
si3=8U;
si2+=si3;
si3=1168352U;
si4=1168368U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l3=si0;
si0=l4;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=4U;
f886(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
L8:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l3;
si0+=si1;
si1=1831885595U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l3=si0;
L7:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f865(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+4U);
si3=2U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
si2=12U;
si1+=si2;
si2=l3;
si3=4U;
si2+=si3;
f863(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
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
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L4:;
si0=1U;
l1=si0;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=1168336U;
si1=16U;
si2=l2;
si3=8U;
si2+=si3;
si3=1168352U;
si4=1168384U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l0;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f713(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=1168336U;
si1=16U;
si2=l2;
si3=8U;
si2+=si3;
si3=1168352U;
si4=1168368U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l4=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0-=si1;
si1=3U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=4U;
f886(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l4;
si0+=si1;
si1=1831885595U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l4=si0;
L7:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f866(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
case 1:
goto L1;
case 2:
goto L3;
default:
goto L4;
}
L4:;
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
f888(i,si0);
goto L2;
L3:;
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
f889(i,si0);
L2:;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0+=si1;
l3=si0;
si1=-2U;
si0&=si1;
si1=l0;
si2=44U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0+=si1;
si1=2U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l3;
si1+=si2;
si2=0U;
si3=l2;
si2-=si3;
l1=si2;
si1&=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l1;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
f15271(i,si0);
L6:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si1=8U;
si0+=si1;
l1=si0;
L8:;
{
si0=l1;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
f15271(i,si0);
L9:;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15271(i,si0);
L10:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
f15271(i,si0);
L11:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l0;
si2=84U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
f15271(i,si0);
L12:;
L0:;
}

void f867(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
l3=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
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
l7=si0;
L6:;
{
si0=l6;
si1=-128U;
si0+=si1;
l6=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l7;
si1=8U;
si0+=si1;
l4=si0;
l7=si0;
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
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
l8=sj0;
si0=l6;
sj1=l5;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=1U;
si1<<=(si2&31);
si2=240U;
si1&=si2;
si0-=si1;
si1=-16U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
f15271(i,si0);
L7:;
sj0=l8;
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
si2=4U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=-25U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l7;
si0-=si1;
si1=-16U;
si0+=si1;
f15271(i,si0);
L1:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
f15271(i,si0);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=2U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0+=si1;
l4=si0;
si1=-2U;
si0&=si1;
si1=l0;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0+=si1;
si1=2U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l6;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l4;
si1+=si2;
si2=0U;
si3=l6;
si2-=si3;
l7=si2;
si1&=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
f15271(i,si0);
L9:;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
f15271(i,si0);
L10:;
L0:;
}

void f868(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f869(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
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
si1=64U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f870(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l3=si0;
si0=l0;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+72U);
si0=f821(i,si0,si1,si2);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f15271(i,si0);
L1:;
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=36U;
si1+=si2;
f870(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+68U);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L5;
default:
goto L3;
}
L5:;
si0=l1;
si1=1169080U;
si2=6U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
l3=si0;
goto L3;
L4:;
si0=l1;
si1=1169088U;
si2=5U;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
si1=1U;
si0<<=(si1&31);
l3=si0;
L3:;
si0=l0;
si1=46U;
si0+=si1;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15271(i,si0);
L6:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15271(i,si0);
L7:;
si0=l2;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
f15271(i,si0);
L8:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+36U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
f15271(i,si0);
L9:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f870(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=l1;
si3=20U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l3;
si1=si3?si1:si2;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f14979(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+24U);
l5=si2;
f756(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=40U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
L9:;
si0=l2;
si1=4U;
si0|=si1;
l6=si0;
si0=1U;
l7=si0;
goto L7;
L8:;
si0=l2;
si1=4U;
si0|=si1;
l6=si0;
si0=0U;
l7=si0;
L7:;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l7;
if(si0){
goto L10;
}
sj0=l8;
sj1=4294967295ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
si0=l3;
f15271(i,si0);
L10:;
si0=l6;
if(si0){
goto L5;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L11;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L13;
}
si0=1U;
l6=si0;
goto L2;
L13:;
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
l6=si0;
if(si0){
goto L2;
}
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L15;
}
si0=1U;
l6=si0;
goto L14;
L15:;
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
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L14:;
si0=l6;
si1=l3;
si2=l1;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
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
si1=l3;
si2=l1;
si0=f15390(i,si0,si1,si2);
l3=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f871(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U64 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+96U);
if(si0){
goto L4;
}
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+96U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
f890(i,si0,si1);
si0=l1;
si1=64U;
si0+=si1;
si1=l0;
si2=48U;
si1+=si2;
f822(i,si0,si1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+27U);
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+24U);
l2=sj0;
si0=l0;
si1=16843008U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
l3=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l5;
si1=1167320U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=l4;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l0=si0;
si0=l6;
if(si0){
goto L5;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=32U;
si0=f15269(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+96U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l6;
si1=l0;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=1167324U;
l0=si0;
L5:;
si0=l1;
si1=92U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si1=268435455U;
si0+=si1;
l0=si0;
si1=3U;
si0&=si1;
l6=si0;
si0=l0;
si1=268435455U;
si0&=si1;
l5=si0;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=0U;
l5=si0;
goto L7;
L8:;
si0=l7;
si1=64U;
si0+=si1;
l0=si0;
si0=l5;
si1=l6;
si0-=si1;
l8=si0;
si0=0U;
l5=si0;
L9:;
{
si0=l3;
si1=l0;
si2=-48U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l0;
si2=-32U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l0;
si2=-16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=64U;
si0+=si1;
l0=si0;
si0=l8;
si1=l5;
si2=4U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L7:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=4U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=16U;
si0+=si1;
l0=si0;
L10:;
{
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l3;
si3=l5;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L10;
}
}
L6:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=88U;
si0=f15269(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
si2=88U;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=1U;
l5=si0;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967824U);
l0=si1;
si2=1U;
si3=l0;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+2967824U,si1);
si0=l0;
switch(si0){
case 0:
goto L12;
case 1:
goto L14;
default:
goto L13;
}
L14:;
L15:;
{
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967824U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
}
L13:;
si0=l6;
f866(i,si0);
si0=l6;
f15271(i,si0);
goto L11;
L12:;
si0=0U;
l5=si0;
si0=0U;
si1=1168412U;
i32_store(&i->m0,(U64)si0+2966000U,si1);
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+2965996U,si1);
si0=0U;
si1=2U;
i32_store(&i->m0,(U64)si0+2967824U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2967828U,si1);
L11:;
si0=l1;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L4:;
si0=1168556U;
si1=34U;
si2=1168592U;
f823(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1167348U;
si1=34U;
si2=1167384U;
f823(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=88U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f872(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si1=4U;
si0<<=(si1&31);
l1=si0;
L3:;
{
si0=l4;
si1=l1;
si0+=si1;
l0=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l5;
si2=l7;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
L4:;
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
if(si0){
goto L3;
}
}
L2:;
si0=0U;
goto L0;
L1:;
si0=l0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 >= si1;
L0:;
return si0;
}

void f873(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=56U;
si0+=si1;
si1=l1;
si0=f820(i,si0,si1);
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967808U);
if(si0){
goto L7;
}
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+2967820U,si1);
si0=0U;
sj1=-4294967295ULL;
i64_store(&i->m0,(U64)si0+2967808U,sj1);
goto L6;
L7:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967812U);
if(si0){
goto L14;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+2967812U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967820U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+52U);
si0=si0 != si1;
if(si0){
goto L13;
}
goto L8;
L14:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si0=f15090(i,si0);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=32U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
si2=3U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+52U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=l2;
si3=l1;
si4=l0;
si5=84U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+20U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=2147483647U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=12U;
si2+=si3;
f862(i,si0,si1,si2);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l0=si0;
goto L15;
L16:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
sj0=l6;
si0=(U32)(sj0);
l0=si0;
L15:;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L17;
}
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L19;
}
si0=l3;
f15271(i,si0);
L19:;
si0=l1;
f15271(i,si0);
L17:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L10;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L4;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L20:;
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L4;
}
si0=l0;
f15271(i,si0);
goto L4;
L13:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si0=f15090(i,si0);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=32U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
si2=3U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+52U);
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967816U);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L21;
}
si0=l4;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L22:;
si0=l4;
si1=4U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L21;
}
si0=l4;
f15271(i,si0);
L21:;
si0=0U;
si1=l5;
i32_store8(&i->m0,(U64)si0+2967820U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2967816U,si1);
goto L8;
L12:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1167096U;
si1=24U;
si2=l2;
si3=24U;
si2+=si3;
si3=1167120U;
si4=1167240U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1167256U;
si1=16U;
si2=l2;
si3=24U;
si2+=si3;
si3=1167272U;
si4=1167288U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=2967816U;
si3=l1;
si4=l0;
si5=84U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+20U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967816U);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=2147483647U;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=12U;
si2+=si3;
f862(i,si0,si1,si2);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l0=si0;
goto L25;
L26:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
sj0=l6;
si0=(U32)(sj0);
l0=si0;
L25:;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L27;
}
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L29;
}
si0=l3;
f15271(i,si0);
L29:;
si0=l1;
f15271(i,si0);
L27:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967816U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L23;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L24:;
si0=1167096U;
si1=24U;
si2=l2;
si3=24U;
si2+=si3;
si3=1167120U;
si4=1167240U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=1167256U;
si1=16U;
si2=l2;
si3=24U;
si2+=si3;
si3=1167272U;
si4=1167288U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si0=f15090(i,si0);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=32U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l5;
si2=3U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+52U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+80U);
si2=l2;
si3=l1;
si4=l0;
si5=84U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si4=i32_load(&i->m0,(U64)si4+20U);
TF(i->t0,si4,void (*)(rustpythonInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=2147483647U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=12U;
si2+=si3;
f862(i,si0,si1,si2);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l0=si0;
goto L30;
L31:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
l6=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
sj0=l6;
si0=(U32)(sj0);
l0=si0;
L30:;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L32;
}
L33:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
goto L34;
}
si0=l3;
f15271(i,si0);
L34:;
si0=l1;
f15271(i,si0);
L32:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967820U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2967816U);
l3=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L35;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L36:;
si0=l3;
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
goto L35;
}
si0=l3;
f15271(i,si0);
L35:;
si0=0U;
si1=l1;
i32_store8(&i->m0,(U64)si0+2967820U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+2967816U,si1);
L5:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2967812U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2967812U,si1);
L4:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1167096U;
si1=24U;
si2=l2;
si3=24U;
si2+=si3;
si3=1167120U;
si4=1167240U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1167256U;
si1=16U;
si2=l2;
si3=24U;
si2+=si3;
si3=1167272U;
si4=1167288U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f874(rustpythonInstance*i,U32 l0) {
L0:;
}

void f875(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U64 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=272U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=52U;
si0+=si1;
si1=14U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
si1=1168616U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=44U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=1168608U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=f818(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l2=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=260U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=248U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=240U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=232U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=228U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=168U;
si0+=si1;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=214U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=168U;
si0+=si1;
si1=44U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=180U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1166448U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+196U,si1);
si0=l0;
si1=65792U;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l0;
si1=1167320U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+264U,si1);
si0=l0;
si1=64U;
si0+=si1;
si1=l0;
si2=168U;
si1+=si2;
si2=l0;
si3=8U;
si2+=si3;
si1=f869(i,si1,si2);
si2=104U;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=64U;
si0+=si1;
si0=f871(i,si0);
l1=si0;
si0=l0;
si1=64U;
si0+=si1;
f867(i,si0);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=1168630U;
si1=62U;
si2=l0;
si3=64U;
si2+=si3;
si3=1168440U;
si4=1168692U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1168708U;
si1=70U;
si2=l0;
si3=64U;
si2+=si3;
si3=1168780U;
si4=1168876U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

void f876(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f877(i,si0);
UNREACHABLE;
L0:;
}

void f877(rustpythonInstance*i,U32 l0) {
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
si1=1168892U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f878(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si1=1104164U;
si2=5U;
si0=f713(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si1=1104169U;
si2=4U;
si0=f713(i,si0,si1,si2);
L0:;
return si0;
}

U32 f879(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f880(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f881(rustpythonInstance*i,U32 l0) {
L0:;
}

void f882(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f883(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
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
sj0=f858(i,si0,si1);
l5=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si2=l4;
si0=f817(i,si0,si1,si2);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=-16U;
si0+=si1;
l7=si0;
sj0=l5;
sj1=25ULL;
sj0>>=(sj1&63);
l8=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l9=sj0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
sj0=l5;
si0=(U32)(sj0);
l4=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
L4:;
{
si0=l6;
si1=l4;
si2=l10;
si1&=si2;
l13=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l9;
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
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
if(si0){
goto L6;
}
L7:;
{
si0=l7;
sj1=l5;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l13;
si1+=si2;
si2=l10;
si1&=si2;
l4=si1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=0U;
si1=l4;
si0-=si1;
l4=si0;
goto L3;
L8:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
goto L5;
}
L6:;
L10:;
{
si0=l7;
sj1=l5;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l13;
si1+=si2;
si2=l10;
si1&=si2;
l16=si1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l15;
si1=l17;
si2=l4;
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
L11:;
sj0=l5;
sj1=-1ULL;
sj0+=sj1;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
goto L10;
}
L9:;
si0=0U;
si1=l16;
si0-=si1;
l4=si0;
goto L3;
L5:;
sj0=l14;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=1U;
l17=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
l17=si0;
sj0=l5;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l13;
si0+=si1;
si1=l10;
si0&=si1;
l18=si0;
L12:;
sj0=l5;
sj1=l14;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l13;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l4=si0;
si0=l17;
l12=si0;
goto L4;
L13:;
}
si0=l6;
si1=l18;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L14;
}
si0=l6;
si1=l6;
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
l4=si0;
L14:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l6;
si1=l18;
si0+=si1;
sj1=l8;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l18;
si1=-8U;
si0+=si1;
si1=l10;
si0&=si1;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l4;
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
si0=l6;
si1=l18;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l4=si0;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=6U;
l4=si0;
goto L2;
L3:;
si0=l6;
si1=l4;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l13;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l13;
f15271(i,si0);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f884(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f885(rustpythonInstance*i,U32 l0,U32 l1) {
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
f884(i,si0,si1,si2,si3);
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

void f886(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f884(i,si0,si1,si2,si3);
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

void f887(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si2=4U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+24U,si1);
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
f884(i,si0,si1,si2,si3);
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

void f888(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si0=0U;
l4=si0;
L7:;
{
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si3=l4;
si2+=si3;
si3=l2;
si4=l4;
si3-=si4;
f15024(i,si0,si1,si2,si3);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
if(si0){
goto L9;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si2=l4;
si1+=si2;
si2=l2;
si3=l4;
si2-=si3;
l4=si2;
si0=f15391(i,si0,si1,si2);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L10:;
si0=l2;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L13;
case 3:
goto L12;
default:
goto L15;
}
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14991(i,si0);
si1=255U;
si0&=si1;
l5=si0;
goto L11;
L14:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l5=si0;
goto L11;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
goto L11;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
L11:;
si0=l5;
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
f15271(i,si0);
L16:;
si0=l2;
f15271(i,si0);
goto L8;
L9:;
si0=l2;
si1=l4;
si0+=si1;
l4=si0;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L3;
}
goto L7;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l6;
si2=l4;
si1+=si2;
si2=l5;
si3=l4;
si2-=si3;
l4=si2;
si0=f15391(i,si0,si1,si2);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
L17:;
si0=l2;
si1=255U;
si0&=si1;
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
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
goto L19;
}
si0=l4;
f15271(i,si0);
L19:;
si0=l3;
f15271(i,si0);
goto L2;
L5:;
si0=l4;
si1=l2;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l5;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l4;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si2=l4;
si1+=si2;
si2=l2;
si3=l4;
si2-=si3;
l4=si2;
si0=f15391(i,si0,si1,si2);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
si1=l2;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f889(rustpythonInstance*i,U32 l0) {
U32 l1=0;
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
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l5=si0;
L8:;
{
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l6=si0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l6;
if(si0){
goto L7;
}
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L9;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
L9:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si2=l4;
si3=l5;
si2+=si3;
l7=si2;
si3=l2;
si4=l5;
si3-=si4;
l8=si3;
f15020(i,si0,si1,si2,si3);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
if(si0){
goto L11;
}
si0=l3;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L11:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
if(si0){
goto L14;
}
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l7;
si2=l8;
si0=f15391(i,si0,si1,si2);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L15:;
si0=l6;
switch(si0){
case 0:
goto L20;
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14991(i,si0);
si1=255U;
si0&=si1;
l9=si0;
goto L16;
L19:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l9=si0;
goto L16;
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l9=si0;
goto L16;
L17:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l9=si0;
L16:;
si0=l9;
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l6;
si1=3U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l6;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
f15271(i,si0);
L21:;
si0=l6;
f15271(i,si0);
goto L13;
L14:;
si0=l6;
si1=l5;
si0+=si1;
l5=si0;
L13:;
si0=l2;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L3;
}
goto L8;
L12:;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=l5;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
si1=l7;
si2=l8;
si0=f15391(i,si0,si1,si2);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
L22:;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l3;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L23:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l6;
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
goto L24;
}
si0=l5;
f15271(i,si0);
L24:;
si0=l6;
f15271(i,si0);
goto L2;
L7:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=1991652U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=23U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L6:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=l2;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l5;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si2=l5;
si1+=si2;
si2=l2;
si3=l5;
si2-=si3;
l3=si2;
si0=f15391(i,si0,si1,si2);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
L2:;
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=l2;
si2=1986372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f890(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l4=si0;
if(si0){
goto L11;
}
si0=l3;
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
case 2:
goto L4;
default:
goto L12;
}
L13:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=0U;
si0=si0 != si1;
l1=si0;
goto L7;
L12:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=0U;
si0=si0 != si1;
l1=si0;
goto L10;
L11:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
switch(si0){
case 0:
goto L14;
case 1:
goto L8;
case 2:
goto L5;
default:
goto L14;
}
L14:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=0U;
si0=si0 != si1;
l1=si0;
si0=l4;
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
L10:;
si0=3U;
l3=si0;
L9:;
si0=0U;
l5=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972504U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l2;
si1=2972472U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=16U;
si0+=si1;
f15018(i,si0);
L15:;
si0=0U;
si1=3U;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=2972472U;
l6=si0;
goto L2;
L8:;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=0U;
si0=si0 != si1;
l1=si0;
si0=l4;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=3U;
l3=si0;
L6:;
si0=1U;
l5=si0;
si0=1U;
si1=3U;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=2972508U;
l6=si0;
goto L2;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=2U;
l1=si0;
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=1U;
l5=si0;
si0=2972508U;
l6=si0;
si0=0U;
l3=si0;
goto L2;
L4:;
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
L3:;
si0=1U;
l5=si0;
si0=2972508U;
l6=si0;
si0=3U;
l3=si0;
si0=2U;
l1=si0;
L2:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+9U);
i32_store(&i->m0,(U64)si0+17U,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1168912U;
si1=34U;
si2=1169060U;
f823(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f891(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l4;
if(si0){
goto L24;
}
si0=l6;
switch(si0){
case 0:
goto L22;
case 1:
goto L21;
case 2:
goto L20;
case 3:
goto L19;
case 4:
goto L18;
case 5:
goto L17;
case 6:
goto L16;
case 7:
goto L15;
case 8:
goto L14;
case 9:
goto L13;
case 10:
goto L23;
default:
goto L22;
}
L24:;
si0=l6;
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
case 6:
goto L5;
case 7:
goto L4;
case 8:
goto L3;
case 9:
goto L2;
case 10:
goto L12;
default:
goto L11;
}
L23:;
si0=1169300U;
si1=40U;
si2=1169340U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l2;
if(si0){
goto L25;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L26:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169093U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169097U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L25:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L27:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169098U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169102U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L21:;
si0=l2;
if(si0){
goto L28;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L29:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169103U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169107U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L28:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L30:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169108U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169112U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L20:;
si0=l2;
if(si0){
goto L31;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L32:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169113U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169117U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L31:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L33:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169118U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169122U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L19:;
si0=l2;
if(si0){
goto L34;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L35:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169123U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169127U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L34:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L36:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169128U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169132U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l2;
if(si0){
goto L37;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L38:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169133U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169137U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L37:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L39:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169138U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169142U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L17:;
si0=l2;
if(si0){
goto L40;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L41:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169143U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169147U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L40:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L42:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169148U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169152U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l2;
if(si0){
goto L43;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L44:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169153U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169157U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L43:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L45:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169158U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169162U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L15:;
si0=l2;
if(si0){
goto L46;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L47:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169163U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169167U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L46:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l1;
si1=l3;
si2=5U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L48:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=5U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169168U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169172U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
si1=10U;
si0=DIV_U(si0,si1);
l6=si0;
si1=10U;
si0=REM_U(si0,si1);
l4=si0;
si0=l3;
si1=l6;
si2=10U;
si1*=si2;
si0-=si1;
l6=si0;
si0=l2;
if(si0){
goto L49;
}
si0=l5;
si1=27U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+19U,sj1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169272U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169275U);
i32_store(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=99U;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=7U;
l3=si0;
si0=l4;
if(si0){
goto L51;
}
si0=6U;
l3=si0;
goto L50;
L52:;
si0=l5;
si1=l3;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=8U;
l3=si0;
L51:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si0+=si1;
si1=l4;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L50:;
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
l4=si0;
si1=2U;
si0+=si1;
si1=109U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
si1=l6;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l3;
si2=3U;
si1+=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L53;
}
si0=l1;
si1=l4;
si2=l3;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L53:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L49:;
si0=l5;
si1=27U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+19U,sj1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169279U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169282U);
i32_store(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=99U;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=7U;
l3=si0;
si0=l4;
if(si0){
goto L55;
}
si0=6U;
l3=si0;
goto L54;
L56:;
si0=l5;
si1=l3;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=8U;
l3=si0;
L55:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si0+=si1;
si1=l4;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L54:;
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
l4=si0;
si1=2U;
si0+=si1;
si1=109U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
si1=l6;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l3;
si2=3U;
si1+=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l1;
si1=l4;
si2=l3;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L57:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L13:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l4=si0;
si1=10U;
si0=DIV_U(si0,si1);
l6=si0;
si1=10U;
si0=REM_U(si0,si1);
l7=si0;
si0=l4;
si1=l6;
si2=10U;
si1*=si2;
si0-=si1;
l8=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l6=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l9=si0;
si0=l2;
if(si0){
goto L58;
}
si0=l5;
si1=27U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+19U,sj1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169286U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169289U);
i32_store(&i->m0,(U64)si0+15U,si1);
si0=l4;
si1=99U;
si0=si0 > si1;
if(si0){
goto L61;
}
si0=7U;
l4=si0;
si0=l7;
if(si0){
goto L60;
}
si0=6U;
l4=si0;
goto L59;
L61:;
si0=l5;
si1=l4;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=8U;
l4=si0;
L60:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si0+=si1;
si1=l7;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L59:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=2U;
si1+=si2;
l3=si1;
si0+=si1;
si1=59U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l8;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=255U;
si0&=si1;
l2=si0;
si1=10U;
si0=REM_U(si0,si1);
l7=si0;
si0=l2;
si1=10U;
si0=DIV_U(si0,si1);
si1=10U;
si0=REM_U(si0,si1);
l9=si0;
si0=l2;
si1=99U;
si0=si0 > si1;
if(si0){
goto L64;
}
si0=l9;
if(si0){
goto L63;
}
goto L62;
L64:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=3U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l2;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L63:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l9;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L62:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
l4=si1;
si0+=si1;
si1=59U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l7;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=255U;
si0&=si1;
l6=si0;
si1=10U;
si0=REM_U(si0,si1);
l9=si0;
si0=l6;
si1=10U;
si0=DIV_U(si0,si1);
si1=10U;
si0=REM_U(si0,si1);
l2=si0;
si0=l6;
si1=99U;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l2;
if(si0){
goto L66;
}
goto L65;
L67:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=3U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l6;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L66:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L65:;
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
l3=si0;
si1=2U;
si0+=si1;
si1=109U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
si1=l9;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l4;
si2=3U;
si1+=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L68;
}
si0=l1;
si1=l3;
si2=l4;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L68:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L58:;
si0=l5;
si1=27U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+19U,sj1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169293U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169296U);
i32_store(&i->m0,(U64)si0+15U,si1);
si0=l4;
si1=99U;
si0=si0 > si1;
if(si0){
goto L71;
}
si0=7U;
l4=si0;
si0=l7;
if(si0){
goto L70;
}
si0=6U;
l4=si0;
goto L69;
L71:;
si0=l5;
si1=l4;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=8U;
l4=si0;
L70:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si0+=si1;
si1=l7;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L69:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=2U;
si1+=si2;
l3=si1;
si0+=si1;
si1=59U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l8;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=255U;
si0&=si1;
l2=si0;
si1=10U;
si0=DIV_U(si0,si1);
l8=si0;
si1=10U;
si0=REM_U(si0,si1);
l7=si0;
si0=l9;
si1=l8;
si2=10U;
si1*=si2;
si0-=si1;
l9=si0;
si0=l2;
si1=99U;
si0=si0 > si1;
if(si0){
goto L74;
}
si0=l7;
if(si0){
goto L73;
}
goto L72;
L74:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=3U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l2;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L73:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l7;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L72:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
l4=si1;
si0+=si1;
si1=59U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l9;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=255U;
si0&=si1;
l2=si0;
si1=10U;
si0=DIV_U(si0,si1);
l7=si0;
si1=10U;
si0=REM_U(si0,si1);
l9=si0;
si0=l6;
si1=l7;
si2=10U;
si1*=si2;
si0-=si1;
l6=si0;
si0=l2;
si1=99U;
si0=si0 > si1;
if(si0){
goto L77;
}
si0=l9;
if(si0){
goto L76;
}
goto L75;
L77:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=3U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l2;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L76:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l9;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L75:;
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
l3=si0;
si1=2U;
si0+=si1;
si1=109U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
si1=l6;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l4;
si2=3U;
si1+=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L78;
}
si0=l1;
si1=l3;
si2=l4;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L78:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L12:;
si0=1169300U;
si1=40U;
si2=1169512U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l2;
if(si0){
goto L79;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L80;
}
si0=l1;
si1=l3;
si2=9U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L80:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=9U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169356U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169364U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L79:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L81;
}
si0=l1;
si1=l3;
si2=9U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L81:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=9U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169365U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169373U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l2;
if(si0){
goto L82;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L83;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L83:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169374U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169382U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L82:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L84;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L84:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169384U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169392U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l2;
if(si0){
goto L85;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L86;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L86:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169394U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169402U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L85:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L87;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L87:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169404U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169412U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l2;
if(si0){
goto L88;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L89;
}
si0=l1;
si1=l3;
si2=9U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L89:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=9U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169414U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169422U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L88:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L90;
}
si0=l1;
si1=l3;
si2=9U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L90:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=9U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169423U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1169431U);
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l2;
if(si0){
goto L91;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L92:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169432U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169440U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L91:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L93:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169442U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169450U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l2;
if(si0){
goto L94;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L95;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L95:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169452U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169460U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L94:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L96;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L96:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169462U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169470U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l2;
if(si0){
goto L97;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L98;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L98:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169472U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169480U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L97:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L99;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L99:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169482U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169490U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l2;
if(si0){
goto L100;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L101;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L101:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169492U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169500U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L100:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L102;
}
si0=l1;
si1=l3;
si2=10U;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L102:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=10U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1169502U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1169510U);
i32_store16(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l3=si0;
si1=10U;
si0=DIV_U(si0,si1);
l6=si0;
si1=10U;
si0=REM_U(si0,si1);
l4=si0;
si0=l3;
si1=l6;
si2=10U;
si1*=si2;
si0-=si1;
l6=si0;
si0=l2;
if(si0){
goto L103;
}
si0=l5;
si1=27U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+19U,sj1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169272U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169275U);
i32_store(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=99U;
si0=si0 > si1;
if(si0){
goto L106;
}
si0=7U;
l3=si0;
si0=l4;
if(si0){
goto L105;
}
si0=6U;
l3=si0;
goto L104;
L106:;
si0=l5;
si1=l3;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=8U;
l3=si0;
L105:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si0+=si1;
si1=l4;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L104:;
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
l4=si0;
si1=2U;
si0+=si1;
si1=109U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
si1=l6;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l3;
si2=3U;
si1+=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L107;
}
si0=l1;
si1=l4;
si2=l3;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L107:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L103:;
si0=l5;
si1=27U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+19U,sj1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169279U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169282U);
i32_store(&i->m0,(U64)si0+15U,si1);
si0=l3;
si1=99U;
si0=si0 > si1;
if(si0){
goto L110;
}
si0=7U;
l3=si0;
si0=l4;
if(si0){
goto L109;
}
si0=6U;
l3=si0;
goto L108;
L110:;
si0=l5;
si1=l3;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=8U;
l3=si0;
L109:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si0+=si1;
si1=l4;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L108:;
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
l4=si0;
si1=2U;
si0+=si1;
si1=109U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
si1=l6;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l3;
si2=3U;
si1+=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L111;
}
si0=l1;
si1=l4;
si2=l3;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L111:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l3;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L2:;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l4=si0;
si1=10U;
si0=DIV_U(si0,si1);
l6=si0;
si1=10U;
si0=REM_U(si0,si1);
l7=si0;
si0=l4;
si1=l6;
si2=10U;
si1*=si2;
si0-=si1;
l8=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l6=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l9=si0;
si0=l2;
if(si0){
goto L112;
}
si0=l5;
si1=27U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+19U,sj1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169286U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169289U);
i32_store(&i->m0,(U64)si0+15U,si1);
si0=l4;
si1=99U;
si0=si0 > si1;
if(si0){
goto L115;
}
si0=7U;
l4=si0;
si0=l7;
if(si0){
goto L114;
}
si0=6U;
l4=si0;
goto L113;
L115:;
si0=l5;
si1=l4;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=8U;
l4=si0;
L114:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si0+=si1;
si1=l7;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L113:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=2U;
si1+=si2;
l3=si1;
si0+=si1;
si1=59U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l8;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=255U;
si0&=si1;
l2=si0;
si1=10U;
si0=REM_U(si0,si1);
l7=si0;
si0=l2;
si1=10U;
si0=DIV_U(si0,si1);
si1=10U;
si0=REM_U(si0,si1);
l9=si0;
si0=l2;
si1=99U;
si0=si0 > si1;
if(si0){
goto L118;
}
si0=l9;
if(si0){
goto L117;
}
goto L116;
L118:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=3U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l2;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L117:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l9;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L116:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
l4=si1;
si0+=si1;
si1=59U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l7;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=255U;
si0&=si1;
l6=si0;
si1=10U;
si0=REM_U(si0,si1);
l9=si0;
si0=l6;
si1=10U;
si0=DIV_U(si0,si1);
si1=10U;
si0=REM_U(si0,si1);
l2=si0;
si0=l6;
si1=99U;
si0=si0 > si1;
if(si0){
goto L121;
}
si0=l2;
if(si0){
goto L120;
}
goto L119;
L121:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=3U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l6;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L120:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L119:;
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
l3=si0;
si1=2U;
si0+=si1;
si1=109U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
si1=l9;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l4;
si2=3U;
si1+=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L122;
}
si0=l1;
si1=l3;
si2=l4;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L122:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L112:;
si0=l5;
si1=27U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+19U,sj1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169293U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1169296U);
i32_store(&i->m0,(U64)si0+15U,si1);
si0=l4;
si1=99U;
si0=si0 > si1;
if(si0){
goto L125;
}
si0=7U;
l4=si0;
si0=l7;
if(si0){
goto L124;
}
si0=6U;
l4=si0;
goto L123;
L125:;
si0=l5;
si1=l4;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+19U,si1);
si0=8U;
l4=si0;
L124:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si0+=si1;
si1=l7;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L123:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=2U;
si1+=si2;
l3=si1;
si0+=si1;
si1=59U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l8;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=255U;
si0&=si1;
l2=si0;
si1=10U;
si0=DIV_U(si0,si1);
l8=si0;
si1=10U;
si0=REM_U(si0,si1);
l7=si0;
si0=l9;
si1=l8;
si2=10U;
si1*=si2;
si0-=si1;
l9=si0;
si0=l2;
si1=99U;
si0=si0 > si1;
if(si0){
goto L128;
}
si0=l7;
if(si0){
goto L127;
}
goto L126;
L128:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=3U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l2;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L127:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l7;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L126:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=2U;
si1+=si2;
l4=si1;
si0+=si1;
si1=59U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
si1=1U;
si0+=si1;
si1=l9;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=255U;
si0&=si1;
l2=si0;
si1=10U;
si0=DIV_U(si0,si1);
l7=si0;
si1=10U;
si0=REM_U(si0,si1);
l9=si0;
si0=l6;
si1=l7;
si2=10U;
si1*=si2;
si0-=si1;
l6=si0;
si0=l2;
si1=99U;
si0=si0 > si1;
if(si0){
goto L131;
}
si0=l9;
if(si0){
goto L130;
}
goto L129;
L131:;
si0=l5;
si1=12U;
si0+=si1;
si1=l3;
si2=3U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l2;
si2=100U;
si1=DIV_U(si1,si2);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L130:;
si0=l5;
si1=12U;
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0+=si1;
si1=l9;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
L129:;
si0=l4;
si1=l5;
si2=12U;
si1+=si2;
si0+=si1;
l3=si0;
si1=2U;
si0+=si1;
si1=109U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
si1=l6;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l4;
si2=3U;
si1+=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L132;
}
si0=l1;
si1=l3;
si2=l4;
f886(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L132:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
si2=12U;
si1+=si2;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f892(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
f901(i,si0);
UNREACHABLE;
L0:;
}

U32 f893(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
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
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
sj0=(U64)(si0);
sj1=0ULL;
si2=l0;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l0;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l0=si2;
sj0=si2?sj0:sj1;
si1=l0;
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

U32 f894(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si0=f749(i,si0,si1,si2);
L0:;
return si0;
}

U32 f895(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f896(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f897(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1169528U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si3=i32_load(&i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1169532U;
si3=4U;
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
si2=1169536U;
si0=f716(i,si0,si1,si2);
l1=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L3;
}
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l1=si0;
goto L1;
L3:;
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
goto L4;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L4;
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
L4:;
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

void f898(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1169552U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f899(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1169552U;
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

void f900(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f901(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f902(i,si0);
UNREACHABLE;
L0:;
}

void f902(rustpythonInstance*i,U32 l0) {
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
si1=1169568U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f903(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=342U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=27U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1169636U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1169620U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f904(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=342U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=29U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1169663U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1169620U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l3;
si2=l2;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f905(rustpythonInstance*i,U32 l0) {
L0:;
}

void f906(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
si2=1169588U;
si3=l5;
si4=4U;
si3+=si4;
si4=1169588U;
si5=l5;
si6=8U;
si5+=si6;
si6=l4;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f907(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=249U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=343U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=344U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l5;
si2=l1;
si3=8U;
si4=l3;
si5=255U;
si4&=si5;
l3=si4;
si5=0U;
si6=l3;
si5-=si6;
si6=l2;
si4=si6?si4:si5;
si5=8U;
si6=0U;
si7=1169692U;
si8=56U;
si1=f15237(i,si1,si2,si3,si4,si5,si6,si7,si8);
l3=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1169698U;
si1=35U;
si2=1169832U;
f892(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l4;
si2=4U;
si1+=si2;
si2=1170316U;
si3=l4;
si4=8U;
si3+=si4;
si4=1170484U;
f906(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f908(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=249U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=343U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=344U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si2=l1;
si3=8U;
si4=l2;
si5=16U;
si4+=si5;
si5=255U;
si4&=si5;
si5=8U;
si6=0U;
si7=1169692U;
si8=56U;
si1=f15237(i,si1,si2,si3,si4,si5,si6,si7,si8);
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1169698U;
si1=35U;
si2=1169848U;
f892(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l3;
si2=4U;
si1+=si2;
si2=1170316U;
si3=l3;
si4=8U;
si3+=si4;
si4=1170484U;
f906(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f909(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=l2;
si2=l3;
si0=f15241(i,si0,si1,si2);
l3=si0;
si1=2U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L2;
default:
goto L4;
}
L5:;
si0=1169912U;
si1=60U;
si2=1169972U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1169888U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=55U;
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
si1=1169896U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
if(si0){
goto L7;
}
si0=0U;
l3=si0;
goto L6;
L7:;
si0=l4;
si1=16U;
si0+=si1;
si1=l3;
si2=l3;
si2=f15399(i,si2);
f756(i,si0,si1,si2);
si0=0U;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l4;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
l3=si0;
si0=l4;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L6:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f910(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=249U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=343U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=344U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si2=l2;
si3=255U;
si2&=si3;
l2=si2;
si3=0U;
si4=l2;
si3-=si4;
si4=l1;
si2=si4?si2:si3;
si3=1169692U;
si4=56U;
si1=f15253(i,si1,si2,si3,si4);
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1169698U;
si1=35U;
si2=1169988U;
f892(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l3;
si2=4U;
si1+=si2;
si2=1170316U;
si3=l3;
si4=8U;
si3+=si4;
si4=1170420U;
f906(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f911(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=-16U;
si0+=si1;
si1=255U;
si0&=si1;
si1=249U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=56U;
si0=f15269(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=343U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=344U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
si2=l1;
si3=16U;
si2+=si3;
si3=255U;
si2&=si3;
si3=1169692U;
si4=56U;
si1=f15253(i,si1,si2,si3,si4);
l1=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1169698U;
si1=35U;
si2=1170004U;
f892(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=4U;
si1=56U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l2;
si2=4U;
si1+=si2;
si2=1170316U;
si3=l2;
si4=8U;
si3+=si4;
si4=1170420U;
f906(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f912(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1170196U;
si2=8U;
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
si1=1170204U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1170212U;
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

U32 f913(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1170276U;
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
si1=1170256U;
si2=3U;
si3=l2;
si4=4U;
si3+=si4;
si4=1170260U;
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

U32 f914(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1170624U;
si2=7U;
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
si1=1170631U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1170636U;
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

U32 f915(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1170652U;
si2=7U;
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
si1=1170631U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1170660U;
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

U32 f916(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1170516U;
si2=6U;
si3=1170522U;
si4=14U;
si5=l0;
si6=16U;
si5+=si6;
si6=1170536U;
si7=1170552U;
si8=8U;
si9=l0;
si10=1170560U;
si11=1170576U;
si12=9U;
si13=l0;
si14=8U;
si13+=si14;
si14=1170560U;
si15=1170585U;
si16=7U;
si17=l2;
si18=12U;
si17+=si18;
si18=1170608U;
si0=f743(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f917(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si0=f897(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f918(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1170516U;
si2=6U;
si3=1170522U;
si4=14U;
si5=l0;
si6=16U;
si5+=si6;
si6=1170536U;
si7=1170552U;
si8=8U;
si9=l0;
si10=1170560U;
si11=1170576U;
si12=9U;
si13=l0;
si14=8U;
si13+=si14;
si14=1170560U;
si15=1170585U;
si16=7U;
si17=l2;
si18=12U;
si17+=si18;
si18=1170592U;
si0=f743(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f919(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj3;
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
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L5:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
sj3=l4;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l3=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l4;
sj1=16ULL;
si0=sj0 < sj1;
l3=si0;
sj0=l4;
sj1=4ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
goto L2;
}
L3:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L6:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=55U;
sj3=l4;
si3=(U32)(sj3);
si4=15U;
si3&=si4;
l3=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l3;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
sj0=l4;
sj1=16ULL;
si0=sj0 < sj1;
l3=si0;
sj0=l4;
sj1=4ULL;
sj0>>=(sj1&63);
l4=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L1;
L2:;
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
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
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
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

void f920(rustpythonInstance*i,U32 l0) {
L0:;
}

void f921(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L0:;
}

void f922(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f923(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1170292U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1170308U;
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

U32 f924(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1;
U64 sj0,sj1;
si0=0U;
l3=si0;
si0=l1;
sj0=(U64)(si0);
si1=l2;
sj1=(U64)(si1);
sj0*=sj1;
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L1;
}
sj0=l4;
si0=(U32)(sj0);
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l1=si0;
si1=4U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=2147483645U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
if(si0){
goto L3;
}
si0=4U;
si1=0U;
si0=f15277(i,si0,si1);
l3=si0;
goto L2;
L3:;
si0=l2;
si0=f15269(i,si0);
l3=si0;
L2:;
si0=l3;
if(si0){
goto L4;
}
si0=0U;
goto L0;
L4:;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
L1:;
si0=l3;
L0:;
return si0;
}

void f925(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=-4U;
si0+=si1;
f15271(i,si0);
L0:;
}

void f926(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l6;
si2=255U;
si1&=si2;
si0=f15254(i,si0,si1);
l5=si0;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si2-=si3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l9;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l4;
si2-=si3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=5U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L7;
case 2:
goto L6;
case 3:
goto L6;
case 4:
goto L7;
case 5:
goto L5;
case 6:
goto L3;
case 7:
goto L2;
default:
goto L7;
}
L7:;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=1170460U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=55U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l7;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l7;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=1170468U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L9;
}
goto L8;
L9:;
si0=l7;
si1=16U;
si0+=si1;
si1=l9;
si2=l9;
si2=f15399(i,si2);
f756(i,si0,si1,si2);
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
l8=si0;
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
L8:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L4:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l7;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f927(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=0U;
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l6;
si2=255U;
si1&=si2;
si0=f15243(i,si0,si1);
l5=si0;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si2-=si3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l9;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l4;
si2-=si3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=5U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
case 2:
goto L6;
case 3:
goto L2;
case 4:
goto L6;
case 5:
goto L5;
case 6:
goto L3;
default:
goto L6;
}
L6:;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=1170460U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=55U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l7;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l7;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=1170500U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=0U;
l8=si0;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L4:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L3:;
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
if(si0){
goto L8;
}
si0=0U;
l9=si0;
goto L7;
L8:;
si0=l7;
si1=16U;
si0+=si1;
si1=l9;
si2=l9;
si2=f15399(i,si2);
f756(i,si0,si1,si2);
si0=0U;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l7;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=si2?si0:si1;
l9=si0;
si0=l7;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L7:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
L1:;
si0=l0;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f928(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si0=f749(i,si0,si1,si2);
L0:;
return si0;
}

U32 f929(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
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
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
sj0=(U64)(si0);
sj1=0ULL;
si2=l0;
sj2=(U64)(I64)(I32)(si2);
sj1-=sj2;
si2=l0;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
l0=si2;
sj0=si2?sj0:sj1;
si1=l0;
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


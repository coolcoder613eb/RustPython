#include "w2c2_base.h"

#include "rustpython.h"

void f1230(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj5;
si0=l2;
if(si0){
goto L4;
}
si0=8U;
l4=si0;
goto L3;
L4:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L6;
}
si0=l6;
l4=si0;
goto L5;
L6:;
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
goto L3;
L7:;
si0=l5;
si1=1U;
si0=f15273(i,si0,si1);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=l4;
si2=l2;
si3=l1;
si4=l2;
sj5=l3;
sj1=f1231(i,si1,si2,si3,si4,sj5);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U64 f1231(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=l4;
i64_store(&i->m0,(U64)si0+80U,sj1);
sj0=l4;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si2=-1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj0=l4;
sj0=I64_CLZ(sj0);
l8=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l6;
si0+=si1;
sj1=l7;
sj2=l4;
si1=sj1 >= sj2;
l6=si1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
sj1=-1ULL;
sj2=l4;
sj3=-1ULL;
sj2^=sj3;
sj3=l4;
sj4=0ULL;
f15403(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si2=-16U;
si1+=si2;
l9=si1;
si0+=si1;
l3=si0;
si0=l2;
si1=l9;
si0+=si1;
l2=si0;
sj0=l7;
sj1=l4;
sj2=0ULL;
si3=l6;
sj1=si3?sj1:sj2;
sj0-=sj1;
l7=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
L7:;
{
si0=l5;
sj1=l10;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=l7;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l11;
si3=l5;
sj3=i64_load(&i->m0,(U64)si3);
l7=sj3;
sj2+=sj3;
l12=sj2;
sj3=l7;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=1ULL;
sj1+=sj2;
l13=sj1;
sj2=l4;
sj1*=sj2;
sj0-=sj1;
l11=sj0;
sj1=l12;
si0=sj0 > sj1;
if(si0){
goto L11;
}
sj0=l11;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
sj0=l11;
l7=sj0;
goto L8;
L11:;
sj0=l11;
sj1=l4;
sj0+=sj1;
l7=sj0;
sj1=l11;
si0=sj0 < sj1;
if(si0){
goto L9;
}
sj0=l11;
l7=sj0;
goto L8;
L10:;
sj0=l11;
sj1=l4;
sj0-=sj1;
l7=sj0;
sj0=l13;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
goto L8;
L9:;
sj0=l13;
sj1=-1ULL;
sj0+=sj1;
l13=sj0;
L8:;
si0=l3;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l1;
if(si0){
goto L7;
}
goto L1;
}
L6:;
si0=l3;
l6=si0;
sj0=0ULL;
l11=sj0;
sj0=l7;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
l6=si0;
sj0=l7;
l11=sj0;
goto L2;
L5:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1U;
si1=l5;
si2=80U;
si1+=si2;
si2=1237776U;
si3=l5;
si4=88U;
si3+=si4;
si4=1237844U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l3;
si1=l1;
si2=1237784U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1237800U;
si1=25U;
si2=1237828U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l4;
sj1=l8;
sj0<<=(sj1&63);
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=1237728U;
si1=25U;
si2=1237760U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l5;
si1=64U;
si0+=si1;
sj1=-1ULL;
sj2=l4;
sj3=-1ULL;
sj2^=sj3;
sj3=l4;
sj4=0ULL;
f15403(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=l6;
si2=-1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=0ULL;
sj2=l8;
sj1-=sj2;
l13=sj1;
sj0>>=(sj1&63);
sj1=l11;
sj2=l8;
sj1<<=(sj2&63);
sj0|=sj1;
l7=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+64U);
l14=sj0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l3=si0;
si1=l1;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
sj0=l13;
sj1=63ULL;
sj0&=sj1;
l15=sj0;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l3=si0;
si0=l6;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l5;
si1=56U;
si0+=si1;
l6=si0;
L14:;
{
si0=l5;
si1=48U;
si0+=si1;
sj1=l14;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
sj0=l12;
sj1=l8;
sj0<<=(sj1&63);
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=l15;
sj1>>=(sj2&63);
sj0|=sj1;
l11=sj0;
sj1=l4;
sj2=l7;
si3=l6;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l11;
si4=l5;
sj4=i64_load(&i->m0,(U64)si4+48U);
l7=sj4;
sj3+=sj4;
l10=sj3;
sj4=l7;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=1ULL;
sj2+=sj3;
l13=sj2;
sj1*=sj2;
sj0-=sj1;
l11=sj0;
sj1=l10;
si0=sj0 > sj1;
if(si0){
goto L18;
}
sj0=l11;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L17;
}
sj0=l11;
l7=sj0;
goto L15;
L18:;
sj0=l11;
sj1=l4;
sj0+=sj1;
l7=sj0;
sj1=l11;
si0=sj0 < sj1;
if(si0){
goto L16;
}
sj0=l11;
l7=sj0;
goto L15;
L17:;
sj0=l11;
sj1=l4;
sj0-=sj1;
l7=sj0;
sj0=l13;
sj1=1ULL;
sj0+=sj1;
l13=sj0;
goto L15;
L16:;
sj0=l13;
sj1=-1ULL;
sj0+=sj1;
l13=sj0;
L15:;
si0=l3;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
if(si0){
goto L14;
}
}
L13:;
si0=l5;
si1=32U;
si0+=si1;
sj1=l14;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l12;
sj1=l8;
sj0<<=(sj1&63);
l11=sj0;
sj1=l7;
si2=l5;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l11;
si4=l5;
sj4=i64_load(&i->m0,(U64)si4+32U);
l13=sj4;
sj3+=sj4;
l12=sj3;
sj4=l13;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l13=sj1;
sj2=1ULL;
sj1+=sj2;
l11=sj1;
sj2=l4;
sj1*=sj2;
sj0-=sj1;
l7=sj0;
sj1=l12;
si0=sj0 > sj1;
if(si0){
goto L20;
}
sj0=l7;
sj1=l4;
si0=sj0 < sj1;
if(si0){
goto L19;
}
sj0=l7;
sj1=l4;
sj0-=sj1;
l7=sj0;
sj0=l13;
sj1=2ULL;
sj0+=sj1;
l11=sj0;
goto L19;
L20:;
sj0=l7;
sj1=l4;
sj0+=sj1;
l4=sj0;
sj1=l7;
sj2=l4;
sj3=l7;
si2=sj2 < sj3;
l1=si2;
sj0=si2?sj0:sj1;
l7=sj0;
sj0=l13;
sj1=l11;
si2=l1;
sj0=si2?sj0:sj1;
l11=sj0;
L19:;
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=l8;
sj0>>=(sj1&63);
l7=sj0;
L1:;
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
sj0=l7;
L0:;
return sj0;
}

U64 f1232(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=112U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0+80U,sj1);
sj0=l2;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
sj0=0ULL;
l4=sj0;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj0=l2;
sj0=I64_CLZ(sj0);
l8=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l6;
sj1=l7;
sj2=l2;
si1=sj1 >= sj2;
l5=si1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
sj1=-1ULL;
sj2=l2;
sj3=-1ULL;
sj2^=sj3;
sj3=l2;
sj4=0ULL;
f15403(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=-16U;
si0+=si1;
l9=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l6=si0;
sj0=l7;
sj1=l2;
sj2=0ULL;
si3=l5;
sj1=si3?sj1:sj2;
sj0-=sj1;
l7=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+16U);
l10=sj0;
si0=l3;
si1=8U;
si0+=si1;
l1=si0;
L7:;
{
si0=l3;
sj1=l10;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l9;
si1=l6;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=l7;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l4;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3);
l7=sj3;
sj2+=sj3;
l11=sj2;
sj3=l7;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=1ULL;
sj1+=sj2;
l12=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l4=sj0;
sj1=l11;
si0=sj0 > sj1;
if(si0){
goto L11;
}
sj0=l4;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
sj0=l4;
l7=sj0;
goto L8;
L11:;
sj0=l4;
sj1=l2;
sj0+=sj1;
l7=sj0;
sj1=l4;
si0=sj0 < sj1;
if(si0){
goto L9;
}
sj0=l4;
l7=sj0;
goto L8;
L10:;
sj0=l4;
sj1=l2;
sj0-=sj1;
l7=sj0;
sj0=l12;
sj1=1ULL;
sj0+=sj1;
l12=sj0;
goto L8;
L9:;
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
l12=sj0;
L8:;
si0=l5;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si1=8U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L1;
}
L6:;
sj0=l7;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L12;
}
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
l1=si0;
sj0=l7;
l4=sj0;
L12:;
sj0=l2;
sj1=l8;
sj0<<=(sj1&63);
l2=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l3;
si1=64U;
si0+=si1;
sj1=-1ULL;
sj2=l2;
sj3=-1ULL;
sj2^=sj3;
sj3=l2;
sj4=0ULL;
f15403(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=0ULL;
sj2=l8;
sj1-=sj2;
l12=sj1;
sj0>>=(sj1&63);
sj1=l4;
sj2=l8;
sj1<<=(sj2&63);
sj0|=sj1;
l7=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+64U);
l13=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
sj0=l12;
sj1=63ULL;
sj0&=sj1;
l14=sj0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-16U;
si0+=si1;
l6=si0;
si0=l3;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
L13:;
{
si0=l3;
si1=48U;
si0+=si1;
sj1=l13;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l11;
sj1=l8;
sj0<<=(sj1&63);
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l14;
sj1>>=(sj2&63);
sj0|=sj1;
l4=sj0;
sj1=l2;
sj2=l7;
si3=l9;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l4;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+48U);
l7=sj4;
sj3+=sj4;
l10=sj3;
sj4=l7;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=1ULL;
sj2+=sj3;
l12=sj2;
sj1*=sj2;
sj0-=sj1;
l4=sj0;
sj1=l10;
si0=sj0 > sj1;
if(si0){
goto L17;
}
sj0=l4;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
sj0=l4;
l7=sj0;
goto L14;
L17:;
sj0=l4;
sj1=l2;
sj0+=sj1;
l7=sj0;
sj1=l4;
si0=sj0 < sj1;
if(si0){
goto L15;
}
sj0=l4;
l7=sj0;
goto L14;
L16:;
sj0=l4;
sj1=l2;
sj0-=sj1;
l7=sj0;
sj0=l12;
sj1=1ULL;
sj0+=sj1;
l12=sj0;
goto L14;
L15:;
sj0=l12;
sj1=-1ULL;
sj0+=sj1;
l12=sj0;
L14:;
si0=l5;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l6;
si1=8U;
si0+=si1;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L13;
}
goto L2;
L18:;
}
si0=l5;
si1=l1;
si2=1237860U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=1U;
si1=l3;
si2=80U;
si1+=si2;
si2=1237776U;
si3=l3;
si4=88U;
si3+=si4;
si4=1237892U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1237800U;
si1=25U;
si2=1237876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1237728U;
si1=25U;
si2=1237760U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=32U;
si0+=si1;
sj1=l13;
sj2=0ULL;
sj3=l7;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l11;
sj1=l8;
sj0<<=(sj1&63);
l4=sj0;
sj1=l7;
si2=l3;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l4;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4+32U);
l12=sj4;
sj3+=sj4;
l11=sj3;
sj4=l12;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l12=sj1;
sj2=1ULL;
sj1+=sj2;
l4=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l7=sj0;
sj1=l11;
si0=sj0 > sj1;
if(si0){
goto L20;
}
sj0=l7;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L19;
}
sj0=l7;
sj1=l2;
sj0-=sj1;
l7=sj0;
sj0=l12;
sj1=2ULL;
sj0+=sj1;
l4=sj0;
goto L19;
L20:;
sj0=l7;
sj1=l2;
sj0+=sj1;
l2=sj0;
sj1=l7;
sj2=l2;
sj3=l7;
si2=sj2 < sj3;
l6=si2;
sj0=si2?sj0:sj1;
l7=sj0;
sj0=l12;
sj1=l4;
si2=l6;
sj0=si2?sj0:sj1;
l4=sj0;
L19:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=l8;
sj0>>=(sj1&63);
l7=sj0;
L1:;
si0=l3;
si1=112U;
si0+=si1;
i->g0=si0;
sj0=l7;
L0:;
return sj0;
}

U64 f1233(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U64 l4,U64 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=96U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
sj1=l3;
i64_store(&i->m0,(U64)si0+64U,sj1);
sj0=l3;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l2;
si0-=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
sj0=l3;
sj1=l5;
sj0<<=(sj1&63);
l8=sj0;
sj0=l5;
sj1=63ULL;
sj0&=sj1;
l9=sj0;
si0=l0;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l7;
si2=-1U;
si1+=si2;
l11=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
sj0=l5;
si0=!(sj0);
if(si0){
goto L8;
}
sj0=l13;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L7;
}
si0=l7;
l11=si0;
sj0=0ULL;
l3=sj0;
goto L6;
L8:;
si0=l12;
sj1=l13;
sj2=l8;
si1=sj1 >= sj2;
l7=si1;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l8;
sj2=0ULL;
si3=l7;
sj1=si3?sj1:sj2;
sj0-=sj1;
l3=sj0;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si1=l0;
si0+=si1;
si1=-16U;
si0+=si1;
l1=si0;
L9:;
{
si0=l6;
si1=16U;
si0+=si1;
sj1=l3;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=l8;
sj2=l3;
si3=l6;
si4=16U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l5;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+16U);
l3=sj4;
sj3+=sj4;
l13=sj3;
sj4=l3;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=1ULL;
sj2+=sj3;
l14=sj2;
sj1*=sj2;
sj0-=sj1;
l5=sj0;
sj1=l13;
si0=sj0 > sj1;
if(si0){
goto L13;
}
sj0=l5;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L12;
}
sj0=l5;
l3=sj0;
goto L10;
L13:;
sj0=l5;
sj1=l8;
sj0+=sj1;
l3=sj0;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L11;
}
sj0=l5;
l3=sj0;
goto L10;
L12:;
sj0=l5;
sj1=l8;
sj0-=sj1;
l3=sj0;
sj0=l14;
sj1=1ULL;
sj0+=sj1;
l14=sj0;
goto L10;
L11:;
sj0=l14;
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
L10:;
si0=l1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
if(si0){
goto L9;
}
goto L1;
}
L7:;
si0=l12;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l9;
sj0<<=(sj1&63);
l3=sj0;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l10;
si0+=si1;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
L6:;
sj0=l3;
sj1=l13;
sj2=0ULL;
sj3=l5;
sj2-=sj3;
l5=sj2;
sj1>>=(sj2&63);
sj0|=sj1;
l3=sj0;
si0=l11;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
sj0=l5;
sj1=63ULL;
sj0&=sj1;
l15=sj0;
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si0+=si1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l6;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l16=si0;
si0=l11;
l12=si0;
L14:;
{
sj0=l3;
sj1=l8;
si0=sj0 < sj1;
if(si0){
goto L15;
}
si0=1237956U;
si1=28U;
si2=1237984U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l12;
si1=-1U;
si0+=si1;
l7=si0;
si0=l6;
si1=48U;
si0+=si1;
sj1=l3;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l13;
sj1=l9;
sj0<<=(sj1&63);
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l15;
sj1>>=(sj2&63);
sj0|=sj1;
l5=sj0;
sj1=l8;
sj2=l3;
si3=l16;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l5;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+48U);
l3=sj4;
sj3+=sj4;
l17=sj3;
sj4=l3;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=1ULL;
sj2+=sj3;
l14=sj2;
sj1*=sj2;
sj0-=sj1;
l5=sj0;
sj1=l17;
si0=sj0 > sj1;
if(si0){
goto L19;
}
sj0=l5;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L18;
}
sj0=l5;
l3=sj0;
goto L16;
L19:;
sj0=l5;
sj1=l8;
sj0+=sj1;
l3=sj0;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L17;
}
sj0=l5;
l3=sj0;
goto L16;
L18:;
sj0=l5;
sj1=l8;
sj0-=sj1;
l3=sj0;
sj0=l14;
sj1=1ULL;
sj0+=sj1;
l14=sj0;
goto L16;
L17:;
sj0=l14;
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
L16:;
si0=l7;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l1;
si1=8U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l7;
l12=si0;
si0=l7;
si1=1U;
si0=si0 > si1;
if(si0){
goto L14;
}
goto L2;
L20:;
}
si0=l12;
si1=-1U;
si0+=si1;
si1=l11;
si2=1237940U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1235764U;
si1=35U;
si2=1237908U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l6;
si2=64U;
si1+=si2;
si2=1237776U;
si3=l6;
si4=72U;
si3+=si4;
si4=1238000U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1235944U;
si1=43U;
si2=1237924U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si1=32U;
si0+=si1;
sj1=l3;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l13;
sj1=l9;
sj0<<=(sj1&63);
l5=sj0;
sj1=l3;
si2=l6;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l5;
si4=l6;
sj4=i64_load(&i->m0,(U64)si4+32U);
l14=sj4;
sj3+=sj4;
l13=sj3;
sj4=l14;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l14=sj1;
sj2=1ULL;
sj1+=sj2;
l5=sj1;
sj2=l8;
sj1*=sj2;
sj0-=sj1;
l3=sj0;
sj1=l13;
si0=sj0 > sj1;
if(si0){
goto L21;
}
sj0=l3;
sj1=l8;
si0=sj0 < sj1;
if(si0){
goto L22;
}
sj0=l3;
sj1=l8;
sj0-=sj1;
l3=sj0;
sj0=l14;
sj1=2ULL;
sj0+=sj1;
l5=sj0;
L22:;
si0=l10;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L21:;
sj0=l3;
sj1=l8;
sj0+=sj1;
l13=sj0;
sj1=l3;
sj2=l13;
sj3=l3;
si2=sj2 < sj3;
l1=si2;
sj0=si2?sj0:sj1;
l3=sj0;
si0=l10;
sj1=l14;
sj2=l5;
si3=l1;
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=-8U;
si0+=si1;
l12=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l6;
si1=8U;
si0+=si1;
l11=si0;
L24:;
{
si0=l6;
sj1=l3;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l1;
si0+=si1;
l7=si0;
sj0=l3;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=1ULL;
sj0+=sj1;
l5=sj0;
sj0=l8;
sj1=l14;
sj2=-1ULL;
sj1^=sj2;
sj0*=sj1;
l3=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 > sj1;
if(si0){
goto L26;
}
sj0=l3;
sj1=l8;
si0=sj0 < sj1;
if(si0){
goto L25;
}
sj0=l3;
sj1=l8;
sj0-=sj1;
l3=sj0;
sj0=l14;
sj1=2ULL;
sj0+=sj1;
l5=sj0;
goto L25;
L26:;
sj0=l3;
sj1=l8;
sj0+=sj1;
l13=sj0;
sj1=l3;
sj2=l13;
sj3=l3;
si2=sj2 < sj3;
l16=si2;
sj0=si2?sj0:sj1;
l3=sj0;
sj0=l14;
sj1=l5;
si2=l16;
sj0=si2?sj0:sj1;
l5=sj0;
L25:;
si0=l7;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L24;
}
}
L23:;
si0=l6;
si1=96U;
si0+=si1;
i->g0=si0;
sj0=l3;
sj1=l9;
sj0>>=(sj1&63);
L0:;
return sj0;
}

void f1234(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4,U64 l5,U64 l6) {
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=16U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l1;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
sj1=l1;
si2=l7;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l2;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+16U);
sj2+=sj3;
l8=sj2;
sj3=l2;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l6=sj1;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l9=sj0;
sj0=l3;
sj1=l5;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l10=sj1;
sj0-=sj1;
l1=sj0;
sj0=l8;
sj1=l2;
sj2=l6;
sj3=l4;
sj2*=sj3;
sj1-=sj2;
sj2=l4;
si3=l7;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj3=l10;
sj4=l5;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj3=l3;
sj4=l10;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1-=sj2;
l2=sj1;
si0=sj0 <= sj1;
if(si0){
goto L2;
}
sj0=l1;
sj1=l5;
si0=sj0 < sj1;
l11=si0;
sj1=l2;
sj2=l4;
si1=sj1 < sj2;
sj2=l2;
sj3=l4;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L1;
}
sj0=l2;
sj1=l4;
sj0-=sj1;
si1=l11;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
sj0=l1;
sj1=l5;
sj0-=sj1;
l1=sj0;
sj0=l6;
sj1=2ULL;
sj0+=sj1;
l9=sj0;
goto L1;
L2:;
sj0=l2;
sj1=l4;
sj0+=sj1;
sj1=l1;
sj2=l5;
sj1+=sj2;
l4=sj1;
sj2=l1;
si1=sj1 < sj2;
l11=si1;
sj1=(U64)(si1);
sj0+=sj1;
l5=sj0;
sj1=l2;
si2=l11;
sj3=l5;
sj4=l2;
si3=sj3 < sj4;
sj4=l5;
sj5=l2;
si4=sj4 == sj5;
si2=si4?si2:si3;
l11=si2;
sj0=si2?sj0:sj1;
l2=sj0;
sj0=l4;
sj1=l1;
si2=l11;
sj0=si2?sj0:sj1;
l1=sj0;
sj0=l6;
sj1=l9;
si2=l11;
sj0=si2?sj0:sj1;
l9=sj0;
L1:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1235(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj6;
si0=i->g0;
si1=80U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L6;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si1=1U;
si0<<=(si1&31);
l8=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
si0=1235764U;
si1=35U;
si2=1239020U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
si0=l1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
sj1=-1ULL;
sj2=l7;
sj3=-1ULL;
sj2^=sj3;
sj3=l7;
sj4=0ULL;
f15403(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L12:;
si0=0U;
si1=0U;
si2=1238988U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=255U;
si2=l3;
si3=3U;
si2<<=(si3&31);
l5=si2;
si0=f15392(i,si0,si1,si2);
l9=si0;
si0=l3;
si1=3U;
si0&=si1;
l10=si0;
si0=0U;
l11=si0;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l9;
si1=l5;
si0+=si1;
l12=si0;
si0=l3;
si1=-4U;
si0&=si1;
l13=si0;
si0=0U;
l5=si0;
si0=0U;
l11=si0;
L14:;
{
si0=l12;
si1=l5;
si0+=si1;
l4=si0;
si1=l2;
si2=l5;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l14;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l14;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l13;
si1=l11;
si2=4U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l10;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=l11;
si2=3U;
si1<<=(si2&31);
l4=si1;
si2=l3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si0+=si1;
l5=si0;
si0=l2;
si1=l4;
si0+=si1;
l4=si0;
L16:;
{
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=l1;
si2=l9;
si3=l8;
si4=l2;
si5=2U;
si0=f1222(i,si0,si1,si2,si3,si4,si5);
L9:;
si0=1U;
l5=si0;
goto L1;
L8:;
si0=l6;
si1=32U;
si0+=si1;
sj1=-1ULL;
sj2=l7;
sj3=-1ULL;
sj2^=sj3;
sj3=l7;
sj4=0ULL;
f15403(i,si0,sj1,sj2,sj3,sj4);
sj0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
l15=sj1;
sj0*=sj1;
l16=sj0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si2=l2;
si1+=si2;
si2=-16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj0+=sj1;
l18=sj0;
sj1=l16;
si0=sj0 < sj1;
if(si0){
goto L3;
}
goto L2;
L7:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=1U;
si1=l6;
si2=52U;
si1+=si2;
si2=1237756U;
si3=l6;
si4=56U;
si3+=si4;
si4=1239196U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1239132U;
si1=45U;
si2=1239180U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si1=l5;
si2=1239004U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1237728U;
si1=25U;
si2=1237760U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l18;
sj3=l7;
si2=sj2 < sj3;
l5=si2;
sj0=si2?sj0:sj1;
sj1=l15;
sj0+=sj1;
l15=sj0;
sj0=l18;
sj1=l7;
sj2=0ULL;
sj3=l7;
si4=l5;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l18=sj0;
L2:;
si0=l6;
si1=16U;
si0+=si1;
sj1=l15;
sj2=0ULL;
sj3=l17;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l18;
si1=l6;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l16=sj0;
sj1=l18;
si0=sj0 >= sj1;
if(si0){
goto L17;
}
sj0=l16;
sj1=l7;
si0=sj0 > sj1;
if(si0){
goto L18;
}
sj0=l16;
sj1=l7;
si0=sj0 == sj1;
sj1=l17;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+16U);
si1=sj1 <= sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L18;
}
sj0=l15;
sj1=-1ULL;
sj0+=sj1;
l15=sj0;
goto L17;
L18:;
sj0=l15;
sj1=-2ULL;
sj0+=sj1;
l15=sj0;
L17:;
si0=l3;
si1=211U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l0;
si1=l1;
si2=l9;
si3=l8;
si4=l2;
si5=l3;
sj6=l15;
si0=f1348(i,si0,si1,si2,si3,si4,si5,sj6);
goto L19;
L20:;
si0=l0;
si1=l1;
si2=l9;
si3=l8;
si4=l2;
si5=l3;
sj6=l15;
si0=f1341(i,si0,si1,si2,si3,si4,si5,sj6);
L19:;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L23;
}
si0=l0;
si1=8U;
si0+=si1;
l5=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l4=si0;
L24:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l7;
si0=!(sj0);
if(si0){
goto L24;
}
}
L23:;
si0=0U;
l5=si0;
goto L1;
L22:;
si0=1239052U;
si1=63U;
si2=1239116U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l3;
si1=l1;
si2=1239036U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f1236(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U64 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U64 l35=0;
U64 l36=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=789U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L12;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=0U;
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=4U;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l7=si0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l7;
sj1=3ULL;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l7=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l7;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l1=si0;
L17:;
si0=l3;
si1=1U;
si0>>=(si1&31);
l7=si0;
si0=l1;
si1=1U;
si0>>=(si1&31);
l8=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si1=4U;
si0|=si1;
l9=si0;
goto L11;
L18:;
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l1;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0|=si1;
l9=si0;
goto L11;
L19:;
si0=l1;
si1=4U;
si0|=si1;
si1=l8;
si0+=si1;
l9=si0;
if(si0){
goto L11;
}
si0=8U;
l10=si0;
si0=0U;
l9=si0;
si0=1U;
l11=si0;
goto L10;
L16:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si0=f1235(i,si0,si1,si2,si3,si4,si5);
l1=si0;
goto L2;
L15:;
si0=l3;
si1=l1;
si2=1239212U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=4U;
si1=4U;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1240636U;
si1=49U;
si2=1240688U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l1;
if(si0){
goto L21;
}
si0=l8;
l10=si0;
goto L20;
L21:;
si0=l8;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l8;
si1=l1;
si0=f15277(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l11=si0;
si0=l10;
si1=0U;
si2=l1;
si0=f15392(i,si0,si1,si2);
goto L10;
L22:;
si0=l1;
si1=1U;
si0=f15273(i,si0,si1);
l10=si0;
L20:;
si0=0U;
l11=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=l7;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=1576U;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l1;
l12=si0;
goto L8;
L23:;
si0=1U;
l7=si0;
L24:;
{
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l6;
si1=l7;
f1194(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L25:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
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
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1575U;
si0=si0 > si1;
l8=si0;
si0=l1;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l12=si0;
l1=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L8;
}
goto L24;
}
L9:;
si0=l8;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l3;
si1=l12;
si0-=si1;
l1=si0;
si0=l3;
si1=l12;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l12;
si2=l2;
si3=l1;
si2+=si3;
si3=l12;
si4=l4;
si5=l5;
si0=f1235(i,si0,si1,si2,si3,si4,si5);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L26;
}
si0=-1U;
l1=si0;
goto L1;
L26:;
si0=l4;
si1=-8U;
si0+=si1;
l13=si0;
si0=l4;
si1=8U;
si0+=si1;
l14=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l17=si0;
L27:;
{
si0=l3;
si1=l16;
si2=-4U;
si1+=si2;
l16=si1;
si1=i32_load(&i->m0,(U64)si1);
l18=si1;
si0-=si1;
l1=si0;
si0=l3;
si1=l18;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l19=si1;
si0+=si1;
l8=si0;
si0=l18;
si1=62U;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=0U;
l20=si0;
si0=l18;
si1=1U;
si0+=si1;
l1=si0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l1;
sj1=2ULL;
sj2=3ULL;
si3=l1;
si4=97U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l21=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l7=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l7;
sj1=l21;
si1=(U32)(sj1);
l22=si1;
si0<<=(si1&31);
l20=si0;
si1=l22;
si0>>=(si1&31);
si1=l7;
si0=si0 != si1;
if(si0){
goto L59;
}
L63:;
si0=l3;
si1=l12;
si0-=si1;
l7=si0;
si0=l3;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L61;
}
goto L4;
L62:;
si0=l3;
si1=l12;
si0-=si1;
l7=si0;
si0=l3;
si1=l12;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l18;
si1=1U;
si0+=si1;
l1=si0;
si0=l18;
si1=l12;
si0-=si1;
l23=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
goto L53;
L61:;
si0=l18;
si1=l12;
si0-=si1;
l23=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l20;
si1=l18;
si2=l12;
si1+=si2;
l25=si1;
si0=si0 > si1;
if(si0){
goto L53;
}
si0=l4;
si1=l5;
si2=l20;
si3=l8;
si4=l18;
si5=l24;
si6=l12;
si7=l10;
si8=l9;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l20;
si1=1U;
si0+=si1;
l26=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L58;
}
si0=l18;
si1=l20;
si2=l12;
si1-=si2;
l27=si1;
si0=si0 >= si1;
if(si0){
goto L64;
}
si0=1239520U;
si1=34U;
si2=1239556U;
f673(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l20;
si1=l12;
si0=si0 < si1;
if(si0){
goto L57;
}
si0=l18;
si1=l27;
si0-=si1;
l28=si0;
si0=0U;
l22=si0;
si0=l20;
si1=l12;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l22=si0;
si0=l27;
l29=si0;
si0=l8;
l7=si0;
L66:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l30=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l30;
si0=sj0 < sj1;
l31=si0;
si0=l22;
si1=255U;
si0&=si1;
if(si0){
goto L68;
}
si0=l31;
l22=si0;
goto L67;
L68:;
si0=l31;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l22=si0;
L67:;
si0=l1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L66;
}
}
L65:;
si0=l4;
si1=l20;
si2=3U;
si1<<=(si2&31);
l32=si1;
si0+=si1;
l33=si0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=l28;
si0=si0 < si1;
if(si0){
goto L56;
}
si0=l18;
si1=l27;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=l8;
si1=l27;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l34=si0;
si0=0U;
l1=si0;
si0=l28;
l29=si0;
si0=0U;
l7=si0;
L70:;
{
si0=l4;
si1=l1;
si0+=si1;
l31=si0;
sj0=i64_load(&i->m0,(U64)si0);
l30=sj0;
si1=l34;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l30;
si0=sj0 < sj1;
l27=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L72;
}
si0=l27;
l7=si0;
goto L71;
L72:;
si0=l27;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L71:;
si0=l31;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L70;
}
}
si0=l22;
si0=!(si0);
if(si0){
goto L73;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L73;
}
si0=l28;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l22=si0;
si0=l14;
l1=si0;
L74:;
{
si0=l22;
si0=!(si0);
if(si0){
goto L54;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=-8U;
si0+=si1;
l22=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l21;
si0=!(sj0);
if(si0){
goto L74;
}
}
L73:;
si0=l7;
if(si0){
goto L54;
}
goto L55;
L69:;
si0=l22;
si0=!(si0);
if(si0){
goto L55;
}
goto L54;
L60:;
si0=l1;
si1=l3;
si2=1239260U;
f662(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l26;
si1=l5;
si2=1239292U;
f666(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l12;
si1=l20;
si2=1239308U;
f675(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=1235764U;
si1=35U;
si2=1239324U;
f673(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=l26;
si1=l28;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l4;
si1=l28;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
}
si0=l20;
si1=4U;
si0<<=(si1&31);
si1=l25;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l7=si0;
si0=l14;
si1=l22;
si0+=si1;
l1=si0;
L76:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L75;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l21;
si0=!(sj0);
if(si0){
goto L76;
}
goto L54;
}
L75:;
si0=1239444U;
si1=57U;
si2=1239504U;
f673(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l33;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l20;
si0=!(si0);
if(si0){
goto L78;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l30=sj1;
sj2=1ULL;
sj3=l21;
sj2-=sj3;
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l22=si0;
sj0=l30;
sj1=l21;
si0=sj0 >= sj1;
if(si0){
goto L52;
}
si0=l32;
si1=-8U;
si0+=si1;
l7=si0;
si0=l14;
l1=si0;
L79:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L77;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l21;
si0=!(sj0);
if(si0){
goto L79;
}
goto L52;
}
L78:;
si0=0U;
l22=si0;
sj0=l21;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L52;
}
L77:;
si0=1239340U;
si1=87U;
si2=1239428U;
f673(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l18;
si1=l12;
si0=f1359(i,si0,si1);
l27=si0;
if(si0){
goto L81;
}
si0=8U;
l34=si0;
goto L80;
L81:;
si0=l27;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l27;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l27;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l22=si0;
si0=l7;
if(si0){
goto L83;
}
si0=l22;
l34=si0;
goto L82;
L83:;
si0=l22;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L84;
}
si0=l22;
si1=l7;
si0=f15277(i,si0,si1);
l34=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l34;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L80;
L84:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l34=si0;
L82:;
si0=l34;
si0=!(si0);
if(si0){
goto L51;
}
L80:;
si0=l4;
si1=l5;
si2=l8;
si3=l18;
si4=l24;
si5=l12;
si6=l34;
si7=l27;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l1;
si1=l12;
si0=si0 < si1;
if(si0){
goto L50;
}
si0=l1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l23;
si1=1U;
si0+=si1;
l22=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l6;
si1=l1;
si2=l12;
si1-=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l22;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l22;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l1;
si1=l12;
si0=si0 == si1;
if(si0){
goto L85;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l29=si0;
si0=l8;
l7=si0;
L86:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l30=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l30;
si0=sj0 < sj1;
l31=si0;
si0=l29;
si1=255U;
si0&=si1;
if(si0){
goto L88;
}
si0=l31;
l29=si0;
goto L87;
L88:;
si0=l31;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l29=si0;
L87:;
si0=l1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L86;
}
}
L85:;
si0=1U;
l22=si0;
si0=l27;
si0=!(si0);
if(si0){
goto L52;
}
si0=l34;
f15271(i,si0);
L52:;
si0=l18;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l4;
si1=l18;
si2=3U;
si1<<=(si2&31);
l31=si1;
si0+=si1;
l34=si0;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L89;
}
sj0=l21;
sj1=-2ULL;
si0=sj0 < sj1;
if(si0){
goto L45;
}
si0=l22;
si0=!(si0);
if(si0){
goto L43;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L43;
}
si0=l31;
l7=si0;
si0=l14;
l1=si0;
L91:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L90;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l21;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L43;
}
goto L91;
}
L90:;
si0=1239840U;
si1=71U;
si2=1239912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L89:;
sj0=1ULL;
l35=sj0;
sj0=l21;
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L44;
}
si0=l18;
si0=!(si0);
if(si0){
goto L92;
}
si0=l18;
si1=1U;
si0&=si1;
l20=si0;
si0=l18;
si1=-1U;
si0+=si1;
l28=si0;
if(si0){
goto L94;
}
si0=0U;
l22=si0;
si0=0U;
l29=si0;
goto L93;
L94:;
si0=l18;
si1=-2U;
si0&=si1;
l27=si0;
si0=0U;
l22=si0;
si0=l8;
l7=si0;
si0=l4;
l1=si0;
si0=0U;
l29=si0;
L95:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l22;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l31=si0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l21;
sj3=l30;
si2=sj2 <= sj3;
sj3=l21;
sj4=l30;
si3=sj3 < sj4;
si4=l22;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l22=si2;
sj2=(U64)(si2);
si3=l7;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l21;
si0=sj0 <= sj1;
sj1=l36;
sj2=l21;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l27;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L95;
}
}
L93:;
si0=l20;
si0=!(si0);
if(si0){
goto L96;
}
si0=l4;
si1=l29;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l22;
sj2=(U64)(si2);
si3=l8;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l30;
si0=sj0 <= sj1;
sj1=l21;
sj2=l30;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
L96:;
sj0=2ULL;
l35=sj0;
si0=l22;
si1=1U;
si0&=si1;
if(si0){
goto L44;
}
si0=l28;
if(si0){
goto L98;
}
si0=0U;
l22=si0;
si0=0U;
l29=si0;
goto L97;
L98:;
si0=l18;
si1=-2U;
si0&=si1;
l27=si0;
si0=0U;
l22=si0;
si0=l8;
l7=si0;
si0=l4;
l1=si0;
si0=0U;
l29=si0;
L99:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l22;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l31=si0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l21;
sj3=l30;
si2=sj2 <= sj3;
sj3=l21;
sj4=l30;
si3=sj3 < sj4;
si4=l22;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l22=si2;
sj2=(U64)(si2);
si3=l7;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l21;
si0=sj0 <= sj1;
sj1=l36;
sj2=l21;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l27;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L99;
}
}
L97:;
si0=l20;
si0=!(si0);
if(si0){
goto L100;
}
si0=l4;
si1=l29;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l22;
sj2=(U64)(si2);
si3=l8;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l30;
si0=sj0 <= sj1;
sj1=l21;
sj2=l30;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
L100:;
sj0=3ULL;
l35=sj0;
si0=l22;
si1=1U;
si0&=si1;
if(si0){
goto L44;
}
L92:;
si0=1240548U;
si1=72U;
si2=1240620U;
f673(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l22;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L50:;
si0=l12;
si1=l1;
si2=1239572U;
f675(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l1;
si1=l5;
si2=1239572U;
f666(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l22;
si1=l18;
si2=1239588U;
f666(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l6;
si2=16U;
si1+=si2;
si2=l6;
si3=20U;
si2+=si3;
si3=l6;
si4=24U;
si3+=si4;
si4=1196048U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L46:;
si0=l18;
si1=l5;
si2=1239604U;
f663(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=1239928U;
si1=48U;
si2=1239976U;
f673(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l5;
si1=l18;
si0-=si1;
l20=si0;
si0=l18;
si1=3U;
si0<<=(si1&31);
l28=si0;
l1=si0;
si0=l17;
l7=si0;
L103:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L102;
}
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=-1U;
sj1=l21;
si2=l1;
si3=-8U;
si2+=si3;
l1=si2;
si3=l4;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l30=sj2;
si1=sj1 != sj2;
sj2=l21;
sj3=l30;
si2=sj2 > sj3;
si0=si2?si0:si1;
l22=si0;
si0=!(si0);
if(si0){
goto L103;
}
}
si0=l22;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L102;
}
si0=l18;
si0=!(si0);
if(si0){
goto L104;
}
si0=l18;
si1=1U;
si0&=si1;
l26=si0;
si0=0U;
l22=si0;
si0=0U;
l29=si0;
si0=l18;
si1=1U;
si0=si0 == si1;
if(si0){
goto L105;
}
si0=l18;
si1=-2U;
si0&=si1;
l27=si0;
si0=0U;
l22=si0;
si0=l8;
l7=si0;
si0=l4;
l1=si0;
si0=0U;
l29=si0;
L106:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l22;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l31=si0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l21;
sj3=l30;
si2=sj2 <= sj3;
sj3=l21;
sj4=l30;
si3=sj3 < sj4;
si4=l22;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l22=si2;
sj2=(U64)(si2);
si3=l7;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l21;
si0=sj0 <= sj1;
sj1=l36;
sj2=l21;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l27;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L106;
}
}
L105:;
si0=l26;
si0=!(si0);
if(si0){
goto L107;
}
si0=l4;
si1=l29;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l22;
sj2=(U64)(si2);
si3=l8;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l30;
si0=sj0 <= sj1;
sj1=l21;
sj2=l30;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
L107:;
si0=l22;
si1=1U;
si0&=si1;
if(si0){
goto L101;
}
L104:;
sj0=l35;
sj1=1ULL;
sj0+=sj1;
l35=sj0;
L102:;
si0=l18;
si1=l23;
si0=si0 < si1;
if(si0){
goto L109;
}
si0=l8;
si1=l23;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l22=si0;
si0=l4;
si1=l1;
si0+=si1;
l29=si0;
si0=l17;
si1=l1;
si2=l28;
si1-=si2;
si0+=si1;
l7=si0;
L112:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L111;
}
si0=l13;
si1=l1;
si0+=si1;
l8=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=-1U;
sj1=l21;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
l30=sj2;
si1=sj1 != sj2;
sj2=l21;
sj3=l30;
si2=sj2 > sj3;
si0=si2?si0:si1;
l8=si0;
si0=!(si0);
if(si0){
goto L112;
}
goto L110;
}
L111:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l8=si0;
L110:;
si0=l20;
si1=l23;
si0=si0 < si1;
if(si0){
goto L108;
}
si0=l34;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
si2=l23;
si1-=si2;
si2=l22;
si3=l12;
si4=l29;
si5=l12;
si6=l8;
si7=1U;
si6=si6 == si7;
si0=f1329(i,si0,si1,si2,si3,si4,si5,si6);
if(si0){
goto L114;
}
si0=l12;
si0=!(si0);
if(si0){
goto L113;
}
si0=l24;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l35;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l35;
si0=sj0 >= sj1;
if(si0){
goto L42;
}
si0=l24;
si1=8U;
si0+=si1;
l1=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l7=si0;
L115:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L113;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l21;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L42;
}
goto L115;
}
L114:;
si0=1240312U;
si1=127U;
si2=1240440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L113:;
si0=1240240U;
si1=56U;
si2=1240296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=1235764U;
si1=35U;
si2=1239992U;
f673(i,si0,si1,si2);
UNREACHABLE;
L108:;
si0=l23;
si1=l20;
si2=1240008U;
f662(i,si0,si1,si2);
UNREACHABLE;
L101:;
si0=1240456U;
si1=73U;
si2=1240532U;
f673(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l18;
si1=l5;
si0=si0 > si1;
if(si0){
goto L118;
}
si0=l5;
si1=l18;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l34;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si0=sj0 == sj1;
if(si0){
goto L116;
}
si0=l12;
si0=!(si0);
if(si0){
goto L117;
}
si0=l24;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L119;
}
si0=l24;
si1=8U;
si0+=si1;
l1=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l7=si0;
L120:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L117;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l21;
si0=!(sj0);
if(si0){
goto L120;
}
}
L119:;
si0=l18;
si0=!(si0);
if(si0){
goto L121;
}
si0=0U;
l7=si0;
si0=l18;
l22=si0;
si0=l4;
l1=si0;
L122:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l30=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l30;
si0=sj0 < sj1;
l29=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L124;
}
si0=l29;
l7=si0;
goto L123;
L124:;
si0=l29;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L123:;
si0=l1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L122;
}
}
si0=l7;
if(si0){
goto L116;
}
L121:;
si0=1239668U;
si1=78U;
si2=1239748U;
f673(i,si0,si1,si2);
UNREACHABLE;
L118:;
si0=1235764U;
si1=35U;
si2=1239620U;
f673(i,si0,si1,si2);
UNREACHABLE;
L117:;
si0=1239764U;
si1=58U;
si2=1239824U;
f673(i,si0,si1,si2);
UNREACHABLE;
L116:;
si0=l18;
si1=l23;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l18;
si1=l5;
si2=l18;
si1-=si2;
l1=si1;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l12;
si0=!(si0);
if(si0){
goto L42;
}
si0=l23;
si1=3U;
si0<<=(si1&31);
l27=si0;
si0=l12;
si1=3U;
si0&=si1;
l8=si0;
si0=0U;
l1=si0;
si0=l12;
si1=4U;
si0=si0 < si1;
if(si0){
goto L125;
}
si0=l4;
si1=l27;
si0+=si1;
l1=si0;
si0=0U;
l22=si0;
si0=0U;
si1=l12;
si2=-4U;
si1&=si2;
si0-=si1;
l29=si0;
L126:;
{
si0=l1;
si1=l31;
si0+=si1;
l7=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
si0=l29;
si1=l22;
si2=-4U;
si1+=si2;
l22=si1;
si0=si0 != si1;
if(si0){
goto L126;
}
}
si0=0U;
si1=l22;
si0-=si1;
l1=si0;
L125:;
si0=l8;
si0=!(si0);
if(si0){
goto L42;
}
si0=l4;
si1=l27;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si0+=si1;
l1=si0;
L127:;
{
si0=l1;
si1=l31;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L127;
}
}
L42:;
si0=l23;
si1=l18;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l12;
si0=f1361(i,si0);
l27=si0;
if(si0){
goto L129;
}
si0=8U;
l34=si0;
goto L128;
L129:;
si0=l27;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l27;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l27;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L131;
}
si0=l8;
l34=si0;
goto L130;
L131:;
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L132;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l34=si0;
si0=!(si0);
if(si0){
goto L38;
}
si0=l34;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L128;
L132:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l34=si0;
L130:;
si0=l34;
si0=!(si0);
if(si0){
goto L38;
}
L128:;
si0=l12;
si1=l5;
si2=l1;
si1-=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l4;
si1=l1;
si2=l4;
si3=l1;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l12;
si4=l24;
si5=l12;
si6=l34;
si7=l27;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l12;
si1=1U;
si0<<=(si1&31);
l20=si0;
si1=l23;
si0-=si1;
l31=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l31;
si1=l12;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l23;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=l23;
si2=3U;
si1*=si2;
si2=l12;
si1-=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l1;
si1=l5;
si2=l31;
si1-=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l28=si0;
si0=0U;
l7=si0;
si0=l31;
si1=l12;
si0=si0 == si1;
if(si0){
goto L133;
}
si0=l31;
si1=l12;
si0-=si1;
l8=si0;
si0=l4;
si1=l28;
si0+=si1;
l1=si0;
si0=l23;
si1=4U;
si0<<=(si1&31);
l29=si0;
si0=0U;
l7=si0;
L134:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l30=sj0;
si1=l1;
si2=l29;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l30;
si0=sj0 < sj1;
l22=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L136;
}
si0=l22;
l7=si0;
goto L135;
L136:;
si0=l22;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L135:;
si0=l1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L134;
}
}
L133:;
si0=l20;
si1=l23;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l20;
si1=l5;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l18;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=l18;
si2=l12;
si1+=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l0;
si1=l19;
si0+=si1;
si1=l18;
si2=l4;
si3=l31;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l23;
si4=l4;
si5=l8;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l1;
si6=l8;
si5-=si6;
si6=l7;
si0=f1084(i,si0,si1,si2,si3,si4,si5,si6);
si0=!(si0);
if(si0){
goto L28;
}
si0=l12;
si0=!(si0);
if(si0){
goto L137;
}
si0=l24;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
si0=l24;
si1=8U;
si0+=si1;
l1=si0;
si0=l28;
si1=-8U;
si0+=si1;
l7=si0;
L138:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L137;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l21;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L28;
}
goto L138;
}
L137:;
si0=1240136U;
si1=85U;
si2=1240224U;
f673(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l23;
si1=l18;
si2=1239652U;
f675(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l18;
si1=l1;
si2=1239652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=1235764U;
si1=35U;
si2=1240024U;
f673(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L37:;
si0=l12;
si1=l7;
si2=1240040U;
f666(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1235764U;
si1=35U;
si2=1240056U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l12;
si1=l31;
si2=1240072U;
f662(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l7;
si1=l1;
si2=1240088U;
f675(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l1;
si1=l7;
si2=1240088U;
f666(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l31;
si1=l20;
si2=1240104U;
f675(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l20;
si1=l5;
si2=1240104U;
f666(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l8;
si1=l1;
si2=1240120U;
f675(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l1;
si1=l5;
si2=1240120U;
f666(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l27;
si0=!(si0);
if(si0){
goto L139;
}
si0=l34;
f15271(i,si0);
L139:;
si0=l18;
l12=si0;
si0=l15;
si1=l16;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L27;
}
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=l1;
si1=l3;
si2=1239228U;
f662(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
si1=0U;
si2=1239636U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=l3;
si2=1239276U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l31;
si1=-1U;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l11;
if(si0){
goto L140;
}
si0=l10;
f15271(i,si0);
L140:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L141;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
L141:;
sj0=l21;
sj1=-7ULL;
si0=sj0 < sj1;
l1=si0;
L2:;
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L1:;
si0=l1;
si1=l5;
si2=1239244U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1237(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l1;
si1=l8;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=l8;
si2=l8;
si3=l2;
si4=l3;
si5=l4;
si6=l5;
si7=l0;
si8=l8;
si9=3U;
si8<<=(si9&31);
si7+=si8;
si8=l1;
si9=l8;
si8-=si9;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l9;
si1=l3;
si0+=si1;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l8;
si1=l3;
si0-=si1;
l1=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si1=l1;
si0-=si1;
l11=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=0U;
l4=si0;
si0=l1;
si1=l7;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0&=si1;
l13=si0;
si0=l7;
si1=l3;
si0+=si1;
l14=si0;
si1=l8;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l9=si0;
si0=0U;
l5=si0;
goto L10;
L11:;
si0=l11;
si1=-2U;
si0&=si1;
l2=si0;
si0=0U;
l9=si0;
si0=l12;
l7=si0;
si0=l0;
l1=si0;
si0=0U;
l5=si0;
L12:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l15;
sj3=l16;
si2=sj2 <= sj3;
sj3=l15;
sj4=l16;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
si3=l7;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l15;
si0=sj0 <= sj1;
sj1=l17;
sj2=l15;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L10:;
si0=l13;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l9;
sj2=(U64)(si2);
si3=l12;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l16;
si0=sj0 <= sj1;
sj1=l15;
sj2=l16;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L13:;
si0=l11;
si1=l8;
si0=si0 == si1;
l1=si0;
si1=l9;
si0&=si1;
l4=si0;
si0=l1;
if(si0){
goto L9;
}
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l8;
si1=4U;
si0<<=(si1&31);
si1=l14;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
L14:;
{
si0=l1;
si0=!(si0);
l4=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L14;
}
}
L9:;
si0=l10;
si1=l4;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l8;
si1=l3;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l6;
si1=l3;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l5=si0;
L15:;
{
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l0;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si0=sj0 == sj1;
if(si0){
goto L15;
}
}
sj0=l15;
sj1=l16;
si0=sj0 > sj1;
l1=si0;
goto L3;
L8:;
si0=1235764U;
si1=35U;
si2=1240704U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1235764U;
si1=35U;
si2=1240720U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1253593U;
si1=35U;
si2=1254656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l8;
si2=1240736U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l1;
si0=si0 != si1;
l1=si0;
L3:;
si0=l10;
si1=l1;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si1=1U;
si0^=si1;
if(si0){
goto L16;
}
L17:;
si0=l4;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l10;
si1=6U;
si0+=si1;
si1=l10;
si2=7U;
si1+=si2;
si2=l10;
si3=8U;
si2+=si3;
f1217(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l7=si0;
L18:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L18;
}
}
L2:;
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1240768U;
si1=60U;
si2=1240828U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1238(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=-1U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=3U;
si0*=si1;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l2;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l0=si0;
L2:;
si0=l0;
goto L0;
L1:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l2;
si2=l1;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
goto L0;
L3:;
si0=1237728U;
si1=25U;
si2=1240844U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1239(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U32 l24=0;
U64 l25=0;
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
U64 l52=0;
U64 l53=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l5;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l5;
si1=l3;
si0-=si1;
l11=si0;
si1=-1U;
si0+=si1;
l7=si0;
si0=l11;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l11;
l12=si0;
si0=l11;
si1=3U;
si0*=si1;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l7;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l12=si0;
goto L11;
L12:;
si0=l7;
si1=l7;
si2=l3;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l12=si0;
L11:;
si0=l12;
si1=l3;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l12;
si1=1U;
si0+=si1;
l13=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l9;
si1=l13;
si0-=si1;
l14=si0;
si0=l8;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l3;
si1=l13;
si0-=si1;
l7=si0;
si0=l3;
si1=l13;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l14;
si1=l13;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l13;
si0=!(si0);
if(si0){
goto L15;
}
si0=l13;
si1=l9;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l15;
si1=l6;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l7=si0;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l6;
si1=l3;
si2=3U;
si1<<=(si2&31);
si2=l12;
si3=3U;
si2<<=(si3&31);
l7=si2;
si1-=si2;
si0+=si1;
l18=si0;
si0=l9;
si1=l12;
si0-=si1;
si1=-2U;
si0+=si1;
l19=si0;
si0=l7;
si1=l8;
si0+=si1;
si1=16U;
si0+=si1;
l20=si0;
si0=0U;
l7=si0;
L20:;
{
si0=l12;
si1=l7;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l19;
si1=l7;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l20;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l20;
si1=8U;
si0+=si1;
l20=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L20;
}
}
L19:;
si0=l7;
si1=1U;
si0+=si1;
l18=si0;
si0=l7;
si1=l13;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l18;
si1=l13;
si2=1195676U;
f675(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l14;
si1=l13;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l13;
if(si0){
goto L13;
}
si0=1235944U;
si1=43U;
si2=1240924U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l15;
si1=l18;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l16;
si2=l7;
si1+=si2;
si2=l13;
si3=l18;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l8;
si1=l13;
si2=l15;
si3=l13;
si4=l15;
si5=l13;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l14;
si6=l13;
si5-=si6;
si0=f1236(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
si2=l12;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
goto L1;
L16:;
si0=l12;
si1=1U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L1;
default:
goto L14;
}
L15:;
si0=-1U;
si1=l13;
si2=1240892U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l8;
si1=0U;
si2=l12;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
goto L1;
L13:;
si0=l15;
si1=8U;
si0+=si1;
si1=l6;
si2=l3;
si3=3U;
si2<<=(si3&31);
l7=si2;
si0=f15390(i,si0,si1,si2);
si0=l15;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=l13;
si2=l15;
si3=l13;
si4=l15;
si5=l13;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l14;
si6=l13;
si5-=si6;
si0=f1236(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=l8;
si2=8U;
si1+=si2;
si2=l7;
si0=f15391(i,si0,si1,si2);
goto L1;
L10:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=20U;
si1+=si2;
si2=l10;
si3=12U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1241096U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1241052U;
si1=27U;
si2=1241080U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1241004U;
si1=31U;
si2=1241036U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1235764U;
si1=35U;
si2=1240860U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1240956U;
si1=32U;
si2=1240988U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l7;
si1=l3;
si2=1240876U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1195692U;
si1=34U;
si2=1195728U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l14;
si1=l14;
si2=1195660U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1235764U;
si1=35U;
si2=1240908U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l12;
si1=l9;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l5;
si1=l3;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l9;
si1=l12;
si0-=si1;
l21=si0;
si0=l8;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-8U;
si0+=si1;
l18=si0;
L28:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L27;
}
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l18;
si1=-8U;
si0+=si1;
l18=si0;
si0=-1U;
sj1=l17;
si2=l7;
si3=-8U;
si2+=si3;
l7=si2;
si3=l6;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
si1=sj1 != sj2;
sj2=l23;
sj3=l17;
si2=sj2 > sj3;
si0=si2?si0:si1;
l24=si0;
si0=!(si0);
if(si0){
goto L28;
}
goto L26;
}
L27:;
si0=-1U;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l24=si0;
L26:;
si0=l24;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L31;
}
si0=l2;
si1=l19;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L30;
L31:;
si0=l3;
si0=!(si0);
if(si0){
goto L29;
}
si0=l3;
si1=1U;
si0&=si1;
l14=si0;
si0=0U;
l13=si0;
si0=0U;
l7=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=0U;
l9=si0;
si0=0U;
si1=l3;
si2=-2U;
si1&=si2;
si0-=si1;
l15=si0;
si0=l19;
l7=si0;
si0=l6;
l18=si0;
si0=l2;
l20=si0;
si0=0U;
l13=si0;
L33:;
{
si0=l20;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l17;
sj3=l23;
si2=sj2 <= sj3;
sj3=l17;
sj4=l23;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l18;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l17;
si0=sj0 <= sj1;
sj1=l25;
sj2=l17;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
si0=l15;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L33;
}
}
si0=0U;
si1=l9;
si0-=si1;
l7=si0;
L32:;
si0=l14;
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l19;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L30:;
si0=l12;
si1=31U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l3;
si1=1U;
si0+=si1;
l26=si0;
si0=l3;
si1=12U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l26;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l3;
si5=96U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l3;
si4=48U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l17=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l7=si0;
if(si0){
goto L34;
}
si0=0U;
l26=si0;
goto L21;
L34:;
si0=l7;
sj1=l17;
si1=(U32)(sj1);
l18=si1;
si0<<=(si1&31);
l26=si0;
si1=l18;
si0>>=(si1&31);
si1=l7;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1U;
l26=si0;
si0=l12;
si1=31U;
si0=si0 < si1;
if(si0){
goto L22;
}
goto L21;
L25:;
si0=1235764U;
si1=35U;
si2=1240940U;
f673(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l11;
si1=l1;
si2=1236476U;
f666(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1235764U;
si1=35U;
si2=1236492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=0U;
l26=si0;
si0=l12;
if(si0){
goto L21;
}
si0=l10;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=1235756U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=1235728U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l10;
si1=24U;
si0+=si1;
si1=1236508U;
f683(i,si0,si1);
UNREACHABLE;
L21:;
si0=l11;
si0=!(si0);
if(si0){
goto L37;
}
si0=l11;
si1=l12;
si0=DIV_U(si0,si1);
l7=si0;
si1=l11;
si2=l7;
si3=l12;
si2*=si3;
si1-=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l27=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l4;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l3;
si3=3U;
si2<<=(si3&31);
l28=si2;
si1-=si2;
l7=si1;
si0+=si1;
l29=si0;
si0=l0;
si1=l7;
si0+=si1;
l15=si0;
si0=l2;
si1=-8U;
si0+=si1;
l30=si0;
si0=l6;
si1=-8U;
si0+=si1;
l31=si0;
si0=l3;
si1=1U;
si0&=si1;
l32=si0;
si0=l3;
si1=-1U;
si0+=si1;
l33=si0;
si0=l3;
si1=l12;
si0-=si1;
l34=si0;
si0=0U;
si1=l3;
si2=-2U;
si1&=si2;
l5=si1;
si0-=si1;
l35=si0;
si0=0U;
si1=l12;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0-=si1;
l36=si0;
si0=l22;
si1=l28;
si0+=si1;
l37=si0;
si0=l7;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
l38=si0;
si0=l11;
l39=si0;
si0=0U;
l40=si0;
si0=l12;
l41=si0;
si0=l12;
l1=si0;
L38:;
{
si0=l1;
si1=l11;
si2=l12;
si3=l40;
si2*=si3;
si1-=si2;
l42=si1;
si2=0U;
si3=l42;
si4=l12;
si3-=si4;
l7=si3;
si4=l7;
si5=l42;
si4=si4 > si5;
si2=si4?si2:si3;
l20=si2;
si1-=si2;
l43=si1;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l41;
si1=l1;
si2=l43;
si1-=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l3;
si1=l43;
si0-=si1;
l34=si0;
si0=l41;
si1=l7;
si0-=si1;
l41=si0;
si0=l8;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l43;
l1=si0;
goto L39;
L40:;
si0=l7;
si1=l41;
si2=1236524U;
f662(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l34;
si1=l3;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l41;
si0=f1361(i,si0);
l44=si0;
if(si0){
goto L50;
}
si0=8U;
l45=si0;
goto L49;
L50:;
si0=l44;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l44;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L43;
}
si0=l44;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l7;
if(si0){
goto L52;
}
si0=l18;
l45=si0;
goto L51;
L52:;
si0=l18;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L53;
}
si0=l18;
si1=l7;
si0=f15277(i,si0,si1);
l45=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l45;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L49;
L53:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l45=si0;
L51:;
si0=l45;
si0=!(si0);
if(si0){
goto L47;
}
L49:;
si0=l22;
si1=l21;
si2=l2;
si3=l34;
si4=3U;
si3<<=(si4&31);
l46=si3;
si2+=si3;
l47=si2;
si3=l3;
si4=l34;
si3-=si4;
l7=si3;
si4=l8;
si5=l41;
si6=l45;
si7=l44;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l1;
si1=1U;
si0<<=(si1&31);
l18=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L46;
}
si0=l18;
si1=l21;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l1;
si1=l43;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
l48=si1;
si0+=si1;
l14=si0;
si0=l12;
si1=l39;
si2=l12;
si3=l39;
si2=si2 < si3;
si0=si2?si0:si1;
l16=si0;
si1=3U;
si0<<=(si1&31);
l49=si0;
si0=l22;
si1=l1;
si2=3U;
si1<<=(si2&31);
l50=si1;
si0+=si1;
l51=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L54;
}
si0=l15;
si1=l49;
si0-=si1;
l13=si0;
si0=0U;
l7=si0;
si0=l51;
l18=si0;
si0=l47;
l20=si0;
si0=0U;
l9=si0;
L55:;
{
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l23;
si0=sj0 < sj1;
l19=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L57;
}
si0=l19;
l9=si0;
goto L56;
L57:;
si0=l19;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L56:;
si0=l16;
si1=l7;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l13;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l20;
si1=8U;
si0+=si1;
l20=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l1;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L55;
}
}
si0=l9;
if(si0){
goto L58;
}
si0=l1;
si1=31U;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l22;
si1=l21;
si2=l6;
si3=l3;
si4=l14;
si5=l43;
si6=l47;
si7=l1;
si8=l26;
si9=l1;
f1237(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
goto L41;
L58:;
si0=1236708U;
si1=87U;
si2=1236796U;
f673(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l3;
si1=l43;
si0=f1359(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l20=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L43;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=l20;
if(si0){
goto L62;
}
si0=l13;
l18=si0;
goto L61;
L62:;
si0=l13;
si1=l20;
si0=si0 <= si1;
if(si0){
goto L63;
}
si0=l13;
si1=l20;
si0=f15277(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=l18;
si1=0U;
si2=l20;
si0=f15392(i,si0,si1,si2);
goto L42;
L63:;
si0=l20;
si1=1U;
si0=f15273(i,si0,si1);
l18=si0;
L61:;
si0=l18;
if(si0){
goto L42;
}
L60:;
si0=l13;
si1=l20;
f52(i,si0,si1);
UNREACHABLE;
L59:;
si0=l22;
si1=l21;
si2=l6;
si3=l3;
si4=l14;
si5=l43;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L41;
L48:;
si0=1235764U;
si1=35U;
si2=1236540U;
f673(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l18;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L46:;
si0=l1;
si1=l18;
si2=1236556U;
f675(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l18;
si1=l21;
si2=1236556U;
f666(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l43;
si1=l43;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L43:;
f53(i);
UNREACHABLE;
L42:;
si0=l22;
si1=l21;
si2=l6;
si3=l3;
si4=l14;
si5=l43;
si6=l18;
si7=l7;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l18;
f15271(i,si0);
L41:;
si0=l34;
si1=l3;
si0=si0 == si1;
if(si0){
goto L70;
}
si0=l21;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L69;
}
si0=l4;
si1=l48;
si0+=si1;
l48=si0;
si0=l29;
si1=l49;
si0-=si1;
l7=si0;
si0=l37;
sj0=i64_load(&i->m0,(U64)si0);
l52=sj0;
si0=l47;
sj0=i64_load(&i->m0,(U64)si0);
l53=sj0;
si0=l34;
if(si0){
goto L72;
}
si0=l10;
si1=l43;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l43;
si1=l3;
si0=si0 != si1;
if(si0){
goto L68;
}
si0=l3;
if(si0){
goto L73;
}
si0=0U;
l18=si0;
goto L71;
L73:;
si0=l33;
if(si0){
goto L75;
}
si0=0U;
l18=si0;
si0=0U;
l7=si0;
goto L74;
L75:;
si0=0U;
l9=si0;
si0=l22;
l20=si0;
si0=l2;
l13=si0;
si0=0U;
l18=si0;
L76:;
{
si0=l13;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l18;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l20;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l17;
sj3=l23;
si2=sj2 <= sj3;
sj3=l17;
sj4=l23;
si3=sj3 < sj4;
si4=l18;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l18=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l20;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l17;
si0=sj0 <= sj1;
sj1=l25;
sj2=l17;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l35;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L76;
}
}
si0=0U;
si1=l9;
si0-=si1;
l7=si0;
L74:;
si0=l32;
si0=!(si0);
if(si0){
goto L71;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l48;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l18;
sj2=(U64)(si2);
sj1-=sj2;
si2=l22;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l23;
si0=sj0 <= sj1;
sj1=l17;
sj2=l23;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
goto L71;
L72:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l10;
si1=l43;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l43;
si1=l1;
si0=si0 != si1;
if(si0){
goto L66;
}
si0=l3;
si1=l1;
si0-=si1;
l47=si0;
si0=l43;
if(si0){
goto L78;
}
si0=0U;
l9=si0;
goto L77;
L78:;
si0=l12;
si1=l42;
si2=l42;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l18=si0;
si1=1U;
si0&=si1;
l42=si0;
si0=0U;
l9=si0;
si0=0U;
l20=si0;
si0=l18;
si1=1U;
si0=si0 == si1;
if(si0){
goto L79;
}
si0=0U;
si1=l16;
si2=-2U;
si1&=si2;
si0-=si1;
l19=si0;
si0=0U;
l20=si0;
si0=l22;
l18=si0;
si0=0U;
l9=si0;
L80:;
{
si0=l18;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=8U;
si0+=si1;
l13=si0;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l17;
sj3=l23;
si2=sj2 <= sj3;
sj3=l17;
sj4=l23;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l17;
si0=sj0 <= sj1;
sj1=l25;
sj2=l17;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l19;
si1=l20;
si2=-2U;
si1+=si2;
l20=si1;
si0=si0 != si1;
if(si0){
goto L80;
}
}
si0=0U;
si1=l20;
si0-=si1;
l20=si0;
L79:;
si0=l42;
si0=!(si0);
if(si0){
goto L77;
}
si0=l22;
si1=l20;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l18=si0;
si1=l48;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l9;
sj2=(U64)(si2);
sj1-=sj2;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l23;
si0=sj0 <= sj1;
sj1=l17;
sj2=l23;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L77:;
si0=l10;
si1=l34;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l47;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l34;
si1=l47;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l34;
si1=1U;
si0&=si1;
l42=si0;
si0=0U;
l18=si0;
si0=0U;
l13=si0;
si0=l34;
si1=1U;
si0=si0 == si1;
if(si0){
goto L81;
}
si0=l34;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l18=si0;
si0=l51;
l7=si0;
si0=l2;
l20=si0;
si0=0U;
l13=si0;
L82:;
{
si0=l7;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l18;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l19=si0;
si1=l20;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l17;
sj3=l23;
si2=sj2 <= sj3;
sj3=l17;
sj4=l23;
si3=sj3 < sj4;
si4=l18;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l18=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l19;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l17;
si0=sj0 <= sj1;
sj1=l25;
sj2=l17;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
si0=l16;
si1=l13;
si2=2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L82;
}
}
L81:;
si0=l42;
si0=!(si0);
if(si0){
goto L83;
}
si0=l51;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l20=si0;
si1=l2;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l18;
sj2=(U64)(si2);
sj1-=sj2;
si2=l20;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l23;
si0=sj0 <= sj1;
sj1=l17;
sj2=l23;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
L83:;
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L84;
}
si0=l51;
si1=l51;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l13=si0;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L85;
}
si0=l46;
si1=-8U;
si0+=si1;
l7=si0;
si0=l38;
si1=l50;
si0+=si1;
l20=si0;
L86:;
{
si0=l7;
si0=!(si0);
l13=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L85;
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l20;
si1=8U;
si0+=si1;
l20=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L86;
}
}
L85:;
si0=l18;
si1=l13;
si0|=si1;
l18=si0;
L84:;
si0=l2;
si1=l22;
si2=l28;
si0=f15390(i,si0,si1,si2);
L71:;
si0=0U;
si1=l49;
si0-=si1;
l19=si0;
sj0=l53;
sj1=l52;
sj0-=sj1;
si1=l18;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l52=sj0;
si0=!(sj0);
if(si0){
goto L64;
}
si0=l43;
si0=!(si0);
if(si0){
goto L87;
}
L88:;
{
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L89;
}
si0=l19;
l7=si0;
L90:;
{
si0=l7;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L87;
}
si0=l15;
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L90;
}
}
L89:;
si0=l3;
if(si0){
goto L92;
}
si0=0U;
l20=si0;
goto L91;
L92:;
si0=0U;
l20=si0;
si0=l33;
if(si0){
goto L94;
}
si0=0U;
l13=si0;
goto L93;
L94:;
si0=l6;
l18=si0;
si0=l2;
l7=si0;
si0=0U;
l13=si0;
L95:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l20;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l18;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l17;
sj3=l23;
si2=sj2 <= sj3;
sj3=l17;
sj4=l23;
si3=sj3 < sj4;
si4=l20;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l20=si2;
sj2=(U64)(si2);
si3=l18;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l17;
si0=sj0 <= sj1;
sj1=l25;
sj2=l17;
si1=sj1 < sj2;
si2=l20;
si0=si2?si0:si1;
l20=si0;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l5;
si1=l13;
si2=2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L95;
}
}
L93:;
si0=l32;
si0=!(si0);
if(si0){
goto L91;
}
si0=l2;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l20;
sj2=(U64)(si2);
si3=l6;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l23;
si0=sj0 <= sj1;
sj1=l17;
sj2=l23;
si1=sj1 < sj2;
si2=l20;
si0=si2?si0:si1;
l20=si0;
L91:;
sj0=l52;
si1=l20;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
l52=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L88;
}
goto L64;
}
L87:;
si0=1236620U;
si1=55U;
si2=1236692U;
f673(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=0U;
si1=0U;
si2=1236572U;
f663(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l3;
si1=l21;
si2=1236588U;
f663(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=16U;
si1+=si2;
si2=l10;
si3=20U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1254552U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L67:;
si0=1235764U;
si1=35U;
si2=1236604U;
f673(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=16U;
si1+=si2;
si2=l10;
si3=20U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1254672U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L65:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=16U;
si1+=si2;
si2=l10;
si3=20U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1254672U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L64:;
si0=l40;
si1=1U;
si0+=si1;
l40=si0;
si0=l28;
l7=si0;
L98:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L97;
}
si0=l30;
si1=l7;
si0+=si1;
l18=si0;
si0=l31;
si1=l7;
si0+=si1;
l20=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=-1U;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
si1=sj1 != sj2;
sj2=l17;
sj3=l23;
si2=sj2 > sj3;
si0=si2?si0:si1;
l18=si0;
si0=!(si0);
if(si0){
goto L98;
}
goto L96;
}
L97:;
si0=-1U;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l18=si0;
L96:;
si0=l18;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L99;
}
si0=l43;
si0=!(si0);
if(si0){
goto L101;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L102;
}
L103:;
{
si0=l19;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L101;
}
si0=l15;
si1=l19;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L103;
}
}
L102:;
si0=l3;
si0=!(si0);
if(si0){
goto L99;
}
si0=l33;
if(si0){
goto L104;
}
si0=0U;
l20=si0;
si0=0U;
l13=si0;
goto L100;
L104:;
si0=0U;
l20=si0;
si0=l6;
l18=si0;
si0=l2;
l7=si0;
si0=0U;
l13=si0;
L105:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l20;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l18;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l17;
sj3=l23;
si2=sj2 <= sj3;
sj3=l17;
sj4=l23;
si3=sj3 < sj4;
si4=l20;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l20=si2;
sj2=(U64)(si2);
si3=l18;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l17;
si0=sj0 <= sj1;
sj1=l25;
sj2=l17;
si1=sj1 < sj2;
si2=l20;
si0=si2?si0:si1;
l20=si0;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l5;
si1=l13;
si2=2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L105;
}
goto L100;
}
L101:;
si0=1236620U;
si1=55U;
si2=1236676U;
f673(i,si0,si1,si2);
UNREACHABLE;
L100:;
si0=l32;
si0=!(si0);
if(si0){
goto L99;
}
si0=l2;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
si2=l20;
sj2=(U64)(si2);
si3=l6;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L99:;
si0=l44;
si0=!(si0);
if(si0){
goto L106;
}
si0=l45;
f15271(i,si0);
L106:;
si0=l29;
si1=l36;
si0+=si1;
l29=si0;
si0=l39;
si1=l12;
si0-=si1;
l39=si0;
si0=l15;
si1=l36;
si0+=si1;
l15=si0;
si0=l40;
si1=l27;
si0=si0 != si1;
if(si0){
goto L38;
}
}
L37:;
si0=l10;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l24;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
goto L0;
L36:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=16U;
si1+=si2;
si2=l10;
si3=20U;
si2+=si3;
si3=l10;
si4=24U;
si3+=si4;
si4=1195856U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f1240(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2,sj3;
si0=l0;
si1=l1;
si0-=si1;
l0=si0;
si1=-1U;
si0+=si1;
l2=si0;
si0=l0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
si1=3U;
si0*=si1;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l2;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l0=si0;
goto L4;
L5:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l2;
si2=l1;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l0=si0;
L4:;
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l2;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l2;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l3=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l4=si0;
if(si0){
goto L7;
}
si0=0U;
l2=si0;
goto L6;
L7:;
si0=l4;
sj1=l3;
si1=(U32)(sj1);
l5=si1;
si0<<=(si1&31);
l2=si0;
si1=l5;
si0>>=(si1&31);
si1=l4;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l2;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
si1=4U;
si0+=si1;
l1=si0;
goto L8;
L9:;
si0=l4;
si1=l0;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l2;
si1=l4;
si0+=si1;
si1=4U;
si0+=si1;
l1=si0;
goto L8;
L10:;
si0=l2;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l1=si0;
L8:;
si0=l1;
si1=l2;
si0+=si1;
l1=si0;
si1=l0;
si2=l0;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si2=4U;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=1241112U;
si1=50U;
si2=1241164U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1237728U;
si1=25U;
si2=1240844U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=l0;
si0+=si1;
L0:;
return si0;
}

void f1241(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=8U;
l5=si0;
si0=8U;
l6=si0;
si0=l2;
si1=l4;
si0-=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l8;
if(si0){
goto L6;
}
si0=l9;
l6=si0;
goto L5;
L6:;
si0=l9;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l9;
si1=l8;
si0=f15277(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=0U;
si2=l8;
si0=f15392(i,si0,si1,si2);
goto L4;
L7:;
si0=l8;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
L5:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l8;
if(si0){
goto L10;
}
si0=l9;
l5=si0;
goto L9;
L10:;
si0=l9;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l9;
si1=l8;
si0=f15277(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=0U;
si2=l8;
si0=f15392(i,si0,si1,si2);
goto L8;
L11:;
si0=l8;
si1=1U;
si0=f15273(i,si0,si1);
l5=si0;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l6;
si1=l7;
si2=l5;
si3=l4;
si4=l1;
si5=l2;
si6=l3;
si7=l4;
f1242(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l0;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1242(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
F64 l24=0;
F64 l25=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4,sj6;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l7;
si1=2U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l5;
si1=l7;
si0-=si1;
l9=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l7;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l7;
si1=l3;
si2=1241372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1241436U;
si1=42U;
si2=1241480U;
f673(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l6;
si1=l7;
si2=-1U;
si1+=si2;
l10=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=!(sj0);
if(si0){
goto L22;
}
si0=l7;
si1=2U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
sj0=I64_CLZ(sj0);
l13=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
si0=l5;
if(si0){
goto L30;
}
si0=8U;
l9=si0;
si0=0U;
l3=si0;
goto L29;
L30:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l3;
if(si0){
goto L32;
}
si0=l7;
l9=si0;
goto L31;
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l7;
si1=l3;
si0=f15277(i,si0,si1);
l9=si0;
goto L31;
L33:;
si0=l3;
si0=f15269(i,si0);
l9=si0;
L31:;
si0=l9;
si0=!(si0);
if(si0){
goto L21;
}
L29:;
si0=l0;
si1=l1;
si2=l9;
si3=l4;
si4=l3;
si2=f15390(i,si2,si3,si4);
l3=si2;
si3=l5;
si4=l6;
si5=2U;
si0=f1222(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=l5;
si1=-2U;
si0+=si1;
l9=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
f15271(i,si0);
goto L2;
L34:;
si0=l9;
si1=l1;
si2=1236812U;
f663(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l5;
si1=1U;
si0+=si1;
l14=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l14;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l14;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l3;
if(si0){
goto L42;
}
si0=l9;
l6=si0;
goto L41;
L42:;
si0=l9;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L43;
}
si0=l9;
si1=l3;
si0=f15277(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
si1=0U;
si2=l3;
si0=f15392(i,si0,si1,si2);
goto L40;
L43:;
si0=l3;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
L41:;
si0=l6;
si0=!(si0);
if(si0){
goto L20;
}
L40:;
sj0=l12;
si0=!(sj0);
if(si0){
goto L38;
}
sj0=0ULL;
sj1=l13;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l16=sj0;
sj0=0ULL;
l11=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L35;
}
si0=l5;
si1=1U;
si0&=si1;
l17=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=0U;
l7=si0;
sj0=0ULL;
l11=sj0;
goto L36;
L39:;
sj0=l12;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
L38:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l5;
si1=-2U;
si0&=si1;
l18=si0;
si0=0U;
l7=si0;
sj0=0ULL;
l11=sj0;
si0=l4;
l3=si0;
si0=l6;
l9=si0;
L44:;
{
si0=l9;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l13;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l13;
sj1<<=(sj2&63);
sj2=l19;
sj3=l16;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
sj0=l11;
sj1=l16;
sj0>>=(sj1&63);
l11=sj0;
si0=l18;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L44;
}
}
L36:;
si0=l17;
si0=!(si0);
if(si0){
goto L35;
}
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l4;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l13;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l16;
sj0>>=(sj1&63);
l11=sj0;
L35:;
si0=l8;
sj1=l15;
sj2=l13;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l8;
sj1=l15;
sj2=l16;
sj1>>=(sj2&63);
sj2=l12;
sj3=l13;
sj2<<=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+40U,sj1);
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L45;
}
si0=l5;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l0;
si1=l1;
si2=l6;
si3=l5;
si4=l8;
si5=32U;
si4+=si5;
si5=2U;
si0=f1222(i,si0,si1,si2,si3,si4,si5);
l9=si0;
si0=l5;
si1=-2U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L45:;
si0=l5;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
si2=l6;
si3=l14;
si4=l8;
si5=32U;
si4+=si5;
si5=2U;
si0=f1222(i,si0,si1,si2,si3,si4,si5);
goto L3;
L46:;
si0=-1U;
si1=l14;
si2=1236860U;
f663(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l5;
si1=1U;
si0+=si1;
l17=si0;
si1=l5;
si2=l5;
si3=3U;
si2<<=(si3&31);
si3=l4;
si2+=si3;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l11;
si2=sj2 >= sj3;
l3=si2;
si0=si2?si0:si1;
l20=si0;
si1=l7;
si2=1U;
si1<<=(si2&31);
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si0=!(si0);
if(si0){
goto L50;
}
si0=l17;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l17;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l17;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l3;
if(si0){
goto L53;
}
si0=l9;
l21=si0;
goto L52;
L53:;
si0=l9;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L54;
}
si0=l9;
si1=l3;
si0=f15277(i,si0,si1);
l21=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l21;
si1=0U;
si2=l3;
si0=f15392(i,si0,si1,si2);
goto L51;
L54:;
si0=l3;
si1=1U;
si0=f15273(i,si0,si1);
l21=si0;
L52:;
si0=l21;
si0=!(si0);
if(si0){
goto L17;
}
L51:;
sj0=l11;
sj0=I64_CLZ(sj0);
l13=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L49;
}
si0=l21;
si1=l4;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
si1=-16U;
si0+=si1;
l9=si0;
sj0=0ULL;
l13=sj0;
si0=1U;
l3=si0;
goto L48;
L50:;
si0=8U;
l21=si0;
sj0=l11;
sj0=I64_CLZ(sj0);
l13=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L12;
}
L49:;
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l3;
if(si0){
goto L57;
}
si0=l9;
l22=si0;
goto L56;
L57:;
si0=l9;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L58;
}
si0=l9;
si1=l3;
si0=f15277(i,si0,si1);
l22=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l22;
si1=0U;
si2=l3;
si0=f15392(i,si0,si1,si2);
goto L55;
L58:;
si0=l3;
si1=1U;
si0=f15273(i,si0,si1);
l22=si0;
L56:;
si0=l22;
si0=!(si0);
if(si0){
goto L16;
}
L55:;
si0=l7;
si1=1U;
si0&=si1;
l23=si0;
sj0=0ULL;
l16=sj0;
sj0=0ULL;
sj1=l13;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l11=sj0;
si0=0U;
l18=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L59;
}
si0=l7;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l18=si0;
sj0=0ULL;
l16=sj0;
si0=l6;
l3=si0;
si0=l22;
l9=si0;
L60:;
{
si0=l9;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l13;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l13;
sj1<<=(sj2&63);
sj2=l19;
sj3=l11;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
sj0=l16;
sj1=l11;
sj0>>=(sj1&63);
l16=sj0;
si0=l14;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L60;
}
}
L59:;
si0=l23;
si0=!(si0);
if(si0){
goto L61;
}
si0=l22;
si1=l18;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l6;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l13;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L61:;
si0=l17;
si0=!(si0);
if(si0){
goto L15;
}
si0=l21;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sj0=0ULL;
l16=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L62;
}
si0=l5;
si1=1U;
si0&=si1;
l14=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=0U;
l5=si0;
sj0=0ULL;
l16=sj0;
goto L63;
L64:;
si0=l5;
si1=-2U;
si0&=si1;
l18=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l16=sj0;
si0=l4;
l3=si0;
si0=l21;
l9=si0;
L65:;
{
si0=l9;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l13;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l13;
sj1<<=(sj2&63);
sj2=l19;
sj3=l11;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
sj0=l16;
sj1=l11;
sj0>>=(sj1&63);
l16=sj0;
si0=l18;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L65;
}
}
L63:;
si0=l14;
si0=!(si0);
if(si0){
goto L62;
}
si0=l21;
si1=l5;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l4;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l13;
sj1<<=(sj2&63);
sj2=l16;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l11;
sj0>>=(sj1&63);
l16=sj0;
L62:;
si0=l6;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L14;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l22;
si0+=si1;
si1=-16U;
si0+=si1;
l9=si0;
si0=0U;
l3=si0;
si0=l22;
l6=si0;
L48:;
si0=l8;
si1=16U;
si0+=si1;
sj1=-1ULL;
sj2=l11;
sj3=-1ULL;
sj2^=sj3;
sj3=l11;
sj4=0ULL;
f15403(i,si0,sj1,sj2,sj3,sj4);
sj0=l11;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1+16U);
l16=sj1;
sj0*=sj1;
l15=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj0+=sj1;
l19=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
goto L13;
}
goto L11;
L47:;
si0=l0;
si1=l1;
si2=l2;
si3=l7;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
si8=l3;
f1221(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
goto L2;
L24:;
si0=1241052U;
si1=27U;
si2=1241512U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1238340U;
si1=32U;
si2=1241496U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1241388U;
si1=30U;
si2=1241420U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l7;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L20:;
si0=l9;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=-1U;
si1=l14;
si2=1236828U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l3;
si1=l1;
si2=1236844U;
f663(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l9;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l9;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=1235944U;
si1=43U;
si2=1236908U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1237728U;
si1=25U;
si2=1237760U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l19;
sj3=l11;
si2=sj2 < sj3;
l9=si2;
sj0=si2?sj0:sj1;
sj1=l16;
sj0+=sj1;
l16=sj0;
sj0=l19;
sj1=l11;
sj2=0ULL;
sj3=l11;
si4=l9;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l19=sj0;
goto L11;
L12:;
si0=-1U;
si1=l17;
si2=1236892U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l8;
sj1=l16;
sj2=0ULL;
sj3=l12;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
sj0=l19;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l19;
si0=sj0 >= sj1;
if(si0){
goto L66;
}
sj0=l15;
sj1=l11;
si0=sj0 > sj1;
if(si0){
goto L67;
}
sj0=l15;
sj1=l11;
si0=sj0 == sj1;
sj1=l12;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
si1=sj1 <= sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L67;
}
sj0=l16;
sj1=-1ULL;
sj0+=sj1;
l16=sj0;
goto L66;
L67:;
sj0=l16;
sj1=-2ULL;
sj0+=sj1;
l16=sj0;
L66:;
si0=l17;
si1=l20;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l7;
si1=85U;
si0=si0 < si1;
if(si0){
goto L78;
}
si0=l20;
si1=4188U;
si0=si0 < si1;
if(si0){
goto L72;
}
si0=l7;
sd0=(F64)(si0);
l24=sd0;
sd1=4040;
si2=l20;
sd2=(F64)(si2);
l25=sd2;
sd3=74;
sd2*=sd3;
sd0=f15370(i,sd0,sd1,sd2);
sd1=l24;
sd2=l25;
sd1*=sd2;
si0=sd0 > sd1;
if(si0){
goto L72;
}
si0=l20;
si1=l7;
si0-=si1;
l9=si0;
si1=-1U;
si0+=si1;
l5=si0;
si0=l9;
si1=l7;
si0=si0 > si1;
if(si0){
goto L77;
}
si0=l9;
si1=3U;
si0*=si1;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L75;
}
si0=l5;
si1=1U;
si0>>=(si1&31);
l9=si0;
goto L76;
L78:;
si0=l0;
si1=l1;
si2=l21;
si3=l20;
si4=l6;
si5=l7;
sj6=l16;
si0=f1220(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l20;
si1=l7;
si0=si0 < si1;
if(si0){
goto L70;
}
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=l21;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L4;
L77:;
si0=l5;
si1=l5;
si2=l7;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
l9=si0;
L76:;
si0=l7;
si1=1U;
si0+=si1;
l18=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
goto L74;
L75:;
si0=0U;
l5=si0;
si0=l7;
si1=1U;
si0+=si1;
l18=si0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L73;
}
L74:;
si0=l18;
sj1=2ULL;
sj2=3ULL;
si3=l18;
si4=97U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l11=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l18=si0;
if(si0){
goto L79;
}
si0=0U;
l5=si0;
goto L73;
L79:;
si0=l18;
sj1=l11;
si1=(U32)(sj1);
l14=si1;
si0<<=(si1&31);
l5=si0;
si1=l14;
si0>>=(si1&31);
si1=l18;
si0=si0 != si1;
if(si0){
goto L69;
}
L73:;
si0=l5;
si1=1U;
si0>>=(si1&31);
l18=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L81;
}
si0=l5;
si1=4U;
si0+=si1;
l18=si0;
goto L80;
L81:;
si0=l18;
si1=l9;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l5;
si1=l18;
si0+=si1;
si1=4U;
si0+=si1;
l18=si0;
goto L80;
L82:;
si0=l5;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l18=si0;
L80:;
si0=l18;
si1=l5;
si0+=si1;
l5=si0;
si1=l9;
si2=l9;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si2=4U;
si1+=si2;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l5;
si1=l9;
si0+=si1;
l9=si0;
if(si0){
goto L84;
}
si0=8U;
l5=si0;
goto L83;
L84:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l18;
if(si0){
goto L86;
}
si0=l14;
l5=si0;
goto L85;
L86:;
si0=l14;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L87;
}
si0=l14;
si1=l18;
si0=f15277(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=0U;
si2=l18;
si0=f15392(i,si0,si1,si2);
goto L83;
L87:;
si0=l18;
si1=1U;
si0=f15273(i,si0,si1);
l5=si0;
L85:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
L83:;
si0=l0;
si1=l1;
si2=l2;
si3=l7;
si4=l21;
si5=l20;
si6=l6;
si7=l7;
si8=l5;
si9=l9;
f1223(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
goto L5;
L72:;
si0=l0;
si1=l1;
si2=l21;
si3=l20;
si4=l6;
si5=l7;
sj6=l16;
f1224(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l20;
si1=l7;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si0=!(si0);
if(si0){
goto L88;
}
si0=l2;
si1=l21;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L4;
L88:;
si0=l2;
si1=l7;
si2=l21;
si3=l7;
sj4=l13;
sj0=f1225(i,si0,si1,si2,si3,sj4);
goto L4;
L71:;
si0=l20;
si1=l17;
si2=1236924U;
f666(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l7;
si1=l20;
si2=1236956U;
f666(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=1241112U;
si1=50U;
si2=1241164U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l14;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l7;
si1=l20;
si2=1236940U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l7;
sj2=l13;
sj0=f1229(i,si0,si1,sj2);
goto L5;
L6:;
si0=l2;
si1=l7;
si2=l21;
si3=l7;
sj4=l13;
sj0=f1225(i,si0,si1,si2,si3,sj4);
goto L4;
L5:;
si0=l9;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
f15271(i,si0);
L4:;
si0=l17;
si0=!(si0);
if(si0){
goto L89;
}
si0=l21;
f15271(i,si0);
L89:;
si0=l7;
si0=!(si0);
si1=l3;
si0|=si1;
if(si0){
goto L2;
}
si0=l22;
f15271(i,si0);
goto L2;
L3:;
si0=l14;
si1=1U;
si0=si0 > si1;
if(si0){
goto L90;
}
si0=1U;
si1=l14;
si2=1236876U;
f663(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l2;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
l19=sj1;
sj2=l13;
sj3=63ULL;
sj2&=sj3;
l13=sj2;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=l11;
sj2=l13;
sj1>>=(sj2&63);
sj2=l19;
sj3=l16;
sj2<<=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
f15271(i,si0);
L2:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=l14;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1243(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l3;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=8U;
si5=l2;
si6=l3;
si7=3U;
si6<<=(si7&31);
si4=f15390(i,si4,si5,si6);
si5=l3;
si6=l4;
si7=l5;
f1242(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L0;
L1:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L5;
}
si0=l7;
l8=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l8=si0;
goto L4;
L6:;
si0=l6;
si0=f15269(i,si0);
l8=si0;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l8;
si5=l2;
si6=l6;
si4=f15390(i,si4,si5,si6);
l6=si4;
si5=l3;
si6=l4;
si7=l5;
f1242(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l6;
f15271(i,si0);
goto L0;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

U64 f1244(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l4;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=0ULL;
l6=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=1U;
si0&=si1;
l7=si0;
sj0=0ULL;
sj1=l4;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l8=sj0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l9=si0;
sj0=0ULL;
l6=sj0;
goto L4;
L6:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l9=si0;
sj0=0ULL;
l6=sj0;
si0=l2;
l3=si0;
si0=l0;
l1=si0;
L7:;
{
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l4;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
sj2=l4;
sj1<<=(sj2&63);
sj2=l11;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=l8;
sj0>>=(sj1&63);
l6=sj0;
si0=l10;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L4:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l2;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l4;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l8;
sj0>>=(sj1&63);
l6=sj0;
L3:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
sj0=l6;
goto L0;
L2:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l5;
si2=1237776U;
si3=l5;
si4=8U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l3;
si1=l1;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}

void f1245(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L4;
}
sj0=l3;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=l4;
si0-=si1;
l2=si0;
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
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l6;
l7=si0;
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
l7=si0;
goto L6;
L8:;
si0=l5;
si0=f15269(i,si0);
l7=si0;
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=l1;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l5;
si0=f15390(i,si0,si1,si2);
l5=si0;
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l5;
si1=l2;
sj2=l3;
sj0=f1229(i,si0,si1,sj2);
goto L1;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=1235944U;
si1=43U;
si2=1236112U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U64 f1246(rustpythonInstance*i,U64 l0) {
U64 l1=0;
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
sj0=l0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
sj0=0ULL;
goto L0;
L1:;
sj0=l0;
sj0=I64_CLZ(sj0);
sj1=1ULL;
si2=2U;
sj0=f1305(i,sj0,sj1,si2);
l1=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
sj0=0ULL;
l2=sj0;
goto L4;
L5:;
sj0=l1;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L3;
}
sj0=l1;
sj1=1ULL;
sj0<<=(sj1&63);
l2=sj0;
L4:;
sj0=l0;
sj1=l2;
sj2=62ULL;
sj1&=sj2;
sj0<<=(sj1&63);
l0=sj0;
sj1=4611686018427387903ULL;
si0=sj0 <= sj1;
if(si0){
goto L2;
}
sj0=l0;
sj1=14ULL;
sj0<<=(sj1&63);
sj1=562949953224704ULL;
sj2=l0;
sj3=31ULL;
sj2>>=(sj3&63);
sj3=l0;
sj4=55ULL;
sj3>>=(sj4&63);
si3=(U32)(sj3);
si4=1U;
si3<<=(si4&31);
si4=1241744U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=256ULL;
sj3|=sj4;
l1=sj3;
sj2*=sj3;
sj3=l1;
sj2*=sj3;
sj1-=sj2;
sj2=16ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l1;
sj1*=sj2;
sj2=18ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l1;
sj3=16ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l1=sj1;
sj2=l0;
sj3=24ULL;
sj2>>=(sj3&63);
sj1*=sj2;
l3=sj1;
sj2=25ULL;
sj1>>=(sj2&63);
l4=sj1;
sj2=l4;
sj1*=sj2;
sj0-=sj1;
sj1=-1099511627776ULL;
sj0+=sj1;
sj1=24ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l1;
sj0*=sj1;
sj1=15ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l3;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
l1=sj0;
sj1=l1;
sj2=l1;
sj3=2ULL;
sj2+=sj3;
sj1*=sj2;
sj2=l0;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l2;
sj2=1ULL;
sj1>>=(sj2&63);
sj0>>=(sj1&63);
goto L0;
L3:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1242888U;
si1=39U;
si2=1242928U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}

void f1247(rustpythonInstance*i,U32 l0) {
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

void f1248(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=0U;
l3=si0;
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L6;
}
si0=8U;
l1=si0;
si0=0U;
l5=si0;
goto L5;
L6:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L8;
}
si0=l6;
l1=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l1=si0;
goto L7;
L9:;
si0=l5;
si0=f15269(i,si0);
l1=si0;
L7:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l1;
si1=l4;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l3;
sj0=(U64)(si0);
l2=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0|=sj1;
l2=sj0;
si0=1U;
l3=si0;
L3:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1249(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L2;
}
L3:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
if(si0){
goto L4;
}
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
si0=l3;
if(si0){
goto L13;
}
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L12;
L13:;
si0=l6;
si0=!(si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si1=!(si1);
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
si2=!(sj2);
si1&=si2;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l5;
if(si0){
goto L14;
}
sj0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l8=sj1;
si0=sj0 == sj1;
if(si0){
goto L5;
}
si0=l0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L10;
}
goto L6;
L14:;
si0=1U;
l3=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L11:;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
if(si0){
goto L9;
}
si0=l3;
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
L10:;
sj0=l4;
sj1=l8;
si0=sj0 <= sj1;
if(si0){
goto L6;
}
goto L5;
L9:;
si0=l3;
if(si0){
goto L7;
}
goto L5;
L8:;
si0=l0;
si1=l1;
f995(i,si0,si1);
goto L2;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1202(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
L6:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l5;
si1=l0;
si2=8U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l6=si0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l6;
si1=l0;
si2=16U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
si0=f998(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1189152U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=1189160U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
si1=l1;
si0=f999(i,si0,si1);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1189152U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=1189176U;
f683(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1250(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
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
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
if(si0){
goto L21;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L20;
}
L21:;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=(U32)(sj0);
l8=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l9=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l11=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l10;
if(si0){
goto L19;
}
sj0=l9;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
if(si0){
goto L18;
}
si0=0U;
l2=si0;
goto L17;
L20:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L23;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=0U;
l2=si0;
goto L22;
L23:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L25;
}
si0=8U;
l1=si0;
si0=0U;
l5=si0;
goto L24;
L25:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l5;
if(si0){
goto L27;
}
si0=l8;
l1=si0;
goto L26;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l8;
si1=l5;
si0=f15277(i,si0,si1);
l1=si0;
goto L26;
L28:;
si0=l5;
si0=f15269(i,si0);
l1=si0;
L26:;
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
L24:;
si0=l1;
si1=l10;
si2=l5;
si0=f15390(i,si0,si1,si2);
si0=l2;
sj0=(U64)(si0);
l4=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l4;
sj0|=sj1;
l4=sj0;
si0=1U;
l2=si0;
L22:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L19:;
sj0=l9;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l12=si0;
si0=l11;
if(si0){
goto L16;
}
si0=l6;
if(si0){
goto L15;
}
goto L2;
L18:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l8;
if(si0){
goto L30;
}
si0=8U;
l1=si0;
si0=0U;
l2=si0;
goto L29;
L30:;
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l8;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l2;
if(si0){
goto L32;
}
si0=l10;
l1=si0;
goto L31;
L32:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l10;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l10;
si1=l2;
si0=f15277(i,si0,si1);
l1=si0;
goto L31;
L33:;
si0=l2;
si0=f15269(i,si0);
l1=si0;
L31:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
L29:;
si0=l1;
si1=l5;
si2=l2;
si0=f15390(i,si0,si1,si2);
sj0=l4;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l7;
sj0|=sj1;
l4=sj0;
si0=1U;
l2=si0;
L17:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L16:;
si0=l6;
si0=!(si0);
si1=l10;
si1=!(si1);
sj2=l9;
si2=!(sj2);
si1&=si2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
si0=l5;
si1=l10;
si0=si0 == si1;
if(si0){
goto L13;
}
L14:;
si0=l5;
if(si0){
goto L12;
}
goto L6;
L13:;
si0=l5;
if(si0){
goto L34;
}
sj0=l4;
sj1=l9;
si0=sj0 != sj1;
if(si0){
goto L6;
}
goto L5;
L34:;
si0=l8;
si1=l12;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l13=si1;
si2=l8;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
if(si0){
goto L11;
}
goto L5;
L12:;
si0=l10;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
L11:;
si0=l5;
si1=l8;
si2=l13;
si3=l12;
si0=f1202(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L4;
L10:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l2=si0;
si0=l0;
si1=l1;
si2=1U;
f1226(i,si0,si1,si2);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L9:;
si0=l8;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L8:;
f53(i);
UNREACHABLE;
L7:;
si0=l10;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l10;
if(si0){
goto L4;
}
sj0=l4;
sj1=l9;
si0=sj0 < sj1;
if(si0){
goto L4;
}
sj0=l4;
sj1=l9;
si0=sj0 == sj1;
if(si0){
goto L4;
}
L5:;
si0=l3;
si1=l1;
si2=l2;
f1001(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L4:;
si0=l3;
si1=l2;
si2=l1;
f1001(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L35;
}
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l11;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L35:;
si0=l2;
si1=l1;
f1320(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si1=l2;
f1320(i,si0,si1);
UNREACHABLE;
L2:;
si0=l10;
if(si0){
goto L36;
}
si0=l0;
si1=l1;
sj2=l9;
f992(i,si0,si1,sj2);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L36:;
si0=l5;
if(si0){
goto L37;
}
si0=l0;
si1=l2;
sj2=l4;
f992(i,si0,si1,sj2);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L37:;
si0=l0;
si1=4U;
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l8;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l5;
si1=l2;
si2=l12;
si3=l1;
si4=l8;
f1079(i,si0,si1,si2,si3,si4);
goto L38;
L39:;
si0=l5;
si1=l1;
si2=l8;
si3=l2;
si4=l12;
f1079(i,si0,si1,si2,si3,si4);
L38:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1251(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
if(si0){
goto L2;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L1;
}
L2:;
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=(U32)(sj0);
l7=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l10=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l9;
if(si0){
goto L11;
}
sj0=l8;
si0=!(sj0);
if(si0){
goto L10;
}
L11:;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l11=si0;
si0=l5;
if(si0){
goto L9;
}
si0=l10;
if(si0){
goto L8;
}
goto L3;
L10:;
si0=l4;
if(si0){
goto L13;
}
si0=0U;
l4=si0;
goto L12;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l7;
if(si0){
goto L15;
}
si0=8U;
l1=si0;
si0=0U;
l4=si0;
goto L14;
L15:;
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
if(si0){
goto L17;
}
si0=l7;
l1=si0;
goto L16;
L17:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l7;
si1=l4;
si0=f15277(i,si0,si1);
l1=si0;
goto L16;
L18:;
si0=l4;
si0=f15269(i,si0);
l1=si0;
L16:;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
L14:;
si0=l1;
si1=l9;
si2=l4;
si0=f15390(i,si0,si1,si2);
sj0=l3;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l6;
sj0|=sj1;
l3=sj0;
si0=1U;
l4=si0;
L12:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l4;
si0=!(si0);
sj1=l3;
si1=!(sj1);
si0&=si1;
si1=l10;
si1=!(si1);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l9;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
if(si0){
goto L19;
}
sj0=l8;
sj1=l3;
si0=sj0 != sj1;
if(si0){
goto L7;
}
goto L4;
L19:;
si0=l11;
si1=l7;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l9;
if(si0){
goto L21;
}
si0=l4;
if(si0){
goto L20;
}
sj0=l8;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L20;
}
sj0=l8;
sj1=l3;
si0=sj0 != sj1;
if(si0){
goto L4;
}
goto L20;
L21:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l11;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l7;
si0=f1202(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
L20:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
si0=f1000(i,si0,si1);
goto L1;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l7;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=l1;
si0=f999(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1189152U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1189176U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l1;
f995(i,si0,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1252(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l4=si0;
si1=0U;
si0=si0 != si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
si1=!(si1);
si0^=si1;
if(si0){
goto L3;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
f1015(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L5;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+24U);
si0=!(sj0);
if(si0){
goto L4;
}
L5:;
si0=l3;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=l2;
si0=f1000(i,si0,si1);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l2=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
f15271(i,si0);
goto L1;
L6:;
si0=l2;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+36U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L2;
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l3;
si1=l1;
si2=l2;
f1015(i,si0,si1,si2);
L2:;
si0=1U;
l2=si0;
si0=l4;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
si1=!(sj1);
si0&=si1;
l2=si0;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1189085U;
si1=48U;
si2=1189136U;
f703(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1253(rustpythonInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L6;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L5;
}
L6:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l4=si0;
si0=l3;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
goto L3;
L5:;
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1243480U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1243472U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1243464U);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=(U32)(sj0);
l1=si0;
if(si0){
goto L8;
}
si0=8U;
l1=si0;
si0=0U;
l3=si0;
goto L7;
L8:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l3;
if(si0){
goto L10;
}
si0=l7;
l1=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l7;
si1=l3;
si0=f15277(i,si0,si1);
l1=si0;
goto L9;
L11:;
si0=l3;
si0=f15269(i,si0);
l1=si0;
L9:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
L7:;
si0=l1;
si1=l5;
si2=l3;
si0=f15390(i,si0,si1,si2);
sj0=l2;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l6;
sj0|=sj1;
l2=sj0;
si0=1U;
l3=si0;
L3:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l7;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1254(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l7=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l6;
if(si0){
goto L23;
}
sj0=l4;
si0=!(sj0);
if(si0){
goto L22;
}
L23:;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=(U32)(sj0);
l9=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l10=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l5;
si1=255U;
si0&=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l11;
if(si0){
goto L21;
}
sj0=l10;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
if(si0){
goto L20;
}
si0=0U;
l1=si0;
goto L19;
L22:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L27;
}
si0=8U;
l2=si0;
si0=0U;
l6=si0;
goto L26;
L27:;
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l6;
if(si0){
goto L29;
}
si0=l11;
l2=si0;
goto L28;
L29:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l11;
si1=l6;
si0=f15277(i,si0,si1);
l2=si0;
goto L28;
L30:;
si0=l6;
si0=f15269(i,si0);
l2=si0;
L28:;
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
L26:;
si0=l2;
si1=l7;
si2=l6;
si0=f15390(i,si0,si1,si2);
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
goto L24;
L25:;
si0=0U;
l1=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=!(sj0);
if(si0){
goto L14;
}
L24:;
si0=l5;
si1=1U;
si0^=si1;
l5=si0;
goto L2;
L21:;
sj0=l10;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l13=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
goto L11;
L20:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l9;
if(si0){
goto L32;
}
si0=8U;
l2=si0;
si0=0U;
l1=si0;
goto L31;
L32:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l1;
if(si0){
goto L34;
}
si0=l6;
l2=si0;
goto L33;
L34:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l6;
si1=l1;
si0=f15277(i,si0,si1);
l2=si0;
goto L33;
L35:;
si0=l1;
si0=f15269(i,si0);
l2=si0;
L33:;
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
L31:;
si0=l2;
si1=l5;
si2=l1;
si0=f15390(i,si0,si1,si2);
sj0=l4;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l8;
sj0|=sj1;
l4=sj0;
si0=1U;
l1=si0;
L19:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L18:;
si0=l7;
si0=!(si0);
si1=l11;
si1=!(si1);
sj2=l10;
si2=!(sj2);
si1&=si2;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l7;
if(si0){
goto L11;
}
goto L10;
L17:;
si0=l11;
if(si0){
goto L36;
}
si0=l0;
si1=l1;
sj2=l10;
f992(i,si0,si1,sj2);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L36:;
si0=l6;
if(si0){
goto L37;
}
si0=l0;
si1=l2;
sj2=l4;
f992(i,si0,si1,sj2);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L37:;
si0=l0;
si1=4U;
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l9;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l5;
si1=l2;
si2=l13;
si3=l1;
si4=l9;
f1079(i,si0,si1,si2,si3,si4);
goto L38;
L39:;
si0=l5;
si1=l1;
si2=l9;
si3=l2;
si4=l13;
f1079(i,si0,si1,si2,si3,si4);
L38:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L16:;
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1243480U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1243472U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1243464U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L15:;
si0=l11;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L14:;
sj0=0ULL;
l4=sj0;
goto L2;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=l6;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l6;
si1=l11;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l6;
if(si0){
goto L9;
}
sj0=l4;
sj1=l10;
si0=sj0 == sj1;
if(si0){
goto L5;
}
goto L6;
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
goto L8;
L9:;
si0=l9;
si1=l13;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l6=si1;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
goto L7;
L8:;
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l12=si0;
L7:;
si0=l12;
si1=l9;
si2=l6;
si3=l13;
si0=f1202(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l11;
if(si0){
goto L4;
}
sj0=l4;
sj1=l10;
si0=sj0 < sj1;
if(si0){
goto L4;
}
sj0=l4;
sj1=l10;
si0=sj0 == sj1;
if(si0){
goto L4;
}
L5:;
si0=l3;
si1=l1;
si2=l2;
f1001(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L4:;
si0=l3;
si1=l2;
si2=l1;
f1001(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L40;
}
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L40:;
si0=l2;
si1=l1;
f1320(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si1=l2;
f1320(i,si0,si1);
UNREACHABLE;
L2:;
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1255(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L3;
}
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
if(si0){
goto L5;
}
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
si0=(U32)(sj0);
if(si0){
goto L6;
}
sj0=l7;
si0=!(sj0);
if(si0){
goto L2;
}
L6:;
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L2;
L5:;
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L15;
}
si0=l6;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
goto L14;
L15:;
si0=l6;
si0=!(si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si1=!(si1);
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
si2=!(sj2);
si1&=si2;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
if(si0){
goto L16;
}
sj0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l7=sj1;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L8;
L16:;
si0=1U;
l3=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l8;
si3=3U;
si2<<=(si3&31);
si0=f15389(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
L13:;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
if(si0){
goto L11;
}
si0=l3;
if(si0){
goto L8;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
L12:;
sj0=l4;
sj1=l7;
si0=sj0 <= sj1;
if(si0){
goto L8;
}
goto L7;
L11:;
si0=l3;
if(si0){
goto L9;
}
goto L7;
L10:;
si0=l0;
si1=l1;
f995(i,si0,si1);
goto L3;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1202(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
L8:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l5;
si1=l0;
si2=8U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l3=si0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l3;
si1=l0;
si2=16U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
si0=f998(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+16U);
si2=1U;
si1^=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L2;
L7:;
si0=l0;
si1=l1;
si0=f999(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1189152U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=1189176U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L2:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1189152U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1187348U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=1189160U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1256(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l2=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L3;
}
si0=255U;
l3=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l5=sj1;
si0=sj0 < sj1;
if(si0){
goto L2;
}
sj0=l4;
sj1=l5;
si0=sj0 != sj1;
goto L0;
L4:;
si0=l2;
if(si0){
goto L5;
}
si0=1U;
goto L0;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l0;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1202(i,si0,si1,si2,si3);
goto L0;
L3:;
si0=1U;
l3=si0;
si0=l2;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=255U;
l3=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l5=sj1;
si0=sj0 < sj1;
if(si0){
goto L2;
}
sj0=l4;
sj1=l5;
si0=sj0 != sj1;
goto L0;
L6:;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f1202(i,si0,si1,si2,si3);
l3=si0;
L2:;
si0=l3;
L0:;
return si0;
}

void f1257(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l2;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
si1=34U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
if(si0){
goto L14;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L4;
}
L14:;
si0=l4;
if(si0){
goto L16;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=l3;
si3=23U;
si2+=si3;
f1209(i,si0,si1,si2);
goto L15;
L16:;
si0=l2;
si1=255U;
si0&=si1;
l4=si0;
si0=I32_CLZ(si0);
si1=l2;
si1=I32_CTZ(si1);
l6=si1;
si0+=si1;
si1=-24U;
si0+=si1;
si1=255U;
si0&=si1;
si1=7U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l6;
sj2=(U64)(si2);
f1098(i,si0,si1,sj2);
goto L15;
L17:;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l2;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l7=sj0;
sj0=I64_POPCNT(sj0);
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=l1;
sj1=(U64)(si1);
sj2=6ULL;
sj1<<=(sj2&63);
si2=l1;
si3=3U;
si2<<=(si3&31);
si3=l8;
si2+=si3;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj2=I64_CLZ(sj2);
sj1-=sj2;
sj2=0ULL;
si3=l2;
si4=255U;
si3&=si4;
si4=40U;
si3*=si4;
si4=1206504U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj4=1ULL;
sj3+=sj4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=4294967295ULL;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
sj0=l9;
si0=(U32)(sj0);
si1=1U;
si0+=si1;
l2=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L19;
}
goto L1;
L20:;
si0=1U;
l2=si0;
si0=1U;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=8U;
l10=si0;
si0=0U;
l4=si0;
goto L18;
L19:;
si0=l2;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l4;
if(si0){
goto L22;
}
si0=l11;
l10=si0;
goto L21;
L22:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L23;
}
si0=l11;
si1=l4;
si0=f15277(i,si0,si1);
l10=si0;
goto L21;
L23:;
si0=l4;
si0=f15269(i,si0);
l10=si0;
L21:;
si0=l10;
si0=!(si0);
if(si0){
goto L8;
}
L18:;
si0=l6;
si1=l2;
sj2=l7;
si3=l10;
si4=l8;
si5=l4;
si3=f15390(i,si3,si4,si5);
l8=si3;
si4=l1;
si5=2U;
si0=f1150(i,si0,si1,sj2,si3,si4,si5);
l4=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l2;
si2=l4;
si3=l2;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
f15271(i,si0);
L15:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=0U;
l1=si0;
L26:;
{
si0=l8;
si1=l1;
si0+=si1;
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=35U;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=1243128U;
si1=43U;
si2=1243700U;
f673(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l6;
si1=48U;
si2=87U;
si3=l2;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l2;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L26;
}
}
si0=l5;
if(si0){
goto L6;
}
si0=l4;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=0U;
l5=si0;
si0=-2U;
l1=si0;
goto L5;
L25:;
si0=l5;
si0=!(si0);
if(si0){
goto L24;
}
si0=0U;
l4=si0;
goto L6;
L24:;
si0=l4;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
si1=l4;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l4;
si2=1U;
f1195(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L28:;
si0=l8;
si1=l1;
si0+=si1;
si1=45U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
if(si0){
goto L29;
}
si0=l5;
l4=si0;
goto L6;
L29:;
si0=l4;
si1=-1U;
si0+=si1;
l1=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L5;
}
L31:;
{
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l8;
si1=l4;
si0+=si1;
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=l1;
si2=-1U;
si1+=si2;
l6=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L7;
}
goto L31;
}
L30:;
si0=l4;
si1=l5;
si2=1252224U;
f663(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1243456U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1242944U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1243716U;
f683(i,si0,si1);
UNREACHABLE;
L12:;
si0=1224480U;
si1=26U;
si2=1224508U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1224420U;
si1=41U;
si2=1224464U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1243128U;
si1=43U;
si2=1243296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l11;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l8=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l8;
si2=l4;
f756(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L33;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+28U);
l7=sj0;
sj1=1095216660480ULL;
sj0&=sj1;
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L32;
}
L33:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L32:;
si0=l3;
sj1=l7;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1243488U;
si1=43U;
si2=l3;
si3=24U;
si2+=si3;
si3=1243532U;
si4=1243684U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l1;
si1=l5;
si2=1252224U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=1U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=48U;
i32_store8(&i->m0,(U64)si0,si1);
L3:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=1U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

U32 f1258(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=45U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=382U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
si2=l1;
si3=-1U;
si2+=si3;
l0=si2;
si3=l0;
si4=l1;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1243732U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0=f983(i,si0,si1);
l3=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f1259(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=45U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si2=-1U;
si1+=si2;
l6=si1;
si2=l6;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=412U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1243732U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L3:;
si0=l2;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=412U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=12U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1243732U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0=f987(i,si0,si1);
l3=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f1260(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=45U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si2=-1U;
si1+=si2;
l6=si1;
si2=l6;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=413U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1243732U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L3:;
si0=l2;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=413U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=12U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1243732U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0=f985(i,si0,si1);
l3=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f1261(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=45U;
si2=l1;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si2=i32_load(&i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si2=-1U;
si1+=si2;
l6=si1;
si2=l6;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=414U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1243732U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L3:;
si0=l2;
si1=12U;
si0+=si1;
si1=47U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=414U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=12U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1243732U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l5;
si2=l2;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
si0=f989(i,si0,si1);
l3=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f1262(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L5;
}
si0=l2;
si1=l1;
sj2=1ULL;
f996(i,si0,si1,sj2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l1=si0;
goto L1;
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1ULL;
sj0+=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=0U;
l1=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=8589934594ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l1;
sj1=1ULL;
f1321(i,si0,sj1);
UNREACHABLE;
L3:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=1ULL;
f1076(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l1=si0;
goto L1;
L2:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f1263(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
if(si0){
goto L2;
}
sj0=0ULL;
l6=sj0;
goto L1;
L3:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l5;
si2=16U;
si1+=si2;
si2=l5;
si3=20U;
si2+=si3;
si3=l5;
si4=24U;
si3+=si4;
si4=1243740U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
sj0=0ULL;
l6=sj0;
L4:;
{
si0=l5;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=l6;
si3=l5;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
l8=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=l6;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l7;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L4;
}
}
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
sj0=l6;
L0:;
return sj0;
}

U32 f1264(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F64 sd1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=0U;
l4=si0;
goto L8;
L9:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L11;
}
si0=8U;
l0=si0;
si0=0U;
l6=si0;
goto L10;
L11:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L13;
}
si0=l7;
l0=si0;
goto L12;
L13:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l0=si0;
goto L12;
L14:;
si0=l6;
si0=f15269(i,si0);
l0=si0;
L12:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
L10:;
si0=l0;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=1U;
l4=si0;
L8:;
si0=l2;
sj1=l3;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1);
sd1=-(sd1);
f64_store(&i->m0,(U64)si0+24U,sd1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si0=f1040(i,si0,si1);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
goto L1;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L16;
}
si0=8U;
l0=si0;
si0=0U;
l6=si0;
goto L15;
L16:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L18;
}
si0=l7;
l0=si0;
goto L17;
L18:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l0=si0;
goto L17;
L19:;
si0=l6;
si0=f15269(i,si0);
l0=si0;
L17:;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
L15:;
si0=l0;
si1=l5;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=1U;
l4=si0;
goto L2;
L6:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=0U;
l4=si0;
L2:;
si0=l2;
sj1=l3;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si0=f1040(i,si0,si1);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
f15271(i,si0);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1265(rustpythonInstance*i,U32 l0,F64 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
sd0=l1;
sd1=0;
si0=sd0 >= sd1;
if(si0){
goto L5;
}
sd0=l1;
sd0=-(sd0);
l1=sd0;
si0=l2;
si1=255U;
si0&=si1;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L2;
}
L5:;
si0=l0;
sd1=l1;
si2=l2;
f1041(i,si0,sd1,si2);
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+16U,si1);
goto L1;
L4:;
si0=3U;
l2=si0;
goto L2;
L3:;
si0=2U;
l2=si0;
L2:;
si0=l3;
sd1=l1;
si2=l2;
f1041(i,si0,sd1,si2);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
l4=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si1=!(si1);
sj2=l4;
si2=!(sj2);
si1&=si2;
i32_store8(&i->m0,(U64)si0+16U,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1266(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0-=si1;
l4=si0;
si0=8U;
l5=si0;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L5;
}
si0=l7;
l5=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L4;
L6:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
l6=si0;
si0=l2;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=1U;
si0&=si1;
l10=si0;
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
goto L8;
L9:;
si0=0U;
l2=si0;
si0=0U;
si1=l4;
si2=-2U;
si1&=si2;
si0-=si1;
l11=si0;
si0=l9;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l12=si0;
si0=l8;
si1=l1;
si0+=si1;
l13=si0;
si0=0U;
l1=si0;
L10:;
{
si0=l5;
si1=l1;
si0+=si1;
l6=si0;
si1=l13;
si2=l1;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l12;
si3=l1;
si2+=si3;
l14=si2;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=l2;
si2=-2U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l3;
si1=l2;
si0-=si1;
l3=si0;
si0=0U;
si1=l2;
si0-=si1;
l6=si0;
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l3;
si3=3U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
L7:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1267(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=4U;
l2=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=0U;
l4=si0;
si0=0U;
l5=si0;
goto L4;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=4U;
l2=si0;
si0=l3;
si1=l6;
si0=DIV_U(si0,si1);
l7=si0;
si1=l3;
si2=l7;
si3=l6;
si2*=si3;
si1-=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L8;
}
si0=l8;
l2=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l2=si0;
goto L7;
L9:;
si0=l7;
si0=f15269(i,si0);
l2=si0;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
l1=si0;
L10:;
{
si0=l1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=l3;
si2=l6;
si3=l3;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l3;
si1=l8;
si0-=si1;
l3=si0;
if(si0){
goto L10;
}
}
L4:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=1244240U;
si1=25U;
si2=1244224U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1268(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0-=si1;
l4=si0;
si0=8U;
l5=si0;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L5;
}
si0=l7;
l5=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L4;
L6:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
l6=si0;
si0=l2;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=1U;
si0&=si1;
l10=si0;
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
goto L8;
L9:;
si0=0U;
l2=si0;
si0=0U;
si1=l4;
si2=-2U;
si1&=si2;
si0-=si1;
l11=si0;
si0=l9;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l12=si0;
si0=l8;
si1=l1;
si0+=si1;
l13=si0;
si0=0U;
l1=si0;
L10:;
{
si0=l5;
si1=l1;
si0+=si1;
l6=si0;
si1=l13;
si2=l1;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l12;
si3=l1;
si2+=si3;
l14=si2;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=l2;
si2=-2U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l3;
si1=l2;
si0-=si1;
l3=si0;
si0=0U;
si1=l2;
si0-=si1;
l6=si0;
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l3;
si3=3U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
L7:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1269(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
si0=4U;
l2=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L5;
}
si0=0U;
l4=si0;
si0=0U;
l5=si0;
goto L4;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=4U;
l2=si0;
si0=l3;
si1=l6;
si0=DIV_U(si0,si1);
l7=si0;
si1=l3;
si2=l7;
si3=l6;
si2*=si3;
si1-=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L8;
}
si0=l8;
l2=si0;
goto L7;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l2=si0;
goto L7;
L9:;
si0=l7;
si0=f15269(i,si0);
l2=si0;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
l7=si0;
L10:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
si0+=si1;
si1=l3;
si2=l6;
si3=l3;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l3;
si1=l8;
si0-=si1;
l3=si0;
if(si0){
goto L10;
}
}
L4:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=1244240U;
si1=25U;
si2=1244268U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1270(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0-=si1;
l4=si0;
si0=8U;
l5=si0;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L5;
}
si0=l7;
l5=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L4;
L6:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L4:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
l6=si0;
si0=l2;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=1U;
si0&=si1;
l10=si0;
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
goto L8;
L9:;
si0=0U;
l2=si0;
si0=0U;
si1=l4;
si2=-2U;
si1&=si2;
si0-=si1;
l11=si0;
si0=l9;
si1=l3;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l12=si0;
si0=l8;
si1=l1;
si0+=si1;
l13=si0;
si0=0U;
l1=si0;
L10:;
{
si0=l5;
si1=l1;
si0+=si1;
l6=si0;
si1=l13;
si2=l1;
si1+=si2;
l7=si1;
sj1=i64_load(&i->m0,(U64)si1);
si2=l12;
si3=l1;
si2+=si3;
l14=si2;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=l2;
si2=-2U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l3;
si1=l2;
si0-=si1;
l3=si0;
si0=0U;
si1=l2;
si0-=si1;
l6=si0;
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l3;
si3=3U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
L7:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1271(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f1310(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l3=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+17U);
l3=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
sj1=4294967304ULL;
i64_store(&i->m0,(U64)si0+28U,sj1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=48U;
si0+=si1;
si1=l1;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=32U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
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
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f1310(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l5=si0;
si0=1U;
l1=si0;
L6:;
{
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
si0=si0 == si1;
if(si0){
goto L8;
}
goto L7;
L9:;
si0=1251796U;
si1=43U;
si2=1252336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=1U;
f1195(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l4=si0;
L7:;
si0=l4;
si1=l1;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
f1310(i,si0,si1);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=1251796U;
si1=43U;
si2=1252336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1272(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U32 l7,U32 l8) {
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
U64 l22=0;
U32 l23=0;
U64 l24=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj6;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l5;
si1=1U;
si0<<=(si1&31);
l10=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l5;
si1=l8;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=1U;
si0>>=(si1&31);
l11=si0;
si0=l5;
si1=422U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l0;
si1=l1;
si2=l2;
si3=l10;
si4=l4;
si5=l11;
sj6=l6;
si7=l7;
si8=l5;
si0=f1272(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l8=si0;
goto L12;
L13:;
si0=l5;
si1=-2U;
si0&=si1;
l3=si0;
si1=l10;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l11;
sj6=l6;
si0=f1273(i,si0,si1,si2,si3,si4,si5,sj6);
l8=si0;
L12:;
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l5;
si1=l11;
si0-=si1;
l12=si0;
si1=l11;
si0=f1359(i,si0,si1);
l13=si0;
if(si0){
goto L15;
}
si0=8U;
l14=si0;
goto L14;
L15:;
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l13;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l3;
if(si0){
goto L17;
}
si0=l15;
l14=si0;
goto L16;
L17:;
si0=l15;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l15;
si1=l3;
si0=f15277(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l14;
si1=0U;
si2=l3;
si0=f15392(i,si0,si1,si2);
goto L14;
L18:;
si0=l3;
si1=1U;
si0=f15273(i,si0,si1);
l14=si0;
L16:;
si0=l14;
si0=!(si0);
if(si0){
goto L7;
}
L14:;
si0=l7;
si1=l5;
si2=l4;
si3=l11;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l12;
si4=l0;
si5=l11;
si6=l14;
si7=l13;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l11;
si1=l5;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=l11;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l8;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
L20:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l16;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
goto L20;
}
L19:;
si0=1244656U;
si1=71U;
si2=1244728U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l10;
si1=l3;
si2=1244428U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l5;
si1=l8;
si2=1244444U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=l10;
si2=1244412U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1244051U;
si1=35U;
si2=1244460U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l15;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l10;
si1=l11;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l10;
si1=l11;
si0-=si1;
l17=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l2;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l5;
if(si0){
goto L25;
}
si0=0U;
l20=si0;
goto L24;
L25:;
si0=l5;
si1=1U;
si0&=si1;
l20=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l10=si0;
si0=0U;
l15=si0;
goto L26;
L27:;
si0=l5;
si1=-2U;
si0&=si1;
l21=si0;
si0=0U;
l10=si0;
si0=l7;
l8=si0;
si0=l19;
l3=si0;
si0=0U;
l15=si0;
L28:;
{
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
l22=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l23=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l16;
sj3=l22;
si2=sj2 <= sj3;
sj3=l16;
sj4=l22;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
si3=l8;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l16;
si0=sj0 <= sj1;
sj1=l24;
sj2=l16;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l21;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
}
L26:;
si0=l20;
si0=!(si0);
if(si0){
goto L29;
}
si0=l19;
si1=l15;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l10;
sj2=(U64)(si2);
si3=l7;
si4=l3;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l22=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l22;
si0=sj0 <= sj1;
sj1=l16;
sj2=l22;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
L29:;
si0=l17;
si1=l5;
si0=si0 == si1;
l3=si0;
si1=l10;
si0&=si1;
l20=si0;
si0=l3;
if(si0){
goto L24;
}
si0=l10;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L24;
}
si0=l19;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l20=si0;
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L24;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=l11;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l8;
si1=l10;
si0+=si1;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L30:;
{
si0=l3;
si0=!(si0);
l20=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L24;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L30;
}
}
L24:;
si0=l1;
si1=l11;
si0-=si1;
l3=si0;
si0=l0;
si1=l18;
si0+=si1;
l8=si0;
si0=l12;
si1=211U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l8;
si1=l3;
si2=l19;
si3=l17;
si4=l4;
si5=l12;
sj6=l6;
si7=l7;
si8=l5;
si0=f1272(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l15=si0;
goto L31;
L32:;
si0=l12;
si1=1U;
si0<<=(si1&31);
l10=si0;
si1=l17;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l8;
si1=l3;
si2=l19;
si3=l10;
si4=l4;
si5=l12;
sj6=l6;
si0=f1273(i,si0,si1,si2,si3,si4,si5,sj6);
l15=si0;
L31:;
si0=l12;
si1=l11;
si0=f1359(i,si0,si1);
l21=si0;
if(si0){
goto L34;
}
si0=8U;
l1=si0;
goto L33;
L34:;
si0=l21;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l21;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l21;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l23=si0;
si0=l10;
if(si0){
goto L36;
}
si0=l23;
l1=si0;
goto L35;
L36:;
si0=l23;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l23;
si1=l10;
si0=f15277(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L33;
L37:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l1=si0;
L35:;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
L33:;
si0=l12;
si1=l3;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
si1=l5;
si2=l8;
si3=l12;
si4=l4;
si5=l12;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l11;
si6=l1;
si7=l21;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l15;
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l7;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L38;
}
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=8U;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l3=si0;
L39:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l10;
si1=l3;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L39;
}
}
L38:;
si0=l17;
si1=l12;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l9;
si1=l17;
si2=l12;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l5;
if(si0){
goto L45;
}
si0=0U;
l10=si0;
goto L41;
L45:;
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l3;
si1=1U;
si0&=si1;
l12=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L43;
}
si0=0U;
l10=si0;
si0=0U;
l15=si0;
goto L42;
L44:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l9;
si2=l9;
si3=4U;
si2+=si3;
si3=l9;
si4=8U;
si3+=si4;
si4=1254640U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L43:;
si0=l3;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l10=si0;
si0=l7;
l8=si0;
si0=l11;
l3=si0;
si0=0U;
l15=si0;
L46:;
{
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
l22=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l23=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l16;
sj3=l22;
si2=sj2 <= sj3;
sj3=l16;
sj4=l22;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
si3=l8;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l16;
si0=sj0 <= sj1;
sj1=l24;
sj2=l16;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l5;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L46;
}
}
L42:;
si0=l12;
si0=!(si0);
if(si0){
goto L47;
}
si0=l11;
si1=l15;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l10;
sj2=(U64)(si2);
si3=l7;
si4=l3;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l22=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l22;
si0=sj0 <= sj1;
sj1=l16;
sj2=l22;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
L47:;
si0=l20;
si1=l10;
si0&=si1;
if(si0){
goto L40;
}
L41:;
si0=l21;
si0=!(si0);
if(si0){
goto L48;
}
si0=l1;
f15271(i,si0);
L48:;
si0=l13;
si0=!(si0);
if(si0){
goto L49;
}
si0=l14;
f15271(i,si0);
L49:;
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l20;
si1=l10;
si0|=si1;
si1=1U;
si0&=si1;
goto L0;
L40:;
si0=1244524U;
si1=28U;
si2=1244552U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l11;
si1=l10;
si2=1244476U;
f662(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1253593U;
si1=35U;
si2=1254656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l10;
si1=l17;
si2=1244412U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l23;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l12;
si1=l3;
si2=1244492U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l12;
si1=l17;
si2=1244508U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1244568U;
si1=71U;
si2=1244640U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1273(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
U64 l27=0;
U64 l28=0;
U32 l29=0;
U64 l30=0;
U32 l31=0;
U64 l32=0;
U64 l33=0;
U32 l34=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=128U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l5;
si0-=si1;
l8=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l8;
si1=l5;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
si0=1U;
l10=si0;
si0=l8;
l11=si0;
goto L1;
L6:;
si0=l8;
si1=l1;
si2=1247096U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1245680U;
si1=29U;
si2=1247392U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=8U;
si0+=si1;
l12=si0;
si0=l5;
si1=-2U;
si0&=si1;
l13=si0;
si0=l5;
si1=1U;
si0&=si1;
l14=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l16=si0;
si1=-8U;
si0+=si1;
l17=si0;
si0=l5;
si1=4U;
si0<<=(si1&31);
si1=8U;
si0|=si1;
l18=si0;
si0=0U;
l9=si0;
si0=l2;
l19=si0;
si0=l5;
l20=si0;
si0=1U;
l10=si0;
si0=l8;
l11=si0;
L11:;
{
si0=l19;
l21=si0;
si0=l8;
si1=l11;
si0-=si1;
l22=si0;
l23=si0;
si0=l3;
si1=l11;
si0-=si1;
l24=si0;
si1=l22;
si0=si0 <= si1;
if(si0){
goto L12;
}
L15:;
{
si0=l23;
si1=l5;
si0+=si1;
l1=si0;
si1=l23;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l2;
si1=l23;
si2=3U;
si1<<=(si2&31);
l25=si1;
si0+=si1;
l26=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
sj0*=sj1;
l27=sj0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
sj0=0ULL;
l28=sj0;
si0=0U;
l29=si0;
sj0=0ULL;
l30=sj0;
goto L16;
L17:;
sj0=0ULL;
l30=sj0;
si0=0U;
l29=si0;
si0=l4;
l31=si0;
si0=l21;
l1=si0;
sj0=0ULL;
l28=sj0;
L18:;
{
si0=l7;
si1=64U;
si0+=si1;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l27;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
sj1=l28;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l32=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+64U);
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=80U;
si0+=si1;
si1=l31;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l27;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=8U;
si0+=si1;
l34=si0;
sj1=0ULL;
sj2=l32;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l7;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l33;
sj3=l32;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l32=sj1;
si2=l34;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+80U);
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l32;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l33;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
si0=l31;
si1=16U;
si0+=si1;
l31=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l13;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L16:;
si0=l14;
si0=!(si0);
if(si0){
goto L19;
}
si0=l7;
si1=48U;
si0+=si1;
si1=l4;
si2=l29;
si3=3U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l27;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l26;
si1=l1;
si0+=si1;
l1=si0;
sj1=l28;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l32=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+48U);
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l30;
sj1=l32;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l7;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l33;
sj2=l32;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
L19:;
si0=l26;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l0;
si1=l25;
si0+=si1;
sj1=l27;
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=8U;
si0+=si1;
l21=si0;
si0=l23;
si1=1U;
si0+=si1;
l23=si0;
si1=l20;
si0=si0 == si1;
if(si0){
goto L12;
}
goto L15;
L20:;
}
si0=l23;
si1=l8;
si2=1247376U;
f663(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l23;
si1=l1;
si2=1247360U;
f675(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l1;
si1=l3;
si2=1247360U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l22;
si1=l3;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l3;
si1=l22;
si0-=si1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l11;
si1=l5;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
si1=l22;
si2=3U;
si1<<=(si2&31);
l26=si1;
si0+=si1;
si1=l16;
si0+=si1;
l21=si0;
si0=0U;
l31=si0;
si0=l5;
l29=si0;
si0=l19;
l1=si0;
L22:;
{
si0=l1;
si1=l16;
si0+=si1;
l34=si0;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l28=sj0;
sj1=l32;
si0=sj0 < sj1;
l23=si0;
si0=l31;
si1=255U;
si0&=si1;
if(si0){
goto L24;
}
si0=l23;
l31=si0;
goto L23;
L24:;
si0=l23;
sj1=l28;
sj2=1ULL;
sj1+=sj2;
l28=sj1;
si1=!(sj1);
si0|=si1;
l31=si0;
L23:;
si0=l34;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L22;
}
}
si0=l31;
si0=!(si0);
if(si0){
goto L25;
}
si0=l21;
si1=l16;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=l18;
l1=si0;
L26:;
{
si0=l15;
si1=l1;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=1U;
l9=si0;
goto L25;
L27:;
si0=l19;
si1=l1;
si0+=si1;
l31=si0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L26;
}
}
L25:;
si0=l10;
si1=1U;
si0&=si1;
l1=si0;
si0=0U;
l10=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l24;
si1=l22;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l24;
si1=l8;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l26;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
si0=l17;
l1=si0;
si0=l12;
l31=si0;
L29:;
{
si0=l1;
si0=!(si0);
l10=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L28;
}
si0=l31;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L29;
}
}
L28:;
si0=l12;
si1=l16;
si0+=si1;
l12=si0;
si0=l15;
si1=l16;
si0-=si1;
l15=si0;
si0=l19;
si1=l16;
si0+=si1;
l19=si0;
si0=l20;
si1=l5;
si0+=si1;
l20=si0;
si0=l11;
si1=l5;
si0-=si1;
l11=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L1;
}
goto L11;
L21:;
}
si0=l22;
si1=l3;
si2=1247312U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1244051U;
si1=35U;
si2=1247328U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l22;
si1=l24;
si2=1247344U;
f675(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l24;
si1=l8;
si2=1247344U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1247408U;
si1=31U;
si2=1247440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=1U;
si1=l7;
si2=100U;
si1+=si2;
si2=1245668U;
si3=l7;
si4=104U;
si3+=si4;
si4=1247456U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l8;
si1=l11;
si0-=si1;
l20=si0;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l5;
si1=1U;
si0&=si1;
l25=si0;
si0=l2;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=0U;
si1=l5;
si2=-2U;
si1&=si2;
si0-=si1;
l13=si0;
si0=l20;
l23=si0;
L32:;
{
si0=l23;
si1=l5;
si0+=si1;
l1=si0;
si1=l23;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l1;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l1;
si1=l3;
si2=1247296U;
f666(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l2;
si1=l23;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l26=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
sj0*=sj1;
l27=sj0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L35;
}
sj0=0ULL;
l28=sj0;
si0=0U;
l1=si0;
sj0=0ULL;
l30=sj0;
goto L34;
L35:;
sj0=0ULL;
l30=sj0;
si0=0U;
l29=si0;
si0=l21;
l1=si0;
si0=l4;
l31=si0;
sj0=0ULL;
l28=sj0;
L36:;
{
si0=l7;
si1=16U;
si0+=si1;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l27;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
sj1=l28;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l32=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l31;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l27;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=8U;
si0+=si1;
l34=si0;
sj1=0ULL;
sj2=l32;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l7;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l33;
sj3=l32;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l32=sj1;
si2=l34;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l32;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l33;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l31;
si1=16U;
si0+=si1;
l31=si0;
si0=l13;
si1=l29;
si2=-2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L36;
}
}
si0=0U;
si1=l29;
si0-=si1;
l1=si0;
L34:;
si0=l23;
si1=1U;
si0+=si1;
l23=si0;
si0=l25;
si0=!(si0);
if(si0){
goto L37;
}
si0=l7;
si1=l4;
si2=l1;
si3=3U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l27;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l26;
si1=l1;
si0+=si1;
l1=si0;
sj1=l28;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l32=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l30;
sj1=l32;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l33;
sj2=l32;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
L37:;
si0=l26;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l16;
si0+=si1;
sj1=l27;
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=8U;
si0+=si1;
l21=si0;
si0=l23;
si1=l8;
si0=si0 != si1;
if(si0){
goto L32;
}
goto L30;
}
L31:;
si0=l23;
si1=l1;
si2=1247296U;
f675(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l20;
si1=l3;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l3;
si1=l20;
si0-=si1;
l1=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l11;
si1=l1;
si2=l5;
si1-=si2;
l1=si1;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l11;
si1=l5;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l11;
si0=!(si0);
if(si0){
goto L46;
}
si0=l2;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l29=si0;
si0=l11;
l34=si0;
L47:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l28=sj0;
sj1=l32;
si0=sj0 < sj1;
l13=si0;
si0=l29;
si1=255U;
si0&=si1;
if(si0){
goto L49;
}
si0=l13;
l29=si0;
goto L48;
L49:;
si0=l13;
sj1=l28;
sj2=1ULL;
sj1+=sj2;
l28=sj1;
si1=!(sj1);
si0|=si1;
l29=si0;
L48:;
si0=l1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si0=l34;
si1=-1U;
si0+=si1;
l34=si0;
if(si0){
goto L47;
}
}
si0=l29;
si1=l9;
si0&=si1;
if(si0){
goto L39;
}
si0=l29;
si1=l9;
si0|=si1;
l9=si0;
L46:;
si0=l10;
si0=!(si0);
if(si0){
goto L51;
}
si0=l8;
si1=l11;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l11;
si0=!(si0);
if(si0){
goto L50;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L51;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l31=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
L52:;
{
si0=l31;
si0=!(si0);
if(si0){
goto L50;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=-8U;
si0+=si1;
l31=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L52;
}
}
L51:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l5;
si1=1U;
si0&=si1;
l21=si0;
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=0U;
l29=si0;
si0=0U;
l34=si0;
goto L53;
L54:;
si0=l5;
si1=-2U;
si0&=si1;
l23=si0;
si0=0U;
l29=si0;
si0=l4;
l31=si0;
si0=l26;
l1=si0;
si0=0U;
l34=si0;
L55:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l29;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l31;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l28;
sj3=l32;
si2=sj2 <= sj3;
sj3=l28;
sj4=l32;
si3=sj3 < sj4;
si4=l29;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l29=si2;
sj2=(U64)(si2);
si3=l31;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l28=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l28;
si0=sj0 <= sj1;
sj1=l27;
sj2=l28;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
si0=l31;
si1=16U;
si0+=si1;
l31=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l23;
si1=l34;
si2=2U;
si1+=si2;
l34=si1;
si0=si0 != si1;
if(si0){
goto L55;
}
}
L53:;
si0=l21;
si0=!(si0);
if(si0){
goto L56;
}
si0=l26;
si1=l34;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l31=si0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l29;
sj2=(U64)(si2);
si3=l4;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l32;
si0=sj0 <= sj1;
sj1=l28;
sj2=l32;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
L56:;
si0=l29;
si1=-1U;
si0^=si1;
si1=l9;
si0&=si1;
si1=1U;
si0&=si1;
if(si0){
goto L57;
}
si0=l9;
si1=l29;
si0^=si1;
l1=si0;
goto L38;
L57:;
si0=1247208U;
si1=37U;
si2=1247248U;
f673(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=0U;
l1=si0;
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L38;
}
si0=1244524U;
si1=28U;
si2=1247264U;
f673(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l20;
si1=l3;
si2=1247112U;
f662(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=1244051U;
si1=35U;
si2=1247128U;
f673(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l11;
si1=l1;
si2=1247144U;
f666(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l11;
si1=l5;
si2=1247160U;
f666(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l20;
si1=l8;
si2=1247176U;
f662(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l8;
si1=l3;
si2=1247192U;
f662(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=1244524U;
si1=28U;
si2=1247280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l7;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l1;
si1=1U;
si0&=si1;
L0:;
return si0;
}

void f1274(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U32 l7,U32 l8) {
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
U64 l23=0;
U64 l24=0;
U32 l25=0;
U64 l26=0;
U64 l27=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj6;
si0=i->g0;
si1=48U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l5;
l10=si0;
si0=l5;
si1=211U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l5;
l10=si0;
L2:;
{
si0=l5;
si1=l10;
l11=si1;
si0-=si1;
l12=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l12;
si1=l3;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l11;
si1=1U;
si0>>=(si1&31);
l13=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l15=si0;
si1=l1;
si2=l12;
si1-=si2;
l16=si1;
si2=l2;
si3=l14;
si2+=si3;
l17=si2;
si3=l3;
si4=l12;
si3-=si4;
l18=si3;
si4=l4;
si5=l13;
sj6=l6;
si7=l7;
si8=l8;
si0=f1272(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l19=si0;
si0=l13;
si1=l16;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l11;
si1=l5;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l7;
si1=l8;
si2=l15;
si3=l13;
si4=l4;
si5=l11;
si6=l13;
si5-=si6;
l10=si5;
si6=3U;
si5<<=(si6&31);
l12=si5;
si4+=si5;
si5=l13;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l11;
si1=l18;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l13;
si1=l8;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l17;
si1=l12;
si0+=si1;
l20=si0;
si0=0U;
l14=si0;
si0=0U;
l21=si0;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l13;
si1=2147483646U;
si0&=si1;
l22=si0;
si0=0U;
l14=si0;
si0=l7;
l16=si0;
si0=l20;
l12=si0;
si0=0U;
l21=si0;
L17:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l16;
sj3=i64_load(&i->m0,(U64)si3);
l24=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l23;
sj3=l24;
si2=sj2 <= sj3;
sj3=l23;
sj4=l24;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
si3=l16;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l23=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l23;
si0=sj0 <= sj1;
sj1=l26;
sj2=l23;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l22;
si1=l21;
si2=2U;
si1+=si2;
l21=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
L16:;
si0=l11;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l20;
si1=l21;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
sj2=(U64)(si2);
si3=l7;
si4=l12;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L18:;
si0=l13;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l11;
si1=-2U;
si0&=si1;
l12=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l12;
si1=l18;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l13;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=l13;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si0=l9;
si1=l12;
si2=l13;
si1-=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l13;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l16;
si1=l13;
si0=si0 != si1;
if(si0){
goto L6;
}
sj0=0ULL;
l23=sj0;
si0=l12;
si1=l13;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l17;
si1=l14;
si0+=si1;
l12=si0;
sj0=0ULL;
l23=sj0;
L20:;
{
si0=l9;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l27;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l23;
si3=l9;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
l24=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l23;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l24;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l23=sj0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L20;
}
}
L19:;
si0=l11;
si1=-1U;
si0+=si1;
l12=si0;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l17;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1-=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si0=!(si0);
if(si0){
goto L3;
}
si0=l12;
sj1=l23;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L15:;
si0=l12;
si1=l1;
si2=1245776U;
f662(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l12;
si1=l3;
si2=1245792U;
f662(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l13;
si1=l5;
si2=1245808U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l13;
si1=l16;
si2=1245824U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l11;
si1=l5;
si2=1245840U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l11;
si1=l18;
si2=1245856U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l13;
si1=l8;
si2=1245872U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l13;
si1=l12;
si2=1245888U;
f675(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l12;
si1=l18;
si2=1245888U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l9;
si2=16U;
si1+=si2;
si2=l9;
si3=20U;
si2+=si3;
si3=l9;
si4=24U;
si3+=si4;
si4=1243740U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l13;
si1=l5;
si2=1245904U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l12;
si1=l18;
si2=1245920U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l10;
si1=210U;
si0=si0 > si1;
if(si0){
goto L2;
}
}
L1:;
si0=l5;
si1=l10;
si0-=si1;
l12=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l10;
si1=l5;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l25=si0;
si1=l1;
si2=l12;
si1-=si2;
l21=si1;
si2=l2;
si3=l16;
si2+=si3;
si3=l10;
si4=l4;
si5=l10;
sj6=l6;
f1275(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l1;
si1=l12;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l14=si0;
si0=l21;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l16=si0;
si0=l25;
l12=si0;
L27:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L26;
}
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
if(si0){
goto L27;
}
}
si0=l13;
l16=si0;
L26:;
si0=l16;
si1=l21;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l16;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l25;
si1=l16;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l12=si0;
sj1=0ULL;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=1U;
si0+=si1;
l12=si0;
si1=l21;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si0-=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l16=si0;
si0=l25;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
L28:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l16;
si1=-8U;
si0+=si1;
l16=si0;
if(si0){
goto L28;
}
}
L25:;
si0=l9;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L24:;
si0=l12;
si1=l1;
si2=1245744U;
f662(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l12;
si1=l5;
si2=1245760U;
f675(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l5;
si1=l3;
si2=1245760U;
f666(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l16;
si1=l21;
si2=1254116U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1275(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
U64 l17=0;
U32 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U64 l23=0;
U32 l24=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=176U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+148U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si1=-1U;
si0^=si1;
si1=l3;
si0+=si1;
l8=si0;
if(si0){
goto L7;
}
sj0=0ULL;
l9=sj0;
goto L2;
L7:;
si0=l5;
si1=-2U;
si0&=si1;
l10=si0;
si0=l5;
si1=1U;
si0&=si1;
l11=si0;
si0=0U;
l12=si0;
si0=l2;
l13=si0;
sj0=0ULL;
l9=sj0;
L10:;
{
si0=l12;
si1=l3;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=l12;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l15=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
sj0*=sj1;
l16=sj0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
sj0=0ULL;
l17=sj0;
si0=0U;
l18=si0;
sj0=0ULL;
l19=sj0;
goto L11;
L12:;
sj0=0ULL;
l19=sj0;
si0=0U;
l18=si0;
si0=l4;
l20=si0;
si0=l13;
l21=si0;
sj0=0ULL;
l17=sj0;
L13:;
{
si0=l7;
si1=112U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l21;
sj1=l17;
si2=l21;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l22=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+112U);
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=128U;
si0+=si1;
si1=l20;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l21;
si1=8U;
si0+=si1;
l24=si0;
sj1=0ULL;
sj2=l22;
sj3=l17;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l7;
si3=112U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l23;
sj3=l22;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l22=sj1;
si2=l24;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l17=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+128U);
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l22;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=128U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l23;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
si0=l21;
si1=16U;
si0+=si1;
l21=si0;
si0=l10;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L11:;
si0=l11;
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
si1=96U;
si0+=si1;
si1=l4;
si2=l18;
si3=3U;
si2<<=(si3&31);
l21=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=l21;
si0+=si1;
l21=si0;
sj1=l17;
si2=l21;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l22=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+96U);
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l22;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l7;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l23;
sj2=l22;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
L14:;
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
si1=l1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si1=l14;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l12;
si0-=si1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l15;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
sj1=l17;
sj2=l9;
sj1+=sj2;
l22=sj1;
si2=l21;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=2ULL;
sj1=1ULL;
sj2=l22;
sj3=l17;
si2=sj2 < sj3;
l21=si2;
sj0=si2?sj0:sj1;
si1=l21;
sj1=(U64)(si1);
sj2=l16;
sj3=l22;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l9=sj0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L10;
L15:;
}
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=0U;
si1=l15;
si2=1245672U;
si3=l7;
si4=152U;
si3+=si4;
si4=1248140U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l1;
si1=l1;
si2=1248108U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=0U;
si1=0U;
si2=1248124U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=1U;
si1=l7;
si2=148U;
si1+=si2;
si2=1245668U;
si3=l7;
si4=152U;
si3+=si4;
si4=1248188U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1245709U;
si1=32U;
si2=1248172U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1245680U;
si1=29U;
si2=1248156U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=l3;
si2=1248092U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l8;
si1=l1;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l5;
si1=1U;
si0&=si1;
l15=si0;
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
sj0*=sj1;
l16=sj0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L19;
}
sj0=0ULL;
l17=sj0;
si0=0U;
l21=si0;
sj0=0ULL;
l19=sj0;
goto L18;
L19:;
si0=0U;
l18=si0;
si0=0U;
si1=l5;
si2=-2U;
si1&=si2;
si0-=si1;
l10=si0;
sj0=0ULL;
l19=sj0;
si0=l12;
l21=si0;
si0=l4;
l20=si0;
sj0=0ULL;
l17=sj0;
L20:;
{
si0=l7;
si1=64U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l21;
sj1=l17;
si2=l21;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l22=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+64U);
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=80U;
si0+=si1;
si1=l20;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l21;
si1=8U;
si0+=si1;
l24=si0;
sj1=0ULL;
sj2=l22;
sj3=l17;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l7;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l23;
sj3=l22;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l22=sj1;
si2=l24;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l17=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+80U);
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l22;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l23;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l21;
si1=16U;
si0+=si1;
l21=si0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
si0=l10;
si1=l18;
si2=-2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
si0=0U;
si1=l18;
si0-=si1;
l21=si0;
L18:;
si0=l15;
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
si1=48U;
si0+=si1;
si1=l4;
si2=l21;
si3=3U;
si2<<=(si3&31);
l21=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l21;
si0+=si1;
l21=si0;
sj1=l17;
si2=l21;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l22=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+48U);
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l22;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l7;
si2=56U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l23;
sj2=l22;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
L21:;
si0=l8;
si1=l1;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=0U;
si1=0U;
si2=1248028U;
f663(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
sj1=l9;
sj2=l17;
sj1+=sj2;
si2=l20;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l2=si0;
si0=l1;
si1=l3;
si0-=si1;
si1=l5;
si0+=si1;
l1=si0;
si0=l21;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L17:;
si0=l8;
si1=l3;
si2=1247996U;
f662(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si1=l1;
si2=1248012U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=-1U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=0U;
l12=si0;
si0=l5;
l15=si0;
si0=l2;
l13=si0;
L25:;
{
si0=l5;
si1=l12;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l5;
si1=l12;
si0-=si1;
si1=1U;
si0&=si1;
l14=si0;
si0=l2;
si1=l12;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l11=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l6;
sj0*=sj1;
l16=sj0;
sj0=0ULL;
l17=sj0;
si0=l3;
si1=l12;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l18=si0;
goto L26;
L27:;
si0=l15;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l18=si0;
si0=l4;
l20=si0;
si0=l13;
l21=si0;
sj0=0ULL;
l23=sj0;
L28:;
{
si0=l7;
si1=16U;
si0+=si1;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l21;
sj1=l17;
si2=l21;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l22=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l20;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l21;
si1=8U;
si0+=si1;
l24=si0;
sj1=l23;
sj2=l22;
sj3=l17;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l7;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l9;
sj3=l22;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l22=sj1;
si2=l24;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l17=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l22;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l23;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
si0=l21;
si1=16U;
si0+=si1;
l21=si0;
sj0=0ULL;
l23=sj0;
si0=l10;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
}
L26:;
si0=l14;
si0=!(si0);
if(si0){
goto L29;
}
si0=l7;
si1=l4;
si2=l18;
si3=3U;
si2<<=(si3&31);
l21=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj3=l16;
sj4=l17;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=l21;
si0+=si1;
l21=si0;
sj1=l17;
si2=l21;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L29:;
si0=l12;
si1=l1;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l0;
si1=l8;
si0+=si1;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L25;
}
goto L23;
L30:;
}
si0=l1;
si1=l1;
si2=1248076U;
f663(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=0U;
si1=0U;
si2=1248060U;
f663(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l3;
si1=l1;
si2=1248044U;
f663(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
si1=l2;
si2=l21;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l6;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f1276(rustpythonInstance*i,U64 l0) {
U64 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
sj0=l0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l0;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l0;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l1=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
sj0=l1;
si0=(U32)(sj0);
l2=si0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1246748U;
si1=25U;
si2=1246776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
sj0=2ULL;
sj1=2ULL;
sj2=2ULL;
si3=l2;
si4=1246604U;
si3+=si4;
sj3=i64_load8_u(&i->m0,(U64)si3);
l1=sj3;
sj4=l0;
sj3*=sj4;
sj2-=sj3;
sj3=l1;
sj2*=sj3;
l1=sj2;
sj3=l0;
sj2*=sj3;
sj1-=sj2;
sj2=l1;
sj1*=sj2;
l1=sj1;
sj2=l0;
sj1*=sj2;
sj0-=sj1;
sj1=l1;
sj0*=sj1;
L0:;
return sj0;
}

void f1277(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=160U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l4;
sj1=3ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l3;
si2=-1U;
si1+=si2;
l1=si1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l7=si0;
si0=l0;
si1=l6;
si0+=si1;
l8=si0;
si0=l1;
if(si0){
goto L12;
}
sj0=0ULL;
l4=sj0;
goto L11;
L12:;
si0=l1;
si1=1U;
si0&=si1;
l9=si0;
si0=l3;
si1=2U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=0U;
l6=si0;
sj0=0ULL;
l4=sj0;
goto L13;
L14:;
si0=l1;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l6=si0;
si0=l2;
l1=si0;
si0=l0;
l3=si0;
sj0=0ULL;
l4=sj0;
L15:;
{
si0=l5;
si1=24U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj1=l4;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+24U);
l11=sj2;
sj1-=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=8U;
si0+=si1;
sj1=l12;
si2=l5;
si3=24U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
sj2=l4;
sj3=l11;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1-=sj2;
l4=sj1;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+40U);
l11=sj2;
sj1-=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
si1=l5;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0-=sj1;
sj1=l4;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l4=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l10;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L13:;
si0=l9;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=l6;
si3=3U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l1;
si0+=si1;
sj1=l4;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+8U);
l11=sj2;
sj1-=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0-=sj1;
sj1=l4;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l4=sj0;
L11:;
si0=l8;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6148914691236517205ULL;
sj1*=sj2;
sj2=l4;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L10:;
si0=l5;
sj1=l4;
i64_store(&i->m0,(U64)si0+120U,sj1);
sj0=l4;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
l1=si0;
sj0=l4;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L18;
}
sj0=l4;
sj1=l4;
sj1=I64_CTZ(sj1);
l13=sj1;
sj0>>=(sj1&63);
l14=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l14;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l14;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l4=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
sj0=l4;
si0=(U32)(sj0);
l6=si0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l6;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L18:;
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l4;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l4;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l11=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
sj0=l11;
si0=(U32)(sj0);
l6=si0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l6;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L17:;
sj0=2ULL;
sj1=2ULL;
sj2=2ULL;
sj3=l14;
si4=l6;
si5=1246604U;
si4+=si5;
sj4=i64_load8_u(&i->m0,(U64)si4);
l4=sj4;
sj3*=sj4;
sj2-=sj3;
sj3=l4;
sj2*=sj3;
l4=sj2;
sj3=l14;
sj2*=sj3;
sj1-=sj2;
sj2=l4;
sj1*=sj2;
l4=sj1;
sj2=l14;
sj1*=sj2;
sj0-=sj1;
sj1=l4;
sj0*=sj1;
l15=sj0;
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l3;
si1=l3;
si2=536870911U;
si1&=si2;
l10=si1;
si2=l3;
si3=l10;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
if(si0){
goto L20;
}
sj0=0ULL;
l4=sj0;
goto L19;
L20:;
sj0=0ULL;
sj1=l13;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l16=sj0;
sj0=0ULL;
l4=sj0;
L21:;
{
si0=l0;
sj1=l11;
sj2=l13;
sj1>>=(sj2&63);
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj3=l16;
sj2<<=(sj3&63);
sj1|=sj2;
l12=sj1;
sj2=l4;
sj1-=sj2;
sj2=l15;
sj1*=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=56U;
si0+=si1;
sj1=l17;
sj2=0ULL;
sj3=l14;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l12;
sj2=l4;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L21;
}
}
L19:;
si0=l6;
sj1=l11;
sj2=l13;
sj1>>=(sj2&63);
sj2=l4;
sj1-=sj2;
sj2=l15;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L16:;
si0=l0;
sj1=2ULL;
sj2=2ULL;
sj3=2ULL;
si4=l6;
si5=1246604U;
si4+=si5;
sj4=i64_load8_u(&i->m0,(U64)si4);
l11=sj4;
sj5=l4;
sj4*=sj5;
sj3-=sj4;
sj4=l11;
sj3*=sj4;
l11=sj3;
sj4=l4;
sj3*=sj4;
sj2-=sj3;
sj3=l11;
sj2*=sj3;
l11=sj2;
sj3=l4;
sj2*=sj3;
sj1-=sj2;
sj2=l11;
sj1*=sj2;
l11=sj1;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
sj1*=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=536870911U;
si0+=si1;
l3=si0;
si1=536870911U;
si0&=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=1U;
si0&=si1;
l8=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
l10=si0;
sj0=0ULL;
l17=sj0;
goto L22;
L23:;
si0=l2;
si1=16U;
si0+=si1;
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
l6=si0;
si0=l10;
si1=l8;
si0-=si1;
l7=si0;
si0=0U;
l2=si0;
si0=0U;
l10=si0;
L24:;
{
si0=l5;
si1=104U;
si0+=si1;
sj1=l12;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=-8U;
si0+=si1;
si1=l3;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
si2=l5;
si3=104U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l2;
sj3=(U64)(si3);
sj4=1ULL;
sj3&=sj4;
sj2+=sj3;
l14=sj2;
sj1-=sj2;
sj2=l11;
sj1*=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
sj1=l17;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l5;
si3=88U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l12;
sj4=l14;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
l14=sj2;
sj1-=sj2;
sj2=l11;
sj1*=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l14;
si0=sj0 < sj1;
l2=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l7;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L24;
}
}
sj0=l17;
sj1=l14;
si0=sj0 < sj1;
sj0=(U64)(si0);
l17=sj0;
L22:;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=72U;
si0+=si1;
sj1=l12;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l1;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
si3=l5;
si4=80U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
sj2=l11;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l5;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
si0=l3;
si1=l1;
si2=1246872U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1244008U;
si1=43U;
si2=1246888U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
si1=l5;
si2=120U;
si1+=si2;
si2=1245672U;
si3=l5;
si4=136U;
si3+=si4;
si4=1246824U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l3;
si1=l1;
si2=1246792U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
si1=l5;
si2=132U;
si1+=si2;
si2=1245668U;
si3=l5;
si4=136U;
si3+=si4;
si4=1246808U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1246748U;
si1=25U;
si2=1246776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1278(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
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
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
sj0=l3;
sj1=3ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L9;
}
si0=l6;
l7=si0;
goto L8;
L9:;
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
goto L2;
L10:;
si0=l5;
si1=1U;
si0=f15273(i,si0,si1);
l7=si0;
L8:;
si0=l7;
if(si0){
goto L2;
}
L7:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1244008U;
si1=43U;
si2=1246888U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
if(si0){
goto L12;
}
si0=8U;
l7=si0;
goto L11;
L12:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L14;
}
si0=l6;
l7=si0;
goto L13;
L14:;
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
goto L11;
L15:;
si0=l5;
si1=1U;
si0=f15273(i,si0,si1);
l7=si0;
L13:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
L11:;
si0=l7;
si1=l2;
si2=l1;
si3=l2;
sj4=l3;
f1277(i,si0,si1,si2,si3,sj4);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
si2=-1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l8=si0;
si0=l7;
si1=l6;
si0+=si1;
l9=si0;
si0=l5;
if(si0){
goto L17;
}
sj0=0ULL;
l3=sj0;
goto L16;
L17:;
si0=l5;
si1=1U;
si0&=si1;
l10=si0;
si0=l2;
si1=2U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
l11=si0;
sj0=0ULL;
l3=sj0;
goto L18;
L19:;
si0=l5;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l11=si0;
si0=l1;
l5=si0;
si0=l7;
l6=si0;
sj0=0ULL;
l3=sj0;
L20:;
{
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
sj1=l3;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+16U);
l13=sj2;
sj1-=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=8U;
si0+=si1;
sj1=l14;
si2=l4;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
sj2=l3;
sj3=l13;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1-=sj2;
l3=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+32U);
l13=sj2;
sj1-=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0-=sj1;
sj1=l3;
sj2=l13;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l3=sj0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l12;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
L18:;
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=l1;
si2=l11;
si3=3U;
si2<<=(si3&31);
l5=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
si1=l5;
si0+=si1;
sj1=l3;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0-=sj1;
sj1=l3;
sj2=l13;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l3=sj0;
L16:;
si0=l9;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6148914691236517205ULL;
sj1*=sj2;
sj2=l3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1279(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
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
U64 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=l2;
sj1=3ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l4;
if(si0){
goto L12;
}
sj0=0ULL;
l2=sj0;
goto L11;
L12:;
si0=l1;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l4=si0;
si1=1U;
si0+=si1;
l6=si0;
si1=1U;
si0&=si1;
l1=si0;
si0=l4;
if(si0){
goto L14;
}
sj0=0ULL;
l2=sj0;
goto L13;
L14:;
si0=l6;
si1=1073741822U;
si0&=si1;
l4=si0;
sj0=0ULL;
l2=sj0;
L15:;
{
si0=l3;
si1=24U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
sj1=l2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+24U);
l7=sj2;
sj1-=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
l6=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
sj1=l8;
si2=l3;
si3=24U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
sj2=l2;
sj3=l7;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1-=sj2;
l2=sj1;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+40U);
l7=sj2;
sj1-=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
si1=l3;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0-=sj1;
sj1=l2;
sj2=l7;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
if(si0){
goto L15;
}
}
L13:;
si0=l1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
sj1=l2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+8U);
l7=sj2;
sj1-=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0-=sj1;
sj1=l2;
sj2=l7;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
L11:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6148914691236517205ULL;
sj1*=sj2;
sj2=l2;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L10:;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0+120U,sj1);
sj0=l2;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
sj0=l2;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L16;
}
sj0=l2;
sj1=l2;
sj1=I64_CTZ(sj1);
l9=sj1;
sj0>>=(sj1&63);
l10=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l10;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l10;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l2=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
sj0=l2;
si0=(U32)(sj0);
l4=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L3;
}
sj0=2ULL;
sj1=2ULL;
sj2=2ULL;
sj3=l10;
si4=l4;
si5=1246604U;
si4+=si5;
sj4=i64_load8_u(&i->m0,(U64)si4);
l2=sj4;
sj3*=sj4;
sj2-=sj3;
sj3=l2;
sj2*=sj3;
l2=sj2;
sj3=l10;
sj2*=sj3;
sj1-=sj2;
sj2=l2;
sj1*=sj2;
l2=sj1;
sj2=l10;
sj1*=sj2;
sj0-=sj1;
sj1=l2;
sj0*=sj1;
l11=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
sj0=0ULL;
l2=sj0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l1;
si1=-1U;
si0+=si1;
l6=si0;
sj0=0ULL;
sj1=l9;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l12=sj0;
si0=l0;
l4=si0;
sj0=0ULL;
l2=sj0;
L18:;
{
si0=l4;
sj1=l7;
sj2=l9;
sj1>>=(sj2&63);
si2=l4;
si3=8U;
si2+=si3;
l5=si2;
sj2=i64_load(&i->m0,(U64)si2);
l7=sj2;
sj3=l12;
sj2<<=(sj3&63);
sj1|=sj2;
l8=sj1;
sj2=l2;
sj1-=sj2;
sj2=l11;
sj1*=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=l13;
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l8;
sj2=l2;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l2=sj0;
si0=l5;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
sj1=l7;
sj2=l9;
sj1>>=(sj2&63);
sj2=l2;
sj1-=sj2;
sj2=l11;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L9;
L16:;
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l2;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l2;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l7=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
sj0=l7;
si0=(U32)(sj0);
l4=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
sj1=2ULL;
sj2=2ULL;
sj3=2ULL;
si4=l4;
si5=1246604U;
si4+=si5;
sj4=i64_load8_u(&i->m0,(U64)si4);
l7=sj4;
sj5=l2;
sj4*=sj5;
sj3-=sj4;
sj4=l7;
sj3*=sj4;
l7=sj3;
sj4=l2;
sj3*=sj4;
sj2-=sj3;
sj3=l7;
sj2*=sj3;
l7=sj2;
sj3=l2;
sj2*=sj3;
sj1-=sj2;
sj2=l7;
sj1*=sj2;
l7=sj1;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
sj1*=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l1;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l4=si0;
si1=1U;
si0+=si1;
l6=si0;
si1=1U;
si0&=si1;
l5=si0;
si0=l4;
if(si0){
goto L20;
}
sj0=0ULL;
l13=sj0;
goto L19;
L20:;
si0=l6;
si1=1073741822U;
si0&=si1;
l4=si0;
si0=0U;
l6=si0;
L21:;
{
si0=l3;
si1=104U;
si0+=si1;
sj1=l8;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
si2=l3;
si3=104U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si3=l6;
sj3=(U64)(si3);
sj4=1ULL;
sj3&=sj4;
sj2+=sj3;
l10=sj2;
sj1-=sj2;
sj2=l7;
sj1*=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=88U;
si0+=si1;
sj1=l13;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=8U;
si0+=si1;
l6=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l3;
si3=88U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l8;
sj4=l10;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
l10=sj2;
sj1-=sj2;
sj2=l7;
sj1*=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l10;
si0=sj0 < sj1;
l6=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
if(si0){
goto L21;
}
}
sj0=l13;
sj1=l10;
si0=sj0 < sj1;
sj0=(U64)(si0);
l13=sj0;
L19:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=72U;
si0+=si1;
sj1=l8;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l13;
si3=l3;
si4=80U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
sj2=l7;
sj1*=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L9:;
si0=l3;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
si0=1244008U;
si1=43U;
si2=1246904U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
si1=l3;
si2=120U;
si1+=si2;
si2=1245672U;
si3=l3;
si4=136U;
si3+=si4;
si4=1246856U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
si1=l3;
si2=132U;
si1+=si2;
si2=1245668U;
si3=l3;
si4=136U;
si3+=si4;
si4=1246840U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1246748U;
si1=25U;
si2=1246776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1280(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj6;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
l7=si0;
si0=l3;
si1=2211U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
l7=si0;
L2:;
{
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l8;
f1194(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
L3:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l6;
si1=12U;
si0+=si1;
si1=1U;
si2=3U;
f1307(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=2210U;
si0=si0 > si1;
if(si0){
goto L2;
}
}
L1:;
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l7;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si1=0U;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
l9=si0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l10;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l10;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l11=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L21;
}
sj0=l11;
si0=(U32)(sj0);
l8=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L19;
}
sj0=2ULL;
sj1=2ULL;
sj2=l10;
si3=l8;
si4=1246604U;
si3+=si4;
sj3=i64_load8_u(&i->m0,(U64)si3);
l11=sj3;
sj2*=sj3;
sj1-=sj2;
sj2=l11;
sj1*=sj2;
l11=sj1;
sj2=l10;
sj1*=sj2;
sj0-=sj1;
sj1=l11;
sj0*=sj1;
l11=sj0;
sj1=l10;
sj0*=sj1;
sj1=-2ULL;
sj0+=sj1;
sj1=l11;
sj0*=sj1;
l10=sj0;
si0=l7;
si1=211U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l0;
si1=l1;
si2=l9;
si3=l7;
si4=l2;
si5=l7;
sj6=l10;
f1281(i,si0,si1,si2,si3,si4,si5,sj6);
goto L25;
L26:;
si0=l0;
si1=l1;
si2=l9;
si3=l7;
si4=l2;
si5=l7;
sj6=l10;
f1275(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l12=si0;
si0=0U;
l7=si0;
si0=l0;
l8=si0;
L28:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
if(si0){
goto L28;
}
}
si0=l12;
l7=si0;
L27:;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l8=si0;
sj1=0ULL;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
si0+=si1;
l8=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l4;
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
L29:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L29;
}
}
L25:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0+=si1;
l14=si0;
si0=l9;
si1=8U;
si0+=si1;
l15=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l16=si0;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
L30:;
{
si0=l4;
l12=si0;
si0=l17;
si1=-4U;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l7=si0;
si0=l4;
si1=13U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l4;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l4;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l4;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l10=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l8=si0;
if(si0){
goto L33;
}
si0=0U;
l7=si0;
goto L31;
L33:;
si0=l8;
sj1=l10;
si1=(U32)(sj1);
l18=si1;
si0<<=(si1&31);
l7=si0;
si1=l18;
si0>>=(si1&31);
si1=l8;
si0=si0 != si1;
if(si0){
goto L17;
}
L32:;
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L16;
}
L31:;
si0=l12;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l4;
si1=l3;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l9;
si1=l7;
si2=l7;
si3=l2;
si4=l4;
si5=l0;
si6=l12;
si7=l9;
si8=l7;
si9=3U;
si8<<=(si9&31);
l18=si8;
si7+=si8;
l19=si7;
si8=l5;
si9=l7;
si8-=si9;
l20=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l4;
si1=l7;
si0-=si1;
si1=l12;
si0+=si1;
l21=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l20;
si1=l21;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l21;
si0=!(si0);
if(si0){
goto L34;
}
si0=l7;
si1=l5;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l19;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l8=si0;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L35;
}
si0=l7;
si1=-1U;
si0^=si1;
si1=l12;
si2=l4;
si1+=si2;
si0+=si1;
l22=si0;
si0=l14;
si1=l7;
si0-=si1;
l23=si0;
si0=0U;
l8=si0;
si0=l15;
l7=si0;
L36:;
{
si0=l22;
si1=l8;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l23;
si1=l8;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l7;
si1=l18;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L36;
}
}
L35:;
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
si0=l8;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l19;
si1=l7;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l9;
si2=l8;
si1+=si2;
si2=l21;
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
L34:;
si0=l4;
si1=l12;
si0-=si1;
l8=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=l12;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
l22=si0;
si1=l1;
si2=l12;
si1-=si2;
l7=si1;
si2=l0;
si3=l8;
si4=l9;
si5=l18;
si4+=si5;
si5=l8;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l4;
si1=l12;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=l18;
si0-=si1;
l7=si0;
si0=l22;
l8=si0;
L38:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L38;
}
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L37;
}
si0=l13;
si1=l18;
si0+=si1;
l8=si0;
si0=l12;
si1=l18;
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
L39:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L37;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L39;
}
}
L37:;
si0=l16;
si1=l17;
si0=si0 != si1;
if(si0){
goto L30;
}
goto L5;
}
L24:;
si0=l7;
si1=l5;
si2=1246920U;
f666(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l7;
si1=l3;
si2=1246936U;
f666(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=0U;
si1=0U;
si2=1246952U;
f663(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1246748U;
si1=25U;
si2=1246776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l8;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l7;
si1=l1;
si2=1254116U;
f663(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1244051U;
si1=35U;
si2=1246984U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1244051U;
si1=35U;
si2=1247000U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l4;
si1=l3;
si2=1247016U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l21;
si1=l7;
si2=1247032U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1254416U;
si1=34U;
si2=1254452U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l20;
si1=l20;
si2=1254384U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l7;
si1=l21;
si2=1254400U;
f675(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l8;
si1=l12;
si2=1247048U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l12;
si1=l4;
si2=1247064U;
f675(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si1=l5;
si2=1247064U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l8;
si1=l7;
si2=1247080U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L40;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
f15271(i,si0);
L40:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=0U;
si1=0U;
si2=1246968U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1281(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj6;
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l3;
si1=211U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L17;
}
si0=l8;
l9=si0;
goto L16;
L17:;
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l9=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L15;
L18:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l9=si0;
L16:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
L15:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l6;
si7=l9;
si8=l3;
f1274(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
si0=l9;
f15271(i,si0);
goto L0;
L14:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l6;
f1275(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l7=si0;
si0=l0;
l9=si0;
L21:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L20;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L21;
}
}
si0=l8;
l7=si0;
L20:;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l9=si0;
sj1=0ULL;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
si0+=si1;
l9=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l5;
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L22:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L22;
}
}
L19:;
goto L0;
L13:;
si0=l3;
si1=l5;
si0=REM_U(si0,si1);
l8=si0;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l9;
if(si0){
goto L25;
}
si0=l7;
l10=si0;
goto L24;
L25:;
si0=l7;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l7;
si1=l9;
si0=f15277(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l10;
si1=0U;
si2=l9;
si0=f15392(i,si0,si1,si2);
goto L23;
L26:;
si0=l9;
si1=1U;
si0=f15273(i,si0,si1);
l10=si0;
L24:;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
L23:;
si0=l8;
si1=l5;
si2=l8;
si0=si2?si0:si1;
l9=si0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l9;
sj6=l6;
si7=l10;
si8=l5;
si0=f1272(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
goto L27;
L28:;
si0=l9;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si2=l2;
si3=l7;
si4=l4;
si5=l9;
sj6=l6;
si0=f1273(i,si0,si1,si2,si3,si4,si5,sj6);
l7=si0;
L27:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l9;
si0-=si1;
l8=si0;
si1=l9;
si0=si0 >= si1;
l11=si0;
if(si0){
goto L30;
}
si0=l9;
si1=l8;
si0=f1359(i,si0,si1);
l12=si0;
goto L29;
L30:;
si0=l8;
si1=l9;
si0=f1359(i,si0,si1);
l12=si0;
L29:;
si0=l12;
if(si0){
goto L32;
}
si0=8U;
l13=si0;
goto L31;
L32:;
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l14;
if(si0){
goto L34;
}
si0=l15;
l13=si0;
goto L33;
L34:;
si0=l15;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l15;
si1=l14;
si0=f15277(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l13;
si1=0U;
si2=l14;
si0=f15392(i,si0,si1,si2);
goto L31;
L35:;
si0=l14;
si1=1U;
si0=f15273(i,si0,si1);
l13=si0;
L33:;
si0=l13;
si0=!(si0);
if(si0){
goto L4;
}
L31:;
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l11;
if(si0){
goto L37;
}
si0=l10;
si1=l5;
si2=l0;
si3=l9;
si4=l14;
si5=l8;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L36;
L37:;
si0=l10;
si1=l5;
si2=l14;
si3=l8;
si4=l0;
si5=l9;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L36:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si1=l9;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l8;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
L39:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L38;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l16;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
goto L39;
}
L38:;
si0=1248316U;
si1=84U;
si2=1248400U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1247868U;
si1=28U;
si2=1248448U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1245709U;
si1=32U;
si2=1248432U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1245680U;
si1=29U;
si2=1248416U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l7;
si1=l1;
si2=1254116U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l7;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l7;
si1=l3;
si2=1248204U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l15;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l9;
si1=l1;
si2=1248220U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l9;
si1=l3;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l3;
si1=l9;
si0-=si1;
l17=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l5;
si1=1U;
si0&=si1;
l19=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=0U;
l14=si0;
si0=0U;
l11=si0;
goto L41;
L43:;
si0=1253593U;
si1=35U;
si2=1254656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l5;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l14=si0;
si0=l10;
l8=si0;
si0=l18;
l7=si0;
si0=0U;
l11=si0;
L44:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=l16;
sj3=l21;
si2=sj2 <= sj3;
sj3=l16;
sj4=l21;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
si3=l8;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l16;
si0=sj0 <= sj1;
sj1=l22;
sj2=l16;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l20;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L44;
}
}
L41:;
si0=l19;
si0=!(si0);
if(si0){
goto L45;
}
si0=l18;
si1=l11;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l14;
sj2=(U64)(si2);
si3=l10;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l21;
si0=sj0 <= sj1;
sj1=l16;
sj2=l21;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
L45:;
si0=l17;
si1=l5;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l14;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L46;
}
si0=l18;
si1=l5;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L46;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0-=si1;
si1=l14;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=l14;
si0+=si1;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
L47:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L46;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L47;
}
}
L46:;
si0=0U;
l7=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l13;
f15271(i,si0);
goto L1;
L40:;
si0=l9;
si1=l3;
si2=1248236U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=l3;
si2=l5;
si1-=si2;
l20=si1;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=l5;
si1+=si2;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l8;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
L51:;
{
si0=l7;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L52;
}
si0=l9;
si1=l5;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L53;
}
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L52;
}
si0=l14;
l8=si0;
si0=l11;
l7=si0;
L54:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L52;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l16;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L52;
}
goto L54;
}
L53:;
si0=l7;
si1=l3;
si2=1248268U;
f662(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l9;
si1=l3;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l14;
si1=l15;
si0-=si1;
l14=si0;
si0=l11;
si1=l15;
si0+=si1;
l11=si0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l1;
si2=l9;
si1-=si2;
si2=l2;
si3=l7;
si2+=si3;
si3=l3;
si4=l9;
si3-=si4;
si4=l4;
si5=l5;
sj6=l6;
si7=l10;
si8=l5;
si0=f1272(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
si0=l9;
si1=l5;
si0+=si1;
l8=si0;
l9=si0;
si0=l8;
si1=l20;
si0=si0 != si1;
if(si0){
goto L51;
}
}
L50:;
si0=l20;
si1=l1;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l1;
si2=l20;
si1-=si2;
si2=l2;
si3=l9;
si2+=si3;
si3=l5;
si4=l4;
si5=l5;
sj6=l6;
si7=l10;
si8=l5;
f1274(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
si0=l10;
f15271(i,si0);
goto L0;
L55:;
si0=l20;
si1=l1;
si2=1248252U;
f662(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l9;
si1=l1;
si2=1248284U;
f662(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l9;
si1=l3;
si2=1248300U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1282(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj6;
si0=l5;
si1=2U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l3;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L20;
}
si0=l8;
l9=si0;
goto L19;
L20:;
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l9=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L18;
L21:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l9=si0;
L19:;
si0=l9;
si0=!(si0);
if(si0){
goto L15;
}
L18:;
si0=l3;
si1=l5;
si0-=si1;
l10=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l10;
si1=l5;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l10;
si1=211U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l0;
si1=l10;
si2=l2;
si3=l3;
si4=l4;
si5=l10;
sj6=l6;
si7=l9;
si8=l5;
si0=f1272(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
goto L23;
L24:;
si0=l10;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l0;
si1=l10;
si2=l2;
si3=l7;
si4=l4;
si5=l10;
sj6=l6;
si0=f1273(i,si0,si1,si2,si3,si4,si5,sj6);
l7=si0;
L23:;
si0=0U;
l1=si0;
si0=l10;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l10;
si0-=si1;
l8=si0;
si1=l10;
si0=si0 >= si1;
l11=si0;
if(si0){
goto L26;
}
si0=l10;
si1=l8;
si0=f1359(i,si0,si1);
l12=si0;
goto L25;
L26:;
si0=l8;
si1=l10;
si0=f1359(i,si0,si1);
l12=si0;
L25:;
si0=l12;
if(si0){
goto L28;
}
si0=8U;
l13=si0;
goto L27;
L28:;
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l1;
if(si0){
goto L30;
}
si0=l14;
l13=si0;
goto L29;
L30:;
si0=l14;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l14;
si1=l1;
si0=f15277(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l13;
si1=0U;
si2=l1;
si0=f15392(i,si0,si1,si2);
goto L27;
L31:;
si0=l1;
si1=1U;
si0=f15273(i,si0,si1);
l13=si0;
L29:;
si0=l13;
si0=!(si0);
if(si0){
goto L11;
}
L27:;
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l11;
if(si0){
goto L33;
}
si0=l9;
si1=l5;
si2=l0;
si3=l10;
si4=l1;
si5=l8;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L32;
L33:;
si0=l9;
si1=l5;
si2=l1;
si3=l8;
si4=l0;
si5=l10;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L32:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l9;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l5;
si1=4U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
L35:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L34;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l15;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
goto L35;
}
L34:;
si0=1247504U;
si1=74U;
si2=1247580U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l10;
si1=l5;
si0=REM_U(si0,si1);
l8=si0;
si1=l5;
si2=l8;
si0=si2?si0:si1;
l13=si0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l0;
si1=l10;
si2=l2;
si3=l3;
si4=l4;
si5=l13;
sj6=l6;
si7=l9;
si8=l5;
si0=f1272(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
goto L36;
L37:;
si0=l13;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=l10;
si2=l2;
si3=l7;
si4=l4;
si5=l13;
sj6=l6;
si0=f1273(i,si0,si1,si2,si3,si4,si5,sj6);
l7=si0;
L36:;
si0=l8;
if(si0){
goto L38;
}
si0=0U;
l16=si0;
goto L5;
L38:;
si0=l5;
si1=l13;
si0-=si1;
l8=si0;
si1=l13;
si0=si0 >= si1;
l11=si0;
if(si0){
goto L40;
}
si0=l13;
si1=l8;
si0=f1359(i,si0,si1);
l17=si0;
goto L39;
L40:;
si0=l8;
si1=l13;
si0=f1359(i,si0,si1);
l17=si0;
L39:;
si0=l17;
if(si0){
goto L42;
}
si0=8U;
l18=si0;
goto L41;
L42:;
si0=l17;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l17;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l17;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l1;
if(si0){
goto L44;
}
si0=l14;
l18=si0;
goto L43;
L44:;
si0=l14;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L45;
}
si0=l14;
si1=l1;
si0=f15277(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l18;
si1=0U;
si2=l1;
si0=f15392(i,si0,si1,si2);
goto L41;
L45:;
si0=l1;
si1=1U;
si0=f15273(i,si0,si1);
l18=si0;
L43:;
si0=l18;
si0=!(si0);
if(si0){
goto L8;
}
L41:;
si0=l10;
si1=l13;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l11;
if(si0){
goto L47;
}
si0=l9;
si1=l5;
si2=l0;
si3=l13;
si4=l1;
si5=l8;
si6=l18;
si7=l17;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L46;
L47:;
si0=l9;
si1=l5;
si2=l1;
si3=l8;
si4=l0;
si5=l13;
si6=l18;
si7=l17;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L46:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si1=l13;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l8;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
L49:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L48;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l15;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
goto L49;
}
L48:;
si0=1247736U;
si1=84U;
si2=1247820U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1247868U;
si1=28U;
si2=1247896U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1247408U;
si1=31U;
si2=1247852U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=l10;
si1=l1;
si2=1247472U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1245680U;
si1=29U;
si2=1247836U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l7;
si1=l3;
si2=1244412U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l14;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=l7;
si1=l3;
si2=1244412U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
f53(i);
UNREACHABLE;
L8:;
si0=l14;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l13;
si1=l10;
si2=1247596U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l3;
si1=l13;
si0-=si1;
l16=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l2;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l5;
si1=1U;
si0&=si1;
l20=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=0U;
l1=si0;
si0=0U;
l11=si0;
goto L51;
L53:;
si0=1253593U;
si1=35U;
si2=1254656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l5;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l1=si0;
si0=l9;
l8=si0;
si0=l19;
l7=si0;
si0=0U;
l11=si0;
L54:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l1;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=l15;
sj3=l21;
si2=sj2 <= sj3;
sj3=l15;
sj4=l21;
si3=sj3 < sj4;
si4=l1;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l1=si2;
sj2=(U64)(si2);
si3=l8;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l15;
si0=sj0 <= sj1;
sj1=l22;
sj2=l15;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l12;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L54;
}
}
L51:;
si0=l20;
si0=!(si0);
if(si0){
goto L55;
}
si0=l19;
si1=l11;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l1;
sj2=(U64)(si2);
si3=l9;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l21;
si0=sj0 <= sj1;
sj1=l15;
sj2=l21;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
L55:;
si0=l16;
si1=l5;
si0=si0 == si1;
l7=si0;
si1=l1;
si0&=si1;
l16=si0;
si0=l7;
if(si0){
goto L56;
}
si0=l1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L56;
}
si0=l19;
si1=l5;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l16=si0;
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L56;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l13;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=l8;
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=l8;
si0+=si1;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L57:;
{
si0=l7;
si0=!(si0);
l16=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L56;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L57;
}
}
L56:;
si0=0U;
l7=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L5;
}
si0=l18;
f15271(i,si0);
goto L5;
L50:;
si0=l13;
si1=l3;
si2=1247612U;
f662(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l10;
si1=l13;
si0-=si1;
l1=si0;
if(si0){
goto L59;
}
si0=l16;
l8=si0;
goto L58;
L59:;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l13;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l17=si0;
si0=l8;
si1=l12;
si0+=si1;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l18=si0;
L60:;
{
si0=l10;
si1=l1;
si0-=si1;
l14=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=l3;
si1=l14;
si0-=si1;
l11=si0;
si0=l2;
si1=l14;
si2=3U;
si1<<=(si2&31);
l19=si1;
si0+=si1;
l13=si0;
si0=l7;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L65;
}
si0=l11;
si1=l5;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=l11;
si1=l5;
si0=si0 == si1;
if(si0){
goto L64;
}
si0=l13;
si1=l12;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L65;
}
si0=l17;
l8=si0;
si0=l18;
l7=si0;
L66:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L64;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L66;
}
}
L65:;
si0=l16;
l8=si0;
goto L61;
L64:;
si0=1U;
l8=si0;
si0=l16;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L61;
}
si0=1247628U;
si1=25U;
si2=1247720U;
f673(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l14;
si1=l3;
si2=1247672U;
f662(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l5;
si1=l11;
si2=1247688U;
f662(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l10;
si1=l1;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l17;
si1=l12;
si0-=si1;
l17=si0;
si0=l18;
si1=l12;
si0+=si1;
l18=si0;
si0=l0;
si1=l19;
si0+=si1;
si1=l1;
si2=l13;
si3=l11;
si4=l4;
si5=l5;
sj6=l6;
si7=l9;
si8=l5;
si0=f1272(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
si0=l8;
l16=si0;
si0=l1;
si1=l5;
si0-=si1;
l11=si0;
l1=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L58;
}
goto L60;
L67:;
}
si0=l14;
si1=l10;
si2=1247704U;
f662(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l7;
si1=l8;
si2=1U;
si1&=si2;
l5=si1;
si0|=si1;
si1=0U;
si0=si0 != si1;
l8=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=1247628U;
si1=25U;
si2=1247656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l5;
si1=1U;
si0&=si1;
l3=si0;
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L69;
}
si0=0U;
l1=si0;
si0=0U;
l5=si0;
goto L68;
L69:;
si0=l5;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l1=si0;
si0=l9;
l8=si0;
si0=l10;
l7=si0;
si0=0U;
l5=si0;
L70:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l1;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=l15;
sj3=l21;
si2=sj2 <= sj3;
sj3=l15;
sj4=l21;
si3=sj3 < sj4;
si4=l1;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l1=si2;
sj2=(U64)(si2);
si3=l8;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l15;
si0=sj0 <= sj1;
sj1=l22;
sj2=l15;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l14;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
}
L68:;
si0=l3;
si0=!(si0);
if(si0){
goto L71;
}
si0=l10;
si1=l5;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l1;
sj2=(U64)(si2);
si3=l9;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l21;
si0=sj0 <= sj1;
sj1=l15;
sj2=l21;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
L71:;
si0=0U;
l7=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L3;
}
si0=l13;
f15271(i,si0);
L3:;
si0=l7;
si1=l1;
si0|=si1;
l8=si0;
L2:;
si0=l9;
f15271(i,si0);
si0=l8;
si1=1U;
si0&=si1;
goto L0;
L1:;
si0=l10;
si1=l3;
si2=1247488U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1283(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2,sj3;
si0=l0;
si1=l1;
si0-=si1;
l0=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si2=1U;
si1>>=(si2&31);
si0-=si1;
l0=si0;
goto L1;
L2:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si1=l0;
si2=l1;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L3:;
si0=1244240U;
si1=25U;
si2=1247912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=31U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
l2=si0;
si0=l1;
si1=13U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l1;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l1;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l3=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l4=si0;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L9;
L10:;
si0=l4;
sj1=l3;
si1=(U32)(sj1);
l5=si1;
si0<<=(si1&31);
l2=si0;
si1=l5;
si0>>=(si1&31);
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
L9:;
si0=l2;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=4U;
si0+=si1;
l4=si0;
goto L7;
L11:;
si0=l4;
si1=l0;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l2;
si1=l4;
si0+=si1;
si1=4U;
si0+=si1;
l4=si0;
goto L7;
L12:;
si0=l2;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l4=si0;
goto L7;
L8:;
si0=l0;
si1=l1;
si0+=si1;
l2=si0;
si0=0U;
l4=si0;
si0=l0;
l1=si0;
si0=l0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L6;
}
L7:;
si0=l0;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l0;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l0;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l3=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l5=si0;
if(si0){
goto L13;
}
si0=0U;
l1=si0;
goto L6;
L13:;
si0=l5;
sj1=l3;
si1=(U32)(sj1);
l6=si1;
si0<<=(si1&31);
l1=si0;
si1=l6;
si0>>=(si1&31);
si1=l5;
si0=si0 != si1;
if(si0){
goto L4;
}
L6:;
si0=l0;
si1=1U;
si2=3U;
si0=f1303(i,si0,si1,si2);
l6=si0;
si0=l1;
si1=1U;
si0>>=(si1&31);
l5=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
goto L14;
L15:;
si0=l5;
si1=l6;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
si1=l5;
si0+=si1;
si1=4U;
si0+=si1;
l5=si0;
goto L14;
L16:;
si0=l1;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l5=si0;
L14:;
si0=l4;
si1=l2;
si0+=si1;
l2=si0;
si1=l5;
si2=l1;
si1+=si2;
l1=si1;
si2=l2;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l0;
si0+=si1;
goto L0;
L5:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1284(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U64 l28=0;
U64 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U64 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l7;
si1=2U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l7;
si1=2U;
si0+=si1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l5;
si1=l7;
si0-=si1;
l11=si0;
si0=l7;
si1=1U;
si0<<=(si1&31);
si1=l5;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l11;
si1=l11;
si2=1U;
si1>>=(si2&31);
l12=si1;
si0-=si1;
l13=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l8;
si1=l13;
si2=l6;
si3=l13;
si4=l8;
si5=l13;
si6=3U;
si5<<=(si6&31);
l14=si5;
si4+=si5;
l15=si4;
si5=l9;
si6=l13;
si5-=si6;
l16=si5;
f1280(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l5;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l0;
si1=l13;
si2=l4;
si3=l13;
si4=l8;
si5=l13;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=31U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l7;
l17=si0;
si0=l7;
si1=13U;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l7;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l7;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l7;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l18=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l1=si0;
if(si0){
goto L50;
}
si0=0U;
l17=si0;
goto L48;
L50:;
si0=l1;
sj1=l18;
si1=(U32)(sj1);
l3=si1;
si0<<=(si1&31);
l17=si0;
si1=l3;
si0>>=(si1&31);
si1=l1;
si0=si0 != si1;
if(si0){
goto L36;
}
L49:;
si0=l16;
si1=l17;
si0=si0 < si1;
if(si0){
goto L37;
}
L48:;
si0=l15;
si1=l17;
si2=l17;
si3=l6;
si4=l7;
si5=l0;
si6=l13;
si7=l15;
si8=l17;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l19=si7;
si8=l16;
si9=l17;
si8-=si9;
l1=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l13;
si1=l7;
si0+=si1;
l20=si0;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l20;
si1=l17;
si0-=si1;
l21=si0;
si1=l17;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l21;
si1=l5;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l21;
si1=l1;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l20;
si1=l17;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l17;
l20=si0;
goto L5;
L47:;
si0=l7;
si1=l13;
si0=f1359(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L42;
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
l22=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l17=si0;
si0=l22;
if(si0){
goto L53;
}
si0=l17;
l3=si0;
goto L52;
L53:;
si0=l17;
si1=l22;
si0=si0 <= si1;
if(si0){
goto L54;
}
si0=l17;
si1=l22;
si0=f15277(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l3;
si1=0U;
si2=l22;
si0=f15392(i,si0,si1,si2);
goto L7;
L54:;
si0=l22;
si1=1U;
si0=f15273(i,si0,si1);
l3=si0;
L52:;
si0=l3;
if(si0){
goto L7;
}
L51:;
si0=l17;
si1=l22;
f52(i,si0,si1);
UNREACHABLE;
L46:;
si0=l21;
si1=1U;
si0&=si1;
l23=si0;
si0=l17;
si1=-1U;
si0^=si1;
si1=l5;
si0+=si1;
si1=l12;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=0U;
l22=si0;
si0=0U;
l1=si0;
goto L43;
L45:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l17;
si1=3U;
si0<<=(si1&31);
l24=si0;
si0=0U;
l25=si0;
si0=0U;
si1=l21;
si2=-2U;
si1&=si2;
si0-=si1;
l26=si0;
si0=l15;
l1=si0;
si0=l4;
l3=si0;
si0=0U;
l22=si0;
L55:;
{
si0=l1;
si1=l24;
si0+=si1;
l27=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l22;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l18;
sj3=l28;
si2=sj2 <= sj3;
sj3=l18;
sj4=l28;
si3=sj3 < sj4;
si4=l22;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l22=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l18;
si0=sj0 <= sj1;
sj1=l29;
sj2=l18;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l26;
si1=l25;
si2=-2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L55;
}
}
si0=0U;
si1=l25;
si0-=si1;
l1=si0;
L43:;
si0=l23;
si0=!(si0);
if(si0){
goto L56;
}
si0=l19;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l15;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l22;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
L56:;
si0=l22;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l16;
si1=l21;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l16;
si1=l21;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l15;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l12;
si1=4U;
si0<<=(si1&31);
l1=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l17;
si2=l7;
si1+=si2;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
si1=l5;
si2=4U;
si1<<=(si2&31);
l17=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l17;
si1=l22;
si0-=si1;
si1=l1;
si0-=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L58:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L57;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l18;
si0=!(sj0);
if(si0){
goto L58;
}
goto L5;
}
L57:;
si0=1244920U;
si1=74U;
si2=1245444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l15;
si1=l16;
si2=l6;
si3=l7;
si4=l0;
si5=l13;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L6;
L41:;
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L60;
}
si0=l11;
si1=-1U;
si0+=si1;
l1=si0;
si1=l1;
si2=l7;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
l17=si0;
si1=1U;
si0+=si1;
l16=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L61;
}
si0=l16;
si1=l7;
si0=si0 > si1;
if(si0){
goto L62;
}
si0=l8;
si1=l16;
si2=l6;
si3=l16;
si4=l8;
si5=l16;
si6=3U;
si5<<=(si6&31);
si4+=si5;
l27=si4;
si5=l9;
si6=l16;
si5-=si6;
l26=si5;
f1280(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l2;
si1=l4;
si2=l7;
si3=3U;
si2<<=(si3&31);
l22=si2;
si0=f15390(i,si0,si1,si2);
l14=si0;
si0=0U;
l1=si0;
si0=l11;
si1=l16;
si0=si0 > si1;
if(si0){
goto L64;
}
si0=0U;
l24=si0;
si0=l11;
l20=si0;
goto L21;
L64:;
si0=l27;
si1=l16;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l1=si0;
si0=l14;
si1=l3;
si0+=si1;
l3=si0;
si0=l27;
si1=l22;
si0+=si1;
l19=si0;
si0=l14;
si1=l7;
si2=l16;
si1-=si2;
l30=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l16;
si1=l26;
si2=l7;
si1-=si2;
l32=si1;
si0=si0 > si1;
l33=si0;
si0=l16;
si1=31U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l16;
si1=l7;
si0+=si1;
l34=si0;
sj0=1ULL;
sj1=2ULL;
sj2=3ULL;
si3=l7;
si4=97U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
si2=l7;
si3=49U;
si2=si2 < si3;
sj0=si2?sj0:sj1;
l35=sj0;
si0=(U32)(sj0);
l36=si0;
si0=l30;
si1=-2U;
si0&=si1;
l9=si0;
si0=l30;
si1=1U;
si0&=si1;
l37=si0;
si0=l19;
si1=l32;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=0U;
l24=si0;
si0=l7;
si1=13U;
si0=si0 < si1;
l38=si0;
si0=l7;
si1=-2U;
si0+=si1;
si1=l17;
si0=si0 == si1;
l39=si0;
si0=l11;
l20=si0;
L65:;
{
si0=l11;
si1=l20;
si0-=si1;
l22=si0;
si0=l11;
si1=l20;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=l20;
si0-=si1;
l23=si0;
si0=l5;
si1=l20;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l0;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si1=l16;
si2=l14;
si3=l16;
si4=l8;
si5=l16;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l7;
l22=si0;
si0=l38;
if(si0){
goto L68;
}
si0=l7;
sj1=l35;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l25=si0;
if(si0){
goto L69;
}
si0=0U;
l22=si0;
goto L66;
L69:;
si0=l25;
si1=l36;
si0<<=(si1&31);
l22=si0;
si1=l36;
si0>>=(si1&31);
si1=l25;
si0=si0 != si1;
if(si0){
goto L67;
}
L68:;
si0=l26;
si1=l22;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=1244051U;
si1=35U;
si2=1245172U;
f673(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l27;
si1=l22;
si2=l22;
si3=l6;
si4=l7;
si5=l17;
si6=l16;
si7=l27;
si8=l22;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l12=si7;
si8=l26;
si9=l22;
si8-=si9;
l25=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l15;
si1=l34;
si2=l22;
si1-=si2;
si2=l34;
si3=l22;
si2=si2 < si3;
l17=si2;
si0=si2?si0:si1;
l15=si0;
si0=l17;
if(si0){
goto L77;
}
si0=l15;
si0=!(si0);
if(si0){
goto L77;
}
si0=l15;
si1=l22;
si0=si0 > si1;
if(si0){
goto L76;
}
si0=l15;
si1=l7;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=l15;
si1=l25;
si0=si0 > si1;
if(si0){
goto L74;
}
si0=l15;
si1=1U;
si0&=si1;
l40=si0;
si0=0U;
l17=si0;
si0=0U;
l25=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L78;
}
si0=l15;
si1=-2U;
si0&=si1;
l2=si0;
si0=0U;
l17=si0;
si0=l14;
l22=si0;
si0=0U;
l25=si0;
L79:;
{
si0=l12;
si1=l25;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l27;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l22;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l13;
si2=8U;
si1|=si2;
l13=si1;
si0+=si1;
si1=l27;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l18;
sj3=l28;
si2=sj2 <= sj3;
sj3=l18;
sj4=l28;
si3=sj3 < sj4;
si4=l17;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l17=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l22;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l18;
si0=sj0 <= sj1;
sj1=l29;
sj2=l18;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l22;
si1=16U;
si0+=si1;
l22=si0;
si0=l2;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L79;
}
}
L78:;
si0=l40;
si0=!(si0);
if(si0){
goto L80;
}
si0=l12;
si1=l25;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
si1=l27;
si2=l22;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=l22;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L80:;
si0=l17;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L77;
}
si0=l26;
si1=l15;
si0=si0 < si1;
if(si0){
goto L73;
}
si0=l26;
si1=l15;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l27;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L77;
}
si0=l22;
si1=l26;
si2=l15;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
L81:;
{
si0=l22;
si1=8U;
si0+=si1;
l22=si0;
si1=l17;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
si0=!(sj0);
if(si0){
goto L81;
}
}
L77:;
si0=l26;
si1=l7;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l16;
si1=l7;
si0=si0 == si1;
if(si0){
goto L70;
}
si0=l30;
si1=l16;
si0=si0 > si1;
if(si0){
goto L71;
}
si0=0U;
l17=si0;
si0=0U;
l25=si0;
si0=l39;
if(si0){
goto L82;
}
si0=0U;
l17=si0;
si0=l14;
l22=si0;
si0=0U;
l25=si0;
L83:;
{
si0=l22;
si1=l3;
si2=l25;
si3=3U;
si2<<=(si3&31);
l13=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=8U;
si0+=si1;
si1=l3;
si2=l13;
si3=8U;
si2|=si3;
l13=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l18;
sj3=l28;
si2=sj2 <= sj3;
sj3=l18;
sj4=l28;
si3=sj3 < sj4;
si4=l17;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l17=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l18;
si0=sj0 <= sj1;
sj1=l29;
sj2=l18;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l22;
si1=16U;
si0+=si1;
l22=si0;
si0=l9;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L83;
}
}
L82:;
si0=l37;
si0=!(si0);
if(si0){
goto L84;
}
si0=l14;
si1=l25;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
si1=l3;
si2=l22;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=l22;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L84:;
si0=l24;
si1=l17;
si0&=si1;
si1=1U;
si0&=si1;
if(si0){
goto L85;
}
si0=l24;
si1=l17;
si0|=si1;
l24=si0;
goto L70;
L85:;
si0=l26;
si1=l7;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l19;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l24=si0;
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L70;
}
si0=l19;
l22=si0;
L86:;
{
si0=l22;
si1=8U;
si0+=si1;
l22=si0;
si1=l21;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L70;
}
goto L86;
}
L76:;
si0=l15;
si1=l22;
si2=1245188U;
f666(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l15;
si1=l7;
si2=1245204U;
f666(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l15;
si1=l26;
si2=1245220U;
f662(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=1244920U;
si1=74U;
si2=1245236U;
f673(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l33;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l31;
si1=l16;
si2=l4;
si3=l23;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l16;
si4=l19;
si5=l16;
si6=l24;
si7=1U;
si6&=si7;
si0=f1329(i,si0,si1,si2,si3,si4,si5,si6);
l24=si0;
si0=l20;
si1=l16;
si0-=si1;
l20=si0;
si1=l16;
si0=si0 > si1;
if(si0){
goto L65;
}
goto L22;
}
L63:;
si0=l7;
si1=l5;
si2=1244808U;
f666(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l16;
si1=l7;
si2=1244792U;
f666(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=1244051U;
si1=35U;
si2=1244776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l7;
si1=l3;
si2=1244760U;
f666(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l11;
si1=l1;
si2=1244744U;
f666(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l21;
si1=l16;
si2=1245428U;
f662(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l21;
si1=l5;
si2=1245412U;
f666(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l21;
si1=l17;
si2=1245396U;
f666(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1244051U;
si1=35U;
si2=1245380U;
f673(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l13;
si1=l5;
si2=1245364U;
f666(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l13;
si1=l7;
si2=1245348U;
f666(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=1244051U;
si1=35U;
si2=1245332U;
f673(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l7;
si1=l3;
si2=1245316U;
f666(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l11;
si1=l1;
si2=1245300U;
f666(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=1247928U;
si1=36U;
si2=1247964U;
f673(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1247868U;
si1=28U;
si2=1247980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l26;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l0;
si1=l16;
si2=l14;
si3=l16;
si4=l8;
si5=l16;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l10;
si1=l7;
si2=l16;
si1=f1359(i,si1,si2);
l1=si1;
si2=1U;
f1190(i,si0,si1,si2);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l27;
si1=l26;
si2=l6;
si3=l7;
si4=l0;
si5=l16;
si6=l10;
si6=i32_load(&i->m0,(U64)si6);
l22=si6;
si7=l1;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=!(si0);
if(si0){
goto L27;
}
si0=l22;
f15271(i,si0);
L27:;
si0=1244051U;
si1=35U;
si2=1245252U;
f673(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l16;
si1=l7;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l30;
si1=-2U;
si0&=si1;
l12=si0;
si0=l30;
si1=1U;
si0&=si1;
l15=si0;
si0=l19;
si1=l32;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l7;
si1=-2U;
si0+=si1;
si1=l17;
si0=si0 == si1;
l21=si0;
si0=0U;
l24=si0;
si0=l11;
l20=si0;
L87:;
{
si0=l11;
si1=l20;
si0-=si1;
l22=si0;
si0=l11;
si1=l20;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=l20;
si0-=si1;
l23=si0;
si0=l5;
si1=l20;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l0;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l16;
si2=l14;
si3=l16;
si4=l8;
si5=l16;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si1=l16;
si0=f1359(i,si0,si1);
l22=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l22;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l22;
si1=3U;
si0<<=(si1&31);
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l22;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l25;
if(si0){
goto L93;
}
si0=l9;
l17=si0;
goto L92;
L93:;
si0=l9;
si1=l25;
si0=si0 <= si1;
if(si0){
goto L94;
}
si0=l9;
si1=l25;
si0=f15277(i,si0,si1);
l17=si0;
si0=!(si0);
if(si0){
goto L91;
}
si0=l17;
si1=0U;
si2=l25;
si0=f15392(i,si0,si1,si2);
goto L89;
L94:;
si0=l25;
si1=1U;
si0=f15273(i,si0,si1);
l17=si0;
L92:;
si0=l17;
if(si0){
goto L89;
}
L91:;
si0=l9;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L90:;
si0=l27;
si1=l26;
si2=l6;
si3=l7;
si4=l13;
si5=l16;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L88;
L89:;
si0=l27;
si1=l26;
si2=l6;
si3=l7;
si4=l13;
si5=l16;
si6=l17;
si7=l22;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l17;
f15271(i,si0);
L88:;
si0=l30;
si1=l16;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=0U;
l17=si0;
si0=0U;
l25=si0;
si0=l21;
if(si0){
goto L95;
}
si0=0U;
l17=si0;
si0=l14;
l22=si0;
si0=0U;
l25=si0;
L96:;
{
si0=l22;
si1=l3;
si2=l25;
si3=3U;
si2<<=(si3&31);
l13=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=8U;
si0+=si1;
si1=l3;
si2=l13;
si3=8U;
si2|=si3;
l13=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l18;
sj3=l28;
si2=sj2 <= sj3;
sj3=l18;
sj4=l28;
si3=sj3 < sj4;
si4=l17;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l17=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l18;
si0=sj0 <= sj1;
sj1=l29;
sj2=l18;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l22;
si1=16U;
si0+=si1;
l22=si0;
si0=l12;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L96;
}
}
L95:;
si0=l15;
si0=!(si0);
if(si0){
goto L97;
}
si0=l14;
si1=l25;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
si1=l3;
si2=l22;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=l22;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L97:;
si0=l24;
si1=l17;
si0&=si1;
si1=1U;
si0&=si1;
if(si0){
goto L99;
}
si0=l24;
si1=l17;
si0|=si1;
l17=si0;
goto L98;
L99:;
si0=l26;
si1=l7;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l19;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l17=si0;
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L98;
}
si0=l19;
l22=si0;
L100:;
{
si0=l22;
si1=8U;
si0+=si1;
l22=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
si0=!(sj0);
if(si0){
goto L100;
}
}
L98:;
si0=l33;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l31;
si1=l16;
si2=l4;
si3=l23;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l16;
si4=l19;
si5=l16;
si6=l17;
si7=1U;
si6&=si7;
si0=f1329(i,si0,si1,si2,si3,si4,si5,si6);
l24=si0;
si0=l20;
si1=l16;
si0-=si1;
l20=si0;
si1=l16;
si0=si0 > si1;
if(si0){
goto L87;
}
goto L22;
}
L25:;
si0=1245060U;
si1=63U;
si2=1245284U;
f673(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l33;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si1=l7;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l2=si0;
si0=0U;
l1=si0;
si0=0U;
l22=si0;
si0=0U;
l24=si0;
L101:;
{
si0=l11;
si1=l11;
si2=l22;
si1+=si2;
l3=si1;
si0=si0 < si1;
if(si0){
goto L105;
}
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L104;
}
si0=l0;
si1=l1;
si0+=si1;
l13=si0;
si1=l7;
si2=l14;
si3=l7;
si4=l8;
si5=l7;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si1=l7;
si0=f1359(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L106;
}
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l25;
if(si0){
goto L109;
}
si0=l12;
l17=si0;
goto L108;
L109:;
si0=l12;
si1=l25;
si0=si0 <= si1;
if(si0){
goto L110;
}
si0=l12;
si1=l25;
si0=f15277(i,si0,si1);
l17=si0;
si0=!(si0);
if(si0){
goto L107;
}
si0=l17;
si1=0U;
si2=l25;
si0=f15392(i,si0,si1,si2);
goto L103;
L110:;
si0=l25;
si1=1U;
si0=f15273(i,si0,si1);
l17=si0;
L108:;
si0=l17;
if(si0){
goto L103;
}
L107:;
si0=l12;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L106:;
si0=l27;
si1=l26;
si2=l6;
si3=l7;
si4=l13;
si5=l7;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L102;
L105:;
si0=0U;
si1=l22;
si0-=si1;
l22=si0;
goto L10;
L104:;
si0=l7;
si1=l22;
si0-=si1;
l23=si0;
goto L11;
L103:;
si0=l27;
si1=l26;
si2=l6;
si3=l7;
si4=l13;
si5=l7;
si6=l17;
si7=l3;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l17;
f15271(i,si0);
L102:;
si0=l2;
si1=l1;
si0+=si1;
l3=si0;
si0=l1;
si1=l16;
si0+=si1;
l1=si0;
si0=l31;
si1=l7;
si2=l3;
si3=l7;
si4=l19;
si5=l7;
si6=l24;
si7=1U;
si6&=si7;
si0=f1329(i,si0,si1,si2,si3,si4,si5,si6);
l24=si0;
si0=l11;
si1=l22;
si2=l7;
si1-=si2;
l22=si1;
si0+=si1;
l20=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L101;
}
}
L22:;
si0=l11;
si1=l20;
si0-=si1;
l1=si0;
si0=l11;
si1=l20;
si0=si0 < si1;
if(si0){
goto L20;
}
L21:;
si0=l20;
si1=l7;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l20;
si2=l14;
si3=l20;
si4=l8;
si5=l20;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=31U;
si0=si0 < si1;
if(si0){
goto L115;
}
si0=l7;
l1=si0;
si0=l7;
si1=13U;
si0=si0 < si1;
if(si0){
goto L117;
}
si0=l7;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l7;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l7;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l18=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l22=si0;
if(si0){
goto L118;
}
si0=0U;
l1=si0;
goto L116;
L118:;
si0=l22;
sj1=l18;
si1=(U32)(sj1);
l17=si1;
si0<<=(si1&31);
l1=si0;
si1=l17;
si0>>=(si1&31);
si1=l22;
si0=si0 != si1;
if(si0){
goto L18;
}
L117:;
si0=l26;
si1=l1;
si0=si0 < si1;
if(si0){
goto L17;
}
L116:;
si0=l27;
si1=l1;
si2=l1;
si3=l6;
si4=l7;
si5=l3;
si6=l20;
si7=l27;
si8=l1;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l25=si7;
si8=l26;
si9=l1;
si8-=si9;
l22=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l20;
si1=l7;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l3;
si1=l1;
si0-=si1;
l12=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l12;
si1=l7;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l12;
si1=l22;
si0=si0 > si1;
if(si0){
goto L114;
}
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l12;
si1=1U;
si0&=si1;
l16=si0;
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L113;
}
si0=0U;
l3=si0;
si0=0U;
l22=si0;
goto L112;
L115:;
si0=l7;
si1=l20;
si0=f1359(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L111;
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
l17=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l25=si0;
si0=l17;
if(si0){
goto L121;
}
si0=l25;
l22=si0;
goto L120;
L121:;
si0=l25;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L122;
}
si0=l25;
si1=l17;
si0=f15277(i,si0,si1);
l22=si0;
si0=!(si0);
if(si0){
goto L119;
}
si0=l22;
si1=0U;
si2=l17;
si0=f15392(i,si0,si1,si2);
goto L13;
L122:;
si0=l17;
si1=1U;
si0=f15273(i,si0,si1);
l22=si0;
L120:;
si0=l22;
if(si0){
goto L13;
}
L119:;
si0=l25;
si1=l17;
f52(i,si0,si1);
UNREACHABLE;
L114:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L113:;
si0=l12;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l3=si0;
si0=l14;
l1=si0;
si0=0U;
l22=si0;
L123:;
{
si0=l25;
si1=l22;
si2=3U;
si1<<=(si2&31);
l17=si1;
si0+=si1;
si1=l27;
si2=l17;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l3;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=l17;
si2=8U;
si1|=si2;
l17=si1;
si0+=si1;
si1=l27;
si2=l17;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l18;
sj3=l28;
si2=sj2 <= sj3;
sj3=l18;
sj4=l28;
si3=sj3 < sj4;
si4=l3;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l3=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l18;
si0=sj0 <= sj1;
sj1=l29;
sj2=l18;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l13;
si1=l22;
si2=2U;
si1+=si2;
l22=si1;
si0=si0 != si1;
if(si0){
goto L123;
}
}
L112:;
si0=l16;
si0=!(si0);
if(si0){
goto L124;
}
si0=l25;
si1=l22;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l27;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l3;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
L124:;
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l26;
si1=l12;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l26;
si1=l12;
si0=si0 == si1;
if(si0){
goto L125;
}
si0=l27;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l1;
si1=l26;
si2=l12;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L126:;
{
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L125;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
si0=!(sj0);
if(si0){
goto L126;
}
goto L12;
}
L125:;
si0=1244920U;
si1=74U;
si2=1244996U;
f673(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=l27;
si1=l26;
si2=l6;
si3=l7;
si4=l3;
si5=l20;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L12;
L20:;
si0=l1;
si1=l11;
si2=1244824U;
f662(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l20;
si1=l7;
si2=1244840U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1244051U;
si1=35U;
si2=1244856U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l12;
si1=l1;
si2=1244872U;
f666(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l12;
si1=l7;
si2=1244888U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l12;
si1=l26;
si2=1244904U;
f662(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l27;
si1=l26;
si2=l6;
si3=l7;
si4=l3;
si5=l20;
si6=l22;
si7=l1;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l22;
f15271(i,si0);
L12:;
si0=l26;
si1=l7;
si0=si0 < si1;
if(si0){
goto L129;
}
si0=l26;
si1=l7;
si0-=si1;
l2=si0;
si0=l27;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l20;
si1=l7;
si0=si0 != si1;
if(si0){
goto L130;
}
si0=0U;
l16=si0;
goto L127;
L130:;
si0=l7;
si1=l20;
si0-=si1;
l16=si0;
if(si0){
goto L131;
}
si0=0U;
l16=si0;
goto L127;
L131:;
si0=l27;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l20;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=l14;
l1=si0;
si0=l20;
l3=si0;
si0=0U;
l22=si0;
si0=0U;
l17=si0;
L132:;
{
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L128;
}
si0=l1;
si1=l1;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
si3=255U;
si2&=si3;
l17=si2;
si3=0U;
si2=si2 != si3;
sj2=(U64)(si2);
sj1-=sj2;
si2=l25;
si3=l22;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l22;
si1=1U;
si0+=si1;
l22=si0;
si0=l7;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L132;
}
}
si0=l24;
si1=l17;
si0&=si1;
if(si0){
goto L133;
}
si0=l24;
si1=l17;
si0|=si1;
l24=si0;
goto L127;
L133:;
si0=l26;
si1=l7;
si0=si0 == si1;
if(si0){
goto L134;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l24=si0;
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L127;
}
si0=l12;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l12;
l1=si0;
L135:;
{
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L134;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L127;
}
goto L135;
}
L134:;
si0=1245060U;
si1=63U;
si2=1245124U;
f673(i,si0,si1,si2);
UNREACHABLE;
L129:;
si0=1244051U;
si1=35U;
si2=1245012U;
f673(i,si0,si1,si2);
UNREACHABLE;
L128:;
si0=l3;
si1=l7;
si2=1254752U;
f663(i,si0,si1,si2);
UNREACHABLE;
L127:;
si0=l5;
si1=l20;
si0-=si1;
l1=si0;
si0=l5;
si1=l20;
si0=si0 < si1;
if(si0){
goto L136;
}
si0=l20;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L137;
}
si0=l20;
si1=l2;
si2=1245044U;
f666(i,si0,si1,si2);
UNREACHABLE;
L137:;
si0=l14;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
si2=l4;
si3=l1;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l20;
si4=l12;
si5=l20;
si6=l24;
si0=f1329(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
goto L1;
L136:;
si0=l1;
si1=l5;
si2=1245028U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l23;
si1=l5;
si2=1245156U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l22;
si1=l11;
si2=1245140U;
f662(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l0;
si1=l7;
si2=l14;
si3=l7;
si4=l8;
si5=l7;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l10;
si1=8U;
si0+=si1;
si1=l7;
si2=l7;
si1=f1359(i,si1,si2);
l1=si1;
si2=1U;
f1190(i,si0,si1,si2);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l27;
si1=l26;
si2=l6;
si3=l7;
si4=l0;
si5=l7;
si6=l10;
si6=i32_load(&i->m0,(U64)si6+8U);
l22=si6;
si7=l1;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l22;
f15271(i,si0);
L8:;
si0=l16;
si1=l32;
si2=1245268U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l15;
si1=l16;
si2=l6;
si3=l7;
si4=l0;
si5=l13;
si6=l3;
si7=l1;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
f15271(i,si0);
L6:;
si0=l13;
si1=l7;
si0+=si1;
l20=si0;
L5:;
si0=l20;
si1=l5;
si0=si0 > si1;
if(si0){
goto L147;
}
si0=l20;
si1=l13;
si0=si0 < si1;
if(si0){
goto L146;
}
si0=l20;
si1=l16;
si0=si0 > si1;
if(si0){
goto L145;
}
si0=l7;
if(si0){
goto L149;
}
si0=0U;
l17=si0;
goto L148;
L149:;
si0=l15;
si1=l13;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l24=si0;
si0=l4;
si1=l1;
si0+=si1;
l26=si0;
si0=l7;
si1=1U;
si0&=si1;
l21=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L151;
}
si0=0U;
l17=si0;
si0=0U;
l1=si0;
goto L150;
L151:;
si0=0U;
l25=si0;
si0=0U;
si1=l7;
si2=-2U;
si1&=si2;
si0-=si1;
l27=si0;
si0=l24;
l1=si0;
si0=l26;
l3=si0;
si0=l2;
l22=si0;
si0=0U;
l17=si0;
L152:;
{
si0=l22;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l18;
sj3=l28;
si2=sj2 <= sj3;
sj3=l18;
sj4=l28;
si3=sj3 < sj4;
si4=l17;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l17=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l18;
si0=sj0 <= sj1;
sj1=l29;
sj2=l18;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l22;
si1=16U;
si0+=si1;
l22=si0;
si0=l27;
si1=l25;
si2=-2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L152;
}
}
si0=0U;
si1=l25;
si0-=si1;
l1=si0;
L150:;
si0=l21;
si0=!(si0);
if(si0){
goto L148;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l26;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l17;
sj2=(U64)(si2);
sj1-=sj2;
si2=l24;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L148:;
si0=l12;
si1=l7;
si0=si0 > si1;
if(si0){
goto L144;
}
si0=l12;
si1=l13;
si0=si0 > si1;
if(si0){
goto L143;
}
si0=l0;
si1=l14;
si0+=si1;
l1=si0;
si1=l12;
si2=l2;
si3=l12;
si4=l8;
si5=l12;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l11;
si1=62U;
si0=si0 < si1;
if(si0){
goto L157;
}
si0=l7;
l25=si0;
si0=l7;
si1=13U;
si0=si0 < si1;
if(si0){
goto L159;
}
si0=l7;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l7;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l7;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l18=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l3=si0;
if(si0){
goto L160;
}
si0=0U;
l25=si0;
goto L158;
L160:;
si0=l3;
sj1=l18;
si1=(U32)(sj1);
l22=si1;
si0<<=(si1&31);
l25=si0;
si1=l22;
si0>>=(si1&31);
si1=l3;
si0=si0 != si1;
if(si0){
goto L142;
}
L159:;
si0=l16;
si1=l25;
si0=si0 < si1;
if(si0){
goto L141;
}
L158:;
si0=l15;
si1=l25;
si2=l25;
si3=l6;
si4=l7;
si5=l1;
si6=l12;
si7=l15;
si8=l25;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l21=si7;
si8=l16;
si9=l25;
si8-=si9;
l3=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l12;
si1=l7;
si0+=si1;
l1=si0;
si1=l25;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si1=l25;
si0-=si1;
l14=si0;
si1=l25;
si0=si0 > si1;
if(si0){
goto L140;
}
si0=l14;
si1=l7;
si0=si0 > si1;
if(si0){
goto L139;
}
si0=l14;
si1=l3;
si0=si0 > si1;
if(si0){
goto L156;
}
si0=l1;
si1=l25;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l14;
si1=1U;
si0&=si1;
l19=si0;
si0=l1;
si1=l25;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L155;
}
si0=0U;
l22=si0;
si0=0U;
l1=si0;
goto L154;
L157:;
si0=l7;
si1=l12;
si0=f1359(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L153;
}
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l3;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=l25;
if(si0){
goto L163;
}
si0=l13;
l22=si0;
goto L162;
L163:;
si0=l13;
si1=l25;
si0=si0 <= si1;
if(si0){
goto L164;
}
si0=l13;
si1=l25;
si0=f15277(i,si0,si1);
l22=si0;
si0=!(si0);
if(si0){
goto L161;
}
si0=l22;
si1=0U;
si2=l25;
si0=f15392(i,si0,si1,si2);
goto L3;
L164:;
si0=l25;
si1=1U;
si0=f15273(i,si0,si1);
l22=si0;
L162:;
si0=l22;
if(si0){
goto L3;
}
L161:;
si0=l13;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L156:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L155:;
si0=l25;
si1=3U;
si0<<=(si1&31);
l24=si0;
si0=0U;
l13=si0;
si0=0U;
si1=l14;
si2=-2U;
si1&=si2;
si0-=si1;
l26=si0;
si0=l15;
l1=si0;
si0=l2;
l3=si0;
si0=0U;
l22=si0;
L165:;
{
si0=l1;
si1=l24;
si0+=si1;
l27=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l22;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l18;
sj3=l28;
si2=sj2 <= sj3;
sj3=l18;
sj4=l28;
si3=sj3 < sj4;
si4=l22;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l22=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l18;
si0=sj0 <= sj1;
sj1=l29;
sj2=l18;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l26;
si1=l13;
si2=-2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L165;
}
}
si0=0U;
si1=l13;
si0-=si1;
l1=si0;
L154:;
si0=l19;
si0=!(si0);
if(si0){
goto L166;
}
si0=l21;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l15;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l22;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l22;
si0=si2?si0:si1;
l22=si0;
L166:;
si0=l22;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l16;
si1=l14;
si0=si0 < si1;
if(si0){
goto L138;
}
si0=l16;
si1=l14;
si0=si0 == si1;
if(si0){
goto L167;
}
si0=l15;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l25;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l22;
si1=l1;
si0-=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L168:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L167;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l18;
si0=!(sj0);
if(si0){
goto L168;
}
goto L2;
}
L167:;
si0=1244920U;
si1=74U;
si2=1245604U;
f673(i,si0,si1,si2);
UNREACHABLE;
L153:;
si0=l15;
si1=l16;
si2=l6;
si3=l7;
si4=l1;
si5=l12;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L2;
L147:;
si0=1244051U;
si1=35U;
si2=1245460U;
f673(i,si0,si1,si2);
UNREACHABLE;
L146:;
si0=l13;
si1=l20;
si2=1245476U;
f662(i,si0,si1,si2);
UNREACHABLE;
L145:;
si0=l20;
si1=l16;
si2=1245492U;
f666(i,si0,si1,si2);
UNREACHABLE;
L144:;
si0=l12;
si1=l7;
si2=1245508U;
f666(i,si0,si1,si2);
UNREACHABLE;
L143:;
si0=l12;
si1=l13;
si2=1245524U;
f666(i,si0,si1,si2);
UNREACHABLE;
L142:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L141:;
si0=1244051U;
si1=35U;
si2=1245540U;
f673(i,si0,si1,si2);
UNREACHABLE;
L140:;
si0=l14;
si1=l25;
si2=1245556U;
f666(i,si0,si1,si2);
UNREACHABLE;
L139:;
si0=l14;
si1=l7;
si2=1245572U;
f666(i,si0,si1,si2);
UNREACHABLE;
L138:;
si0=l14;
si1=l16;
si2=1245588U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l15;
si1=l16;
si2=l6;
si3=l7;
si4=l1;
si5=l12;
si6=l22;
si7=l3;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l22;
f15271(i,si0);
L2:;
si0=l16;
si1=l7;
si0=si0 < si1;
if(si0){
goto L171;
}
si0=l15;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l7;
si1=l12;
si0=si0 == si1;
if(si0){
goto L169;
}
si0=l8;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l7;
si1=l12;
si2=l7;
si3=l12;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
l27=si0;
si0=l12;
l13=si0;
si0=l2;
l1=si0;
si0=0U;
l25=si0;
L172:;
{
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L170;
}
si0=l1;
si1=l1;
si2=l27;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l25;
si3=255U;
si2&=si3;
l25=si2;
si3=0U;
si2=si2 != si3;
sj2=(U64)(si2);
sj1-=sj2;
si2=l22;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l28;
si0=sj0 <= sj1;
sj1=l18;
sj2=l28;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l22;
si1=8U;
si0+=si1;
l22=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l7;
si1=l13;
si2=1U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L172;
}
}
si0=l17;
si1=l25;
si0&=si1;
if(si0){
goto L173;
}
si0=l17;
si1=l25;
si0|=si1;
l17=si0;
goto L169;
L173:;
si0=l16;
si1=l7;
si0=si0 == si1;
if(si0){
goto L174;
}
si0=l15;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l17=si0;
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L169;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l12;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l22;
si1=l1;
si0-=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L175:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L174;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l18;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L169;
}
goto L175;
}
L174:;
si0=1245060U;
si1=63U;
si2=1245652U;
f673(i,si0,si1,si2);
UNREACHABLE;
L171:;
si0=1244051U;
si1=35U;
si2=1245620U;
f673(i,si0,si1,si2);
UNREACHABLE;
L170:;
si0=l13;
si1=l7;
si2=1254752U;
f663(i,si0,si1,si2);
UNREACHABLE;
L169:;
si0=l12;
si1=l16;
si2=l7;
si1-=si2;
l1=si1;
si0=si0 <= si1;
if(si0){
goto L176;
}
si0=l12;
si1=l1;
si2=1245636U;
f666(i,si0,si1,si2);
UNREACHABLE;
L176:;
si0=l2;
si1=l7;
si2=l12;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
si2=l4;
si3=l20;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l5;
si4=l20;
si3-=si4;
si4=l15;
si5=l12;
si6=l17;
si7=1U;
si6&=si7;
si0=f1329(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
L1:;
si0=l10;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1285(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2,sj3;
si0=l0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l0;
si1=l0;
si2=1U;
si1>>=(si2&31);
si0-=si1;
l2=si0;
si1=31U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
l1=si0;
si0=l0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l0;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l0;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l3=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l4=si0;
if(si0){
goto L8;
}
si0=0U;
l1=si0;
goto L7;
L8:;
si0=l4;
sj1=l3;
si1=(U32)(sj1);
l5=si1;
si0<<=(si1&31);
l1=si0;
si1=l5;
si0>>=(si1&31);
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
L7:;
si0=l1;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l0;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=4U;
si0+=si1;
l0=si0;
goto L5;
L9:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=l4;
si0+=si1;
si1=4U;
si0+=si1;
l0=si0;
goto L5;
L10:;
si0=l1;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l0=si0;
goto L5;
L6:;
si0=l2;
si1=l0;
si0+=si1;
l1=si0;
si0=0U;
l0=si0;
L5:;
si0=l1;
si1=l0;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=-1U;
si0+=si1;
l2=si0;
si1=l2;
si2=l1;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
l4=si0;
si1=1U;
si0+=si1;
l2=si0;
si0=l4;
si1=30U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
l0=si0;
si0=l1;
si1=13U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l1;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l1;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l1;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l3=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l5=si0;
if(si0){
goto L14;
}
si0=0U;
l0=si0;
goto L13;
L14:;
si0=l5;
sj1=l3;
si1=(U32)(sj1);
l6=si1;
si0<<=(si1&31);
l0=si0;
si1=l6;
si0>>=(si1&31);
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
L13:;
si0=l0;
si1=1U;
si0>>=(si1&31);
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l0;
si1=4U;
si0+=si1;
l4=si0;
goto L11;
L15:;
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l0;
si1=l5;
si0+=si1;
si1=4U;
si0+=si1;
l4=si0;
goto L11;
L16:;
si0=l0;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l4=si0;
goto L11;
L12:;
si0=l2;
si1=l1;
si0+=si1;
l0=si0;
si0=0U;
l4=si0;
L11:;
si0=l4;
si1=l1;
si0+=si1;
si1=l0;
si0+=si1;
l1=si0;
goto L1;
L3:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
l0=si0;
si0=l2;
si1=13U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l2;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l2;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l2;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l3=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l4=si0;
if(si0){
goto L19;
}
si0=0U;
l0=si0;
goto L18;
L19:;
si0=l4;
sj1=l3;
si1=(U32)(sj1);
l5=si1;
si0<<=(si1&31);
l0=si0;
si1=l5;
si0>>=(si1&31);
si1=l4;
si0=si0 != si1;
if(si0){
goto L17;
}
L18:;
si0=l2;
si1=1U;
si2=3U;
si0=f1303(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=1U;
si0>>=(si1&31);
l4=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l0;
si1=4U;
si0+=si1;
l4=si0;
goto L20;
L21:;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l0;
si1=l4;
si0+=si1;
si1=4U;
si0+=si1;
l4=si0;
goto L20;
L22:;
si0=l0;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l4=si0;
L20:;
si0=l1;
si1=l4;
si2=l0;
si1+=si2;
l0=si1;
si2=l1;
si3=l0;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l2;
si0+=si1;
goto L0;
L17:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1286(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
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
U64 l40=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj1,sj2,sj3,sj4,sj6,sj7,sj8,sj9;
si0=l5;
si1=211U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l5;
si1=1998U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l3;
si1=l3;
si2=1U;
si1>>=(si2&31);
l8=si1;
si0-=si1;
l9=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l6;
si1=l9;
si2=l4;
si3=l9;
si4=l6;
si5=l9;
si6=3U;
si5<<=(si6&31);
l10=si5;
si4+=si5;
l11=si4;
si5=l7;
si6=l9;
si5-=si6;
l12=si5;
f1280(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l1;
si2=l2;
si3=l9;
si4=l6;
si5=l9;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l9;
si1=31U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l3;
l13=si0;
si0=l3;
si1=13U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l3;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l3;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l3;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l14=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l15=si0;
if(si0){
goto L29;
}
si0=0U;
l13=si0;
goto L27;
L30:;
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l6;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l5;
if(si0){
goto L14;
}
si0=0U;
si1=0U;
si2=1248512U;
f663(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l15;
sj1=l14;
si1=(U32)(sj1);
l16=si1;
si0<<=(si1&31);
l13=si0;
si1=l16;
si0>>=(si1&31);
si1=l15;
si0=si0 != si1;
if(si0){
goto L20;
}
L28:;
si0=l12;
si1=l13;
si0=si0 < si1;
if(si0){
goto L21;
}
L27:;
si0=l11;
si1=l13;
si2=l13;
si3=l4;
si4=l5;
si5=l0;
si6=l9;
si7=l11;
si8=l13;
si9=3U;
si8<<=(si9&31);
si7+=si8;
si8=l12;
si9=l13;
si8-=si9;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l9;
si1=l3;
si0+=si1;
l15=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l12;
si1=l15;
si2=l13;
si1-=si2;
l17=si1;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l15;
si1=l13;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l17;
si1=l3;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l11;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
si1=l3;
si2=4U;
si1<<=(si2&31);
l19=si1;
si0-=si1;
l20=si0;
si0=l3;
si1=24U;
si0*=si1;
si1=l15;
si0-=si1;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=l6;
si0+=si1;
si1=-8U;
si0+=si1;
l5=si0;
si0=l19;
si1=l15;
si0-=si1;
si1=l16;
si0-=si1;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l21=si0;
si0=0U;
l15=si0;
L31:;
{
si0=l20;
si1=l15;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l5;
si1=l15;
si0+=si1;
l16=si0;
si0=l21;
si1=l15;
si0+=si1;
l19=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si0=sj0 == sj1;
if(si0){
goto L31;
}
}
sj0=l14;
sj1=l22;
si0=sj0 <= sj1;
if(si0){
goto L1;
}
goto L2;
L26:;
si0=l5;
si1=l9;
si0=f1359(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l16=si0;
si0=l13;
if(si0){
goto L35;
}
si0=l16;
l15=si0;
goto L34;
L35:;
si0=l16;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l16;
si1=l13;
si0=f15277(i,si0,si1);
l15=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l15;
si1=0U;
si2=l13;
si0=f15392(i,si0,si1,si2);
goto L3;
L36:;
si0=l13;
si1=1U;
si0=f15273(i,si0,si1);
l15=si0;
L34:;
si0=l15;
if(si0){
goto L3;
}
L33:;
si0=l16;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L32:;
si0=l11;
si1=l12;
si2=l4;
si3=l5;
si4=l0;
si5=l9;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L1;
L25:;
si0=l3;
si1=-1U;
si0+=si1;
l15=si0;
si1=l15;
si2=l5;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
l23=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l23;
si1=1U;
si0+=si1;
l20=si0;
si0=l23;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l6;
si1=l20;
si2=l4;
si3=l20;
si4=l6;
si5=l20;
si6=3U;
si5<<=(si6&31);
si4+=si5;
l15=si4;
si5=l7;
si6=l20;
si5-=si6;
l7=si5;
f1280(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l0;
si1=l1;
si2=l15;
si3=l2;
si4=l5;
si5=3U;
si4<<=(si5&31);
l13=si4;
si2=f15390(i,si2,si3,si4);
l15=si2;
si3=l20;
si4=l6;
si5=l20;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si1=l5;
si0-=si1;
l24=si0;
si0=l15;
si1=l13;
si0+=si1;
l8=si0;
si0=0U;
l18=si0;
si0=l3;
l25=si0;
si0=l20;
si1=1U;
si0<<=(si1&31);
l26=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l8;
si1=l13;
si0+=si1;
l27=si0;
si1=l24;
si2=l5;
si1-=si2;
l28=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l20;
si1=l5;
si0+=si1;
l29=si0;
si0=l5;
si1=l20;
si0-=si1;
l30=si0;
si1=-2U;
si0&=si1;
l11=si0;
si0=l30;
si1=1U;
si0&=si1;
l31=si0;
si0=l6;
si1=l13;
si0+=si1;
l32=si0;
si0=l8;
si1=l20;
si2=3U;
si1<<=(si2&31);
l33=si1;
si0+=si1;
l9=si0;
si0=l15;
si1=l33;
si0+=si1;
l19=si0;
si0=l23;
si1=30U;
si0=si0 < si1;
l34=si0;
si0=l5;
si1=-2U;
si0+=si1;
si1=l23;
si0=si0 == si1;
l35=si0;
si0=0U;
l18=si0;
si0=l3;
l25=si0;
L42:;
{
si0=l3;
si1=l25;
si0-=si1;
l17=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=l1;
si1=l17;
si0-=si1;
l36=si0;
si1=l23;
si0=si0 <= si1;
if(si0){
goto L51;
}
si0=l0;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l37=si0;
si0=l34;
if(si0){
goto L55;
}
si0=l5;
sj1=3ULL;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l7=si0;
if(si0){
goto L57;
}
si0=0U;
l7=si0;
goto L56;
L57:;
si0=l7;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l24;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0=si0 < si1;
if(si0){
goto L49;
}
L56:;
si0=l8;
si1=l7;
si2=l7;
si3=l4;
si4=l5;
si5=l37;
si6=l20;
si7=l8;
si8=l7;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l12=si7;
si8=l24;
si9=l7;
si8-=si9;
l16=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l38;
si1=l29;
si2=l7;
si1-=si2;
si2=l29;
si3=l7;
si2=si2 < si3;
l13=si2;
si0=si2?si0:si1;
l38=si0;
si0=l13;
if(si0){
goto L43;
}
si0=l38;
si0=!(si0);
if(si0){
goto L43;
}
si0=l38;
si1=l7;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l38;
si1=l5;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l38;
si1=l16;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l38;
si1=1U;
si0&=si1;
l39=si0;
si0=0U;
l13=si0;
si0=0U;
l16=si0;
si0=l38;
si1=1U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l38;
si1=-2U;
si0&=si1;
l21=si0;
si0=0U;
l13=si0;
si0=0U;
l16=si0;
L59:;
{
si0=l12;
si1=l16;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l8;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l15;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l7;
si2=8U;
si1|=si2;
l7=si1;
si0+=si1;
si1=l8;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l40=sj1;
sj2=l14;
sj3=l22;
si2=sj2 <= sj3;
sj3=l14;
sj4=l22;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l40;
sj1=l14;
si0=sj0 <= sj1;
sj1=l40;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
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
L58:;
si0=l39;
si0=!(si0);
if(si0){
goto L60;
}
si0=l12;
si1=l16;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l8;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l22;
si0=sj0 <= sj1;
sj1=l14;
sj2=l22;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L60:;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L43;
}
si0=l24;
si1=l38;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l24;
si1=l38;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l8;
si1=l38;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L43;
}
si0=l7;
si1=l24;
si2=l38;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L61:;
{
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l13;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
si0=!(sj0);
if(si0){
goto L61;
}
goto L43;
}
L55:;
si0=l5;
si1=l20;
si0=f1359(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l16=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l16;
if(si0){
goto L64;
}
si0=l12;
l13=si0;
goto L63;
L64:;
si0=l12;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L65;
}
si0=l12;
si1=l16;
si0=f15277(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L62;
}
si0=l13;
si1=0U;
si2=l16;
si0=f15392(i,si0,si1,si2);
goto L44;
L65:;
si0=l16;
si1=1U;
si0=f15273(i,si0,si1);
l13=si0;
L63:;
si0=l13;
if(si0){
goto L44;
}
L62:;
si0=l12;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L54:;
si0=1244920U;
si1=74U;
si2=1246288U;
f673(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l8;
si1=l24;
si2=l4;
si3=l5;
si4=l37;
si5=l20;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L43;
L52:;
si0=l17;
si1=l1;
si2=1246192U;
f662(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=1244051U;
si1=35U;
si2=1246208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=1244051U;
si1=35U;
si2=1246224U;
f673(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l38;
si1=l7;
si2=1246240U;
f666(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l38;
si1=l5;
si2=1246256U;
f666(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l38;
si1=l24;
si2=1246272U;
f662(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l8;
si1=l24;
si2=l4;
si3=l5;
si4=l37;
si5=l20;
si6=l13;
si7=l7;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l13;
f15271(i,si0);
L43:;
si0=l24;
si1=l5;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l20;
si1=l5;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l30;
si1=l20;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=0U;
l13=si0;
si0=0U;
l16=si0;
si0=l35;
if(si0){
goto L69;
}
si0=0U;
l13=si0;
si0=0U;
l16=si0;
L70:;
{
si0=l15;
si1=l16;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l19;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l9;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l7;
si2=8U;
si1|=si2;
l7=si1;
si0+=si1;
si1=l19;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l40=sj1;
sj2=l14;
sj3=l22;
si2=sj2 <= sj3;
sj3=l14;
sj4=l22;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l9;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l40;
sj1=l14;
si0=sj0 <= sj1;
sj1=l40;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l11;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
}
L69:;
si0=l31;
si0=!(si0);
if(si0){
goto L71;
}
si0=l15;
si1=l16;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l19;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l9;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l22;
si0=sj0 <= sj1;
sj1=l14;
sj2=l22;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L71:;
si0=l18;
si1=l13;
si0&=si1;
si1=1U;
si0&=si1;
if(si0){
goto L72;
}
si0=l18;
si1=l13;
si0|=si1;
l18=si0;
goto L66;
L72:;
si0=l24;
si1=l5;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l27;
si1=l27;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l18=si0;
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L66;
}
si0=l27;
l7=si0;
L74:;
{
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L66;
}
goto L74;
}
L73:;
si0=1245060U;
si1=63U;
si2=1246368U;
f673(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=1244051U;
si1=35U;
si2=1246304U;
f673(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l17;
si1=l5;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=l23;
si1=l3;
si2=l7;
si1-=si2;
l13=si1;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l23;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l32;
si1=l20;
si2=l2;
si3=l7;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l20;
si4=l27;
si5=l20;
si6=l18;
si7=1U;
si6&=si7;
si0=f1329(i,si0,si1,si2,si3,si4,si5,si6);
l18=si0;
si0=l37;
si1=l33;
si0+=si1;
si1=l36;
si2=l20;
si1-=si2;
si2=l15;
si3=l20;
si4=l6;
si5=l20;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l25;
si1=l20;
si0-=si1;
l25=si0;
si1=l26;
si0=si0 > si1;
if(si0){
goto L42;
}
goto L7;
L75:;
}
si0=l7;
si1=l3;
si2=1246320U;
f662(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l20;
si1=l13;
si2=1246336U;
f666(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l20;
si1=l28;
si2=1246352U;
f666(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=1244051U;
si1=35U;
si2=1245968U;
f673(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l20;
si1=l5;
si2=1245952U;
f666(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1244051U;
si1=35U;
si2=1245936U;
f673(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=l15;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L23:;
si0=l17;
si1=l3;
si2=1246464U;
f666(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1244051U;
si1=35U;
si2=1246448U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1244051U;
si1=35U;
si2=1246432U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1244051U;
si1=35U;
si2=1246416U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l9;
si1=l5;
si2=1246400U;
f666(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1244051U;
si1=35U;
si2=1246384U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1245709U;
si1=32U;
si2=1248464U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l3;
si1=l7;
si2=1248496U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L78;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l14;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l14;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l22=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L79;
}
sj0=l22;
si0=(U32)(sj0);
l15=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L77;
}
si0=l0;
si1=l1;
si2=l7;
si3=l3;
si4=l4;
si5=l5;
sj6=2ULL;
sj7=2ULL;
sj8=l14;
si9=l15;
si10=1246604U;
si9+=si10;
sj9=i64_load8_u(&i->m0,(U64)si9);
l22=sj9;
sj8*=sj9;
sj7-=sj8;
sj8=l22;
sj7*=sj8;
l22=sj7;
sj8=l14;
sj7*=sj8;
sj6-=sj7;
sj7=l22;
sj6*=sj7;
l22=sj6;
sj7=l14;
sj6*=sj7;
sj7=-2ULL;
sj6+=sj7;
sj7=l22;
sj6*=sj7;
f1275(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l16=si0;
si0=0U;
l15=si0;
si0=l0;
l7=si0;
L81:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L80;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
if(si0){
goto L81;
}
}
si0=l16;
l15=si0;
L80:;
si0=l15;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l15;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L76;
}
si0=l0;
si1=l15;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l7=si0;
sj1=0ULL;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=1U;
si0+=si1;
l7=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l13;
si0-=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L82:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
if(si0){
goto L82;
}
goto L12;
}
L79:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=1246748U;
si1=25U;
si2=1246776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=l15;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l15;
si1=l1;
si2=1254116U;
f663(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l6;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l15=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L9;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l14;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l14;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l22=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
sj0=l22;
si0=(U32)(sj0);
l7=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l0;
si1=l1;
si2=l15;
si3=l3;
si4=l4;
si5=l5;
sj6=2ULL;
sj7=2ULL;
sj8=l14;
si9=l7;
si10=1246604U;
si9+=si10;
sj9=i64_load8_u(&i->m0,(U64)si9);
l22=sj9;
sj8*=sj9;
sj7-=sj8;
sj8=l22;
sj7*=sj8;
l22=sj7;
sj8=l14;
sj7*=sj8;
sj6-=sj7;
sj7=l22;
sj6*=sj7;
l22=sj6;
sj7=l14;
sj6*=sj7;
sj7=-2ULL;
sj6+=sj7;
sj7=l22;
sj6*=sj7;
f1281(i,si0,si1,si2,si3,si4,si5,sj6);
L12:;
goto L0;
L11:;
si0=l3;
si1=l7;
si2=1248480U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1246748U;
si1=25U;
si2=1246776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l7;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l25;
si0-=si1;
l11=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L89;
}
si0=l1;
si1=l11;
si0-=si1;
l21=si0;
si1=l23;
si0=si0 <= si1;
if(si0){
goto L88;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l23;
si1=30U;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l5;
l7=si0;
si0=l5;
si1=13U;
si0=si0 < si1;
if(si0){
goto L96;
}
si0=l5;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l5;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l5;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l14=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l13=si0;
if(si0){
goto L97;
}
si0=0U;
l7=si0;
goto L95;
L97:;
si0=l13;
sj1=l14;
si1=(U32)(sj1);
l16=si1;
si0<<=(si1&31);
l7=si0;
si1=l16;
si0>>=(si1&31);
si1=l13;
si0=si0 != si1;
if(si0){
goto L87;
}
L96:;
si0=l24;
si1=l7;
si0=si0 < si1;
if(si0){
goto L86;
}
L95:;
si0=l8;
si1=l7;
si2=l7;
si3=l4;
si4=l5;
si5=l1;
si6=l20;
si7=l8;
si8=l7;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l9=si7;
si8=l24;
si9=l7;
si8-=si9;
l16=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l20;
si1=l5;
si0+=si1;
l13=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l13;
si1=l7;
si0-=si1;
l12=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L85;
}
si0=l12;
si1=l5;
si0=si0 > si1;
if(si0){
goto L84;
}
si0=l12;
si1=l16;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l13;
si1=l7;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l12;
si1=1U;
si0&=si1;
l10=si0;
si0=l23;
si1=l5;
si0+=si1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L92;
}
si0=0U;
l13=si0;
si0=0U;
l16=si0;
goto L91;
L94:;
si0=l5;
si1=l20;
si0=f1359(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L90;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l16=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l16;
if(si0){
goto L100;
}
si0=l9;
l13=si0;
goto L99;
L100:;
si0=l9;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L101;
}
si0=l9;
si1=l16;
si0=f15277(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l13;
si1=0U;
si2=l16;
si0=f15392(i,si0,si1,si2);
goto L5;
L101:;
si0=l16;
si1=1U;
si0=f15273(i,si0,si1);
l13=si0;
L99:;
si0=l13;
if(si0){
goto L5;
}
L98:;
si0=l9;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L93:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=l12;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l13=si0;
si0=0U;
l16=si0;
L102:;
{
si0=l9;
si1=l16;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l8;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l15;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l7;
si2=8U;
si1|=si2;
l7=si1;
si0+=si1;
si1=l8;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l40=sj1;
sj2=l14;
sj3=l22;
si2=sj2 <= sj3;
sj3=l14;
sj4=l22;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l40;
sj1=l14;
si0=sj0 <= sj1;
sj1=l40;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l19;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L102;
}
}
L91:;
si0=l10;
si0=!(si0);
if(si0){
goto L103;
}
si0=l9;
si1=l16;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l8;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l22;
si0=sj0 <= sj1;
sj1=l14;
sj2=l22;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L103:;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l24;
si1=l12;
si0=si0 < si1;
if(si0){
goto L83;
}
si0=l24;
si1=l12;
si0=si0 == si1;
if(si0){
goto L104;
}
si0=l8;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l7;
si1=l24;
si2=l12;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L105:;
{
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l13;
si0=si0 == si1;
if(si0){
goto L104;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
si0=!(sj0);
if(si0){
goto L105;
}
goto L4;
}
L104:;
si0=1244920U;
si1=74U;
si2=1246080U;
f673(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l8;
si1=l24;
si2=l4;
si3=l5;
si4=l1;
si5=l20;
si6=8U;
si7=0U;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L4;
L89:;
si0=l11;
si1=l1;
si2=1245984U;
f662(i,si0,si1,si2);
UNREACHABLE;
L88:;
si0=1244051U;
si1=35U;
si2=1246000U;
f673(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=1244051U;
si1=35U;
si2=1246016U;
f673(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l12;
si1=l7;
si2=1246032U;
f666(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=l12;
si1=l5;
si2=1246048U;
f666(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=l12;
si1=l24;
si2=1246064U;
f662(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l8;
si1=l24;
si2=l4;
si3=l5;
si4=l1;
si5=l20;
si6=l13;
si7=l7;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l13;
f15271(i,si0);
L4:;
si0=l20;
si1=l5;
si0=si0 == si1;
if(si0){
goto L106;
}
si0=l24;
si1=l5;
si0=si0 < si1;
if(si0){
goto L107;
}
si0=l5;
si1=l20;
si0-=si1;
l7=si0;
si1=l20;
si0=si0 > si1;
if(si0){
goto L110;
}
si0=l8;
si1=l20;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l9=si0;
si0=l15;
si1=l13;
si0+=si1;
l19=si0;
si0=l7;
si1=1U;
si0&=si1;
l10=si0;
si0=l5;
si1=-2U;
si0+=si1;
si1=l23;
si0=si0 != si1;
if(si0){
goto L109;
}
si0=0U;
l13=si0;
si0=0U;
l16=si0;
goto L108;
L110:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l7;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l13=si0;
si0=0U;
l16=si0;
L111:;
{
si0=l15;
si1=l16;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l19;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l9;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l7;
si2=8U;
si1|=si2;
l7=si1;
si0+=si1;
si1=l19;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l40=sj1;
sj2=l14;
sj3=l22;
si2=sj2 <= sj3;
sj3=l14;
sj4=l22;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l9;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l40;
sj1=l14;
si0=sj0 <= sj1;
sj1=l40;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l12;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L111;
}
}
L108:;
si0=l10;
si0=!(si0);
if(si0){
goto L112;
}
si0=l15;
si1=l16;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l19;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l9;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l22;
si0=sj0 <= sj1;
sj1=l14;
sj2=l22;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L112:;
si0=l18;
si1=l13;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L113;
}
si0=l18;
si1=l13;
si0|=si1;
l18=si0;
goto L106;
L113:;
si0=l24;
si1=l5;
si0=si0 == si1;
if(si0){
goto L114;
}
si0=l8;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l18=si0;
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L106;
}
si0=l7;
si1=l24;
si2=l5;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L115:;
{
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l13;
si0=si0 == si1;
if(si0){
goto L114;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L106;
}
goto L115;
}
L114:;
si0=1245060U;
si1=63U;
si2=1246176U;
f673(i,si0,si1,si2);
UNREACHABLE;
L107:;
si0=1244051U;
si1=35U;
si2=1246096U;
f673(i,si0,si1,si2);
UNREACHABLE;
L106:;
si0=l11;
si1=l5;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L119;
}
si0=l25;
si1=l5;
si0=si0 < si1;
if(si0){
goto L118;
}
si0=l25;
si1=l24;
si0=si0 > si1;
if(si0){
goto L117;
}
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l20;
si2=l2;
si3=l7;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l3;
si4=l7;
si3-=si4;
si4=l8;
si5=l5;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l25;
si6=l5;
si5-=si6;
si6=l18;
si7=1U;
si6&=si7;
si0=f1329(i,si0,si1,si2,si3,si4,si5,si6);
si0=l25;
si1=l20;
si0-=si1;
l7=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L116;
}
si0=l7;
si1=l20;
si0=si0 <= si1;
if(si0){
goto L120;
}
si0=l7;
si1=l20;
si2=1246160U;
f666(i,si0,si1,si2);
UNREACHABLE;
L120:;
si0=l1;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
si2=l20;
si1-=si2;
si2=l15;
si3=l7;
si4=l6;
si5=l7;
f1200(i,si0,si1,si2,si3,si4,si5);
goto L0;
L119:;
si0=l7;
si1=l3;
si2=1246112U;
f662(i,si0,si1,si2);
UNREACHABLE;
L118:;
si0=l5;
si1=l25;
si2=1246128U;
f675(i,si0,si1,si2);
UNREACHABLE;
L117:;
si0=l25;
si1=l24;
si2=1246128U;
f666(i,si0,si1,si2);
UNREACHABLE;
L116:;
si0=l7;
si1=l5;
si2=1246144U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l11;
si1=l12;
si2=l4;
si3=l5;
si4=l0;
si5=l9;
si6=l15;
si7=l7;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l15;
f15271(i,si0);
goto L1;
L2:;
si0=l12;
si1=l17;
si0=si0 == si1;
if(si0){
goto L121;
}
si0=l18;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l8;
si1=4U;
si0<<=(si1&31);
l16=si0;
si1=l13;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=24U;
si1*=si2;
l7=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l7;
si1=l13;
si0-=si1;
si1=l16;
si0-=si1;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
L122:;
{
si0=l15;
si0=!(si0);
if(si0){
goto L121;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l15=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L122;
}
goto L1;
}
L121:;
si0=1246480U;
si1=57U;
si2=1246540U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l12;
si1=l9;
si0=si0 < si1;
if(si0){
goto L125;
}
si0=l8;
si1=l12;
si2=l9;
si1-=si2;
l7=si1;
si0=si0 > si1;
if(si0){
goto L124;
}
si0=l8;
si1=l9;
si0=si0 > si1;
if(si0){
goto L129;
}
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L126;
}
si0=l2;
si1=l10;
si0+=si1;
l5=si0;
si0=l11;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L128;
}
si0=0U;
l7=si0;
sj0=0ULL;
l14=sj0;
goto L127;
L129:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L128:;
si0=0U;
l19=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l5;
l7=si0;
si0=l21;
l15=si0;
si0=l11;
l13=si0;
si0=0U;
l16=si0;
L130:;
{
si0=l13;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l40=sj1;
sj2=l14;
sj3=l22;
si2=sj2 <= sj3;
sj3=l14;
sj4=l22;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l40;
sj1=l14;
si0=sj0 <= sj1;
sj1=l40;
sj2=l14;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l20;
si1=l19;
si2=-2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L130;
}
}
si0=0U;
si1=l19;
si0-=si1;
l7=si0;
sj0=0ULL;
si1=l16;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
L127:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L126;
}
si0=l11;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l5;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l14;
sj1+=sj2;
si2=l21;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L126:;
si0=l8;
si1=l12;
si0=si0 > si1;
if(si0){
goto L123;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l9;
si1-=si2;
si2=l11;
si3=l8;
si4=l6;
si5=l8;
f1200(i,si0,si1,si2,si3,si4,si5);
goto L0;
L125:;
si0=1244051U;
si1=35U;
si2=1246556U;
f673(i,si0,si1,si2);
UNREACHABLE;
L124:;
si0=l8;
si1=l7;
si2=1246572U;
f666(i,si0,si1,si2);
UNREACHABLE;
L123:;
si0=l8;
si1=l12;
si2=1246588U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1287(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=l4;
si0+=si1;
si1=-8U;
si0+=si1;
l8=si0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L13;
}
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l10=si0;
si0=l4;
l8=si0;
L15:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L15;
}
}
si0=l9;
l10=si0;
L14:;
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=l10;
si0-=si1;
l7=si0;
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l9=si0;
L16:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L16;
}
}
si0=l6;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=1248548U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=1244008U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=1248652U;
f683(i,si0,si1);
UNREACHABLE;
L13:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=1245672U;
si3=l6;
si4=8U;
si3+=si4;
si4=1248668U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=l10;
si1=l5;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l5;
si1=l10;
si0-=si1;
l8=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l10;
si1=l5;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l7;
si1=l8;
si0-=si1;
l10=si0;
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
sj0=I64_CTZ(sj0);
l11=sj0;
si0=!(sj0);
l12=si0;
si0=!(si0);
if(si0){
goto L17;
}
goto L4;
L19:;
si0=l0;
si1=l1;
si2=l9;
si3=l7;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4);
f1277(i,si0,si1,si2,si3,sj4);
goto L1;
L18:;
si0=0U;
si1=0U;
si2=1248588U;
f663(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l10;
si1=2U;
si0+=si1;
l10=si0;
si1=l8;
si2=l8;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=l5;
sj2=l11;
sj0=f1229(i,si0,si1,sj2);
si0=l10;
if(si0){
goto L21;
}
si0=8U;
l4=si0;
goto L20;
L21:;
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l10;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=l5;
if(si0){
goto L23;
}
si0=l13;
l4=si0;
goto L22;
L23:;
si0=l13;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l13;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
goto L20;
L24:;
si0=l5;
si1=1U;
si0=f15273(i,si0,si1);
l4=si0;
L22:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
L20:;
si0=l10;
si1=l7;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=l10;
si2=l9;
si3=l10;
sj4=l11;
sj0=f1225(i,si0,si1,si2,si3,sj4);
si0=l4;
l9=si0;
si0=l10;
l7=si0;
goto L4;
L11:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l6;
si2=4U;
si1+=si2;
si2=1245668U;
si3=l6;
si4=8U;
si3+=si4;
si4=1248700U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1245709U;
si1=32U;
si2=1248684U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1244051U;
si1=35U;
si2=1248556U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l10;
si1=l5;
si2=1248572U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l5;
si1=l8;
si2=1248604U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l13;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l10;
si1=l7;
si2=1248620U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
l5=si0;
si0=l8;
si1=l2;
si2=l8;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=1998U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l2;
si1=l8;
si0=f1285(i,si0,si1);
l5=si0;
L25:;
si0=l5;
si0=!(si0);
if(si0){
goto L29;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l14;
if(si0){
goto L32;
}
si0=l15;
l13=si0;
goto L31;
L32:;
si0=l15;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l15;
si1=l14;
si0=f15277(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l13;
si1=0U;
si2=l14;
si0=f15392(i,si0,si1,si2);
goto L30;
L33:;
si0=l14;
si1=1U;
si0=f15273(i,si0,si1);
l13=si0;
L31:;
si0=l13;
si0=!(si0);
if(si0){
goto L26;
}
L30:;
si0=l2;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L28;
}
goto L2;
L29:;
si0=l2;
si1=l7;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l9;
si3=l2;
si4=l3;
si5=l8;
si6=8U;
si7=l5;
f1286(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L27;
L28:;
si0=l0;
si1=l1;
si2=l9;
si3=l2;
si4=l3;
si5=l8;
si6=l13;
si7=l5;
f1286(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=!(si0);
if(si0){
goto L27;
}
si0=l13;
f15271(i,si0);
L27:;
si0=l12;
if(si0){
goto L1;
}
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
f15271(i,si0);
goto L1;
L26:;
si0=l15;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l2;
si1=l7;
si2=1248636U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1288(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
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
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=l4;
si0+=si1;
si1=-8U;
si0+=si1;
l8=si0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L13;
}
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l10=si0;
si0=l4;
l8=si0;
L15:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L15;
}
}
si0=l9;
l10=si0;
L14:;
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=l10;
si0-=si1;
l7=si0;
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l9=si0;
L16:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L16;
}
}
si0=l6;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=1248548U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=1244008U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=1248828U;
f683(i,si0,si1);
UNREACHABLE;
L13:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=1245672U;
si3=l6;
si4=8U;
si3+=si4;
si4=1248844U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=l10;
si1=l5;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l5;
si1=l10;
si0-=si1;
l2=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
si1=l2;
si0-=si1;
l10=si0;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
sj0=I64_CTZ(sj0);
l11=sj0;
si0=!(sj0);
l12=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
l4=si0;
goto L3;
L19:;
si0=l0;
si1=l1;
si2=l9;
si3=l7;
si4=l3;
sj4=i64_load(&i->m0,(U64)si4);
f1277(i,si0,si1,si2,si3,sj4);
goto L1;
L18:;
si0=0U;
si1=0U;
si2=1248748U;
f663(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l10;
si1=2U;
si0+=si1;
l5=si0;
si1=l2;
si2=l2;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
if(si0){
goto L21;
}
si0=8U;
l13=si0;
goto L20;
L21:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l10;
if(si0){
goto L23;
}
si0=l14;
l13=si0;
goto L22;
L23:;
si0=l14;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l14;
si1=l10;
si0=f15277(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l13;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L20;
L24:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l13=si0;
L22:;
si0=l13;
si0=!(si0);
if(si0){
goto L7;
}
L20:;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l13;
si1=l4;
si2=l3;
si3=l4;
sj4=l11;
sj0=f1225(i,si0,si1,si2,si3,sj4);
si0=l5;
if(si0){
goto L26;
}
si0=8U;
l15=si0;
goto L25;
L26:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l10;
if(si0){
goto L28;
}
si0=l3;
l15=si0;
goto L27;
L28:;
si0=l3;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l3;
si1=l10;
si0=f15277(i,si0,si1);
l15=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l15;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L25;
L29:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l15=si0;
L27:;
si0=l15;
si0=!(si0);
if(si0){
goto L5;
}
L25:;
si0=l5;
si1=l7;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l15;
si1=l5;
si2=l9;
si3=l5;
sj4=l11;
sj0=f1225(i,si0,si1,si2,si3,sj4);
si0=l13;
l3=si0;
si0=l5;
l7=si0;
si0=l15;
l9=si0;
goto L3;
L11:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l6;
si2=4U;
si1+=si2;
si2=1245668U;
si3=l6;
si4=8U;
si3+=si4;
si4=1248876U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1245709U;
si1=32U;
si2=1248860U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1244051U;
si1=35U;
si2=1248716U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l10;
si1=l5;
si2=1248732U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l14;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l4;
si1=l2;
si2=1248764U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l5;
si1=l7;
si2=1248780U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
l10=si0;
si0=l2;
si1=l8;
si2=l2;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=1998U;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l8;
si1=l2;
si0=f1285(i,si0,si1);
l10=si0;
L30:;
si0=l10;
if(si0){
goto L35;
}
si0=8U;
l14=si0;
goto L34;
L35:;
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l16=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l10;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l17=si0;
si0=l16;
if(si0){
goto L37;
}
si0=l17;
l14=si0;
goto L36;
L37:;
si0=l17;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L38;
}
si0=l17;
si1=l16;
si0=f15277(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L33;
}
si0=l14;
si1=0U;
si2=l16;
si0=f15392(i,si0,si1,si2);
goto L34;
L38:;
si0=l16;
si1=1U;
si0=f15273(i,si0,si1);
l14=si0;
L36:;
si0=l14;
si0=!(si0);
if(si0){
goto L33;
}
L34:;
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l2;
si1=l4;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l0;
si1=l1;
si2=l9;
si3=l8;
si4=l3;
si5=l2;
si6=l14;
si7=l10;
f1286(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
si0=!(si0);
if(si0){
goto L39;
}
si0=l14;
f15271(i,si0);
L39:;
si0=l12;
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L40;
}
si0=l13;
f15271(i,si0);
L40:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
f15271(i,si0);
goto L1;
L33:;
si0=l17;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L32:;
si0=l8;
si1=l7;
si2=1248796U;
f666(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l2;
si1=l4;
si2=1248812U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1289(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l4;
si1=l7;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l6=si0;
si0=0U;
l7=si0;
L10:;
{
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
l11=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L12;
}
si0=l11;
l7=si0;
goto L11;
L12:;
si0=l11;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L11:;
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l0;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=1249268U;
si1=60U;
si2=1249328U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l2;
si1=-8U;
si0+=si1;
l12=si0;
si0=l5;
si1=-8U;
si0+=si1;
l13=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l6=si0;
L15:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
si0=l12;
si1=l6;
si0+=si1;
l7=si0;
si0=l13;
si1=l6;
si0+=si1;
l11=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si0=sj0 == sj1;
if(si0){
goto L15;
}
}
sj0=l10;
sj1=l9;
si0=sj0 <= sj1;
if(si0){
goto L13;
}
goto L5;
L14:;
si0=l6;
if(si0){
goto L5;
}
L13:;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
if(si0){
goto L16;
}
si0=0U;
l13=si0;
goto L4;
L16:;
si0=l3;
si1=1U;
si0&=si1;
l14=si0;
si0=0U;
l13=si0;
sj0=0ULL;
l10=sj0;
si0=0U;
l1=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l3=si0;
si0=l2;
l6=si0;
si0=l5;
l7=si0;
si0=l0;
l11=si0;
si0=0U;
l1=si0;
L18:;
{
si0=l11;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l3;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l10;
sj3=l9;
si2=sj2 <= sj3;
sj3=l10;
sj4=l9;
si3=sj3 < sj4;
si4=l3;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l3=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l7;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l10=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l10;
si0=sj0 <= sj1;
sj1=l15;
sj2=l10;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=l1;
si2=2U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
sj0=0ULL;
si1=l3;
sj1=(U64)(si1);
sj0-=sj1;
l10=sj0;
L17:;
si0=l14;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l2;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l10;
sj1+=sj2;
si2=l5;
si3=l6;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L8:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l8;
si2=4U;
si1+=si2;
si2=l8;
si3=l8;
si4=8U;
si3+=si4;
si4=1249252U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=1U;
l13=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0&=si1;
l14=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=0U;
l1=si0;
sj0=0ULL;
l10=sj0;
goto L19;
L21:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l3;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l3=si0;
si0=l5;
l6=si0;
si0=l2;
l7=si0;
si0=l0;
l11=si0;
si0=0U;
l1=si0;
L22:;
{
si0=l11;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l3;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l10;
sj3=l9;
si2=sj2 <= sj3;
sj3=l10;
sj4=l9;
si3=sj3 < sj4;
si4=l3;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l3=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l7;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l10=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l10;
si0=sj0 <= sj1;
sj1=l15;
sj2=l10;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=l1;
si2=2U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
sj0=0ULL;
si1=l3;
sj1=(U64)(si1);
sj0-=sj1;
l10=sj0;
L19:;
si0=l14;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l5;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l10;
sj1+=sj2;
si2=l2;
si3=l6;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l13;
si1=l4;
si0^=si1;
l4=si0;
L3:;
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L2:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l8;
si2=l8;
si3=4U;
si2+=si3;
si3=l8;
si4=8U;
si3+=si4;
si4=1195856U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f1290(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L11;
case 2:
goto L8;
case 3:
goto L11;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L8;
}
L11:;
si0=l0;
si1=l1;
si2=l2;
sj3=l3;
f1295(i,si0,si1,si2,sj3);
goto L1;
L10:;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l2;
if(si0){
goto L14;
}
si0=8U;
l6=si0;
si0=0U;
l4=si0;
goto L13;
L14:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
if(si0){
goto L16;
}
si0=l7;
l6=si0;
goto L15;
L16:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l7;
si1=l4;
si0=f15277(i,si0,si1);
l6=si0;
goto L15;
L17:;
si0=l4;
si0=f15269(i,si0);
l6=si0;
L15:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
L13:;
si0=l6;
si1=l1;
si2=l4;
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L2;
L12:;
sj0=l3;
sj1=-1ULL;
sj0+=sj1;
l8=sj0;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
sj0=l8;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=l8;
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
sj0=l8;
sj1=63ULL;
sj0&=sj1;
l8=sj0;
si0=0U;
l4=si0;
L21:;
{
si0=l7;
si1=l4;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l1;
si1=l4;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L21;
}
goto L18;
}
L20:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
sj3=l3;
f1245(i,si0,si1,si2,sj3);
goto L2;
L19:;
sj0=-1ULL;
sj1=-1ULL;
sj2=l8;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
sj2=l9;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l9;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
L18:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
sj3=l3;
f1295(i,si0,si1,si2,sj3);
goto L2;
L9:;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L4;
}
sj0=l3;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l10=si0;
si0=0U;
l4=si0;
L24:;
{
si0=l7;
si1=l4;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l1;
si1=l4;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L24;
}
goto L22;
}
L23:;
sj0=-1ULL;
sj1=-1ULL;
sj2=l3;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
l8=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l8;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
L22:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l0;
si1=l1;
si2=l2;
sj3=l3;
f1245(i,si0,si1,si2,sj3);
goto L1;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=l7;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1198692U;
si1=43U;
si2=1199188U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1253346U;
si1=43U;
si2=1253752U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L28;
}
sj0=l3;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=l4;
si1-=si2;
l6=si1;
si2=0U;
f1190(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l3=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L26;
}
goto L25;
L28:;
si0=1248927U;
si1=43U;
si2=1249092U;
f673(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L2;
L26:;
si0=l1;
si1=l6;
sj2=l3;
sj0=f1229(i,si0,si1,sj2);
L25:;
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l5;
si1=32U;
si0+=si1;
sj1=1ULL;
f1078(i,si0,sj1);
L29:;
si0=l5;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+16U,sj1);
L2:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1291(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
si1=l0;
si2=8U;
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
si1=!(sj1);
si0&=si1;
if(si0){
goto L1;
}
si0=l4;
if(si0){
goto L2;
}
si0=l5;
sj1=l1;
si2=l2;
f1309(i,si0,sj1,si2);
goto L1;
L2:;
si0=l0;
si1=4U;
si0+=si1;
sj1=l1;
si2=l2;
si0=f1292(i,si0,sj1,si2);
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L5;
}
sj0=0ULL;
l1=sj0;
goto L3;
L5:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
L9:;
{
si0=l6;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L9;
}
}
si0=l8;
l4=si0;
goto L7;
L8:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
si0=l7;
si1=l4;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l7;
si2=l4;
si1-=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L6:;
sj0=0ULL;
l1=sj0;
si0=l7;
switch(si0){
case 0:
goto L3;
case 1:
goto L10;
default:
goto L1;
}
L10:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
goto L3;
L4:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1249580U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1248892U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1249588U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
f15271(i,si0);
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1292(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L11;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L12;
}
L12:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l2;
si3=l2;
si4=1252240U;
f1054(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l5;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+8U);
l6=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l6;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
l5=si0;
si0=l0;
si1=l2;
si2=l4;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l2=si0;
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l5;
si1=l4;
sj2=l1;
sj0=f1229(i,si0,si1,sj2);
goto L1;
L11:;
si0=l0;
sj1=l1;
f1296(i,si0,sj1);
si0=1U;
l2=si0;
goto L1;
L10:;
si0=1U;
l2=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l1;
sj1=-1ULL;
sj0+=sj1;
l7=sj0;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
sj1=l7;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l4;
si1=l5;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=l7;
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
sj0=l7;
sj1=63ULL;
sj0&=sj1;
l9=sj0;
L16:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l7;
si0=!(sj0);
if(si0){
goto L16;
}
goto L13;
}
L15:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l6;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l5=si1;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l5;
si2=l6;
si3=l6;
si4=1252240U;
f1054(i,si0,si1,si2,si3,si4);
si0=l4;
si1=l4;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+16U);
l10=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=l10;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l6;
si2=l5;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
sj2=l1;
sj0=f1229(i,si0,si1,sj2);
goto L1;
L14:;
sj0=-1ULL;
sj1=-1ULL;
sj2=l9;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
sj2=l8;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l8;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
L13:;
si0=l0;
sj1=l1;
f1296(i,si0,sj1);
goto L1;
L9:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l12=si0;
si0=0U;
l2=si0;
L18:;
{
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
si1=l2;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L18;
}
}
si0=0U;
l2=si0;
goto L1;
L17:;
si0=0U;
l2=si0;
sj0=-1ULL;
sj1=-1ULL;
sj2=l1;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l7=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l7;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l10;
si2=l11;
si3=l11;
si4=1252240U;
f1054(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l6;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+24U);
l2=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+28U);
si3=l2;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l11;
si2=l10;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l2=si0;
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
sj2=l1;
sj0=f1229(i,si0,si1,sj2);
goto L1;
L8:;
si0=1235944U;
si1=43U;
si2=1236112U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l2=si0;
goto L1;
L6:;
si0=1198692U;
si1=43U;
si2=1199188U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1235944U;
si1=43U;
si2=1236112U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=1253346U;
si1=43U;
si2=1253752U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L22;
}
si0=l6;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l0;
si1=l4;
f1312(i,si0,si1);
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L20;
}
goto L19;
L22:;
si0=1248927U;
si1=43U;
si2=1249092U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
sj2=l1;
sj0=f1229(i,si0,si1,sj2);
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj1=1ULL;
f1078(i,si0,sj1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f1293(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l4;
if(si0){
goto L5;
}
si0=l5;
l6=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l5;
si1=l4;
si0=f15277(i,si0,si1);
l6=si0;
goto L4;
L6:;
si0=l4;
si0=f15269(i,si0);
l6=si0;
L4:;
si0=l6;
if(si0){
goto L2;
}
si0=l5;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1251312U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si1=l1;
si2=l4;
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f1294(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11,U32 l12,U32 l13,U32 l14,U32 l15,U32 l16,U32 l17,U32 l18) {
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
U64 l38=0;
U64 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U64 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l19=si0;
i->g0=si0;
si0=l19;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l19;
si1=l12;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l10;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l19;
si1=l14;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l14;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l19;
si1=l16;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l16;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l8;
si1=30U;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l12;
si1=30U;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l8;
si1=1U;
si0+=si1;
l20=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=l20;
si0=!(si0);
if(si0){
goto L50;
}
si0=l18;
si1=l20;
si0-=si1;
l10=si0;
si1=l12;
si2=1U;
si1+=si2;
l21=si1;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l21;
si0=!(si0);
if(si0){
goto L48;
}
si0=l10;
si1=l21;
si0-=si1;
l10=si0;
si1=l12;
si2=l8;
si1+=si2;
l22=si1;
si2=1U;
si1+=si2;
l23=si1;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l22;
si1=2U;
si0+=si1;
l24=si0;
si1=l10;
si2=l23;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l8;
si1=l1;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l20;
si1=l3;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l23;
si1=l5;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l23;
si1=l8;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l23;
si1=l7;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l23;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l21;
si1=l23;
si0=f1359(i,si0,si1);
l10=si0;
goto L56;
L57:;
si0=l23;
si1=l21;
si0=f1359(i,si0,si1);
l10=si0;
L56:;
si0=l20;
si1=l12;
si0=si0 >= si1;
l25=si0;
if(si0){
goto L59;
}
si0=l12;
si1=l20;
si0=f1359(i,si0,si1);
l14=si0;
goto L58;
L59:;
si0=l20;
si1=l12;
si0=f1359(i,si0,si1);
l14=si0;
L58:;
si0=l14;
si1=l10;
si2=l14;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l21;
si1=l8;
si0=si0 <= si1;
l26=si0;
if(si0){
goto L61;
}
si0=l21;
si1=l8;
si0=f1359(i,si0,si1);
l14=si0;
goto L60;
L61:;
si0=l8;
si1=l21;
si0=f1359(i,si0,si1);
l14=si0;
L60:;
si0=l14;
si1=l10;
si2=l14;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l20;
si1=l21;
si0=si0 >= si1;
l27=si0;
if(si0){
goto L63;
}
si0=l21;
si1=l20;
si0=f1359(i,si0,si1);
l14=si0;
goto L62;
L63:;
si0=l20;
si1=l21;
si0=f1359(i,si0,si1);
l14=si0;
L62:;
si0=l14;
si1=l10;
si2=l14;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
if(si0){
goto L65;
}
si0=8U;
l28=si0;
goto L64;
L65:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L36;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l10;
if(si0){
goto L67;
}
si0=l14;
l28=si0;
goto L66;
L67:;
si0=l14;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L68;
}
si0=l14;
si1=l10;
si0=f15277(i,si0,si1);
l28=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l28;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L64;
L68:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l28=si0;
L66:;
si0=l28;
si0=!(si0);
if(si0){
goto L40;
}
L64:;
si0=l17;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si0=l17;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l30=si0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l30;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l23;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l8;
si1=l12;
si0=si0 >= si1;
l32=si0;
if(si0){
goto L70;
}
si0=l7;
si1=l23;
si2=l13;
si3=l12;
si4=l2;
si5=l8;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L69;
L70:;
si0=l7;
si1=l23;
si2=l2;
si3=l8;
si4=l13;
si5=l12;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L69:;
si0=l29;
si1=0U;
si2=l20;
si0=si2?si0:si1;
l33=si0;
si0=l31;
si1=0U;
si2=l21;
si0=si2?si0:si1;
l34=si0;
si0=l7;
si1=l10;
si0+=si1;
l35=si0;
si0=l2;
si1=l14;
si0+=si1;
l36=si0;
si0=l6;
si1=l8;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l37=si0;
L73:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L72;
}
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si1=l4;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si1=l10;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
si0=sj0 == sj1;
if(si0){
goto L73;
}
}
sj0=l38;
sj1=l39;
si0=sj0 > sj1;
if(si0){
goto L71;
}
goto L19;
L72:;
si0=l10;
si0=!(si0);
if(si0){
goto L19;
}
L71:;
si0=l8;
si0=!(si0);
if(si0){
goto L74;
}
si0=l8;
si1=1U;
si0&=si1;
l40=si0;
si0=0U;
l16=si0;
si0=0U;
l18=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L75;
}
si0=l8;
si1=-2U;
si0&=si1;
l41=si0;
si0=0U;
l16=si0;
si0=l6;
l10=si0;
si0=l4;
l14=si0;
si0=0U;
l18=si0;
L76:;
{
si0=l10;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l42=si0;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l42;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l41;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L76;
}
}
L75:;
si0=l40;
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l14=si0;
si1=l4;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l16;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L74:;
si0=l36;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l18=si0;
si0=l6;
si1=-8U;
si0+=si1;
l42=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l10=si0;
L79:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L78;
}
si0=l18;
si1=l10;
si0+=si1;
l14=si0;
si0=l42;
si1=l10;
si0+=si1;
l16=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
si0=sj0 == sj1;
if(si0){
goto L79;
}
}
sj0=l38;
sj1=l39;
si0=sj0 > sj1;
if(si0){
goto L77;
}
goto L20;
L78:;
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
L77:;
si0=0U;
l44=si0;
si0=0U;
l18=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L80;
}
si0=l8;
si1=1U;
si0&=si1;
l29=si0;
si0=0U;
l16=si0;
si0=0U;
l18=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L81;
}
si0=l8;
si1=-2U;
si0&=si1;
l41=si0;
si0=0U;
l16=si0;
si0=l2;
l10=si0;
si0=l6;
l14=si0;
si0=0U;
l18=si0;
L82:;
{
si0=l10;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l42=si0;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l42;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l41;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L82;
}
}
L81:;
si0=l29;
si0=!(si0);
if(si0){
goto L83;
}
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l14=si0;
si1=l6;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l16;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L83:;
si0=0U;
l18=si0;
si0=l8;
l42=si0;
si0=l2;
l10=si0;
si0=l0;
l14=si0;
si0=l17;
l16=si0;
L84:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l41=si0;
si0=l18;
si1=255U;
si0&=si1;
if(si0){
goto L86;
}
si0=l41;
l18=si0;
goto L85;
L86:;
si0=l41;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l18=si0;
L85:;
si0=l16;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l42;
si1=-1U;
si0+=si1;
l42=si0;
if(si0){
goto L84;
}
}
L80:;
si0=l33;
si1=l18;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l45=si0;
si0=1U;
l33=si0;
goto L14;
L55:;
si0=l18;
si1=l8;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l18;
si1=l8;
si0-=si1;
l10=si0;
si1=l12;
si2=l8;
si1+=si2;
l16=si1;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l10;
si1=l16;
si0-=si1;
si1=l16;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l8;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L88;
}
si0=l12;
si1=l8;
si0=f1359(i,si0,si1);
l35=si0;
goto L87;
L88:;
si0=l8;
si1=l12;
si0=f1359(i,si0,si1);
l35=si0;
L87:;
si0=l35;
if(si0){
goto L90;
}
si0=8U;
l28=si0;
goto L89;
L90:;
si0=l35;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l35;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L36;
}
si0=l35;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l10;
if(si0){
goto L92;
}
si0=l14;
l28=si0;
goto L91;
L92:;
si0=l14;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L93;
}
si0=l14;
si1=l10;
si0=f15277(i,si0,si1);
l28=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l28;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L89;
L93:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l28=si0;
L91:;
si0=l28;
si0=!(si0);
if(si0){
goto L35;
}
L89:;
si0=l17;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l16;
si1=1U;
si0+=si1;
l22=si0;
si0=l8;
si1=l12;
si0=si0 < si1;
if(si0){
goto L95;
}
si0=l1;
si1=l8;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l17;
si1=l0;
si2=l8;
si3=3U;
si2<<=(si3&31);
l20=si2;
si0=f15390(i,si0,si1,si2);
l21=si0;
si0=l10;
si1=l16;
si2=l0;
si3=l8;
si4=l9;
si5=l12;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si1=l8;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l14;
si1=l16;
si2=l2;
si3=l8;
si4=l15;
si5=l12;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l0;
si1=l1;
si2=l2;
si3=l8;
si4=l13;
si5=l12;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l2;
si1=l3;
si2=l21;
si3=l8;
si4=l11;
si5=l12;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l22;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L94;
}
goto L21;
L95:;
si0=l1;
si1=l8;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l17;
si1=l0;
si2=l8;
si3=3U;
si2<<=(si3&31);
l20=si2;
si0=f15390(i,si0,si1,si2);
l21=si0;
si0=l10;
si1=l16;
si2=l9;
si3=l12;
si4=l0;
si5=l8;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si1=l8;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l14;
si1=l16;
si2=l15;
si3=l12;
si4=l2;
si5=l8;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l0;
si1=l1;
si2=l13;
si3=l12;
si4=l2;
si5=l8;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l2;
si1=l3;
si2=l11;
si3=l12;
si4=l21;
si5=l8;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l22;
si1=l1;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l22;
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L34;
}
si0=0U;
l23=si0;
si0=l16;
l42=si0;
si0=l10;
l18=si0;
L96:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l41=si0;
si0=l23;
si1=255U;
si0&=si1;
if(si0){
goto L98;
}
si0=l41;
l23=si0;
goto L97;
L98:;
si0=l41;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l23=si0;
L97:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l42;
si1=-1U;
si0+=si1;
l42=si0;
if(si0){
goto L96;
}
}
si0=l1;
si1=l23;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=l3;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=0U;
l23=si0;
si0=l16;
l42=si0;
si0=l2;
l0=si0;
si0=l14;
l18=si0;
L99:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l41=si0;
si0=l23;
si1=255U;
si0&=si1;
if(si0){
goto L101;
}
si0=l41;
l23=si0;
goto L100;
L101:;
si0=l41;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l23=si0;
L100:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l42;
si1=-1U;
si0+=si1;
l42=si0;
if(si0){
goto L99;
}
goto L28;
}
L94:;
si0=l22;
si0=!(si0);
if(si0){
goto L33;
}
si0=l0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
l23=si0;
si0=l16;
l42=si0;
si0=l10;
l18=si0;
L102:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l41=si0;
si0=l23;
si1=255U;
si0&=si1;
if(si0){
goto L104;
}
si0=l41;
l23=si0;
goto L103;
L104:;
si0=l41;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l23=si0;
L103:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l42;
si1=-1U;
si0+=si1;
l42=si0;
if(si0){
goto L102;
}
}
si0=l1;
si1=l23;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=l3;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=0U;
l23=si0;
si0=l16;
l42=si0;
si0=l2;
l0=si0;
si0=l14;
l18=si0;
L105:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l41=si0;
si0=l23;
si1=255U;
si0&=si1;
if(si0){
goto L107;
}
si0=l41;
l23=si0;
goto L106;
L107:;
si0=l41;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l23=si0;
L106:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l42;
si1=-1U;
si0+=si1;
l42=si0;
if(si0){
goto L105;
}
goto L31;
}
L54:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l19;
si2=20U;
si1+=si2;
si2=l19;
si3=12U;
si2+=si3;
si3=l19;
si4=24U;
si3+=si4;
si4=1251164U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L53:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l19;
si2=20U;
si1+=si2;
si2=l19;
si3=12U;
si2+=si3;
si3=l19;
si4=24U;
si3+=si4;
si4=1251148U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L52:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l19;
si2=20U;
si1+=si2;
si2=l19;
si3=12U;
si2+=si3;
si3=l19;
si4=24U;
si3+=si4;
si4=1251132U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L51:;
si0=1248892U;
si1=35U;
si2=1249848U;
f673(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=1248927U;
si1=43U;
si2=1249864U;
f673(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=1248892U;
si1=35U;
si2=1249880U;
f673(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=1248927U;
si1=43U;
si2=1249896U;
f673(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=1248892U;
si1=35U;
si2=1249912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l24;
si1=l10;
si2=1249928U;
f666(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l8;
si1=l1;
si2=1249944U;
f666(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l20;
si1=l3;
si2=1249960U;
f666(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l23;
si1=l5;
si2=1249976U;
f666(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l8;
si1=l23;
si2=1249992U;
f666(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l23;
si1=l7;
si2=1250008U;
f666(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l14;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L39:;
si0=1248892U;
si1=35U;
si2=1249720U;
f673(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=1248892U;
si1=35U;
si2=1249736U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1248892U;
si1=35U;
si2=1249736U;
f673(i,si0,si1,si2);
UNREACHABLE;
L36:;
f53(i);
UNREACHABLE;
L35:;
si0=l14;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L34:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l23=si0;
si0=l22;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L28;
}
goto L25;
L33:;
si0=1248927U;
si1=43U;
si2=1249816U;
f673(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l23=si0;
si0=l22;
si1=l3;
si0=si0 > si1;
if(si0){
goto L25;
}
L31:;
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l23;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l8;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l21;
si1=l4;
si2=l20;
si0=f15390(i,si0,si1,si2);
l0=si0;
si0=l10;
si1=l16;
si2=l4;
si3=l8;
si4=l9;
si5=l12;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l7;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l7;
l3=si0;
L30:;
si0=l8;
si1=l3;
si2=1249784U;
f666(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l14;
si1=l16;
si2=l6;
si3=l8;
si4=l15;
si5=l12;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si1=l5;
si2=l6;
si3=l8;
si4=l13;
si5=l12;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l6;
si1=l7;
si2=l0;
si3=l8;
si4=l11;
si5=l12;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
l1=si0;
si0=l22;
si1=l5;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l4;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=0U;
l0=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L108;
}
si0=l16;
l8=si0;
L109:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l18=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L111;
}
si0=l18;
l0=si0;
goto L110;
L111:;
si0=l18;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l0=si0;
L110:;
si0=l4;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L109;
}
}
L108:;
si0=l15;
si1=l0;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
l3=si0;
si0=l22;
si1=l7;
si0=si0 > si1;
if(si0){
goto L25;
}
goto L22;
L28:;
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l23;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l8;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l21;
si1=l4;
si2=l20;
si0=f15390(i,si0,si1,si2);
l0=si0;
si0=l10;
si1=l16;
si2=l9;
si3=l12;
si4=l4;
si5=l8;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l7;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l7;
l3=si0;
L27:;
si0=l8;
si1=l3;
si2=1249768U;
f666(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l14;
si1=l16;
si2=l15;
si3=l12;
si4=l6;
si5=l8;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si1=l5;
si2=l13;
si3=l12;
si4=l6;
si5=l8;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l6;
si1=l7;
si2=l11;
si3=l12;
si4=l0;
si5=l8;
si6=l28;
si7=l35;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
l1=si0;
si0=l22;
si1=l5;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l4;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=0U;
l0=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L112;
}
si0=l16;
l8=si0;
L113:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l18=si0;
si0=l0;
si1=255U;
si0&=si1;
if(si0){
goto L115;
}
si0=l18;
l0=si0;
goto L114;
L115:;
si0=l18;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l0=si0;
L114:;
si0=l4;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L113;
}
}
L112:;
si0=l15;
si1=l0;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
l3=si0;
si0=l22;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L22;
}
L25:;
si0=l22;
si1=l3;
si2=1249832U;
f666(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l5;
l1=si0;
L23:;
si0=l8;
si1=l1;
si2=1249752U;
f666(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l6;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L116;
}
L117:;
{
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l0=si0;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L119;
}
si0=l0;
l4=si0;
goto L118;
L119:;
si0=l0;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l4=si0;
L118:;
si0=l6;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L117;
}
}
L116:;
si0=l8;
si1=l4;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l35;
si0=!(si0);
if(si0){
goto L12;
}
goto L13;
L21:;
si0=l22;
si1=l1;
si2=1249800U;
f666(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l8;
if(si0){
goto L120;
}
si0=1U;
l45=si0;
goto L17;
L120:;
si0=l8;
si1=1U;
si0&=si1;
l40=si0;
si0=0U;
l16=si0;
si0=0U;
l18=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L121;
}
si0=l8;
si1=-2U;
si0&=si1;
l41=si0;
si0=0U;
l16=si0;
si0=l6;
l14=si0;
si0=l2;
l10=si0;
si0=0U;
l18=si0;
L122:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l14;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l42=si0;
si1=l42;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
si3=l14;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l38=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l41;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L122;
}
}
L121:;
si0=l40;
si0=!(si0);
if(si0){
goto L123;
}
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
si2=l16;
sj2=(U64)(si2);
si3=l6;
si4=l10;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L123:;
si0=l36;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si0=1U;
l45=si0;
goto L18;
L19:;
si0=0U;
l45=si0;
si0=0U;
l16=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L124;
}
si0=l8;
si1=1U;
si0&=si1;
l40=si0;
si0=0U;
l16=si0;
si0=0U;
l18=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L125;
}
si0=l8;
si1=-2U;
si0&=si1;
l41=si0;
si0=0U;
l16=si0;
si0=l4;
l14=si0;
si0=l6;
l10=si0;
si0=0U;
l18=si0;
L126:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l14;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l42=si0;
si1=l42;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l16;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l16=si2;
sj2=(U64)(si2);
si3=l14;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l38=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l41;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L126;
}
}
L125:;
si0=l40;
si0=!(si0);
if(si0){
goto L127;
}
si0=l6;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
si2=l16;
sj2=(U64)(si2);
si3=l4;
si4=l10;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L127:;
si0=0U;
l16=si0;
si0=l8;
l18=si0;
si0=l2;
l10=si0;
si0=l6;
l14=si0;
L128:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l42=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L130;
}
si0=l42;
l16=si0;
goto L129;
L130:;
si0=l42;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L129:;
si0=l10;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L128;
}
}
L124:;
si0=l36;
si1=l16;
sj1=(U64)(si1);
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
L18:;
sj0=l38;
si0=!(sj0);
if(si0){
goto L17;
}
si0=l33;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
si1=1U;
si0&=si1;
l33=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L132;
}
si0=0U;
l18=si0;
si0=0U;
l42=si0;
goto L131;
L132:;
si0=l8;
si1=-2U;
si0&=si1;
l41=si0;
si0=0U;
l18=si0;
si0=l2;
l10=si0;
si0=l0;
l14=si0;
si0=l17;
l16=si0;
si0=0U;
l42=si0;
L133:;
{
si0=l16;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l18;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l18;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l18=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l41;
si1=l42;
si2=2U;
si1+=si2;
l42=si1;
si0=si0 != si1;
if(si0){
goto L133;
}
}
L131:;
si0=l33;
si0=!(si0);
if(si0){
goto L134;
}
si0=l17;
si1=l42;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l2;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l18;
sj2=(U64)(si2);
sj1-=sj2;
si2=l0;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
sj1=l38;
sj2=l39;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
L134:;
si0=1U;
l44=si0;
si0=0U;
l33=si0;
si0=l18;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l29;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L14;
L17:;
si0=l33;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l18=si0;
si0=l2;
si1=-8U;
si0+=si1;
l42=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l10=si0;
L138:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L137;
}
si0=l18;
si1=l10;
si0+=si1;
l14=si0;
si0=l42;
si1=l10;
si0+=si1;
l16=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
si0=sj0 == sj1;
if(si0){
goto L138;
}
}
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
if(si0){
goto L136;
}
goto L135;
L137:;
si0=l10;
if(si0){
goto L135;
}
L136:;
si0=l8;
if(si0){
goto L139;
}
si0=0U;
l33=si0;
si0=0U;
l44=si0;
goto L14;
L139:;
si0=l8;
si1=1U;
si0&=si1;
l29=si0;
si0=0U;
l33=si0;
si0=0U;
l18=si0;
si0=0U;
l42=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L140;
}
si0=l8;
si1=-2U;
si0&=si1;
l41=si0;
si0=0U;
l18=si0;
si0=l0;
l10=si0;
si0=l2;
l14=si0;
si0=l17;
l16=si0;
si0=0U;
l42=si0;
L141:;
{
si0=l16;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l18;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l18;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l18=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l41;
si1=l42;
si2=2U;
si1+=si2;
l42=si1;
si0=si0 != si1;
if(si0){
goto L141;
}
}
L140:;
si0=l29;
si0=!(si0);
if(si0){
goto L142;
}
si0=l17;
si1=l42;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l0;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l18;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L142:;
si0=0U;
l44=si0;
goto L14;
L135:;
si0=l8;
if(si0){
goto L15;
}
L16:;
si0=1U;
l44=si0;
si0=0U;
l33=si0;
goto L14;
L15:;
si0=1U;
l44=si0;
si0=l8;
si1=1U;
si0&=si1;
l29=si0;
si0=0U;
l33=si0;
si0=0U;
l18=si0;
si0=0U;
l42=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L143;
}
si0=l8;
si1=-2U;
si0&=si1;
l41=si0;
si0=0U;
l18=si0;
si0=l2;
l10=si0;
si0=l0;
l14=si0;
si0=l17;
l16=si0;
si0=0U;
l42=si0;
L144:;
{
si0=l16;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l18;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l18;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l18=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l41;
si1=l42;
si2=2U;
si1+=si2;
l42=si1;
si0=si0 != si1;
if(si0){
goto L144;
}
}
L143:;
si0=l29;
si0=!(si0);
if(si0){
goto L14;
}
si0=l17;
si1=l42;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l2;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l18;
sj2=(U64)(si2);
sj1-=sj2;
si2=l0;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L14:;
si0=l32;
if(si0){
goto L146;
}
si0=l35;
si1=l24;
si2=l9;
si3=l12;
si4=l0;
si5=l8;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L145;
L146:;
si0=l35;
si1=l24;
si2=l0;
si3=l8;
si4=l9;
si5=l12;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L145:;
si0=l22;
si1=-2U;
si0=si0 >= si1;
if(si0){
goto L151;
}
si0=l22;
si1=l1;
si0=si0 > si1;
if(si0){
goto L154;
}
si0=l22;
if(si0){
goto L153;
}
si0=0U;
l42=si0;
goto L152;
L154:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L153:;
si0=0U;
l10=si0;
si0=l7;
l14=si0;
si0=l35;
l16=si0;
si0=l0;
l18=si0;
si0=0U;
l42=si0;
L155:;
{
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l41=si0;
si0=l42;
si1=255U;
si0&=si1;
if(si0){
goto L157;
}
si0=l41;
l42=si0;
goto L156;
L157:;
si0=l41;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l42=si0;
L156:;
si0=l1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L150;
}
si0=l18;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
si0=l22;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L155;
}
}
L152:;
si0=l22;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L149;
}
si0=l7;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si0=l0;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l42;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=-8U;
si0+=si1;
l16=si0;
si0=l13;
si1=-8U;
si0+=si1;
l18=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
l0=si0;
L160:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L159;
}
si0=l16;
si1=l0;
si0+=si1;
l10=si0;
si0=l18;
si1=l0;
si0+=si1;
l14=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
si0=sj0 == sj1;
if(si0){
goto L160;
}
}
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
if(si0){
goto L158;
}
goto L148;
L159:;
si0=l0;
if(si0){
goto L148;
}
L158:;
si0=l12;
if(si0){
goto L161;
}
si0=0U;
l40=si0;
goto L147;
L161:;
si0=l12;
si1=1U;
si0&=si1;
l46=si0;
si0=0U;
l40=si0;
si0=0U;
l10=si0;
si0=0U;
l14=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L162;
}
si0=l12;
si1=-2U;
si0&=si1;
l41=si0;
si0=l17;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l0=si0;
si0=0U;
l10=si0;
si0=0U;
l14=si0;
L163:;
{
si0=l1;
si1=l0;
si0+=si1;
l16=si0;
si1=8U;
si0+=si1;
si1=l15;
si2=l0;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
si3=l0;
si2+=si3;
l42=si2;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=16U;
si0+=si1;
si1=l18;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l42;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l41;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L163;
}
}
L162:;
si0=l46;
si0=!(si0);
if(si0){
goto L147;
}
si0=l30;
si1=l14;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
si1=l15;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l10;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=l0;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L147;
L151:;
si0=l22;
si1=l24;
si2=1250024U;
f666(i,si0,si1,si2);
UNREACHABLE;
L150:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L149:;
si0=l22;
si1=l1;
si2=1250040U;
f663(i,si0,si1,si2);
UNREACHABLE;
L148:;
si0=1U;
l40=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L147;
}
si0=l12;
si1=1U;
si0&=si1;
l46=si0;
si0=0U;
l10=si0;
si0=0U;
l14=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L164;
}
si0=l12;
si1=-2U;
si0&=si1;
l41=si0;
si0=l17;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l0=si0;
si0=0U;
l10=si0;
si0=0U;
l14=si0;
L165:;
{
si0=l1;
si1=l0;
si0+=si1;
l16=si0;
si1=8U;
si0+=si1;
si1=l13;
si2=l0;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l15;
si3=l0;
si2+=si3;
l42=si2;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=16U;
si0+=si1;
si1=l18;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l42;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l41;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L165;
}
}
L164:;
si0=l46;
si0=!(si0);
if(si0){
goto L147;
}
si0=l30;
si1=l14;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
si1=l13;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l10;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
si3=l0;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L147:;
si0=l32;
if(si0){
goto L167;
}
si0=l35;
si1=l24;
si2=l30;
si3=l12;
si4=l6;
si5=l8;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L166;
L167:;
si0=l35;
si1=l24;
si2=l6;
si3=l8;
si4=l30;
si5=l12;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L166:;
si0=l35;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l32=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l40;
si0=!(si0);
if(si0){
goto L172;
}
si0=l11;
si1=-8U;
si0+=si1;
l16=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
l0=si0;
si0=l17;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
L175:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L174;
}
si0=l16;
si1=l0;
si0+=si1;
l10=si0;
si0=l18;
si1=l0;
si0+=si1;
l14=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
si0=sj0 == sj1;
if(si0){
goto L175;
}
}
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
if(si0){
goto L173;
}
goto L171;
L174:;
si0=l0;
if(si0){
goto L171;
}
L173:;
si0=l12;
if(si0){
goto L176;
}
si0=0U;
l41=si0;
goto L170;
L176:;
si0=l12;
si1=1U;
si0&=si1;
l1=si0;
si0=0U;
l41=si0;
si0=0U;
l14=si0;
si0=0U;
l16=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L177;
}
si0=l12;
si1=-2U;
si0&=si1;
l42=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=16U;
si0+=si1;
l0=si0;
si0=0U;
l14=si0;
si0=l11;
l10=si0;
si0=0U;
l16=si0;
L178:;
{
si0=l0;
si1=-8U;
si0+=si1;
l18=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l42;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L178;
}
}
L177:;
si0=l1;
si0=!(si0);
if(si0){
goto L170;
}
si0=l30;
si1=l16;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l10=si0;
si1=l11;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L170;
L172:;
si0=l12;
if(si0){
goto L179;
}
si0=0U;
l41=si0;
goto L170;
L179:;
si0=0U;
l14=si0;
si0=l12;
l16=si0;
si0=l30;
l0=si0;
si0=l11;
l10=si0;
L180:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l18=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L182;
}
si0=l18;
l14=si0;
goto L181;
L182:;
si0=l18;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L181:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L180;
}
}
si0=l34;
si1=l14;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l41=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L169;
}
si0=l26;
if(si0){
goto L184;
}
si0=l6;
si1=l23;
si2=l30;
si3=l21;
si4=l2;
si5=l8;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L183;
L184:;
si0=l6;
si1=l23;
si2=l2;
si3=l8;
si4=l30;
si5=l21;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L183:;
si0=l36;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L186;
}
si0=0U;
l41=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L168;
}
si0=l19;
si1=l23;
si2=l8;
si1-=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l19;
si1=l21;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l21;
si0=si0 != si1;
if(si0){
goto L185;
}
si0=l23;
si1=l8;
si0=si0 == si1;
if(si0){
goto L168;
}
si0=0U;
l10=si0;
si0=l30;
l0=si0;
si0=l21;
l14=si0;
L187:;
{
si0=l37;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l16=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L189;
}
si0=l16;
l10=si0;
goto L188;
L189:;
si0=l16;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L188:;
si0=l37;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l37;
si1=8U;
si0+=si1;
l37=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L187;
}
goto L168;
}
L186:;
si0=1251080U;
si1=35U;
si2=1251116U;
f673(i,si0,si1,si2);
UNREACHABLE;
L185:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l19;
si2=16U;
si1+=si2;
si2=l19;
si3=20U;
si2+=si3;
si3=l19;
si4=24U;
si3+=si4;
si4=1196048U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L171:;
si0=1U;
l41=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L170;
}
si0=l12;
si1=1U;
si0&=si1;
l1=si0;
si0=0U;
l14=si0;
si0=0U;
l16=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L190;
}
si0=l12;
si1=-2U;
si0&=si1;
l42=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=16U;
si0+=si1;
l0=si0;
si0=0U;
l14=si0;
si0=l11;
l10=si0;
si0=0U;
l16=si0;
L191:;
{
si0=l0;
si1=-8U;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l38=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l42;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L191;
}
}
L190:;
si0=l1;
si0=!(si0);
if(si0){
goto L170;
}
si0=l30;
si1=l16;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
sj2=(U64)(si2);
si3=l11;
si4=l0;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L170:;
si0=l34;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L169:;
si0=l25;
if(si0){
goto L192;
}
si0=l6;
si1=l23;
si2=l30;
si3=l12;
si4=l2;
si5=l20;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L168;
L192:;
si0=l6;
si1=l23;
si2=l2;
si3=l20;
si4=l30;
si5=l12;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L168:;
si0=l6;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=3ULL;
si0=sj0 > sj1;
if(si0){
goto L195;
}
si0=l29;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l33;
si1=l41;
si0=si0 != si1;
if(si0){
goto L196;
}
si0=l23;
if(si0){
goto L197;
}
si0=0U;
l42=si0;
goto L193;
L197:;
si0=0U;
l14=si0;
si0=l6;
l0=si0;
si0=l7;
l10=si0;
si0=l23;
l16=si0;
L198:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l18=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L200;
}
si0=l18;
l14=si0;
goto L199;
L200:;
si0=l18;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L199:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L198;
}
}
si0=0U;
l42=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L193;
}
si0=1250056U;
si1=70U;
si2=1250128U;
f673(i,si0,si1,si2);
UNREACHABLE;
L196:;
si0=l22;
si1=3U;
si0<<=(si1&31);
l0=si0;
si0=l22;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
L203:;
{
si0=l0;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L202;
}
si0=l6;
si1=l0;
si0+=si1;
l14=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
sj0=l38;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
si0=sj0 == sj1;
if(si0){
goto L203;
}
}
sj0=l39;
sj1=l38;
si0=sj0 <= sj1;
if(si0){
goto L201;
}
goto L194;
L202:;
si0=l0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L194;
}
L201:;
si0=l23;
if(si0){
goto L204;
}
si0=0U;
l42=si0;
goto L193;
L204:;
si0=l23;
si1=1U;
si0&=si1;
l37=si0;
si0=0U;
l42=si0;
si0=l22;
if(si0){
goto L206;
}
si0=0U;
l14=si0;
si0=0U;
l16=si0;
goto L205;
L206:;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l17;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si0=l23;
si1=-2U;
si0&=si1;
l1=si0;
si0=0U;
l14=si0;
si0=l6;
l0=si0;
si0=0U;
l16=si0;
L207:;
{
si0=l0;
si1=l10;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l18=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l1;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L207;
}
}
L205:;
si0=l37;
si0=!(si0);
if(si0){
goto L193;
}
si0=l6;
si1=l16;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l10=si0;
si1=l7;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L193;
L195:;
si0=1251028U;
si1=35U;
si2=1251064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L194:;
si0=1U;
l42=si0;
si0=l23;
si0=!(si0);
if(si0){
goto L193;
}
si0=l23;
si1=1U;
si0&=si1;
l37=si0;
si0=l22;
if(si0){
goto L209;
}
si0=0U;
l14=si0;
si0=0U;
l16=si0;
goto L208;
L209:;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l17;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si0=l23;
si1=-2U;
si0&=si1;
l1=si0;
si0=0U;
l14=si0;
si0=l6;
l0=si0;
si0=0U;
l16=si0;
L210:;
{
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
si4=-8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l38=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L210;
}
}
L208:;
si0=l37;
si0=!(si0);
if(si0){
goto L193;
}
si0=l6;
si1=l16;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
sj2=(U64)(si2);
si3=l7;
si4=l0;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L193:;
si0=l41;
if(si0){
goto L217;
}
si0=l31;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L214;
}
si0=l9;
si1=-8U;
si0+=si1;
l16=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
l0=si0;
si0=l17;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
L218:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L216;
}
si0=l18;
si1=l0;
si0+=si1;
l10=si0;
si0=l16;
si1=l0;
si0+=si1;
l14=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
si0=sj0 == sj1;
if(si0){
goto L218;
}
}
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
if(si0){
goto L215;
}
goto L212;
L217:;
si0=0U;
l10=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L219;
}
si0=l12;
l14=si0;
si0=l30;
l0=si0;
L220:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l16=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L222;
}
si0=l16;
l10=si0;
goto L221;
L222:;
si0=l16;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L221:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L220;
}
}
L219:;
si0=l31;
si1=l10;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L213;
L216:;
si0=l0;
if(si0){
goto L212;
}
L215:;
si0=l12;
if(si0){
goto L223;
}
si0=0U;
l1=si0;
goto L211;
L223:;
si0=l12;
si1=1U;
si0&=si1;
l37=si0;
si0=0U;
l1=si0;
si0=0U;
l14=si0;
si0=0U;
l16=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L224;
}
si0=l12;
si1=-2U;
si0&=si1;
l41=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=16U;
si0+=si1;
l0=si0;
si0=0U;
l14=si0;
si0=l9;
l10=si0;
si0=0U;
l16=si0;
L225:;
{
si0=l0;
si1=-8U;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l38=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l41;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L225;
}
}
L224:;
si0=l37;
si0=!(si0);
if(si0){
goto L211;
}
si0=l30;
si1=l16;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
sj2=(U64)(si2);
si3=l9;
si4=l0;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L211;
L214:;
si0=l12;
if(si0){
goto L226;
}
si0=0U;
l1=si0;
goto L211;
L226:;
si0=l12;
si1=1U;
si0&=si1;
l37=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L228;
}
si0=0U;
l14=si0;
si0=0U;
l16=si0;
goto L227;
L228:;
si0=l12;
si1=-2U;
si0&=si1;
l1=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=16U;
si0+=si1;
l0=si0;
si0=0U;
l14=si0;
si0=l9;
l10=si0;
si0=0U;
l16=si0;
L229:;
{
si0=l0;
si1=-8U;
si0+=si1;
l18=si0;
si1=l18;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l38=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l1;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L229;
}
}
L227:;
si0=l37;
si0=!(si0);
if(si0){
goto L230;
}
si0=l30;
si1=l16;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l14;
sj2=(U64)(si2);
si3=l9;
si4=l0;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
sj1=l38;
sj2=l39;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
L230:;
si0=0U;
l1=si0;
si0=l14;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L211;
}
si0=l31;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L213:;
si0=l41;
l1=si0;
goto L211;
L212:;
si0=1U;
l1=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L211;
}
si0=l12;
si1=1U;
si0&=si1;
l37=si0;
si0=0U;
l14=si0;
si0=0U;
l16=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L231;
}
si0=l12;
si1=-2U;
si0&=si1;
l41=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=16U;
si0+=si1;
l0=si0;
si0=0U;
l14=si0;
si0=l9;
l10=si0;
si0=0U;
l16=si0;
L232:;
{
si0=l0;
si1=-8U;
si0+=si1;
l18=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l18;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l14;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l14=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l41;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L232;
}
}
L231:;
si0=l37;
si0=!(si0);
if(si0){
goto L211;
}
si0=l30;
si1=l16;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l10=si0;
si1=l9;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L211:;
si0=l26;
if(si0){
goto L234;
}
si0=l7;
si1=l23;
si2=l30;
si3=l21;
si4=l4;
si5=l8;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L233;
L234:;
si0=l7;
si1=l23;
si2=l4;
si3=l8;
si4=l30;
si5=l21;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L233:;
si0=l29;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 >= sj1;
if(si0){
goto L241;
}
si0=l33;
if(si0){
goto L243;
}
si0=l8;
si0=!(si0);
if(si0){
goto L242;
}
si0=0U;
l14=si0;
si0=l2;
l0=si0;
si0=l4;
l10=si0;
L244:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l16=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L246;
}
si0=l16;
l14=si0;
goto L245;
L246:;
si0=l16;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L245:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L244;
}
}
si0=l14;
si0=!(si0);
if(si0){
goto L242;
}
si0=l36;
si1=l36;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L242;
L243:;
si0=l8;
si0=!(si0);
if(si0){
goto L242;
}
si0=l8;
si1=1U;
si0&=si1;
l41=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L248;
}
si0=0U;
l10=si0;
si0=0U;
l14=si0;
goto L247;
L248:;
si0=l8;
si1=-2U;
si0&=si1;
l18=si0;
si0=0U;
l10=si0;
si0=l2;
l0=si0;
si0=l4;
l8=si0;
si0=0U;
l14=si0;
L249:;
{
si0=l0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l16=si0;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l18;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L249;
}
}
L247:;
si0=l41;
si0=!(si0);
if(si0){
goto L250;
}
si0=l2;
si1=l14;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l8=si0;
si1=l4;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l10;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
sj1=l38;
sj2=l39;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
L250:;
si0=l10;
si1=1U;
si0&=si1;
if(si0){
goto L240;
}
L242:;
si0=l4;
si1=l23;
si2=l6;
si3=l23;
si4=l42;
si5=l7;
si6=l23;
si7=l1;
si0=f1289(i,si0,si1,si2,si3,si4,si5,si6,si7);
l41=si0;
si0=l4;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=3ULL;
si0=sj0 > sj1;
if(si0){
goto L238;
}
si0=l23;
si1=l24;
si0=si0 > si1;
if(si0){
goto L239;
}
si0=l45;
si1=l40;
si0^=si1;
si1=l42;
si0=si0 == si1;
if(si0){
goto L251;
}
si0=l23;
si0=!(si0);
if(si0){
goto L235;
}
si0=0U;
l10=si0;
si0=l6;
l0=si0;
si0=l35;
l8=si0;
si0=l23;
l14=si0;
L252:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l16=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L254;
}
si0=l16;
l10=si0;
goto L253;
L254:;
si0=l16;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L253:;
si0=l0;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L252;
}
}
si0=l10;
si0=!(si0);
if(si0){
goto L235;
}
si0=1249344U;
si1=68U;
si2=1249412U;
f673(i,si0,si1,si2);
UNREACHABLE;
L251:;
si0=l22;
si1=3U;
si0<<=(si1&31);
l0=si0;
si0=l22;
si1=24U;
si0*=si1;
si1=l17;
si0+=si1;
si1=24U;
si0+=si1;
l8=si0;
L257:;
{
si0=l0;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L256;
}
si0=l6;
si1=l0;
si0+=si1;
l10=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l38=sj0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
sj0=l38;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
si0=sj0 == sj1;
if(si0){
goto L257;
}
}
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
if(si0){
goto L255;
}
goto L237;
L256:;
si0=l0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L237;
}
L255:;
si0=l23;
if(si0){
goto L258;
}
si0=0U;
l1=si0;
goto L236;
L258:;
si0=l23;
si1=1U;
si0&=si1;
l37=si0;
si0=0U;
l1=si0;
si0=l22;
if(si0){
goto L260;
}
si0=0U;
l10=si0;
si0=0U;
l14=si0;
goto L259;
L260:;
si0=l23;
si1=-2U;
si0&=si1;
l18=si0;
si0=l22;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si0=0U;
l10=si0;
si0=l6;
l0=si0;
si0=0U;
l14=si0;
L261:;
{
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l8;
si4=-8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
l38=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l18;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L261;
}
}
L259:;
si0=l37;
si0=!(si0);
if(si0){
goto L236;
}
si0=l6;
si1=l14;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
si2=l10;
sj2=(U64)(si2);
si3=l35;
si4=l0;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L236;
L241:;
si0=1250760U;
si1=33U;
si2=1251012U;
f673(i,si0,si1,si2);
UNREACHABLE;
L240:;
si0=1250916U;
si1=78U;
si2=1250996U;
f673(i,si0,si1,si2);
UNREACHABLE;
L239:;
si0=l23;
si1=l24;
si2=1250144U;
f666(i,si0,si1,si2);
UNREACHABLE;
L238:;
si0=1250864U;
si1=35U;
si2=1250900U;
f673(i,si0,si1,si2);
UNREACHABLE;
L237:;
si0=1U;
l1=si0;
si0=l23;
si0=!(si0);
if(si0){
goto L236;
}
si0=l23;
si1=1U;
si0&=si1;
l37=si0;
si0=l22;
if(si0){
goto L263;
}
si0=0U;
l10=si0;
si0=0U;
l14=si0;
goto L262;
L263:;
si0=l23;
si1=-2U;
si0&=si1;
l18=si0;
si0=l22;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si0=0U;
l10=si0;
si0=l6;
l0=si0;
si0=0U;
l14=si0;
L264:;
{
si0=l0;
si1=l8;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l16=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l18;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L264;
}
}
L262:;
si0=l37;
si0=!(si0);
if(si0){
goto L236;
}
si0=l6;
si1=l14;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l8=si0;
si1=l35;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l10;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L236:;
si0=l42;
si1=l1;
si0^=si1;
l42=si0;
L235:;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L11;
}
si0=l25;
if(si0){
goto L266;
}
si0=l7;
si1=l23;
si2=l11;
si3=l12;
si4=l17;
si5=l20;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L265;
L266:;
si0=l7;
si1=l23;
si2=l17;
si3=l20;
si4=l11;
si5=l12;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L265:;
si0=l29;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L10;
}
si0=0U;
l10=si0;
si0=l12;
si1=1U;
si0+=si1;
switch(si0){
case 0:
goto L269;
case 1:
goto L267;
default:
goto L268;
}
L269:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L268:;
si0=0U;
l10=si0;
si0=l21;
l0=si0;
si0=l30;
l8=si0;
L270:;
{
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l14=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L272;
}
si0=l14;
l10=si0;
goto L271;
L272:;
si0=l14;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L271:;
si0=l0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L270;
}
}
L267:;
si0=l31;
si1=l10;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l27;
if(si0){
goto L274;
}
si0=l35;
si1=l24;
si2=l30;
si3=l21;
si4=l2;
si5=l20;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L273;
L274:;
si0=l35;
si1=l24;
si2=l2;
si3=l20;
si4=l30;
si5=l21;
si6=l28;
si7=l5;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L273:;
si0=l32;
sj0=i64_load(&i->m0,(U64)si0);
sj1=4ULL;
si0=sj0 >= sj1;
if(si0){
goto L8;
}
si0=l35;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l2;
si1=l3;
si2=l6;
si3=l23;
si4=l42;
si5=l7;
si6=l23;
si7=l44;
si0=f1289(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l22;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
si0=l42;
if(si0){
goto L276;
}
si0=l23;
si1=1U;
si0&=si1;
l15=si0;
si0=l22;
if(si0){
goto L278;
}
si0=0U;
l10=si0;
si0=0U;
l14=si0;
goto L277;
L278:;
si0=l23;
si1=-2U;
si0&=si1;
l18=si0;
si0=l22;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=32U;
si0+=si1;
l8=si0;
si0=0U;
l10=si0;
si0=l6;
l0=si0;
si0=0U;
l14=si0;
L279:;
{
si0=l0;
si1=l8;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l16=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l18;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L279;
}
}
L277:;
si0=l15;
si0=!(si0);
if(si0){
goto L280;
}
si0=l6;
si1=l14;
si2=3U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
l6=si0;
si1=l35;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l10;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
sj1=l38;
sj2=l39;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
L280:;
si0=l10;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L275;
}
si0=1250176U;
si1=70U;
si2=1250248U;
f673(i,si0,si1,si2);
UNREACHABLE;
L276:;
si0=0U;
l8=si0;
si0=l35;
l0=si0;
si0=l23;
l10=si0;
L281:;
{
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l14=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L283;
}
si0=l14;
l8=si0;
goto L282;
L283:;
si0=l14;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L282:;
si0=l6;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L281;
}
}
si0=l8;
if(si0){
goto L4;
}
L275:;
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L3;
}
si0=l41;
if(si0){
goto L285;
}
si0=l23;
si0=!(si0);
if(si0){
goto L284;
}
si0=l23;
si1=1U;
si0&=si1;
l18=si0;
si0=l22;
if(si0){
goto L287;
}
si0=0U;
l8=si0;
si0=0U;
l10=si0;
goto L286;
L287:;
si0=l23;
si1=-2U;
si0&=si1;
l16=si0;
si0=l22;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=32U;
si0+=si1;
l0=si0;
si0=0U;
l8=si0;
si0=l4;
l6=si0;
si0=0U;
l10=si0;
L288:;
{
si0=l6;
si1=l0;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l14=si0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l43=sj1;
sj2=l38;
sj3=l39;
si2=sj2 <= sj3;
sj3=l38;
sj4=l39;
si3=sj3 < sj4;
si4=l8;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
l38=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l43;
sj1=l38;
si0=sj0 <= sj1;
sj1=l43;
sj2=l38;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si0=l16;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L288;
}
}
L286:;
si0=l18;
si0=!(si0);
if(si0){
goto L289;
}
si0=l4;
si1=l10;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l4=si0;
si1=l35;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
si2=l8;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=l39;
si0=sj0 <= sj1;
sj1=l38;
sj2=l39;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
L289:;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L284;
}
si0=1250264U;
si1=70U;
si2=1250336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L285:;
si0=l23;
si0=!(si0);
if(si0){
goto L284;
}
si0=0U;
l6=si0;
L290:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l35;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l0=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L292;
}
si0=l0;
l6=si0;
goto L291;
L292:;
si0=l0;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L291:;
si0=l4;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l35;
si1=8U;
si0+=si1;
l35=si0;
si0=l23;
si1=-1U;
si0+=si1;
l23=si0;
if(si0){
goto L290;
}
}
si0=l6;
if(si0){
goto L2;
}
L284:;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l28;
f15271(i,si0);
L12:;
si0=l19;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L11:;
si0=1250812U;
si1=35U;
si2=1250848U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1250760U;
si1=33U;
si2=1250796U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l21;
si1=l21;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1250708U;
si1=33U;
si2=1250744U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l19;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l0;
si2=1249112U;
si3=l19;
si4=24U;
si3+=si4;
si4=1250692U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l22;
si1=l3;
si2=1250160U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1250640U;
si1=35U;
si2=1250676U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1250548U;
si1=75U;
si2=1250624U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1250496U;
si1=35U;
si2=1250532U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1250404U;
si1=75U;
si2=1250480U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1250352U;
si1=35U;
si2=1250388U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1295(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
sj0=l3;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l3;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l2;
si1=l5;
si0-=si1;
l6=si0;
si0=l1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l8=si0;
L11:;
{
si0=l7;
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l9;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si1=l2;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=8U;
l7=si0;
goto L12;
L13:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l1;
if(si0){
goto L15;
}
si0=l11;
l7=si0;
goto L14;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l11;
si1=l1;
si0=f15277(i,si0,si1);
l7=si0;
goto L14;
L16:;
si0=l1;
si0=f15269(i,si0);
l7=si0;
L14:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
L12:;
si0=l7;
si1=l8;
si2=l1;
si0=f15390(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
sj0=l3;
sj1=63ULL;
sj0&=sj1;
l10=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
goto L3;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=8U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l1;
si1=l6;
sj2=l10;
sj0=f1229(i,si0,si1,sj2);
l10=sj0;
si0=l9;
if(si0){
goto L3;
}
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
goto L2;
L7:;
si0=1248927U;
si1=43U;
si2=1249092U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l11;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l5;
si1=l2;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
L19:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L19;
}
goto L2;
}
L18:;
si0=1195744U;
si1=32U;
si2=1195776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l4;
si1=l6;
f1193(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
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
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1296(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
L5:;
{
si0=l5;
si1=l7;
l8=si1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L4;
}
si0=l8;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si1=l8;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
}
L4:;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si2=l3;
si3=l3;
si4=1252240U;
f1054(i,si0,si1,si2,si3,si4);
si0=l6;
si1=l6;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
l7=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=l3;
si1=l4;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l3;
si2=l4;
si1-=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L6:;
sj0=l1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
goto L1;
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
sj2=l1;
sj0=f1229(i,si0,si1,sj2);
l1=sj0;
si0=l5;
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l7=si0;
L11:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L11;
}
goto L1;
}
L10:;
si0=1195744U;
si1=32U;
si2=1195776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l6;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=l6;
f1193(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L12:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L13:;
si0=0U;
si1=0U;
si2=1251180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1248927U;
si1=43U;
si2=1249092U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1297(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l3;
si2=l2;
si3=3U;
si2<<=(si3&31);
l6=si2;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
f1266(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l5;
si1=l3;
si2=l4;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si0+=si1;
l4=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l3;
si2=l4;
si3=3U;
si2<<=(si3&31);
l6=si2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si2=l6;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
f1266(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
si1=l3;
si2=l4;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si0+=si1;
l4=si0;
L1:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1298(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l4;
if(si0){
goto L5;
}
si0=l5;
l6=si0;
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l5;
si1=l4;
si0=f15277(i,si0,si1);
l6=si0;
goto L4;
L6:;
si0=l4;
si0=f15269(i,si0);
l6=si0;
L4:;
si0=l6;
if(si0){
goto L2;
}
si0=l5;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1251328U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si1=l1;
si2=l4;
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L1:;
f53(i);
UNREACHABLE;
L0:;
}

void f1299(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l3;
si2=l2;
si3=3U;
si2<<=(si3&31);
l6=si2;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
f1270(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l5;
si1=l3;
si2=l4;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L3:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si0+=si1;
l4=si0;
goto L1;
L2:;
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=28U;
si0+=si1;
si1=l3;
si2=l4;
si3=3U;
si2<<=(si3&31);
l6=si2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l1;
si2=l6;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
f1270(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
si1=l3;
si2=l4;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L4:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=l4;
si0+=si1;
l4=si0;
L1:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1300(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l2;
if(si0){
goto L8;
}
si0=8U;
l4=si0;
si0=8U;
si1=l1;
si2=0U;
si0=f15390(i,si0,si1,si2);
goto L6;
L8:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l5;
if(si0){
goto L10;
}
si0=l6;
l4=si0;
goto L9;
L10:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l4=si0;
goto L9;
L11:;
si0=l5;
si0=f15269(i,si0);
l4=si0;
L9:;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=l1;
si2=l5;
si0=f15390(i,si0,si1,si2);
goto L6;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l7;
if(si0){
goto L16;
}
si0=l5;
l4=si0;
goto L15;
L16:;
si0=l5;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l5;
si1=l7;
si0=f15277(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L14;
L17:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l4=si0;
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
L14:;
si0=l2;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
L20:;
{
si0=l1;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l8;
si1=l5;
si2=8U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L18;
}
L19:;
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=0U;
si1=l6;
si0-=si1;
l9=si0;
L18:;
si0=l4;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l4;
si1=8U;
si0+=si1;
si1=255U;
si2=l9;
si3=3U;
si2<<=(si3&31);
si3=-8U;
si2+=si3;
si0=f15392(i,si0,si1,si2);
L21:;
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l9;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
si1=l1;
si2=l5;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l9;
si2=1U;
si1+=si2;
l5=si1;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l1;
si2=l6;
si1+=si2;
si2=l2;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L6;
L13:;
si0=0U;
si1=0U;
si2=1251460U;
f663(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l4;
sj1=0ULL;
sj2=0ULL;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
sj2-=sj3;
sj3=l3;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=l7;
si3=-8U;
si2+=si3;
si0=f15390(i,si0,si1,si2);
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l5;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l9;
si1=l2;
si2=1251476U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=l2;
si2=1251492U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1301(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
l9=si0;
si0=l1;
l10=si0;
L8:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L8;
}
}
si0=l7;
l8=si0;
L7:;
si0=l4;
if(si0){
goto L5;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L4;
}
goto L1;
L6:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l1;
si1=l6;
si0+=si1;
l11=si0;
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l12=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L10:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l7;
l9=si0;
L9:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 < si3;
l7=si2;
si0=si2?si0:si1;
l10=si0;
if(si0){
goto L24;
}
si0=8U;
l6=si0;
goto L23;
L24:;
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l10;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l13;
if(si0){
goto L26;
}
si0=l14;
l6=si0;
goto L25;
L26:;
si0=l14;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l14;
si1=l13;
si0=f15277(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=0U;
si2=l13;
si0=f15392(i,si0,si1,si2);
goto L23;
L27:;
si0=l13;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
L25:;
si0=l6;
si0=!(si0);
if(si0){
goto L11;
}
L23:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
si1=l8;
si2=l9;
si1=si1 != si2;
si2=l7;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L21;
default:
goto L20;
}
L22:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l10;
if(si0){
goto L29;
}
si0=l8;
l9=si0;
goto L28;
L29:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l8;
si1=l10;
si0=f15277(i,si0,si1);
l9=si0;
goto L28;
L30:;
si0=l10;
si0=f15269(i,si0);
l9=si0;
L28:;
si0=l9;
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
si1=l3;
si2=l10;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L21:;
si0=l7;
if(si0){
goto L13;
}
si0=l8;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l8;
si1=l4;
si2=1251556U;
f666(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l5;
si1=l10;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l15;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=1U;
si0+=si1;
l10=si0;
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l13;
si0-=si1;
si1=l1;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
si2=l1;
si3=l10;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l7=si1;
si2=3U;
si1>>=(si2&31);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l5;
si1=l13;
si2=l6;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L31:;
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l6;
si1=3U;
si0&=si1;
l14=si0;
si0=l6;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=0U;
l10=si0;
goto L33;
L34:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l17;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=0U;
l10=si0;
si0=0U;
si1=l7;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l20=si0;
si0=0U;
l21=si0;
L35:;
{
si0=l19;
si1=l10;
si0+=si1;
l6=si0;
si1=l18;
si2=l10;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l7;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
si1=l7;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
si0=l20;
si1=l21;
si2=-4U;
si1+=si2;
l21=si1;
si0=si0 != si1;
if(si0){
goto L35;
}
}
si0=0U;
si1=l21;
si0-=si1;
l10=si0;
si0=l13;
si1=l21;
si0-=si1;
l13=si0;
L33:;
si0=l14;
si0=!(si0);
if(si0){
goto L32;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si0=l17;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L36:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L36;
}
}
L32:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
l15=sj0;
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l5;
si1=l13;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L37:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L19:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=l5;
si1=l10;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
sj2=-1ULL;
sj1+=sj2;
sj2=l22;
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L18:;
si0=l8;
si1=l9;
si0-=si1;
l7=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l8;
si1=l9;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l10;
l13=si0;
goto L38;
L39:;
si0=l5;
si1=l10;
si2=l7;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
L38:;
si0=l6;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l13;
si2=l7;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l8;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj0&=sj1;
l15=sj0;
si0=l7;
si1=l10;
si0=si0 != si1;
if(si0){
goto L40;
}
si0=l5;
si1=l10;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L40:;
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L17:;
si0=l8;
if(si0){
goto L43;
}
si0=8U;
l10=si0;
goto L42;
L43:;
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L16;
}
si0=l8;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L45;
}
si0=l7;
l10=si0;
goto L44;
L45:;
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L46;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L41;
}
si0=l10;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
goto L42;
L46:;
si0=l6;
si1=1U;
si0=f15273(i,si0,si1);
l10=si0;
L44:;
si0=l10;
si0=!(si0);
if(si0){
goto L41;
}
L42:;
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l5;
si1=l8;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l15;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si0-=si1;
si1=l11;
si2=l1;
si3=l8;
si4=1U;
si3+=si4;
l7=si3;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l11=si1;
si2=3U;
si1>>=(si2&31);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L47;
}
si0=l5;
si1=l10;
si2=l6;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L47:;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l6;
si1=3U;
si0&=si1;
l13=si0;
si0=l6;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=0U;
l6=si0;
goto L49;
L50:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l19;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=0U;
l6=si0;
si0=0U;
si1=l11;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l18=si0;
si0=0U;
l14=si0;
L51:;
{
si0=l12;
si1=l6;
si0+=si1;
l7=si0;
si1=l21;
si2=l6;
si1+=si2;
l11=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l11;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l11;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
si0=l18;
si1=l14;
si2=-4U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L51;
}
}
si0=0U;
si1=l14;
si0-=si1;
l6=si0;
si0=l10;
si1=l14;
si0-=si1;
l10=si0;
L49:;
si0=l13;
si0=!(si0);
if(si0){
goto L48;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si0=l19;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
L52:;
{
si0=l6;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L52;
}
}
L48:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l2;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=0U;
si1=l9;
si2=l2;
si1-=si2;
l6=si1;
si2=-1U;
si1+=si2;
l8=si1;
si2=l8;
si3=l6;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l6;
si1=1U;
si0=si0 > si1;
si1=l9;
si2=l2;
si1=si1 != si2;
si0&=si1;
sj0=(U64)(si0);
l15=sj0;
si0=l10;
si1=3U;
si0<<=(si1&31);
l6=si0;
L54:;
{
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l5;
si1=l10;
si2=l8;
si3=1U;
si2+=si3;
f1196(i,si0,si1,si2);
L55:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=1U;
si0=si0 > si1;
l7=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj0=l15;
si0=!(sj0);
l11=si0;
si0=0U;
si1=l8;
si2=-1U;
si1+=si2;
l13=si1;
si2=l13;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
sj0=l15;
sj1=0ULL;
si2=l7;
sj0=si2?sj0:sj1;
l15=sj0;
si0=l11;
si0=!(si0);
if(si0){
goto L54;
}
}
L53:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
l15=sj0;
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L56;
}
si0=l5;
si1=l10;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L56:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si0-=si1;
si1=l4;
si2=l9;
si1-=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l5;
si1=l10;
si2=l9;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L57:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L41:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L16:;
f53(i);
UNREACHABLE;
L15:;
si0=l9;
si1=l2;
si2=1251540U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l10;
si1=l9;
si2=1251540U;
f675(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l9;
si1=l8;
si2=1251556U;
f675(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l8;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l14;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1251604U;
si1=30U;
si2=1251636U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l21=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si1=1U;
si0+=si1;
l10=si0;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L59;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l21;
si0-=si1;
si1=l11;
si2=l1;
si3=l10;
si4=3U;
si3<<=(si4&31);
l10=si3;
si2+=si3;
l18=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l9=si1;
si2=l12;
si3=l3;
si4=l10;
si3+=si4;
l19=si3;
si2-=si3;
si3=3U;
si2>>=(si3&31);
l10=si2;
si3=l9;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L63;
}
si0=l5;
si1=l21;
si2=l9;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
goto L62;
L63:;
si0=l9;
si0=!(si0);
if(si0){
goto L61;
}
L62:;
si0=l9;
si1=1U;
si0&=si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=0U;
l10=si0;
goto L64;
L65:;
si0=0U;
l10=si0;
si0=0U;
si1=l9;
si2=536870910U;
si1&=si2;
si0-=si1;
l11=si0;
si0=l3;
si1=l8;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l13=si0;
si0=l1;
si1=l9;
si0+=si1;
l14=si0;
si0=l20;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=0U;
l9=si0;
L66:;
{
si0=l1;
si1=l10;
si0+=si1;
l8=si0;
si1=l13;
si2=l10;
si1+=si2;
l6=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
si3=l10;
si2+=si3;
l7=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l7;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L66;
}
}
si0=0U;
si1=l9;
si0-=si1;
l10=si0;
si0=l21;
si1=l9;
si0-=si1;
l21=si0;
L64:;
si0=l12;
si0=!(si0);
if(si0){
goto L61;
}
si0=l20;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l18;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
L61:;
si0=l5;
si1=l21;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L58;
}
si0=l3;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l21;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l5;
si1=l21;
si2=l10;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l21=si0;
L67:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l21;
si2=l10;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L58;
L60:;
si0=l10;
si1=l2;
si2=1251572U;
f662(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l10;
si1=l4;
si2=1251588U;
f662(i,si0,si1,si2);
UNREACHABLE;
L58:;
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
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1251652U;
si1=30U;
si2=1251684U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1302(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l6;
l9=si0;
si0=l1;
l10=si0;
L14:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L14;
}
}
si0=l7;
l8=si0;
L13:;
si0=l4;
if(si0){
goto L11;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L10;
}
goto L1;
L12:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L11:;
si0=l1;
si1=l6;
si0+=si1;
l11=si0;
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l12=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L16:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
si0=l7;
l9=si0;
L15:;
si0=l8;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 < si3;
l7=si2;
si0=si2?si0:si1;
l10=si0;
if(si0){
goto L24;
}
si0=8U;
l6=si0;
goto L23;
L25:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l10;
if(si0){
goto L27;
}
si0=l8;
l9=si0;
goto L26;
L27:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l8;
si1=l10;
si0=f15277(i,si0,si1);
l9=si0;
goto L26;
L28:;
si0=l10;
si0=f15269(i,si0);
l9=si0;
L26:;
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=l1;
si2=l10;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L24:;
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l10;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l13;
if(si0){
goto L30;
}
si0=l14;
l6=si0;
goto L29;
L30:;
si0=l14;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l14;
si1=l13;
si0=f15277(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=0U;
si2=l13;
si0=f15392(i,si0,si1,si2);
goto L23;
L31:;
si0=l13;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
L29:;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
L23:;
si0=l8;
si1=l9;
si0=si0 > si1;
l13=si0;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
si1=l8;
si2=l9;
si1=si1 != si2;
si2=l7;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L20;
default:
goto L21;
}
L22:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l10;
if(si0){
goto L33;
}
si0=l8;
l9=si0;
goto L32;
L33:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l8;
si1=l10;
si0=f15277(i,si0,si1);
l9=si0;
goto L32;
L34:;
si0=l10;
si0=f15269(i,si0);
l9=si0;
L32:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si1=l3;
si2=l10;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L21:;
si0=l13;
if(si0){
goto L5;
}
si0=l9;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l9;
si1=l2;
si2=1251700U;
f666(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l7;
if(si0){
goto L4;
}
si0=l8;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l8;
si1=l4;
si2=1251716U;
f666(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l9;
si1=l8;
si0-=si1;
l7=si0;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l5;
si1=l10;
si2=l7;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L35:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l10;
si2=l7;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l1;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0&=sj1;
l15=sj0;
goto L3;
L18:;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l1;
si2=l8;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
sj0&=sj1;
sj1=1ULL;
sj0+=sj1;
l15=sj0;
goto L3;
L17:;
si0=l8;
si1=l9;
si0-=si1;
l7=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l5;
si1=l10;
si2=l7;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L36:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l10;
si2=l7;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l3;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0&=sj1;
l15=sj0;
goto L3;
L10:;
si0=1251604U;
si1=30U;
si2=1251764U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l8;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l14;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=l8;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l8;
si1=l9;
si2=1251700U;
f675(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l9;
si1=l8;
si2=1251716U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
si1=l9;
si2=l13;
si0=si2?si0:si1;
l9=si0;
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l5;
si1=l10;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L37:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l9;
si1=1U;
si0+=si1;
l10=si0;
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l9;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l13;
si0-=si1;
si1=l11;
si2=l1;
si3=l10;
si4=3U;
si3<<=(si4&31);
l10=si3;
si2+=si3;
l14=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l8=si1;
si2=l12;
si3=l3;
si4=l10;
si3+=si4;
l11=si3;
si2-=si3;
si3=3U;
si2>>=(si3&31);
l10=si2;
si3=l8;
si4=l10;
si3=si3 < si4;
si1=si3?si1:si2;
l8=si1;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l5;
si1=l13;
si2=l8;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
goto L41;
L42:;
si0=l8;
si0=!(si0);
if(si0){
goto L40;
}
L41:;
si0=l8;
si1=1U;
si0&=si1;
l12=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=0U;
l10=si0;
goto L43;
L44:;
si0=0U;
l10=si0;
si0=0U;
si1=l8;
si2=536870910U;
si1&=si2;
si0-=si1;
l2=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l9;
si0+=si1;
l1=si0;
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=0U;
l9=si0;
L45:;
{
si0=l7;
si1=l10;
si0+=si1;
l8=si0;
si1=l4;
si2=l10;
si1+=si2;
l3=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l1;
si3=l10;
si2+=si3;
l6=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l6;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l2;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L45;
}
}
si0=0U;
si1=l9;
si0-=si1;
l10=si0;
si0=l13;
si1=l9;
si0-=si1;
l13=si0;
L43:;
si0=l12;
si0=!(si0);
if(si0){
goto L40;
}
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
L40:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l13;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L39:;
si0=l10;
si1=l2;
si2=1251732U;
f662(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l10;
si1=l4;
si2=1251748U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1251652U;
si1=30U;
si2=1251780U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1303(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si1=l0;
si2=0U;
si3=l1;
si2-=si3;
l1=si2;
si1<<=(si2&31);
si2=l1;
si3=31U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L3;
}
si0=l0;
l4=si0;
goto L1;
L3:;
si0=0U;
l4=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L12;
case 2:
goto L13;
case 3:
goto L14;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L8;
}
L14:;
si0=1U;
l4=si0;
si0=l1;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L11;
}
goto L1;
L13:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
goto L4;
L12:;
si0=1U;
l4=si0;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
L11:;
si0=l0;
si1=l1;
si0>>=(si1&31);
l4=si0;
si1=l4;
si2=l1;
si1<<=(si2&31);
si2=l0;
si1=si1 != si2;
si0+=si1;
l4=si0;
goto L1;
L10:;
si0=l1;
si1=32U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l4=si1;
si0>>=(si1&31);
l1=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=1U;
si0>>=(si1&31);
l2=si0;
si0=l1;
si1=l4;
si2=31U;
si1&=si2;
si0<<=(si1&31);
si1=l0;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si1=1U;
si0&=si1;
si1=l2;
si0+=si1;
l4=si0;
goto L1;
L15:;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
goto L1;
L9:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si0>>=(si1&31);
l4=si0;
si1=l1;
si0<<=(si1&31);
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1251872U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1252016U;
f683(i,si0,si1);
UNREACHABLE;
L8:;
si0=l1;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L4;
}
goto L1;
L7:;
si0=l1;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L1;
L6:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1251872U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1252032U;
f683(i,si0,si1);
UNREACHABLE;
L5:;
si0=l0;
si1=-2147483648U;
si0=si0 > si1;
l4=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
si0>>=(si1&31);
l4=si0;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U64 f1304(rustpythonInstance*i,U64 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
sj1=l0;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
if(si0){
goto L2;
}
sj0=l0;
l4=sj0;
goto L1;
L2:;
sj0=0ULL;
l4=sj0;
sj0=l0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L13;
case 4:
goto L9;
case 5:
goto L8;
default:
goto L7;
}
L13:;
sj0=1ULL;
l4=sj0;
si0=l1;
si1=63U;
si0=si0 <= si1;
if(si0){
goto L10;
}
goto L1;
L12:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L1;
}
goto L3;
L11:;
sj0=1ULL;
l4=sj0;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L1;
}
L10:;
sj0=l0;
si1=l1;
sj1=(U64)(si1);
l4=sj1;
sj0>>=(sj1&63);
l5=sj0;
sj1=l5;
sj2=l4;
sj1<<=(sj2&63);
sj2=l0;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
goto L1;
L9:;
si0=l1;
si1=64U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=l0;
si1=l1;
si2=-1U;
si1+=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
l5=sj1;
sj0>>=(sj1&63);
l4=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l4;
sj1=1ULL;
sj0>>=(sj1&63);
l6=sj0;
sj0=l4;
sj1=l5;
sj0<<=(sj1&63);
sj1=l0;
si0=sj0 != sj1;
if(si0){
goto L14;
}
sj0=l6;
sj1=1ULL;
sj0&=sj1;
sj1=l6;
sj0+=sj1;
l4=sj0;
goto L1;
L14:;
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l4=sj0;
goto L1;
L8:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=l0;
si1=l1;
sj1=(U64)(si1);
l5=sj1;
sj0>>=(sj1&63);
l4=sj0;
sj1=l5;
sj0<<=(sj1&63);
sj1=l0;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1251872U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=275U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252016U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
si0=l1;
si1=63U;
si0=si0 <= si1;
if(si0){
goto L3;
}
goto L1;
L6:;
sj0=l4;
sj1=1ULL;
sj0>>=(sj1&63);
l4=sj0;
goto L1;
L5:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1251872U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=275U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=20U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252032U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
sj0=l0;
sj1=-9223372036854775808ULL;
si0=sj0 > sj1;
sj0=(U64)(si0);
l4=sj0;
goto L1;
L3:;
sj0=l0;
si1=l1;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l4=sj0;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
sj0=l4;
L0:;
return sj0;
}

U64 f1305(rustpythonInstance*i,U64 l0,U64 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=l0;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
sj0=l0;
l4=sj0;
goto L1;
L2:;
sj0=0ULL;
l4=sj0;
sj0=l0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L13;
case 4:
goto L9;
case 5:
goto L8;
default:
goto L7;
}
L13:;
sj0=1ULL;
l4=sj0;
sj0=l1;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
goto L1;
L12:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
goto L3;
L11:;
sj0=1ULL;
l4=sj0;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
L10:;
sj0=l0;
sj1=l1;
sj0>>=(sj1&63);
l4=sj0;
sj1=l4;
sj2=l1;
sj1<<=(sj2&63);
sj2=l0;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
goto L1;
L9:;
sj0=l1;
sj1=64ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
sj0=l0;
sj1=l1;
sj2=-1ULL;
sj1+=sj2;
l4=sj1;
sj0>>=(sj1&63);
l1=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l1;
sj1=1ULL;
sj0>>=(sj1&63);
l5=sj0;
sj0=l1;
sj1=l4;
sj2=63ULL;
sj1&=sj2;
sj0<<=(sj1&63);
sj1=l0;
si0=sj0 != sj1;
if(si0){
goto L14;
}
sj0=l5;
sj1=1ULL;
sj0&=sj1;
sj1=l5;
sj0+=sj1;
l4=sj0;
goto L1;
L14:;
sj0=l5;
sj1=1ULL;
sj0+=sj1;
l4=sj0;
goto L1;
L8:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
sj0=l0;
sj1=l1;
sj0>>=(sj1&63);
l4=sj0;
sj1=l1;
sj0<<=(sj1&63);
sj1=l0;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1251872U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=275U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252016U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
sj0=l1;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L3;
}
goto L1;
L6:;
sj0=l1;
sj1=1ULL;
sj0>>=(sj1&63);
l4=sj0;
goto L1;
L5:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1251872U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=275U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252032U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
sj0=l0;
sj1=-9223372036854775808ULL;
si0=sj0 > sj1;
sj0=(U64)(si0);
l4=sj0;
goto L1;
L3:;
sj0=l0;
sj1=l1;
sj0>>=(sj1&63);
l4=sj0;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
sj0=l4;
L0:;
return sj0;
}

U32 f1306(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
sj0=l1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
l4=si0;
goto L1;
L2:;
si0=0U;
l4=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L11;
case 2:
goto L12;
case 3:
goto L13;
case 4:
goto L9;
case 5:
goto L8;
default:
goto L7;
}
L13:;
si0=1U;
l4=si0;
sj0=l1;
sj1=31ULL;
si0=sj0 <= sj1;
if(si0){
goto L10;
}
goto L1;
L12:;
sj0=l1;
sj1=31ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
goto L3;
L11:;
si0=1U;
l4=si0;
sj0=l1;
sj1=31ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
L10:;
si0=l0;
sj1=l1;
si1=(U32)(sj1);
l4=si1;
si0>>=(si1&31);
l2=si0;
si1=l2;
si2=l4;
si1<<=(si2&31);
si2=l0;
si1=si1 != si2;
si0+=si1;
l4=si0;
goto L1;
L9:;
sj0=l1;
sj1=32ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
sj0=l1;
sj1=31ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
si0=l0;
sj1=l1;
si1=(U32)(sj1);
si2=-1U;
si1+=si2;
l2=si1;
si0>>=(si1&31);
l4=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=1U;
si0>>=(si1&31);
l5=si0;
si0=l4;
si1=l2;
si2=31U;
si1&=si2;
si0<<=(si1&31);
si1=l0;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l5;
si1=1U;
si0&=si1;
si1=l5;
si0+=si1;
l4=si0;
goto L1;
L14:;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
goto L1;
L8:;
sj0=l1;
sj1=31ULL;
si0=sj0 > sj1;
if(si0){
goto L5;
}
si0=l0;
sj1=l1;
si1=(U32)(sj1);
l2=si1;
si0>>=(si1&31);
l4=si0;
si1=l2;
si0<<=(si1&31);
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1251872U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252016U;
f683(i,si0,si1);
UNREACHABLE;
L7:;
sj0=l1;
sj1=31ULL;
si0=sj0 <= sj1;
if(si0){
goto L3;
}
goto L1;
L6:;
si0=l4;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L1;
L5:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1251872U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252032U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=-2147483648U;
si0=si0 > si1;
l4=si0;
goto L1;
L3:;
si0=l0;
sj1=l1;
si1=(U32)(sj1);
si0>>=(si1&31);
l4=si0;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f1307(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si1=l1;
si0-=si1;
l1=si0;
si1=31U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L12;
case 2:
goto L16;
case 3:
goto L13;
case 4:
goto L10;
case 5:
goto L9;
default:
goto L15;
}
L16:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L14;
}
goto L2;
L15:;
si0=l1;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L2;
}
L14:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L11;
}
goto L3;
L12:;
si0=l1;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L3;
}
L11:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l1;
si1=32U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l0;
si1=l4;
si2=l1;
si3=-1U;
si2+=si3;
l2=si2;
si1>>=(si2&31);
l1=si1;
si2=1U;
si1>>=(si2&31);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=31U;
si1&=si2;
si0<<=(si1&31);
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L18:;
si0=l4;
si1=-2147483648U;
si0=si0 > si1;
if(si0){
goto L8;
}
L17:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l1;
si1=31U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si2=l1;
si1>>=(si2&31);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si0<<=(si1&31);
si1=l4;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1252056U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1252072U;
f683(i,si0,si1);
UNREACHABLE;
L8:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=l5;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1252056U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=3U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1252088U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l4;
si2=l1;
si1>>=(si2&31);
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si0<<=(si1&31);
si1=l4;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l4;
si2=l1;
si1>>=(si2&31);
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1308(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L10;
case 2:
goto L14;
case 3:
goto L11;
case 4:
goto L8;
case 5:
goto L7;
default:
goto L13;
}
L14:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L12;
}
goto L2;
L13:;
si0=l1;
si1=63U;
si0=si0 <= si1;
if(si0){
goto L2;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L9;
}
goto L3;
L10:;
si0=l1;
si1=63U;
si0=si0 <= si1;
if(si0){
goto L3;
}
L9:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
si0=l1;
si1=64U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l0;
sj1=l4;
si2=l1;
si3=-1U;
si2+=si3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
l5=sj2;
sj1>>=(sj2&63);
l6=sj1;
sj2=1ULL;
sj1>>=(sj2&63);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l6;
sj1=l5;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 != sj1;
if(si0){
goto L5;
}
sj0=l6;
sj1=2ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L16:;
sj0=l4;
sj1=-9223372036854775808ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
L15:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l4;
si2=l1;
sj2=(U64)(si2);
l6=sj2;
sj1>>=(sj2&63);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l6;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1252056U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=275U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252072U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l0;
sj1=l7;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1252056U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=275U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252088U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=l4;
si2=l1;
sj2=(U64)(si2);
l5=sj2;
sj1>>=(sj2&63);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=l5;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l0;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
sj1=l4;
si2=l1;
sj2=(U64)(si2);
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1309(rustpythonInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L10;
case 2:
goto L14;
case 3:
goto L11;
case 4:
goto L8;
case 5:
goto L7;
default:
goto L13;
}
L14:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
goto L2;
L13:;
sj0=l1;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L2;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L11:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L9;
}
goto L3;
L10:;
sj0=l1;
sj1=63ULL;
si0=sj0 <= sj1;
if(si0){
goto L3;
}
L9:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L8:;
sj0=l1;
sj1=64ULL;
si0=sj0 == sj1;
if(si0){
goto L16;
}
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
si0=l0;
sj1=l4;
sj2=l1;
sj3=-1ULL;
sj2+=sj3;
l5=sj2;
sj1>>=(sj2&63);
l1=sj1;
sj2=1ULL;
sj1>>=(sj2&63);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l1;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l1;
sj1=l5;
sj2=63ULL;
sj1&=sj2;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 != sj1;
if(si0){
goto L5;
}
sj0=l1;
sj1=2ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L16:;
sj0=l4;
sj1=-9223372036854775808ULL;
si0=sj0 > sj1;
if(si0){
goto L6;
}
L15:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L4;
}
si0=l3;
sj1=l4;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l4;
sj2=l1;
sj1>>=(sj2&63);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l1;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1252056U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=275U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252072U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l0;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L4:;
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1252056U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=275U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1252088U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=l4;
sj2=l1;
sj1>>=(sj2&63);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l1;
sj0<<=(sj1&63);
sj1=l4;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l0;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
sj1=l4;
sj2=l1;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1310(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L19;
case 1:
goto L18;
case 2:
goto L17;
case 3:
goto L16;
default:
goto L19;
}
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=64ULL;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
sj1=I64_CLZ(sj1);
sj0-=sj1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 <= sj1;
l4=si0;
sj0=l3;
si0=(U32)(sj0);
l2=si0;
goto L1;
L18:;
si0=l1;
si1=48U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=64ULL;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l3=sj1;
sj1=I64_CLZ(sj1);
sj0-=sj1;
si1=l1;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 > sj1;
if(si0){
goto L3;
}
si0=l1;
si1=16U;
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=40U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
goto L4;
L17:;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L20;
}
sj0=0ULL;
l3=sj0;
si0=0U;
l2=si0;
goto L5;
L20:;
si0=l1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=0U;
l2=si0;
sj0=0ULL;
l3=sj0;
L21:;
{
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l1;
si1=l9;
si2=8U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=64ULL;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=l6;
si0=sj0 > sj1;
if(si0){
goto L3;
}
sj0=l5;
si0=(U32)(sj0);
sj1=l3;
si1=(U32)(sj1);
si2=7U;
si1&=si2;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l2=si0;
si0=l4;
l9=si0;
sj0=l3;
sj1=l6;
sj0+=sj1;
l3=sj0;
sj1=l7;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
goto L21;
}
L16:;
si0=l1;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
l5=sj0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+40U);
l3=sj0;
goto L22;
L23:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L24;
}
si0=0U;
l2=si0;
goto L8;
L24:;
si0=l1;
si1=l2;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=64ULL;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj1=I64_CLZ(sj1);
sj0-=sj1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+24U);
l3=sj1;
si0=sj0 > sj1;
if(si0){
goto L3;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
L22:;
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L25;
}
si0=0U;
l2=si0;
sj0=l7;
l6=sj0;
goto L13;
L25:;
sj0=l5;
si0=(U32)(sj0);
l2=si0;
si0=0U;
l9=si0;
sj0=l7;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L26;
}
sj0=l7;
l6=sj0;
si0=0U;
l8=si0;
si0=l2;
l4=si0;
goto L12;
L26:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
sj0=l7;
sj1=l3;
sj0-=sj1;
l6=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L13;
}
si0=1U;
l4=si0;
goto L1;
L15:;
si0=l1;
si1=16U;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l1;
si3=40U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l6=sj2;
sj1>>=(sj2&63);
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L14:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+32U,si1);
goto L5;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+24U);
l3=sj0;
si0=!(sj0);
if(si0){
goto L11;
}
sj0=l7;
sj1=l6;
sj0-=sj1;
l7=sj0;
L28:;
{
sj0=64ULL;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=l3;
si0=sj0 <= sj1;
if(si0){
goto L31;
}
si0=0U;
l4=si0;
goto L30;
L31:;
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l5;
si0=(U32)(sj0);
l4=si0;
sj0=l6;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L27;
}
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l4;
sj1=l7;
si1=(U32)(sj1);
si2=7U;
si1&=si2;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l2=si0;
sj0=l6;
sj1=l3;
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=1U;
l4=si0;
L30:;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
goto L6;
L29:;
sj0=l6;
sj1=l3;
sj0-=sj1;
l6=sj0;
sj0=l7;
sj1=l3;
sj0+=sj1;
l7=sj0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L28;
}
goto L10;
}
L27:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l9;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=l7;
si0=(U32)(sj0);
si1=7U;
si0&=si1;
l8=si0;
si0=l2;
l9=si0;
L12:;
si0=l1;
sj1=l3;
sj2=l6;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l1;
sj1=l5;
sj2=l6;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=-1U;
si1=-1U;
sj2=l6;
si2=(U32)(sj2);
si3=255U;
si2&=si3;
si1<<=(si2&31);
si2=-1U;
si1^=si2;
si2=-1U;
si3=l4;
si4=255U;
si3&=si4;
si1=si3?si1:si2;
sj2=l6;
sj3=7ULL;
si2=sj2 > sj3;
si0=si2?si0:si1;
si1=l4;
si0&=si1;
si1=l8;
si0<<=(si1&31);
si1=l9;
si0|=si1;
l2=si0;
si0=1U;
l4=si0;
goto L1;
L11:;
L32:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l1;
sj1=l3;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L32;
}
}
L10:;
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
L9:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+48U,si1);
L8:;
si0=1U;
si1=2U;
si2=l2;
si3=255U;
si2&=si3;
si0=si2?si0:si1;
l4=si0;
goto L1;
L7:;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=0U;
l4=si0;
L6:;
si0=l1;
si1=l4;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L5:;
si0=2U;
si1=1U;
sj2=l3;
si2=!(sj2);
si0=si2?si0:si1;
l4=si0;
goto L1;
L4:;
si0=l1;
sj1=l5;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=255ULL;
sj1=255ULL;
sj2=-1ULL;
sj3=l6;
sj2<<=(sj3&63);
sj3=-1ULL;
sj2^=sj3;
sj3=l3;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l6;
sj3=63ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l3;
sj0&=sj1;
si0=(U32)(sj0);
l2=si0;
si0=1U;
l4=si0;
goto L1;
L3:;
si0=0U;
l4=si0;
goto L1;
L2:;
si0=2U;
l4=si0;
L1:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f1311(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l1;
si0+=si1;
l4=si0;
l5=si0;
si0=l3;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l3;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=l1;
f1196(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=-1U;
si0+=si1;
l7=si0;
si1=7U;
si0&=si1;
l8=si0;
si0=l1;
si1=-2U;
si0+=si1;
si1=7U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l7;
si1=-8U;
si0&=si1;
l7=si0;
L5:;
{
si0=l6;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=56U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=24U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=64U;
si0+=si1;
l6=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
{
si0=l6;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l1;
si1=l5;
si0+=si1;
si1=-1U;
si0+=si1;
l5=si0;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si0+=si1;
si1=-8U;
si0+=si1;
l6=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si0+=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
l7=si0;
L11:;
{
si0=l3;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l1;
si1=l7;
si0+=si1;
l0=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l2=sj0;
si0=l8;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
goto L0;
L9:;
si0=l7;
si1=l5;
si2=1252224U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
si1=l5;
si2=1252224U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1312(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=1252240U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si3=l1;
si2-=si3;
l1=si2;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

U32 f1313(rustpythonInstance*i,U32 l0,U32 l1) {
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
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1252352U;
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
si2=1252356U;
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
si2=1252360U;
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

void f1314(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1315(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
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
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=256U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l4;
sj1=l3;
i64_store(&i->m0,(U64)si0+184U,sj1);
sj0=l3;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L2;
}
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
l8=si0;
L6:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L6;
}
}
si0=l6;
l7=si0;
L5:;
sj0=l3;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L3;
}
si0=l7;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l7;
si1=l2;
si2=1252656U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
l7=si0;
sj0=l3;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L1;
}
L3:;
si0=1251796U;
si1=43U;
si2=1252500U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1253224U;
si1=25U;
si2=1253252U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l7;
si0-=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l4;
si1=l1;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l5=si1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l9;
sj2=I64_CTZ(sj2);
l10=sj2;
sj1>>=(sj2&63);
l11=sj1;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l4;
si1=208U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+200U,sj1);
sj0=l10;
sj1=l3;
sj0*=sj1;
l12=sj0;
sj1=63ULL;
sj0&=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L22;
default:
goto L24;
}
L25:;
si0=0U;
si1=0U;
si2=1252672U;
f663(i,si0,si1,si2);
UNREACHABLE;
L24:;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
l13=si0;
if(si0){
goto L21;
}
si0=l5;
l14=si0;
goto L20;
L23:;
sj0=l11;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
sj0=1ULL;
l15=sj0;
sj0=l3;
l10=sj0;
sj0=1ULL;
l16=sj0;
L26:;
{
sj0=l15;
sj1=l11;
sj2=l15;
sj1*=sj2;
l17=sj1;
sj2=l10;
sj3=1ULL;
sj2&=sj3;
si2=!(sj2);
l8=si2;
sj0=si2?sj0:sj1;
l15=sj0;
sj0=l16;
sj1=l17;
si2=l8;
sj0=si2?sj0:sj1;
l16=sj0;
sj0=l10;
sj1=1ULL;
sj0>>=(sj1&63);
l17=sj0;
sj0=l10;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L15;
}
sj0=l11;
sj1=l11;
sj0*=sj1;
l11=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L15;
}
sj0=l10;
sj1=2ULL;
si0=sj0 < sj1;
l8=si0;
sj0=l17;
l10=sj0;
si0=l8;
if(si0){
goto L19;
}
goto L26;
}
L22:;
sj0=l10;
sj1=63ULL;
sj0&=sj1;
l16=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l17=sj0;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
}
goto L16;
L21:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l8;
if(si0){
goto L29;
}
si0=l1;
l14=si0;
goto L28;
L29:;
si0=l1;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l1;
si1=l8;
si0=f15277(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l14;
si1=0U;
si2=l8;
si0=f15392(i,si0,si1,si2);
goto L27;
L30:;
si0=l8;
si1=1U;
si0=f15273(i,si0,si1);
l14=si0;
L28:;
si0=l14;
si0=!(si0);
if(si0){
goto L17;
}
L27:;
si0=l14;
si1=l2;
si2=l5;
si3=l2;
sj4=l10;
sj0=f1225(i,si0,si1,si2,si3,sj4);
si0=l2;
si1=-1U;
si0+=si1;
l8=si0;
si1=l2;
si2=l14;
si3=l8;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l2=si0;
L20:;
si0=l4;
si1=l2;
si2=3U;
si1<<=(si2&31);
si2=l14;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0+192U,sj1);
sj0=1ULL;
l16=sj0;
sj0=l3;
l17=sj0;
goto L13;
L19:;
si0=l4;
sj1=l17;
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=1U;
si1=l4;
si2=184U;
si1+=si2;
si2=1252104U;
si3=l4;
si4=232U;
si3+=si4;
si4=1252640U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L18:;
si0=l4;
sj1=l17;
sj2=0ULL;
sj3=l10;
sj2-=sj3;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0+192U,sj1);
goto L16;
L17:;
si0=l1;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L16:;
sj0=l17;
sj1=l16;
sj0>>=(sj1&63);
l10=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L33;
}
sj0=l11;
sj1=4294967295ULL;
si0=sj0 > sj1;
if(si0){
goto L12;
}
sj0=1ULL;
l15=sj0;
sj0=l3;
l10=sj0;
sj0=1ULL;
l16=sj0;
L34:;
{
sj0=l15;
sj1=l11;
sj2=l15;
sj1*=sj2;
l17=sj1;
sj2=l10;
sj3=1ULL;
sj2&=sj3;
si2=!(sj2);
l8=si2;
sj0=si2?sj0:sj1;
l15=sj0;
sj0=l16;
sj1=l17;
si2=l8;
sj0=si2?sj0:sj1;
l16=sj0;
sj0=l10;
sj1=1ULL;
sj0>>=(sj1&63);
l17=sj0;
sj0=l10;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L31;
}
sj0=l11;
sj1=l11;
sj0*=sj1;
l11=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L31;
}
sj0=l10;
sj1=2ULL;
si0=sj0 < sj1;
l8=si0;
sj0=l17;
l10=sj0;
si0=l8;
if(si0){
goto L32;
}
goto L34;
}
L33:;
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0+208U,sj1);
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+200U,sj1);
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0+192U,sj1);
sj0=1ULL;
l16=sj0;
si0=0U;
l13=si0;
si0=2U;
l2=si0;
si0=l4;
si1=200U;
si0+=si1;
l14=si0;
sj0=l3;
l17=sj0;
sj0=l10;
l11=sj0;
goto L11;
L32:;
si0=l4;
sj1=l17;
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=1U;
si1=l4;
si2=184U;
si1+=si2;
si2=1252104U;
si3=l4;
si4=232U;
si3+=si4;
si4=1252640U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L31:;
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l4;
sj1=l17;
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=1U;
l2=si0;
si0=0U;
l13=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L14;
}
sj0=l15;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L14;
}
sj0=l15;
sj1=l9;
sj0<<=(sj1&63);
sj1=l16;
sj2=l15;
sj3=0ULL;
sj4=l12;
sj3-=sj4;
sj2>>=(sj3&63);
si2=!(sj2);
l8=si2;
sj0=si2?sj0:sj1;
l16=sj0;
sj0=0ULL;
sj1=l9;
si2=l8;
sj0=si2?sj0:sj1;
l9=sj0;
si0=l5;
l14=si0;
goto L13;
L15:;
si0=l4;
sj1=l11;
i64_store(&i->m0,(U64)si0+192U,sj1);
si0=l4;
sj1=l17;
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=1U;
l2=si0;
si0=0U;
l13=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L14;
}
sj0=l15;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L14;
}
sj0=l15;
sj1=l9;
sj0<<=(sj1&63);
sj1=l16;
sj2=l15;
sj3=0ULL;
sj4=l12;
sj3-=sj4;
sj2>>=(sj3&63);
si2=!(sj2);
l8=si2;
sj0=si2?sj0:sj1;
l16=sj0;
sj0=0ULL;
sj1=l9;
si2=l8;
sj0=si2?sj0:sj1;
l9=sj0;
L14:;
si0=l5;
l14=si0;
L13:;
sj0=l11;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=1U;
si1=l4;
si2=192U;
si1+=si2;
si2=1252104U;
si3=l4;
si4=232U;
si3+=si4;
si4=1253208U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
sj0=1ULL;
l16=sj0;
si0=0U;
l13=si0;
si0=1U;
l2=si0;
sj0=l3;
l17=sj0;
si0=l5;
l14=si0;
L11:;
si0=l2;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
sj1=l11;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=l17;
sj0*=sj1;
l10=sj0;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L37;
}
sj0=l10;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si1=5U;
si0+=si1;
l18=si0;
si1=l7;
sj2=l3;
si2=(U32)(sj2);
si1*=si2;
l1=si1;
sj2=l12;
sj3=6ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
l6=si2;
si1+=si2;
l19=si1;
si0+=si1;
l8=si0;
if(si0){
goto L39;
}
si0=0U;
l8=si0;
si0=8U;
l7=si0;
goto L38;
L39:;
si0=l4;
si1=168U;
si0+=si1;
si1=0U;
si2=l8;
f1196(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+168U);
l7=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+176U);
l20=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l20;
l8=si0;
goto L40;
L41:;
si0=l21;
si1=0U;
si2=l19;
si3=l5;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si3=32U;
si2+=si3;
si0=f15392(i,si0,si1,si2);
si0=l8;
si1=l20;
si0+=si1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l20;
si1=l1;
si0+=si1;
si1=l6;
si0+=si1;
si1=l5;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l7;
si0+=si1;
si1=32U;
si0+=si1;
l21=si0;
L40:;
si0=l21;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
L38:;
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l8;
si1=l19;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l8;
si1=l19;
si0-=si1;
l6=si0;
si0=l7;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
sj0=l17;
si0=!(sj0);
l22=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l6;
if(si0){
goto L48;
}
si0=0U;
si1=0U;
si2=1252704U;
f663(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l18;
sj1=l17;
sj2=1ULL;
sj1&=sj2;
si1=!(sj1);
si2=l2;
si3=1U;
si2=si2 == si3;
l7=si2;
si1|=si2;
si0>>=(si1&31);
l23=si0;
if(si0){
goto L51;
}
si0=8U;
l24=si0;
goto L50;
L51:;
si0=l23;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l23;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l23;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l8;
if(si0){
goto L53;
}
si0=l5;
l24=si0;
goto L52;
L53:;
si0=l5;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L54;
}
si0=l5;
si1=l8;
si0=f15277(i,si0,si1);
l24=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l24;
si1=0U;
si2=l8;
si0=f15392(i,si0,si1,si2);
goto L50;
L54:;
si0=l8;
si1=1U;
si0=f15273(i,si0,si1);
l24=si0;
L52:;
si0=l24;
si0=!(si0);
if(si0){
goto L43;
}
L50:;
sj0=l17;
sj0=I64_CLZ(sj0);
l10=sj0;
si0=l7;
si0=!(si0);
if(si0){
goto L47;
}
sj0=l10;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L46;
}
si0=l6;
l2=si0;
si0=l21;
l1=si0;
si0=l18;
l20=si0;
si0=l23;
l18=si0;
si0=l24;
l21=si0;
si0=l23;
l6=si0;
goto L45;
L48:;
si0=l21;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L44;
}
si0=1U;
l5=si0;
goto L7;
L47:;
sj0=127ULL;
sj1=1ULL;
sj2=l17;
sj2=I64_POPCNT(sj2);
sj3=l10;
sj2^=sj3;
l11=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l11;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L36;
}
si0=l6;
l1=si0;
si0=l21;
l20=si0;
si0=l18;
l25=si0;
si0=l23;
l18=si0;
si0=l24;
l21=si0;
si0=l23;
l6=si0;
goto L35;
L46:;
si0=l23;
l2=si0;
si0=l24;
l1=si0;
si0=l23;
l20=si0;
L45:;
si0=l2;
si0=!(si0);
if(si0){
goto L55;
}
si0=l1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
sj0=1ULL;
sj1=0ULL;
sj2=63ULL;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3+184U);
l12=sj3;
sj3=I64_CLZ(sj3);
l11=sj3;
sj2-=sj3;
l10=sj2;
sj3=l10;
sj4=64ULL;
sj5=l11;
sj4-=sj5;
si3=sj3 > sj4;
sj1=si3?sj1:sj2;
sj0<<=(sj1&63);
l11=sj0;
sj0=l12;
sj1=0ULL;
si0=sj0 != sj1;
l7=si0;
si0=0U;
l26=si0;
si0=1U;
l8=si0;
si0=1U;
l5=si0;
L56:;
{
si0=l6;
l25=si0;
si0=l21;
l27=si0;
si0=l18;
l28=si0;
si0=l20;
l18=si0;
si0=l1;
l21=si0;
si0=l2;
l6=si0;
si0=l26;
si1=1U;
si0&=si1;
if(si0){
goto L71;
}
L72:;
{
si0=l7;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
si1=l7;
sj2=l11;
sj3=1ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l7=si0;
sj0=l11;
sj1=1ULL;
sj0>>=(sj1&63);
l11=sj0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L72;
}
}
L71:;
si0=l7;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L70;
}
si0=l5;
si1=1U;
si0<<=(si1&31);
l8=si0;
si1=l28;
si0=si0 > si1;
if(si0){
goto L64;
}
si0=8U;
l29=si0;
si0=0U;
l2=si0;
si0=1U;
l30=si0;
si0=l5;
si1=43U;
si0=si0 < si1;
if(si0){
goto L57;
}
si0=l5;
si1=390U;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l5;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L69;
}
si0=l5;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l2=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
goto L62;
L70:;
sj0=l16;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l5;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=l5;
if(si0){
goto L74;
}
sj0=0ULL;
l11=sj0;
goto L73;
L74:;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l8=si0;
si1=1U;
si0+=si1;
l2=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=l8;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L76;
}
sj0=0ULL;
l11=sj0;
si0=l21;
l8=si0;
goto L75;
L76:;
si0=l2;
si1=1073741820U;
si0&=si1;
l2=si0;
sj0=0ULL;
l11=sj0;
si0=l21;
l8=si0;
L77:;
{
si0=l4;
si1=24U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+24U);
l10=sj1;
sj2=l11;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+72U);
l17=sj1;
si2=l4;
si3=24U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l11;
sj4=l10;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=56U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+56U);
l10=sj1;
si2=l4;
si3=72U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l11;
sj4=l17;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
l1=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
l17=sj1;
si2=l4;
si3=56U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l11;
sj4=l10;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
l8=si0;
si0=l4;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l11;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
if(si0){
goto L77;
}
}
L75:;
si0=l7;
si0=!(si0);
if(si0){
goto L73;
}
L78:;
{
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
l10=sj1;
sj2=l11;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l11;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L78;
}
}
L73:;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L79;
}
si0=l21;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l11;
sj2=0ULL;
si1=sj1 != sj2;
si0+=si1;
l5=si0;
goto L7;
L79:;
si0=l5;
si1=l6;
si2=1252768U;
f663(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l5;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l5;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l2=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
goto L62;
L68:;
si0=l8;
si1=128U;
si0+=si1;
l20=si0;
goto L63;
L67:;
si0=l5;
si1=50U;
si0=f1183(i,si0,si1);
l20=si0;
if(si0){
goto L63;
}
goto L57;
L66:;
si0=l5;
si1=l6;
si2=1252752U;
f666(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=1252784U;
si1=37U;
si2=1252824U;
f673(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=1252920U;
si1=45U;
si2=1252968U;
f673(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l20;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l20;
si1=3U;
si0<<=(si1&31);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l1;
si0=!(si0);
if(si0){
goto L61;
}
si0=l20;
l2=si0;
L62:;
si0=l1;
if(si0){
goto L60;
}
si0=8U;
si1=l1;
si0=f15277(i,si0,si1);
l29=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=0U;
l30=si0;
si0=l29;
si1=0U;
si2=l1;
si0=f15392(i,si0,si1,si2);
goto L57;
L61:;
si0=8U;
l29=si0;
si0=0U;
l1=si0;
si0=l20;
l2=si0;
goto L59;
L60:;
si0=l1;
si1=1U;
si0=f15273(i,si0,si1);
l29=si0;
L59:;
si0=0U;
l30=si0;
si0=l29;
if(si0){
goto L57;
}
L58:;
si0=8U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L57:;
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L84;
}
si0=l27;
si1=l25;
si2=l21;
si3=l5;
si4=l29;
si5=l2;
f1106(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=-1U;
si0+=si1;
l5=si0;
si1=l25;
si0=si0 >= si1;
if(si0){
goto L83;
}
si0=l5;
si1=l8;
si2=l27;
si3=l5;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l5=si0;
sj0=l11;
sj1=l12;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L80;
}
si0=l5;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L81;
}
si0=l5;
si1=l25;
si0=si0 > si1;
if(si0){
goto L82;
}
si0=l5;
if(si0){
goto L86;
}
sj0=0ULL;
l17=sj0;
goto L85;
L86:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+192U);
l10=sj0;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l20=si0;
si1=3U;
si0&=si1;
l2=si0;
sj0=0ULL;
l17=sj0;
si0=l27;
l8=si0;
si0=l1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L87;
}
si0=l20;
si1=1073741820U;
si0&=si1;
l1=si0;
sj0=0ULL;
l17=sj0;
si0=l27;
l8=si0;
L88:;
{
si0=l4;
si1=104U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+104U);
l15=sj1;
sj2=l17;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=152U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
l20=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l20;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+152U);
l3=sj1;
si2=l4;
si3=104U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj4=l15;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=136U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
l20=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l20;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+136U);
l15=sj1;
si2=l4;
si3=152U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj4=l3;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
l20=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l20;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+120U);
l3=sj1;
si2=l4;
si3=136U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l17;
sj4=l15;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
l8=si0;
si0=l4;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l17;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
if(si0){
goto L88;
}
}
L87:;
si0=l2;
si0=!(si0);
if(si0){
goto L85;
}
L89:;
{
si0=l4;
si1=88U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l10;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l8;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+88U);
l15=sj1;
sj2=l17;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l4;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l17;
sj2=l15;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L89;
}
}
L85:;
si0=l5;
si1=l25;
si0=si0 >= si1;
if(si0){
goto L90;
}
si0=l27;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l17;
sj2=0ULL;
si1=sj1 != sj2;
si0+=si1;
l5=si0;
goto L80;
L90:;
si0=l5;
si1=l25;
si2=1252888U;
f663(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=l5;
si1=l6;
si2=1252840U;
f666(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=l5;
si1=l25;
si2=1252856U;
f663(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=l5;
si1=l25;
si2=1252872U;
f666(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=1252784U;
si1=37U;
si2=1252904U;
f673(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=0U;
si1=l7;
sj2=l11;
sj3=1ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l7=si0;
sj0=l11;
sj1=1ULL;
sj0>>=(sj1&63);
l11=sj0;
si0=0U;
l8=si0;
si0=1U;
l26=si0;
si0=l25;
l2=si0;
si0=l27;
l1=si0;
si0=l28;
l20=si0;
si0=l30;
if(si0){
goto L56;
}
si0=l29;
f15271(i,si0);
si0=l25;
l2=si0;
si0=l27;
l1=si0;
si0=l28;
l20=si0;
goto L56;
}
L55:;
si0=0U;
si1=0U;
si2=1252736U;
f663(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=1U;
si1=l21;
si2=1252104U;
si3=l4;
si4=232U;
si3+=si4;
si4=1252720U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L43:;
si0=l5;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L42:;
si0=l19;
si1=l8;
si2=1252688U;
f662(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1251796U;
si1=43U;
si2=1252500U;
f673(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l23;
l1=si0;
si0=l24;
l20=si0;
si0=l23;
l25=si0;
L35:;
si0=l2;
si1=l1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l20;
si1=l14;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
sj0=1ULL;
sj1=0ULL;
sj2=63ULL;
sj3=l10;
sj2-=sj3;
l11=sj2;
sj3=l11;
sj4=64ULL;
sj5=l10;
sj4-=sj5;
si3=sj3 > sj4;
sj1=si3?sj1:sj2;
sj0<<=(sj1&63);
l11=sj0;
si0=1U;
l8=si0;
si0=0U;
l28=si0;
si0=1U;
l7=si0;
si0=l2;
l5=si0;
L91:;
{
si0=l28;
si1=1U;
si0&=si1;
if(si0){
goto L92;
}
L93:;
{
si0=l8;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si1=l8;
sj2=l11;
sj3=1ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l8=si0;
sj0=l11;
sj1=1ULL;
sj0>>=(sj1&63);
l11=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L93;
}
}
L92:;
si0=l8;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L101;
}
si0=8U;
l27=si0;
si0=0U;
l28=si0;
si0=1U;
l31=si0;
si0=l5;
si1=43U;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l5;
si1=390U;
si0=si0 < si1;
if(si0){
goto L103;
}
si0=l5;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L104;
}
si0=l5;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l28=si0;
si1=3U;
si0<<=(si1&31);
l29=si0;
goto L99;
L104:;
si0=l5;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L102;
}
si0=l5;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l28=si0;
si1=3U;
si0<<=(si1&31);
l29=si0;
goto L99;
L103:;
si0=l7;
si1=128U;
si0+=si1;
l26=si0;
goto L100;
L102:;
si0=l5;
si1=50U;
si0=f1183(i,si0,si1);
l26=si0;
if(si0){
goto L100;
}
goto L94;
L101:;
si0=1252920U;
si1=45U;
si2=1253192U;
f673(i,si0,si1,si2);
UNREACHABLE;
L100:;
si0=l26;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l26;
si1=3U;
si0<<=(si1&31);
l29=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l29;
si0=!(si0);
if(si0){
goto L98;
}
si0=l26;
l28=si0;
L99:;
si0=l29;
if(si0){
goto L97;
}
si0=8U;
si1=l29;
si0=f15277(i,si0,si1);
l27=si0;
si0=!(si0);
if(si0){
goto L95;
}
si0=0U;
l31=si0;
si0=l27;
si1=0U;
si2=l29;
si0=f15392(i,si0,si1,si2);
goto L94;
L98:;
si0=8U;
l27=si0;
si0=0U;
l29=si0;
si0=l26;
l28=si0;
goto L96;
L97:;
si0=l29;
si1=1U;
si0=f15273(i,si0,si1);
l27=si0;
L96:;
si0=0U;
l31=si0;
si0=l27;
if(si0){
goto L94;
}
L95:;
si0=8U;
si1=l29;
f52(i,si0,si1);
UNREACHABLE;
L94:;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L110;
}
si0=l21;
si1=l6;
si2=l20;
si3=l5;
si4=l27;
si5=l28;
f1106(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si1=-1U;
si0+=si1;
l5=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L109;
}
si0=l5;
si1=l7;
si2=l21;
si3=l5;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l5=si0;
sj0=l11;
sj1=l17;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L111;
}
si0=l6;
l29=si0;
si0=l21;
l26=si0;
si0=l18;
l30=si0;
si0=l25;
l18=si0;
si0=l20;
l21=si0;
si0=l1;
l6=si0;
goto L105;
L111:;
si0=l5;
si1=l2;
si0+=si1;
l26=si0;
si1=l25;
si0=si0 > si1;
if(si0){
goto L112;
}
si0=l5;
si1=l2;
si0=f1359(i,si0,si1);
l7=si0;
if(si0){
goto L114;
}
si0=8U;
l28=si0;
goto L113;
L114:;
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l29=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l30=si0;
si0=l29;
if(si0){
goto L116;
}
si0=l30;
l28=si0;
goto L115;
L116:;
si0=l30;
si1=l29;
si0=si0 <= si1;
if(si0){
goto L117;
}
si0=l30;
si1=l29;
si0=f15277(i,si0,si1);
l28=si0;
si0=!(si0);
if(si0){
goto L108;
}
si0=l28;
si1=0U;
si2=l29;
si0=f15392(i,si0,si1,si2);
goto L113;
L117:;
si0=l29;
si1=1U;
si0=f15273(i,si0,si1);
l28=si0;
L115:;
si0=l28;
si0=!(si0);
if(si0){
goto L108;
}
L113:;
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L107;
}
si0=l26;
si1=l20;
si2=l1;
si3=l21;
si4=l5;
si5=l14;
si6=l2;
si7=l28;
si8=l7;
sj1=f1360(i,si1,si2,si3,si4,si5,si6,si7,si8);
si1=!(sj1);
si0-=si1;
l5=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L106;
}
si0=l28;
f15271(i,si0);
goto L106;
L112:;
si0=1253128U;
si1=46U;
si2=1253176U;
f673(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l5;
si1=l1;
si2=1253080U;
f666(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l5;
si1=l6;
si2=1253096U;
f663(i,si0,si1,si2);
UNREACHABLE;
L108:;
si0=l30;
si1=l29;
f52(i,si0,si1);
UNREACHABLE;
L107:;
si0=l5;
si1=l6;
si2=1253112U;
f666(i,si0,si1,si2);
UNREACHABLE;
L106:;
si0=l1;
l29=si0;
si0=l20;
l26=si0;
si0=l25;
l30=si0;
L105:;
si0=0U;
si1=l8;
sj2=l11;
sj3=1ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l8=si0;
sj0=l11;
sj1=1ULL;
sj0>>=(sj1&63);
l11=sj0;
si0=0U;
l7=si0;
si0=1U;
l28=si0;
si0=l29;
l1=si0;
si0=l26;
l20=si0;
si0=l30;
l25=si0;
si0=l31;
if(si0){
goto L91;
}
si0=l27;
f15271(i,si0);
si0=l29;
l1=si0;
si0=l26;
l20=si0;
si0=l30;
l25=si0;
goto L91;
}
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l2;
si1=l1;
si2=1252984U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
l6=si0;
si0=l20;
l21=si0;
si0=l25;
l18=si0;
L7:;
sj0=l9;
si0=!(sj0);
if(si0){
goto L118;
}
si0=l5;
si1=l18;
si0=si0 < si1;
if(si0){
goto L119;
}
si0=1252784U;
si1=37U;
si2=1253064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L119:;
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L120;
}
sj0=0ULL;
l10=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L121;
}
sj0=0ULL;
sj1=l9;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l11=sj0;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l2=si0;
si1=1U;
si0+=si1;
l1=si0;
si1=3U;
si0&=si1;
l7=si0;
si0=l21;
l8=si0;
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L122;
}
si0=l1;
si1=1073741820U;
si0&=si1;
l2=si0;
sj0=0ULL;
l10=sj0;
si0=l21;
l8=si0;
L123:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l10;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l17;
sj3=l11;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=16U;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l10;
sj3=l11;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l17;
sj3=l11;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
l8=si0;
sj0=l10;
sj1=l11;
sj0>>=(sj1&63);
l10=sj0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
if(si0){
goto L123;
}
}
L122:;
si0=l7;
si0=!(si0);
if(si0){
goto L121;
}
L124:;
{
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l10;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l17;
sj1=l11;
sj0>>=(sj1&63);
l10=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L124;
}
}
L121:;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L125;
}
si0=l21;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
sj1=l10;
sj2=0ULL;
si1=sj1 != sj2;
si0+=si1;
l5=si0;
goto L118;
L125:;
si0=l5;
si1=l6;
si2=1253016U;
f663(i,si0,si1,si2);
UNREACHABLE;
L120:;
si0=l5;
si1=l6;
si2=1253000U;
f666(i,si0,si1,si2);
UNREACHABLE;
L118:;
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l4;
si1=l21;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+176U);
l8=si0;
si1=l19;
si0=si0 < si1;
if(si0){
goto L127;
}
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+168U);
si2=l19;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l4;
si1=l8;
si2=l19;
si1-=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l6;
si1=l8;
si0=si0 != si1;
if(si0){
goto L129;
}
si0=l21;
si1=l7;
si0=si0 != si1;
if(si0){
goto L129;
}
si0=l22;
if(si0){
goto L126;
}
si0=l23;
if(si0){
goto L128;
}
goto L126;
L129:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=0U;
si1=l4;
si2=216U;
si1+=si2;
si2=l4;
si3=224U;
si2+=si3;
si3=l4;
si4=232U;
si3+=si4;
si4=1253048U;
f1218(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L128:;
si0=l24;
f15271(i,si0);
goto L126;
L127:;
si0=l19;
si1=l8;
si2=1253032U;
f662(i,si0,si1,si2);
UNREACHABLE;
L126:;
si0=l13;
si0=!(si0);
if(si0){
goto L130;
}
si0=l14;
f15271(i,si0);
L130:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+168U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=168U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l8=si1;
si2=l5;
si3=l19;
si2+=si3;
l7=si2;
si3=l8;
si4=l7;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=256U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f1316(rustpythonInstance*i,U64 l0,U64 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=0ULL;
l4=sj0;
sj0=l2;
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
sj0=l2;
sj1=l2;
sj1=I64_CLZ(sj1);
sj0<<=(sj1&63);
l5=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L1;
}
sj0=1ULL;
l4=sj0;
si0=l3;
si1=24U;
si0+=si1;
sj1=0ULL;
sj2=l5;
sj3=1ULL;
sj2>>=(sj3&63);
sj3=1152921504606846976ULL;
sj4=l5;
sj5=55ULL;
sj4>>=(sj5&63);
si4=(U32)(sj4);
si5=255U;
si4&=si5;
si5=3U;
si4<<=(si5&31);
si5=1183368U;
si4+=si5;
sj4=i64_load(&i->m0,(U64)si4);
l6=sj4;
sj5=11ULL;
sj4<<=(sj5&63);
sj5=l6;
sj6=l5;
sj7=24ULL;
sj6>>=(sj7&63);
sj7=1ULL;
sj6+=sj7;
l7=sj6;
sj5*=sj6;
sj6=l6;
sj5*=sj6;
sj6=40ULL;
sj5>>=(sj6&63);
sj6=-1ULL;
sj5^=sj6;
sj4+=sj5;
l6=sj4;
sj5=l7;
sj4*=sj5;
sj3-=sj4;
sj4=l6;
sj3*=sj4;
sj4=47ULL;
sj3>>=(sj4&63);
sj4=l6;
sj5=13ULL;
sj4<<=(sj5&63);
sj3+=sj4;
l6=sj3;
sj2*=sj3;
l7=sj2;
sj1-=sj2;
sj2=l6;
sj3=1ULL;
sj2>>=(sj3&63);
sj3=l6;
sj4=l7;
sj3+=sj4;
sj2-=sj3;
sj3=l5;
sj4=1ULL;
sj3&=sj4;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=0ULL;
sj3=l6;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=8U;
si0+=si1;
sj1=l6;
sj2=31ULL;
sj1<<=(sj2&63);
si2=l3;
si3=24U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=1ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
sj2=1ULL;
sj1+=sj2;
l7=sj1;
sj2=l7;
sj3=l6;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj1=l6;
sj2=l5;
si3=l3;
si4=8U;
si3+=si4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+40U,sj1);
sj0=l1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=1ULL;
sj1=0ULL;
sj2=63ULL;
sj3=l1;
sj3=I64_CLZ(sj3);
l4=sj3;
sj2-=sj3;
l5=sj2;
sj3=l5;
sj4=64ULL;
sj5=l4;
sj4-=sj5;
si3=sj3 > sj4;
sj1=si3?sj1:sj2;
sj0<<=(sj1&63);
l5=sj0;
sj0=1ULL;
l4=sj0;
L3:;
{
sj0=l4;
sj1=l4;
sj2=l2;
si3=l3;
si4=40U;
si3+=si4;
sj0=f960(i,sj0,sj1,sj2,si3);
l4=sj0;
sj0=l5;
sj1=l1;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
sj0=l4;
sj1=l0;
sj2=l2;
si3=l3;
si4=40U;
si3+=si4;
sj0=f960(i,sj0,sj1,sj2,si3);
l4=sj0;
L4:;
sj0=l5;
sj1=1ULL;
si0=sj0 == sj1;
l8=si0;
sj0=l5;
sj1=1ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
sj0=l4;
goto L0;
L1:;
si0=1183330U;
si1=37U;
si2=1185416U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sj0;
}

void f1317(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l2;
si1=8U;
si0+=si1;
l5=si0;
sj0=64ULL;
l6=sj0;
goto L4;
L5:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
l6=sj0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=-8U;
si0+=si1;
l5=si0;
L4:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l7=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l3;
si1=8U;
si0+=si1;
l5=si0;
sj0=64ULL;
l8=sj0;
goto L6;
L7:;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
l8=sj0;
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=-8U;
si0+=si1;
l5=si0;
L6:;
sj0=l6;
sj1=l7;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
sj1=l8;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
sj2=I64_CLZ(sj2);
sj1-=sj2;
l7=sj1;
si0=sj0 < sj1;
if(si0){
goto L10;
}
sj0=l6;
sj1=l7;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l2;
si1=l3;
si0=f1025(i,si0,si1);
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L9;
default:
goto L10;
}
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
goto L12;
L13:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
L12:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
L10:;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L8;
L9:;
si0=l4;
si1=8U;
si0+=si1;
l2=si0;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=1ULL;
f993(i,si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1232988U;
si1=43U;
si2=1235140U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1232988U;
si1=43U;
si2=1235140U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1188948U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1318(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
sj0=64ULL;
l5=sj0;
goto L4;
L5:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
l5=sj0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=-8U;
si0+=si1;
l4=si0;
L4:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
sj0=64ULL;
l7=sj0;
goto L6;
L7:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
l7=sj0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=-8U;
si0+=si1;
l4=si0;
L6:;
sj0=l5;
sj1=l6;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=1ULL;
sj0+=sj1;
l5=sj0;
sj1=l7;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
sj2=I64_CLZ(sj2);
sj1-=sj2;
l6=sj1;
si0=sj0 < sj1;
if(si0){
goto L8;
}
sj0=l5;
sj1=l6;
si0=sj0 != sj1;
if(si0){
goto L9;
}
si0=l1;
si1=l2;
si0=f1025(i,si0,si1);
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L8;
}
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
goto L11;
L12:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L11:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1253936U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1253928U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
f994(i,si0,si1);
L8:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1232988U;
si1=43U;
si2=1235140U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1232988U;
si1=43U;
si2=1235140U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1188948U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1319(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l3;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=l2;
l7=si0;
L3:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
if(si0){
goto L3;
}
}
si0=l5;
l6=si0;
L2:;
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=0U;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L8:;
si0=0U;
l8=si0;
si0=l6;
si1=l3;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj1=0ULL;
si2=l2;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l8=si0;
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=l7;
si0-=si1;
l7=si0;
si1=3U;
si0&=si1;
l5=si0;
si0=0U;
l9=si0;
si0=l3;
si1=l6;
si0-=si1;
si1=-2U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l7;
si1=-4U;
si0&=si1;
l11=si0;
si0=0U;
l9=si0;
si0=l2;
l3=si0;
si0=l0;
l1=si0;
L11:;
{
si0=l1;
si1=l10;
si0+=si1;
l7=si0;
si1=8U;
si0+=si1;
si1=l3;
si2=l10;
si1+=si2;
l4=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
si0=l11;
si1=l9;
si2=4U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=8U;
si1+=si2;
l6=si1;
si0+=si1;
l7=si0;
si0=l2;
si1=l6;
si0+=si1;
l6=si0;
L12:;
{
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L12;
}
}
L9:;
si0=l8;
goto L0;
L7:;
si0=l6;
si1=l1;
si2=1254068U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l6;
si1=l3;
si2=1254084U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=l1;
si2=1254100U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1243756U;
si1=39U;
si2=1243912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1320(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=382U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1254196U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=382U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1254336U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1321(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=l1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1254196U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=382U;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=1254336U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U64 f1322(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
if(si0){
goto L5;
}
sj0=0ULL;
l6=sj0;
goto L1;
L5:;
si0=l3;
si1=1U;
si0&=si1;
l7=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
sj0=0ULL;
l6=sj0;
si0=0U;
l8=si0;
sj0=0ULL;
l9=sj0;
goto L2;
L4:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si1=l5;
si2=52U;
si1+=si2;
si2=l5;
si3=48U;
si2+=si3;
si3=l5;
si4=56U;
si3+=si4;
si4=1254352U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l3;
si1=-2U;
si0&=si1;
l10=si0;
sj0=0ULL;
l9=sj0;
si0=0U;
l8=si0;
si0=l2;
l1=si0;
si0=l0;
l3=si0;
sj0=0ULL;
l6=sj0;
L6:;
{
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj1=l6;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l11=sj1;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=8U;
si0+=si1;
l13=si0;
sj1=0ULL;
sj2=l11;
sj3=l6;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l5;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l12;
sj3=l11;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l11=sj1;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l6=sj1;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l6;
sj1=l11;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l5;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l12;
sj2=l6;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l10;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L2:;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l2;
si2=l8;
si3=3U;
si2<<=(si3&31);
l3=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l3;
si0+=si1;
l3=si0;
sj1=l6;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l11=sj1;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l11;
sj2=l6;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l4;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
L1:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
sj0=l6;
L0:;
return sj0;
}

void f1323(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
l5=si0;
goto L1;
L2:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L7;
}
si0=l7;
l5=si0;
goto L6;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L6;
L8:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l6=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=l8;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L9;
}
si0=l2;
si1=-1U;
si0+=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l7=si0;
si0=0U;
l6=si0;
L10:;
{
si0=l9;
si1=l6;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=1U;
l5=si0;
goto L1;
L11:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sj1=-1ULL;
sj0+=sj1;
l8=sj0;
si0=l5;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
si1=l5;
f1193(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
sj0=l3;
si0=!(sj0);
if(si0){
goto L10;
}
}
L9:;
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=l2;
si2=l7;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l4;
si1=l5;
si2=l6;
f1196(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L13:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l5;
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
l5=si0;
goto L1;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l7;
si1=l2;
si2=1254368U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1324(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l4;
si0=si0 < si1;
l6=si0;
if(si0){
goto L5;
}
si0=l2;
if(si0){
goto L7;
}
si0=8U;
l7=si0;
goto L6;
L7:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l8;
if(si0){
goto L9;
}
si0=l9;
l7=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l9;
si1=l8;
si0=f15277(i,si0,si1);
l7=si0;
goto L8;
L10:;
si0=l8;
si0=f15269(i,si0);
l7=si0;
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
L6:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l4;
si2=l6;
si0=si2?si0:si1;
l9=si0;
if(si0){
goto L4;
}
si0=0U;
l7=si0;
goto L1;
L5:;
si0=1254484U;
si1=34U;
si2=1254520U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
l8=si0;
si0=l1;
l6=si0;
si0=0U;
l7=si0;
L11:;
{
si0=l7;
si1=1U;
si0&=si1;
l10=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
si0=sj0 < sj1;
l13=si0;
sj0=l11;
sj1=l12;
si0=sj0 <= sj1;
l14=si0;
sj0=l11;
si1=l7;
sj1=(U64)(si1);
sj2=1ULL;
sj1&=sj2;
sj0-=sj1;
sj1=l12;
sj0-=sj1;
l11=sj0;
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=l8;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L12:;
si0=l14;
si1=l13;
si2=l10;
si0=si2?si0:si1;
l7=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L11;
}
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l3=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l5;
si1=l8;
si2=l3;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L15:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l8;
si2=l3;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
if(si0){
goto L16;
}
si0=0U;
l7=si0;
goto L14;
L16:;
si0=l3;
si1=l4;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=1U;
l7=si0;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l7=si0;
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l8;
si1=l2;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l4;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
L17:;
{
si0=l8;
si0=!(si0);
l7=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L17;
}
}
L14:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l7;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L13:;
si0=l4;
si1=l3;
si2=1254468U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1325(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l3;
if(si0){
goto L6;
}
si0=0U;
l7=si0;
goto L2;
L6:;
si0=l3;
si1=1U;
si0&=si1;
l8=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l7=si0;
si0=0U;
l9=si0;
goto L3;
L5:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l7=si0;
si0=l2;
l3=si0;
si0=l4;
l5=si0;
si0=l0;
l1=si0;
si0=0U;
l9=si0;
L7:;
{
si0=l1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si2=l7;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
l12=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=l11;
sj3=l12;
si2=sj2 <= sj3;
sj3=l11;
sj4=l12;
si3=sj3 < sj4;
si4=l7;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l7=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l11;
si0=sj0 <= sj1;
sj1=l13;
sj2=l11;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L3:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l2;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si2=l7;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l3;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l12=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l12;
si0=sj0 <= sj1;
sj1=l11;
sj2=l12;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
L2:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l7;
si1=1U;
si0&=si1;
goto L0;
L1:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l6;
si2=l6;
si3=4U;
si2+=si3;
si3=l6;
si4=8U;
si3+=si4;
si4=1254552U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f1326(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U64 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l5;
si0-=si1;
l6=si0;
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=1U;
si0&=si1;
l8=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L11;
L13:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l5;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l9=si0;
si0=l2;
l12=si0;
si0=l4;
l13=si0;
si0=l0;
l14=si0;
si0=0U;
l10=si0;
L14:;
{
si0=l14;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l15;
sj3=l16;
si2=sj2 <= sj3;
sj3=l15;
sj4=l16;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l15;
si0=sj0 <= sj1;
sj1=l17;
sj2=l15;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l11;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L11:;
si0=l8;
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l2;
si2=l12;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l9;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l12;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l16;
si0=sj0 <= sj1;
sj1=l15;
sj2=l16;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L15:;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
goto L3;
L10:;
si0=l3;
if(si0){
goto L3;
}
goto L2;
L9:;
si0=1254584U;
si1=37U;
si2=1254624U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l5;
si0-=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l12=si0;
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l5;
si1=-1U;
si0^=si1;
l12=si0;
si1=l3;
si0+=si1;
l10=si0;
si0=l12;
si1=l1;
si0+=si1;
l11=si0;
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=8U;
si1+=si2;
l12=si1;
si0+=si1;
l13=si0;
si0=l0;
si1=l12;
si0+=si1;
l14=si0;
si0=0U;
l12=si0;
si0=1U;
l9=si0;
L17:;
{
si0=l10;
si1=l12;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l11;
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l14;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L17;
}
}
L16:;
si0=l12;
si1=1U;
si0+=si1;
l13=si0;
si0=l12;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l4;
si1=l13;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l7;
si2=l12;
si1+=si2;
si2=l6;
si3=l13;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L2;
L7:;
si0=1253593U;
si1=35U;
si2=1254568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1254416U;
si1=34U;
si2=1254452U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si1=l8;
si2=1254384U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l13;
si1=l6;
si2=1254400U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
L2:;
si0=0U;
l9=si0;
L1:;
si0=l9;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f1327(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
if(si0){
goto L5;
}
si0=0U;
l5=si0;
goto L1;
L5:;
si0=l1;
si1=1U;
si0&=si1;
l6=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=0U;
l7=si0;
goto L2;
L4:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l4;
si2=l4;
si3=4U;
si2+=si3;
si3=l4;
si4=8U;
si3+=si4;
si4=1254640U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l1;
si1=-2U;
si0&=si1;
l8=si0;
si0=0U;
l5=si0;
si0=l2;
l3=si0;
si0=l0;
l1=si0;
si0=0U;
l7=si0;
L6:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l3;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=l9;
sj3=l10;
si2=sj2 <= sj3;
sj3=l9;
sj4=l10;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
si3=l3;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l9=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
sj1=l9;
si0=sj0 <= sj1;
sj1=l12;
sj2=l9;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l8;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L2:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l5;
sj2=(U64)(si2);
si3=l2;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l10=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l10;
si0=sj0 <= sj1;
sj1=l9;
sj2=l10;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l5;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f1328(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l13=0;
U64 l14=0;
U32 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si0-=si1;
l4=si0;
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0&=si1;
l7=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l8=si0;
si0=0U;
l9=si0;
goto L5;
L6:;
si0=l3;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l8=si0;
si0=l6;
l11=si0;
si0=l0;
l12=si0;
si0=0U;
l9=si0;
L7:;
{
si0=l11;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l15=si0;
si1=l12;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l13;
sj3=l14;
si2=sj2 <= sj3;
sj3=l13;
sj4=l14;
si3=sj3 < sj4;
si4=l8;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l13;
si0=sj0 <= sj1;
sj1=l16;
sj2=l13;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l10;
si1=l9;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L5:;
si0=l7;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l12=si0;
si1=l0;
si2=l11;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l8;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 <= sj1;
sj1=l13;
sj2=l14;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
L8:;
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l2;
si1=l3;
si2=l4;
f1196(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L9:;
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l11;
si2=l4;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=1U;
si0&=si1;
l9=si0;
si0=0U;
l8=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=1U;
l8=si0;
si0=l12;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l8=si0;
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l11;
si1=l1;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
L10:;
{
si0=l11;
si0=!(si0);
l8=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L10;
}
goto L1;
}
L4:;
si0=l1;
if(si0){
goto L11;
}
si0=0U;
l8=si0;
goto L1;
L11:;
si0=0U;
l8=si0;
si0=0U;
l11=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l4;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l2;
si1=0U;
si2=l4;
f1196(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
L12:;
si0=l6;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l2;
si1=l11;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L3:;
si0=1254484U;
si1=34U;
si2=1254704U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l12;
si2=1254688U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f1329(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0&=si1;
l8=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L5;
L7:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l9=si0;
si0=l2;
l5=si0;
si0=l4;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l10=si0;
L8:;
{
si0=l12;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l13;
sj3=l14;
si2=sj2 <= sj3;
sj3=l13;
sj4=l14;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l13;
si0=sj0 <= sj1;
sj1=l15;
sj2=l13;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l11;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L5:;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
si1=l2;
si2=l5;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l9;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l5;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l14;
si0=sj0 <= sj1;
sj1=l13;
sj2=l14;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L9:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l12=si0;
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l5=si0;
L10:;
{
si0=l5;
si0=!(si0);
l12=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L10;
}
goto L2;
}
L4:;
si0=1U;
l12=si0;
si0=0U;
l9=si0;
si0=l6;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l7;
si2=l7;
si3=4U;
si2+=si3;
si3=l7;
si4=8U;
si3+=si4;
si4=1254552U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l9;
si1=l12;
si0|=si1;
l9=si0;
L1:;
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l9;
si1=1U;
si0&=si1;
L0:;
return si0;
}


#include "w2c2_base.h"

#include "rustpython.h"

void f1230(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U32 l7,U32 l8) {
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
si0=l1;
si1=l5;
si2=l10;
l11=si2;
si1-=si2;
l12=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l3;
si1=l12;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l11;
si1=1U;
si0>>=(si1&31);
l13=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L12;
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
si0=f1228(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l19=si0;
si0=l13;
si1=l16;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l5;
si1=l11;
si0=si0 < si1;
if(si0){
goto L10;
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
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l11;
si1=l18;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l13;
si1=l8;
si0=si0 > si1;
if(si0){
goto L8;
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
goto L15;
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
L16:;
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
goto L16;
}
}
L15:;
si0=l11;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
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
L17:;
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
goto L7;
}
si0=l12;
si1=l18;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l13;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
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
goto L5;
}
sj0=0ULL;
l23=sj0;
si0=l12;
si1=l13;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l17;
si1=l14;
si0+=si1;
l12=si0;
sj0=0ULL;
l23=sj0;
L19:;
{
si0=l9;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l27;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
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
goto L19;
}
}
L18:;
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=-8U;
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
L14:;
si0=l12;
si1=l1;
si2=1250288U;
f593(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l12;
si1=l3;
si2=1250304U;
f593(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l13;
si1=l5;
si2=1250320U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l13;
si1=l16;
si2=1250336U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l11;
si1=l5;
si2=1250352U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l11;
si1=l18;
si2=1250368U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l13;
si1=l8;
si2=1250384U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l13;
si1=l12;
si2=1250400U;
f683(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l12;
si1=l18;
si2=1250400U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
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
si4=1203604U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l13;
si1=l5;
si2=1250416U;
f594(i,si0,si1,si2);
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
si0=l1;
si1=l5;
si2=l10;
si1-=si2;
l12=si1;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l5;
si1=l10;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L21;
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
f1231(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l1;
si1=l12;
si0=si0 == si1;
if(si0){
goto L24;
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
L26:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
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
goto L26;
}
}
si0=l13;
l16=si0;
L25:;
si0=l16;
si1=l21;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l16;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L20;
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
goto L24;
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
L27:;
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
goto L27;
}
}
L24:;
si0=l9;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L23:;
si0=l12;
si1=l1;
si2=1250256U;
f593(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l12;
si1=l5;
si2=1250272U;
f683(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l5;
si1=l3;
si2=1250272U;
f597(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l16;
si1=l21;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1231(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
si0=l3;
si1=l5;
si0=si0 < si1;
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
si0=l3;
si1=l5;
si0=si0 <= si1;
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
si0=l3;
si1=l12;
si0=si0 < si1;
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
si2=1250184U;
si3=l7;
si4=152U;
si3+=si4;
si4=1252812U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l1;
si1=l1;
si2=1252780U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=0U;
si1=0U;
si2=1252796U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=1U;
si1=l7;
si2=148U;
si1+=si2;
si2=1250180U;
si3=l7;
si4=152U;
si3+=si4;
si4=1252652U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1250221U;
si1=32U;
si2=1252844U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1250192U;
si1=29U;
si2=1252828U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=l3;
si2=1252764U;
f593(i,si0,si1,si2);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
si2=1252700U;
f594(i,si0,si1,si2);
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
si2=1252668U;
f593(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si1=l1;
si2=1252684U;
f593(i,si0,si1,si2);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
si2=1252748U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=0U;
si1=0U;
si2=1252732U;
f594(i,si0,si1,si2);
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
si2=1252716U;
f594(i,si0,si1,si2);
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

U64 f1232(rustpythonInstance*i,U64 l0) {
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
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1251468U;
si1=25U;
si2=1251496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
sj0=2ULL;
sj1=2ULL;
sj2=2ULL;
si3=l2;
si4=1251324U;
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

void f1233(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L6;
}
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
l1=si0;
sj0=l4;
si0=(U32)(sj0);
si1=1U;
si0&=si1;
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
si2=1251452U;
f594(i,si0,si1,si2);
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
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
sj0=2ULL;
sj1=2ULL;
sj2=2ULL;
sj3=l14;
si4=l6;
si5=1251324U;
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
si5=1251324U;
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
si2=1251592U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1248571U;
si1=43U;
si2=1251608U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
si1=l5;
si2=120U;
si1+=si2;
si2=1250184U;
si3=l5;
si4=136U;
si3+=si4;
si4=1251512U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
si1=l5;
si2=132U;
si1+=si2;
si2=1250180U;
si3=l5;
si4=136U;
si3+=si4;
si4=1251528U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l3;
si1=l1;
si2=1251544U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1251468U;
si1=25U;
si2=1251496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1234(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
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
si0=l5;
if(si0){
goto L7;
}
si0=8U;
l6=si0;
goto L2;
L7:;
si0=l5;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
if(si0){
goto L2;
}
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1248571U;
si1=43U;
si2=1251608U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=8U;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
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
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=1U;
si0=f15026(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L8:;
si0=l6;
si1=l2;
si2=l1;
si3=l2;
sj4=l3;
f1233(i,si0,si1,si2,si3,sj4);
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=8U;
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
l7=si1;
si0+=si1;
l8=si0;
si0=l6;
si1=l7;
si0+=si1;
l9=si0;
si0=l5;
if(si0){
goto L10;
}
sj0=0ULL;
l3=sj0;
goto L9;
L10:;
si0=l5;
si1=1U;
si0&=si1;
l10=si0;
si0=l2;
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=0U;
l11=si0;
sj0=0ULL;
l3=sj0;
goto L11;
L12:;
si0=l5;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l11=si0;
si0=l1;
l5=si0;
si0=l6;
l7=si0;
sj0=0ULL;
l3=sj0;
L13:;
{
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=6148914691236517205ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
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
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l7;
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
goto L13;
}
}
L11:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
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
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
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
L9:;
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
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1235(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
sj1=0ULL;
si0=sj0 == sj1;
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
si0=(U32)(sj0);
si1=1U;
si0&=si1;
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
si5=1251324U;
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
si5=1251324U;
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
f15157(i,si0,sj1,sj2,sj3,sj4);
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
si0=1248571U;
si1=43U;
si2=1251624U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
si1=l3;
si2=120U;
si1+=si2;
si2=1250184U;
si3=l3;
si4=136U;
si3+=si4;
si4=1251560U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=1U;
si1=l3;
si2=132U;
si1+=si2;
si2=1250180U;
si3=l3;
si4=136U;
si3+=si4;
si4=1251576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1251468U;
si1=25U;
si2=1251496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=128U;
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=128U;
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1236(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj6;
si0=i->g0;
si1=16U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
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
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=4U;
si0+=si1;
si1=l8;
f1298(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
L3:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=1U;
si2=3U;
f1014(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
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
goto L21;
}
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l7;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si1=0U;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
l9=si0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L17;
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
goto L18;
}
sj0=l11;
si0=(U32)(sj0);
l8=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L16;
}
sj0=2ULL;
sj1=2ULL;
sj2=l10;
si3=l8;
si4=1251324U;
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
goto L23;
}
si0=l0;
si1=l1;
si2=l9;
si3=l7;
si4=l2;
si5=l7;
sj6=l10;
f1237(i,si0,si1,si2,si3,si4,si5,sj6);
goto L22;
L23:;
si0=l0;
si1=l1;
si2=l9;
si3=l7;
si4=l2;
si5=l7;
sj6=l10;
f1231(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l1;
si0=!(si0);
if(si0){
goto L22;
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
L25:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L24;
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
goto L25;
}
}
si0=l12;
l7=si0;
L24:;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L15;
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
goto L22;
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
L26:;
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
goto L26;
}
}
L22:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
l13=si0;
si0=l9;
si1=8U;
si0+=si1;
l14=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L27:;
{
si0=l4;
l12=si0;
si0=l16;
si1=-4U;
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
l8=si0;
si0=l4;
si1=13U;
si0=si0 < si1;
if(si0){
goto L29;
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
si0=f1012(i,si0,sj1,si2);
l7=si0;
if(si0){
goto L30;
}
si0=0U;
l8=si0;
goto L28;
L30:;
si0=l7;
sj1=l10;
si1=(U32)(sj1);
l17=si1;
si0<<=(si1&31);
l8=si0;
si1=l17;
si0>>=(si1&31);
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
L29:;
si0=l8;
si1=l5;
si0=si0 > si1;
if(si0){
goto L13;
}
L28:;
si0=l1;
si1=l12;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l4;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l9;
si1=l8;
si2=l8;
si3=l2;
si4=l4;
si5=l0;
si6=l12;
si7=l9;
si8=l8;
si9=3U;
si8<<=(si9&31);
l17=si8;
si7+=si8;
l18=si7;
si8=l5;
si9=l8;
si8-=si9;
l7=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l4;
si1=l8;
si0-=si1;
si1=l12;
si0+=si1;
l19=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l7;
si1=l19;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l19;
si0=!(si0);
if(si0){
goto L31;
}
si0=l18;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l7=si0;
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L32;
}
si0=l8;
si1=-1U;
si0^=si1;
si1=l12;
si2=l4;
si1+=si2;
si0+=si1;
l20=si0;
si0=0U;
l7=si0;
si0=l14;
l8=si0;
L33:;
{
si0=l20;
si1=l7;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l8;
si1=l17;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L33;
}
}
L32:;
si0=l18;
si1=l7;
si2=1U;
si1+=si2;
l8=si1;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l9;
si2=l7;
si1+=si2;
si2=l19;
si3=l8;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
L31:;
si0=l4;
si1=l12;
si0-=si1;
l8=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l4;
si1=l5;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
l17=si1;
si0+=si1;
l20=si0;
si1=l1;
si2=l12;
si1-=si2;
l7=si1;
si2=l0;
si3=l8;
si4=l9;
si5=l17;
si4+=si5;
si5=l8;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=l12;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=l17;
si0-=si1;
l7=si0;
si0=l20;
l8=si0;
L35:;
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
goto L35;
}
}
si0=l20;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L34;
}
si0=l13;
si1=l17;
si0+=si1;
l8=si0;
si0=l12;
si1=l17;
si0-=si1;
si1=-8U;
si0+=si1;
l7=si0;
L36:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L34;
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
goto L36;
}
}
L34:;
si0=l15;
si1=l16;
si0=si0 != si1;
if(si0){
goto L27;
}
goto L4;
}
L21:;
si0=l7;
si1=l5;
si2=1251640U;
f597(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l7;
si1=l3;
si2=1251656U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=0U;
si1=0U;
si2=1251672U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1251468U;
si1=25U;
si2=1251496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si1=128U;
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l7;
si1=l1;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1248536U;
si1=35U;
si2=1251688U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1248536U;
si1=35U;
si2=1251704U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l4;
si1=l3;
si2=1251720U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l19;
si1=l8;
si2=1251736U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1202809U;
si1=34U;
si2=1203364U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l8;
si1=l12;
si2=1251752U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l12;
si1=l4;
si2=1251768U;
f683(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l4;
si1=l5;
si2=1251768U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si1=l7;
si2=1251784U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L37:;
si0=l6;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1237(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
si0=l7;
if(si0){
goto L16;
}
si0=8U;
l8=si0;
goto L15;
L16:;
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l8=si0;
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
si7=l8;
si8=l3;
f1230(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
si0=l8;
f15024(i,si0);
goto L0;
L14:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
sj6=l6;
f1231(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l1;
si0=!(si0);
if(si0){
goto L17;
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
l9=si0;
si0=0U;
l7=si0;
si0=l0;
l8=si0;
L19:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
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
goto L19;
}
}
si0=l9;
l7=si0;
L18:;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L17;
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
goto L17;
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
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
L20:;
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
goto L20;
}
}
L17:;
goto L0;
L13:;
si0=l3;
si1=l5;
si0=REM_U(si0,si1);
l9=si0;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l8;
if(si0){
goto L22;
}
si0=8U;
l10=si0;
goto L21;
L22:;
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L7;
}
L21:;
si0=l9;
si1=l5;
si2=l9;
si0=si2?si0:si1;
l8=si0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l8;
sj6=l6;
si7=l10;
si8=l5;
si0=f1228(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
goto L23;
L24:;
si0=l8;
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
si5=l8;
sj6=l6;
si0=f1229(i,si0,si1,si2,si3,si4,si5,sj6);
l7=si0;
L23:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l8;
si0-=si1;
l11=si0;
si1=l9;
si0=si0 >= si1;
l12=si0;
if(si0){
goto L26;
}
si0=l9;
si1=l11;
si0=f1126(i,si0,si1);
l13=si0;
goto L25;
L26:;
si0=l11;
si1=l9;
si0=f1126(i,si0,si1);
l13=si0;
L25:;
si0=8U;
l14=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L27;
}
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l15;
si0=!(si0);
if(si0){
goto L27;
}
si0=l15;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L4;
}
L27:;
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l12;
if(si0){
goto L29;
}
si0=l10;
si1=l5;
si2=l0;
si3=l9;
si4=l15;
si5=l11;
si6=l14;
si7=l13;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L28;
L29:;
si0=l10;
si1=l5;
si2=l15;
si3=l11;
si4=l0;
si5=l9;
si6=l14;
si7=l13;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L28:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si1=l9;
si2=3U;
si1<<=(si2&31);
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
si0=l10;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L31:;
{
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
goto L31;
}
L30:;
si0=1252956U;
si1=84U;
si2=1253040U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1252524U;
si1=28U;
si2=1253088U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1250221U;
si1=32U;
si2=1253072U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1250192U;
si1=29U;
si2=1253056U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l7;
si1=l1;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l7;
si1=l3;
si2=1252860U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=8U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l9;
si1=l1;
si2=1252876U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l9;
si0-=si1;
l17=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L34;
}
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l5;
si1=1U;
si0&=si1;
l18=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=0U;
l9=si0;
si0=0U;
l11=si0;
goto L32;
L34:;
si0=1201588U;
si1=35U;
si2=1203492U;
f604(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l5;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l9=si0;
si0=l10;
l7=si0;
si0=0U;
l11=si0;
L35:;
{
si0=l12;
si1=l11;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0+=si1;
l20=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l15;
si2=8U;
si1|=si2;
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
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l19;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L32:;
si0=l18;
si0=!(si0);
if(si0){
goto L36;
}
si0=l12;
si1=l11;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l9;
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
si2=l9;
si0=si2?si0:si1;
l9=si0;
L36:;
si0=l17;
si1=l5;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L37;
}
si0=l12;
si1=l5;
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
goto L37;
}
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L38:;
{
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l9;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
si0=!(sj0);
if(si0){
goto L38;
}
}
L37:;
si0=0U;
l7=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
f15024(i,si0);
L1:;
si0=l8;
si1=l3;
si2=l5;
si1-=si2;
l20=si1;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=l5;
si1+=si2;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l5;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l9;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
L42:;
{
si0=l7;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L43;
}
si0=l8;
si1=l5;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L43;
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
goto L43;
}
si0=l11;
l9=si0;
si0=l12;
l7=si0;
L45:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L43;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l16;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L43;
}
goto L45;
}
L44:;
si0=l7;
si1=l3;
si2=1252908U;
f593(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l1;
si1=l8;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l3;
si1=l8;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l11;
si1=l15;
si0-=si1;
l11=si0;
si0=l12;
si1=l15;
si0+=si1;
l12=si0;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l1;
si2=l8;
si1-=si2;
si2=l2;
si3=l7;
si2+=si3;
si3=l3;
si4=l8;
si3-=si4;
si4=l4;
si5=l5;
sj6=l6;
si7=l10;
si8=l5;
si0=f1228(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
si0=l8;
si1=l5;
si0+=si1;
l9=si0;
l8=si0;
si0=l9;
si1=l20;
si0=si0 != si1;
if(si0){
goto L42;
}
}
L41:;
si0=l1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l1;
si2=l20;
si1-=si2;
si2=l2;
si3=l8;
si2+=si3;
si3=l5;
si4=l4;
si5=l5;
sj6=l6;
si7=l10;
si8=l5;
f1230(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
si0=l10;
f15024(i,si0);
goto L0;
L46:;
si0=l20;
si1=l1;
si2=1252892U;
f593(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l8;
si1=l1;
si2=1252924U;
f593(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l8;
si1=l3;
si2=1252940U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1238(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6) {
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
goto L14;
}
si0=l3;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l7;
if(si0){
goto L16;
}
si0=8U;
l8=si0;
goto L15;
L16:;
si0=l7;
si1=1U;
si0=f15026(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L12;
}
L15:;
si0=l3;
si1=l5;
si0-=si1;
l9=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l5;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l9;
si1=211U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l0;
si1=l9;
si2=l2;
si3=l3;
si4=l4;
si5=l9;
sj6=l6;
si7=l8;
si8=l5;
si0=f1228(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l10=si0;
goto L18;
L19:;
si0=l9;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=l9;
si2=l2;
si3=l7;
si4=l4;
si5=l9;
sj6=l6;
si0=f1229(i,si0,si1,si2,si3,si4,si5,sj6);
l10=si0;
L18:;
si0=l5;
si1=l9;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l9;
si0-=si1;
l7=si0;
si1=l9;
si0=si0 >= si1;
l1=si0;
if(si0){
goto L21;
}
si0=l9;
si1=l7;
si0=f1126(i,si0,si1);
l11=si0;
goto L20;
L21:;
si0=l7;
si1=l9;
si0=f1126(i,si0,si1);
l11=si0;
L20:;
si0=8U;
l12=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L22;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l13;
si0=!(si0);
if(si0){
goto L22;
}
si0=l13;
si1=1U;
si0=f15026(i,si0,si1);
l12=si0;
si0=!(si0);
if(si0){
goto L8;
}
L22:;
si0=l4;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l1;
if(si0){
goto L24;
}
si0=l8;
si1=l5;
si2=l0;
si3=l9;
si4=l13;
si5=l7;
si6=l12;
si7=l11;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L23;
L24:;
si0=l8;
si1=l5;
si2=l13;
si3=l7;
si4=l0;
si5=l9;
si6=l12;
si7=l11;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L23:;
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=l9;
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
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
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
l1=si0;
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
L26:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L25;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l14;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
goto L26;
}
L25:;
si0=1252176U;
si1=74U;
si2=1252252U;
f604(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l9;
si1=l5;
si0=REM_U(si0,si1);
l1=si0;
si1=l5;
si2=l1;
si0=si2?si0:si1;
l15=si0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l0;
si1=l9;
si2=l2;
si3=l3;
si4=l4;
si5=l15;
sj6=l6;
si7=l8;
si8=l5;
si0=f1228(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
goto L27;
L28:;
si0=l15;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l9;
si2=l2;
si3=l7;
si4=l4;
si5=l15;
sj6=l6;
si0=f1229(i,si0,si1,si2,si3,si4,si5,sj6);
l7=si0;
L27:;
si0=l1;
if(si0){
goto L29;
}
si0=0U;
l16=si0;
goto L3;
L29:;
si0=l5;
si1=l15;
si0-=si1;
l10=si0;
si1=l1;
si0=si0 >= si1;
l13=si0;
if(si0){
goto L31;
}
si0=l1;
si1=l10;
si0=f1126(i,si0,si1);
l17=si0;
goto L30;
L31:;
si0=l10;
si1=l1;
si0=f1126(i,si0,si1);
l17=si0;
L30:;
si0=8U;
l18=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L32;
}
si0=l17;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l17;
si1=3U;
si0<<=(si1&31);
l19=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l19;
si0=!(si0);
if(si0){
goto L32;
}
si0=l19;
si1=1U;
si0=f15026(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L5;
}
L32:;
si0=l4;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l13;
if(si0){
goto L34;
}
si0=l8;
si1=l5;
si2=l0;
si3=l1;
si4=l19;
si5=l10;
si6=l18;
si7=l17;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L33;
L34:;
si0=l8;
si1=l5;
si2=l19;
si3=l10;
si4=l0;
si5=l1;
si6=l18;
si7=l17;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L33:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=l1;
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
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l8;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L36:;
{
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L35;
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
goto L4;
}
goto L36;
}
L35:;
si0=1252392U;
si1=84U;
si2=1252476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1252524U;
si1=28U;
si2=1252552U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1252112U;
si1=31U;
si2=1252508U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=8U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l9;
si1=l1;
si2=1252160U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1250192U;
si1=29U;
si2=1252492U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si1=l3;
si2=1249020U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l7;
si1=l3;
si2=1249020U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=8U;
si1=l19;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l3;
si1=l1;
si0-=si1;
l16=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l5;
si1=1U;
si0&=si1;
l20=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=0U;
l1=si0;
si0=0U;
l10=si0;
goto L38;
L40:;
si0=1201588U;
si1=35U;
si2=1203492U;
f604(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l5;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l1=si0;
si0=l8;
l7=si0;
si0=0U;
l10=si0;
L41:;
{
si0=l13;
si1=l10;
si2=3U;
si1<<=(si2&31);
l19=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l1;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l19;
si2=8U;
si1|=si2;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=l14;
sj3=l21;
si2=sj2 <= sj3;
sj3=l14;
sj4=l21;
si3=sj3 < sj4;
si4=l1;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l1=si2;
sj2=(U64)(si2);
si3=l7;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l14=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l14;
si0=sj0 <= sj1;
sj1=l22;
sj2=l14;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l12;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L41;
}
}
L38:;
si0=l20;
si0=!(si0);
if(si0){
goto L42;
}
si0=l13;
si1=l10;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l1;
sj2=(U64)(si2);
si3=l8;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l21;
si0=sj0 <= sj1;
sj1=l14;
sj2=l21;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
L42:;
si0=l16;
si1=l5;
si0=si0 == si1;
l7=si0;
si1=l1;
si0&=si1;
l16=si0;
si0=l7;
if(si0){
goto L43;
}
si0=l1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L43;
}
si0=l13;
si1=l5;
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
si0=0U;
l16=si0;
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L43;
}
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
L44:;
{
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si1=l1;
si0=si0 == si1;
l16=si0;
if(si0){
goto L43;
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
goto L44;
}
}
L43:;
si0=0U;
l7=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L3;
}
si0=l18;
f15024(i,si0);
goto L3;
L37:;
si0=l1;
si1=l3;
si2=1252268U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l9;
si1=l15;
si0-=si1;
l10=si0;
if(si0){
goto L46;
}
si0=l16;
l1=si0;
goto L45;
L46:;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l15;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=l11;
si0+=si1;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l17=si0;
L47:;
{
si0=l3;
si1=l9;
si2=l10;
si1-=si2;
l19=si1;
si0=si0 < si1;
if(si0){
goto L50;
}
si0=l3;
si1=l19;
si0-=si1;
l13=si0;
si0=l2;
si1=l19;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
l12=si0;
si0=l7;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L52;
}
si0=l13;
si1=l5;
si0=si0 < si1;
if(si0){
goto L49;
}
si0=l13;
si1=l5;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l12;
si1=l11;
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
goto L52;
}
si0=l15;
l1=si0;
si0=l17;
l7=si0;
L53:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L51;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
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
sj0=l14;
si0=!(sj0);
if(si0){
goto L53;
}
}
L52:;
si0=l16;
l1=si0;
goto L48;
L51:;
si0=1U;
l1=si0;
si0=l16;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L48;
}
si0=1252284U;
si1=25U;
si2=1252376U;
f604(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l19;
si1=l3;
si2=1252328U;
f593(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l5;
si1=l13;
si2=1252344U;
f593(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l9;
si1=l10;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l15;
si1=l11;
si0-=si1;
l15=si0;
si0=l17;
si1=l11;
si0+=si1;
l17=si0;
si0=l0;
si1=l18;
si0+=si1;
si1=l10;
si2=l12;
si3=l13;
si4=l4;
si5=l5;
sj6=l6;
si7=l8;
si8=l5;
si0=f1228(i,si0,si1,si2,si3,si4,si5,sj6,si7,si8);
l7=si0;
si0=l1;
l16=si0;
si0=l10;
si1=l5;
si0-=si1;
l13=si0;
l10=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L45;
}
goto L47;
L54:;
}
si0=l19;
si1=l9;
si2=1252360U;
f593(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l7;
si1=l1;
si2=1U;
si1&=si2;
l1=si1;
si0|=si1;
si1=0U;
si0=si0 != si1;
l10=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=1252284U;
si1=25U;
si2=1252312U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=1U;
si0&=si1;
l3=si0;
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=0U;
l10=si0;
si0=0U;
l5=si0;
goto L55;
L56:;
si0=l5;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l10=si0;
si0=l8;
l1=si0;
si0=l9;
l7=si0;
si0=0U;
l5=si0;
L57:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l10;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=l14;
sj3=l21;
si2=sj2 <= sj3;
sj3=l14;
sj4=l21;
si3=sj3 < sj4;
si4=l10;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l10=si2;
sj2=(U64)(si2);
si3=l1;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l14=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
sj1=l14;
si0=sj0 <= sj1;
sj1=l22;
sj2=l14;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l19;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L57;
}
}
L55:;
si0=l3;
si0=!(si0);
if(si0){
goto L58;
}
si0=l9;
si1=l5;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l10;
sj2=(U64)(si2);
si3=l8;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l21;
si0=sj0 <= sj1;
sj1=l14;
sj2=l21;
si1=sj1 < sj2;
si2=l10;
si0=si2?si0:si1;
l10=si0;
L58:;
si0=l11;
si0=!(si0);
if(si0){
goto L1;
}
si0=l12;
f15024(i,si0);
L1:;
si0=l8;
f15024(i,si0);
si0=l10;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f1239(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=1248848U;
si1=25U;
si2=1252568U;
f604(i,si0,si1,si2);
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
si0=f1012(i,si0,sj1,si2);
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
si0=f1012(i,si0,sj1,si2);
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
si0=f1011(i,si0,si1,si2);
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
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1240(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
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
goto L34;
}
si0=l7;
si1=2U;
si0+=si1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L35;
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
goto L45;
}
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l9;
si1=l11;
si2=l11;
si3=1U;
si2>>=(si3&31);
l12=si2;
si1-=si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L39;
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
f1236(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l5;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l0;
si1=l13;
si2=l4;
si3=l13;
si4=l8;
si5=l13;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=31U;
si0=si0 < si1;
if(si0){
goto L50;
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
l17=sj1;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l1=si0;
if(si0){
goto L52;
}
si0=0U;
l18=si0;
goto L51;
L52:;
si0=l1;
sj1=l17;
si1=(U32)(sj1);
l3=si1;
si0<<=(si1&31);
l18=si0;
si1=l3;
si0>>=(si1&31);
si1=l1;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=l18;
si1=l16;
si0=si0 > si1;
if(si0){
goto L42;
}
L51:;
si0=l15;
si1=l18;
si2=l18;
si3=l6;
si4=l7;
si5=l0;
si6=l13;
si7=l15;
si8=l18;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l19=si7;
si8=l16;
si9=l18;
si8-=si9;
l1=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l13;
si1=l7;
si0+=si1;
l20=si0;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l20;
si1=l18;
si0-=si1;
l21=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l21;
si1=l5;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l21;
si1=l1;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l21;
si1=1U;
si0&=si1;
l22=si0;
si0=l18;
si1=-1U;
si0^=si1;
si1=l5;
si0+=si1;
si1=l12;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=0U;
l23=si0;
si0=0U;
l1=si0;
goto L47;
L50:;
si0=l7;
si1=l13;
si0=f1126(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l23=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l23;
if(si0){
goto L53;
}
si0=8U;
l3=si0;
goto L16;
L53:;
si0=l23;
si1=1U;
si0=f15026(i,si0,si1);
l3=si0;
if(si0){
goto L16;
}
si0=8U;
si1=l23;
f52(i,si0,si1);
UNREACHABLE;
L49:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l18;
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
l23=si0;
L54:;
{
si0=l1;
si1=l24;
si0+=si1;
l27=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l23;
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
sj2=l17;
sj3=l28;
si2=sj2 <= sj3;
sj3=l17;
sj4=l28;
si3=sj3 < sj4;
si4=l23;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l23=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l17;
si0=sj0 <= sj1;
sj1=l29;
sj2=l17;
si1=sj1 < sj2;
si2=l23;
si0=si2?si0:si1;
l23=si0;
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
goto L54;
}
}
si0=0U;
si1=l25;
si0-=si1;
l1=si0;
L47:;
si0=l22;
si0=!(si0);
if(si0){
goto L55;
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
l17=sj1;
si2=l23;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l23;
si0=si2?si0:si1;
l23=si0;
L55:;
si0=l23;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l16;
si1=l21;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l15;
si1=l21;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l12;
si1=4U;
si0<<=(si1&31);
l1=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l18;
si2=l7;
si1+=si2;
si2=3U;
si1<<=(si2&31);
l23=si1;
si0+=si1;
si1=l5;
si2=4U;
si1<<=(si2&31);
l25=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l25;
si1=l23;
si0-=si1;
si1=l1;
si0-=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L57:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L56;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
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
sj0=l17;
si0=!(sj0);
if(si0){
goto L57;
}
goto L14;
}
L56:;
si0=1249496U;
si1=74U;
si2=1249972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l15;
si1=l16;
si2=l6;
si3=l7;
si4=l0;
si5=l13;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L15;
L45:;
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L58;
}
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l9;
si1=l11;
si2=-1U;
si1+=si2;
l1=si1;
si2=l1;
si3=l7;
si2=DIV_U(si2,si3);
si3=1U;
si2+=si3;
si1=DIV_U(si1,si2);
l23=si1;
si2=1U;
si1+=si2;
l27=si1;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l7;
si1=l27;
si0=si0 < si1;
if(si0){
goto L61;
}
si0=l8;
si1=l27;
si2=l6;
si3=l27;
si4=l8;
si5=l27;
si6=3U;
si5<<=(si6&31);
si4+=si5;
l12=si4;
si5=l9;
si6=l27;
si5-=si6;
l21=si5;
f1236(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=l2;
si1=l4;
si2=l7;
si3=3U;
si2<<=(si3&31);
l25=si2;
si0=f15143(i,si0,si1,si2);
l19=si0;
si0=0U;
l1=si0;
si0=l11;
si1=l27;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=0U;
l26=si0;
si0=l11;
l15=si0;
goto L31;
L63:;
si0=l21;
si1=l7;
si0-=si1;
l30=si0;
si0=l12;
si1=l27;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l1=si0;
si0=l19;
si1=l3;
si0+=si1;
l3=si0;
si0=l12;
si1=l25;
si0+=si1;
l31=si0;
si0=l19;
si1=l7;
si2=l27;
si1-=si2;
l32=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l33=si0;
si0=l27;
si1=31U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l27;
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
si0=l32;
si1=-2U;
si0&=si1;
l20=si0;
si0=l32;
si1=1U;
si0&=si1;
l37=si0;
si0=l8;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=0U;
l26=si0;
si0=l7;
si1=-2U;
si0+=si1;
si1=l23;
si0=si0 == si1;
l38=si0;
si0=l11;
l15=si0;
L64:;
{
si0=l11;
si1=l15;
si0-=si1;
l23=si0;
si0=l11;
si1=l15;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l5;
si1=l15;
si0-=si1;
l22=si0;
si0=l5;
si1=l15;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l0;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l27;
si2=l19;
si3=l27;
si4=l8;
si5=l27;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l7;
sj1=l35;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l25=si0;
if(si0){
goto L74;
}
si0=0U;
l23=si0;
goto L73;
L74:;
si0=l25;
si1=l36;
si0<<=(si1&31);
l23=si0;
si1=l36;
si0>>=(si1&31);
si1=l25;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l23;
si1=l21;
si0=si0 > si1;
if(si0){
goto L71;
}
L73:;
si0=l12;
si1=l23;
si2=l23;
si3=l6;
si4=l7;
si5=l13;
si6=l27;
si7=l12;
si8=l23;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l16=si7;
si8=l21;
si9=l23;
si8-=si9;
l18=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l14;
si1=l34;
si2=l23;
si1-=si2;
si2=l34;
si3=l23;
si2=si2 < si3;
l25=si2;
si0=si2?si0:si1;
l14=si0;
si0=l25;
if(si0){
goto L75;
}
si0=l14;
si0=!(si0);
if(si0){
goto L75;
}
si0=l14;
si1=l23;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l14;
si1=l7;
si0=si0 > si1;
if(si0){
goto L69;
}
si0=l14;
si1=l18;
si0=si0 > si1;
if(si0){
goto L68;
}
si0=l14;
si1=1U;
si0&=si1;
l39=si0;
si0=0U;
l25=si0;
si0=0U;
l13=si0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l14;
si1=-2U;
si0&=si1;
l2=si0;
si0=0U;
l25=si0;
si0=l19;
l23=si0;
si0=0U;
l13=si0;
L77:;
{
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
si1=l12;
si2=l18;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l23;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=l18;
si2=8U;
si1|=si2;
l18=si1;
si0+=si1;
si1=l12;
si2=l18;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l17;
sj3=l28;
si2=sj2 <= sj3;
sj3=l17;
sj4=l28;
si3=sj3 < sj4;
si4=l25;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l25=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l23;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l17;
si0=sj0 <= sj1;
sj1=l29;
sj2=l17;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l23;
si1=16U;
si0+=si1;
l23=si0;
si0=l2;
si1=l13;
si2=2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L77;
}
}
L76:;
si0=l39;
si0=!(si0);
if(si0){
goto L78;
}
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
l23=si1;
si0+=si1;
si1=l12;
si2=l23;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
sj2=(U64)(si2);
sj1-=sj2;
si2=l19;
si3=l23;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
L78:;
si0=l25;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L75;
}
si0=l21;
si1=l14;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l12;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L75;
}
L79:;
{
si0=l23;
si1=8U;
si0+=si1;
l23=si0;
si1=l24;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
si0=!(sj0);
if(si0){
goto L79;
}
}
L75:;
si0=l21;
si1=l7;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l7;
si1=l27;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l32;
si1=l27;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=0U;
l25=si0;
si0=0U;
l13=si0;
si0=l38;
if(si0){
goto L80;
}
si0=0U;
l25=si0;
si0=l19;
l23=si0;
si0=0U;
l13=si0;
L81:;
{
si0=l23;
si1=l3;
si2=l13;
si3=3U;
si2<<=(si3&31);
l18=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
si3=l18;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=8U;
si0+=si1;
si1=l3;
si2=l18;
si3=8U;
si2|=si3;
l18=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l17;
sj3=l28;
si2=sj2 <= sj3;
sj3=l17;
sj4=l28;
si3=sj3 < sj4;
si4=l25;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l25=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=l18;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l17;
si0=sj0 <= sj1;
sj1=l29;
sj2=l17;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l23;
si1=16U;
si0+=si1;
l23=si0;
si0=l20;
si1=l13;
si2=2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L81;
}
}
L80:;
si0=l37;
si0=!(si0);
if(si0){
goto L82;
}
si0=l19;
si1=l13;
si2=3U;
si1<<=(si2&31);
l23=si1;
si0+=si1;
si1=l3;
si2=l23;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=l23;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
L82:;
si0=l26;
si1=l25;
si0&=si1;
si1=1U;
si0&=si1;
if(si0){
goto L83;
}
si0=l26;
si1=l25;
si0|=si1;
l26=si0;
goto L65;
L83:;
si0=l21;
si1=l7;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l31;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l26=si0;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L65;
}
si0=l31;
l23=si0;
L84:;
{
si0=l23;
si1=8U;
si0+=si1;
l23=si0;
si1=l24;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L65;
}
goto L84;
}
L72:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=1248536U;
si1=35U;
si2=1249716U;
f604(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l14;
si1=l23;
si2=1249732U;
f597(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l14;
si1=l7;
si2=1249748U;
f597(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1249496U;
si1=74U;
si2=1249764U;
f604(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l27;
si1=l30;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l33;
si1=l27;
si2=l4;
si3=l22;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l27;
si4=l31;
si5=l27;
si6=l26;
si7=1U;
si6&=si7;
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
l26=si0;
si0=l15;
si1=l27;
si0-=si1;
l15=si0;
si1=l27;
si0=si0 > si1;
if(si0){
goto L64;
}
goto L32;
}
L62:;
si0=l7;
si1=l5;
si2=1249416U;
f597(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l27;
si1=l7;
si2=1249400U;
f597(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=1248536U;
si1=35U;
si2=1249384U;
f604(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l7;
si1=l3;
si2=1249368U;
f597(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l11;
si1=l1;
si2=1249352U;
f597(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l21;
si1=l5;
si2=1249956U;
f597(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l21;
si1=l18;
si2=1249940U;
f597(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=1248536U;
si1=35U;
si2=1249924U;
f604(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l13;
si1=l5;
si2=1249908U;
f597(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l13;
si1=l7;
si2=1249892U;
f597(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=1248536U;
si1=35U;
si2=1249876U;
f604(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l7;
si1=l3;
si2=1249860U;
f597(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l11;
si1=l1;
si2=1249844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1252584U;
si1=36U;
si2=1252620U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1252524U;
si1=28U;
si2=1252636U;
f604(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l21;
si1=l7;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l32;
si1=-2U;
si0&=si1;
l16=si0;
si0=l32;
si1=1U;
si0&=si1;
l20=si0;
si0=l8;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l7;
si1=-2U;
si0+=si1;
si1=l23;
si0=si0 == si1;
l24=si0;
si0=0U;
l26=si0;
si0=l11;
l15=si0;
L85:;
{
si0=l11;
si1=l15;
si0-=si1;
l23=si0;
si0=l11;
si1=l15;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l5;
si1=l15;
si0-=si1;
l22=si0;
si0=l5;
si1=l15;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l0;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si1=l27;
si2=l19;
si3=l27;
si4=l8;
si5=l27;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l7;
si1=l27;
si0=f1126(i,si0,si1);
l23=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l23;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l23;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l18;
if(si0){
goto L89;
}
si0=8U;
l13=si0;
goto L87;
L89:;
si0=l18;
si1=1U;
si0=f15026(i,si0,si1);
l13=si0;
if(si0){
goto L87;
}
si0=8U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L88:;
si0=l12;
si1=l21;
si2=l6;
si3=l7;
si4=l25;
si5=l27;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L86;
L87:;
si0=l12;
si1=l21;
si2=l6;
si3=l7;
si4=l25;
si5=l27;
si6=l13;
si7=l23;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l13;
f15024(i,si0);
L86:;
si0=l7;
si1=l27;
si0=si0 == si1;
if(si0){
goto L90;
}
si0=l32;
si1=l27;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=0U;
l25=si0;
si0=0U;
l13=si0;
si0=l24;
if(si0){
goto L91;
}
si0=0U;
l25=si0;
si0=l19;
l23=si0;
si0=0U;
l13=si0;
L92:;
{
si0=l23;
si1=l3;
si2=l13;
si3=3U;
si2<<=(si3&31);
l18=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
si3=l18;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=8U;
si0+=si1;
si1=l3;
si2=l18;
si3=8U;
si2|=si3;
l18=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l17;
sj3=l28;
si2=sj2 <= sj3;
sj3=l17;
sj4=l28;
si3=sj3 < sj4;
si4=l25;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l25=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=l18;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l17;
si0=sj0 <= sj1;
sj1=l29;
sj2=l17;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l23;
si1=16U;
si0+=si1;
l23=si0;
si0=l16;
si1=l13;
si2=2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L92;
}
}
L91:;
si0=l20;
si0=!(si0);
if(si0){
goto L93;
}
si0=l19;
si1=l13;
si2=3U;
si1<<=(si2&31);
l23=si1;
si0+=si1;
si1=l3;
si2=l23;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=l23;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
L93:;
si0=l26;
si1=l25;
si0&=si1;
si1=1U;
si0&=si1;
if(si0){
goto L94;
}
si0=l26;
si1=l25;
si0|=si1;
l26=si0;
goto L90;
L94:;
si0=l21;
si1=l7;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l31;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l26=si0;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L90;
}
si0=l31;
l23=si0;
L95:;
{
si0=l23;
si1=8U;
si0+=si1;
l23=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
si0=!(sj0);
if(si0){
goto L95;
}
}
L90:;
si0=l27;
si1=l30;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l33;
si1=l27;
si2=l4;
si3=l22;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l27;
si4=l31;
si5=l27;
si6=l26;
si7=1U;
si6&=si7;
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
l26=si0;
si0=l15;
si1=l27;
si0-=si1;
l15=si0;
si1=l27;
si0=si0 > si1;
if(si0){
goto L85;
}
}
L32:;
si0=l11;
si1=l15;
si0-=si1;
l1=si0;
si0=l11;
si1=l15;
si0=si0 < si1;
if(si0){
goto L28;
}
L31:;
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l15;
si2=l19;
si3=l15;
si4=l8;
si5=l15;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l15;
si1=31U;
si0=si0 < si1;
if(si0){
goto L100;
}
si0=l7;
l1=si0;
si0=l7;
si1=13U;
si0=si0 < si1;
if(si0){
goto L102;
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
l17=sj1;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l23=si0;
if(si0){
goto L103;
}
si0=0U;
l1=si0;
goto L101;
L103:;
si0=l23;
sj1=l17;
si1=(U32)(sj1);
l25=si1;
si0<<=(si1&31);
l1=si0;
si1=l25;
si0>>=(si1&31);
si1=l23;
si0=si0 != si1;
if(si0){
goto L27;
}
L102:;
si0=l1;
si1=l21;
si0=si0 > si1;
if(si0){
goto L26;
}
L101:;
si0=l12;
si1=l1;
si2=l1;
si3=l6;
si4=l7;
si5=l3;
si6=l15;
si7=l12;
si8=l1;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l27=si7;
si8=l21;
si9=l1;
si8-=si9;
l23=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l15;
si1=l7;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l3;
si1=l1;
si0-=si1;
l18=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l18;
si1=l7;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l18;
si1=l23;
si0=si0 > si1;
if(si0){
goto L99;
}
si0=l18;
si1=1U;
si0&=si1;
l16=si0;
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L98;
}
si0=0U;
l3=si0;
si0=0U;
l23=si0;
goto L97;
L100:;
si0=l7;
si1=l15;
si0=f1126(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L96;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l25=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l25;
if(si0){
goto L104;
}
si0=8U;
l23=si0;
goto L22;
L104:;
si0=l25;
si1=1U;
si0=f15026(i,si0,si1);
l23=si0;
if(si0){
goto L22;
}
si0=8U;
si1=l25;
f52(i,si0,si1);
UNREACHABLE;
L99:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L98:;
si0=l18;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l3=si0;
si0=l19;
l1=si0;
si0=0U;
l23=si0;
L105:;
{
si0=l27;
si1=l23;
si2=3U;
si1<<=(si2&31);
l25=si1;
si0+=si1;
si1=l12;
si2=l25;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
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
si0=l27;
si1=l25;
si2=8U;
si1|=si2;
l25=si1;
si0+=si1;
si1=l12;
si2=l25;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l17;
sj3=l28;
si2=sj2 <= sj3;
sj3=l17;
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
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l17;
si0=sj0 <= sj1;
sj1=l29;
sj2=l17;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l13;
si1=l23;
si2=2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L105;
}
}
L97:;
si0=l16;
si0=!(si0);
if(si0){
goto L106;
}
si0=l27;
si1=l23;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l12;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l3;
sj2=(U64)(si2);
sj1-=sj2;
si2=l19;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l3;
si0=si2?si0:si1;
l3=si0;
L106:;
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l21;
si1=l18;
si0=si0 == si1;
if(si0){
goto L107;
}
si0=l12;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L21;
}
si0=l8;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L108:;
{
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L107;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
si0=!(sj0);
if(si0){
goto L108;
}
goto L21;
}
L107:;
si0=1249496U;
si1=74U;
si2=1249572U;
f604(i,si0,si1,si2);
UNREACHABLE;
L96:;
si0=l12;
si1=l21;
si2=l6;
si3=l7;
si4=l3;
si5=l15;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L21;
L30:;
si0=1249620U;
si1=63U;
si2=1249812U;
f604(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l1;
si1=l11;
si2=1249432U;
f593(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1248536U;
si1=35U;
si2=1249448U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l18;
si1=l1;
si2=1249464U;
f597(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l18;
si1=l7;
si2=1249480U;
f597(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l27;
si1=l30;
si2=1249796U;
f597(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l12;
si1=l21;
si2=l6;
si3=l7;
si4=l3;
si5=l15;
si6=l23;
si7=l1;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l23;
f15024(i,si0);
L21:;
si0=l21;
si1=l7;
si0=si0 < si1;
if(si0){
goto L111;
}
si0=l12;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l7;
si1=l15;
si0=si0 == si1;
if(si0){
goto L109;
}
si0=l15;
si1=l7;
si2=l15;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=l12;
si1=l15;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l18=si0;
si0=l15;
l27=si0;
si0=l19;
l1=si0;
si0=0U;
l23=si0;
si0=0U;
l25=si0;
L112:;
{
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L110;
}
si0=l1;
si1=l1;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
si3=255U;
si2&=si3;
l25=si2;
si3=0U;
si2=si2 != si3;
sj2=(U64)(si2);
sj1-=sj2;
si2=l18;
si3=l23;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l23;
si1=1U;
si0+=si1;
l23=si0;
si0=l7;
si1=l27;
si2=1U;
si1+=si2;
l27=si1;
si0=si0 != si1;
if(si0){
goto L112;
}
}
si0=l26;
si1=l25;
si0&=si1;
if(si0){
goto L113;
}
si0=l26;
si1=l25;
si0|=si1;
l26=si0;
goto L109;
L113:;
si0=l21;
si1=l7;
si0=si0 == si1;
if(si0){
goto L114;
}
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l26=si0;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L109;
}
si0=l8;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l16;
l1=si0;
L115:;
{
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L114;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L109;
}
goto L115;
}
L114:;
si0=1249620U;
si1=63U;
si2=1249684U;
f604(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=1248536U;
si1=35U;
si2=1249588U;
f604(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l27;
si1=l7;
si2=1203588U;
f594(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l15;
si1=l21;
si2=l7;
si1-=si2;
l1=si1;
si0=si0 <= si1;
if(si0){
goto L116;
}
si0=l15;
si1=l1;
si2=1249604U;
f597(i,si0,si1,si2);
UNREACHABLE;
L116:;
si0=l19;
si1=l7;
si2=l15;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l15;
si2=l4;
si3=l5;
si4=l15;
si3-=si4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l15;
si4=l16;
si5=l15;
si6=l26;
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
goto L1;
L20:;
si0=l0;
si1=l27;
si2=l19;
si3=l27;
si4=l8;
si5=l27;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l10;
si1=8U;
si0+=si1;
si1=l7;
si2=l27;
si1=f1126(i,si1,si2);
l1=si1;
si2=1U;
f1295(i,si0,si1,si2);
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l12;
si1=l21;
si2=l6;
si3=l7;
si4=l0;
si5=l27;
si6=l10;
si6=i32_load(&i->m0,(U64)si6+8U);
l23=si6;
si7=l1;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l23;
f15024(i,si0);
L19:;
si0=1248536U;
si1=35U;
si2=1249780U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l22;
si1=l5;
si2=1249828U;
f593(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l23;
si1=l11;
si2=1249700U;
f593(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l15;
si1=l16;
si2=l6;
si3=l7;
si4=l0;
si5=l13;
si6=l3;
si7=l1;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l3;
f15024(i,si0);
L15:;
si0=l13;
si1=l7;
si0+=si1;
l20=si0;
L14:;
si0=l5;
si1=l20;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l13;
si1=l20;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l20;
si1=l16;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l7;
si1=1U;
si0&=si1;
l24=si0;
si0=l15;
si1=l13;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l26=si0;
si0=l4;
si1=l1;
si0+=si1;
l21=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L118;
}
si0=0U;
l25=si0;
si0=0U;
l1=si0;
goto L117;
L118:;
si0=0U;
l27=si0;
si0=0U;
si1=l7;
si2=-2U;
si1&=si2;
si0-=si1;
l18=si0;
si0=l26;
l1=si0;
si0=l21;
l3=si0;
si0=l2;
l23=si0;
si0=0U;
l25=si0;
L119:;
{
si0=l23;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l17;
sj3=l28;
si2=sj2 <= sj3;
sj3=l17;
sj4=l28;
si3=sj3 < sj4;
si4=l25;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l25=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l17;
si0=sj0 <= sj1;
sj1=l29;
sj2=l17;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l23;
si1=16U;
si0+=si1;
l23=si0;
si0=l18;
si1=l27;
si2=-2U;
si1+=si2;
l27=si1;
si0=si0 != si1;
if(si0){
goto L119;
}
}
si0=0U;
si1=l27;
si0-=si1;
l1=si0;
L117:;
si0=l24;
si0=!(si0);
if(si0){
goto L120;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l21;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l25;
sj2=(U64)(si2);
sj1-=sj2;
si2=l26;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l25;
si0=si2?si0:si1;
l25=si0;
L120:;
si0=l7;
si1=l12;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l12;
si1=l13;
si0=si0 > si1;
if(si0){
goto L9;
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
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l11;
si1=62U;
si0=si0 < si1;
if(si0){
goto L125;
}
si0=l7;
l18=si0;
si0=l7;
si1=13U;
si0=si0 < si1;
if(si0){
goto L127;
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
l17=sj1;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l3=si0;
if(si0){
goto L128;
}
si0=0U;
l18=si0;
goto L126;
L128:;
si0=l3;
sj1=l17;
si1=(U32)(sj1);
l23=si1;
si0<<=(si1&31);
l18=si0;
si1=l23;
si0>>=(si1&31);
si1=l3;
si0=si0 != si1;
if(si0){
goto L7;
}
L127:;
si0=l18;
si1=l16;
si0=si0 > si1;
if(si0){
goto L6;
}
L126:;
si0=l15;
si1=l18;
si2=l18;
si3=l6;
si4=l7;
si5=l1;
si6=l12;
si7=l15;
si8=l18;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l21=si7;
si8=l16;
si9=l18;
si8-=si9;
l3=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l12;
si1=l7;
si0+=si1;
l1=si0;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si1=l18;
si0-=si1;
l14=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l14;
si1=l7;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l14;
si1=l3;
si0=si0 > si1;
if(si0){
goto L124;
}
si0=l14;
si1=1U;
si0&=si1;
l19=si0;
si0=l1;
si1=l18;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L123;
}
si0=0U;
l23=si0;
si0=0U;
l1=si0;
goto L122;
L125:;
si0=l7;
si1=l12;
si0=f1126(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l27=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l27;
if(si0){
goto L129;
}
si0=8U;
l23=si0;
goto L3;
L129:;
si0=l27;
si1=1U;
si0=f15026(i,si0,si1);
l23=si0;
if(si0){
goto L3;
}
si0=8U;
si1=l27;
f52(i,si0,si1);
UNREACHABLE;
L124:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L123:;
si0=l18;
si1=3U;
si0<<=(si1&31);
l24=si0;
si0=0U;
l27=si0;
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
l23=si0;
L130:;
{
si0=l1;
si1=l24;
si0+=si1;
l13=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l23;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l17;
sj3=l28;
si2=sj2 <= sj3;
sj3=l17;
sj4=l28;
si3=sj3 < sj4;
si4=l23;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l23=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l17;
si0=sj0 <= sj1;
sj1=l29;
sj2=l17;
si1=sj1 < sj2;
si2=l23;
si0=si2?si0:si1;
l23=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l26;
si1=l27;
si2=-2U;
si1+=si2;
l27=si1;
si0=si0 != si1;
if(si0){
goto L130;
}
}
si0=0U;
si1=l27;
si0-=si1;
l1=si0;
L122:;
si0=l19;
si0=!(si0);
if(si0){
goto L131;
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
l17=sj1;
si2=l23;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l23;
si0=si2?si0:si1;
l23=si0;
L131:;
si0=l23;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l16;
si1=l14;
si0=si0 == si1;
if(si0){
goto L132;
}
si0=l15;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l18;
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
l23=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l23;
si1=l1;
si0-=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L133:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L132;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
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
sj0=l17;
si0=!(sj0);
if(si0){
goto L133;
}
goto L2;
}
L132:;
si0=1249496U;
si1=74U;
si2=1250100U;
f604(i,si0,si1,si2);
UNREACHABLE;
L121:;
si0=l15;
si1=l16;
si2=l6;
si3=l7;
si4=l1;
si5=l12;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L2;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=1248536U;
si1=35U;
si2=1249988U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l20;
si1=l16;
si2=1250004U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l12;
si1=l7;
si2=1250020U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l12;
si1=l13;
si2=1250036U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l13;
si1=l20;
si2=1250164U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1248536U;
si1=35U;
si2=1250052U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l14;
si1=l18;
si2=1250068U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l14;
si1=l7;
si2=1250084U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l15;
si1=l16;
si2=l6;
si3=l7;
si4=l1;
si5=l12;
si6=l23;
si7=l3;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l23;
f15024(i,si0);
L2:;
si0=l16;
si1=l7;
si0=si0 < si1;
if(si0){
goto L136;
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
goto L134;
}
si0=l8;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
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
l18=si0;
si0=l12;
l13=si0;
si0=l2;
l1=si0;
si0=0U;
l27=si0;
L137:;
{
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L135;
}
si0=l1;
si1=l1;
si2=l18;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l27;
si3=255U;
si2&=si3;
l27=si2;
si3=0U;
si2=si2 != si3;
sj2=(U64)(si2);
sj1-=sj2;
si2=l23;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l28;
si0=sj0 <= sj1;
sj1=l17;
sj2=l28;
si1=sj1 < sj2;
si2=l27;
si0=si2?si0:si1;
l27=si0;
si0=l23;
si1=8U;
si0+=si1;
l23=si0;
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
goto L137;
}
}
si0=l25;
si1=l27;
si0&=si1;
if(si0){
goto L138;
}
si0=l25;
si1=l27;
si0|=si1;
l25=si0;
goto L134;
L138:;
si0=l16;
si1=l7;
si0=si0 == si1;
if(si0){
goto L139;
}
si0=l15;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l25=si0;
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L134;
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
l23=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l23;
si1=l1;
si0-=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L140:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L139;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l17;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L134;
}
goto L140;
}
L139:;
si0=1249620U;
si1=63U;
si2=1250148U;
f604(i,si0,si1,si2);
UNREACHABLE;
L136:;
si0=1248536U;
si1=35U;
si2=1250116U;
f604(i,si0,si1,si2);
UNREACHABLE;
L135:;
si0=l13;
si1=l7;
si2=1203588U;
f594(i,si0,si1,si2);
UNREACHABLE;
L134:;
si0=l12;
si1=l16;
si2=l7;
si1-=si2;
l1=si1;
si0=si0 <= si1;
if(si0){
goto L141;
}
si0=l12;
si1=l1;
si2=1250132U;
f597(i,si0,si1,si2);
UNREACHABLE;
L141:;
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
si6=l25;
si7=1U;
si6&=si7;
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
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

U32 f1241(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f1012(i,si0,sj1,si2);
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
si0=f1012(i,si0,sj1,si2);
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
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
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
si0=f1012(i,si0,sj1,si2);
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
si0=f1011(i,si0,si1,si2);
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
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1242(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U64 l41=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj1,sj2,sj3,sj4,sj6,sj7,sj8,sj9;
si0=l5;
si1=211U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l5;
si1=1998U;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l3;
si1=l5;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l7;
si1=l3;
si2=l3;
si3=1U;
si2>>=(si3&31);
l8=si2;
si1-=si2;
l9=si1;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L24;
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
f1236(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l1;
si2=l2;
si3=l9;
si4=l6;
si5=l9;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l9;
si1=31U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l3;
sj1=3ULL;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l13=si0;
if(si0){
goto L34;
}
si0=0U;
l14=si0;
goto L33;
L35:;
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l6;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l13=si0;
si0=l5;
if(si0){
goto L20;
}
si0=0U;
si1=0U;
si2=1253152U;
f594(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l13;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L27;
}
L33:;
si0=l11;
si1=l14;
si2=l14;
si3=l4;
si4=l5;
si5=l0;
si6=l9;
si7=l11;
si8=l14;
si9=3U;
si8<<=(si9&31);
si7+=si8;
si8=l12;
si9=l14;
si8-=si9;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l9;
si1=l3;
si0+=si1;
l13=si0;
si1=l14;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l13;
si1=l14;
si0-=si1;
l15=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l13;
si1=l14;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l15;
si1=l3;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l11;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l14;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l17=si1;
si0+=si1;
si1=l3;
si2=4U;
si1<<=(si2&31);
l18=si1;
si0-=si1;
l19=si0;
si0=l3;
si1=24U;
si0*=si1;
si1=l13;
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
si0=l18;
si1=l13;
si0-=si1;
si1=l17;
si0-=si1;
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l20=si0;
si0=0U;
l13=si0;
L36:;
{
si0=l19;
si1=l13;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l5;
si1=l13;
si0+=si1;
l17=si0;
si0=l20;
si1=l13;
si0+=si1;
l18=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si0=sj0 == sj1;
if(si0){
goto L36;
}
}
sj0=l21;
sj1=l22;
si0=sj0 <= sj1;
if(si0){
goto L1;
}
goto L2;
L32:;
si0=l5;
si1=l9;
si0=f1126(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L37;
}
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l18;
if(si0){
goto L38;
}
si0=8U;
l17=si0;
goto L3;
L38:;
si0=l18;
si1=1U;
si0=f15026(i,si0,si1);
l17=si0;
if(si0){
goto L3;
}
si0=8U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L37:;
si0=l11;
si1=l12;
si2=l4;
si3=l5;
si4=l0;
si5=l9;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L1;
L31:;
si0=l3;
si1=-1U;
si0+=si1;
l13=si0;
si1=l13;
si2=l5;
si1=DIV_U(si1,si2);
si2=1U;
si1+=si2;
si0=DIV_U(si0,si1);
l23=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l23;
si1=1U;
si0+=si1;
l19=si0;
si0=l23;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l6;
si1=l19;
si2=l4;
si3=l19;
si4=l6;
si5=l19;
si6=3U;
si5<<=(si6&31);
si4+=si5;
l12=si4;
si5=l7;
si6=l19;
si5-=si6;
l13=si5;
f1236(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l5;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l0;
si1=l1;
si2=l12;
si3=l2;
si4=l5;
si5=3U;
si4<<=(si5&31);
l17=si4;
si2=f15143(i,si2,si3,si4);
l12=si2;
si3=l19;
si4=l6;
si5=l19;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l5;
si0-=si1;
l24=si0;
si0=l12;
si1=l17;
si0+=si1;
l8=si0;
si0=0U;
l25=si0;
si0=l3;
l26=si0;
si0=l19;
si1=1U;
si0<<=(si1&31);
l27=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l24;
si1=l5;
si0-=si1;
l28=si0;
si0=l19;
si1=l5;
si0+=si1;
l29=si0;
si0=l5;
si1=l19;
si0-=si1;
l30=si0;
si1=-2U;
si0&=si1;
l20=si0;
si0=l30;
si1=1U;
si0&=si1;
l31=si0;
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l6;
si1=l17;
si0+=si1;
l32=si0;
si0=l8;
si1=l19;
si2=3U;
si1<<=(si2&31);
l33=si1;
si0+=si1;
l14=si0;
si0=l12;
si1=l33;
si0+=si1;
l9=si0;
si0=l8;
si1=l17;
si0+=si1;
l34=si0;
si0=l23;
si1=30U;
si0=si0 < si1;
l35=si0;
si0=l5;
si1=-2U;
si0+=si1;
si1=l23;
si0=si0 == si1;
l36=si0;
si0=0U;
l25=si0;
si0=l3;
l26=si0;
L43:;
{
si0=l1;
si1=l3;
si2=l26;
si1-=si2;
l16=si1;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l23;
si1=l1;
si2=l16;
si1-=si2;
l37=si1;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l38=si0;
si0=l35;
if(si0){
goto L55;
}
si0=l5;
sj1=3ULL;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l13=si0;
if(si0){
goto L57;
}
si0=0U;
l13=si0;
goto L56;
L57:;
si0=l13;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=l24;
si0=si0 > si1;
if(si0){
goto L49;
}
L56:;
si0=l8;
si1=l13;
si2=l13;
si3=l4;
si4=l5;
si5=l38;
si6=l19;
si7=l8;
si8=l13;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l11=si7;
si8=l24;
si9=l13;
si8-=si9;
l18=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l39;
si1=l29;
si2=l13;
si1-=si2;
si2=l29;
si3=l13;
si2=si2 < si3;
l17=si2;
si0=si2?si0:si1;
l39=si0;
si0=l17;
if(si0){
goto L44;
}
si0=l39;
si0=!(si0);
if(si0){
goto L44;
}
si0=l39;
si1=l13;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l39;
si1=l5;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l39;
si1=l18;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l39;
si1=1U;
si0&=si1;
l40=si0;
si0=0U;
l17=si0;
si0=0U;
l18=si0;
si0=l39;
si1=1U;
si0=si0 == si1;
if(si0){
goto L58;
}
si0=l39;
si1=-2U;
si0&=si1;
l15=si0;
si0=0U;
l17=si0;
si0=0U;
l18=si0;
L59:;
{
si0=l11;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l8;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l17;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l13;
si2=8U;
si1|=si2;
l13=si1;
si0+=si1;
si1=l8;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l17;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l17=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l41;
sj1=l21;
si0=sj0 <= sj1;
sj1=l41;
sj2=l21;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l15;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L59;
}
}
L58:;
si0=l40;
si0=!(si0);
if(si0){
goto L60;
}
si0=l11;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l8;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l17;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l22;
si0=sj0 <= sj1;
sj1=l21;
sj2=l22;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L60:;
si0=l17;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L44;
}
si0=l24;
si1=l39;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l8;
si1=l39;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L44;
}
L61:;
{
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
si0=!(sj0);
if(si0){
goto L61;
}
goto L44;
}
L55:;
si0=l5;
si1=l19;
si0=f1126(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l18;
if(si0){
goto L62;
}
si0=8U;
l17=si0;
goto L45;
L62:;
si0=l18;
si1=1U;
si0=f15026(i,si0,si1);
l17=si0;
if(si0){
goto L45;
}
si0=8U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L54:;
si0=1249496U;
si1=74U;
si2=1250752U;
f604(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l8;
si1=l24;
si2=l4;
si3=l5;
si4=l38;
si5=l19;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L44;
L52:;
si0=l16;
si1=l1;
si2=1250672U;
f593(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=1248536U;
si1=35U;
si2=1250688U;
f604(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=1248536U;
si1=35U;
si2=1250704U;
f604(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l39;
si1=l13;
si2=1250720U;
f597(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l39;
si1=l5;
si2=1250736U;
f597(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l8;
si1=l24;
si2=l4;
si3=l5;
si4=l38;
si5=l19;
si6=l17;
si7=l13;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l17;
f15024(i,si0);
L44:;
si0=l24;
si1=l5;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l5;
si1=l19;
si0=si0 == si1;
if(si0){
goto L63;
}
si0=l30;
si1=l19;
si0=si0 > si1;
if(si0){
goto L64;
}
si0=0U;
l17=si0;
si0=0U;
l18=si0;
si0=l36;
if(si0){
goto L66;
}
si0=0U;
l17=si0;
si0=0U;
l18=si0;
L67:;
{
si0=l12;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l9;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l17;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l14;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l13;
si2=8U;
si1|=si2;
l13=si1;
si0+=si1;
si1=l9;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l17;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l17=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l41;
sj1=l21;
si0=sj0 <= sj1;
sj1=l41;
sj2=l21;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l20;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L67;
}
}
L66:;
si0=l31;
si0=!(si0);
if(si0){
goto L68;
}
si0=l12;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l9;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l17;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l22;
si0=sj0 <= sj1;
sj1=l21;
sj2=l22;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L68:;
si0=l25;
si1=l17;
si0&=si1;
si1=1U;
si0&=si1;
if(si0){
goto L69;
}
si0=l25;
si1=l17;
si0|=si1;
l25=si0;
goto L63;
L69:;
si0=l24;
si1=l5;
si0=si0 == si1;
if(si0){
goto L70;
}
si0=l34;
si1=l34;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l25=si0;
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L63;
}
si0=l34;
l13=si0;
L71:;
{
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L70;
}
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L63;
}
goto L71;
}
L70:;
si0=1249620U;
si1=63U;
si2=1250832U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=1248536U;
si1=35U;
si2=1250768U;
f604(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l3;
si1=l16;
si2=l5;
si1+=si2;
l13=si1;
si0=si0 >= si1;
if(si0){
goto L72;
}
si0=l13;
si1=l3;
si2=1250816U;
f593(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l23;
si1=l3;
si2=l13;
si1-=si2;
l17=si1;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l23;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l32;
si1=l19;
si2=l2;
si3=l13;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l19;
si4=l34;
si5=l19;
si6=l25;
si7=1U;
si6&=si7;
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
l25=si0;
si0=l38;
si1=l33;
si0+=si1;
si1=l37;
si2=l19;
si1-=si2;
si2=l12;
si3=l19;
si4=l6;
si5=l19;
f1201(i,si0,si1,si2,si3,si4,si5);
si0=l26;
si1=l19;
si0-=si1;
l26=si0;
si1=l27;
si0=si0 > si1;
if(si0){
goto L43;
}
goto L13;
L73:;
}
si0=l19;
si1=l17;
si2=1250784U;
f597(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l19;
si1=l28;
si2=1250800U;
f597(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=1248536U;
si1=35U;
si2=1250464U;
f604(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l19;
si1=l5;
si2=1250448U;
f597(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=1248536U;
si1=35U;
si2=1250432U;
f604(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l14;
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
si1=l13;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L29:;
si0=l15;
si1=l3;
si2=1250928U;
f597(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=1248536U;
si1=35U;
si2=1250912U;
f604(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1248536U;
si1=35U;
si2=1250896U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1248536U;
si1=35U;
si2=1250880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l9;
si1=l5;
si2=1250864U;
f597(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1248536U;
si1=35U;
si2=1250848U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1250221U;
si1=32U;
si2=1253104U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l3;
si1=l7;
si2=1253136U;
f597(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L76;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l21;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l21;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l22=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L77;
}
sj0=l22;
si0=(U32)(sj0);
l12=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L75;
}
si0=l0;
si1=l1;
si2=l13;
si3=l3;
si4=l4;
si5=l5;
sj6=2ULL;
sj7=2ULL;
sj8=l21;
si9=l12;
si10=1251324U;
si9+=si10;
sj9=i64_load8_u(&i->m0,(U64)si9);
l22=sj9;
sj8*=sj9;
sj7-=sj8;
sj8=l22;
sj7*=sj8;
l22=sj7;
sj8=l21;
sj7*=sj8;
sj6-=sj7;
sj7=l22;
sj6*=sj7;
l22=sj6;
sj7=l21;
sj6*=sj7;
sj7=-2ULL;
sj6+=sj7;
sj7=l22;
sj6*=sj7;
f1231(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l17=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l18=si0;
si0=0U;
l12=si0;
si0=l0;
l13=si0;
L79:;
{
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L78;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
if(si0){
goto L79;
}
}
si0=l18;
l12=si0;
L78:;
si0=l12;
si1=l1;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l12;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L74;
}
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
l17=si1;
si0+=si1;
l13=si0;
sj1=0ULL;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=1U;
si0+=si1;
l13=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l17;
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l0;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
L80:;
{
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
if(si0){
goto L80;
}
goto L18;
}
L77:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=1251468U;
si1=25U;
si2=1251496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l12;
si1=128U;
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=l12;
si1=l1;
si2=1238956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l6;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l12=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l21;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l21;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l22=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L16;
}
sj0=l22;
si0=(U32)(sj0);
l13=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l0;
si1=l1;
si2=l12;
si3=l3;
si4=l4;
si5=l5;
sj6=2ULL;
sj7=2ULL;
sj8=l21;
si9=l13;
si10=1251324U;
si9+=si10;
sj9=i64_load8_u(&i->m0,(U64)si9);
l22=sj9;
sj8*=sj9;
sj7-=sj8;
sj8=l22;
sj7*=sj8;
l22=sj7;
sj8=l21;
sj7*=sj8;
sj6-=sj7;
sj7=l22;
sj6*=sj7;
l22=sj6;
sj7=l21;
sj6*=sj7;
sj7=-2ULL;
sj6+=sj7;
sj7=l22;
sj6*=sj7;
f1237(i,si0,si1,si2,si3,si4,si5,sj6);
L18:;
goto L0;
L17:;
si0=l3;
si1=l7;
si2=1253120U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1251468U;
si1=25U;
si2=1251496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l13;
si1=128U;
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l1;
si1=l3;
si2=l26;
si1-=si2;
l20=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l23;
si1=l1;
si2=l20;
si1-=si2;
l1=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l23;
si1=30U;
si0=si0 < si1;
if(si0){
goto L85;
}
si0=l5;
sj1=3ULL;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l13=si0;
if(si0){
goto L87;
}
si0=0U;
l13=si0;
goto L86;
L87:;
si0=l13;
si1=536870912U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=l24;
si0=si0 > si1;
if(si0){
goto L8;
}
L86:;
si0=l8;
si1=l13;
si2=l13;
si3=l4;
si4=l5;
si5=l10;
si6=l19;
si7=l8;
si8=l13;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l14=si7;
si8=l24;
si9=l13;
si8-=si9;
l18=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l19;
si1=l5;
si0+=si1;
l17=si0;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l17;
si1=l13;
si0-=si1;
l11=si0;
si1=l13;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l11;
si1=l5;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l11;
si1=l18;
si0=si0 > si1;
if(si0){
goto L84;
}
si0=l17;
si1=1U;
si0&=si1;
l15=si0;
si0=l23;
si1=l5;
si0+=si1;
si1=l13;
si0=si0 != si1;
if(si0){
goto L83;
}
si0=0U;
l17=si0;
si0=0U;
l18=si0;
goto L82;
L85:;
si0=l5;
si1=l19;
si0=f1126(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L81;
}
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l18;
if(si0){
goto L88;
}
si0=8U;
l17=si0;
goto L5;
L88:;
si0=l18;
si1=1U;
si0=f15026(i,si0,si1);
l17=si0;
if(si0){
goto L5;
}
si0=8U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L84:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=l11;
si1=l15;
si0-=si1;
l9=si0;
si0=0U;
l17=si0;
si0=0U;
l18=si0;
L89:;
{
si0=l14;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l8;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l17;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=l13;
si2=8U;
si1|=si2;
l13=si1;
si0+=si1;
si1=l8;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l17;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l17=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l41;
sj1=l21;
si0=sj0 <= sj1;
sj1=l41;
sj2=l21;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l9;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L89;
}
}
L82:;
si0=l15;
si0=!(si0);
if(si0){
goto L90;
}
si0=l14;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l8;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l17;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l22;
si0=sj0 <= sj1;
sj1=l21;
sj2=l22;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L90:;
si0=l17;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l24;
si1=l11;
si0=si0 == si1;
if(si0){
goto L91;
}
si0=l8;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
L92:;
{
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l17;
si0=si0 == si1;
if(si0){
goto L91;
}
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
si0=!(sj0);
if(si0){
goto L92;
}
goto L4;
}
L91:;
si0=1249496U;
si1=74U;
si2=1250560U;
f604(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l8;
si1=l24;
si2=l4;
si3=l5;
si4=l10;
si5=l19;
si6=8U;
si7=0U;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L4;
L12:;
f53(i);
UNREACHABLE;
L11:;
si0=l20;
si1=l1;
si2=1250480U;
f593(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1248536U;
si1=35U;
si2=1250496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1248536U;
si1=35U;
si2=1250512U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l11;
si1=l13;
si2=1250528U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l11;
si1=l5;
si2=1250544U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si1=l24;
si2=l4;
si3=l5;
si4=l10;
si5=l19;
si6=l17;
si7=l13;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l17;
f15024(i,si0);
L4:;
si0=l5;
si1=l19;
si0=si0 == si1;
if(si0){
goto L93;
}
si0=l24;
si1=l5;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l5;
si1=l19;
si0-=si1;
l13=si0;
si1=l19;
si0=si0 > si1;
if(si0){
goto L97;
}
si0=l8;
si1=l19;
si2=3U;
si1<<=(si2&31);
l17=si1;
si0+=si1;
l14=si0;
si0=l12;
si1=l17;
si0+=si1;
l9=si0;
si0=l13;
si1=1U;
si0&=si1;
l15=si0;
si0=l5;
si1=-2U;
si0+=si1;
si1=l23;
si0=si0 != si1;
if(si0){
goto L96;
}
si0=0U;
l17=si0;
si0=0U;
l18=si0;
goto L95;
L97:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L96:;
si0=l13;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l17=si0;
si0=0U;
l18=si0;
L98:;
{
si0=l12;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l9;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l17;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l14;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l13;
si2=8U;
si1|=si2;
l13=si1;
si0+=si1;
si1=l9;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l17;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l17=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l41;
sj1=l21;
si0=sj0 <= sj1;
sj1=l41;
sj2=l21;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
si0=l11;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L98;
}
}
L95:;
si0=l15;
si0=!(si0);
if(si0){
goto L99;
}
si0=l12;
si1=l18;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l9;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l17;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l22;
si0=sj0 <= sj1;
sj1=l21;
sj2=l22;
si1=sj1 < sj2;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L99:;
si0=l25;
si1=l17;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L100;
}
si0=l25;
si1=l17;
si0|=si1;
l25=si0;
goto L93;
L100:;
si0=l24;
si1=l5;
si0=si0 == si1;
if(si0){
goto L101;
}
si0=l8;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l25=si0;
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L93;
}
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
L102:;
{
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si1=l17;
si0=si0 == si1;
if(si0){
goto L101;
}
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L93;
}
goto L102;
}
L101:;
si0=1249620U;
si1=63U;
si2=1250656U;
f604(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=1248536U;
si1=35U;
si2=1250576U;
f604(i,si0,si1,si2);
UNREACHABLE;
L93:;
si0=l3;
si1=l20;
si2=l5;
si1+=si2;
l13=si1;
si0=si0 >= si1;
if(si0){
goto L103;
}
si0=l13;
si1=l3;
si2=1250640U;
f593(i,si0,si1,si2);
UNREACHABLE;
L103:;
si0=l26;
si1=l5;
si0=si0 < si1;
if(si0){
goto L106;
}
si0=l26;
si1=l24;
si0=si0 > si1;
if(si0){
goto L105;
}
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
si2=l2;
si3=l13;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l3;
si4=l13;
si3-=si4;
si4=l8;
si5=l5;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l26;
si6=l5;
si5-=si6;
si6=l25;
si7=1U;
si6&=si7;
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
si0=l26;
si1=l19;
si0-=si1;
l13=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L104;
}
si0=l13;
si1=l19;
si0=si0 <= si1;
if(si0){
goto L107;
}
si0=l13;
si1=l19;
si2=1250624U;
f597(i,si0,si1,si2);
UNREACHABLE;
L107:;
si0=l10;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l19;
si1-=si2;
si2=l12;
si3=l13;
si4=l6;
si5=l13;
f1201(i,si0,si1,si2,si3,si4,si5);
goto L0;
L106:;
si0=l5;
si1=l26;
si2=1250592U;
f683(i,si0,si1,si2);
UNREACHABLE;
L105:;
si0=l26;
si1=l24;
si2=1250592U;
f597(i,si0,si1,si2);
UNREACHABLE;
L104:;
si0=l13;
si1=l5;
si2=1250608U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l11;
si1=l12;
si2=l4;
si3=l5;
si4=l0;
si5=l9;
si6=l17;
si7=l13;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l17;
f15024(i,si0);
goto L1;
L2:;
si0=l12;
si1=l15;
si0=si0 == si1;
if(si0){
goto L108;
}
si0=l16;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l8;
si1=4U;
si0<<=(si1&31);
l13=si0;
si1=l14;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=24U;
si1*=si2;
l14=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l17=si0;
si0=l14;
si1=l18;
si0-=si1;
si1=l13;
si0-=si1;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
l13=si0;
L109:;
{
si0=l17;
si0=!(si0);
if(si0){
goto L108;
}
si0=l13;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
sj0=l21;
si0=!(sj0);
if(si0){
goto L109;
}
goto L1;
}
L108:;
si0=1250944U;
si1=57U;
si2=1251004U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l12;
si1=l9;
si0=si0 < si1;
if(si0){
goto L111;
}
si0=l8;
si1=l12;
si2=l9;
si1-=si2;
l13=si1;
si0=si0 > si1;
if(si0){
goto L110;
}
si0=l8;
si1=l9;
si0=si0 > si1;
if(si0){
goto L114;
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
l20=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L113;
}
si0=0U;
l13=si0;
sj0=0ULL;
l21=sj0;
goto L112;
L114:;
si0=1202809U;
si1=34U;
si2=1203412U;
f604(i,si0,si1,si2);
UNREACHABLE;
L113:;
si0=0U;
l14=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l19=si0;
si0=l5;
l13=si0;
si0=l20;
l12=si0;
si0=l11;
l17=si0;
si0=0U;
l18=si0;
L115:;
{
si0=l17;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l18;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l41=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l18;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l18=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l41;
sj1=l21;
si0=sj0 <= sj1;
sj1=l41;
sj2=l21;
si1=sj1 < sj2;
si2=l18;
si0=si2?si0:si1;
l18=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l17;
si1=16U;
si0+=si1;
l17=si0;
si0=l19;
si1=l14;
si2=-2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L115;
}
}
si0=0U;
si1=l14;
si0-=si1;
l13=si0;
sj0=0ULL;
si1=l18;
sj1=(U64)(si1);
sj0-=sj1;
l21=sj0;
L112:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L116;
}
si0=l11;
si1=l13;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
si1=l5;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l21;
sj1+=sj2;
si2=l20;
si3=l13;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L116:;
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
f1201(i,si0,si1,si2,si3,si4,si5);
goto L0;
L111:;
si0=1248536U;
si1=35U;
si2=1251020U;
f604(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l8;
si1=l13;
si2=1251036U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1243(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
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
goto L12;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
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
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
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
L14:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
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
goto L14;
}
}
si0=l9;
l10=si0;
L13:;
si0=l3;
si1=l10;
si0=si0 < si1;
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
goto L15;
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
si1=1253188U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=1251324U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=1253324U;
f614(i,si0,si1);
UNREACHABLE;
L15:;
si0=l5;
si1=l10;
si0=si0 < si1;
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
si0=l5;
si1=l10;
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
f1233(i,si0,si1,si2,si3,sj4);
goto L1;
L18:;
si0=0U;
si1=0U;
si2=1253260U;
f594(i,si0,si1,si2);
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
sj0=f1026(i,si0,si1,sj2);
si0=8U;
l4=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
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
si0=l5;
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si1=1U;
si0=f15026(i,si0,si1);
l4=si0;
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
sj0=f1032(i,si0,si1,si2,si3,sj4);
si0=l10;
l7=si0;
si0=l4;
l9=si0;
goto L4;
L12:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l6;
si2=4U;
si1+=si2;
si2=1250180U;
si3=l6;
si4=8U;
si3+=si4;
si4=1253196U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=1250221U;
si1=32U;
si2=1253340U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=1250184U;
si3=l6;
si4=8U;
si3+=si4;
si4=1253212U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1248536U;
si1=35U;
si2=1253228U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l10;
si1=l5;
si2=1253244U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l5;
si1=l8;
si2=1253276U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l10;
si1=l7;
si2=1253292U;
f597(i,si0,si1,si2);
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
goto L21;
}
si0=l2;
si1=l8;
si0=f1241(i,si0,si1);
l5=si0;
L21:;
si0=l5;
si0=!(si0);
if(si0){
goto L25;
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
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l13;
if(si0){
goto L27;
}
si0=8U;
l14=si0;
goto L26;
L27:;
si0=l13;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L22;
}
L26:;
si0=l2;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L24;
}
goto L2;
L25:;
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
f1242(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L23;
L24:;
si0=l0;
si1=l1;
si2=l9;
si3=l2;
si4=l3;
si5=l8;
si6=l14;
si7=l5;
f1242(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l5;
si0=!(si0);
if(si0){
goto L23;
}
si0=l14;
f15024(i,si0);
L23:;
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
f15024(i,si0);
goto L1;
L22:;
si0=8U;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=l2;
si1=l7;
si2=1253308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1244(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
goto L12;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
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
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
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
L14:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
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
goto L14;
}
}
si0=l9;
l10=si0;
L13:;
si0=l3;
si1=l10;
si0=si0 < si1;
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
goto L15;
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
si1=1253188U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=1251324U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=1253500U;
f614(i,si0,si1);
UNREACHABLE;
L15:;
si0=l5;
si1=l10;
si0=si0 < si1;
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
f1233(i,si0,si1,si2,si3,sj4);
goto L1;
L18:;
si0=0U;
si1=0U;
si2=1253404U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=8U;
l13=si0;
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
si0=!(si0);
if(si0){
goto L20;
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
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l13=si0;
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
sj0=f1032(i,si0,si1,si2,si3,sj4);
si0=8U;
l14=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
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
si0=l10;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
L21:;
si0=l5;
si1=l7;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l14;
si1=l5;
si2=l9;
si3=l5;
sj4=l11;
sj0=f1032(i,si0,si1,si2,si3,sj4);
si0=l13;
l3=si0;
si0=l5;
l7=si0;
si0=l14;
l9=si0;
goto L3;
L12:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l6;
si2=4U;
si1+=si2;
si2=1250180U;
si3=l6;
si4=8U;
si3+=si4;
si4=1253356U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=1250221U;
si1=32U;
si2=1253516U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=1250184U;
si3=l6;
si4=8U;
si3+=si4;
si4=1253372U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1248536U;
si1=35U;
si2=1253388U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l10;
si1=l5;
si2=1253484U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l4;
si1=l2;
si2=1253420U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l5;
si1=l7;
si2=1253436U;
f597(i,si0,si1,si2);
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
goto L22;
}
si0=l8;
si1=l2;
si0=f1241(i,si0,si1);
l10=si0;
L22:;
si0=8U;
l15=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L23;
}
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
si0=l16;
si0=!(si0);
if(si0){
goto L23;
}
si0=l16;
si1=1U;
si0=f15026(i,si0,si1);
l15=si0;
if(si0){
goto L23;
}
si0=8U;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l2;
si1=l4;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l0;
si1=l1;
si2=l9;
si3=l8;
si4=l3;
si5=l2;
si6=l15;
si7=l10;
f1242(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
si0=!(si0);
if(si0){
goto L26;
}
si0=l15;
f15024(i,si0);
L26:;
si0=l12;
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L27;
}
si0=l13;
f15024(i,si0);
L27:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
f15024(i,si0);
goto L1;
L25:;
si0=l8;
si1=l7;
si2=1253452U;
f597(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l2;
si1=l4;
si2=1253468U;
f597(i,si0,si1,si2);
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

void f1245(rustpythonInstance*i,U32 l0,U64 l1,U64 l2) {
U64 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
sj0=l1;
sj1=4611686018427387904ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
sj0=l1;
sj1=14ULL;
sj0<<=(sj1&63);
sj1=562949953224704ULL;
sj2=l1;
sj3=31ULL;
sj2>>=(sj3&63);
sj3=l1;
sj4=55ULL;
sj3>>=(sj4&63);
si3=(U32)(sj3);
si4=1U;
si3<<=(si4&31);
si4=1211060U;
si3+=si4;
sj3=i64_load16_u(&i->m0,(U64)si3);
sj4=256ULL;
sj3|=sj4;
l3=sj3;
sj2*=sj3;
sj3=l3;
sj2*=sj3;
sj1-=sj2;
sj2=16ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l3;
sj1*=sj2;
sj2=18ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l3;
sj3=16ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l3=sj1;
sj2=l1;
sj3=24ULL;
sj2>>=(sj3&63);
sj1*=sj2;
l4=sj1;
sj2=25ULL;
sj1>>=(sj2&63);
l5=sj1;
sj2=l5;
sj1*=sj2;
sj0-=sj1;
sj1=-1099511627776ULL;
sj0+=sj1;
sj1=24ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l3;
sj0*=sj1;
sj1=15ULL;
sj0=(U64)((I64)sj0>>(sj1&63));
sj1=l4;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
l3=sj0;
sj1=l3;
sj2=1ULL;
sj1<<=(sj2&63);
l4=sj1;
sj2=l3;
sj3=l3;
sj2*=sj3;
l5=sj2;
sj1+=sj2;
sj2=l1;
si1=sj1 < sj2;
l6=si1;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l1;
sj1=l5;
sj0-=sj1;
sj1=l4;
sj2=-1ULL;
sj1^=sj2;
sj2=0ULL;
si3=l6;
sj1=si3?sj1:sj2;
sj0+=sj1;
sj1=31ULL;
sj0<<=(sj1&63);
sj1=l2;
sj2=33ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l5=sj0;
sj1=l3;
sj0=DIV_U(sj0,sj1);
l1=sj0;
sj1=l1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0-=sj1;
l1=sj0;
sj1=l3;
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l4=sj0;
sj0=l5;
sj1=l1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l5=sj0;
sj1=31ULL;
sj0>>=(sj1&63);
l3=sj0;
sj0=l5;
sj1=33ULL;
sj0<<=(sj1&63);
sj1=-1ULL;
sj2=8589934591ULL;
sj3=l2;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l2;
sj1&=sj2;
sj0|=sj1;
l2=sj0;
sj1=l1;
sj2=l1;
sj1*=sj2;
l1=sj1;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l2;
sj1=l1;
sj0-=sj1;
l2=sj0;
sj0=l3;
sj1=1ULL;
sj0+=sj1;
l3=sj0;
goto L4;
L5:;
sj0=l2;
sj1=l1;
sj0-=sj1;
l1=sj0;
sj0=l5;
sj1=2147483647ULL;
si0=sj0 <= sj1;
if(si0){
goto L6;
}
sj0=l1;
l2=sj0;
goto L4;
L6:;
sj0=2ULL;
sj1=1ULL;
sj2=l1;
sj3=l4;
sj2+=sj3;
l3=sj2;
sj3=l1;
si2=sj2 < sj3;
l6=si2;
sj0=si2?sj0:sj1;
si1=l6;
sj1=(U64)(si1);
sj2=l3;
sj3=l4;
sj4=-1ULL;
sj3+=sj4;
l1=sj3;
sj2+=sj3;
l2=sj2;
sj3=l3;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l3=sj0;
sj0=l1;
l4=sj0;
L4:;
sj0=l3;
sj1=-1ULL;
sj0+=sj1;
l1=sj0;
sj1=1ULL;
si0=sj0 <= sj1;
if(si0){
goto L1;
}
si0=1253548U;
si1=26U;
si2=1253576U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1253592U;
si1=42U;
si2=1253636U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1248848U;
si1=25U;
si2=1253532U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l1;
sj2=1ULL;
si1=sj1 == sj2;
i32_store8(&i->m0,(U64)si0+8U,si1);
L0:;
}

U32 f1246(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4,U32 l5,U32 l6) {
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
U64 l21=0;
U32 l22=0;
U64 l23=0;
U64 l24=0;
U64 l25=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l1;
si1=1U;
si0<<=(si1&31);
l8=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l8;
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=4611686018427387904ULL;
si0=sj0 < sj1;
if(si0){
goto L17;
}
si0=l8;
si1=l1;
si2=-2U;
si1&=si2;
l9=si1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l8;
si1=l9;
si0-=si1;
l3=si0;
si0=l0;
si1=l1;
si2=1U;
si1>>=(si2&31);
l10=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l1;
si1=l10;
si0-=si1;
l13=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l7;
si1=8U;
si0+=si1;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
f1245(i,si0,sj1,sj2);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l14=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+8U);
l15=sj0;
si0=l12;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
if(si0){
goto L22;
}
si0=l8;
si1=l10;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l8;
si1=l10;
si0-=si1;
l8=si0;
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=0ULL;
l17=sj0;
goto L13;
L23:;
si0=l11;
si1=l13;
si2=l12;
si3=l3;
sj4=0ULL;
si5=l5;
si6=l6;
si0=f1246(i,si0,si1,si2,si3,sj4,si5,si6);
si0=!(si0);
if(si0){
goto L12;
}
L22:;
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l1;
si1=l10;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=0U;
l16=si0;
si0=l13;
si1=1U;
si0&=si1;
l18=si0;
si0=l10;
si1=-1U;
si0^=si1;
si1=0U;
si2=l1;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=0U;
l19=si0;
goto L25;
L26:;
si0=l13;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l16=si0;
si0=l11;
l14=si0;
si0=l12;
l3=si0;
si0=0U;
l19=si0;
L27:;
{
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l16;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l14;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l22=si0;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l15;
sj3=l21;
si2=sj2 <= sj3;
sj3=l15;
sj4=l21;
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
si2=l16;
si0=si2?si0:si1;
l16=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l20;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L25:;
si0=l18;
si0=!(si0);
if(si0){
goto L28;
}
si0=l12;
si1=l19;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l16;
sj2=(U64)(si2);
si3=l11;
si4=l3;
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
si2=l16;
si0=si2?si0:si1;
l16=si0;
L28:;
si0=l16;
si1=1U;
si0&=si1;
if(si0){
goto L14;
}
L24:;
si0=1253904U;
si1=79U;
si2=1253984U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l8;
si1=l3;
si2=1253652U;
f597(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1254072U;
si1=23U;
si2=1254096U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1248571U;
si1=43U;
si2=1253668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l9;
si1=l8;
si2=1253684U;
f593(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1254000U;
si1=56U;
si2=1254056U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1U;
si1=l3;
si2=1253700U;
f594(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l13;
si1=l3;
si2=1253716U;
f597(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l8;
si1=l10;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l8;
si1=l10;
si0-=si1;
l8=si0;
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=1ULL;
l17=sj0;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
L13:;
si0=l8;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l1;
si1=l8;
si2=1253748U;
f597(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l16;
si1=l5;
si2=l6;
si3=l16;
si4=l1;
si5=l11;
sj5=i64_load(&i->m0,(U64)si5);
sj1=f1173(i,si1,si2,si3,si4,sj5);
i64_store(&i->m0,(U64)si0,sj1);
goto L10;
L12:;
si0=l8;
si1=l10;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l8;
si1=l10;
si0-=si1;
l8=si0;
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
sj0=0ULL;
l17=sj0;
L11:;
si0=l8;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l5;
si1=l6;
si2=l16;
si3=l1;
si4=l11;
si5=l13;
f1185(i,si0,si1,si2,si3,si4,si5);
L10:;
si0=l10;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
sj1=1ULL;
sj0>>=(sj1&63);
l15=sj0;
si0=l5;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l10;
si1=-1U;
si0+=si1;
l20=si0;
si1=l20;
si2=536870911U;
si1&=si2;
l3=si1;
si2=l20;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l14=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l14;
si1=1U;
si0&=si1;
l18=si0;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=0U;
l19=si0;
goto L31;
L32:;
si0=l5;
si1=16U;
si0+=si1;
l3=si0;
si0=l14;
si1=536870910U;
si0&=si1;
l22=si0;
si0=0U;
l19=si0;
si0=l0;
l14=si0;
L33:;
{
si0=l14;
si1=l3;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
sj0=l15;
sj1=1ULL;
sj0>>=(sj1&63);
l15=sj0;
si0=l22;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L33;
}
}
L31:;
si0=l18;
si0=!(si0);
if(si0){
goto L30;
}
si0=l0;
si1=l19;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l15;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=1ULL;
sj0>>=(sj1&63);
l15=sj0;
L30:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l3;
sj1=l15;
sj2=l21;
sj3=l17;
sj2+=sj3;
l17=sj2;
sj3=63ULL;
sj2<<=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l3=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l4;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
sj0=0ULL;
l4=sj0;
sj0=l23;
sj1=1ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
si0=l13;
si1=l8;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=0U;
l14=si0;
si0=l13;
l19=si0;
si0=l11;
l3=si0;
L34:;
{
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l21;
si0=sj0 < sj1;
l22=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L36;
}
si0=l22;
l14=si0;
goto L35;
L36:;
si0=l22;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L35:;
si0=l16;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L34;
}
}
si0=l14;
sj0=(U64)(si0);
l4=sj0;
goto L4;
L9:;
si0=l10;
si1=l8;
si2=1253732U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l8;
si2=1253764U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l10;
si1=l6;
si2=1253780U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l20;
si1=l1;
si2=1253796U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l13;
si1=l8;
si2=1253812U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L41;
}
si0=8U;
l20=si0;
si0=1U;
l8=si0;
si0=l1;
si1=86U;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=0U;
l3=si0;
goto L37;
L42:;
si0=l1;
si1=780U;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l1;
si1=2180U;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l10;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l3=si0;
goto L39;
L43:;
si0=l1;
si1=23399U;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l10;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l3=si0;
goto L39;
L44:;
si0=l10;
si1=50U;
si0=f1007(i,si0,si1);
l3=si0;
if(si0){
goto L45;
}
si0=0U;
l3=si0;
goto L37;
L45:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L46;
}
si0=l14;
if(si0){
goto L38;
}
si0=0U;
l8=si0;
goto L37;
L46:;
f53(i);
UNREACHABLE;
L41:;
si0=1248536U;
si1=35U;
si2=1253828U;
f604(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l9;
si1=128U;
si0+=si1;
l3=si0;
L39:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l14=si0;
L38:;
si0=0U;
l8=si0;
si0=l14;
si1=1U;
si0=f15026(i,si0,si1);
l20=si0;
if(si0){
goto L37;
}
si0=8U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L37:;
sj0=l17;
sj1=1ULL;
sj0>>=(sj1&63);
l24=sj0;
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l0;
si3=l10;
si4=l20;
si5=l3;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l9;
if(si0){
goto L48;
}
sj0=0ULL;
l15=sj0;
goto L47;
L48:;
si0=l1;
si1=3U;
si0<<=(si1&31);
l22=si0;
si0=0U;
l14=si0;
si0=l2;
l3=si0;
L49:;
{
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l14;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l3;
si4=l22;
si3+=si4;
l16=si3;
sj3=i64_load(&i->m0,(U64)si3);
l21=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l15;
sj3=l21;
si2=sj2 <= sj3;
sj3=l15;
sj4=l21;
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
si2=l14;
si0=si2?si0:si1;
l14=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L49;
}
}
si0=l14;
sj0=(U64)(si0);
l15=sj0;
L47:;
sj0=l24;
sj1=l15;
sj0+=sj1;
l15=sj0;
si0=l10;
si1=l13;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l1;
si1=1U;
si0&=si1;
if(si0){
goto L56;
}
sj0=l15;
l21=sj0;
goto L55;
L56:;
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l15;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l15;
si0=sj0 >= sj1;
l3=si0;
sj0=0ULL;
l15=sj0;
sj0=1ULL;
l21=sj0;
si0=l3;
if(si0){
goto L53;
}
L55:;
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
l15=sj0;
goto L53;
L54:;
sj0=l15;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L52;
}
L53:;
sj0=0ULL;
l25=sj0;
sj0=l4;
sj1=l15;
sj0-=sj1;
l23=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L50;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l24;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l15;
si0=sj0 >= sj1;
if(si0){
goto L57;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l3;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
L58:;
{
si0=l14;
if(si0){
goto L59;
}
sj0=2ULL;
l25=sj0;
goto L57;
L59:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L58;
}
}
L57:;
si0=l1;
si1=1U;
si0&=si1;
l22=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L60;
}
sj0=0ULL;
l15=sj0;
si0=0U;
l16=si0;
sj0=0ULL;
l24=sj0;
goto L51;
L60:;
si0=l1;
si1=-2U;
si0&=si1;
l9=si0;
sj0=0ULL;
l24=sj0;
si0=0U;
l16=si0;
si0=l0;
l14=si0;
si0=l2;
l3=si0;
sj0=0ULL;
l15=sj0;
L61:;
{
si0=l3;
sj1=l15;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l21=sj1;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
l19=si0;
sj1=0ULL;
sj2=l21;
sj3=l15;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l17;
sj3=63ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l4;
sj3=l21;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l21=sj1;
si2=l19;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l15=sj1;
si2=l14;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l21;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l17;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l4;
sj2=l15;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l15=sj0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l9;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L61;
}
goto L51;
}
L52:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l22;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l14=si0;
sj1=l15;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l21=sj1;
si2=l0;
si3=l3;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l21;
sj2=l15;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l17;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l4;
sj2=l21;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l15=sj0;
L62:;
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l25;
sj1=l15;
sj0+=sj1;
sj1=l23;
sj0+=sj1;
l17=sj0;
sj0=0ULL;
l15=sj0;
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L63;
}
si0=l2;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l14=si0;
L64:;
{
si0=l14;
if(si0){
goto L65;
}
sj0=-1ULL;
l15=sj0;
goto L63;
L65:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L64;
}
}
sj0=0ULL;
l15=sj0;
L63:;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l15;
sj0+=sj1;
l23=sj0;
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L66;
}
si0=l0;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l14=si0;
L67:;
{
si0=l14;
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L67;
}
}
L66:;
sj0=l23;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L2;
}
sj0=l23;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
L50:;
sj0=l23;
sj1=1ULL;
si0=sj0 == sj1;
l3=si0;
si0=l8;
if(si0){
goto L3;
}
si0=l20;
f15024(i,si0);
L3:;
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L2:;
si0=1253860U;
si1=27U;
si2=1253888U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1253548U;
si1=26U;
si2=1253844U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1247(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
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
U32 l24=0;
U32 l25=0;
U64 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U64 l33=0;
U64 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=8U;
l4=si0;
si0=l2;
si1=1U;
si2=3U;
si0=f1011(i,si0,si1,si2);
l5=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L33;
}
L34:;
si0=l2;
si1=-1U;
si0+=si1;
l6=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L32;
}
si0=l3;
si1=l1;
si2=l6;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
sj0=l7;
si0=!(sj0);
if(si0){
goto L31;
}
sj0=l7;
sj0=I64_CLZ(sj0);
l8=sj0;
sj1=62ULL;
sj0&=sj1;
l9=sj0;
sj0=l8;
sj1=1ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=l2;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L37;
case 1:
goto L36;
default:
goto L35;
}
L37:;
sj0=l7;
sj1=l9;
sj0<<=(sj1&63);
l7=sj0;
sj1=4611686018427387903ULL;
si0=sj0 <= sj1;
if(si0){
goto L30;
}
si0=l5;
si0=!(si0);
if(si0){
goto L38;
}
si0=l4;
sj1=l7;
sj2=14ULL;
sj1<<=(sj2&63);
sj2=562949953224704ULL;
sj3=l7;
sj4=31ULL;
sj3>>=(sj4&63);
sj4=l7;
sj5=55ULL;
sj4>>=(sj5&63);
si4=(U32)(sj4);
si5=1U;
si4<<=(si5&31);
si5=1211060U;
si4+=si5;
sj4=i64_load16_u(&i->m0,(U64)si4);
sj5=256ULL;
sj4|=sj5;
l9=sj4;
sj3*=sj4;
sj4=l9;
sj3*=sj4;
sj2-=sj3;
sj3=16ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=l9;
sj2*=sj3;
sj3=18ULL;
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=l9;
sj4=16ULL;
sj3<<=(sj4&63);
sj2+=sj3;
l9=sj2;
sj3=l7;
sj4=24ULL;
sj3>>=(sj4&63);
sj2*=sj3;
l8=sj2;
sj3=25ULL;
sj2>>=(sj3&63);
l11=sj2;
sj3=l11;
sj2*=sj3;
sj1-=sj2;
sj2=-1099511627776ULL;
sj1+=sj2;
sj2=24ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l9;
sj1*=sj2;
sj2=15ULL;
sj1=(U64)((I64)sj1>>(sj2&63));
sj2=l8;
sj1+=sj2;
sj2=32ULL;
sj1>>=(sj2&63);
l9=sj1;
sj2=l9;
sj3=l9;
sj4=2ULL;
sj3+=sj4;
sj2*=sj3;
sj3=l7;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l10;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L38:;
si0=0U;
si1=0U;
si2=1255008U;
f594(i,si0,si1,si2);
UNREACHABLE;
L36:;
sj0=l7;
sj1=4611686018427387903ULL;
si0=sj0 > sj1;
if(si0){
goto L3;
}
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=0ULL;
sj3=l9;
sj2-=sj3;
sj3=62ULL;
sj2&=sj3;
sj1>>=(sj2&63);
sj2=l7;
sj3=l9;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l8;
sj3=l9;
sj2<<=(sj3&63);
f1245(i,si0,sj1,sj2);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
sj2=l10;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L35:;
si0=l2;
si1=1U;
si2=3U;
si0=f1011(i,si0,si1,si2);
l12=si0;
si0=l2;
si1=8U;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l12;
si1=l5;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l2;
si1=1U;
si0&=si1;
l13=si0;
if(si0){
goto L43;
}
sj0=l7;
sj1=4611686018427387904ULL;
si0=sj0 >= sj1;
if(si0){
goto L41;
}
L43:;
si0=8U;
l14=si0;
si0=l12;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l15=si0;
si1=l12;
si2=1U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l17=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l17;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l17;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si0=!(si0);
if(si0){
goto L44;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L14;
}
L44:;
si0=l16;
si1=l17;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l13;
if(si0){
goto L40;
}
si0=l16;
si0=!(si0);
if(si0){
goto L11;
}
si0=l14;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
l6=si0;
si0=l14;
l18=si0;
goto L39;
L42:;
si0=l12;
si1=l5;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l12;
si2=1U;
si1<<=(si2&31);
l19=si1;
si2=l2;
si3=1U;
si2&=si3;
l20=si2;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l6;
si1=l2;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l12;
si1=4U;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l12;
si1=l12;
si2=-1U;
si1+=si2;
si2=1U;
si1>>=(si2&31);
l15=si1;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=8U;
l21=si0;
si0=l19;
si1=l15;
si0+=si1;
si1=4U;
si0+=si1;
l22=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=l22;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l22;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si0=!(si0);
if(si0){
goto L45;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l21=si0;
si0=!(si0);
if(si0){
goto L24;
}
L45:;
si0=l22;
si1=l12;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l12;
si1=l15;
si0-=si1;
l23=si0;
si0=l22;
si1=l12;
si0-=si1;
l19=si0;
si0=l21;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sj0=l7;
sj1=4611686018427387904ULL;
si0=sj0 < sj1;
if(si0){
goto L46;
}
si0=l23;
si1=l12;
si0+=si1;
l16=si0;
si1=2U;
si0+=si1;
l24=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l24;
si1=l19;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l2;
si1=l15;
si2=l20;
si3=-1U;
si2^=si3;
si1+=si2;
l19=si1;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l16;
si1=1U;
si0+=si1;
l24=si0;
si1=l2;
si2=l19;
si1-=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
si2=l19;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l24;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L7;
L47:;
si0=l19;
si1=l2;
si2=1254160U;
f683(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l19;
si1=l15;
si2=2U;
si3=1U;
si4=l20;
si2=si4?si2:si3;
l24=si2;
si1=si1 <= si2;
l16=si1;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l2;
si1=l15;
si2=l20;
si3=-1U;
si2^=si3;
si1+=si2;
si2=l15;
si3=l24;
si2=si2 > si3;
l17=si2;
si1-=si2;
l24=si1;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0+64U,sj1);
sj0=l9;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L18;
}
si0=l2;
si1=l24;
si0-=si1;
l14=si0;
si1=l19;
si2=l16;
si1-=si2;
l19=si1;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l2;
si1=l24;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l6;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l14;
si1=1U;
si0&=si1;
l25=si0;
sj0=0ULL;
sj1=l9;
sj0-=sj1;
sj1=62ULL;
sj0&=sj1;
l11=sj0;
si0=l20;
si1=l2;
si0+=si1;
si1=l15;
si2=-1U;
si3=0U;
si4=l17;
si2=si4?si2:si3;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=0U;
l19=si0;
sj0=0ULL;
l8=sj0;
goto L49;
L50:;
si0=0U;
l16=si0;
si0=0U;
si1=l14;
si2=-2U;
si1&=si2;
si0-=si1;
l14=si0;
sj0=0ULL;
l8=sj0;
si0=l13;
l19=si0;
si0=l18;
l24=si0;
L51:;
{
si0=l24;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l8;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si1=8U;
si0+=si1;
si1=l19;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l26;
sj3=l11;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=16U;
si0+=si1;
l19=si0;
si0=l24;
si1=16U;
si0+=si1;
l24=si0;
sj0=l8;
sj1=l11;
sj0>>=(sj1&63);
l8=sj0;
si0=l14;
si1=l16;
si2=-2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L51;
}
}
si0=0U;
si1=l16;
si0-=si1;
l19=si0;
L49:;
si0=l25;
si0=!(si0);
if(si0){
goto L52;
}
si0=l18;
si1=l19;
si2=3U;
si1<<=(si2&31);
l19=si1;
si0+=si1;
si1=l13;
si2=l19;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l8;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l11;
sj0>>=(sj1&63);
l8=sj0;
L52:;
si0=l3;
sj1=l8;
i64_store(&i->m0,(U64)si0+64U,sj1);
sj0=l8;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si1=l3;
si2=64U;
si1+=si2;
si2=1250184U;
si3=l3;
si4=72U;
si3+=si4;
si4=1254904U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L48:;
si0=l24;
si1=l2;
si2=1254208U;
f683(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=f15022(i,si0);
l19=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l19;
si1=l1;
si2=l6;
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=l12;
si1=536870909U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l12;
si1=1U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l1=si0;
si1=3U;
si0<<=(si1&31);
l24=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l24;
if(si0){
goto L54;
}
si0=8U;
l19=si0;
goto L53;
L54:;
si0=l24;
si1=1U;
si0=f15026(i,si0,si1);
l19=si0;
si0=!(si0);
if(si0){
goto L15;
}
L53:;
si0=l4;
si1=l12;
si2=l6;
si3=l2;
sj4=0ULL;
si5=l19;
si6=l1;
si0=f1246(i,si0,si1,si2,si3,sj4,si5,si6);
si0=l19;
f15024(i,si0);
si0=l6;
f15024(i,si0);
goto L1;
L40:;
si0=l16;
si0=!(si0);
if(si0){
goto L12;
}
si0=l14;
si1=8U;
si0+=si1;
l18=si0;
si0=l16;
si1=-1U;
si0+=si1;
l6=si0;
L39:;
sj0=l7;
sj1=4611686018427387904ULL;
si0=sj0 < sj1;
if(si0){
goto L56;
}
si0=l6;
si1=l2;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l18;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L55;
L56:;
si0=l3;
sj1=l9;
i64_store(&i->m0,(U64)si0+64U,sj1);
sj0=l9;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=1U;
si0&=si1;
l23=si0;
sj0=0ULL;
l7=sj0;
si0=0U;
l19=si0;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L57;
}
sj0=0ULL;
sj1=l9;
sj0-=sj1;
sj1=62ULL;
sj0&=sj1;
l8=sj0;
si0=l2;
si1=-2U;
si0&=si1;
l24=si0;
si0=0U;
l19=si0;
sj0=0ULL;
l7=sj0;
si0=l1;
l2=si0;
si0=l18;
l6=si0;
L58:;
{
si0=l6;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l7;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
sj2=l9;
sj1<<=(sj2&63);
sj2=l11;
sj3=l8;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
sj0=l7;
sj1=l8;
sj0>>=(sj1&63);
l7=sj0;
si0=l24;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L58;
}
}
L57:;
si0=l23;
si0=!(si0);
if(si0){
goto L55;
}
si0=l18;
si1=l19;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
si1=l1;
si2=l2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l9;
sj1<<=(sj2&63);
sj2=l7;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L55:;
si0=l4;
si1=l12;
si2=l14;
si3=l16;
sj4=1ULL;
sj5=l10;
sj6=32ULL;
sj5|=sj6;
sj6=l10;
si7=l13;
sj5=si7?sj5:sj6;
l7=sj5;
sj4<<=(sj5&63);
sj5=-2ULL;
sj4+=sj5;
si5=l14;
si6=l16;
si7=3U;
si6<<=(si7&31);
si5+=si6;
si6=l15;
si0=f1246(i,si0,si1,si2,si3,sj4,si5,si6);
si0=l4;
si1=l12;
sj2=l7;
sj0=f1026(i,si0,si1,sj2);
si0=l17;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
f15024(i,si0);
goto L1;
L33:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L32:;
si0=l6;
si1=0U;
si2=1254976U;
f594(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l3;
si2=48U;
si1+=si2;
si2=1250184U;
si3=l3;
si4=72U;
si3+=si4;
si4=1254992U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L30:;
si0=1212204U;
si1=39U;
si2=1212244U;
f604(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l12;
si1=l5;
si2=1255040U;
f597(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l12;
si1=l5;
si2=1255120U;
f597(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si1=l3;
si2=60U;
si1+=si2;
si2=l3;
si3=64U;
si2+=si3;
si3=l3;
si4=72U;
si3+=si4;
si4=1254960U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L26:;
si0=1254920U;
si1=23U;
si2=1254944U;
f604(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1248536U;
si1=35U;
si2=1254112U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=l12;
si1=l22;
si2=1254128U;
f593(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1U;
si1=0U;
si2=1254144U;
f683(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l24;
si1=l19;
si2=1254144U;
f597(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l24;
si1=l16;
si2=1254176U;
f685(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l16;
si1=0U;
si2=1254192U;
f593(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l3;
si2=64U;
si1+=si2;
si2=1198688U;
si3=l3;
si4=72U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
si0=l14;
si1=l19;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L15:;
si0=8U;
si1=l24;
f52(i,si0,si1);
UNREACHABLE;
L14:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=1248536U;
si1=35U;
si2=1255056U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1U;
si1=0U;
si2=1255088U;
f593(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=0U;
si1=0U;
si2=1255072U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=l2;
si2=1255104U;
f685(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l3;
si2=64U;
si1+=si2;
si2=1198688U;
si3=l3;
si4=72U;
si3+=si4;
si4=1200292U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l2;
si1=l6;
si2=1200308U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l22;
si1=l12;
si2=1U;
si1+=si2;
l18=si1;
si0=si0 < si1;
if(si0){
goto L64;
}
si0=l15;
si1=1U;
si0+=si1;
l19=si0;
si0=l15;
si1=l23;
si2=l18;
si1+=si2;
l24=si1;
si0=si0 >= si1;
if(si0){
goto L63;
}
si0=l24;
si1=l22;
si2=l18;
si1-=si2;
l27=si1;
si0=si0 > si1;
if(si0){
goto L62;
}
si0=l4;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
si1=l23;
si2=l21;
si3=l18;
si4=3U;
si3<<=(si4&31);
si2+=si3;
l29=si2;
si3=l19;
si4=3U;
si3<<=(si4&31);
si2+=si3;
l30=si2;
si3=l24;
si4=l19;
si3-=si4;
sj4=0ULL;
si5=l21;
si6=l18;
si0=f1246(i,si0,si1,si2,si3,sj4,si5,si6);
l31=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l18;
si1=l15;
si0=si0 <= si1;
if(si0){
goto L61;
}
si0=l27;
si1=l18;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l3;
si1=l18;
si2=l19;
si1-=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l23;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l19;
si1=l23;
si0=si0 != si1;
if(si0){
goto L68;
}
si0=l12;
si1=l15;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l23;
si1=1U;
si0&=si1;
l32=si0;
si0=l12;
si1=l15;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L67;
}
si0=0U;
l19=si0;
si0=0U;
l16=si0;
goto L66;
L68:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si1=l3;
si2=60U;
si1+=si2;
si2=l3;
si3=64U;
si2+=si3;
si3=l3;
si4=72U;
si3+=si4;
si4=1203476U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L67:;
si0=l15;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l23;
si1=-2U;
si0&=si1;
l25=si0;
si0=0U;
l19=si0;
si0=l4;
l24=si0;
si0=0U;
l16=si0;
L69:;
{
si0=l6;
si1=l14;
si0+=si1;
l17=si0;
si1=16U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
si2=l19;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l24;
si4=l14;
si3+=si4;
l13=si3;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=24U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l8;
sj3=l11;
si2=sj2 <= sj3;
sj3=l8;
sj4=l11;
si3=sj3 < sj4;
si4=l19;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l19=si2;
sj2=(U64)(si2);
si3=l13;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l8=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l8;
si0=sj0 <= sj1;
sj1=l26;
sj2=l8;
si1=sj1 < sj2;
si2=l19;
si0=si2?si0:si1;
l19=si0;
si0=l24;
si1=16U;
si0+=si1;
l24=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l25;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L69;
}
}
L66:;
si0=l32;
si0=!(si0);
if(si0){
goto L70;
}
si0=l30;
si1=l16;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l24=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
si2=l19;
sj2=(U64)(si2);
si3=l28;
si4=l6;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=l11;
si0=sj0 <= sj1;
sj1=l8;
sj2=l11;
si1=sj1 < sj2;
si2=l19;
si0=si2?si0:si1;
l19=si0;
L70:;
si0=l19;
si1=1U;
si0&=si1;
if(si0){
goto L59;
}
L65:;
si0=1254792U;
si1=93U;
si2=1254888U;
f604(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=1248536U;
si1=35U;
si2=1254224U;
f604(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l19;
si1=l24;
si2=1254240U;
f683(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l24;
si1=l27;
si2=1254240U;
f597(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l19;
si1=l18;
si2=1254256U;
f683(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l18;
si1=l27;
si2=1254256U;
f597(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l27;
si1=l18;
si0=si0 < si1;
if(si0){
goto L77;
}
si0=l23;
si1=3U;
si0=si0 < si1;
if(si0){
goto L76;
}
si0=l18;
si1=l23;
si0=si0 < si1;
if(si0){
goto L75;
}
si0=l23;
si1=3U;
si0<<=(si1&31);
si1=l28;
si0+=si1;
l19=si0;
si1=-8U;
si0+=si1;
l6=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L74;
}
si0=l21;
si1=l29;
si2=l18;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l17=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L73;
}
si0=l19;
si1=-16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
si0=l3;
si1=32U;
si0+=si1;
sj1=-1ULL;
sj2=l8;
sj3=-1ULL;
sj2^=sj3;
sj3=l8;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
sj0=l33;
sj1=l8;
si2=l3;
sj2=i64_load(&i->m0,(U64)si2+32U);
l11=sj2;
sj1*=sj2;
l34=sj1;
sj0+=sj1;
l26=sj0;
sj1=l34;
si0=sj0 < sj1;
if(si0){
goto L72;
}
goto L71;
L77:;
si0=1248536U;
si1=35U;
si2=1254272U;
f604(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=1251280U;
si1=27U;
si2=1251308U;
f604(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=1250221U;
si1=32U;
si2=1251264U;
f604(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=1251192U;
si1=54U;
si2=1251248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=1233936U;
si1=25U;
si2=1234152U;
f604(i,si0,si1,si2);
UNREACHABLE;
L72:;
sj0=-1ULL;
sj1=-2ULL;
sj2=l26;
sj3=l8;
si2=sj2 < sj3;
l6=si2;
sj0=si2?sj0:sj1;
sj1=l11;
sj0+=sj1;
l11=sj0;
sj0=l26;
sj1=l8;
sj2=0ULL;
sj3=l8;
si4=l6;
sj2=si4?sj2:sj3;
sj1+=sj2;
sj0-=sj1;
l26=sj0;
L71:;
si0=l18;
si1=3U;
si0<<=(si1&31);
l19=si0;
si0=l3;
si1=16U;
si0+=si1;
sj1=l11;
sj2=0ULL;
sj3=l33;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
sj0=l26;
si1=l3;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l34=sj0;
sj1=l26;
si0=sj0 >= sj1;
if(si0){
goto L78;
}
sj0=l34;
sj1=l8;
si0=sj0 > sj1;
if(si0){
goto L79;
}
sj0=l33;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+16U);
si0=sj0 <= sj1;
sj1=l34;
sj2=l8;
si1=sj1 == sj2;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L79;
}
sj0=l11;
sj1=-1ULL;
sj0+=sj1;
l11=sj0;
goto L78;
L79:;
sj0=l11;
sj1=-2ULL;
sj0+=sj1;
l11=sj0;
L78:;
si0=l27;
si1=l18;
si0-=si1;
l6=si0;
si0=l29;
si1=l19;
si0+=si1;
l16=si0;
si0=l23;
si1=211U;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l23;
si1=2965U;
si0=si0 < si1;
if(si0){
goto L83;
}
si0=l18;
si1=l23;
si0=f1098(i,si0,si1);
l19=si0;
si0=!(si0);
if(si0){
goto L84;
}
si0=l19;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l19;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l14;
if(si0){
goto L85;
}
si0=8U;
l24=si0;
goto L81;
L85:;
si0=l14;
si1=1U;
si0=f15026(i,si0,si1);
l24=si0;
if(si0){
goto L81;
}
si0=8U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L84:;
si0=l16;
si1=l6;
si2=l29;
si3=l18;
si4=0U;
si5=l28;
si6=l23;
si7=8U;
si8=0U;
si0=f1091(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l19=si0;
goto L80;
L83:;
si0=l16;
si1=l6;
si2=l17;
si3=l18;
si4=l28;
si5=l23;
sj6=l11;
si0=f1096(i,si0,si1,si2,si3,si4,si5,sj6);
l19=si0;
goto L80;
L82:;
si0=l16;
si1=l6;
si2=l17;
si3=l18;
si4=l28;
si5=l23;
sj6=l11;
si0=f1090(i,si0,si1,si2,si3,si4,si5,sj6);
l19=si0;
goto L80;
L81:;
si0=l16;
si1=l6;
si2=l29;
si3=l18;
si4=0U;
si5=l28;
si6=l23;
si7=l24;
si8=l19;
si0=f1091(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l19=si0;
si0=l24;
f15024(i,si0);
L80:;
si0=l18;
si1=l23;
si0-=si1;
l13=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L86;
}
si0=l13;
si1=l6;
si2=1251176U;
f594(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l19;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l6;
si2=-1U;
si1+=si2;
l21=si1;
si0=si0 >= si1;
if(si0){
goto L88;
}
si0=l16;
si1=8U;
si0+=si1;
l30=si0;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l31;
sj1=(U64)(si1);
sj0+=sj1;
l26=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L87;
}
si0=l4;
si1=255U;
si2=l15;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
goto L4;
L88:;
si0=l15;
si1=l21;
si2=1254288U;
f594(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l16;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=l15;
si1=-1U;
si0+=si1;
l25=si0;
si1=l25;
si2=536870911U;
si1&=si2;
l6=si1;
si2=l25;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si0=!(si0);
if(si0){
goto L89;
}
si0=l6;
si1=1U;
si0&=si1;
l31=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L91;
}
si0=0U;
l24=si0;
goto L90;
L91:;
si0=l6;
si1=536870910U;
si0&=si1;
l14=si0;
si0=l12;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=40U;
si0+=si1;
l6=si0;
si0=0U;
l24=si0;
si0=l4;
l19=si0;
L92:;
{
si0=l19;
si1=l6;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l8;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=8U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l11;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l19;
si1=16U;
si0+=si1;
l19=si0;
sj0=l8;
sj1=1ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=l14;
si1=l24;
si2=2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L92;
}
}
L90:;
si0=l31;
si0=!(si0);
if(si0){
goto L89;
}
si0=l4;
si1=l24;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l16;
si2=16U;
si1+=si2;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l8;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=1ULL;
sj0>>=(sj1&63);
l8=sj0;
L89:;
si0=l4;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l8;
sj2=l8;
sj3=-9223372036854775808ULL;
sj2|=sj3;
sj3=l26;
si3=!(sj3);
sj1=si3?sj1:sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=-1ULL;
sj1=-1ULL;
sj2=-1ULL;
sj3=l10;
sj4=64ULL;
si5=l20;
sj5=(U64)(si5);
sj4>>=(sj5&63);
sj3-=sj4;
sj4=65ULL;
sj3+=sj4;
l8=sj3;
sj2<<=(sj3&63);
sj3=-1ULL;
sj2^=sj3;
si3=l16;
sj3=i64_load(&i->m0,(U64)si3+8U);
l11=sj3;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l8;
sj3=63ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l11;
sj0&=sj1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3ULL;
sj1>>=(sj2&63);
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=8U;
l32=si0;
si0=l23;
si1=l21;
si0=f1126(i,si0,si1);
l31=si0;
si0=!(si0);
if(si0){
goto L98;
}
si0=l31;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l31;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si0=!(si0);
if(si0){
goto L98;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l32=si0;
si0=!(si0);
if(si0){
goto L97;
}
L98:;
si0=l3;
si1=l17;
si2=l18;
si3=l28;
si4=l23;
si5=l30;
si6=l21;
si7=l32;
si8=l31;
sj1=f1127(i,si1,si2,si3,si4,si5,si6,si7,si8);
l8=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
sj0=l8;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L94;
}
si0=l22;
si1=l18;
si0=si0 == si1;
if(si0){
goto L96;
}
si0=l27;
si1=-1U;
si0+=si1;
l30=si0;
si1=l23;
si0=si0 < si1;
if(si0){
goto L95;
}
si0=l30;
si1=l23;
si0-=si1;
l35=si0;
si0=l29;
si1=8U;
si0+=si1;
l21=si0;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l36=si0;
si0=l12;
si1=l15;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l23;
si1=1U;
si0&=si1;
l37=si0;
si0=l12;
si1=l15;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L100;
}
si0=0U;
l19=si0;
si0=0U;
l24=si0;
goto L99;
L100:;
si0=l12;
si1=3U;
si0<<=(si1&31);
l25=si0;
si0=l23;
si1=-2U;
si0&=si1;
l22=si0;
si0=0U;
l19=si0;
si0=l17;
l6=si0;
si0=0U;
l24=si0;
L101:;
{
si0=l6;
si1=l25;
si0+=si1;
l16=si0;
si1=16U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
si2=l19;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l6;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=24U;
si0+=si1;
l16=si0;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l8;
sj3=l11;
si2=sj2 <= sj3;
sj3=l8;
sj4=l11;
si3=sj3 < sj4;
si4=l19;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l19=si2;
sj2=(U64)(si2);
si3=l6;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l8=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l8;
si0=sj0 <= sj1;
sj1=l26;
sj2=l8;
si1=sj1 < sj2;
si2=l19;
si0=si2?si0:si1;
l19=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l22;
si1=l24;
si2=2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L101;
}
}
L99:;
si0=l37;
si0=!(si0);
if(si0){
goto L102;
}
si0=l21;
si1=l24;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
l24=si0;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
si2=l19;
sj2=(U64)(si2);
si3=l17;
si4=l6;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l11=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=l11;
si0=sj0 <= sj1;
sj1=l8;
sj2=l11;
si1=sj1 < sj2;
si2=l19;
si0=si2?si0:si1;
l19=si0;
L102:;
si0=l19;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l15;
si1=l35;
si0=si0 > si1;
if(si0){
goto L93;
}
si0=l36;
si1=l36;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=0U;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l6=si0;
si0=l12;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=24U;
si0+=si1;
l24=si0;
L104:;
{
si0=l6;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L103;
}
si0=l24;
si1=l6;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
goto L104;
}
L103:;
si0=1254684U;
si1=73U;
si2=1254760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L97:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L96:;
si0=1U;
si1=l27;
si2=1254304U;
f593(i,si0,si1,si2);
UNREACHABLE;
L95:;
si0=1248536U;
si1=35U;
si2=1254320U;
f604(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=0U;
si1=l3;
si2=64U;
si1+=si2;
si2=1250184U;
si3=l3;
si4=72U;
si3+=si4;
si4=1254776U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L93:;
si0=l15;
si1=l35;
si2=1254336U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l15;
si1=l35;
si0=si0 > si1;
if(si0){
goto L113;
}
si0=l15;
si1=l13;
si0=si0 > si1;
if(si0){
goto L112;
}
si0=0U;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l6=si0;
si0=l12;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=8U;
si0+=si1;
l19=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=-8U;
si0+=si1;
l24=si0;
L116:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L115;
}
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l24;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l19;
si1=-8U;
si0+=si1;
l19=si0;
si0=l24;
si1=-8U;
si0+=si1;
l24=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=-1U;
sj1=l11;
sj2=l8;
si1=sj1 != sj2;
sj2=l11;
sj3=l8;
si2=sj2 > sj3;
si0=si2?si0:si1;
l16=si0;
si0=!(si0);
if(si0){
goto L116;
}
goto L114;
}
L115:;
si0=-1U;
si1=0U;
si2=l6;
si0=si2?si0:si1;
l16=si0;
L114:;
si0=l3;
si1=l16;
i32_store8(&i->m0,(U64)si0+64U,si1);
si0=l16;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L121;
}
si0=l16;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L120;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l3;
si2=64U;
si1+=si2;
si2=1248352U;
si3=l3;
si4=72U;
si3+=si4;
si4=1254384U;
f1253(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L121:;
si0=l36;
si1=l21;
si2=l23;
si3=l28;
si4=l23;
sj5=2ULL;
sj1=f1070(i,si1,si2,si3,si4,sj5);
si2=l36;
sj2=i64_load(&i->m0,(U64)si2);
l8=sj2;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L122;
}
si0=0U;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l6=si0;
si0=l12;
si1=4U;
si0<<=(si1&31);
si1=l17;
si0+=si1;
si1=24U;
si0+=si1;
l24=si0;
L123:;
{
si0=l6;
si1=-8U;
si0=si0 == si1;
if(si0){
goto L119;
}
si0=l24;
si1=l6;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj0=l8;
si0=!(sj0);
if(si0){
goto L123;
}
}
L122:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L120;
}
si0=l4;
si1=8U;
si0+=si1;
l6=si0;
si0=l15;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l19=si0;
L124:;
{
si0=l19;
si0=!(si0);
if(si0){
goto L118;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=-8U;
si0+=si1;
l19=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj0=l8;
si0=!(sj0);
if(si0){
goto L124;
}
}
L120:;
si0=l23;
si1=l15;
si0-=si1;
l6=si0;
si1=l30;
si2=l15;
si1-=si2;
l19=si1;
si0=si0 > si1;
if(si0){
goto L111;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=l15;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l6=si0;
si0=l21;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
L125:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L117;
}
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
sj0=l8;
si0=!(sj0);
if(si0){
goto L125;
}
goto L105;
}
L119:;
si0=1254472U;
si1=83U;
si2=1254556U;
f604(i,si0,si1,si2);
UNREACHABLE;
L118:;
si0=1254400U;
si1=53U;
si2=1254456U;
f604(i,si0,si1,si2);
UNREACHABLE;
L117:;
si0=l3;
si1=8U;
si0+=si1;
si1=l15;
si1=f1075(i,si1);
l6=si1;
si2=1U;
f1295(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l17;
si1=l18;
si2=l4;
si3=l15;
si4=l3;
si4=i32_load(&i->m0,(U64)si4+8U);
l24=si4;
si5=l6;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l18;
si1=l15;
si0=si0 < si1;
if(si0){
goto L110;
}
si0=l15;
si1=l18;
si2=l15;
si1-=si2;
l6=si1;
si0=si0 > si1;
if(si0){
goto L109;
}
si0=l21;
si1=l15;
si2=l17;
si3=l15;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l15;
si0=f1161(i,si0,si1,si2,si3);
l6=si0;
si1=255U;
si0&=si1;
if(si0){
goto L126;
}
si0=l15;
si1=l20;
si0-=si1;
l6=si0;
sj0=l7;
sj1=4611686018427387904ULL;
si0=sj0 < sj1;
if(si0){
goto L128;
}
si0=l6;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L127;
}
si0=l6;
si1=l2;
si2=1254620U;
f597(i,si0,si1,si2);
UNREACHABLE;
L128:;
si0=l15;
si1=l2;
si0=si0 > si1;
if(si0){
goto L108;
}
si0=l29;
si1=l27;
si2=l1;
si3=l15;
sj4=l9;
sj0=f1021(i,si0,si1,si2,si3,sj4);
si0=l29;
l1=si0;
si0=l6;
si1=l27;
si0=si0 > si1;
if(si0){
goto L107;
}
L127:;
si0=l1;
si1=l6;
si2=l17;
si3=l20;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l6;
si0=f1161(i,si0,si1,si2,si3);
l6=si0;
L126:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L129;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L129;
}
si0=l4;
si1=8U;
si0+=si1;
l2=si0;
si0=l15;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l6=si0;
L130:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L106;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L130;
}
}
L129:;
si0=l19;
si0=!(si0);
if(si0){
goto L105;
}
si0=l24;
f15024(i,si0);
goto L105;
L113:;
si0=l15;
si1=l35;
si2=1254352U;
f597(i,si0,si1,si2);
UNREACHABLE;
L112:;
si0=l15;
si1=l13;
si2=1254368U;
f597(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=l6;
si1=l19;
si2=1254572U;
f597(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=1248536U;
si1=35U;
si2=1254588U;
f604(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l15;
si1=l6;
si2=1254604U;
f597(i,si0,si1,si2);
UNREACHABLE;
L108:;
si0=l15;
si1=l2;
si2=1254636U;
f597(i,si0,si1,si2);
UNREACHABLE;
L107:;
si0=l6;
si1=l27;
si2=1254652U;
f597(i,si0,si1,si2);
UNREACHABLE;
L106:;
si0=1254400U;
si1=53U;
si2=1254668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L105:;
si0=l31;
si0=!(si0);
if(si0){
goto L4;
}
si0=l32;
f15024(i,si0);
L4:;
si0=l20;
if(si0){
goto L132;
}
sj0=l7;
sj1=4611686018427387903ULL;
si0=sj0 > sj1;
if(si0){
goto L131;
}
L132:;
si0=l4;
si1=l12;
sj2=l10;
sj3=32ULL;
sj2|=sj3;
sj3=l10;
si4=l20;
sj2=si4?sj2:sj3;
sj0=f1026(i,si0,si1,sj2);
L131:;
si0=l17;
f15024(i,si0);
goto L1;
L3:;
si0=l3;
si1=72U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
f1245(i,si0,sj1,sj2);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+72U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=0U;
si1=0U;
si2=1255024U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
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
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1248(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
si2=255U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1148272U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1148260U;
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

void f1249(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1250(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1255172U;
si3=l5;
si4=12U;
si3+=si4;
si4=1255172U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1251(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1255188U;
si3=l5;
si4=12U;
si3+=si4;
si4=1255188U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1252(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1255204U;
si3=l5;
si4=12U;
si3+=si4;
si4=1255204U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1253(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1255220U;
si3=l5;
si4=12U;
si3+=si4;
si4=1255220U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1254(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1255236U;
si3=l5;
si4=12U;
si3+=si4;
si4=1255252U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1255(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1255268U;
si3=l5;
si4=12U;
si3+=si4;
si4=1255268U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1256(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1255284U;
si3=l5;
si4=12U;
si3+=si4;
si4=1255284U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1257(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1255300U;
si3=l5;
si4=12U;
si3+=si4;
si4=1255300U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f1258(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l2;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=0U;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l6;
si1=l3;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l6;
si1=l2;
si0-=si1;
l7=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l5;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l0;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l6;
si0-=si1;
l2=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=l0;
si0-=si1;
l2=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l5;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
l4=si0;
L10:;
si0=l4;
goto L0;
L9:;
si0=l1;
si1=l2;
si2=1255872U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l2;
si1=l3;
si2=1259828U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l2;
si2=1255824U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si1=l6;
si2=1259844U;
f683(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=l3;
si2=1259844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l7;
si2=1255840U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l6;
si1=l0;
si2=1259860U;
f683(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l3;
si2=1259860U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
si2=1255856U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1259(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
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
U64 l27=0;
U32 l28=0;
U64 l29=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l8;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l9=si1;
si2=l6;
si1+=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l10;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
si1=l6;
si0=si0 >= si1;
l11=si0;
if(si0){
goto L25;
}
si0=l6;
si1=l9;
si0=f1126(i,si0,si1);
l12=si0;
goto L24;
L25:;
si0=l9;
si1=l6;
si0=f1126(i,si0,si1);
l12=si0;
L24:;
si0=8U;
l13=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L26;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l14;
si0=!(si0);
if(si0){
goto L26;
}
si0=l14;
si1=1U;
si0=f15026(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L18;
}
L26:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l15=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l14=si1;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l9;
si1=l15;
si2=l14;
si1-=si2;
l15=si1;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l11;
if(si0){
goto L28;
}
si0=l7;
si1=l10;
si2=l2;
si3=l6;
si4=l15;
si5=l9;
si6=l13;
si7=l12;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L27;
L28:;
si0=l7;
si1=l10;
si2=l15;
si3=l9;
si4=l2;
si5=l6;
si6=l13;
si7=l12;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L27:;
si0=l14;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l17=si1;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l9;
si1=l14;
si2=l17;
si1-=si2;
l14=si1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l8;
si1=l10;
si0-=si1;
l18=si0;
si0=l7;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l16;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l11;
if(si0){
goto L30;
}
si0=l19;
si1=l18;
si2=l2;
si3=l6;
si4=l14;
si5=l9;
si6=l13;
si7=l12;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L29;
L30:;
si0=l19;
si1=l18;
si2=l14;
si3=l9;
si4=l2;
si5=l6;
si6=l13;
si7=l12;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L29:;
si0=l10;
si1=l6;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l2;
si1=l7;
si2=l6;
si3=3U;
si2<<=(si3&31);
l20=si2;
si0=f15143(i,si0,si1,si2);
l21=si0;
si0=l9;
si1=l1;
si2=l6;
si1-=si2;
l22=si1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l7;
si1=l20;
si0+=si1;
l2=si0;
si0=l9;
if(si0){
goto L32;
}
si0=0U;
l23=si0;
goto L31;
L32:;
si0=l21;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=0U;
l15=si0;
si0=l9;
l25=si0;
si0=l2;
l8=si0;
L33:;
{
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l27=sj0;
sj1=l26;
si0=sj0 < sj1;
l28=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L35;
}
si0=l28;
l15=si0;
goto L34;
L35:;
si0=l28;
sj1=l27;
sj2=1ULL;
sj1+=sj2;
l27=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L34:;
si0=l14;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L33;
}
}
si0=l22;
si1=l9;
si0=si0 == si1;
l14=si0;
si1=l15;
si0&=si1;
l23=si0;
si0=l14;
if(si0){
goto L31;
}
si0=l15;
si1=1U;
si0^=si1;
if(si0){
goto L31;
}
si0=l24;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l23=si0;
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L31;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=l6;
si2=3U;
si1<<=(si2&31);
l15=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l8;
si1=l15;
si0+=si1;
si1=l21;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L36:;
{
si0=l14;
si0=!(si0);
l23=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L31;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l27;
si0=!(sj0);
if(si0){
goto L36;
}
}
L31:;
si0=l17;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l24=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l9;
si1=l17;
si2=l24;
si1-=si2;
l14=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l16;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l11;
if(si0){
goto L38;
}
si0=l7;
si1=l10;
si2=l4;
si3=l6;
si4=l14;
si5=l9;
si6=l13;
si7=l12;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L37;
L38:;
si0=l7;
si1=l10;
si2=l14;
si3=l9;
si4=l4;
si5=l6;
si6=l13;
si7=l12;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L37:;
si0=l10;
si0=!(si0);
if(si0){
goto L39;
}
si0=l10;
si1=1U;
si0&=si1;
l17=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L41;
}
si0=0U;
l15=si0;
si0=0U;
l25=si0;
goto L40;
L41:;
si0=l10;
si1=-2U;
si0&=si1;
l0=si0;
si0=0U;
l15=si0;
si0=l7;
l8=si0;
si0=l21;
l14=si0;
si0=0U;
l25=si0;
L42:;
{
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l28=si0;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l27;
sj3=l26;
si2=sj2 <= sj3;
sj3=l27;
sj4=l26;
si3=sj3 < sj4;
si4=l15;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l15=si2;
sj2=(U64)(si2);
si3=l8;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l27;
si0=sj0 <= sj1;
sj1=l29;
sj2=l27;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l0;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L42;
}
}
L40:;
si0=l17;
si0=!(si0);
if(si0){
goto L43;
}
si0=l21;
si1=l25;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l15;
sj2=(U64)(si2);
si3=l7;
si4=l14;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l26;
si0=sj0 <= sj1;
sj1=l27;
sj2=l26;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
L43:;
si0=l15;
si1=1U;
si0&=si1;
if(si0){
goto L44;
}
si0=l23;
si1=l15;
si2=1U;
si1^=si2;
si0&=si1;
l23=si0;
goto L39;
L44:;
si0=l21;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L39;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l14;
si1=l21;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
L46:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L45;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
sj0=l27;
si0=!(sj0);
if(si0){
goto L46;
}
goto L39;
}
L45:;
si0=l23;
si1=l15;
si2=1U;
si1^=si2;
l14=si1;
si0|=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l23;
si1=l14;
si0&=si1;
l23=si0;
L39:;
si0=l9;
si1=l24;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l11;
if(si0){
goto L48;
}
si0=l7;
si1=l10;
si2=l4;
si3=l6;
si4=l16;
si5=l9;
si6=l13;
si7=l12;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L47;
L48:;
si0=l7;
si1=l10;
si2=l16;
si3=l9;
si4=l4;
si5=l6;
si6=l13;
si7=l12;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L47:;
si0=l4;
si1=l7;
si2=l20;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l9;
if(si0){
goto L50;
}
si0=0U;
l0=si0;
goto L49;
L50:;
si0=l7;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
si0=0U;
l8=si0;
si0=l9;
l15=si0;
L51:;
{
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l27=sj0;
sj1=l26;
si0=sj0 < sj1;
l25=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L53;
}
si0=l25;
l8=si0;
goto L52;
L53:;
si0=l25;
sj1=l27;
sj2=1ULL;
sj1+=sj2;
l27=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L52:;
si0=l14;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
if(si0){
goto L51;
}
}
si0=l22;
si1=l9;
si0=si0 == si1;
l14=si0;
si1=l8;
si0&=si1;
l0=si0;
si0=l14;
if(si0){
goto L49;
}
si0=l8;
si1=1U;
si0^=si1;
if(si0){
goto L49;
}
si0=l28;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l0=si0;
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L49;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0-=si1;
si1=l6;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l2;
si1=l8;
si0+=si1;
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
L54:;
{
si0=l14;
si0=!(si0);
l0=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L49;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l27;
si0=!(sj0);
if(si0){
goto L54;
}
}
L49:;
si0=l10;
si1=l18;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l10;
si0=!(si0);
if(si0){
goto L55;
}
si0=l10;
si1=1U;
si0&=si1;
l9=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=0U;
l8=si0;
si0=0U;
l15=si0;
goto L56;
L57:;
si0=l10;
si1=-2U;
si0&=si1;
l28=si0;
si0=0U;
l8=si0;
si0=l19;
l2=si0;
si0=l7;
l14=si0;
si0=0U;
l15=si0;
L58:;
{
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l29=sj1;
sj2=l27;
sj3=l26;
si2=sj2 <= sj3;
sj3=l27;
sj4=l26;
si3=sj3 < sj4;
si4=l8;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
sj2=(U64)(si2);
si3=l2;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l27;
si0=sj0 <= sj1;
sj1=l29;
sj2=l27;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l28;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L58;
}
}
L56:;
si0=l9;
si0=!(si0);
if(si0){
goto L59;
}
si0=l7;
si1=l15;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l8;
sj2=(U64)(si2);
si3=l19;
si4=l14;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l26;
si0=sj0 <= sj1;
sj1=l27;
sj2=l26;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
L59:;
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L60;
}
si0=l0;
si1=l8;
si2=1U;
si1^=si2;
si0&=si1;
l0=si0;
goto L55;
L60:;
si0=l7;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L55;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l14;
si1=l7;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
L62:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L61;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
sj0=l27;
si0=!(sj0);
if(si0){
goto L62;
}
goto L55;
}
L61:;
si0=l0;
si1=l8;
si2=1U;
si1^=si2;
l14=si1;
si0|=si1;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=l14;
si0&=si1;
l0=si0;
L55:;
si0=l23;
si1=l0;
si0|=si1;
if(si0){
goto L63;
}
si0=l1;
si1=-1U;
si0+=si1;
l14=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l21;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l14;
si1=l1;
si2=l7;
si3=l14;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l1=si0;
goto L1;
L63:;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L64;
}
si0=l1;
si1=l3;
si2=1256080U;
f594(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l21;
si1=l1;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
si1=l23;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si2=1256096U;
f594(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l1;
si1=l3;
si2=1255888U;
f597(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l1;
si1=l5;
si2=1255904U;
f597(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1255136U;
si1=35U;
si2=1255920U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1255136U;
si1=35U;
si2=1255936U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
f53(i);
UNREACHABLE;
L18:;
si0=8U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L17:;
si0=l14;
si1=l15;
si2=1259876U;
f593(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l9;
si1=l15;
si2=1255952U;
f597(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l17;
si1=l14;
si2=1259860U;
f683(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l9;
si1=l14;
si2=1255968U;
f597(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1255136U;
si1=35U;
si2=1255984U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l24;
si1=l17;
si2=1259844U;
f683(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l9;
si1=l14;
si2=1256000U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1256292U;
si1=29U;
si2=1256324U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l9;
si1=l24;
si2=1256016U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l10;
si1=l18;
si2=1256032U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1256252U;
si1=24U;
si2=1256276U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1256212U;
si1=24U;
si2=1256236U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l14;
si1=l3;
si2=1256048U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l14;
si1=l5;
si2=1256064U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
si1=l14;
si0+=si1;
si1=l0;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L1:;
si0=l1;
si1=-1U;
si0+=si1;
l14=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l21;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L68;
}
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=l7;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L66;
}
L68:;
si0=l12;
si0=!(si0);
if(si0){
goto L69;
}
si0=l13;
f15024(i,si0);
L69:;
si0=l1;
goto L0;
L67:;
si0=l14;
si1=l3;
si2=1256112U;
f594(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1256144U;
si1=50U;
si2=1256196U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l14;
si1=l5;
si2=1256128U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1260(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U64 l29=0;
U32 l30=0;
U64 l31=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l4;
si1=1679U;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l7;
si1=l4;
si2=l5;
si1-=si2;
l9=si1;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l7;
si1=l9;
si0-=si1;
l7=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=0U;
l2=si0;
si0=l6;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
si2=l9;
si3=3U;
si2<<=(si3&31);
l5=si2;
si0=f15143(i,si0,si1,si2);
si1=l9;
si2=l6;
si3=l9;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l3;
si4=l10;
si3+=si4;
si4=l5;
si2=f15143(i,si2,si3,si4);
l6=si2;
si3=l9;
si4=l0;
si5=l6;
si6=l5;
si5+=si6;
si6=l7;
si7=l9;
si6-=si7;
si0=f1261(i,si0,si1,si2,si3,si4,si5,si6);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
l2=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L40;
}
si0=l3;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L37;
}
L40:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l2;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l2=si0;
L42:;
{
si0=l1;
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L41;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L42;
}
}
si0=l7;
l2=si0;
L41:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l4;
si1=l2;
si0-=si1;
l11=si0;
si0=0U;
l9=si0;
L44:;
{
si0=l3;
si1=l5;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L43;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L44;
}
}
si0=l7;
l9=si0;
L43:;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l4;
si1=l9;
si0-=si1;
l12=si0;
si0=l4;
si1=l9;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l14=si1;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si1=l13;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l10;
if(si0){
goto L36;
}
si0=0U;
l7=si0;
goto L35;
L39:;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l1;
si1=l5;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
si1=l4;
si2=l5;
si1-=si2;
l9=si1;
si2=l3;
si3=l2;
si2+=si3;
si3=l9;
si4=l0;
si5=l6;
si6=l7;
si0=f1262(i,si0,si1,si2,si3,si4,si5,si6);
l2=si0;
if(si0){
goto L34;
}
si0=0U;
l2=si0;
goto L1;
L38:;
si0=l5;
si1=l4;
si2=1257208U;
f593(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1256144U;
si1=50U;
si2=1257176U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l15;
si1=-8U;
si0+=si1;
l2=si0;
si0=l10;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l7=si0;
L45:;
{
si0=l2;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L35;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L45;
}
}
si0=l9;
l7=si0;
L35:;
si0=l8;
si1=l10;
si2=l7;
si1-=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l9;
si1=l14;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l10;
si1=l9;
si2=l13;
si1-=si2;
l17=si1;
si0=si0 <= si1;
if(si0){
goto L46;
}
si0=l17;
l13=si0;
goto L20;
L46:;
si0=l10;
if(si0){
goto L48;
}
si0=0U;
l6=si0;
goto L47;
L48:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l15;
si0+=si1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l18=si0;
si0=0U;
l6=si0;
L49:;
{
si0=l2;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L47;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L49;
}
}
si0=l18;
l6=si0;
L47:;
si0=l8;
si1=l10;
si2=l6;
si1-=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l14;
si1=l0;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l10;
si1=l0;
si2=l9;
si1-=si2;
l20=si1;
si0=si0 <= si1;
if(si0){
goto L50;
}
si0=l20;
l13=si0;
goto L20;
L50:;
si0=l10;
si0=!(si0);
if(si0){
goto L26;
}
si0=l15;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l15;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l10;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l15;
si0+=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l18=si0;
si0=0U;
l2=si0;
L52:;
{
si0=l9;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L51;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L52;
}
}
si0=l18;
l2=si0;
L51:;
si0=l8;
si1=l10;
si2=l2;
si1-=si2;
l23=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=l14;
si2=l0;
si1-=si2;
l24=si1;
si0=si0 <= si1;
if(si0){
goto L53;
}
si0=l24;
l13=si0;
goto L20;
L53:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l15;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si1=-8U;
si0+=si1;
l0=si0;
si0=0U;
l9=si0;
L55:;
{
si0=l0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L55;
}
}
si0=l18;
l9=si0;
L54:;
si0=l8;
si1=l10;
si2=l9;
si1-=si2;
l18=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L21;
L34:;
si0=l0;
si1=l2;
si2=l5;
si1+=si2;
si2=l1;
si3=l4;
si4=l3;
si5=l4;
si6=l5;
si7=l6;
si8=l7;
si0=f1259(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l2=si0;
goto L1;
L33:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=4U;
si1+=si2;
si2=l8;
si3=l8;
si4=24U;
si3+=si4;
si4=1257240U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L32:;
si0=1255136U;
si1=35U;
si2=1257192U;
f604(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=1255136U;
si1=35U;
si2=1257192U;
f604(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l5;
si1=l4;
si2=1257224U;
f593(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l11;
si1=l4;
si2=1256340U;
f597(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l12;
si1=l4;
si2=1256356U;
f597(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l13;
si1=l14;
si2=1259828U;
f597(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l7;
si0=!(si0);
if(si0){
goto L21;
}
goto L18;
L25:;
si0=l13;
si1=l9;
si2=1259844U;
f683(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l9;
si1=l14;
si2=1259844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l9;
si1=l0;
si2=1259860U;
f683(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l0;
si1=l14;
si2=1259860U;
f597(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=4U;
si1+=si2;
si2=1256372U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256376U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L20:;
si0=l10;
si1=l13;
si2=1257160U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l10;
si1=l6;
si0=si0 != si1;
l5=si0;
if(si0){
goto L56;
}
si0=l10;
si1=l2;
si0=si0 == si1;
if(si0){
goto L17;
}
L56:;
si0=l5;
if(si0){
goto L57;
}
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l18;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l25;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L58;
}
si0=l23;
si1=l20;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l3;
si1=l12;
si2=l1;
si3=l11;
si4=l22;
si5=l23;
si0=f1263(i,si0,si1,si2,si3,si4,si5);
l2=si0;
goto L1;
L58:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l25;
si2=1256416U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256440U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L57:;
si0=l10;
si1=l2;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l8;
si1=l11;
si2=l16;
si1-=si2;
l5=si1;
si2=l12;
si3=l23;
si2-=si3;
l2=si2;
si3=l5;
si4=l2;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si2=l11;
si3=l19;
si2-=si3;
l2=si2;
si3=l12;
si4=l18;
si3-=si4;
l9=si3;
si4=l2;
si5=l9;
si4=si4 < si5;
si2=si4?si2:si3;
l2=si2;
si3=l5;
si4=l2;
si3=si3 > si4;
si1=si3?si1:si2;
l12=si1;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=2U;
si0+=si1;
l9=si0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L65;
}
si0=l9;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l9;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l9;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l26=sj1;
si2=3U;
si0=f1012(i,si0,sj1,si2);
l5=si0;
if(si0){
goto L66;
}
si0=0U;
l5=si0;
si0=0U;
l9=si0;
goto L64;
L66:;
si0=l5;
sj1=l26;
si1=(U32)(sj1);
l7=si1;
si0<<=(si1&31);
l9=si0;
si1=l7;
si0>>=(si1&31);
si1=l5;
si0=si0 != si1;
if(si0){
goto L12;
}
L65:;
si0=l9;
si1=1U;
si0<<=(si1&31);
l5=si0;
si0=l9;
si1=1U;
si0>>=(si1&31);
l7=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L63;
}
L64:;
si0=l9;
si1=4U;
si0+=si1;
l6=si0;
goto L62;
L63:;
si0=l7;
si1=l10;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l9;
si1=l7;
si0+=si1;
si1=4U;
si0+=si1;
l6=si0;
goto L62;
L67:;
si0=l5;
si1=4U;
si0+=si1;
l6=si0;
L62:;
si0=8U;
l7=si0;
si0=l6;
si1=l5;
si0+=si1;
l27=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l27;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l27;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l6;
si0=!(si0);
if(si0){
goto L68;
}
si0=l6;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
L68:;
si0=l27;
si1=l9;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l27;
si1=l9;
si0-=si1;
l28=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l5;
si1=l4;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l4;
si1=l9;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l4;
l11=si0;
goto L2;
L61:;
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l18;
si1=1U;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=1256408U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256536U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L69:;
si0=l25;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l25;
si2=1256416U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256520U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L60:;
si0=1257036U;
si1=33U;
si2=1257072U;
f604(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l4;
si1=l9;
si0-=si1;
l11=si0;
si1=l9;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=0U;
l6=si0;
si0=l4;
l10=si0;
si0=l1;
l5=si0;
L70:;
{
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
si1=l5;
si2=l14;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l26=sj0;
sj1=l29;
si0=sj0 < sj1;
l0=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L72;
}
si0=l0;
l6=si0;
goto L71;
L72:;
si0=l0;
sj1=l26;
sj2=1ULL;
sj1+=sj2;
l26=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L71:;
si0=l5;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l9;
si1=l10;
si2=-1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
}
si0=l9;
si1=l11;
si0=si0 == si1;
l30=si0;
if(si0){
goto L74;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L74;
}
si0=l1;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l9;
si1=4U;
si0<<=(si1&31);
si1=l4;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
L75:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L73;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l26;
si0=!(sj0);
if(si0){
goto L75;
}
goto L4;
}
L74:;
si0=l30;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
L73:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l6=si0;
L77:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L76;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l26;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
goto L77;
}
L76:;
si0=1256964U;
si1=55U;
si2=1257020U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=16U;
si1+=si2;
si2=1256372U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256392U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L17:;
si0=1257088U;
si1=56U;
si2=1257144U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=4U;
si1+=si2;
si2=1256408U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256488U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l15;
si2=1256416U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256472U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=1256408U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256456U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=l23;
si1=l20;
si2=1256424U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1261688U;
si1=43U;
si2=1261880U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=1255136U;
si1=35U;
si2=1256584U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1255136U;
si1=35U;
si2=1256584U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1201588U;
si1=35U;
si2=1203200U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=4U;
si1+=si2;
si2=1256408U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256568U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l15;
si2=1256416U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256552U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=0U;
l6=si0;
si0=l4;
l10=si0;
si0=l3;
l5=si0;
L78:;
{
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l29=sj0;
si1=l5;
si2=l14;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l26=sj0;
sj1=l29;
si0=sj0 < sj1;
l0=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L80;
}
si0=l0;
l6=si0;
goto L79;
L80:;
si0=l0;
sj1=l26;
sj2=1ULL;
sj1+=sj2;
l26=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L79:;
si0=l5;
sj1=l26;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l9;
si1=l10;
si2=-1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L78;
}
}
si0=l30;
if(si0){
goto L82;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L82;
}
si0=l3;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
l11=si0;
sj0=l26;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l9;
si1=4U;
si0<<=(si1&31);
si1=l4;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l3;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
L83:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L81;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l26;
si0=!(sj0);
if(si0){
goto L83;
}
}
si0=l9;
l11=si0;
goto L2;
L82:;
si0=l9;
l11=si0;
si0=l30;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
L81:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
l11=si0;
sj0=l26;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l4=si0;
L85:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L84;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l26;
si0=!(sj0);
if(si0){
goto L85;
}
}
si0=l9;
l11=si0;
goto L2;
L84:;
si0=1256892U;
si1=55U;
si2=1256948U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l17;
si0=si0 > si1;
if(si0){
goto L86;
}
si0=l1;
si1=l11;
si2=l3;
si3=l12;
si4=l21;
si5=l19;
si0=f1263(i,si0,si1,si2,si3,si4,si5);
l2=si0;
goto L1;
L86:;
si0=l19;
si1=l17;
si2=1256504U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l18;
si1=l24;
si0=si0 > si1;
if(si0){
goto L89;
}
si0=l7;
si1=l9;
si2=l9;
si3=l1;
si4=l11;
si5=l25;
si6=l18;
si7=l7;
si8=l9;
si9=3U;
si8<<=(si9&31);
l5=si8;
si7+=si8;
l24=si7;
si8=l5;
si7+=si8;
l30=si7;
si8=l28;
si9=l9;
si8-=si9;
l28=si8;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l19;
si1=l17;
si0=si0 > si1;
if(si0){
goto L88;
}
si0=l24;
si1=l9;
si2=l9;
si3=l3;
si4=l11;
si5=l21;
si6=l19;
si7=l30;
si8=l28;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l9;
si1=l11;
si2=l18;
si1+=si2;
l5=si1;
si0=si0 <= si1;
if(si0){
goto L87;
}
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l9;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
goto L87;
L89:;
si0=l18;
si1=l24;
si2=1256600U;
f597(i,si0,si1,si2);
UNREACHABLE;
L88:;
si0=l19;
si1=l17;
si2=1256616U;
f597(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l9;
si1=l11;
si2=l19;
si1+=si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l9;
if(si0){
goto L91;
}
si0=1U;
l10=si0;
goto L90;
L92:;
si0=l24;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l9;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L91:;
si0=l9;
si1=1U;
si0&=si1;
l19=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L94;
}
si0=0U;
l4=si0;
si0=0U;
l6=si0;
goto L93;
L94:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l9;
si1=-2U;
si0&=si1;
l18=si0;
si0=0U;
l4=si0;
si0=l7;
l5=si0;
si0=0U;
l6=si0;
L95:;
{
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
si2=l4;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l5;
si4=l14;
si3+=si4;
l10=si3;
sj3=i64_load(&i->m0,(U64)si3);
l29=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l0=si0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l31=sj1;
sj2=l26;
sj3=l29;
si2=sj2 <= sj3;
sj3=l26;
sj4=l29;
si3=sj3 < sj4;
si4=l4;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l4=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l31;
sj1=l26;
si0=sj0 <= sj1;
sj1=l31;
sj2=l26;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l18;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L95;
}
}
L93:;
si0=l19;
si0=!(si0);
if(si0){
goto L96;
}
si0=l7;
si1=l6;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l6=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
si2=l4;
sj2=(U64)(si2);
si3=l24;
si4=l5;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l29=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l29;
si0=sj0 <= sj1;
sj1=l26;
sj2=l29;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
L96:;
si0=0U;
l10=si0;
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L90;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L90;
}
si0=l7;
si1=8U;
si0+=si1;
l5=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l4=si0;
L98:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L97;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
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
sj0=l26;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L90;
}
goto L98;
}
L97:;
si0=1256788U;
si1=54U;
si2=1256876U;
f604(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l2;
si1=l9;
si0=si0 > si1;
if(si0){
goto L104;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l5=si0;
L106:;
{
si0=l6;
si1=l5;
si0=si0 == si1;
if(si0){
goto L105;
}
si0=l7;
si1=l5;
si0+=si1;
l4=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L106;
}
}
si0=1256728U;
si1=44U;
si2=1256860U;
f604(i,si0,si1,si2);
UNREACHABLE;
L105:;
si0=l23;
si1=l20;
si0=si0 > si1;
if(si0){
goto L103;
}
si0=l24;
si1=l9;
si2=l9;
si3=l1;
si4=l11;
si5=l22;
si6=l23;
si7=l30;
si8=l28;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l2;
si1=l11;
si0=si0 > si1;
if(si0){
goto L102;
}
si0=l1;
si1=l7;
si2=l2;
si3=3U;
si2<<=(si3&31);
l14=si2;
si0=f15143(i,si0,si1,si2);
l18=si0;
si0=l16;
si1=l13;
si0=si0 > si1;
if(si0){
goto L101;
}
si0=l7;
si1=l9;
si2=l9;
si3=l3;
si4=l11;
si5=l15;
si6=l16;
si7=l30;
si8=l28;
f1157(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l9;
si1=l11;
si2=l23;
si1+=si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L100;
}
goto L99;
L104:;
si0=1255136U;
si1=35U;
si2=1256632U;
f604(i,si0,si1,si2);
UNREACHABLE;
L103:;
si0=l23;
si1=l20;
si2=1256648U;
f597(i,si0,si1,si2);
UNREACHABLE;
L102:;
si0=l2;
si1=l11;
si2=1256664U;
f597(i,si0,si1,si2);
UNREACHABLE;
L101:;
si0=l16;
si1=l13;
si2=1256680U;
f597(i,si0,si1,si2);
UNREACHABLE;
L100:;
si0=l24;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l9;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L99:;
si0=l9;
si1=l11;
si2=l16;
si1+=si2;
l5=si1;
si0=si0 <= si1;
if(si0){
goto L107;
}
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l9;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L107:;
si0=l10;
if(si0){
goto L108;
}
si0=l9;
si1=1U;
si0&=si1;
l13=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L110;
}
si0=0U;
l4=si0;
si0=0U;
l1=si0;
goto L109;
L110:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l0=si0;
si0=l9;
si1=-2U;
si0&=si1;
l15=si0;
si0=0U;
l4=si0;
si0=l7;
l5=si0;
si0=0U;
l1=si0;
L111:;
{
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
si2=l4;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l5;
si4=l0;
si3+=si4;
l6=si3;
sj3=i64_load(&i->m0,(U64)si3);
l29=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l31=sj1;
sj2=l26;
sj3=l29;
si2=sj2 <= sj3;
sj3=l26;
sj4=l29;
si3=sj3 < sj4;
si4=l4;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l4=si2;
sj2=(U64)(si2);
si3=l6;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l26=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l31;
sj1=l26;
si0=sj0 <= sj1;
sj1=l31;
sj2=l26;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l15;
si1=l1;
si2=2U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L111;
}
}
L109:;
si0=l13;
si0=!(si0);
if(si0){
goto L112;
}
si0=l7;
si1=l1;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
si2=l4;
sj2=(U64)(si2);
si3=l24;
si4=l5;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l29=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l29;
si0=sj0 <= sj1;
sj1=l26;
sj2=l29;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
L112:;
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L108;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L108;
}
si0=l7;
si1=8U;
si0+=si1;
l5=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l4=si0;
L114:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L113;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
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
sj0=l26;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L108;
}
goto L114;
}
L113:;
si0=1256788U;
si1=54U;
si2=1256844U;
f604(i,si0,si1,si2);
UNREACHABLE;
L108:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l5=si0;
L116:;
{
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L115;
}
si0=l7;
si1=l5;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L116;
}
}
si0=1256728U;
si1=44U;
si2=1256772U;
f604(i,si0,si1,si2);
UNREACHABLE;
L115:;
si0=l3;
si1=l7;
si2=l14;
si0=f15143(i,si0,si1,si2);
l9=si0;
si0=l12;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L118;
}
si0=l18;
si1=l12;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l5=si0;
si0=l9;
si1=l4;
si0+=si1;
l9=si0;
L119:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L117;
}
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L119;
}
}
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=20U;
si1+=si2;
si2=1256372U;
si3=l8;
si4=24U;
si3+=si4;
si4=1256712U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L118:;
si0=l12;
si1=l11;
si2=1256696U;
f594(i,si0,si1,si2);
UNREACHABLE;
L117:;
si0=l27;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15024(i,si0);
L1:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f1261(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L11;
}
L12:;
si0=0U;
l8=si0;
si0=l3;
si1=3U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
si1=-1U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l7;
si1=l3;
si2=1U;
si1>>=(si2&31);
l9=si1;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=103U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
sj0=0ULL;
l11=sj0;
si0=l0;
l9=si0;
si0=l3;
l12=si0;
si0=l2;
l13=si0;
si0=0U;
l14=si0;
L19:;
{
si0=l12;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l12;
si1=l10;
si2=1U;
si1<<=(si2&31);
l15=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=l12;
si2=l13;
si3=l12;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l1=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si1=l12;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=6U;
si0<<=(si1&31);
l16=si0;
sj1=l11;
si1=(U32)(sj1);
si2=1U;
si1<<=(si2&31);
l17=si1;
si0+=si1;
l18=si0;
si1=64U;
si0+=si1;
si1=l10;
si2=7U;
si1<<=(si2&31);
l19=si1;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l1;
l12=si0;
goto L20;
L25:;
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
si0=l13;
si1=l10;
si2=1U;
si1+=si2;
l20=si1;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
l21=si0;
si0=l9;
si1=l18;
si0+=si1;
l22=si0;
si0=l20;
si1=l1;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l20;
si1=l1;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
l18=si0;
si0=l22;
l12=si0;
L30:;
{
si0=l18;
si0=!(si0);
if(si0){
goto L29;
}
si0=l18;
si1=-8U;
si0+=si1;
l18=si0;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L30;
}
}
si0=l21;
l18=si0;
L31:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L29;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L31;
}
goto L23;
}
L29:;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l1;
l12=si0;
goto L26;
L28:;
sj0=l11;
sj1=-1ULL;
sj0+=sj1;
l11=sj0;
si0=l10;
l20=si0;
goto L22;
L27:;
si0=l10;
si1=-1U;
si0^=si1;
si1=3U;
si0<<=(si1&31);
l17=si0;
si0=l1;
l12=si0;
L32:;
{
si0=l12;
l18=si0;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l18;
si1=l15;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=l18;
si2=l13;
si3=l18;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l12=si0;
if(si0){
goto L33;
}
si0=l7;
si1=l18;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l8=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
goto L2;
L33:;
si0=l12;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l12;
l1=si0;
si0=l18;
l12=si0;
goto L6;
L34:;
si0=l12;
si1=6U;
si0<<=(si1&31);
l16=si0;
si1=64U;
si0+=si1;
si1=l19;
si0=si0 <= si1;
if(si0){
goto L35;
}
sj0=0ULL;
l11=sj0;
goto L20;
L35:;
si0=l20;
si1=l12;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l20;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L37;
}
si0=l12;
l1=si0;
goto L21;
L37:;
si0=l17;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
l1=si0;
si0=l22;
l18=si0;
L38:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L36;
}
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l18;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l18;
si1=8U;
si0+=si1;
l18=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L38;
}
}
si0=l21;
l1=si0;
L39:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L36;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L39;
}
}
si0=0U;
l17=si0;
si0=l12;
l1=si0;
goto L23;
L36:;
si0=l12;
si1=2U;
si0=si0 > si1;
if(si0){
goto L32;
}
}
L26:;
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l8=si0;
si0=l10;
if(si0){
goto L7;
}
goto L17;
L24:;
si0=1258512U;
si1=23U;
si2=1259096U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l17;
si1=l16;
si0+=si1;
l18=si0;
sj0=63ULL;
l11=sj0;
L22:;
si0=l1;
si1=l19;
si2=l18;
si1-=si2;
si2=6U;
si1>>=(si2&31);
l18=si1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l20;
si1=l18;
si0-=si1;
l10=si0;
si0=l1;
si1=l18;
si0-=si1;
l12=si0;
si0=l18;
si1=l14;
si0+=si1;
l14=si0;
si0=l13;
si1=l18;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l13=si0;
si0=l9;
si1=l1;
si0+=si1;
l9=si0;
goto L20;
L40:;
si0=l18;
si1=l1;
si2=1259064U;
f593(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l20;
si1=l1;
si2=1259048U;
f593(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1U;
l8=si0;
si0=l12;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L19;
}
}
L18:;
si0=l7;
si1=l14;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
sj0=l11;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l14;
if(si0){
goto L41;
}
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
si1=l7;
si2=12U;
si1+=si2;
si2=1256372U;
si3=l7;
si4=16U;
si3+=si4;
si4=1258844U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L41:;
si0=l3;
si1=l14;
si2=-1U;
si1+=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l12;
si1=1U;
si0+=si1;
l9=si0;
si1=l3;
si2=l1;
si1-=si2;
l3=si1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l18=si0;
si0=l0;
si1=l1;
si0+=si1;
l1=si0;
si0=l1;
si1=l1;
si2=8U;
si1+=si2;
si2=l12;
sj3=64ULL;
sj4=l11;
sj3-=sj4;
l11=sj3;
sj1=f1026(i,si1,si2,sj3);
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si1=l18;
si2=8U;
si1+=si2;
si2=l12;
sj3=l11;
sj1=f1026(i,si1,si2,sj3);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l1;
si1=l12;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L42;
}
si0=l9;
l12=si0;
goto L8;
L43:;
si0=l12;
si1=l3;
si2=1258908U;
f594(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l18;
si1=l13;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
goto L8;
L17:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
si1=l7;
si2=8U;
si1+=si2;
si2=1256372U;
si3=l7;
si4=16U;
si3+=si4;
si4=1258828U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=l1;
si1=l3;
si2=1258860U;
f593(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l9;
si1=l3;
si2=1258876U;
f597(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1255316U;
si1=43U;
si2=1258892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l9;
l12=si0;
goto L8;
L11:;
si0=1256144U;
si1=50U;
si2=1259172U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
si1=l7;
si2=4U;
si1+=si2;
si2=1256372U;
si3=l7;
si4=16U;
si3+=si4;
si4=1258568U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si1=l7;
si2=12U;
si1+=si2;
si2=l7;
si3=4U;
si2+=si3;
si3=l7;
si4=16U;
si3+=si4;
si4=1259188U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L46;
}
si0=l10;
si1=1U;
si0<<=(si1&31);
l8=si0;
L47:;
{
si0=l12;
si1=3U;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l12;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L49;
}
si0=l12;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L48;
}
si0=1258648U;
si1=29U;
si2=1258956U;
f604(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=1258512U;
si1=23U;
si2=1258972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l12;
si1=l3;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l1;
si1=l12;
si2=l18;
si3=l12;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l12=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L47;
}
L46:;
si0=1258988U;
si1=25U;
si2=1259016U;
f604(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l12;
si1=l3;
si2=1258940U;
f597(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=1U;
l8=si0;
L7:;
si0=l12;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=l7;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
si2=l2;
sj2=i64_load(&i->m0,(U64)si2+8U);
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
si4=l7;
si5=16U;
si4+=si5;
si0=f1268(i,sj0,sj1,sj2,sj3,si4);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l7;
si2=16U;
si1+=si2;
si2=l5;
si3=l6;
f1271(i,si0,si1,si2,si3);
goto L3;
L50:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si1=l7;
si2=8U;
si1+=si2;
si2=1256408U;
si3=l7;
si4=16U;
si3+=si4;
si4=1258924U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l1;
si1=l12;
si2=1259032U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1258648U;
si1=29U;
si2=1259080U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
l1=si0;
si0=l4;
si1=l0;
si2=l3;
si3=l2;
si4=l3;
si5=l9;
si6=l5;
si7=l6;
si0=f1260(i,si0,si1,si2,si3,si4,si5,si6,si7);
l18=si0;
si0=!(si0);
if(si0){
goto L53;
}
si0=l18;
l1=si0;
si0=l18;
si1=l3;
si0=si0 > si1;
if(si0){
goto L52;
}
L53:;
si0=l18;
si1=0U;
si0=si0 != si1;
l8=si0;
si0=l1;
si1=l3;
si2=3U;
si1*=si2;
si2=2U;
si1>>=(si2&31);
si2=1U;
si1+=si2;
l12=si1;
si0=si0 <= si1;
if(si0){
goto L51;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l18=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l18;
si1=l1;
si0=si0 > si1;
if(si0){
goto L54;
}
L55:;
{
si0=l18;
l1=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=1U;
l8=si0;
goto L51;
L56:;
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l18=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l18;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L55;
}
}
L54:;
si0=l18;
si1=l1;
si2=1258812U;
f597(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l18;
si1=l3;
si2=1258584U;
f597(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l10;
si1=1U;
si0<<=(si1&31);
l12=si0;
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
si2=3U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L57;
}
si0=l6;
si1=l1;
si2=l12;
si3=l1;
si2-=si3;
si3=1U;
si2+=si3;
l20=si2;
si1-=si2;
l9=si1;
si2=1U;
si1<<=(si2&31);
si2=2U;
si1+=si2;
si2=-4U;
si1&=si2;
si2=4U;
si1+=si2;
l18=si1;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l9;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l19=si0;
si1=1U;
si0+=si1;
l3=si0;
si1=2U;
si0<<=(si1&31);
l13=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L62;
}
si0=l13;
si0=!(si0);
if(si0){
goto L64;
}
si0=l5;
si1=0U;
si2=l3;
si3=5U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L64:;
si0=l19;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=3U;
si0*=si1;
l13=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L60;
}
si0=l13;
si1=l18;
si0=si0 == si1;
if(si0){
goto L59;
}
si0=l7;
si1=l13;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l18;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l3;
si2=1U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l20;
si0=si0 < si1;
if(si0){
goto L58;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l9;
si2=l2;
si3=l3;
si2+=si3;
si3=l9;
si4=l7;
si5=16U;
si4+=si5;
si5=l5;
si6=l18;
si7=3U;
si6<<=(si7&31);
si5+=si6;
l3=si5;
si6=l6;
si7=l18;
si6-=si7;
l18=si6;
si0=f1261(i,si0,si1,si2,si3,si4,si5,si6);
si0=!(si0);
if(si0){
goto L57;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=2U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+36U);
l12=si1;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l12;
si1=l1;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=l4;
si1=l7;
si2=16U;
si1+=si2;
si2=l3;
si3=l18;
f1272(i,si0,si1,si2,si3);
si0=1U;
l8=si0;
goto L2;
L66:;
si0=1258764U;
si1=32U;
si2=1258796U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=1258712U;
si1=33U;
si2=1258748U;
f604(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=1255136U;
si1=35U;
si2=1258600U;
f604(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l13;
si1=l18;
si2=1259988U;
f597(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l3;
si1=l18;
si2=1259908U;
f597(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l13;
si1=l18;
si2=1259956U;
f593(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=0U;
si1=0U;
si2=1260004U;
f594(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l20;
si1=l1;
si2=1258616U;
f593(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l1;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L68;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l18=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l18;
si1=l1;
si0=si0 > si1;
if(si0){
goto L69;
}
L70:;
{
si0=l18;
l1=si0;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L68;
}
si0=l1;
si1=l12;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l18=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l18;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L70;
}
}
L69:;
si0=l18;
si1=l1;
si2=1258632U;
f597(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=1258512U;
si1=23U;
si2=1258696U;
f604(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1258648U;
si1=29U;
si2=1258680U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1U;
l8=si0;
L2:;
si0=l7;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l8;
si1=1U;
si0&=si1;
goto L0;
L1:;
si0=1259112U;
si1=42U;
si2=1259156U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1262(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
l8=si0;
si0=l3;
si1=1U;
si0>>=(si1&31);
l9=si0;
si1=1U;
si0+=si1;
l10=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l2;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L14;
}
L16:;
si0=l3;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
si1=-1U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=0U;
l11=si0;
si0=l3;
l1=si0;
si0=l3;
si1=100U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l4;
si1=l0;
si2=l3;
si3=l2;
si4=l3;
si5=l9;
si6=l5;
si7=l6;
si0=f1260(i,si0,si1,si2,si3,si4,si5,si6,si7);
l8=si0;
si1=l3;
si2=l8;
si0=si2?si0:si1;
l1=si0;
si1=l3;
si2=3U;
si1*=si2;
si2=2U;
si1>>=(si2&31);
si2=1U;
si1+=si2;
l11=si1;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l8;
si1=0U;
si0=si0 != si1;
l12=si0;
goto L17;
L19:;
si0=1259112U;
si1=42U;
si2=1259300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l12=si0;
si0=l1;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l1;
l8=si0;
L20:;
{
si0=l8;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l8;
l1=si0;
goto L5;
L21:;
si0=l0;
si1=l8;
si2=l2;
si3=l8;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
l8=si0;
si0=l1;
si1=l11;
si0=si0 > si1;
if(si0){
goto L20;
}
}
L17:;
si0=l1;
si1=l9;
si2=3U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l6;
si1=l1;
si2=l10;
si3=1U;
si2<<=(si3&31);
si3=l1;
si2-=si3;
si3=1U;
si2+=si3;
l11=si2;
si1-=si2;
l13=si1;
si2=1U;
si1<<=(si2&31);
si2=2U;
si1+=si2;
si2=-4U;
si1&=si2;
si2=4U;
si1+=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l13;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l14=si0;
si1=1U;
si0+=si1;
l9=si0;
si1=2U;
si0<<=(si1&31);
l15=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l15;
si0=!(si0);
if(si0){
goto L22;
}
si0=l5;
si1=0U;
si2=l9;
si3=5U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L22:;
si0=l14;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=3U;
si0*=si1;
l15=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l15;
si1=l8;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=l15;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l7;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l9;
si2=1U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l11;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l13;
si2=l2;
si3=l9;
si2+=si3;
si3=l13;
si4=l7;
si5=8U;
si4+=si5;
si5=l5;
si6=l8;
si7=3U;
si6<<=(si7&31);
si5+=si6;
l9=si5;
si6=l6;
si7=l8;
si6-=si7;
l8=si6;
si0=f1262(i,si0,si1,si2,si3,si4,si5,si6);
l13=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si1=2U;
si0+=si1;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l12=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l12;
si1=l1;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l7;
si1=8U;
si0+=si1;
si1=l13;
si2=l11;
si1+=si2;
si2=l0;
si3=l3;
si4=l2;
si5=l3;
si6=l11;
si7=l9;
si8=l8;
si0=f1259(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l1=si0;
si0=l4;
si1=l7;
si2=8U;
si1+=si2;
si2=l9;
si3=l8;
f1272(i,si0,si1,si2,si3);
si0=1U;
l12=si0;
goto L4;
L23:;
si0=1258712U;
si1=33U;
si2=1259252U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l7;
si2=4U;
si1+=si2;
si2=l7;
si3=l7;
si4=8U;
si3+=si4;
si4=1259332U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=1256144U;
si1=50U;
si2=1259316U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1255136U;
si1=35U;
si2=1259204U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l15;
si1=l8;
si2=1259988U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l9;
si1=l8;
si2=1259908U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l15;
si1=l8;
si2=1259956U;
f593(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=0U;
si1=0U;
si2=1260004U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l11;
si1=l1;
si2=1259220U;
f683(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l3;
si2=1259220U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1258764U;
si1=32U;
si2=1259268U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l3;
si2=1259284U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=l1;
l8=si0;
goto L1;
L24:;
si0=l12;
si1=0U;
si0=si0 != si1;
l11=si0;
L3:;
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l8=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l8;
l1=si0;
L27:;
{
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1270(i,si0,si1,si2,si3,si4,si5,si6,si7);
l8=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l8;
l1=si0;
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
goto L27;
}
L26:;
si0=0U;
l8=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L2;
}
L25:;
si0=l1;
l8=si0;
L2:;
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l8;
goto L0;
L1:;
si0=l8;
si1=l3;
si2=1259236U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1263(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 l17=0;
U64 l18=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
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
goto L10;
}
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l5;
si1=l3;
si0+=si1;
l7=si0;
si1=l1;
si2=1U;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=8U;
l8=si0;
si0=8U;
l9=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
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
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=8U;
l9=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
L11:;
si0=l3;
si1=l5;
si0=f1126(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l11;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l11;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l10;
si0=!(si0);
if(si0){
goto L12;
}
si0=l10;
si1=1U;
si0=f15026(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
L12:;
si0=l9;
si1=l7;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l8;
si7=l11;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l7;
si1=l1;
si0=si0 > si1;
l5=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
L15:;
si0=l7;
si1=l5;
si0-=si1;
l12=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l12;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l12;
si0=!(si0);
if(si0){
goto L16;
}
si0=l12;
si1=1U;
si0&=si1;
l13=si0;
si0=l7;
si1=-1U;
si2=0U;
si3=l5;
si1=si3?si1:si2;
si0+=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=0U;
l2=si0;
si0=0U;
l10=si0;
goto L17;
L18:;
si0=l12;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l2=si0;
si0=l9;
l4=si0;
si0=l0;
l5=si0;
si0=0U;
l10=si0;
L19:;
{
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l2;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l17=si0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l15;
sj3=l16;
si2=sj2 <= sj3;
sj3=l15;
sj4=l16;
si3=sj3 < sj4;
si4=l2;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l2=si2;
sj2=(U64)(si2);
si3=l4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l15;
si0=sj0 <= sj1;
sj1=l18;
sj2=l15;
si1=sj1 < sj2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l14;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L17:;
si0=l13;
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l2;
sj2=(U64)(si2);
si3=l9;
si4=l5;
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
si2=l2;
si0=si2?si0:si1;
l2=si0;
L20:;
si0=l12;
si1=l1;
si0=si0 == si1;
l5=si0;
if(si0){
goto L21;
}
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l12;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l4=si0;
si0=l5;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
L22:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
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
sj0=l15;
si0=!(sj0);
if(si0){
goto L22;
}
goto L16;
}
L21:;
si0=l5;
si1=l2;
si0&=si1;
if(si0){
goto L13;
}
L16:;
si0=l3;
si1=l1;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l4=si0;
si0=l1;
l5=si0;
L24:;
{
si0=l5;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L23;
}
si0=l5;
si1=-1U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l2;
l5=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L24;
}
}
si0=l2;
si1=1U;
si0+=si1;
l10=si0;
L23:;
si0=l11;
si0=!(si0);
if(si0){
goto L25;
}
si0=l8;
f15024(i,si0);
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L26;
}
si0=l9;
f15024(i,si0);
L26:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l10;
goto L0;
L14:;
si0=1257400U;
si1=61U;
si2=1257464U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1257304U;
si1=80U;
si2=1257384U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l6;
si2=4U;
si1+=si2;
si2=1256372U;
si3=l6;
si4=8U;
si3+=si4;
si4=1257256U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1257588U;
si1=34U;
si2=1257624U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1257536U;
si1=35U;
si2=1257572U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=8U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1257480U;
si1=40U;
si2=1257520U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=l7;
si2=1257272U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1201588U;
si1=35U;
si2=1203492U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=-1U;
si0+=si1;
si1=l1;
si2=1257288U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1264(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=224U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+164U,si1);
si0=l7;
si1=l6;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l2;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l6;
si1=1U;
si0&=si1;
l9=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
l10=si0;
sj0=0ULL;
l11=sj0;
goto L5;
L7:;
si0=-1U;
si1=0U;
si2=1257640U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l6;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l10=si0;
si0=l3;
l4=si0;
si0=l1;
l2=si0;
sj0=0ULL;
l11=sj0;
L8:;
{
si0=l7;
si1=128U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+128U);
l13=sj1;
sj2=l11;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=144U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=8U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+144U);
l11=sj1;
si2=l7;
si3=128U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l7;
si1=144U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l13;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
si0=l12;
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
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=112U;
si0+=si1;
si1=l3;
si2=l10;
si3=3U;
si2<<=(si3&31);
l4=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l4;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+112U);
l8=sj1;
sj2=l11;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=120U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l13;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l11=sj0;
L9:;
si0=l7;
sj1=l11;
i64_store(&i->m0,(U64)si0+168U,sj1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l15=sj0;
si0=0U;
l4=si0;
si0=l6;
l2=si0;
sj0=0ULL;
l8=sj0;
L10:;
{
si0=l7;
si1=96U;
si0+=si1;
si1=l5;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l15;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l4;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l8;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3+96U);
sj2+=sj3;
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l8;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l14;
sj2=l13;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L10;
}
}
si0=l7;
sj1=l8;
i64_store(&i->m0,(U64)si0+176U,sj1);
sj0=l8;
sj1=l11;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l6;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l4=si0;
si1=1U;
si0+=si1;
l10=si0;
si1=3U;
si0&=si1;
l2=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L12;
}
sj0=0ULL;
l14=sj0;
si0=l5;
l4=si0;
goto L11;
L12:;
si0=l10;
si1=1073741820U;
si0&=si1;
l10=si0;
sj0=0ULL;
l14=sj0;
si0=l5;
l4=si0;
L13:;
{
si0=l7;
si1=32U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+32U);
l13=sj1;
sj2=l14;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=80U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+80U);
l11=sj1;
si2=l7;
si3=32U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l14;
sj4=l13;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=64U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+64U);
l14=sj1;
si2=l7;
si3=80U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l13;
sj4=l11;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=48U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
l12=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+48U);
l11=sj1;
si2=l7;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l13;
sj4=l14;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
l4=si0;
si0=l7;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l13;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l14=sj0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L13;
}
}
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L14;
}
L15:;
{
si0=l7;
si1=16U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+16U);
l13=sj1;
sj2=l14;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l7;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l14;
sj2=l13;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l14=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l7;
sj1=l14;
i64_store(&i->m0,(U64)si0+184U,sj1);
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l15=sj0;
si0=l5;
l4=si0;
si0=l6;
l2=si0;
sj0=0ULL;
l8=sj0;
L16:;
{
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l15;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
sj2=l8;
si3=l7;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=l8;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l11;
sj2=l13;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l3;
si1=8U;
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
si0=l7;
sj1=l8;
i64_store(&i->m0,(U64)si0+192U,sj1);
sj0=l8;
sj1=l14;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si1=l6;
si2=-1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l4;
si1=l6;
si2=l5;
si3=l3;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l6=si0;
L17:;
si0=l7;
si1=224U;
si0+=si1;
i->g0=si0;
si0=l6;
goto L0;
L4:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=0U;
si1=l7;
si2=192U;
si1+=si2;
si2=l7;
si3=164U;
si2+=si3;
si3=l7;
si4=200U;
si3+=si4;
si4=1257704U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=0U;
si1=l7;
si2=192U;
si1+=si2;
si2=l7;
si3=164U;
si2+=si3;
si3=l7;
si4=200U;
si3+=si4;
si4=1257688U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=0U;
si1=l7;
si2=168U;
si1+=si2;
si2=l7;
si3=176U;
si2+=si3;
si3=l7;
si4=200U;
si3+=si4;
si4=1257672U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=0U;
si1=l7;
si2=184U;
si1+=si2;
si2=l7;
si3=192U;
si2+=si3;
si3=l7;
si4=200U;
si3+=si4;
si4=1257656U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f1265(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U64 l20=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L14;
}
L15:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l9;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l10=si0;
si0=0U;
l9=si0;
L17:;
{
si0=l0;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L17;
}
}
si0=l10;
l9=si0;
L16:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=l9;
si0-=si1;
l11=si0;
si0=0U;
l12=si0;
L19:;
{
si0=l2;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L19;
}
}
si0=l10;
l12=si0;
L18:;
si0=l3;
si1=l9;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=l12;
si0-=si1;
l13=si0;
si0=l3;
si1=l12;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=-1U;
si1=l12;
si2=l9;
si1=si1 != si2;
l1=si1;
si2=l11;
si3=l13;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L11;
default:
goto L12;
}
L14:;
si0=1258096U;
si1=48U;
si2=1258144U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l8;
si1=l11;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l13;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
if(si0){
goto L22;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l0;
si1=-8U;
si0+=si1;
l10=si0;
si0=l2;
si1=-8U;
si0+=si1;
l14=si0;
L23:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si1=l1;
si0+=si1;
l9=si0;
si0=l14;
si1=l1;
si0+=si1;
l12=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=-1U;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
si1=sj1 != sj2;
sj2=l15;
sj3=l16;
si2=sj2 > sj3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L23;
}
goto L20;
}
L22:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=l8;
si3=20U;
si2+=si3;
si3=l8;
si4=24U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L21:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L20:;
si0=l9;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
default:
goto L12;
}
L12:;
si0=0U;
l17=si0;
si0=l11;
l18=si0;
si0=l2;
l14=si0;
goto L3;
L11:;
si0=1U;
l17=si0;
si0=l13;
l18=si0;
si0=l0;
l14=si0;
si0=l2;
l0=si0;
si0=l11;
l13=si0;
goto L3;
L10:;
si0=1U;
l17=si0;
si0=l11;
l18=si0;
si0=l0;
l14=si0;
si0=l2;
l0=si0;
goto L3;
L9:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
goto L2;
L8:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=20U;
si1+=si2;
si2=l8;
si3=8U;
si2+=si3;
si3=l8;
si4=24U;
si3+=si4;
si4=1258176U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=8U;
si1+=si2;
si2=1256372U;
si3=l8;
si4=24U;
si3+=si4;
si4=1258160U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l11;
si1=l3;
si2=1257720U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l13;
si1=l3;
si2=1257736U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1258224U;
si1=29U;
si2=1258256U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l18;
si1=l4;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l4;
if(si0){
goto L2;
}
si0=1258224U;
si1=29U;
si2=1258256U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l18;
si1=l13;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l18;
si1=1U;
si0&=si1;
l19=si0;
si0=l18;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=0U;
l12=si0;
si0=0U;
l2=si0;
goto L25;
L27:;
si0=1201588U;
si1=35U;
si2=1203492U;
f604(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l18;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l12=si0;
si0=l0;
l9=si0;
si0=l14;
l1=si0;
si0=0U;
l2=si0;
L28:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l9;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l15;
sj3=l16;
si2=sj2 <= sj3;
sj3=l15;
sj4=l16;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
si3=l9;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l15;
si0=sj0 <= sj1;
sj1=l20;
sj2=l15;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=l2;
si2=2U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
}
L25:;
si0=l19;
si0=!(si0);
if(si0){
goto L29;
}
si0=l14;
si1=l2;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l12;
sj2=(U64)(si2);
si3=l0;
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
si2=l12;
si0=si2?si0:si1;
l12=si0;
L29:;
si0=l14;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l13;
si1=l18;
si0=si0 == si1;
l1=si0;
if(si0){
goto L32;
}
si0=l12;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L30;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l18;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l1;
si1=l14;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L33:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L31;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L33;
}
goto L30;
}
L32:;
si0=l1;
si1=l12;
si0&=si1;
si0=!(si0);
if(si0){
goto L30;
}
L31:;
si0=1258012U;
si1=68U;
si2=1258080U;
f604(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l13;
if(si0){
goto L35;
}
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L34;
L35:;
si0=l13;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l13;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l12=si0;
L37:;
{
si0=l14;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L36;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L37;
}
}
si0=l9;
l12=si0;
L36:;
si0=l8;
si1=l13;
si2=l12;
si1-=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l12;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l9;
si0=!(si0);
if(si0){
goto L34;
}
si0=l9;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L54;
}
si0=-1U;
si1=l18;
si2=l9;
si1=si1 != si2;
l1=si1;
si2=l18;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L52;
case 1:
goto L51;
default:
goto L53;
}
L54:;
si0=l18;
si1=l3;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l14;
si1=l9;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l0;
si2=l1;
si1+=si2;
si2=l18;
si3=l9;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=0U;
l2=si0;
si0=l14;
l1=si0;
L55:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l16;
si0=sj0 < sj1;
l10=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L57;
}
si0=l10;
l2=si0;
goto L56;
L57:;
si0=l10;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l2=si0;
L56:;
si0=l1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L55;
}
}
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=l6;
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
si0=l18;
si1=3U;
si0<<=(si1&31);
si1=l12;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l13;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l0=si0;
si0=l9;
si1=l1;
si0-=si1;
si1=l14;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L58:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l15;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
goto L58;
}
L53:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l8;
si2=24U;
si1+=si2;
si2=1U;
si3=l17;
si4=l8;
si5=32U;
si4+=si5;
si5=0U;
f1266(i,si0,si1,si2,si3,si4,si5);
si0=l18;
l11=si0;
si0=l14;
l19=si0;
goto L38;
L52:;
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
if(si0){
goto L61;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l1=si0;
L62:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L60;
}
si0=-1U;
si1=l1;
si2=-8U;
si1+=si2;
l1=si1;
si2=l14;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l1;
si3=l0;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
si1=sj1 != sj2;
sj2=l15;
sj3=l16;
si2=sj2 > sj3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L62;
}
goto L59;
}
L61:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=l8;
si3=20U;
si2+=si3;
si3=l8;
si4=24U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L60:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L59:;
si0=l9;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L48;
case 1:
goto L49;
default:
goto L50;
}
L51:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l8;
si2=24U;
si1+=si2;
si2=1U;
si3=l17;
si4=l8;
si5=32U;
si4+=si5;
si5=0U;
f1266(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l3;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l18;
si1=l3;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l17;
si1=1U;
si0^=si1;
l17=si0;
si0=l9;
l11=si0;
goto L39;
L50:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l8;
si2=24U;
si1+=si2;
si2=1U;
si3=l17;
si4=l8;
si5=32U;
si4+=si5;
si5=0U;
f1266(i,si0,si1,si2,si3,si4,si5);
goto L40;
L49:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l8;
si2=24U;
si1+=si2;
si2=1U;
si3=l17;
si4=l8;
si5=32U;
si4+=si5;
si5=0U;
f1266(i,si0,si1,si2,si3,si4,si5);
si0=l18;
si1=l3;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l17;
si1=1U;
si0^=si1;
l17=si0;
si0=l18;
l11=si0;
goto L39;
L48:;
si0=l4;
si0=!(si0);
if(si0){
goto L41;
}
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l8;
si2=24U;
si1+=si2;
si2=1U;
si3=l17;
si4=l8;
si5=32U;
si4+=si5;
l1=si4;
si5=0U;
f1266(i,si0,si1,si2,si3,si4,si5);
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l8;
si2=24U;
si1+=si2;
si2=1U;
si3=l17;
si4=l1;
si5=0U;
f1266(i,si0,si1,si2,si3,si4,si5);
goto L40;
L47:;
si0=l18;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L63;
}
si0=l11;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L63:;
si0=l18;
si1=l3;
si2=1257980U;
f594(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l9;
si1=l13;
si2=1257752U;
f597(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=1203132U;
si1=36U;
si2=1203168U;
f604(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l9;
si1=l3;
si2=1257784U;
f597(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l18;
si1=l3;
si2=1257800U;
f597(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l18;
si1=l3;
si2=1257768U;
f597(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=1258224U;
si1=29U;
si2=1258256U;
f604(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l18;
l11=si0;
si0=l14;
l19=si0;
si0=l18;
l9=si0;
goto L38;
L39:;
si0=l0;
l19=si0;
si0=l18;
l9=si0;
si0=l14;
l0=si0;
L38:;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l19;
si1=l6;
si2=l7;
si3=l19;
si4=l9;
sj5=l15;
sj1=f1173(i,si1,si2,si3,si4,sj5);
i64_store(&i->m0,(U64)si0,sj1);
goto L71;
L73:;
sj0=l15;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L70;
}
si0=l7;
si0=!(si0);
if(si0){
goto L74;
}
si0=l6;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l15;
sj1=DIV_U(sj1,sj2);
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
sj1=l16;
sj2=l20;
sj3=l15;
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L71;
L74:;
si0=0U;
si1=0U;
si2=1257816U;
f594(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l6;
si1=l7;
si2=l19;
si3=l9;
si4=l0;
si5=l11;
f1185(i,si0,si1,si2,si3,si4,si5);
L71:;
si0=l9;
si1=l11;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l9;
si1=l11;
si0-=si1;
l18=si0;
si0=l11;
if(si0){
goto L76;
}
si0=0U;
l12=si0;
goto L75;
L76:;
si0=l19;
si1=-8U;
si0+=si1;
l2=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l11;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l10=si0;
si0=0U;
l12=si0;
L77:;
{
si0=l2;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L75;
}
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L77;
}
}
si0=l10;
l12=si0;
L75:;
si0=l18;
si1=1U;
si0+=si1;
l13=si0;
si0=l11;
l10=si0;
si0=l11;
si1=l12;
si0-=si1;
l1=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L64;
}
si0=l4;
si0=!(si0);
if(si0){
goto L68;
}
si0=l11;
si1=l12;
si0=si0 != si1;
if(si0){
goto L78;
}
si0=l11;
si1=l3;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l19;
si1=l0;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l11;
l10=si0;
goto L65;
L78:;
si0=l11;
si1=l3;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=l11;
si1=l12;
si0=si0 < si1;
if(si0){
goto L81;
}
si0=l19;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l0;
si2=l1;
si1+=si2;
si2=l12;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l4=si0;
si0=0U;
l2=si0;
si0=l11;
l10=si0;
si0=l19;
l1=si0;
L82:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l16;
si0=sj0 < sj1;
l14=si0;
si0=l2;
si1=255U;
si0&=si1;
if(si0){
goto L84;
}
si0=l14;
l2=si0;
goto L83;
L84:;
si0=l14;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l2=si0;
L83:;
si0=l1;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l12;
si1=l10;
si2=-1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L82;
}
}
si0=l12;
si0=!(si0);
if(si0){
goto L80;
}
si0=l2;
si1=1U;
si0^=si1;
if(si0){
goto L80;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
l10=si0;
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L65;
}
si0=l19;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=8U;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
L85:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L79;
}
si0=l2;
si1=l1;
si0+=si1;
l0=si0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L85;
}
}
si0=l11;
l10=si0;
goto L65;
L81:;
si0=1203080U;
si1=34U;
si2=1203116U;
f604(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=l11;
l10=si0;
si0=l12;
si0=!(si0);
si1=l2;
si0&=si1;
si0=!(si0);
if(si0){
goto L65;
}
L79:;
si0=l11;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L86;
}
si0=l19;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=1U;
si0+=si1;
l10=si0;
goto L65;
L86:;
si0=l11;
si1=l3;
si2=1257864U;
f594(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=1217440U;
si1=25U;
si2=1217424U;
f604(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l11;
si1=l9;
si2=1257832U;
f597(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=1258224U;
si1=29U;
si2=1258256U;
f604(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=l11;
si1=l3;
si2=1257848U;
f597(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1203132U;
si1=36U;
si2=1203168U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L87;
}
si0=l13;
si0=!(si0);
if(si0){
goto L88;
}
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L64;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l11;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l0=si0;
si0=l6;
si1=8U;
si0+=si1;
l1=si0;
L89:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l15;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L64;
}
goto L89;
}
L88:;
si0=1257896U;
si1=65U;
si2=1257964U;
f604(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l13;
si1=l7;
si2=1257880U;
f597(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l13;
si1=l7;
si0=si0 > si1;
if(si0){
goto L91;
}
si0=l13;
if(si0){
goto L93;
}
si0=0U;
l0=si0;
goto L92;
L93:;
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l11;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l18;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l0=si0;
L94:;
{
si0=l6;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L92;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=-8U;
si0=si0 != si1;
if(si0){
goto L94;
}
}
si0=l9;
l0=si0;
L92:;
si0=l13;
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l13;
si2=l0;
si1-=si2;
l1=si1;
si0=si0 < si1;
if(si0){
goto L90;
}
si0=l5;
si1=l6;
si2=l1;
si3=l17;
si4=l6;
si5=l1;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l7;
si6=l1;
si5-=si6;
f1266(i,si0,si1,si2,si3,si4,si5);
goto L1;
L91:;
si0=l13;
si1=l7;
si2=1258192U;
f597(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=1255136U;
si1=35U;
si2=1258208U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=12U;
si1+=si2;
si2=1256372U;
si3=l8;
si4=24U;
si3+=si4;
si4=1257996U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=0U;
l10=si0;
L1:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l10;
L0:;
return si0;
}

void f1266(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U64 l24=0;
U64 l25=0;
U64 l26=0;
U64 l27=0;
U64 l28=0;
U64 l29=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=240U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l2;
si0+=si1;
l8=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l9=si1;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l3;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=1U;
si1=l3;
si0-=si1;
l10=si0;
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l11=si0;
si0=l7;
si1=l8;
si2=l7;
si3=l8;
si2=si2 < si3;
si0=si2?si0:si1;
l12=si0;
si1=l2;
si0-=si1;
l13=si0;
si0=l7;
l14=si0;
L32:;
{
si0=l14;
l8=si0;
si1=l2;
si0+=si1;
l15=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l12;
l15=si0;
si0=l13;
l8=si0;
goto L31;
L33:;
si0=l8;
si0=!(si0);
if(si0){
goto L28;
}
si0=l6;
si1=200U;
si0+=si1;
si1=l0;
si2=0U;
si3=l10;
f1274(i,si0,si1,si2,si3);
si0=l8;
si1=-1U;
si0+=si1;
l14=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+204U);
l16=si1;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+200U);
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l6;
si1=192U;
si0+=si1;
si1=l0;
si2=1U;
si3=l10;
f1274(i,si0,si1,si2,si3);
si0=l14;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+196U);
l16=si1;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+192U);
si1=l11;
si0+=si1;
l16=si0;
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L32;
}
}
L31:;
si0=l15;
si1=l9;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l8;
if(si0){
goto L35;
}
si0=0U;
l9=si0;
si0=0U;
l14=si0;
goto L34;
L36:;
si0=1260740U;
si1=35U;
si2=1260776U;
f604(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l8;
si1=l2;
si0=si0 >= si1;
l17=si0;
if(si0){
goto L38;
}
si0=l2;
si1=l8;
si0=f1126(i,si0,si1);
l18=si0;
goto L37;
L38:;
si0=l8;
si1=l2;
si0=f1126(i,si0,si1);
l18=si0;
L37:;
si0=8U;
l19=si0;
si0=l18;
si0=!(si0);
if(si0){
goto L39;
}
si0=l18;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L25;
}
si0=l11;
si0=!(si0);
if(si0){
goto L39;
}
si0=l11;
si1=1U;
si0=f15026(i,si0,si1);
l19=si0;
si0=!(si0);
if(si0){
goto L24;
}
L39:;
si0=l6;
si1=184U;
si0+=si1;
si1=l0;
si2=0U;
si3=l10;
f1274(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+188U);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+184U);
l14=si0;
si0=l8;
si1=l2;
si0+=si1;
l13=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l8;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L42;
}
goto L18;
L43:;
si0=l8;
si1=l11;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l4;
si1=l5;
si2=l14;
si3=l8;
si4=l1;
si5=l2;
si6=l19;
si7=l18;
sj0=f1132(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l13;
si1=l7;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1275(i,si0,si1,si2,si3);
si0=l13;
si1=l5;
si2=1260672U;
f597(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l17;
if(si0){
goto L45;
}
si0=l4;
si1=l5;
si2=l1;
si3=l2;
si4=l14;
si5=l8;
si6=l19;
si7=l18;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L44;
L45:;
si0=l4;
si1=l5;
si2=l14;
si3=l8;
si4=l1;
si5=l2;
si6=l19;
si7=l18;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L44:;
si0=l13;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L40;
}
L41:;
si0=1260688U;
si1=35U;
si2=1260724U;
f604(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=0U;
l9=si0;
si0=l6;
si1=176U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1275(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l13;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+176U);
l20=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l4;
si2=l11;
si1+=si2;
l21=si1;
si2=l13;
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l22=si2;
si0=f15143(i,si0,si1,si2);
l23=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L46;
}
si0=0U;
l16=si0;
si0=l7;
l9=si0;
si0=l20;
l11=si0;
si0=l4;
l14=si0;
L47:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l25=sj0;
sj1=l24;
si0=sj0 < sj1;
l12=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L49;
}
si0=l12;
l16=si0;
goto L48;
L49:;
si0=l12;
sj1=l25;
sj2=1ULL;
sj1+=sj2;
l25=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L48:;
si0=l11;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L47;
}
}
si0=l13;
si1=l7;
si0=si0 == si1;
l11=si0;
si1=l16;
si0&=si1;
l9=si0;
si0=l11;
if(si0){
goto L46;
}
si0=l16;
si1=1U;
si0^=si1;
if(si0){
goto L46;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l25=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l9=si0;
sj0=l25;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L46;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l7;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l14;
si1=l20;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
L50:;
{
si0=l11;
si0=!(si0);
l9=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L46;
}
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l25=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
sj0=l25;
si0=!(sj0);
if(si0){
goto L50;
}
}
L46:;
si0=l6;
si1=168U;
si0+=si1;
si1=l0;
si2=1U;
si3=l10;
f1274(i,si0,si1,si2,si3);
si0=l8;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+172U);
l11=si1;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+168U);
l11=si0;
si0=l17;
if(si0){
goto L52;
}
si0=l4;
si1=l5;
si2=l1;
si3=l2;
si4=l11;
si5=l8;
si6=l19;
si7=l18;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L51;
L52:;
si0=l4;
si1=l5;
si2=l11;
si3=l8;
si4=l1;
si5=l2;
si6=l19;
si7=l18;
sj0=f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L51:;
si0=l6;
si1=160U;
si0+=si1;
si1=l0;
si2=1U;
si3=l3;
f1275(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si1=l13;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+160U);
l12=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l21;
si2=l22;
si0=f15143(i,si0,si1,si2);
l10=si0;
si0=l7;
if(si0){
goto L54;
}
si0=0U;
l14=si0;
goto L53;
L54:;
si0=0U;
l8=si0;
si0=l7;
l14=si0;
si0=l12;
l11=si0;
L55:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l24=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l25=sj0;
sj1=l24;
si0=sj0 < sj1;
l16=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L57;
}
si0=l16;
l8=si0;
goto L56;
L57:;
si0=l16;
sj1=l25;
sj2=1ULL;
sj1+=sj2;
l25=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L56:;
si0=l11;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L55;
}
}
si0=l13;
si1=l7;
si0=si0 == si1;
l11=si0;
si1=l8;
si0&=si1;
l14=si0;
si0=l11;
if(si0){
goto L53;
}
si0=l8;
si1=1U;
si0^=si1;
if(si0){
goto L53;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l25=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l14=si0;
sj0=l25;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L53;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
si1=l7;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l4;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
L58:;
{
si0=l11;
si0=!(si0);
l14=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L53;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l25=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l25;
si0=!(sj0);
if(si0){
goto L58;
}
}
L53:;
si0=l18;
si0=!(si0);
if(si0){
goto L34;
}
si0=l19;
f15024(i,si0);
L34:;
si0=l14;
sj0=(U64)(si0);
l24=sj0;
si1=l9;
sj1=(U64)(si1);
l25=sj1;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L21;
}
si0=l6;
si1=128U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1274(i,si0,si1,si2,si3);
si0=l15;
si1=-1U;
si0+=si1;
l11=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+132U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+128U);
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L20;
}
goto L16;
L30:;
si0=1260836U;
si1=37U;
si2=1260876U;
f604(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1260792U;
si1=28U;
si2=1260820U;
f604(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=1U;
si1=l6;
si2=212U;
si1+=si2;
si2=1256372U;
si3=l6;
si4=216U;
si3+=si4;
si4=1260500U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l8;
si1=-1U;
si0+=si1;
si1=l16;
si2=1260516U;
f594(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l8;
si1=-1U;
si0+=si1;
si1=l16;
si2=1260532U;
f594(i,si0,si1,si2);
UNREACHABLE;
L25:;
f53(i);
UNREACHABLE;
L24:;
si0=8U;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=1203132U;
si1=36U;
si2=1203168U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1203132U;
si1=36U;
si2=1203168U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l6;
si1=144U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1275(i,si0,si1,si2,si3);
si0=l15;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+148U);
l11=si1;
si0=si0 < si1;
if(si0){
goto L59;
}
si0=l15;
si1=l11;
si2=1260580U;
f594(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+144U);
si1=l15;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=136U;
si0+=si1;
si1=l0;
si2=1U;
si3=l3;
f1275(i,si0,si1,si2,si3);
si0=l15;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+140U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l15;
si1=l4;
si2=1260596U;
f594(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+136U);
si1=l11;
si0+=si1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
goto L16;
L20:;
si0=l6;
si1=120U;
si0+=si1;
si1=l0;
si2=1U;
si3=l3;
f1274(i,si0,si1,si2,si3);
si0=l11;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+124U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l11;
si1=l15;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+120U);
si3=l11;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l15=si0;
goto L16;
L61:;
si0=l11;
si1=l4;
si2=1260564U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l11;
si1=l4;
si2=1260548U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l8;
si1=l11;
si2=1260656U;
f597(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L64;
case 1:
goto L63;
default:
goto L65;
}
L65:;
si0=1255776U;
si1=14U;
si2=1255792U;
f604(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l12;
si1=l9;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l12;
si1=l9;
si0-=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l15;
l1=si0;
si0=l9;
l11=si0;
goto L62;
L63:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l12=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l12;
si1=l9;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l12;
si1=l9;
si0-=si1;
l11=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l15;
l2=si0;
si0=l9;
l4=si0;
L62:;
si0=l7;
si1=l11;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l7;
si1=l4;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l7;
if(si0){
goto L67;
}
sj0=0ULL;
l24=sj0;
goto L66;
L67:;
si0=l7;
si1=1U;
si0&=si1;
l13=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L69;
}
sj0=0ULL;
l24=sj0;
si0=0U;
l8=si0;
sj0=0ULL;
l26=sj0;
goto L68;
L69:;
si0=l7;
si1=-2U;
si0&=si1;
l16=si0;
sj0=0ULL;
l26=sj0;
si0=0U;
l8=si0;
si0=l2;
l4=si0;
si0=l1;
l11=si0;
sj0=0ULL;
l24=sj0;
L70:;
{
si0=l6;
si1=88U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
sj1=l24;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+88U);
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=104U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=8U;
si0+=si1;
l14=si0;
sj1=0ULL;
sj2=l27;
sj3=l24;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l6;
si3=88U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l28;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l27=sj1;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l24=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+104U);
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l27;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l6;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l28;
sj2=l24;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l24=sj0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l16;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
}
L68:;
si0=l13;
si0=!(si0);
if(si0){
goto L66;
}
si0=l6;
si1=72U;
si0+=si1;
si1=l2;
si2=l8;
si3=3U;
si2<<=(si3&31);
l11=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l11;
si0+=si1;
l11=si0;
sj1=l24;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+72U);
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l27;
sj2=l24;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l6;
si2=80U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l28;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l24=sj0;
L66:;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L73;
case 1:
goto L72;
default:
goto L74;
}
L74:;
si0=1255776U;
si1=14U;
si2=1255792U;
f604(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=l10;
si1=l12;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l10;
si1=l12;
si0-=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l15;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l11;
si1=l9;
si0-=si1;
l4=si0;
si0=l9;
l11=si0;
goto L71;
L72:;
si0=l10;
si1=l12;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l10;
si1=l12;
si0-=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l15;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l11;
si1=l9;
si0-=si1;
l11=si0;
si0=l9;
l4=si0;
L71:;
si0=l7;
si1=l11;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l7;
si1=l4;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
if(si0){
goto L76;
}
sj0=0ULL;
l27=sj0;
goto L75;
L76:;
si0=l7;
si1=1U;
si0&=si1;
l9=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L78;
}
sj0=0ULL;
l27=sj0;
si0=0U;
l8=si0;
sj0=0ULL;
l29=sj0;
goto L77;
L78:;
si0=l7;
si1=-2U;
si0&=si1;
l16=si0;
sj0=0ULL;
l29=sj0;
si0=0U;
l8=si0;
si0=l10;
l4=si0;
si0=l12;
l11=si0;
sj0=0ULL;
l27=sj0;
L79:;
{
si0=l6;
si1=40U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
sj1=l27;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+40U);
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=56U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
si1=8U;
si0+=si1;
l14=si0;
sj1=0ULL;
sj2=l28;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l6;
si3=40U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l26;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l28=sj1;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+56U);
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l28;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l6;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l26;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l27=sj0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l16;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L79;
}
}
L77:;
si0=l9;
si0=!(si0);
if(si0){
goto L75;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l10;
si2=l8;
si3=3U;
si2<<=(si3&31);
l11=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l12;
si1=l11;
si0+=si1;
l11=si0;
sj1=l27;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l25=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+24U);
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l29;
sj1=l25;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l6;
si2=32U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l28;
sj2=l25;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l27=sj0;
L75:;
si0=l6;
si1=16U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1275(i,si0,si1,si2,si3);
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+20U);
l11=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l7;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l0;
si2=1U;
si3=l3;
f1275(i,si0,si1,si2,si3);
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l11;
si0+=si1;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l15=si0;
sj0=l27;
sj1=l24;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
L16:;
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+20U,si1);
L15:;
si0=l15;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 > si1;
if(si0){
goto L80;
}
si0=l6;
si1=240U;
si0+=si1;
i->g0=si0;
goto L0;
L80:;
si0=1260612U;
si1=28U;
si2=1260640U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l12;
si1=l10;
si2=1255648U;
f597(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1255136U;
si1=35U;
si2=1255664U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l12;
si1=l10;
si2=1255680U;
f597(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1255136U;
si1=35U;
si2=1255696U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l7;
si1=l11;
si2=1260404U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si1=l4;
si2=1260420U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l12;
si1=l10;
si2=1255712U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1255136U;
si1=35U;
si2=1255728U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l12;
si1=l10;
si2=1255744U;
f593(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1255136U;
si1=35U;
si2=1255760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=l11;
si2=1260436U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l7;
si1=l4;
si2=1260452U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
si1=l11;
si2=1260468U;
f594(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=l4;
si2=1260484U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1267(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L21;
}
L22:;
si0=l3;
if(si0){
goto L24;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
goto L23;
L24:;
si0=l0;
si1=-8U;
si0+=si1;
l11=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l13=si0;
si0=0U;
l10=si0;
L26:;
{
si0=l11;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L26;
}
}
si0=l13;
l10=si0;
L25:;
si0=l2;
si1=-8U;
si0+=si1;
l14=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
si1=l10;
si0-=si1;
l9=si0;
si0=0U;
l11=si0;
L28:;
{
si0=l14;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L28;
}
}
si0=l13;
l11=si0;
L27:;
si0=l3;
si1=l10;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l3;
si1=l11;
si0-=si1;
l12=si0;
si0=l3;
si1=l11;
si0=si0 < si1;
if(si0){
goto L10;
}
L23:;
si0=-1U;
si1=l11;
si2=l10;
si1=si1 != si2;
si2=l9;
si3=l12;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L18;
default:
goto L29;
}
L29:;
si0=l9;
if(si0){
goto L14;
}
si0=l12;
l9=si0;
goto L19;
L21:;
si0=1258096U;
si1=48U;
si2=1258144U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l12;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l1=si0;
L33:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L31;
}
si0=-1U;
si1=l1;
si2=-8U;
si1+=si2;
l1=si1;
si2=l2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l1;
si3=l0;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
si1=sj1 != sj2;
sj2=l15;
sj3=l16;
si2=sj2 > sj3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L33;
}
goto L30;
}
L32:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=l8;
si3=20U;
si2+=si3;
si3=l8;
si4=24U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L31:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L30:;
si0=l10;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L17;
default:
goto L34;
}
L34:;
si0=l9;
if(si0){
goto L15;
}
L19:;
si0=l2;
l0=si0;
goto L3;
L18:;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L3;
}
si0=l12;
l1=si0;
si0=l9;
l12=si0;
si0=l2;
l17=si0;
si0=l0;
l2=si0;
si0=l1;
l9=si0;
goto L13;
L17:;
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
l12=si0;
si0=l2;
l17=si0;
si0=l0;
l2=si0;
goto L13;
L16:;
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L9;
}
goto L2;
L15:;
si0=l9;
l12=si0;
L14:;
si0=l0;
l17=si0;
L13:;
si0=l9;
si1=l12;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l9;
si1=1U;
si0&=si1;
l18=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=0U;
l11=si0;
si0=0U;
l14=si0;
goto L35;
L37:;
si0=1201588U;
si1=35U;
si2=1203492U;
f604(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l9;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l11=si0;
si0=l17;
l10=si0;
si0=l2;
l1=si0;
si0=0U;
l14=si0;
L38:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l11;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l0=si0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l15;
sj3=l16;
si2=sj2 <= sj3;
sj3=l15;
sj4=l16;
si3=sj3 < sj4;
si4=l11;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l11=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l15;
si0=sj0 <= sj1;
sj1=l19;
sj2=l15;
si1=sj1 < sj2;
si2=l11;
si0=si2?si0:si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l13;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L38;
}
}
L35:;
si0=l18;
si0=!(si0);
if(si0){
goto L39;
}
si0=l2;
si1=l14;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l11;
sj2=(U64)(si2);
si3=l17;
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
si2=l11;
si0=si2?si0:si1;
l11=si0;
L39:;
si0=l12;
si1=l9;
si0=si0 == si1;
l1=si0;
if(si0){
goto L41;
}
si0=l11;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L41;
}
si0=l2;
si1=l9;
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
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L40;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=l9;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l10=si0;
si0=l1;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L42:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l15;
si0=!(sj0);
if(si0){
goto L42;
}
goto L40;
}
L41:;
si0=l1;
si1=l11;
si0&=si1;
if(si0){
goto L7;
}
L40:;
si0=l12;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l12;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l10=si0;
L44:;
{
si0=l2;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L43;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L44;
}
}
si0=l11;
l10=si0;
L43:;
si0=l8;
si1=l12;
si2=l10;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l12;
si1=l10;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=-1U;
si1=l9;
si2=l1;
si1=si1 != si2;
l10=si1;
si2=l9;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L50;
case 1:
goto L49;
default:
goto L48;
}
L50:;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
if(si0){
goto L53;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l1=si0;
L54:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L52;
}
si0=-1U;
si1=l1;
si2=-8U;
si1+=si2;
l1=si1;
si2=l2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l1;
si3=l17;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
si1=sj1 != sj2;
sj2=l15;
sj3=l16;
si2=sj2 > sj3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L54;
}
goto L51;
}
L53:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=l8;
si3=20U;
si2+=si3;
si3=l8;
si4=24U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L52:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L51:;
si0=l10;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L45;
case 1:
goto L46;
default:
goto L55;
}
L55:;
si0=l9;
l11=si0;
goto L47;
L49:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=l3;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l9;
l11=si0;
si0=l17;
l10=si0;
si0=l1;
l9=si0;
si0=l2;
l17=si0;
goto L4;
L56:;
si0=l9;
si1=l3;
si2=1257800U;
f597(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l1;
l11=si0;
L47:;
si0=l2;
l10=si0;
goto L4;
L46:;
si0=l9;
si1=l3;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l9;
l11=si0;
si0=l17;
l10=si0;
si0=l2;
l17=si0;
goto L4;
L57:;
si0=l9;
si1=l3;
si2=1257768U;
f597(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L58;
}
si0=l2;
l0=si0;
goto L2;
L58:;
si0=l9;
si1=l5;
si2=1255632U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=20U;
si1+=si2;
si2=l8;
si3=8U;
si2+=si3;
si3=l8;
si4=24U;
si3+=si4;
si4=1258176U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l9;
si1=l3;
si2=1257720U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l12;
si1=l3;
si2=1257736U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l9;
si1=l5;
si2=1255632U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l12;
si2=1257752U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1258012U;
si1=68U;
si2=1258080U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=12U;
si1+=si2;
si2=1256372U;
si3=l8;
si4=24U;
si3+=si4;
si4=1257996U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l1;
si1=l3;
si2=1257784U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L63;
}
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=l10;
si1=l6;
si2=l7;
si3=l10;
si4=l11;
sj5=l15;
sj1=f1173(i,si1,si2,si3,si4,sj5);
i64_store(&i->m0,(U64)si0,sj1);
goto L61;
L63:;
si0=l6;
si1=l7;
si2=l10;
si3=l11;
si4=l17;
si5=l9;
f1185(i,si0,si1,si2,si3,si4,si5);
goto L61;
L62:;
sj0=l15;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L60;
}
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l15;
sj1=DIV_U(sj1,sj2);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=l16;
sj2=l19;
sj3=l15;
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L61:;
si0=l9;
si1=l11;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l10;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l9;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l2=si0;
si0=0U;
l10=si0;
L65:;
{
si0=l11;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L64;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L65;
}
}
si0=l2;
l10=si0;
L64:;
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=l17;
l0=si0;
goto L2;
L66:;
si0=l9;
si1=l5;
si2=1255632U;
f597(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=1217440U;
si1=25U;
si2=1217424U;
f604(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l9;
si1=l11;
si2=1257832U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l9;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l9;
si1=l5;
si2=1255632U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l0;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=0U;
l9=si0;
L1:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l9;
L0:;
return si0;
}

U32 f1268(rustpythonInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
sj0=l0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l2;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l0;
sj1=l2;
si0=sj0 > sj1;
if(si0){
goto L3;
}
sj0=l0;
sj1=l2;
si0=sj0 != sj1;
if(si0){
goto L4;
}
sj0=l1;
sj1=l3;
si0=sj0 > sj1;
if(si0){
goto L3;
}
L4:;
sj0=l2;
sj1=l3;
sj2=l1;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l0;
sj0-=sj1;
l2=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l3;
sj1=l1;
sj0-=sj1;
l3=sj0;
sj0=0ULL;
l7=sj0;
sj0=1ULL;
l8=sj0;
goto L2;
L3:;
sj0=l0;
sj1=l1;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l2;
sj0-=sj1;
l0=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l1;
sj1=l3;
sj0-=sj1;
l1=sj0;
sj0=1ULL;
l7=sj0;
sj0=0ULL;
l8=sj0;
L2:;
sj0=1ULL;
l9=sj0;
sj0=l0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L15;
}
sj0=1ULL;
l9=sj0;
sj0=l0;
sj1=l2;
si0=sj0 != sj1;
if(si0){
goto L16;
}
sj0=1ULL;
l10=sj0;
goto L5;
L16:;
sj0=1ULL;
l9=sj0;
sj0=l0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L17;
}
sj0=1ULL;
l10=sj0;
goto L13;
L17:;
sj0=1ULL;
l9=sj0;
sj0=l0;
sj1=l1;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l2;
sj0-=sj1;
l0=sj0;
sj1=2ULL;
si0=sj0 >= sj1;
if(si0){
goto L18;
}
sj0=1ULL;
l10=sj0;
goto L5;
L18:;
sj0=l1;
sj1=l3;
sj0-=sj1;
l1=sj0;
sj0=l0;
sj1=l2;
si0=sj0 > sj1;
if(si0){
goto L19;
}
sj0=l8;
sj1=1ULL;
sj0+=sj1;
l9=sj0;
sj0=l7;
sj1=1ULL;
sj0+=sj1;
l7=sj0;
goto L15;
L19:;
si0=l5;
si1=8U;
si0+=si1;
sj1=l0;
sj2=l1;
sj3=l2;
sj4=l3;
f1269(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
sj0=1ULL;
l9=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l0=sj0;
sj1=2ULL;
si0=sj0 >= sj1;
if(si0){
goto L20;
}
sj0=1ULL;
l10=sj0;
goto L14;
L20:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l1=sj0;
sj0=l11;
sj1=1ULL;
sj0+=sj1;
l9=sj0;
sj1=l7;
sj0+=sj1;
l7=sj0;
sj0=l9;
sj1=l8;
sj0*=sj1;
sj1=1ULL;
sj0+=sj1;
l9=sj0;
L15:;
sj0=l2;
sj1=l0;
si0=sj0 < sj1;
if(si0){
goto L21;
}
sj0=1ULL;
l10=sj0;
sj0=l0;
sj1=l2;
si0=sj0 == sj1;
if(si0){
goto L5;
}
sj0=1ULL;
l10=sj0;
sj0=l2;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L22;
}
sj0=1ULL;
l10=sj0;
sj0=l2;
sj1=l3;
sj2=l1;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l0;
sj0-=sj1;
l2=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l3;
sj1=l1;
sj0-=sj1;
l3=sj0;
sj0=l0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L25;
}
sj0=l7;
l10=sj0;
sj0=l9;
l11=sj0;
goto L24;
L25:;
si0=l5;
si1=8U;
si0+=si1;
sj1=l2;
sj2=l3;
sj3=l0;
sj4=l1;
f1269(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
sj0=1ULL;
l10=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l2=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L23;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l3=sj0;
sj0=l11;
sj1=1ULL;
sj0+=sj1;
l10=sj0;
sj1=l9;
sj0*=sj1;
l11=sj0;
sj0=l10;
sj1=l7;
sj0*=sj1;
l10=sj0;
L24:;
sj0=l0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L26;
}
sj0=l11;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj0=l10;
sj1=1ULL;
sj0+=sj1;
l10=sj0;
L27:;
{
sj0=l0;
sj1=l2;
si0=sj0 == sj1;
if(si0){
goto L5;
}
sj0=l0;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L13;
}
sj0=l0;
sj1=l1;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l2;
sj0-=sj1;
l0=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l1;
sj1=l3;
sj0-=sj1;
l1=sj0;
sj0=l0;
sj1=l2;
si0=sj0 <= sj1;
if(si0){
goto L29;
}
si0=l5;
si1=8U;
si0+=si1;
sj1=l0;
sj2=l1;
sj3=l2;
sj4=l3;
f1269(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l0=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L14;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l1=sj0;
sj0=l11;
sj1=1ULL;
sj0+=sj1;
l12=sj0;
sj1=l8;
sj0*=sj1;
l11=sj0;
sj0=l12;
sj1=l10;
sj0*=sj1;
sj1=l7;
sj0+=sj1;
l7=sj0;
goto L28;
L29:;
sj0=l7;
sj1=l10;
sj0+=sj1;
l7=sj0;
sj0=l8;
l11=sj0;
L28:;
sj0=l2;
sj1=l0;
si0=sj0 < sj1;
if(si0){
goto L21;
}
sj0=l11;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l0;
sj1=l2;
si0=sj0 == sj1;
if(si0){
goto L5;
}
sj0=l2;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L22;
}
sj0=l2;
sj1=l3;
sj2=l1;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l0;
sj0-=sj1;
l2=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l3;
sj1=l1;
sj0-=sj1;
l3=sj0;
sj0=l0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L31;
}
sj0=l7;
l11=sj0;
sj0=l9;
l12=sj0;
goto L30;
L31:;
si0=l5;
si1=8U;
si0+=si1;
sj1=l2;
sj2=l3;
sj3=l0;
sj4=l1;
f1269(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l11=sj0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+16U);
l2=sj0;
sj1=2ULL;
si0=sj0 < sj1;
if(si0){
goto L23;
}
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+24U);
l3=sj0;
sj0=l11;
sj1=1ULL;
sj0+=sj1;
l11=sj0;
sj1=l9;
sj0*=sj1;
l12=sj0;
sj0=l11;
sj1=l7;
sj0*=sj1;
l11=sj0;
L30:;
sj0=l11;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj0=l12;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj0=l0;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L27;
}
}
L26:;
si0=1258272U;
si1=34U;
si2=1258308U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
sj0=l8;
sj1=l9;
sj2=l11;
sj1*=sj2;
sj0+=sj1;
l8=sj0;
sj0=l7;
sj1=l11;
sj0*=sj1;
sj1=l10;
sj0+=sj1;
l10=sj0;
goto L5;
L22:;
sj0=l2;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l2=sj0;
sj0=l0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l0=sj0;
goto L12;
L21:;
si0=1258340U;
si1=34U;
si2=1258392U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
sj0=l11;
sj1=l8;
sj0*=sj1;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l11;
sj1=l10;
sj0*=sj1;
sj1=l7;
sj0+=sj1;
l7=sj0;
goto L5;
L13:;
sj0=l0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l1;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l0=sj0;
sj1=l2;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l3;
sj3=32ULL;
sj2>>=(sj3&63);
sj1|=sj2;
l2=sj1;
si0=sj0 < sj1;
if(si0){
goto L11;
}
sj0=l0;
sj1=l2;
sj0-=sj1;
l0=sj0;
sj1=8589934592ULL;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l0;
sj1=l2;
si0=sj0 > sj1;
if(si0){
goto L32;
}
sj0=l8;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l7;
sj1=l10;
sj0+=sj1;
l7=sj0;
goto L12;
L32:;
sj0=l2;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
sj0=l0;
sj1=l0;
sj2=l2;
sj1=DIV_U(sj1,sj2);
l1=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l0=sj0;
sj1=8589934592ULL;
si0=sj0 < sj1;
if(si0){
goto L6;
}
sj0=l1;
sj1=1ULL;
sj0+=sj1;
l1=sj0;
sj1=l8;
sj0*=sj1;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l1;
sj1=l10;
sj0*=sj1;
sj1=l7;
sj0+=sj1;
l7=sj0;
L12:;
sj0=l2;
sj1=l0;
si0=sj0 < sj1;
if(si0){
goto L8;
}
sj0=l2;
sj1=l0;
sj0-=sj1;
l2=sj0;
sj1=8589934592ULL;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L34;
}
sj0=l7;
l1=sj0;
sj0=l9;
l3=sj0;
goto L33;
L34:;
sj0=l0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
sj0=l2;
sj1=l2;
sj2=l0;
sj1=DIV_U(sj1,sj2);
l1=sj1;
sj2=l0;
sj1*=sj2;
sj0-=sj1;
l2=sj0;
sj1=8589934592ULL;
si0=sj0 < sj1;
if(si0){
goto L7;
}
sj0=l1;
sj1=1ULL;
sj0+=sj1;
l1=sj0;
sj1=l9;
sj0*=sj1;
l3=sj0;
sj0=l1;
sj1=l7;
sj0*=sj1;
l1=sj0;
L33:;
sj0=l0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L11;
}
sj0=l3;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj0=l1;
sj1=l10;
sj0+=sj1;
l10=sj0;
L35:;
{
sj0=l0;
sj1=l2;
sj0-=sj1;
l0=sj0;
sj1=8589934592ULL;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l0;
sj1=l2;
si0=sj0 <= sj1;
if(si0){
goto L37;
}
sj0=l0;
sj1=l0;
sj2=l2;
sj1=DIV_U(sj1,sj2);
l1=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
l0=sj0;
sj1=8589934592ULL;
si0=sj0 < sj1;
if(si0){
goto L6;
}
sj0=l1;
sj1=1ULL;
sj0+=sj1;
l3=sj0;
sj1=l8;
sj0*=sj1;
l1=sj0;
sj0=l3;
sj1=l10;
sj0*=sj1;
sj1=l7;
sj0+=sj1;
l7=sj0;
goto L36;
L37:;
sj0=l7;
sj1=l10;
sj0+=sj1;
l7=sj0;
sj0=l8;
l1=sj0;
L36:;
sj0=l2;
sj1=l0;
si0=sj0 < sj1;
if(si0){
goto L8;
}
sj0=l1;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l2;
sj1=l0;
sj0-=sj1;
l2=sj0;
sj1=8589934592ULL;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L39;
}
sj0=l7;
l1=sj0;
sj0=l9;
l3=sj0;
goto L38;
L39:;
sj0=l2;
sj1=l2;
sj2=l0;
sj1=DIV_U(sj1,sj2);
l1=sj1;
sj2=l0;
sj1*=sj2;
sj0-=sj1;
l2=sj0;
sj1=8589934592ULL;
si0=sj0 < sj1;
if(si0){
goto L7;
}
sj0=l1;
sj1=1ULL;
sj0+=sj1;
l1=sj0;
sj1=l9;
sj0*=sj1;
l3=sj0;
sj0=l1;
sj1=l7;
sj0*=sj1;
l1=sj0;
L38:;
sj0=l1;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj0=l3;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj0=l0;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L35;
}
}
L11:;
si0=1258272U;
si1=34U;
si2=1258324U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1217440U;
si1=25U;
si2=1217424U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1217440U;
si1=25U;
si2=1217424U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1258340U;
si1=34U;
si2=1258376U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
sj0=l8;
sj1=l9;
sj2=l1;
sj1*=sj2;
sj0+=sj1;
l8=sj0;
sj0=l7;
sj1=l1;
sj0*=sj1;
sj1=l10;
sj0+=sj1;
l10=sj0;
goto L5;
L6:;
sj0=l1;
sj1=l8;
sj0*=sj1;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l1;
sj1=l10;
sj0*=sj1;
sj1=l7;
sj0+=sj1;
l7=sj0;
L5:;
si0=l4;
sj1=l8;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
sj1=l7;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l6=si0;
L1:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

void f1269(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l3;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L8;
}
si0=l5;
sj1=l1;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l6=sj1;
i64_store(&i->m0,(U64)si0+56U,sj1);
sj0=l6;
sj1=l3;
si0=sj0 > sj1;
if(si0){
goto L9;
}
si0=l5;
si1=40U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+40U);
l7=sj0;
sj0=l1;
sj1=l6;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l8=sj0;
si1=l5;
si2=48U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si0=sj0 > sj1;
if(si0){
goto L11;
}
sj0=l7;
sj1=l2;
si0=sj0 > sj1;
if(si0){
goto L10;
}
sj0=l8;
sj1=l9;
si0=sj0 < sj1;
if(si0){
goto L10;
}
L11:;
sj0=l7;
l1=sj0;
goto L2;
L10:;
sj0=l3;
sj1=l1;
si0=sj0 > sj1;
if(si0){
goto L7;
}
sj0=l7;
sj1=l4;
sj0-=sj1;
l1=sj0;
sj0=l6;
sj1=-1ULL;
sj0+=sj1;
l6=sj0;
sj0=l9;
sj1=l7;
sj2=l4;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l3;
sj0-=sj1;
l9=sj0;
goto L2;
L9:;
si0=l5;
sj1=l3;
sj1=I64_CLZ(sj1);
l6=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
sj0=l6;
si0=!(sj0);
if(si0){
goto L3;
}
sj0=l1;
sj1=0ULL;
sj2=l6;
sj1-=sj2;
l8=sj1;
sj0>>=(sj1&63);
l10=sj0;
sj1=l4;
sj2=l8;
sj1>>=(sj2&63);
sj2=l3;
sj3=l6;
sj2<<=(sj3&63);
sj1|=sj2;
l9=sj1;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
sj0=l2;
sj1=l6;
sj0<<=(sj1&63);
l7=sj0;
si0=l5;
si1=24U;
si0+=si1;
sj1=l2;
sj2=l8;
sj3=63ULL;
sj2&=sj3;
l11=sj2;
sj1>>=(sj2&63);
sj2=l1;
sj3=l6;
sj2<<=(sj3&63);
sj1|=sj2;
l1=sj1;
sj2=l10;
sj3=l9;
sj4=0ULL;
f15155(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+24U);
l3=sj1;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=8U;
si0+=si1;
sj1=l3;
sj2=0ULL;
sj3=l4;
sj4=l6;
sj3<<=(sj4&63);
l10=sj3;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
l2=sj0;
sj0=l1;
sj1=l9;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l8=sj0;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l1=sj1;
si0=sj0 < sj1;
if(si0){
goto L12;
}
sj0=l8;
sj1=l1;
si0=sj0 != sj1;
if(si0){
goto L13;
}
sj0=l7;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L12;
}
L13:;
sj0=l2;
l4=sj0;
goto L4;
L12:;
sj0=l3;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L5;
}
sj0=l2;
sj1=l10;
sj0-=sj1;
l4=sj0;
sj0=l3;
sj1=-1ULL;
sj0+=sj1;
l3=sj0;
sj0=l1;
sj1=l2;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l9;
sj0-=sj1;
l1=sj0;
goto L4;
L8:;
si0=1217440U;
si1=25U;
si2=1217424U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l5;
si2=56U;
si1+=si2;
si2=1258408U;
si3=l5;
si4=72U;
si3+=si4;
si4=1260988U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1204264U;
si1=25U;
si2=1204424U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l5;
si2=56U;
si1+=si2;
si2=1258408U;
si3=l5;
si4=72U;
si3+=si4;
si4=1261020U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
sj2=l7;
sj3=l4;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l1;
sj1-=sj2;
l3=sj1;
sj2=l6;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l3;
sj2=l11;
sj1<<=(sj2&63);
sj2=l7;
sj3=l4;
sj2-=sj3;
sj3=l6;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L1;
L3:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l5;
si2=64U;
si1+=si2;
si2=1258408U;
si3=l5;
si4=72U;
si3+=si4;
si4=1261004U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
sj2=l1;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l8;
sj2=l2;
sj3=l1;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1-=sj2;
sj2=l9;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
L1:;
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1270(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l8;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si3=-8U;
si2+=si3;
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l0;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l10=sj2;
sj1|=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l11;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
si0=l4;
si1=1U;
si0+=si1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l3;
si1=-2U;
si0+=si1;
l1=si0;
sj0=l11;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L14;
}
si0=l3;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l3;
si1=-3U;
si0+=si1;
l12=si0;
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=l12;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
sj2=l11;
sj2=I64_CLZ(sj2);
l11=sj2;
sj1-=sj2;
l13=sj1;
sj0>>=(sj1&63);
si1=l2;
si2=l1;
si3=3U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l11;
sj1<<=(sj2&63);
sj0|=sj1;
l15=sj0;
sj0=l14;
sj1=l13;
sj0>>=(sj1&63);
sj1=l9;
sj2=l11;
sj1<<=(sj2&63);
sj0|=sj1;
l9=sj0;
si0=l0;
si1=l12;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l13;
sj0>>=(sj1&63);
si1=l0;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l11;
sj1<<=(sj2&63);
sj0|=sj1;
l14=sj0;
sj0=l16;
sj1=l13;
sj0>>=(sj1&63);
sj1=l10;
sj2=l11;
sj1<<=(sj2&63);
sj0|=sj1;
l10=sj0;
goto L5;
L14:;
si0=l3;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l0;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
goto L5;
L13:;
sj0=l11;
sj1=4ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l3;
si1=-2U;
si0+=si1;
l1=si0;
si0=l3;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l0;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
goto L5;
L12:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si1=l8;
si2=8U;
si1+=si2;
si2=l8;
si3=4U;
si2+=si3;
si3=l8;
si4=16U;
si3+=si4;
si4=1258552U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=1258512U;
si1=23U;
si2=1258536U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
si1=l8;
si2=8U;
si1+=si2;
si2=1258408U;
si3=l8;
si4=16U;
si3+=si4;
si4=1258416U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l1;
si1=l3;
si2=1258432U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l12;
si1=2U;
si2=1258448U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l3;
si2=1258464U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si1=l3;
si2=1258480U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si1=40U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l10;
sj1=l14;
sj2=l9;
sj3=l15;
si4=l8;
si5=16U;
si4+=si5;
si0=f1268(i,sj0,sj1,sj2,sj3,si4);
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=l3;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
si0=f1265(i,si0,si1,si2,si3,si4,si5,si6,si7);
l3=si0;
goto L2;
L3:;
si0=l5;
si1=l8;
si2=16U;
si1+=si2;
si2=l6;
si3=l7;
f1271(i,si0,si1,si2,si3);
si0=l3;
si1=l7;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l8;
si1=16U;
si0+=si1;
si1=l0;
si2=l3;
si3=l6;
si4=l0;
si5=l3;
si6=3U;
si5<<=(si6&31);
si3=f15143(i,si3,si4,si5);
si4=l3;
si5=l2;
si6=l3;
si0=f1264(i,si0,si1,si2,si3,si4,si5,si6);
l3=si0;
L2:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L1:;
si0=l3;
si1=l7;
si2=1258496U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1271(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l4;
si1=l3;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l4;
si3=3U;
si2<<=(si3&31);
l7=si2;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l2=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l6;
si2=l3;
si3=l8;
si4=l4;
si5=l6;
si6=l3;
si7=3U;
si6<<=(si7&31);
si5+=si6;
si6=l2;
si7=l3;
si6-=si7;
si0=f1276(i,si0,si1,si2,si3,si4,si5,si6);
l9=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l10=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l10;
si1=l5;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=l10;
si2=l2;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l8;
si1=l6;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l6=si1;
si2=l7;
si0=f15143(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=l2;
si0-=si1;
l2=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l9;
si2=l1;
si3=l6;
si4=l3;
si5=l8;
si6=l4;
si7=l6;
si8=l3;
si9=3U;
si8<<=(si9&31);
si7+=si8;
si8=l2;
si9=l3;
si8-=si9;
si2=f1276(i,si2,si3,si4,si5,si6,si7,si8);
l2=si2;
si3=l9;
si4=l2;
si3=si3 > si4;
si1=si3?si1:si2;
l2=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=1260360U;
si1=28U;
si2=1260388U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=l3;
si2=1260312U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=l5;
si2=1259828U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=l3;
si2=1260328U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l5;
si2=1255648U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1255136U;
si1=35U;
si2=1255664U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l10;
si2=1259860U;
f683(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l10;
si1=l5;
si2=1259860U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l10;
si2=1260344U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1255136U;
si1=35U;
si2=1255728U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f1272(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si0+=si1;
l6=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l0;
si1=l5;
si2=-1U;
si1+=si2;
si0=f1258(i,si0,si1);
if(si0){
goto L15;
}
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
si0=f1258(i,si0,si1);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l8;
si1=l7;
si0-=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l8;
si1=l7;
si0-=si1;
l9=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l11=si1;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l4;
si1=l10;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l8;
si1=l11;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l8;
si2=l10;
si1-=si2;
l12=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l12=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l11;
si1=l12;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=l12;
si2=l8;
si1-=si2;
l13=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=l11;
si2=l12;
si1-=si2;
l11=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l7;
si2=l13;
si3=l7;
si4=3U;
si3<<=(si4&31);
l11=si3;
si2+=si3;
l13=si2;
si3=l7;
si4=l13;
si5=l11;
si4+=si5;
l13=si4;
si5=l7;
si6=l13;
si7=l11;
si6+=si7;
si7=l9;
si8=l7;
si7-=si8;
si8=l5;
si9=l1;
si9=i32_load(&i->m0,(U64)si9);
l1=si9;
si10=l4;
si11=l1;
si12=l10;
si13=3U;
si12<<=(si13&31);
si11+=si12;
si12=l4;
si13=l1;
si14=l8;
si15=3U;
si14<<=(si15&31);
si13+=si14;
si14=l4;
si15=l1;
si16=l12;
si17=3U;
si16<<=(si17&31);
si15+=si16;
si16=l4;
si17=l2;
si18=l3;
f1198(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
si0=l6;
si1=l0;
si2=l6;
si1=f1258(i,si1,si2);
si0-=si1;
l7=si0;
si0=l7;
si1=l0;
si2=l7;
si1=f1258(i,si1,si2);
si0-=si1;
l7=si0;
si0=l0;
si1=l7;
si2=l0;
si3=l7;
si2=f1258(i,si2,si3);
si1-=si2;
l7=si1;
si0=f1258(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
si0=1260084U;
si1=50U;
si2=1260136U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1258712U;
si1=33U;
si2=1260296U;
f604(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1260224U;
si1=56U;
si2=1260280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1255136U;
si1=35U;
si2=1255808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1255136U;
si1=35U;
si2=1255808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1255136U;
si1=35U;
si2=1255808U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l10;
si1=l11;
si2=1259828U;
f597(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=l10;
si2=1260020U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l10;
si1=l8;
si2=1259844U;
f683(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l8;
si1=l11;
si2=1259844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si1=l12;
si2=1260036U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l8;
si1=l12;
si2=1259860U;
f683(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l12;
si1=l11;
si2=1259860U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l13;
si2=1260052U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l11;
si2=1260068U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1260152U;
si1=56U;
si2=1260208U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l7;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
L0:;
}

U32 f1273(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj1,sj2,sj3,sj5,sj6,sj7,sj8,sj9;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L8;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l5=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=l2;
l5=si0;
L12:;
{
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L12;
}
}
si0=l7;
l8=si0;
L11:;
si0=l1;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l8;
si0-=si1;
l6=si0;
si0=l0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l7=si0;
L14:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L14;
}
}
si0=0U;
l0=si0;
goto L1;
L13:;
si0=l3;
si1=l8;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l3;
si1=l8;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l0=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
si1=l2;
si2=l8;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l2=si1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
sj2=l9;
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
l10=sj1;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l8;
si0-=si1;
l5=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l6;
si1=99999999U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l7;
si1=l6;
sj2=l9;
sj3=l9;
sj3=I64_CTZ(sj3);
sj2>>=(sj3&63);
sj3=0ULL;
sj0=f1123(i,si0,si1,sj2,sj3);
si0=!(sj0);
l0=si0;
goto L1;
L16:;
si0=l7;
si1=l6;
sj2=l9;
sj0=f1117(i,si0,si1,sj2);
si0=!(sj0);
l0=si0;
goto L1;
L15:;
sj0=l9;
sj0=I64_CTZ(sj0);
l11=sj0;
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
sj1=l10;
si0=sj0 > sj1;
if(si0){
goto L2;
}
sj0=l12;
sj1=0ULL;
sj2=l11;
sj1-=sj2;
sj0<<=(sj1&63);
sj1=l9;
sj2=l11;
sj1>>=(sj2&63);
sj0|=sj1;
l9=sj0;
si0=l6;
si1=100000000U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l7;
si1=l6;
sj2=l9;
sj0=f1117(i,si0,si1,sj2);
si0=!(sj0);
l0=si0;
goto L1;
L17:;
si0=l7;
si1=l6;
sj2=l9;
sj3=0ULL;
sj0=f1123(i,si0,si1,sj2,sj3);
si0=!(sj0);
l0=si0;
goto L1;
L10:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l4;
si2=28U;
si1+=si2;
si2=1256372U;
si3=l4;
si4=40U;
si3+=si4;
si4=1259556U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1259524U;
si1=32U;
si2=1259812U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l5;
si2=1258408U;
si3=l4;
si4=40U;
si3+=si4;
si4=1259572U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l5;
si2=1258408U;
si3=l4;
si4=40U;
si3+=si4;
si4=1259588U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1255136U;
si1=35U;
si2=1259604U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si1=l3;
si2=1259796U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1259620U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1259636U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si1=1U;
si0+=si1;
l13=si0;
si1=1U;
si0<<=(si1&31);
l14=si0;
si1=l5;
si0-=si1;
l15=si0;
si0=8U;
l16=si0;
si0=l14;
si1=l5;
si0=si0 == si1;
l17=si0;
if(si0){
goto L38;
}
si0=l15;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l15;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L37;
}
si0=l14;
si0=!(si0);
if(si0){
goto L38;
}
si0=l14;
si1=1U;
si0=f15026(i,si0,si1);
l16=si0;
si0=!(si0);
if(si0){
goto L33;
}
L38:;
si0=l15;
si1=l13;
si0=si0 < si1;
if(si0){
goto L32;
}
sj0=l11;
si0=!(sj0);
l18=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l6;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l16;
si1=l7;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
goto L34;
L39:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l19=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L37;
}
si0=l19;
if(si0){
goto L36;
}
si0=8U;
l14=si0;
goto L35;
L37:;
f53(i);
UNREACHABLE;
L36:;
si0=l19;
si1=1U;
si0=f15026(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L30;
}
L35:;
si0=l4;
si1=l14;
si2=l5;
si3=l2;
si4=l5;
sj5=l11;
sj1=f1032(i,si1,si2,si3,si4,sj5);
l9=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l9;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l4;
si1=l16;
si2=l13;
si3=l7;
si4=l6;
sj5=l11;
sj1=f1032(i,si1,si2,si3,si4,sj5);
l9=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l9;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l14;
l2=si0;
L34:;
si0=l6;
si1=-1U;
si0+=si1;
l19=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l13;
l7=si0;
si0=l16;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l2;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si0=sj0 >= sj1;
if(si0){
goto L40;
}
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
l7=si0;
si0=l6;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L26;
}
L40:;
si0=l15;
si1=l13;
si0-=si1;
l6=si0;
si0=l16;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l7;
si1=l5;
si0-=si1;
l0=si0;
si0=l5;
si1=211U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l5;
si1=7547U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l5;
si1=f1239(i,si1,si2);
l0=si1;
si2=1U;
f1295(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l15=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l7;
si2=0U;
f1295(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l19=si0;
si0=l1;
si1=l6;
si2=l16;
si3=l7;
si4=l4;
si4=i32_load(&i->m0,(U64)si4+8U);
si5=l16;
si6=l7;
si7=3U;
si6<<=(si7&31);
si4=f15143(i,si4,si5,si6);
l20=si4;
si5=l7;
si6=l2;
si7=l5;
si8=l13;
si9=l0;
si0=f1240(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l19;
si0=!(si0);
if(si0){
goto L43;
}
si0=l20;
f15024(i,si0);
L43:;
si0=l16;
l0=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L19;
}
si0=l13;
f15024(i,si0);
si0=l16;
l0=si0;
goto L19;
L42:;
si0=l1;
si1=l6;
si2=l16;
si3=l7;
si4=l2;
si5=l5;
sj6=0ULL;
si7=l2;
sj7=i64_load(&i->m0,(U64)si7);
sj7=f1232(i,sj7);
sj6-=sj7;
si0=f1238(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l16;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
goto L19;
L41:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L22;
}
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l9;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l9;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l10=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L23;
}
sj0=l10;
si0=(U32)(sj0);
l13=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l1;
si1=l6;
si2=l16;
si3=l7;
si4=l2;
si5=l5;
sj6=2ULL;
sj7=2ULL;
sj8=l9;
si9=l13;
si10=1251324U;
si9+=si10;
sj9=i64_load8_u(&i->m0,(U64)si9);
l10=sj9;
sj8*=sj9;
sj7-=sj8;
sj8=l10;
sj7*=sj8;
l10=sj7;
sj8=l9;
sj7*=sj8;
sj6-=sj7;
sj7=l10;
sj6*=sj7;
l10=sj6;
sj7=l9;
sj6*=sj7;
sj7=-2ULL;
sj6+=sj7;
sj7=l10;
sj6*=sj7;
si0=f1229(i,si0,si1,si2,si3,si4,si5,sj6);
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l16;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
goto L19;
L33:;
si0=8U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L32:;
si0=1255136U;
si1=35U;
si2=1259652U;
f604(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=-1U;
si1=l13;
si2=1259668U;
f597(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=8U;
si1=l19;
f52(i,si0,si1);
UNREACHABLE;
L29:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l4;
si2=32U;
si1+=si2;
si2=1258408U;
si3=l4;
si4=40U;
si3+=si4;
si4=1259780U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L28:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l4;
si2=32U;
si1+=si2;
si2=1258408U;
si3=l4;
si4=40U;
si3+=si4;
si4=1259764U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l19;
si1=l13;
si2=1259684U;
f594(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=-1U;
si1=l13;
si2=1259700U;
f597(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l5;
si1=l7;
si2=1259716U;
f597(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l0;
si1=l7;
si2=1259732U;
f593(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1248571U;
si1=43U;
si2=1248736U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1251468U;
si1=25U;
si2=1251496U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l13;
si1=128U;
si2=1251452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l0;
si1=l7;
si2=1259748U;
f593(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l5=si0;
L45:;
{
si0=l5;
l8=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l8;
si1=-8U;
si0+=si1;
l5=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L45;
}
}
L44:;
si0=l17;
if(si0){
goto L46;
}
si0=l16;
f15024(i,si0);
L46:;
si0=l18;
if(si0){
goto L47;
}
si0=l14;
f15024(i,si0);
L47:;
si0=l8;
si0=!(si0);
l0=si0;
goto L1;
L18:;
si0=l17;
if(si0){
goto L48;
}
si0=l16;
f15024(i,si0);
L48:;
si0=l18;
if(si0){
goto L1;
}
si0=l14;
f15024(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1274(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L1;
}
L13:;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L1;
}
L12:;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
default:
goto L1;
}
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L2;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
goto L2;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l3=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
goto L2;
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
goto L2;
L14:;
si0=l3;
si1=l2;
si2=1259876U;
f593(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l3;
si2=1259828U;
f597(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l2;
si2=1259844U;
f683(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l4;
si2=1259844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=l2;
si2=1259860U;
f683(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l2;
si1=l4;
si2=1259860U;
f597(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=1255776U;
si1=14U;
si2=1259892U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1275(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
si0=l2;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
default:
goto L1;
}
L14:;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
default:
goto L1;
}
L13:;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L1;
}
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l3=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L2;
L11:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
goto L2;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
l3=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
goto L2;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l3=si1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=l3;
si0-=si1;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
goto L2;
L8:;
si0=l2;
si1=l3;
si2=1259908U;
f597(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l2;
si2=1259924U;
f683(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si1=l4;
si2=1259924U;
f597(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l2;
si2=1259940U;
f683(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=l4;
si2=1259940U;
f597(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l2;
si2=1259956U;
f593(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=1255776U;
si1=14U;
si2=1259972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1276(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U32 l17=0;
U64 l18=0;
U64 l19=0;
U64 l20=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=224U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l6;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
if(si0){
goto L4;
}
sj0=0ULL;
l8=sj0;
sj0=0ULL;
l9=sj0;
goto L3;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l4;
si1=1U;
si0&=si1;
l10=si0;
si0=l4;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L6;
}
si0=0U;
l12=si0;
sj0=0ULL;
l13=sj0;
goto L5;
L6:;
si0=l4;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l12=si0;
si0=l3;
l6=si0;
si0=l1;
l2=si0;
sj0=0ULL;
l13=sj0;
L7:;
{
si0=l7;
si1=192U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+192U);
l9=sj1;
sj2=l13;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=208U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=8U;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+208U);
l16=sj1;
si2=l7;
si3=192U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l15;
sj4=l9;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l7;
si1=208U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l9;
sj2=l16;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l13=sj0;
si0=l14;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L5:;
si0=l10;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=176U;
si0+=si1;
si1=l3;
si2=l12;
si3=3U;
si2<<=(si3&31);
l6=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l6;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+176U);
l8=sj1;
sj2=l13;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=184U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l9;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l13=sj0;
L8:;
si0=l4;
si1=1U;
si0&=si1;
l17=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l9=sj0;
si0=l11;
if(si0){
goto L10;
}
sj0=0ULL;
l15=sj0;
si0=0U;
l12=si0;
sj0=0ULL;
l18=sj0;
goto L9;
L10:;
si0=l4;
si1=-2U;
si0&=si1;
l10=si0;
sj0=0ULL;
l18=sj0;
si0=0U;
l12=si0;
si0=l5;
l2=si0;
si0=l1;
l6=si0;
sj0=0ULL;
l15=sj0;
L11:;
{
si0=l7;
si1=144U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
sj1=l15;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l8=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+144U);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=160U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=8U;
si0+=si1;
l14=si0;
sj1=0ULL;
sj2=l8;
sj3=l15;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l7;
si3=144U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l16;
sj3=l8;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l15=sj1;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l8=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+160U);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=l15;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=160U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l16;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l15=sj0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l10;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L9:;
si0=l17;
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si1=128U;
si0+=si1;
si1=l5;
si2=l12;
si3=3U;
si2<<=(si3&31);
l6=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l6;
si0+=si1;
l6=si0;
sj1=l15;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l8=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+128U);
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l8;
sj2=l15;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l7;
si2=136U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l9;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l15=sj0;
L12:;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l6=si0;
si1=1U;
si0+=si1;
l12=si0;
si1=3U;
si0&=si1;
l2=si0;
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l6;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L14;
}
sj0=0ULL;
l9=sj0;
si0=l5;
l6=si0;
goto L13;
L14:;
si0=l12;
si1=1073741820U;
si0&=si1;
l12=si0;
sj0=0ULL;
l9=sj0;
si0=l5;
l6=si0;
L15:;
{
si0=l7;
si1=64U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+64U);
l16=sj1;
sj2=l9;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=112U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l14;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+112U);
l18=sj1;
si2=l7;
si3=64U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l9;
sj4=l16;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=96U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l14;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+96U);
l16=sj1;
si2=l7;
si3=112U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l9;
sj4=l18;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=80U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l14;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+80U);
l18=sj1;
si2=l7;
si3=96U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l9;
sj4=l16;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=32U;
si0+=si1;
l6=si0;
si0=l7;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l9;
sj2=l18;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l9=sj0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L15;
}
}
L13:;
si0=l2;
si0=!(si0);
if(si0){
goto L16;
}
L17:;
{
si0=l7;
si1=48U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l8;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+48U);
l16=sj1;
sj2=l9;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l7;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l9;
sj2=l16;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L17;
}
}
L16:;
si0=l4;
si1=1U;
si0&=si1;
l17=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l18=sj0;
si0=l11;
if(si0){
goto L19;
}
sj0=0ULL;
l8=sj0;
si0=0U;
l12=si0;
sj0=0ULL;
l19=sj0;
goto L18;
L19:;
si0=l4;
si1=-2U;
si0&=si1;
l10=si0;
sj0=0ULL;
l19=sj0;
si0=0U;
l12=si0;
si0=l3;
l2=si0;
si0=l5;
l6=si0;
sj0=0ULL;
l8=sj0;
L20:;
{
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l18;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
sj1=l8;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l16=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l18;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=8U;
si0+=si1;
l14=si0;
sj1=0ULL;
sj2=l16;
sj3=l8;
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
sj2=l20;
sj3=l16;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l16=sj1;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l8=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
sj1=l16;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l7;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l20;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l10;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
L18:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L21;
}
si0=l7;
si1=l3;
si2=l12;
si3=3U;
si2<<=(si3&31);
l2=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l18;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=l2;
si0+=si1;
l2=si0;
sj1=l8;
si2=l2;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l16=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l16;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l18;
sj2=l16;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
L21:;
si0=l5;
si1=l6;
si0+=si1;
l5=si0;
sj0=l8;
sj1=l9;
sj0+=sj1;
l9=sj0;
sj0=l15;
sj1=l13;
sj0+=sj1;
l8=sj0;
L3:;
si0=l5;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=224U;
si0+=si1;
i->g0=si0;
sj0=l9;
sj1=l8;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
si1=l4;
si0+=si1;
goto L0;
L2:;
si0=1260892U;
si1=31U;
si2=1260924U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1260940U;
si1=30U;
si2=1260972U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1277(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=i->g0;
si1=128U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l5;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si2=-1U;
si1+=si2;
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l3;
si1=l5;
si0-=si1;
si1=1U;
si0+=si1;
l8=si0;
si1=l5;
si2=l8;
si3=l5;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=329U;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
si2=1U;
si1<<=(si2&31);
si2=3U;
si1=DIV_U(si1,si2);
l10=si1;
si0-=si1;
l8=si0;
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
si1=-4U;
si0&=si1;
si1=4U;
si0+=si1;
l11=si0;
si0=l8;
si1=101U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l8;
si1=3U;
si0+=si1;
si1=2U;
si0>>=(si1&31);
si1=20U;
si0*=si1;
si1=32U;
si2=l8;
si3=-1U;
si2+=si3;
si3=100U;
si2=DIV_U(si2,si3);
si2=I32_CLZ(si2);
si1-=si2;
si2=22U;
si1*=si2;
si0+=si1;
si1=101U;
si0+=si1;
l8=si0;
L5:;
si0=l9;
si1=l11;
si2=l8;
si3=l10;
si4=l7;
si3+=si4;
l7=si3;
si4=l8;
si5=l7;
si4=si4 > si5;
si2=si4?si2:si3;
si1+=si2;
l8=si1;
si2=l9;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
goto L1;
L4:;
si0=1261640U;
si1=29U;
si2=1261672U;
f604(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=1U;
si1=l6;
si2=84U;
si1+=si2;
si2=1256372U;
si3=l6;
si4=96U;
si3+=si4;
si4=1261036U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=1U;
si1=l8;
si2=1258408U;
si3=l6;
si4=96U;
si3+=si4;
si4=1261052U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l8;
if(si0){
goto L12;
}
si0=8U;
l10=si0;
goto L11;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=l8;
si1=1U;
si0=f15026(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=l5;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l10;
si1=l9;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1185(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l2;
l7=si0;
L15:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L14;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l12;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
goto L15;
}
L14:;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=l4;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=l10;
f15024(i,si0);
goto L7;
L10:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l5;
si1=l1;
si2=1261624U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l5;
l8=si0;
si0=l5;
si1=330U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l5;
l7=si0;
L25:;
{
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l9;
si1=l7;
si2=l7;
si3=1U;
si2<<=(si3&31);
si3=3U;
si2=DIV_U(si2,si3);
l13=si2;
si1-=si2;
l14=si1;
si2=1U;
si1<<=(si2&31);
si2=2U;
si1+=si2;
si2=-4U;
si1&=si2;
si2=4U;
si1+=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l14;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l15=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=2U;
si0<<=(si1&31);
l16=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l16;
si0=!(si0);
if(si0){
goto L26;
}
si0=l10;
si1=0U;
si2=l11;
si3=5U;
si2<<=(si3&31);
si0=f15145(i,si0,si1,si2);
L26:;
si0=l15;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l10;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=3U;
si0*=si1;
l16=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l16;
si1=l8;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l10;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+100U,si1);
si0=l6;
si1=l11;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+116U,si1);
si0=l6;
si1=l11;
si2=1U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l2;
si1=l13;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
si1=l14;
si2=l4;
si3=l11;
si2+=si3;
si3=l14;
si4=l6;
si5=96U;
si4+=si5;
si5=l10;
si6=l8;
si7=3U;
si6<<=(si7&31);
si5+=si6;
l11=si5;
si6=l9;
si7=l8;
si6-=si7;
l8=si6;
si0=f1262(i,si0,si1,si2,si3,si4,si5,si6);
l16=si0;
if(si0){
goto L29;
}
si0=l6;
si1=l2;
si2=l7;
si3=l4;
si4=l7;
si5=l0;
si6=l1;
si7=l10;
si8=l9;
si1=f1267(i,si1,si2,si3,si4,si5,si6,si7,si8);
l8=si1;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l8;
if(si0){
goto L28;
}
si0=l7;
l5=si0;
si0=l10;
f15024(i,si0);
goto L7;
L29:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+116U);
l15=si0;
si1=l14;
si2=-1U;
si1+=si2;
si2=1U;
si1>>=(si2&31);
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l15;
si1=l13;
si0+=si1;
si1=l7;
si2=l13;
si1+=si2;
si2=-1U;
si1+=si2;
si2=1U;
si1>>=(si2&31);
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
si2=l16;
si3=l13;
si2+=si3;
si3=l2;
si4=l7;
si5=l4;
si6=l7;
si7=l13;
si8=l11;
si9=l8;
si1=f1259(i,si1,si2,si3,si4,si5,si6,si7,si8,si9);
l8=si1;
i32_store(&i->m0,(U64)si0+84U,si1);
L28:;
si0=l8;
l7=si0;
si0=l8;
si1=329U;
si0=si0 > si1;
if(si0){
goto L25;
}
goto L16;
L27:;
}
si0=1261500U;
si1=45U;
si2=1261548U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l7;
si1=l3;
si2=1261452U;
f597(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l7;
si1=l5;
si2=1261468U;
f597(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1255136U;
si1=35U;
si2=1261484U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l16;
si1=l8;
si2=1259988U;
f597(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l11;
si1=l8;
si2=1259908U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l16;
si1=l8;
si2=1259956U;
f593(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=0U;
si1=0U;
si2=1260004U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1261564U;
si1=42U;
si2=1261608U;
f604(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L44;
}
si0=l8;
l7=si0;
goto L43;
L44:;
si0=l6;
si1=120U;
si0+=si1;
l16=si0;
si0=l6;
si1=112U;
si0+=si1;
l15=si0;
si0=l10;
l11=si0;
L45:;
{
si0=l8;
si1=-1U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l7;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L47;
}
si0=l6;
si1=l4;
si2=l7;
si3=3U;
si2<<=(si3&31);
l7=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l2;
si3=l7;
si2+=si3;
l7=si2;
sj2=i64_load(&i->m0,(U64)si2);
sj1|=sj2;
l12=sj1;
i64_store(&i->m0,(U64)si0+88U,sj1);
sj0=l12;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L46;
}
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=1U;
si1=l6;
si2=88U;
si1+=si2;
si2=1258408U;
si3=l6;
si4=96U;
si3+=si4;
si4=1261260U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L48:;
si0=l7;
si1=l3;
si2=1261228U;
f594(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l7;
si1=l5;
si2=1261244U;
f594(i,si0,si1,si2);
UNREACHABLE;
L46:;
sj0=l12;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L55;
}
si0=l8;
si1=-2U;
si0+=si1;
l14=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L54;
}
si0=l8;
si1=-3U;
si0+=si1;
l13=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L53;
}
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l13;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l2;
si1=l14;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
sj1=0ULL;
sj2=l12;
sj2=I64_CLZ(sj2);
l12=sj2;
sj1-=sj2;
l19=sj1;
sj0>>=(sj1&63);
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l12;
sj1<<=(sj2&63);
sj0|=sj1;
l20=sj0;
si0=l2;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l19;
sj2=63ULL;
sj1&=sj2;
l21=sj1;
sj0>>=(sj1&63);
sj1=l18;
sj2=l12;
sj1<<=(sj2&63);
sj0|=sj1;
l18=sj0;
si0=l4;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l21;
sj0>>=(sj1&63);
si1=l4;
si2=l14;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj0|=sj1;
l19=sj0;
sj0=l22;
sj1=l21;
sj0>>=(sj1&63);
sj1=l17;
sj2=l12;
sj1<<=(sj2&63);
sj0|=sj1;
l17=sj0;
goto L49;
L55:;
si0=l8;
si1=-2U;
si0+=si1;
l14=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l4;
si1=l14;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si0=l2;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
goto L49;
L56:;
si0=l14;
si1=l5;
si2=1261356U;
f594(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l14;
si1=l3;
si2=1261276U;
f594(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l13;
si1=l3;
si2=1261292U;
f594(i,si0,si1,si2);
UNREACHABLE;
L52:;
si0=l14;
si1=l5;
si2=1261308U;
f594(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l13;
si1=l5;
si2=1261324U;
f594(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l14;
si1=l3;
si2=1261340U;
f594(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l16;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+104U,sj1);
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
sj0=l20;
sj1=l18;
sj2=l17;
sj3=l19;
si4=l6;
si5=96U;
si4+=si5;
si0=f1268(i,sj0,sj1,sj2,sj3,si4);
if(si0){
goto L58;
}
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l8;
si1=l5;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l6;
si1=l2;
si2=l8;
si3=l4;
si4=l8;
si5=l0;
si6=l1;
si7=l11;
si8=l9;
si1=f1267(i,si1,si2,si3,si4,si5,si6,si7,si8);
l7=si1;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l7;
if(si0){
goto L57;
}
si0=l8;
l5=si0;
si0=l10;
f15024(i,si0);
goto L7;
L58:;
si0=l8;
si1=l9;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l8;
si1=l5;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l6;
si1=l6;
si2=96U;
si1+=si2;
si2=l11;
si3=l8;
si4=l2;
si5=l8;
si6=l4;
si7=l8;
si1=f1264(i,si1,si2,si3,si4,si5,si6,si7);
l7=si1;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l3;
l8=si0;
si0=l2;
l14=si0;
si0=l9;
l3=si0;
si0=l11;
l2=si0;
si0=l14;
l11=si0;
si0=l8;
l9=si0;
L57:;
si0=l7;
l8=si0;
si0=l7;
si1=2U;
si0=si0 > si1;
if(si0){
goto L45;
}
}
L43:;
si0=l7;
si1=-1U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L37;
}
goto L36;
L42:;
si0=l8;
si1=l3;
si2=1261372U;
f597(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l8;
si1=l5;
si2=1261388U;
f597(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l8;
si1=l9;
si2=1261404U;
f597(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l8;
si1=l3;
si2=1261420U;
f597(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l8;
si1=l5;
si2=1261436U;
f597(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l8;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L34;
}
L36:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=(U32)(sj0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L60;
}
si0=l2;
l11=si0;
si0=l3;
l8=si0;
si0=l4;
l2=si0;
si0=l5;
l3=si0;
goto L59;
L60:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
l11=si0;
si0=l5;
l8=si0;
L59:;
sj0=l12;
si0=(U32)(sj0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L33;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L61;
}
sj0=l17;
sj1=l17;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l20=sj0;
si0=!(sj0);
if(si0){
goto L30;
}
sj0=l12;
sj0=I64_CTZ(sj0);
l17=sj0;
sj1=l20;
sj1=I64_CTZ(sj1);
l18=sj1;
sj2=l17;
sj3=l18;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l19=sj0;
sj0=l12;
sj1=l17;
sj0>>=(sj1&63);
l17=sj0;
sj1=l20;
sj2=l18;
sj1>>=(sj2&63);
l12=sj1;
si0=sj0 != sj1;
if(si0){
goto L62;
}
sj0=l17;
l12=sj0;
goto L31;
L62:;
L63:;
{
sj0=l17;
sj1=l12;
si0=sj0 < sj1;
if(si0){
goto L65;
}
sj0=l17;
sj1=l12;
sj0-=sj1;
l17=sj0;
sj1=l17;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l17=sj0;
goto L64;
L65:;
sj0=l12;
sj1=l17;
sj0-=sj1;
l12=sj0;
sj1=l12;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l12=sj0;
L64:;
sj0=l17;
sj1=l12;
si0=sj0 == sj1;
if(si0){
goto L31;
}
goto L63;
}
L61:;
si0=l3;
si1=1U;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=1U;
si1=1U;
si2=1261116U;
f594(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l8;
si1=l5;
si2=1261084U;
f594(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1256144U;
si1=50U;
si2=1261212U;
f604(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=1261164U;
si1=29U;
si2=1261196U;
f604(i,si0,si1,si2);
UNREACHABLE;
L32:;
sj0=0ULL;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
l20=sj1;
sj2=l17;
si2=!(sj2);
l7=si2;
sj0=si2?sj0:sj1;
l18=sj0;
sj0=l20;
sj1=l17;
si2=l7;
sj0=si2?sj0:sj1;
l17=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L66;
}
sj0=l18;
sj1=0ULL;
sj2=l17;
sj2=I64_CTZ(sj2);
l20=sj2;
sj1-=sj2;
sj0<<=(sj1&63);
sj1=l17;
sj2=l20;
sj1>>=(sj2&63);
sj0|=sj1;
l17=sj0;
sj0=l18;
sj1=l20;
sj0>>=(sj1&63);
l18=sj0;
L66:;
si0=l8;
si1=2U;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0+8U);
l20=sj0;
sj0=l17;
sj1=l18;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L67;
}
si0=l6;
si1=64U;
si0+=si1;
sj1=l12;
sj2=l20;
sj3=l12;
sj3=I64_CTZ(sj3);
sj4=l20;
sj4=I64_CTZ(sj4);
sj5=64ULL;
sj4+=sj5;
sj5=l12;
sj6=0ULL;
si5=sj5 != sj6;
sj3=si5?sj3:sj4;
l19=sj3;
si3=(U32)(sj3);
f15158(i,si0,sj1,sj2,si3);
si0=l6;
si1=48U;
si0+=si1;
sj1=l17;
sj2=l18;
sj3=l17;
sj3=I64_CTZ(sj3);
sj4=l18;
sj4=I64_CTZ(sj4);
sj5=64ULL;
sj4+=sj5;
sj5=l17;
sj6=0ULL;
si5=sj5 != sj6;
sj3=si5?sj3:sj4;
l12=sj3;
si3=(U32)(sj3);
f15158(i,si0,sj1,sj2,si3);
sj0=l19;
sj1=l12;
sj2=l19;
sj3=l12;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l21=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+64U);
l18=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+48U);
l20=sj1;
sj0^=sj1;
si1=l6;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l6;
si3=48U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l12=sj2;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L70;
}
sj0=l18;
l20=sj0;
sj0=l17;
l12=sj0;
goto L68;
L70:;
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
L71:;
{
sj0=l18;
sj1=l20;
si0=sj0 < sj1;
l8=si0;
sj1=l17;
sj2=l12;
si1=sj1 < sj2;
sj2=l17;
sj3=l12;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L73;
}
si0=l6;
si1=32U;
si0+=si1;
sj1=l18;
sj2=l20;
sj1-=sj2;
l18=sj1;
sj2=l17;
sj3=l12;
sj2-=sj3;
si3=l8;
sj3=(U64)(si3);
sj2-=sj3;
l17=sj2;
sj3=l18;
sj3=I64_CTZ(sj3);
sj4=l17;
sj4=I64_CTZ(sj4);
sj5=64ULL;
sj4+=sj5;
sj5=l18;
sj6=0ULL;
si5=sj5 != sj6;
sj3=si5?sj3:sj4;
si3=(U32)(sj3);
si4=127U;
si3&=si4;
f15158(i,si0,sj1,sj2,si3);
si0=l6;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+32U);
l18=sj0;
goto L72;
L73:;
si0=l6;
si1=16U;
si0+=si1;
sj1=l20;
sj2=l18;
sj1-=sj2;
l19=sj1;
sj2=l12;
sj3=l17;
sj2-=sj3;
sj3=l20;
sj4=l18;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2-=sj3;
l12=sj2;
sj3=l19;
sj3=I64_CTZ(sj3);
sj4=l12;
sj4=I64_CTZ(sj4);
sj5=64ULL;
sj4+=sj5;
sj5=l19;
sj6=0ULL;
si5=sj5 != sj6;
sj3=si5?sj3:sj4;
si3=(U32)(sj3);
si4=127U;
si3&=si4;
f15158(i,si0,sj1,sj2,si3);
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+16U);
l20=sj0;
L72:;
sj0=l18;
sj1=l20;
sj0^=sj1;
sj1=l17;
sj2=l12;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L68;
}
goto L71;
}
L69:;
si0=1U;
si1=1U;
si2=1261132U;
f594(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l6;
sj1=l20;
sj2=l12;
sj3=l21;
si3=(U32)(sj3);
f15156(i,si0,sj1,sj2,si3);
si0=l6;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
L67:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L74;
}
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
f15024(i,si0);
si0=1U;
si1=2U;
sj2=l20;
si2=!(sj2);
si0=si2?si0:si1;
l5=si0;
goto L7;
L74:;
si0=1U;
si1=l1;
si2=1261148U;
f594(i,si0,si1,si2);
UNREACHABLE;
L31:;
sj0=l12;
sj1=l19;
sj0<<=(sj1&63);
l12=sj0;
L30:;
si0=l1;
si0=!(si0);
if(si0){
goto L75;
}
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l10;
f15024(i,si0);
goto L7;
L75:;
si0=0U;
si1=0U;
si2=1261100U;
f594(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l6;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L6:;
si0=l8;
si1=l3;
si2=1261068U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1278(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si0=I32_CLZ(si0);
si1=l2;
si1=I32_CTZ(si1);
l5=si1;
si0+=si1;
si1=-24U;
si0+=si1;
si1=255U;
si0&=si1;
si1=7U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l5;
sj2=(U64)(si2);
f1279(i,si0,si1,sj2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l6;
si0+=si1;
si1=l6;
si2=1U;
si1>>=(si2&31);
l8=si1;
si0-=si1;
l9=si0;
si0=0U;
l2=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l6;
si1=-1U;
si0+=si1;
l1=si0;
si0=l8;
si1=2147483646U;
si0&=si1;
l10=si0;
si0=0U;
l2=si0;
L8:;
{
si0=l7;
si1=l1;
si0+=si1;
l11=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l11;
si1=l7;
si2=l2;
si1+=si2;
l5=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
si2=l2;
si3=-2U;
si2^=si3;
si1+=si2;
si0+=si1;
l11=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l11;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-2U;
si0+=si1;
l1=si0;
si0=l10;
si1=l2;
si2=2U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l6;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=l2;
si0+=si1;
l1=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=l9;
si2=l8;
si3=l2;
si4=-1U;
si3^=si4;
si2+=si3;
si1+=si2;
l2=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
L6:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
sj0=(U64)(si0);
l13=sj0;
si0=0U;
l2=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
L9:;
{
sj0=l4;
sj1=l4;
sj2=l13;
sj1=DIV_U(sj1,sj2);
l14=sj1;
sj2=l13;
sj1*=sj2;
sj0-=sj1;
si0=(U32)(sj0);
l1=si0;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f1296(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si2=1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
sj0=l4;
sj1=l13;
si0=sj0 >= sj1;
l1=si0;
sj0=l14;
l4=sj0;
si0=l1;
if(si0){
goto L9;
}
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l15=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l11;
si1=l2;
si0+=si1;
si1=l2;
si2=1U;
si1>>=(si2&31);
l9=si1;
si0-=si1;
l10=si0;
si0=0U;
l1=si0;
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l9;
si1=2147483646U;
si0&=si1;
l6=si0;
si0=0U;
l1=si0;
L13:;
{
si0=l11;
si1=l5;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l12;
si1=l11;
si2=l1;
si1+=si2;
l7=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
si2=l1;
si3=-2U;
si2^=si3;
si1+=si2;
si0+=si1;
l12=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l8=si0;
si0=l12;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=-2U;
si0+=si1;
l5=si0;
si0=l6;
si1=l1;
si2=2U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l2;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l11;
si1=l1;
si0+=si1;
l5=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l10;
si2=l9;
si3=l1;
si4=-1U;
si3^=si4;
si2+=si3;
si1+=si2;
l1=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
L11:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l15;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
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
si1=1206456U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1206464U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1206608U;
f614(i,si0,si1);
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
si0=1262033U;
si1=31U;
si2=1262064U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1279(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l2;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l2;
sj1=8ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
sj0=64ULL;
sj1=l4;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=l2;
si0=sj0 <= sj1;
if(si0){
goto L4;
}
si0=-1U;
si1=-1U;
sj2=l2;
si2=(U32)(sj2);
si3=255U;
si2&=si3;
si1<<=(si2&31);
si2=-1U;
si1^=si2;
sj2=l2;
sj3=8ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l5=si0;
si0=0U;
l1=si0;
L5:;
{
si0=l5;
sj1=l4;
si1=(U32)(sj1);
si0&=si1;
l6=si0;
si0=l1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
f1296(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l1;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
sj0=l4;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj0>>=(sj1&63);
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
f1296(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si0+=si1;
sj1=l4;
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+16U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
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
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l3;
si2=1262080U;
si3=l3;
si4=8U;
si3+=si4;
si4=1262300U;
f1251(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=256U;
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
si1=1262128U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=392U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1262320U;
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
si1=1262284U;
f614(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1280(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10) {
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
U64 l25=0;
U64 l26=0;
U32 si0,si1,si2,si3,si4,si5,si7,si8,si9,si10,si11,si12;
U64 sj0,sj1,sj2,sj5,sj6;
si0=i->g0;
si1=32U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=0U;
l12=si0;
si0=l4;
si1=15U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
l13=si0;
goto L4;
L5:;
si0=l9;
si1=-8U;
si0+=si1;
l14=si0;
si0=l3;
si1=-8U;
si0+=si1;
l15=si0;
si0=0U;
l12=si0;
L6:;
{
si0=l8;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=0U;
si1=l4;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0-=si1;
l16=si0;
si0=l15;
si1=l13;
si0+=si1;
l17=si0;
L12:;
{
si0=l6;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l19=si0;
si1=l18;
si1=i32_load(&i->m0,(U64)si1+4U);
l20=si1;
si0+=si1;
l13=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l13;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=l19;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l11;
si1=l4;
si2=l19;
si1-=si2;
l13=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l20;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l20;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l21;
si1=-8U;
si0+=si1;
l22=si0;
si0=l20;
si1=3U;
si0<<=(si1&31);
l13=si0;
si0=l16;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l17;
l23=si0;
L15:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L14;
}
si0=l21;
si1=8U;
si0+=si1;
l21=si0;
si0=l22;
si1=l13;
si0+=si1;
l24=si0;
si0=l23;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si0=l23;
si1=-8U;
si0+=si1;
l23=si0;
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
sj0=l25;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
si0=sj0 == sj1;
if(si0){
goto L15;
}
}
sj0=l26;
sj1=l25;
si0=sj0 > sj1;
if(si0){
goto L13;
}
goto L8;
L14:;
si0=l13;
si0=!(si0);
if(si0){
goto L8;
}
L13:;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L12;
}
}
L11:;
si0=l8;
si1=l7;
si2=1272940U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l11;
si2=l11;
si3=4U;
si2+=si3;
si3=l11;
si4=8U;
si3+=si4;
si4=1231576U;
f1250(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l19;
si1=l4;
si2=1272956U;
f593(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
l13=si0;
L7:;
si0=l4;
si1=l19;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
si1=l10;
si2=l3;
si3=l19;
si4=3U;
si3<<=(si4&31);
l23=si3;
si2+=si3;
si3=l4;
si4=l19;
si3-=si4;
si4=l18;
si4=i32_load(&i->m0,(U64)si4);
l24=si4;
si5=l20;
f1185(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l13;
si0-=si1;
l21=si0;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l21;
si1=l9;
si2=l21;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
si1=sj1 != sj2;
si0+=si1;
l16=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l16;
si1=l13;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l19;
si1=l13;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l13;
si1=l10;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l24;
si1=-8U;
si0+=si1;
l22=si0;
si0=l20;
si1=3U;
si0<<=(si1&31);
l21=si0;
si0=l14;
si1=l23;
si0+=si1;
l4=si0;
L23:;
{
si0=l21;
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si1=l21;
si0+=si1;
l23=si0;
si0=l22;
si1=l21;
si0+=si1;
l24=si0;
si0=l21;
si1=-8U;
si0+=si1;
l21=si0;
si0=l24;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
si0=sj0 == sj1;
if(si0){
goto L23;
}
}
sj0=l25;
sj1=l26;
si0=sj0 <= sj1;
if(si0){
goto L21;
}
goto L16;
L22:;
si0=l21;
if(si0){
goto L16;
}
L21:;
si0=1273052U;
si1=168U;
si2=1273220U;
f604(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l19;
si1=l4;
si2=1272972U;
f593(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l21;
si1=l10;
si2=1272988U;
f594(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l19;
si1=l13;
si2=1273004U;
f683(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l13;
si1=l10;
si2=1273004U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l2;
if(si0){
goto L25;
}
si0=0U;
l21=si0;
goto L24;
L25:;
si0=l2;
si1=l18;
si1=i32_load(&i->m0,(U64)si1+12U);
si0-=si1;
l21=si0;
L24:;
si0=l10;
si1=l16;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l0;
si2=l1;
si3=l21;
si4=l9;
si5=l16;
sj6=l5;
si7=l6;
si8=l7;
si9=l8;
si10=-1U;
si9+=si10;
l8=si9;
si10=l9;
si11=l16;
si12=3U;
si11<<=(si12&31);
si10+=si11;
si11=l10;
si12=l16;
si11-=si12;
si1=f1280(i,si1,si2,si3,si4,si5,sj6,si7,si8,si9,si10,si11);
l21=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l21;
si1=l12;
si0+=si1;
l12=si0;
si0=l0;
si1=l21;
si0+=si1;
l0=si0;
si0=l1;
si1=l21;
si0-=si1;
l1=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l13;
l4=si0;
si0=l13;
si1=15U;
si0=si0 >= si1;
if(si0){
goto L6;
}
}
L4:;
si0=l13;
if(si0){
goto L27;
}
si0=l2;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L28;
}
si0=0U;
l2=si0;
goto L26;
L28:;
si0=l0;
si1=0U;
si2=l2;
si0=f15145(i,si0,si1,si2);
goto L26;
L27:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l13;
sj5=l5;
si0=f1281(i,si0,si1,si2,si3,si4,sj5);
l2=si0;
L26:;
si0=l11;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
si1=l12;
si0+=si1;
goto L0;
L3:;
si0=1262328U;
si1=35U;
si2=1273020U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l21;
si1=l1;
si2=1273036U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l1;
si2=1273236U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1281(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=1568U;
si0-=si1;
l6=si0;
i->g0=si0;
sj0=l5;
sj1=3ULL;
si0=sj0 < sj1;
if(si0){
goto L8;
}
sj0=l5;
sj1=255ULL;
si0=sj0 > sj1;
if(si0){
goto L7;
}
si0=l1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l6;
si1=147U;
si0+=si1;
si1=0U;
si2=1181U;
si0=f15145(i,si0,si1,si2);
si0=l6;
si1=1328U;
si0+=si1;
si1=0U;
si2=232U;
si0=f15145(i,si0,si1,si2);
sj0=l5;
sj1=10ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l4;
si1=29U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
si1=1328U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=1181U;
l7=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l6;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si0=0U;
l7=si0;
L9:;
{
si0=l6;
si1=1328U;
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
si2=1U;
sj3=-8446744073709551616ULL;
sj4=-2865251455325256886ULL;
sj5=0ULL;
sj0=f1175(i,si0,si1,si2,sj3,sj4,sj5);
si0=l6;
si1=48U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+1328U);
sj2=1ULL;
sj1+=sj2;
sj2=0ULL;
sj3=10ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=1328U;
si0+=si1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+48U);
l10=sj1;
i64_store(&i->m0,(U64)si0+1560U,sj1);
si0=l7;
si1=1162U;
si0+=si1;
si1=1181U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=-16U;
si1=1181U;
si2=1273444U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=147U;
si0+=si1;
si1=l7;
si0+=si1;
l3=si0;
si1=1162U;
si0+=si1;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
i64_store8(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l5=sj0;
si0=l6;
si1=32U;
si0+=si1;
sj1=l10;
sj2=-2ULL;
sj1&=sj2;
sj2=0ULL;
sj3=10ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=1163U;
si0+=si1;
si1=l6;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+32U);
sj2=-4ULL;
sj1&=sj2;
sj2=0ULL;
sj3=10ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=1164U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+16U);
sj2=-8ULL;
sj1&=sj2;
sj2=0ULL;
sj3=10ULL;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=1165U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+1560U,sj1);
si0=l6;
si1=1560U;
si0+=si1;
si1=4U;
si2=3U;
f1009(i,si0,si1,si2);
si0=l3;
si1=1166U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+1560U);
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l10=sj0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L11;
}
si0=l6;
sj1=l11;
sj2=1152921504606846974ULL;
sj1&=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0+1560U,sj1);
L11:;
si0=l3;
si1=1167U;
si0+=si1;
sj1=l10;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1168U;
si0+=si1;
sj1=0ULL;
sj2=l11;
sj3=1152921504606846972ULL;
sj2&=sj3;
sj3=l10;
si3=!(sj3);
sj1=si3?sj1:sj2;
l10=sj1;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
sj0=l10;
si0=!(sj0);
if(si0){
goto L12;
}
si0=l6;
sj1=l11;
sj2=1152921504606846968ULL;
sj1&=sj2;
l5=sj1;
i64_store(&i->m0,(U64)si0+1560U,sj1);
L12:;
sj0=l9;
si0=!(sj0);
l12=si0;
si0=l3;
si1=1169U;
si0+=si1;
sj1=l5;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l10=sj0;
si0=l3;
si1=1170U;
si0+=si1;
sj1=0ULL;
sj2=l11;
sj3=1152921504606846960ULL;
sj2&=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
l5=sj1;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1171U;
si0+=si1;
sj1=0ULL;
sj2=l11;
sj3=1152921504606846944ULL;
sj2&=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
l5=sj1;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1172U;
si0+=si1;
sj1=0ULL;
sj2=l11;
sj3=1152921504606846912ULL;
sj2&=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
l11=sj1;
sj2=10ULL;
sj1*=sj2;
l9=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
sj0=0ULL;
l5=sj0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L13;
}
si0=l6;
sj1=l9;
sj2=1152921504606846848ULL;
sj1&=sj2;
l5=sj1;
i64_store(&i->m0,(U64)si0+1560U,sj1);
L13:;
si0=l4;
si1=l12;
si0-=si1;
l4=si0;
si0=l3;
si1=1173U;
si0+=si1;
sj1=l5;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1174U;
si0+=si1;
sj1=0ULL;
sj2=l11;
sj3=1152921504606846720ULL;
sj2&=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
l5=sj1;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1175U;
si0+=si1;
sj1=0ULL;
sj2=l11;
sj3=1152921504606846464ULL;
sj2&=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
l5=sj1;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1176U;
si0+=si1;
sj1=0ULL;
sj2=l11;
sj3=1152921504606845952ULL;
sj2&=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
l5=sj1;
sj2=10ULL;
sj1*=sj2;
l11=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
sj0=l5;
si0=!(sj0);
if(si0){
goto L14;
}
si0=l6;
sj1=l11;
sj2=1152921504606844928ULL;
sj1&=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0+1560U,sj1);
L14:;
si0=l3;
si1=1177U;
si0+=si1;
sj1=l10;
sj2=10ULL;
sj1*=sj2;
l5=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1178U;
si0+=si1;
sj1=0ULL;
sj2=l5;
sj3=1152921504606842880ULL;
sj2&=sj3;
sj3=l10;
si3=!(sj3);
sj1=si3?sj1:sj2;
l5=sj1;
sj2=10ULL;
sj1*=sj2;
l10=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1179U;
si0+=si1;
sj1=0ULL;
sj2=l10;
sj3=1152921504606838784ULL;
sj2&=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
l5=sj1;
sj2=10ULL;
sj1*=sj2;
l10=sj1;
sj2=60ULL;
sj1>>=(sj2&63);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1180U;
si0+=si1;
si1=0U;
sj2=l10;
sj3=1152921504606830592ULL;
sj2&=sj3;
sj3=10ULL;
sj2*=sj3;
sj3=60ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
sj3=l5;
si3=!(sj3);
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=-19U;
si0+=si1;
l7=si0;
si0=l4;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L4;
}
goto L9;
}
L8:;
si0=1273368U;
si1=26U;
si2=1273668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1273624U;
si1=28U;
si2=1273652U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1273572U;
si1=34U;
si2=1273608U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=1U;
si0+=si1;
si1=29U;
si2=1273412U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=1181U;
si0+=si1;
l7=si0;
L3:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+1336U);
l5=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L15;
}
si0=l7;
l3=si0;
goto L1;
L15:;
si0=l6;
si1=147U;
si0+=si1;
si1=-1U;
si0+=si1;
l12=si0;
L17:;
{
si0=l7;
si1=-1U;
si0+=si1;
l3=si0;
si1=1181U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l12;
si1=l7;
si0+=si1;
sj1=l5;
sj2=10ULL;
sj1=DIV_U(sj1,sj2);
l10=sj1;
sj2=246ULL;
sj1*=sj2;
sj2=l5;
sj1+=sj2;
i64_store8(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=10ULL;
si0=sj0 < sj1;
l4=si0;
sj0=l10;
l5=sj0;
si0=l3;
l7=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L17;
}
goto L1;
}
L16:;
si0=l3;
si1=1181U;
si2=1273428U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=29U;
si0=si0 >= si1;
if(si0){
goto L21;
}
sj0=l5;
si0=(U32)(sj0);
si1=40U;
si0*=si1;
l7=si0;
si1=1262536U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l7;
si1=1262528U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=l7;
si1=1262520U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l6;
si1=1328U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
si0=1181U;
l12=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L22;
}
sj0=l11;
sj0=I64_CLZ(sj0);
l14=sj0;
si0=l13;
si1=3U;
si0&=si1;
l15=si0;
si0=l13;
si1=4U;
si0=si0 < si1;
l16=si0;
si0=1181U;
l12=si0;
L23:;
{
si0=l12;
l8=si0;
si0=l4;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=29U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l6;
si1=1328U;
si0+=si1;
si1=l3;
si2=1U;
sj3=l11;
sj4=l9;
sj5=l14;
sj0=f1175(i,si0,si1,si2,sj3,sj4,sj5);
si0=l8;
si1=l13;
si0-=si1;
l12=si0;
si0=l8;
si1=l13;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l8;
si1=1181U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l4;
si1=l6;
si2=1328U;
si1+=si2;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si1=!(sj1);
si0-=si1;
l4=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L24;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+1328U);
sj1=1ULL;
sj0+=sj1;
l10=sj0;
si0=l6;
si1=147U;
si0+=si1;
si1=l12;
si0+=si1;
l3=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L25;
}
si0=l15;
l7=si0;
L26:;
{
si0=l6;
si1=128U;
si0+=si1;
sj1=l10;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=l6;
si2=128U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+128U);
l10=sj0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L26;
}
}
L25:;
si0=l16;
if(si0){
goto L24;
}
si0=l6;
si1=147U;
si0+=si1;
si1=l8;
si0+=si1;
l7=si0;
L27:;
{
si0=l6;
si1=112U;
si0+=si1;
sj1=l10;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=l6;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+112U);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=1U;
si0+=si1;
si1=l6;
si2=96U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l6;
si1=80U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+96U);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=2U;
si0+=si1;
si1=l6;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l6;
si1=64U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+80U);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=3U;
si0+=si1;
si1=l6;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store8(&i->m0,(U64)si0,sj1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+64U);
l10=sj0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L24:;
si0=l4;
si1=1U;
si0=si0 > si1;
if(si0){
goto L23;
}
}
L22:;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+1336U);
l10=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l12;
l3=si0;
goto L1;
L28:;
si0=l6;
si1=147U;
si0+=si1;
si1=-1U;
si0+=si1;
l4=si0;
L30:;
{
si0=l12;
si1=-1U;
si0+=si1;
l3=si0;
si1=1181U;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l4;
si1=l12;
si0+=si1;
sj1=l10;
sj2=l10;
sj3=l5;
sj2=DIV_U(sj2,sj3);
l11=sj2;
sj3=l5;
sj2*=sj3;
sj1-=sj2;
i64_store8(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l5;
si0=sj0 < sj1;
l7=si0;
sj0=l11;
l10=sj0;
si0=l3;
l12=si0;
si0=l7;
if(si0){
goto L1;
}
goto L30;
}
L29:;
si0=l3;
si1=1181U;
si2=1273524U;
f594(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l4;
si1=1U;
si0+=si1;
si1=29U;
si2=1273460U;
f597(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l3;
si1=29U;
si2=1273540U;
f597(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l12;
si1=l8;
si2=1273556U;
f683(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l8;
si1=1181U;
si2=1273556U;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=0U;
si2=l2;
si3=1181U;
si4=l3;
si3-=si4;
l7=si3;
si2-=si3;
l4=si2;
si3=l4;
si4=l2;
si3=si3 > si4;
si1=si3?si1:si2;
l4=si1;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l1;
si1=l4;
si0-=si1;
l12=si0;
si0=l7;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l0;
si1=0U;
si2=l4;
si0=f15145(i,si0,si1,si2);
L34:;
si0=l7;
si1=l12;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l3;
si1=1181U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l0;
si1=l4;
si0+=si1;
si1=l6;
si2=147U;
si1+=si2;
si2=l3;
si1+=si2;
si2=l7;
si0=f15143(i,si0,si1,si2);
si0=l6;
si1=1568U;
si0+=si1;
i->g0=si0;
si0=l4;
si1=l7;
si0+=si1;
goto L0;
L33:;
si0=1262328U;
si1=35U;
si2=1273476U;
f604(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l7;
si1=l12;
si2=1273492U;
f597(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l3;
si1=1181U;
si2=1273508U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1282(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4,U32 l5) {
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
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U64 l25=0;
U64 l26=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=528U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=0U;
l7=si0;
si0=l6;
si1=232U;
si0+=si1;
si1=0U;
si2=256U;
si0=f15145(i,si0,si1,si2);
sj0=l4;
si0=(U32)(sj0);
l8=si0;
si1=257U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=1U;
l9=si0;
si0=l3;
si1=1U;
si2=3U;
si0=f1011(i,si0,si1,si2);
l10=si0;
si0=l8;
si1=40U;
si0*=si1;
si1=1262528U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
l12=si0;
si0=l6;
si1=232U;
si0+=si1;
l13=si0;
L11:;
{
si0=l12;
si1=64U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=64U;
si1=64U;
si2=1273700U;
f594(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l13;
si1=l10;
si2=l11;
si1*=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l10=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l13;
si1=4U;
si0+=si1;
si1=l10;
si2=l11;
si1*=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l12;
si1=2U;
si0+=si1;
l12=si0;
si0=l10;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l10=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l12;
si1=-1U;
si0+=si1;
l13=si0;
si0=l12;
l7=si0;
goto L8;
L10:;
si0=l8;
si1=257U;
si2=1273292U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l12;
si1=1U;
si0+=si1;
l7=si0;
si0=l12;
l13=si0;
L8:;
si0=l13;
si1=63U;
si0=si0 >= si1;
if(si0){
goto L6;
}
L7:;
si0=l6;
si1=232U;
si0+=si1;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si2=3U;
si0=f1011(i,si0,si1,si2);
l15=si0;
si0=1U;
l16=si0;
si0=l7;
si1=2U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=-1U;
si0+=si1;
l17=si0;
si0=1U;
l16=si0;
si0=1U;
l9=si0;
si0=l7;
l13=si0;
L14:;
{
si0=l13;
si1=30U;
si0+=si1;
l3=si0;
si0=l17;
si1=l13;
si2=-1U;
si1+=si2;
l13=si1;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l10=si0;
si1=1U;
si0&=si1;
l12=si0;
si0=l15;
si1=l10;
si2=l3;
si1<<=(si2&31);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l12;
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
si1=l9;
si0+=si1;
l9=si0;
si0=l10;
si1=l16;
si0+=si1;
l16=si0;
goto L15;
L16:;
si0=l10;
si1=0U;
si2=l12;
si0=si2?si0:si1;
si1=l9;
si0+=si1;
l9=si0;
si0=l10;
si1=l12;
si1=!(si1);
si2=l10;
si3=2U;
si2=si2 > si3;
si1&=si2;
si0<<=(si1&31);
si1=l16;
si0+=si1;
l16=si0;
L15:;
si0=l13;
si1=1U;
si0=si0 > si1;
if(si0){
goto L14;
}
}
L13:;
si0=l16;
si1=l9;
si2=150U;
si1*=si2;
si2=100U;
si1=DIV_U(si1,si2);
si0=si0 > si1;
si1=l5;
si2=l5;
si3=255U;
si2&=si3;
si3=2U;
si2=si2 == si3;
si0=si2?si0:si1;
si1=1U;
si0&=si1;
if(si0){
goto L26;
}
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+512U,si1);
si0=l6;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+504U,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=l8;
si2=40U;
si1*=si2;
si2=1262520U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-1U;
si0+=si1;
l10=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l6;
si1=216U;
si0+=si1;
sj1=l4;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+216U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l6;
si2=224U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
si1=504U;
si0+=si1;
si1=0U;
f1297(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
si1=l6;
si1=i32_load(&i->m0,(U64)si1+512U);
si2=4U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+512U);
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+512U,si1);
si0=1U;
si1=2U;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
l18=sj2;
si2=!(sj2);
l17=si2;
si0=si2?si0:si1;
l14=si0;
si0=2U;
si1=1U;
si2=l17;
si0=si2?si0:si1;
l5=si0;
si0=l11;
si1=1U;
si0<<=(si1&31);
l8=si0;
si0=l13;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+508U);
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l13;
f1297(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+512U);
l13=si0;
L27:;
si0=l1;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
si1=l13;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+512U);
si2=1U;
si1+=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+512U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+232U);
l20=si0;
si1=l11;
si2=l7;
si1<<=(si2&31);
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l11;
si1=3U;
si0*=si1;
l21=si0;
si1=l7;
si2=30U;
si1+=si2;
si0<<=(si1&31);
si1=l20;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l10;
si1=l17;
si0-=si1;
l13=si0;
si1=l14;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l14;
si1=l13;
si2=l14;
si1-=si2;
l8=si1;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
l22=si0;
si0=l12;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=l14;
si1=1U;
si0&=si1;
l24=si0;
sj0=l18;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L30;
}
si0=0U;
l12=si0;
sj0=0ULL;
l18=sj0;
goto L29;
L32:;
si0=l10;
si1=l17;
si0-=si1;
l13=si0;
si1=l14;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=3U;
l23=si0;
si0=l12;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l13;
si2=l14;
si1-=si2;
l15=si1;
si2=l10;
si3=l14;
si4=8U;
si5=0U;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=-2U;
l13=si0;
goto L5;
L31:;
si0=l14;
si1=l8;
si2=1200152U;
f597(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l17;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l14;
si1=2U;
si0&=si1;
l15=si0;
si0=l1;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=0U;
l12=si0;
si0=l1;
l10=si0;
sj0=0ULL;
l18=sj0;
L33:;
{
si0=l6;
si1=200U;
si0+=si1;
si1=l10;
si2=l3;
si1+=si2;
l9=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l3;
si0+=si1;
l16=si0;
si1=8U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+200U);
l25=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=184U;
si0+=si1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l16;
si1=16U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+184U);
l26=sj1;
si2=l6;
si3=200U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l18;
sj4=l25;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l6;
si1=184U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l18;
sj2=l26;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l18=sj0;
si0=l15;
si1=l12;
si2=2U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L33;
}
}
L29:;
si0=l23;
si1=l22;
si0+=si1;
l13=si0;
si0=l24;
si0=!(si0);
if(si0){
goto L34;
}
si0=l6;
si1=168U;
si0+=si1;
si1=l23;
si2=l12;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l10;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+168U);
l25=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=176U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l18;
sj2=l25;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l18=sj0;
L34:;
si0=l14;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l13;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=4U;
si1=3U;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2+8U);
si2=!(sj2);
l12=si2;
si0=si2?si0:si1;
l10=si0;
si0=l5;
si1=l17;
si2=l12;
si0=si2?si0:si1;
l17=si0;
si0=l14;
sj1=l18;
sj2=0ULL;
si1=sj1 != sj2;
si0+=si1;
si1=l12;
si0-=si1;
l14=si0;
si0=l19;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+508U);
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l19;
f1297(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+512U);
l19=si0;
L35:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
si1=l19;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si1=l21;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l12;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l12;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+512U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+512U,si1);
si0=l8;
si1=l10;
si2=-3U;
si1+=si2;
l12=si1;
si0-=si1;
l3=si0;
si1=l10;
si2=7U;
si1^=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l14;
si1=l10;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l13;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l3;
si2=l10;
si1-=si2;
l15=si1;
si2=l13;
si3=l14;
si4=8U;
si5=0U;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=7U;
l23=si0;
si0=-3U;
l13=si0;
si0=l21;
l8=si0;
goto L5;
L28:;
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l1;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l12;
si1+=si2;
l13=si1;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l10;
si1=3U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=-3U;
si0+=si1;
l10=si0;
si0=l19;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+508U);
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l19;
f1297(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+512U);
l19=si0;
L37:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
si1=l19;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+512U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+512U,si1);
si0=l10;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l1;
si1=48U;
si0+=si1;
l16=si0;
si1=l2;
si2=-6U;
si1+=si2;
l15=si1;
si2=l1;
si3=24U;
si2+=si3;
si3=l14;
si4=8U;
si5=0U;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=6U;
l23=si0;
si0=-3U;
l13=si0;
goto L5;
L36:;
si0=3U;
si1=3U;
si2=1273764U;
f594(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l2;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si1=l8;
si2=40U;
si1*=si2;
si2=1262520U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=134217726U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l7;
si1=1U;
si0+=si1;
l12=si0;
si1=4U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l10;
if(si0){
goto L42;
}
si0=4U;
l13=si0;
goto L41;
L42:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L38;
}
L41:;
si0=l13;
si1=l11;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l13;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l12;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+516U,si1);
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l7;
si1=65U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l7;
si0=!(si0);
if(si0){
goto L46;
}
si0=l2;
si1=-1U;
si0+=si1;
l17=si0;
si0=l1;
si1=8U;
si0+=si1;
l15=si0;
sj0=-1ULL;
sj1=l26;
sj1=I64_CTZ(sj1);
l25=sj1;
sj0<<=(sj1&63);
sj1=-1ULL;
sj0^=sj1;
l18=sj0;
si0=0U;
l19=si0;
si0=l11;
l8=si0;
si0=1U;
l10=si0;
L47:;
{
si0=l10;
si1=1U;
si0<<=(si1&31);
l16=si0;
si0=l14;
si1=-4U;
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=1U;
l5=si0;
si0=0U;
l13=si0;
si0=8U;
l2=si0;
si0=l10;
si1=43U;
si0=si0 < si1;
if(si0){
goto L48;
}
si0=l10;
si1=390U;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l10;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L54;
}
si0=l10;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l13=si0;
goto L53;
L54:;
si0=l10;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=l10;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l13=si0;
L53:;
si0=l13;
si1=3U;
si0<<=(si1&31);
l9=si0;
goto L49;
L52:;
si0=l16;
si1=128U;
si0+=si1;
l3=si0;
goto L50;
L51:;
si0=1U;
l5=si0;
si0=0U;
l13=si0;
si0=8U;
l2=si0;
si0=l10;
si1=50U;
si0=f1007(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L48;
}
L50:;
si0=l3;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l9;
si0=!(si0);
if(si0){
goto L55;
}
si0=l3;
l13=si0;
goto L49;
L55:;
si0=0U;
l5=si0;
si0=l3;
l13=si0;
si0=8U;
l2=si0;
goto L48;
L49:;
si0=0U;
l5=si0;
si0=l9;
si1=1U;
si0=f15026(i,si0,si1);
l2=si0;
if(si0){
goto L48;
}
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L48:;
si0=l15;
si1=l17;
si2=l1;
si3=l10;
si4=l2;
si5=l13;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l16;
si1=-1U;
si0+=si1;
l13=si0;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L58;
}
si0=l13;
si1=l16;
si2=l15;
si3=l13;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l1=si0;
si0=l8;
si1=1U;
si0<<=(si1&31);
l13=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L59;
}
si0=l12;
l8=si0;
goto L56;
L59:;
si0=l1;
si1=l17;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l15;
si1=l1;
sj2=l26;
f1235(i,si0,si1,sj2);
si0=l1;
si1=-1U;
si0+=si1;
l10=si0;
si1=l17;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l10;
si1=l1;
si2=l15;
si3=l10;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l1=si0;
si0=l13;
si1=l11;
si0-=si1;
l8=si0;
goto L56;
L60:;
si0=l10;
si1=l17;
si2=1274200U;
f594(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l13;
si1=l17;
si2=1274168U;
f594(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l1;
si1=l17;
si2=1274184U;
f597(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=l17;
si1=-1U;
si0+=si1;
l9=si0;
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj0=l25;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L63;
}
si0=l15;
si1=8U;
si0+=si1;
l10=si0;
si0=0U;
l12=si0;
L64:;
{
si0=l12;
l13=si0;
sj0=l4;
si0=!(sj0);
l3=si0;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L61;
}
si0=l9;
si1=l13;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=1U;
si0+=si1;
l12=si0;
sj0=l4;
sj1=-1ULL;
sj2=l18;
sj3=l4;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L64;
}
goto L61;
}
L63:;
sj0=l4;
si0=!(sj0);
l3=si0;
si0=0U;
l13=si0;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L61;
}
si0=l9;
si0=!(si0);
if(si0){
goto L62;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L61;
}
si0=l17;
si1=-2U;
si0+=si1;
l12=si0;
si0=l15;
si1=16U;
si0+=si1;
l10=si0;
si0=0U;
l13=si0;
L65:;
{
si0=l12;
si1=l13;
si0=si0 == si1;
if(si0){
goto L62;
}
si0=1U;
l3=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l4;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L61;
}
goto L65;
}
L62:;
si0=l17;
si1=l17;
si2=1274216U;
f594(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l17;
si1=l13;
si0-=si1;
l12=si0;
si1=l16;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l1;
si1=l13;
si0-=si1;
l10=si0;
si1=l16;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l10;
si0=!(si0);
if(si0){
goto L43;
}
si0=l13;
si1=l19;
si2=1U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si1=l3;
si0+=si1;
l9=si0;
si0=l10;
si1=l3;
si0-=si1;
l17=si0;
si0=l15;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+524U);
l13=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+520U);
si0=si0 != si1;
if(si0){
goto L66;
}
si0=l6;
si1=516U;
si0+=si1;
si1=l13;
f1297(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+524U);
l13=si0;
L66:;
si0=l16;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+516U);
si1=l13;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l17;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+524U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l5;
if(si0){
goto L67;
}
si0=l2;
f15024(i,si0);
L67:;
si0=l12;
si1=l16;
si0-=si1;
l17=si0;
si0=l1;
si1=l15;
si0+=si1;
l15=si0;
si0=l14;
si1=l6;
si2=232U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L47;
}
}
L46:;
si0=l6;
si1=488U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=516U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+516U);
i64_store(&i->m0,(U64)si0+488U,sj1);
goto L3;
L45:;
si0=1262328U;
si1=35U;
si2=1274232U;
f604(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l10;
si1=l16;
si2=1274248U;
f597(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=0U;
si1=0U;
si2=1274264U;
f594(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=0U;
si1=0U;
si2=1274136U;
f594(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l7;
si1=64U;
si2=1274152U;
f597(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L25:;
si0=l14;
si1=l8;
si2=1273812U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l14;
si1=l10;
si2=1273844U;
f597(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1262328U;
si1=35U;
si2=1273828U;
f604(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1262328U;
si1=35U;
si2=1273780U;
f604(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=2U;
si1=2U;
si2=1273748U;
f594(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1262328U;
si1=35U;
si2=1273796U;
f604(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1262328U;
si1=35U;
si2=1273860U;
f604(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1U;
si1=l10;
si2=1273732U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1261688U;
si1=43U;
si2=1273716U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=64U;
si2=1273684U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l7;
si1=l13;
si0+=si1;
l22=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L68;
}
si0=l14;
si1=1U;
si0<<=(si1&31);
l19=si0;
si1=-1U;
si0+=si1;
l13=si0;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L70;
}
si0=0U;
si1=l22;
si2=-1U;
si1+=si2;
l10=si1;
si2=l10;
si3=l22;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l22;
l21=si0;
L71:;
{
si0=l10;
l14=si0;
si0=l13;
si1=l19;
si2=l16;
si3=l13;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l12=si0;
si0=l17;
si1=1U;
si0<<=(si1&31);
l17=si0;
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L73;
}
si0=0U;
l5=si0;
goto L72;
L73:;
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
si0=1U;
l5=si0;
si0=l17;
si1=1U;
si0|=si1;
l17=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
L72:;
si0=l8;
si1=1U;
si0<<=(si1&31);
l13=si0;
si1=l11;
si0+=si1;
l8=si0;
si1=l21;
si0<<=(si1&31);
si1=l20;
si0=si0 <= si1;
if(si0){
goto L75;
}
si0=l16;
l10=si0;
si0=l13;
l8=si0;
goto L74;
L75:;
si0=l12;
si1=l15;
si0=si0 > si1;
if(si0){
goto L76;
}
si0=l12;
if(si0){
goto L78;
}
sj0=0ULL;
l18=sj0;
goto L77;
L78:;
si0=l12;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l3=si0;
si1=1U;
si0+=si1;
l9=si0;
si1=3U;
si0&=si1;
l10=si0;
sj0=0ULL;
l18=sj0;
si0=l16;
l13=si0;
si0=l3;
si1=3U;
si0=si0 < si1;
if(si0){
goto L79;
}
si0=l9;
si1=1073741820U;
si0&=si1;
l3=si0;
sj0=0ULL;
l18=sj0;
si0=l16;
l13=si0;
L80:;
{
si0=l6;
si1=104U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+104U);
l25=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=152U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l9;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+152U);
l26=sj1;
si2=l6;
si3=104U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l18;
sj4=l25;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=136U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l9;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+136U);
l25=sj1;
si2=l6;
si3=152U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l18;
sj4=l26;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=120U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l9;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+120U);
l26=sj1;
si2=l6;
si3=136U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l18;
sj4=l25;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=32U;
si0+=si1;
l13=si0;
si0=l6;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l18;
sj2=l26;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l18=sj0;
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
if(si0){
goto L80;
}
}
L79:;
si0=l10;
si0=!(si0);
if(si0){
goto L77;
}
L81:;
{
si0=l6;
si1=88U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+88U);
l25=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l6;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l18;
sj2=l25;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l18=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L81;
}
}
L77:;
si0=l12;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L83;
}
si0=l16;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
sj1=l18;
sj2=0ULL;
si1=sj1 != sj2;
si0+=si1;
l12=si0;
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L82;
}
si0=l16;
l10=si0;
goto L74;
L83:;
si0=l12;
si1=l15;
si2=1274088U;
f594(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=l16;
si1=8U;
si0+=si1;
l10=si0;
si0=l15;
si1=-1U;
si0+=si1;
l15=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
goto L74;
L76:;
si0=l12;
si1=l15;
si2=1274072U;
f597(i,si0,si1,si2);
UNREACHABLE;
L74:;
si0=l5;
si1=l23;
si0+=si1;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+512U);
l13=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+508U);
si0=si0 != si1;
if(si0){
goto L84;
}
si0=l6;
si1=504U;
si0+=si1;
si1=l13;
f1297(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+512U);
l13=si0;
L84:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
si1=l13;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l17;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+512U);
si2=1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+512U,si1);
si0=l15;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si2=l5;
si1-=si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L89;
}
si0=l21;
si0=!(si0);
if(si0){
goto L69;
}
si0=8U;
l3=si0;
si0=1U;
l5=si0;
si0=l12;
si1=43U;
si0=si0 >= si1;
if(si0){
goto L90;
}
si0=0U;
l9=si0;
goto L85;
L90:;
si0=l12;
si1=390U;
si0=si0 < si1;
if(si0){
goto L88;
}
si0=l12;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L91;
}
si0=l12;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l9=si0;
goto L87;
L91:;
si0=l12;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l12;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l9=si0;
goto L87;
L92:;
si0=l12;
si1=50U;
si0=f1007(i,si0,si1);
l9=si0;
if(si0){
goto L93;
}
si0=0U;
l9=si0;
goto L85;
L93:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l16=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l16;
if(si0){
goto L86;
}
si0=0U;
l5=si0;
goto L85;
L89:;
si0=1262328U;
si1=35U;
si2=1274104U;
f604(i,si0,si1,si2);
UNREACHABLE;
L88:;
si0=l12;
si1=1U;
si0<<=(si1&31);
si1=128U;
si0+=si1;
l9=si0;
L87:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l16=si0;
L86:;
si0=0U;
l5=si0;
si0=l16;
si1=1U;
si0=f15026(i,si0,si1);
l3=si0;
if(si0){
goto L85;
}
si0=8U;
si1=l16;
f52(i,si0,si1);
UNREACHABLE;
L85:;
si0=l12;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L94;
}
si0=l12;
si1=l13;
si2=1274120U;
f597(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l10;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l15;
si2=l13;
si1-=si2;
l15=si1;
si2=l10;
si3=l12;
si4=l3;
si5=l9;
f1076(i,si0,si1,si2,si3,si4,si5);
si0=l5;
if(si0){
goto L95;
}
si0=l3;
f15024(i,si0);
L95:;
si0=l19;
si1=l23;
si0+=si1;
l23=si0;
si0=0U;
si1=l14;
si2=-1U;
si1+=si2;
l13=si1;
si2=l13;
si3=l14;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l14;
l21=si0;
si0=l12;
si1=1U;
si0<<=(si1&31);
l19=si0;
si1=-1U;
si0+=si1;
l13=si0;
si1=l15;
si0=si0 < si1;
if(si0){
goto L71;
}
}
L70:;
si0=l13;
si1=l15;
si2=1274056U;
f594(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l22;
si1=63U;
si0=si0 >= si1;
if(si0){
goto L96;
}
si0=l7;
si1=l22;
si2=-1U;
si1^=si2;
si0+=si1;
l13=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L97;
}
si0=l22;
si1=2U;
si0+=si1;
l16=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
l10=si0;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l10;
si1=l13;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L98:;
{
si0=l9;
si1=l8;
si0=si0 == si1;
if(si0){
goto L68;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l6;
si2=232U;
si1+=si2;
si2=l16;
si3=-1U;
si2+=si3;
l16=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l17=si1;
si0=si0 >= si1;
if(si0){
goto L99;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0+4U);
l13=si0;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
l10=si1;
si0+=si1;
l15=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L103;
}
si0=l15;
si1=l2;
si0=si0 > si1;
if(si0){
goto L102;
}
si0=l1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L105;
}
si0=l13;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l12=si0;
si1=1U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
l10=si0;
sj0=0ULL;
l18=sj0;
si0=l14;
l13=si0;
si0=l12;
si1=3U;
si0=si0 < si1;
if(si0){
goto L106;
}
si0=l3;
si1=1073741820U;
si0&=si1;
l12=si0;
sj0=0ULL;
l18=sj0;
si0=l14;
l13=si0;
L107:;
{
si0=l6;
si1=24U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+24U);
l25=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=72U;
si0+=si1;
si1=l13;
si2=8U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+72U);
l26=sj1;
si2=l6;
si3=24U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l18;
sj4=l25;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=56U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+56U);
l25=sj1;
si2=l6;
si3=72U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l18;
sj4=l26;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=40U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
l3=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+40U);
l26=sj1;
si2=l6;
si3=56U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l18;
sj4=l25;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=32U;
si0+=si1;
l13=si0;
si0=l6;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l18;
sj2=l26;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l18=sj0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L107;
}
}
L106:;
si0=l10;
si0=!(si0);
if(si0){
goto L108;
}
L109:;
{
si0=l6;
si1=8U;
si0+=si1;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+8U);
l25=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l18;
sj2=l25;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l18=sj0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L109;
}
}
L108:;
si0=l15;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L100;
}
si0=l1;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
si0=!(sj0);
if(si0){
goto L104;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L104;
L105:;
si0=l15;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L100;
}
si0=l1;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L104:;
si0=l9;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l11;
si0+=si1;
si1=l17;
si0=si0 != si1;
if(si0){
goto L101;
}
si0=l9;
si1=l17;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L99;
}
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l9;
si1=l9;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L99;
L103:;
si0=l10;
si1=l15;
si2=1273940U;
f683(i,si0,si1,si2);
UNREACHABLE;
L102:;
si0=l15;
si1=l2;
si2=1273940U;
f597(i,si0,si1,si2);
UNREACHABLE;
L101:;
si0=1273972U;
si1=66U;
si2=1274040U;
f604(i,si0,si1,si2);
UNREACHABLE;
L100:;
si0=l15;
si1=l2;
si2=1273956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L99:;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l16;
si1=1U;
si0=si0 == si1;
if(si0){
goto L68;
}
goto L98;
}
L97:;
si0=l13;
si1=l3;
si2=1273892U;
f593(i,si0,si1,si2);
UNREACHABLE;
L96:;
si0=l22;
si1=2U;
si0+=si1;
si1=64U;
si2=1273876U;
f597(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+512U);
l13=si0;
si0=!(si0);
if(si0){
goto L111;
}
si0=l13;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l13;
si1=4U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=4U;
l3=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L112;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si0=f15022(i,si0);
l3=si0;
if(si0){
goto L112;
}
si0=4U;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L112:;
si0=0U;
l12=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l6;
si1=l3;
i32_store(&i->m0,(U64)si0+516U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
l8=si0;
si1=l13;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+508U);
l5=si0;
si0=l8;
l13=si0;
si0=0U;
l9=si0;
L113:;
{
si0=l2;
si1=l13;
si1=i32_load(&i->m0,(U64)si1);
l16=si1;
si2=l9;
si1-=si2;
l3=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si0-=si1;
l15=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+4U);
l10=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l13;
si0=i32_load(&i->m0,(U64)si0+12U);
l17=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+8U);
l14=si0;
si0=l1;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l10;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l12;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+520U);
si0=si0 != si1;
if(si0){
goto L114;
}
si0=l6;
si1=516U;
si0+=si1;
si1=l12;
f1297(i,si0,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+524U);
l12=si0;
L114:;
si0=l10;
si1=l16;
si0+=si1;
l9=si0;
si0=l15;
si1=l10;
si0-=si1;
l2=si0;
si0=l3;
si1=l1;
si0+=si1;
l1=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+516U);
si1=l12;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si1=l17;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l12;
si1=l14;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l12;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l12;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+524U);
si2=1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si1=l11;
si0=si0 != si1;
if(si0){
goto L113;
}
goto L110;
}
L111:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+524U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+520U,si1);
si0=l6;
si1=4U;
i32_store(&i->m0,(U64)si0+516U,si1);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+508U);
l5=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+504U);
l8=si0;
L110:;
si0=l5;
si0=!(si0);
if(si0){
goto L115;
}
si0=l8;
f15024(i,si0);
L115:;
si0=l6;
si1=488U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=516U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+516U);
i64_store(&i->m0,(U64)si0+488U,sj1);
goto L3;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1+488U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l6;
si2=496U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=528U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
si1=l2;
si2=1273908U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1262328U;
si1=35U;
si2=1273924U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1283(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l4;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l4;
si1=29U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=8U;
l7=si0;
si0=l4;
si1=128U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l8;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l9;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=1U;
si0=f15026(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
sj0=l2;
si0=(U32)(sj0);
l9=si0;
si1=257U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l6;
si1=l4;
sj1=(U64)(si1);
sj2=0ULL;
si3=l9;
si4=40U;
si3*=si4;
l9=si3;
si4=1262504U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj4=0ULL;
f15157(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=6ULL;
sj0<<=(sj1&63);
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=58ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l10=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L6;
}
si0=l9;
si1=1262528U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l7;
si2=l8;
sj3=l10;
si3=(U32)(sj3);
si4=l9;
si3=DIV_U(si3,si4);
si4=1U;
si3+=si4;
sj4=l2;
si5=l5;
f1282(i,si0,si1,si2,si3,sj4,si5);
si0=l6;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l4;
si1=64U;
si0+=si1;
l5=si0;
if(si0){
goto L12;
}
si0=l0;
si1=l1;
si2=0U;
si3=l3;
si4=l4;
sj5=l2;
si6=l9;
si7=l11;
si8=l13;
si9=8U;
si10=l5;
si0=f1280(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
l4=si0;
goto L11;
L12:;
si0=l5;
si1=268435456U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=1U;
si0=f15026(i,si0,si1);
l15=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si2=0U;
si3=l3;
si4=l4;
sj5=l2;
si6=l9;
si7=l11;
si8=l13;
si9=l15;
si10=l5;
si0=f1280(i,si0,si1,si2,si3,si4,sj5,si6,si7,si8,si9,si10);
l4=si0;
si0=l15;
f15024(i,si0);
L11:;
si0=l12;
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
f15024(i,si0);
L13:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15024(i,si0);
goto L1;
L10:;
si0=1273264U;
si1=25U;
si2=1274280U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=8U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=l9;
si1=257U;
si2=1272924U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1261688U;
si1=43U;
si2=1262488U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l1;
si2=0U;
si3=l3;
si4=l4;
sj5=l2;
si0=f1281(i,si0,si1,si2,si3,si4,sj5);
l4=si0;
goto L1;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=8U;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1284(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
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

U32 f1285(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
F64 l4=0;
F64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
sd1=f64_load(&i->m0,(U64)si1);
si2=l2;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si0=f651(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
sj0=l3;
sj1=9223372036854775807ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
l5=sd0;
sd1=10000000000000000;
si0=sd0 >= sd1;
if(si0){
goto L2;
}
sd0=l5;
sd1=0;
si0=sd0 != sd1;
sd1=l5;
sd2=0.0001;
si1=sd1 < sd2;
si0&=si1;
if(si0){
goto L2;
}
si0=l1;
sd1=l4;
si2=l2;
si3=1U;
si0=f652(i,si0,sd1,si2,si3);
goto L0;
L2:;
si0=l1;
sd1=l4;
si2=l2;
si3=0U;
si0=f655(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f1286(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L7:;
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
goto L7;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1287(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L7:;
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
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1288(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L7:;
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
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1289(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si0=f677(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1290(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
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
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L7:;
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
goto L7;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1291(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l5=si0;
l6=si0;
si0=l5;
si1=4U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0|=si1;
l6=si0;
si0=l4;
if(si0){
goto L1;
}
si0=l1;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l1;
si1=l6;
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=0U;
l6=si0;
L2:;
{
si0=l2;
si1=l6;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=87U;
si3=l0;
si4=15U;
si3&=si4;
l7=si3;
si4=10U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l7;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l0;
si1=16U;
si0=si0 < si1;
l7=si0;
si0=l0;
si1=4U;
si0>>=(si1&31);
l0=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
}
si0=l6;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l6;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l6;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1292(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f1293(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si2=l2;
si1-=si2;
l3=si1;
si0-=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L1;
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
si1=1274508U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=1274484U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=l3;
si2=l5;
f683(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l1;
si2=l5;
f597(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1294(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f1295(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=8U;
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
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
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
if(si0){
goto L5;
}
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l3=si0;
goto L4;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=1U;
si0=f15026(i,si0,si1);
l3=si0;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1296(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1294(i,si0,si1,si2,si3);
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

void f1297(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1294(i,si0,si1,si2,si3);
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

void f1298(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1294(i,si0,si1,si2,si3);
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

void f1299(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1294(i,si0,si1,si2,si3);
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

void f1300(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1294(i,si0,si1,si2,si3);
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

void f1301(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+24U,si1);
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
si1=l4;
si2=l2;
si3=l3;
si4=20U;
si3+=si4;
f1294(i,si0,si1,si2,si3);
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

void f1302(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1294(i,si0,si1,si2,si3);
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

F64 f1303(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F64 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
sd0=0;
l3=sd0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L3;
}
L4:;
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=l1;
f959(i,si0,si1,si2);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l2;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L1;
}
si0=l2;
si1=l2;
sd1=f64_load(&i->m0,(U64)si1+24U);
sj2=l4;
f1164(i,si0,sd1,sj2);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
si0=(U32)(sj0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
sd0=f64_load(&i->m0,(U64)si0+8U);
l3=sd0;
goto L3;
L5:;
sd0=INFINITY;
l3=sd0;
si0=l1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L3;
case 2:
goto L6;
case 3:
goto L3;
case 4:
goto L6;
case 5:
goto L7;
default:
goto L3;
}
L7:;
si0=l2;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1274908U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=409U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1274920U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1274848U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
sd0=1.7976931348623157e+308;
l3=sd0;
L3:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
sd0=l3;
goto L0;
L2:;
si0=1274656U;
si1=46U;
si2=1274848U;
f634(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1274440U;
si1=43U;
si2=1274640U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sd0;
}

void f1304(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L19;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L18;
}
L19:;
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=(U32)(sj0);
l7=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
si0=l4;
if(si0){
goto L20;
}
sj0=l8;
si0=!(sj0);
if(si0){
goto L17;
}
L20:;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l4;
if(si0){
goto L11;
}
si0=l5;
if(si0){
goto L12;
}
sj0=l3;
sj1=l8;
sj2=l8;
si2=!(sj2);
l1=si2;
sj0=si2?sj0:sj1;
l6=sj0;
si0=l1;
if(si0){
goto L13;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L13;
}
sj0=l8;
sj0=I64_CTZ(sj0);
l6=sj0;
sj1=l3;
sj1=I64_CTZ(sj1);
l9=sj1;
sj2=l6;
sj3=l9;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l10=sj0;
sj0=l8;
sj1=l6;
sj0>>=(sj1&63);
l8=sj0;
sj1=l3;
sj2=l9;
sj1>>=(sj2&63);
l3=sj1;
si0=sj0 != sj1;
if(si0){
goto L15;
}
sj0=l8;
l3=sj0;
goto L14;
L18:;
si0=l4;
if(si0){
goto L22;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=0U;
l1=si0;
goto L21;
L22:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=8U;
l2=si0;
si0=0U;
l4=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si0=!(si0);
if(si0){
goto L23;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l5;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
L23:;
si0=l2;
si1=l7;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l1;
sj0=(U64)(si0);
l3=sj0;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=1U;
l1=si0;
L21:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L17:;
si0=l5;
if(si0){
goto L25;
}
si0=0U;
l2=si0;
goto L24;
L25:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=8U;
l1=si0;
si0=0U;
l2=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L26;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
l2=si0;
L26:;
si0=l1;
si1=l5;
si2=l2;
si0=f15143(i,si0,si1,si2);
sj0=l3;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l6;
sj0|=sj1;
l3=sj0;
si0=1U;
l2=si0;
L24:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L16:;
si0=l4;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L9;
L15:;
L27:;
{
sj0=l8;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L29;
}
sj0=l8;
sj1=l3;
sj0-=sj1;
l8=sj0;
sj1=l8;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l8=sj0;
goto L28;
L29:;
sj0=l3;
sj1=l8;
sj0-=sj1;
l3=sj0;
sj1=l3;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l3=sj0;
L28:;
sj0=l8;
sj1=l3;
si0=sj0 != sj1;
if(si0){
goto L27;
}
}
L14:;
sj0=l3;
sj1=l10;
sj0<<=(sj1&63);
l6=sj0;
L13:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L12:;
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l7;
sj3=l8;
sj1=f1172(i,si1,si2,sj3);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L11:;
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=(U32)(sj0);
l4=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l4;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
l11=si2;
si3=l7;
si0=f1162(i,si0,si1,si2,si3);
l12=si0;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L31;
}
si0=8U;
l13=si0;
si0=0U;
l14=si0;
si0=0U;
l5=si0;
si0=8U;
l2=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l15=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=0U;
l5=si0;
si0=8U;
l2=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L32;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l15;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l15;
l5=si0;
L32:;
si0=l2;
si1=l1;
si2=l5;
si0=f15143(i,si0,si1,si2);
l1=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L33;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L33;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l2;
si0=f15022(i,si0);
l13=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
l14=si0;
L33:;
si0=l7;
l2=si0;
si0=l13;
si1=l11;
si2=l14;
si0=f15143(i,si0,si1,si2);
l14=si0;
l5=si0;
si0=l4;
l11=si0;
si0=l1;
l13=si0;
si0=l12;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l4;
l2=si0;
si0=l1;
l5=si0;
si0=l7;
l11=si0;
si0=l14;
l13=si0;
L34:;
si0=l0;
si1=l13;
si2=l11;
si3=l5;
si4=l2;
f1171(i,si0,si1,si2,si3,si4);
si0=l7;
si0=!(si0);
if(si0){
goto L35;
}
si0=l14;
f15024(i,si0);
L35:;
si0=l4;
si0=!(si0);
if(si0){
goto L30;
}
si0=l1;
f15024(i,si0);
goto L0;
L31:;
si0=8U;
l2=si0;
si0=0U;
l5=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L36;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si0=!(si0);
if(si0){
goto L36;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
l5=si0;
L36:;
si0=l0;
si1=l2;
si2=l1;
si3=l5;
si1=f15143(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l8;
sj2=-4294967296ULL;
sj1&=sj2;
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
L30:;
goto L0;
L10:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=8U;
l1=si0;
si0=0U;
l2=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L37;
}
si0=l7;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l4;
si0=!(si0);
if(si0){
goto L37;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
l2=si0;
L37:;
si0=l1;
si1=l5;
si2=l2;
si0=f15143(i,si0,si1,si2);
sj0=l3;
sj1=-4294967296ULL;
sj0&=sj1;
sj1=l6;
sj0|=sj1;
l8=sj0;
si0=1U;
l2=si0;
L9:;
si0=l0;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L8:;
si0=8U;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L7:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=8U;
si1=l15;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=8U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f53(i);
UNREACHABLE;
L2:;
si0=8U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=l4;
sj3=l3;
sj1=f1172(i,si1,si2,sj3);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1305(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
goto L2;
L3:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l4;
if(si0){
goto L2;
}
sj0=l6;
si0=!(sj0);
if(si0){
goto L1;
}
L2:;
si0=l4;
if(si0){
goto L5;
}
sj0=l6;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L4;
}
L5:;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
f1304(i,si0,si1,si2);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=48U;
si2+=si3;
f939(i,si0,si1,si2);
si0=l3;
si1=64U;
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
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l2;
si2=l3;
si3=64U;
si2+=si3;
f938(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L8;
}
si0=1U;
l2=si0;
goto L7;
L8:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l7=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L9;
}
si0=1U;
l2=si0;
sj0=l7;
si0=!(sj0);
if(si0){
goto L6;
}
L9:;
si0=l1;
si0=!(si0);
sj1=l7;
si1=!(sj1);
si0&=si1;
l2=si0;
L7:;
si0=l5;
si1=0U;
si0=si0 != si1;
si1=l4;
si2=0U;
si1=si1 != si2;
sj2=l6;
sj3=0ULL;
si2=sj2 != sj3;
si1|=si2;
si0&=si1;
si1=l2;
si0^=si1;
l2=si0;
L6:;
si0=l3;
si1=8U;
si0+=si1;
si1=32U;
si0+=si1;
l1=si0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l2;
si2=1274928U;
si3=l3;
si4=8U;
si3+=si4;
si4=1275132U;
f1314(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l2;
si2=1274928U;
si3=l3;
si4=8U;
si3+=si4;
si4=1275148U;
f1315(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1306(rustpythonInstance*i,U32 l0,F64 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
sd0=l1;
sd0=fabs(sd0);
sd1=INFINITY;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L3;
}
sd0=l1;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L2;
}
sj0=-1ULL;
sj1=4503599627370495ULL;
sd2=l1;
sj2=i64_reinterpret_f64(sd2);
l3=sj2;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l3;
sj0&=sj1;
l4=sj0;
sj0=4095ULL;
sj1=2047ULL;
sj2=l3;
sj3=4503599627370496ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l3;
sj2=52ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l3=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274944U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
sj1=l4;
sj2=l4;
sj2=I64_CTZ(sj2);
l3=sj2;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274936U);
i64_store(&i->m0,(U64)si0+40U,sj1);
sj0=l3;
sj1=-1074ULL;
sj0+=sj1;
l3=sj0;
si0=l2;
si1=40U;
si0+=si1;
l5=si0;
goto L6;
L7:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274944U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274936U);
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=l4;
sj2=4503599627370496ULL;
sj1|=sj2;
l4=sj1;
sj2=l4;
sj2=I64_CTZ(sj2);
l4=sj2;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=40U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=l4;
sj0+=sj1;
sj1=-1075ULL;
sj0+=sj1;
l3=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=24U;
si0+=si1;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
f1309(i,si0,sj1);
goto L4;
L5:;
si0=l2;
si1=24U;
si0+=si1;
sj1=l3;
f1308(i,si0,sj1);
L4:;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+57U);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+3U,si1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+32U);
l3=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+28U);
l7=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l8=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l5=si0;
sd0=l1;
sd1=0;
si0=sd0 > sd1;
if(si0){
goto L8;
}
si0=l5;
si1=l8;
si2=0U;
si1=si1 != si2;
sj2=l3;
sj3=0ULL;
si2=sj2 != sj3;
si1|=si2;
si0^=si1;
l5=si0;
L8:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+33U,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=36U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+3U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274984U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274976U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274968U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274960U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1274952U);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1307(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l3=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L6;
}
sj0=l3;
si0=!(sj0);
if(si0){
goto L1;
}
L6:;
si0=0U;
si1=l1;
si0-=si1;
l1=si0;
si0=l4;
if(si0){
goto L4;
}
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L7:;
si0=l1;
sj0=(U64)(si0);
l5=sj0;
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L8;
}
sj0=l3;
sj1=l5;
sj0<<=(sj1&63);
l6=sj0;
sj1=l5;
sj0>>=(sj1&63);
sj1=l3;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L8:;
si0=l2;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=1U;
sj3=l5;
f1024(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l3=sj1;
si1=!(sj1);
si0&=si1;
if(si0){
goto L1;
}
si0=l4;
if(si0){
goto L10;
}
si0=l1;
si1=63U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
sj1=l3;
si2=l1;
sj2=(U64)(si2);
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L10:;
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l1;
si2=6U;
si1>>=(si2&31);
l7=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l2;
si1=l7;
si2=l4;
si3=l4;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l8;
si1=l8;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l9=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l9;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
l8=si0;
si0=l0;
si1=l4;
si2=l7;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=63U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=l4;
si2=l1;
sj2=(U64)(si2);
sj0=f1026(i,si0,si1,sj2);
goto L2;
L9:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
sj1=(U64)(si1);
f1025(i,si0,sj1);
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
if(si0){
goto L12;
}
sj0=0ULL;
l3=sj0;
goto L11;
L12:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l4=si0;
L16:;
{
si0=l7;
si1=l1;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
if(si0){
goto L16;
}
}
si0=l9;
l4=si0;
goto L14;
L15:;
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l8;
si1=l4;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l0;
si1=l8;
si2=l4;
si1-=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L13:;
sj0=0ULL;
l3=sj0;
si0=l8;
switch(si0){
case 0:
goto L11;
case 1:
goto L17;
default:
goto L1;
}
L17:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
f15024(i,si0);
L18:;
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
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

void f1308(rustpythonInstance*i,U32 l0,U64 l1) {
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
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
if(si0){
goto L12;
}
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L13;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L1;
}
L13:;
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
goto L11;
L12:;
si0=l0;
si1=16U;
si0+=si1;
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L15;
}
si0=0U;
l7=si0;
goto L14;
L15:;
si0=l6;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l6;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l7=si0;
si0=l5;
l10=si0;
L16:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L16;
}
}
si0=l9;
l7=si0;
L14:;
si0=l7;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l3;
si0=!(si0);
l10=si0;
si0=l5;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj0=I64_CTZ(sj0);
si1=l7;
sj1=(U64)(si1);
sj2=6ULL;
sj1<<=(sj2&63);
sj0+=sj1;
l11=sj0;
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
goto L10;
L17:;
si0=l7;
si1=l6;
si2=1274424U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
sj0=l12;
sj0=I64_CTZ(sj0);
l11=sj0;
si0=1U;
l10=si0;
L10:;
si0=l10;
sj1=l12;
si1=!(sj1);
si0&=si1;
l7=si0;
sj0=l12;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l8=si0;
sj0=l1;
sj1=l11;
si0=sj0 <= sj1;
if(si0){
goto L18;
}
sj0=l11;
si0=!(sj0);
si1=l7;
si0|=si1;
if(si0){
goto L2;
}
si0=l10;
si0=!(si0);
if(si0){
goto L19;
}
sj0=0ULL;
sj1=l12;
sj2=l11;
sj1>>=(sj2&63);
sj2=l11;
sj3=63ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
l12=sj0;
goto L3;
L19:;
si0=l8;
sj1=l11;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si2=l8;
si3=l8;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l7;
si1=l7;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
l3=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l3;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
l7=si0;
si0=l0;
si1=l8;
si2=l10;
si1-=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
sj0=l11;
sj1=63ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l7;
si1=l10;
sj2=l12;
sj0=f1026(i,si0,si1,sj2);
goto L4;
L18:;
sj0=l1;
si0=!(sj0);
si1=l7;
si0|=si1;
if(si0){
goto L1;
}
si0=l10;
si0=!(si0);
if(si0){
goto L21;
}
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L20;
}
si0=l0;
sj1=l12;
sj2=l1;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L1;
L21:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
si0=l8;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l10=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l10;
si2=l8;
si3=l8;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l7;
si1=l7;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
l3=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=l3;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
l7=si0;
si0=l0;
si1=l8;
si2=l10;
si1-=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l7;
si1=l10;
sj2=l12;
sj0=f1026(i,si0,si1,sj2);
goto L5;
L20:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L1;
L9:;
si0=1275476U;
si1=43U;
si2=1275632U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L4;
L7:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
if(si0){
goto L23;
}
sj0=0ULL;
l12=sj0;
goto L22;
L23:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L27:;
{
si0=l8;
si1=l10;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L26;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
if(si0){
goto L27;
}
}
si0=l6;
l7=si0;
goto L25;
L26:;
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
L25:;
si0=l3;
si1=l7;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l0;
si1=l3;
si2=l7;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
L24:;
sj0=0ULL;
l12=sj0;
si0=l3;
switch(si0){
case 0:
goto L22;
case 1:
goto L28;
default:
goto L1;
}
L28:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L29;
}
si0=l8;
f15024(i,si0);
L29:;
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L1;
L4:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
if(si0){
goto L31;
}
sj0=0ULL;
l12=sj0;
goto L30;
L31:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
L35:;
{
si0=l8;
si1=l10;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L34;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
if(si0){
goto L35;
}
}
si0=l6;
l7=si0;
goto L33;
L34:;
si0=l7;
si0=!(si0);
if(si0){
goto L32;
}
L33:;
si0=l3;
si1=l7;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l0;
si1=l3;
si2=l7;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
L32:;
sj0=0ULL;
l12=sj0;
si0=l3;
switch(si0){
case 0:
goto L30;
case 1:
goto L36;
default:
goto L2;
}
L36:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L37;
}
si0=l8;
f15024(i,si0);
L37:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+24U,sj1);
L2:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L38;
}
sj0=l12;
si0=!(sj0);
if(si0){
goto L1;
}
L38:;
sj0=l1;
sj1=l11;
sj0-=sj1;
l1=sj0;
si0=l10;
if(si0){
goto L39;
}
sj0=l12;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L40:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L41;
}
sj0=l12;
sj1=l1;
sj0<<=(sj1&63);
l11=sj0;
sj1=l1;
sj0>>=(sj1&63);
sj1=l12;
si0=sj0 != sj1;
if(si0){
goto L41;
}
si0=l0;
sj1=l11;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L41:;
si0=l2;
sj1=l12;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=4U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=1U;
sj3=l1;
f1024(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L39:;
si0=l0;
si1=4U;
si0+=si1;
sj1=l1;
f1025(i,si0,sj1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1309(rustpythonInstance*i,U32 l0,U64 l1) {
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
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l3;
if(si0){
goto L2;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L1;
}
L2:;
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L14;
}
si0=0U;
l6=si0;
goto L13;
L14:;
si0=l5;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l6=si0;
si0=l4;
l9=si0;
L15:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
if(si0){
goto L15;
}
}
si0=l8;
l6=si0;
L13:;
si0=l6;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj0=I64_CTZ(sj0);
si1=l6;
sj1=(U64)(si1);
sj2=6ULL;
sj1<<=(sj2&63);
sj0+=sj1;
l10=sj0;
goto L11;
L12:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l10=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
sj0=l10;
sj0=I64_CTZ(sj0);
l10=sj0;
L11:;
sj0=l1;
sj1=l10;
si0=sj0 <= sj1;
if(si0){
goto L16;
}
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
if(si0){
goto L17;
}
sj0=l11;
si0=!(sj0);
if(si0){
goto L4;
}
L17:;
sj0=l1;
sj1=l10;
sj0-=sj1;
l1=sj0;
si0=l9;
if(si0){
goto L8;
}
sj0=l11;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L4;
L18:;
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L19;
}
sj0=l11;
sj1=l1;
sj0<<=(sj1&63);
l12=sj0;
sj1=l1;
sj0>>=(sj1&63);
sj1=l11;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L4;
L19:;
si0=l2;
sj1=l11;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
si2=1U;
sj3=l1;
f1024(i,si0,si1,si2,sj3);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
goto L4;
L16:;
sj0=l1;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l10=sj1;
si1=!(sj1);
si0&=si1;
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L21;
}
sj0=l1;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L20;
}
si0=l0;
sj1=l10;
sj2=l1;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L21:;
sj0=l1;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l10;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
sj1=l1;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l6;
si2=l9;
si3=l9;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l7;
si1=l7;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+16U);
l3=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+20U);
si3=l3;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
l7=si0;
si0=l0;
si1=l9;
si2=l6;
si1-=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
sj0=l1;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
si0=l7;
si1=l9;
sj2=l1;
sj0=f1026(i,si0,si1,sj2);
goto L5;
L20:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L10:;
si0=l6;
si1=l5;
si2=1274424U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1275476U;
si1=43U;
si2=1275760U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
si1=20U;
si0+=si1;
sj1=l1;
f1025(i,si0,sj1);
goto L4;
L7:;
si0=1197083U;
si1=43U;
si2=1197248U;
f604(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
if(si0){
goto L23;
}
sj0=0ULL;
l1=sj0;
goto L22;
L23:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l9=si0;
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
L27:;
{
si0=l7;
si1=l9;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L26;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L27;
}
}
si0=l5;
l6=si0;
goto L25;
L26:;
si0=l6;
si0=!(si0);
if(si0){
goto L24;
}
L25:;
si0=l3;
si1=l6;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l0;
si1=l3;
si2=l6;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L24:;
sj0=0ULL;
l1=sj0;
si0=l3;
switch(si0){
case 0:
goto L22;
case 1:
goto L28;
default:
goto L1;
}
L28:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L29;
}
si0=l7;
f15024(i,si0);
L29:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
sj0=l10;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
l1=sj1;
si1=!(sj1);
si0&=si1;
if(si0){
goto L1;
}
si0=l9;
if(si0){
goto L33;
}
sj0=l10;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L32;
}
si0=l0;
sj1=l1;
sj2=l10;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L33:;
sj0=l1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
sj1=l10;
sj2=6ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l6;
si2=l9;
si3=l9;
si4=1238036U;
f1085(i,si0,si1,si2,si3,si4);
si0=l7;
si1=l7;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+8U);
l3=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l3;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
l7=si0;
si0=l0;
si1=l9;
si2=l6;
si1-=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
sj0=l10;
sj1=63ULL;
sj0&=sj1;
l1=sj0;
si0=!(sj0);
if(si0){
goto L30;
}
si0=l7;
si1=l9;
sj2=l1;
sj0=f1026(i,si0,si1,sj2);
goto L30;
L32:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L31:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
if(si0){
goto L35;
}
sj0=0ULL;
l1=sj0;
goto L34;
L35:;
si0=l3;
si1=3U;
si0<<=(si1&31);
l9=si0;
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
L39:;
{
si0=l7;
si1=l9;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L38;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L39;
}
}
si0=l5;
l6=si0;
goto L37;
L38:;
si0=l6;
si0=!(si0);
if(si0){
goto L36;
}
L37:;
si0=l3;
si1=l6;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l0;
si1=l3;
si2=l6;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L36:;
sj0=0ULL;
l1=sj0;
si0=l3;
switch(si0){
case 0:
goto L34;
case 1:
goto L40;
default:
goto L1;
}
L40:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l1=sj0;
L34:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L41;
}
si0=l7;
f15024(i,si0);
L41:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1310(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f913(i,si0,si1);
L0:;
return si0;
}

U32 f1311(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=1U;
l0=si0;
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
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=248U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=366U;
i32_store(&i->m0,(U64)si0+28U,si1);
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
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1217888U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l2;
si1=8U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
si2=l2;
si0=f621(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=l1;
si0=f913(i,si0,si1);
l0=si0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1312(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1313(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1275776U;
si3=l5;
si4=12U;
si3+=si4;
si4=1275776U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1314(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1275792U;
si3=l5;
si4=12U;
si3+=si4;
si4=1275808U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

void f1315(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
si2=1275824U;
si3=l5;
si4=12U;
si3+=si4;
si4=1275808U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f1316(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
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
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
goto L6;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=0U;
l3=si0;
L7:;
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
goto L7;
}
}
si0=l3;
si1=128U;
si0+=si1;
l0=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l3;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1317(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=0U;
l0=si0;
L7:;
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
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1318(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l0;
si1=24U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l3;
si1=-8U;
si0+=si1;
l0=si0;
L5:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L5;
}
}
L3:;
si0=0U;
goto L0;
L2:;
si0=1247978U;
si1=43U;
si2=1248336U;
f604(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj0=I64_POPCNT(sj0);
sj1=1ULL;
si0=sj0 == sj1;
L0:;
return si0;
}

F64 f1319(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
F64 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
l4=si0;
goto L15;
L17:;
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L18;
}
si0=l1;
l4=si0;
goto L15;
L18:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
l4=si0;
goto L15;
L19:;
sd0=0;
l5=sd0;
si0=l1;
l4=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
si0=!(sj0);
if(si0){
goto L14;
}
goto L15;
L16:;
si0=3U;
l4=si0;
si0=l1;
si1=255U;
si0&=si1;
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=2U;
si1=l1;
si2=l6;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
L15:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L21;
}
si0=l0;
si1=8U;
si0+=si1;
l1=si0;
sj0=64ULL;
l7=sj0;
goto L20;
L21:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
l7=sj0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
L20:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L23;
}
si0=l0;
si1=24U;
si0+=si1;
l1=si0;
sj0=-64ULL;
l9=sj0;
goto L22;
L23:;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
sj0=0ULL;
si1=l6;
sj1=(U64)(si1);
sj2=6ULL;
sj1<<=(sj2&63);
sj0-=sj1;
l9=sj0;
L22:;
sj0=l7;
sj1=l8;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=l9;
sj0+=sj1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CLZ(sj1);
sj0+=sj1;
si1=l0;
si2=l0;
si3=16U;
si2+=si3;
l1=si2;
si1=f957(i,si1,si2);
si2=255U;
si1&=si2;
si2=255U;
si1=si1 == si2;
sj1=(U64)(si1);
sj0-=sj1;
l7=sj0;
sj1=1023ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L35;
}
sj0=l7;
sj1=-1023ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L34;
}
sj0=l7;
sj1=-1075ULL;
si0=sj0 > sj1;
if(si0){
goto L33;
}
sd0=4.9406564584124654e-324;
l5=sd0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
case 2:
goto L25;
case 3:
goto L24;
case 4:
goto L31;
case 5:
goto L32;
default:
goto L24;
}
L35:;
sd0=INFINITY;
l5=sd0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L27;
case 1:
goto L24;
case 2:
goto L27;
case 3:
goto L24;
case 4:
goto L27;
case 5:
goto L26;
default:
goto L24;
}
L34:;
sj0=l7;
sj1=51ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L37;
}
si0=l0;
sj1=52ULL;
sj2=l7;
sj1-=sj2;
f1308(i,si0,sj1);
goto L36;
L37:;
si0=l0;
sj1=l7;
sj2=-52ULL;
sj1+=sj2;
f1309(i,si0,sj1);
L36:;
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l0;
si2=8U;
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
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=48U;
si1+=si2;
si2=l4;
f943(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+24U);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l8;
si0=(U32)(sj0);
l1=si0;
if(si0){
goto L39;
}
sj0=64ULL;
l8=sj0;
goto L38;
L39:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
l8=sj0;
si0=l0;
si1=3U;
si0<<=(si1&31);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=-8U;
si0+=si1;
l0=si0;
L38:;
si0=l2;
sj1=l8;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2);
sj2=I64_CLZ(sj2);
sj1-=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l8;
sj1=53ULL;
si0=sj0 <= sj1;
if(si0){
goto L40;
}
sj0=l7;
sj1=1023ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
si0=l2;
sj1=l8;
sj2=-1ULL;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=1U;
f1307(i,si0,si1);
sj0=l7;
sj1=1ULL;
sj0+=sj1;
l7=sj0;
L40:;
sj0=l8;
sj1=53ULL;
si0=sj0 != sj1;
if(si0){
goto L28;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L29;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=-4503599627370497ULL;
sj1&=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L33:;
si0=l0;
sj1=1074ULL;
f1308(i,si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=64U;
si1+=si2;
si2=l4;
f943(i,si0,si1,si2);
sj0=l7;
sj1=1075ULL;
sj0+=sj1;
l9=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L42;
}
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=(U32)(sj0);
l0=si0;
if(si0){
goto L41;
}
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L42:;
sj0=l7;
sj1=-1023ULL;
si0=sj0 != sj1;
if(si0){
goto L43;
}
sd0=2.2250738585072014e-308;
l5=sd0;
sj0=64ULL;
sj1=l8;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=l9;
si0=sj0 > sj1;
if(si0){
goto L2;
}
L43:;
sj0=l8;
sj1=4503599627370496ULL;
si0=sj0 >= sj1;
if(si0){
goto L10;
}
sd0=INFINITY;
sj1=l8;
sd1=f64_reinterpret_i64(sj1);
l5=sd1;
sd2=l5;
sd3=l5;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l5=sd0;
goto L2;
L41:;
sj0=l7;
sj1=-1023ULL;
si0=sj0 != sj1;
if(si0){
goto L44;
}
sj0=l10;
sj1=6ULL;
sj0<<=(sj1&63);
si1=l0;
si2=3U;
si1<<=(si2&31);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+28U);
l0=si2;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=l9;
si0=sj0 > sj1;
if(si0){
goto L30;
}
L44:;
si0=1275840U;
si1=43U;
si2=1276008U;
f604(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l2;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1276072U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1276080U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=1276220U;
f614(i,si0,si1);
UNREACHABLE;
L31:;
sd0=0;
l5=sd0;
sj0=l7;
sj1=-1075ULL;
si0=sj0 != sj1;
if(si0){
goto L24;
}
sd0=0;
sd1=4.9406564584124654e-324;
si2=l0;
si2=f1318(i,si2);
sd0=si2?sd0:sd1;
l5=sd0;
goto L24;
L30:;
sd0=2.2250738585072014e-308;
l5=sd0;
sj0=l8;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
f15024(i,si0);
goto L2;
L29:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L45;
}
sj0=0ULL;
l8=sj0;
goto L4;
L45:;
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4503599627370497ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=3U;
si0<<=(si1&31);
l0=si0;
si0=l6;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l1=si0;
L49:;
{
si0=l4;
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L48;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
if(si0){
goto L49;
}
}
si0=l11;
l1=si0;
goto L47;
L48:;
si0=l1;
si0=!(si0);
if(si0){
goto L46;
}
L47:;
si0=l6;
si1=l1;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l2;
si1=l6;
si2=l1;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
L46:;
sj0=0ULL;
l8=sj0;
si0=l6;
switch(si0){
case 0:
goto L4;
case 1:
goto L51;
default:
goto L50;
}
L51:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
goto L4;
L50:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l8=sj0;
goto L3;
L28:;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l2;
si2=16U;
si1+=si2;
si2=1276240U;
si3=l2;
si4=24U;
si3+=si4;
si4=1276220U;
f1313(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
sd0=1.7976931348623157e+308;
l5=sd0;
goto L24;
L26:;
si0=l2;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1276072U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1276080U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=1276220U;
f614(i,si0,si1);
UNREACHABLE;
L25:;
sd0=0;
l5=sd0;
L24:;
sd0=l5;
sd1=l5;
sd1=-(sd1);
si2=l3;
sd0=si2?sd0:sd1;
l5=sd0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
f15024(i,si0);
L14:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
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
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
goto L1;
L13:;
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1206876U;
si1=43U;
si2=1211300U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1275388U;
si1=70U;
si2=1275460U;
f604(i,si0,si1,si2);
UNREACHABLE;
L9:;
sd0=INFINITY;
l5=sd0;
si0=l4;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L6;
case 3:
goto L5;
case 4:
goto L6;
case 5:
goto L7;
default:
goto L5;
}
L8:;
si0=1275840U;
si1=43U;
si2=1276008U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1276072U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1276080U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=1276220U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
sd0=1.7976931348623157e+308;
l5=sd0;
L5:;
si0=l1;
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
f15024(i,si0);
goto L2;
L4:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L52;
}
si0=l4;
f15024(i,si0);
L52:;
si0=l2;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L3:;
sj0=l8;
sj1=4503599627370495ULL;
si0=sj0 > sj1;
if(si0){
goto L54;
}
sj0=l7;
sj1=1023ULL;
sj0+=sj1;
l7=sj0;
sj1=2047ULL;
si0=sj0 > sj1;
if(si0){
goto L53;
}
sd0=INFINITY;
sj1=l8;
sj2=l7;
sj3=52ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sd1=f64_reinterpret_i64(sj1);
l5=sd1;
sd2=l5;
sd3=l5;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
l5=sd0;
goto L2;
L54:;
si0=1275388U;
si1=70U;
si2=1275460U;
f604(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=1275301U;
si1=70U;
si2=1275372U;
f604(i,si0,si1,si2);
UNREACHABLE;
L2:;
sd0=l5;
sd1=l5;
sd1=-(sd1);
si2=l3;
sd0=si2?sd0:sd1;
l5=sd0;
L1:;
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
sd0=l5;
L0:;
return sd0;
}

void f1320(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+72U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l3;
si2=l4;
si1-=si2;
l6=si1;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l4;
si0+=si1;
l7=si0;
si0=1U;
l8=si0;
si0=l1;
si1=16U;
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
l10=si0;
si1=2U;
si2=l10;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
switch(si0){
case 0:
goto L2;
case 1:
goto L7;
case 2:
goto L6;
default:
goto L2;
}
L7:;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l7;
si3=l6;
f1334(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
goto L5;
L6:;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=16U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l9;
si2=l9;
si3=l1;
si4=l7;
si5=l6;
si6=l11;
si7=l5;
f1321(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
goto L5;
L8:;
si0=0U;
l3=si0;
si0=0U;
l4=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=7U;
si0&=si1;
l10=si0;
si0=l5;
si1=8U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=0U;
l4=si0;
si0=l7;
l8=si0;
goto L10;
L11:;
si0=l5;
si1=-8U;
si0&=si1;
l9=si0;
si0=0U;
l4=si0;
si0=l7;
l8=si0;
L12:;
{
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l8;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l8;
si2=4U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l8;
si2=6U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
si0+=si1;
l4=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L12;
}
}
L10:;
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
L13:;
{
si0=l4;
si1=1U;
si0<<=(si1&31);
si1=l8;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l4=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L13;
}
}
L9:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l10=si0;
L15:;
{
si0=l6;
si1=l3;
si0+=si1;
l8=si0;
si0=l10;
si1=l4;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
si1=l8;
si2=l11;
si3=l5;
si0=f1325(i,si0,si1,si2,si3);
if(si0){
goto L14;
}
L16:;
si0=l8;
si1=l5;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=0U;
l8=si0;
goto L5;
L17:;
si0=l4;
si1=l9;
si2=l7;
si2=i32_load8_u(&i->m0,(U64)si2);
si1*=si2;
si0-=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=l5;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
goto L15;
}
L14:;
si0=0U;
si1=l3;
si0-=si1;
l10=si0;
si0=1U;
l8=si0;
L5:;
si0=l8;
if(si0){
goto L3;
}
L4:;
si0=0U;
l8=si0;
goto L1;
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
L2:;
si0=l1;
si1=l10;
si2=l4;
si1+=si2;
l4=si1;
si2=l5;
si3=1U;
si4=l5;
si5=1U;
si4=si4 > si5;
si2=si4?si2:si3;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1321(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=51U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si2=-8U;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l7;
si1=-1U;
si0+=si1;
l11=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=1U;
si1=l13;
si0-=si1;
l14=si0;
si0=l7;
si1=l9;
si0-=si1;
l15=si0;
si0=0U;
l2=si0;
si0=0U;
l16=si0;
L6:;
{
si0=l11;
si1=l2;
l1=si1;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L12;
}
sj0=l12;
si1=l4;
si2=l2;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
si0=l7;
si1=l13;
si2=l16;
si3=l13;
si4=l16;
si3=si3 > si4;
si1=si3?si1:si2;
l3=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l1;
si1=l3;
si0+=si1;
l2=si0;
si0=l6;
si1=l3;
si0+=si1;
l10=si0;
si0=l7;
si1=l3;
si0-=si1;
l17=si0;
si0=l14;
si1=l3;
si0+=si1;
l18=si0;
goto L10;
L12:;
si0=l2;
si1=l5;
si2=1276372U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l1;
si1=l7;
si0+=si1;
l2=si0;
si0=0U;
l16=si0;
goto L7;
L10:;
L14:;
{
si0=l2;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l18;
si1=1U;
si0+=si1;
l18=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L14;
L15:;
}
si0=0U;
l16=si0;
goto L8;
L13:;
si0=l5;
si1=l1;
si2=l3;
si1+=si2;
l2=si1;
si2=l5;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l5;
si2=1276388U;
f594(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l16;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l4;
si1=l1;
si0+=si1;
l10=si0;
si0=l13;
l2=si0;
L19:;
{
si0=l2;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l1;
si1=l2;
si0+=si1;
l18=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l6;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l15;
l16=si0;
si0=l9;
l18=si0;
goto L8;
L21:;
si0=l18;
si1=l5;
si2=1276420U;
f594(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si1=l16;
si0=si0 > si1;
if(si0){
goto L19;
}
}
L18:;
si0=l16;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l16;
si1=l1;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l6;
si1=l16;
si0+=si1;
l10=si0;
si0=l15;
l16=si0;
si0=l9;
l18=si0;
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=1U;
l18=si0;
goto L1;
L22:;
si0=l2;
si1=l5;
si2=1276452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l2;
si1=l7;
si2=1276404U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l16;
si1=l7;
si2=1276436U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l18;
si1=l1;
si0+=si1;
l2=si0;
L7:;
si0=l2;
si1=l7;
si0+=si1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L6;
}
}
si0=0U;
l18=si0;
goto L1;
L5:;
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=-1U;
si0+=si1;
l17=si0;
si0=l4;
si1=l13;
si0+=si1;
l16=si0;
si0=l6;
si1=l13;
si0+=si1;
l6=si0;
si0=l7;
si1=l13;
si0-=si1;
l3=si0;
si0=l13;
si1=-1U;
si0+=si1;
l15=si0;
si0=0U;
l1=si0;
L25:;
{
si0=l11;
si1=l1;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l7;
l10=si0;
sj0=l12;
si1=l4;
si2=l2;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L27;
}
si0=l6;
l10=si0;
si0=l3;
l18=si0;
si0=l1;
l2=si0;
si0=l7;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L28;
}
L31:;
{
si0=l13;
si1=l2;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l16;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L28;
}
goto L31;
L32:;
}
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
goto L26;
L30:;
si0=l2;
si1=l5;
si2=1276484U;
f594(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l5;
si1=l1;
si2=l13;
si1+=si2;
l2=si1;
si2=l5;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l5;
si2=1276500U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l15;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l4;
si1=l1;
si0+=si1;
l10=si0;
si0=l13;
l2=si0;
L33:;
{
si0=l2;
if(si0){
goto L34;
}
si0=1U;
l18=si0;
goto L1;
L34:;
si0=l1;
si1=l2;
si0+=si1;
l18=si0;
si1=-1U;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l17;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L33;
}
}
si0=l9;
l10=si0;
L27:;
si0=l10;
si1=l1;
si0+=si1;
l1=si0;
L26:;
si0=0U;
l18=si0;
si0=l1;
si1=l7;
si0+=si1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L1;
}
goto L25;
}
L24:;
si0=1U;
l18=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l15;
si1=l7;
si2=1276516U;
f594(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l18;
si1=-1U;
si0+=si1;
si1=l5;
si2=1276532U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l7;
si1=-1U;
si0+=si1;
l15=si0;
si0=l1;
si1=24U;
si0+=si1;
l14=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l12=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l19=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l13=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L35;
}
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=1U;
si1=l13;
si0-=si1;
l20=si0;
si0=l7;
si1=l19;
si0-=si1;
l21=si0;
si0=0U;
l1=si0;
si0=0U;
l2=si0;
L36:;
{
si0=l13;
si1=l2;
si2=l13;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l11=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l10;
si1=51U;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si2=3U;
si1<<=(si2&31);
si2=-8U;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L39:;
si0=l2;
l18=si0;
goto L37;
L38:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l8;
si1=l3;
si2=l14;
si3=l4;
si4=l1;
si3+=si4;
si4=l5;
si5=l1;
si4-=si5;
si5=l6;
si6=l7;
si7=l9;
TF(i->t0,si7,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l18=si0;
si0=l13;
l11=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si0+=si1;
l1=si0;
si1=l7;
si0+=si1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L37;
}
goto L1;
L40:;
si0=l1;
si1=l5;
si2=1276356U;
f593(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l15;
si1=l1;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l2;
si1=l5;
si2=1276372U;
f594(i,si0,si1,si2);
UNREACHABLE;
L41:;
sj0=l12;
si1=l4;
si2=l2;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L46;
}
si0=l7;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L44;
}
si0=l11;
si1=l1;
si0+=si1;
l2=si0;
si0=l6;
si1=l11;
si0+=si1;
l10=si0;
si0=l7;
si1=l11;
si0-=si1;
l16=si0;
si0=l20;
si1=l11;
si0+=si1;
l17=si0;
goto L45;
L46:;
si0=l1;
si1=l7;
si0+=si1;
l1=si0;
si0=0U;
l2=si0;
goto L42;
L45:;
L48:;
{
si0=l2;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L47;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
si0=!(si0);
if(si0){
goto L44;
}
goto L48;
L49:;
}
si0=0U;
l2=si0;
goto L43;
L47:;
si0=l5;
si1=l11;
si2=l1;
si1+=si2;
l2=si1;
si2=l5;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l5;
si2=1276388U;
f594(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l18;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l4;
si1=l1;
si0+=si1;
l10=si0;
si0=l13;
l2=si0;
L53:;
{
si0=l2;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l1;
si1=l2;
si0+=si1;
l17=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l6;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L54;
}
si0=l21;
l2=si0;
si0=l19;
l17=si0;
goto L43;
L55:;
si0=l17;
si1=l5;
si2=1276420U;
f594(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si1=l18;
si0=si0 > si1;
if(si0){
goto L53;
}
}
L52:;
si0=l18;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l1;
si1=l18;
si0+=si1;
l10=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L56;
}
si0=l21;
l2=si0;
si0=l19;
l17=si0;
si0=l6;
si1=l18;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L43;
}
si0=1U;
l18=si0;
goto L1;
L56:;
si0=l10;
si1=l5;
si2=1276452U;
f594(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l2;
si1=l7;
si2=1276404U;
f594(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l18;
si1=l7;
si2=1276436U;
f594(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l17;
si1=l1;
si0+=si1;
l1=si0;
L42:;
si0=0U;
l18=si0;
si0=l1;
si1=l7;
si0+=si1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L36;
}
goto L1;
}
L35:;
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=-1U;
si0+=si1;
l17=si0;
si0=l4;
si1=l13;
si0+=si1;
l16=si0;
si0=l6;
si1=l13;
si0+=si1;
l11=si0;
si0=l7;
si1=l13;
si0-=si1;
l21=si0;
si0=l13;
si1=-1U;
si0+=si1;
l20=si0;
si0=0U;
l1=si0;
L58:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si1=51U;
si0=si0 < si1;
if(si0){
goto L60;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si2=3U;
si1<<=(si2&31);
si2=-8U;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L59;
L60:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=l8;
si1=8U;
si0+=si1;
si1=l3;
si2=l14;
si3=l4;
si4=l1;
si3+=si4;
si4=l5;
si5=l1;
si4-=si5;
si5=l6;
si6=l7;
si7=l9;
TF(i->t0,si7,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6);
si0=0U;
l18=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L61;
}
goto L1;
L62:;
si0=l1;
si1=l5;
si2=1276468U;
f593(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l1;
si0+=si1;
l1=si0;
si1=l7;
si0+=si1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L1;
}
L59:;
si0=l15;
si1=l1;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L68;
}
si0=l7;
l10=si0;
sj0=l12;
si1=l4;
si2=l2;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L65;
}
si0=l11;
l10=si0;
si0=l21;
l18=si0;
si0=l1;
l2=si0;
si0=l7;
si1=l13;
si0=si0 > si1;
if(si0){
goto L67;
}
goto L66;
L68:;
si0=l2;
si1=l5;
si2=1276484U;
f594(i,si0,si1,si2);
UNREACHABLE;
L67:;
L70:;
{
si0=l13;
si1=l2;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L69;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l16;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
si0=!(si0);
if(si0){
goto L66;
}
goto L70;
L71:;
}
si0=l2;
si1=1U;
si0+=si1;
l1=si0;
goto L64;
L69:;
si0=l5;
si1=l1;
si2=l13;
si1+=si2;
l2=si1;
si2=l5;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l5;
si2=1276500U;
f594(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l20;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L63;
}
si0=l4;
si1=l1;
si0+=si1;
l10=si0;
si0=l13;
l2=si0;
L72:;
{
si0=l2;
if(si0){
goto L73;
}
si0=1U;
l18=si0;
goto L1;
L73:;
si0=l1;
si1=l2;
si0+=si1;
l18=si0;
si1=-1U;
si0+=si1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l17;
si1=l2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L72;
}
}
si0=l19;
l10=si0;
L65:;
si0=l10;
si1=l1;
si0+=si1;
l1=si0;
L64:;
si0=0U;
l18=si0;
si0=l1;
si1=l7;
si0+=si1;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L58;
}
goto L1;
L63:;
}
si0=1U;
l18=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L1;
}
si0=l20;
si1=l7;
si2=1276516U;
f594(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l18;
si1=-1U;
si0+=si1;
si1=l5;
si2=1276532U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
l18=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l18;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1322(rustpythonInstance*i,U32 l0,U32 l1) {
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
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l1;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L10;
}
goto L1;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+56U);
l7=si0;
si0=1U;
l8=si0;
si0=l4;
l9=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si1=-2U;
si0+=si1;
l5=si0;
si1=2U;
si2=l5;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L12;
case 2:
goto L11;
default:
goto L3;
}
L12:;
si0=l4;
if(si0){
goto L8;
}
goto L1;
L11:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l4;
si1=16U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=l10;
if(si0){
goto L7;
}
si0=l4;
l9=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si1=l12;
si0-=si1;
l15=si0;
si0=l11;
si1=l12;
si0+=si1;
l16=si0;
si0=l12;
si1=l6;
si0-=si1;
l17=si0;
si0=l7;
si1=l6;
si0-=si1;
l18=si0;
si0=l6;
si1=l12;
si2=l12;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l19=si0;
si1=l12;
si0-=si1;
l20=si0;
si0=l4;
l21=si0;
si0=l6;
l22=si0;
L13:;
{
si0=l21;
si1=l6;
si0-=si1;
l9=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l6;
l8=si0;
si0=l9;
l5=si0;
sj0=l13;
si1=l7;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L14;
}
si0=l18;
si1=l21;
si0+=si1;
l10=si0;
si0=l12;
si1=l22;
si2=l12;
si3=l22;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
l8=si0;
L20:;
{
si0=l8;
l5=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l9;
si1=l5;
si0+=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l5;
si1=-1U;
si0+=si1;
l8=si0;
si0=l11;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l10;
si2=l5;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L20;
}
goto L16;
L21:;
}
si0=l21;
si1=l6;
si0-=si1;
si1=l5;
si0+=si1;
si1=l4;
si2=1276580U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l22;
si1=l12;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=1U;
l8=si0;
goto L3;
L22:;
si0=l15;
si1=l22;
si0+=si1;
l22=si0;
si0=l17;
si1=l21;
si0+=si1;
l5=si0;
si0=l20;
l10=si0;
si0=l16;
l3=si0;
L23:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l7;
si2=l5;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l14;
l8=si0;
si0=l14;
l5=si0;
goto L15;
L25:;
si0=l5;
si1=l4;
si2=1276612U;
f594(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si0=1U;
l8=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L23;
}
goto L3;
}
L18:;
si0=l5;
si1=l6;
si2=1276564U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l19;
si1=l6;
si2=1276596U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l12;
si1=l5;
si0-=si1;
l5=si0;
si0=l6;
l8=si0;
L15:;
si0=l21;
si1=l5;
si0-=si1;
l5=si0;
L14:;
si0=0U;
l3=si0;
si0=l5;
l21=si0;
si0=l8;
l22=si0;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L13;
}
goto L1;
}
L9:;
si0=l4;
si1=l5;
si2=1276796U;
f597(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l7;
si3=l4;
f1336(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
goto L4;
L7:;
si0=l4;
l9=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L27;
}
si0=l12;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l12;
si1=1U;
si0+=si1;
l15=si0;
si0=l11;
si1=l12;
si0+=si1;
l20=si0;
si0=l12;
si1=l6;
si0-=si1;
l19=si0;
si0=l7;
si1=l6;
si0-=si1;
l17=si0;
si0=l12;
si1=-1U;
si0+=si1;
l16=si0;
si0=l4;
l21=si0;
L31:;
{
si0=l21;
si1=l6;
si0-=si1;
l9=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l9;
l5=si0;
sj0=l13;
si1=l7;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l18=si1;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L32;
}
si0=l16;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l17;
si1=l21;
si0+=si1;
l22=si0;
si0=l15;
l5=si0;
L39:;
{
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l9;
si1=l5;
si0+=si1;
si1=-2U;
si0+=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l22;
si1=l5;
si0+=si1;
l8=si0;
si0=l11;
si1=l5;
si0+=si1;
l10=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l10;
si1=-2U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l8;
si2=-2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L39;
}
goto L35;
}
L38:;
si0=l12;
si0=!(si0);
if(si0){
goto L36;
}
goto L26;
L37:;
si0=l21;
si1=l6;
si0-=si1;
si1=l5;
si0+=si1;
si1=-2U;
si0+=si1;
l5=si0;
goto L29;
L36:;
si0=0U;
l5=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l7;
si1=l21;
si0+=si1;
l22=si0;
si0=l20;
l10=si0;
si0=l19;
l5=si0;
L40:;
{
si0=l21;
si1=l5;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l10;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l22;
si2=l5;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l14;
l8=si0;
si0=l5;
if(si0){
goto L34;
}
si0=1U;
l8=si0;
goto L3;
L41:;
si0=1U;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
if(si0){
goto L40;
}
goto L3;
}
L35:;
si0=l15;
si1=l5;
si0-=si1;
l8=si0;
L34:;
si0=l21;
si1=l8;
si0-=si1;
l5=si0;
goto L32;
L33:;
si0=l8;
si1=l4;
si2=1276676U;
f594(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l5;
l21=si0;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L31;
}
goto L1;
}
L30:;
si0=l12;
si1=l6;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l4;
l5=si0;
L43:;
{
si0=l5;
l8=si0;
si1=l6;
si0-=si1;
l9=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l9;
l5=si0;
sj0=l13;
si1=l7;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l22=si1;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L44;
}
si0=l8;
si1=-1U;
si0+=si1;
l10=si0;
si0=l6;
l8=si0;
L46:;
{
si0=l10;
l5=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L45;
}
si0=l5;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l5;
si1=-1U;
si0+=si1;
l10=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l7;
si2=l5;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L46;
}
goto L44;
}
L45:;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l22;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=1U;
l8=si0;
goto L3;
L44:;
si0=l5;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L43;
}
goto L1;
}
L42:;
si0=l12;
si1=-1U;
si0+=si1;
l16=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l7;
si1=l6;
si0-=si1;
l8=si0;
si0=0U;
si1=l6;
si0-=si1;
l7=si0;
si0=l4;
l5=si0;
L48:;
{
si0=l7;
si1=l5;
si0+=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L28;
}
sj0=l13;
si1=l8;
si2=l5;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
l3=si0;
si0=l5;
si1=l6;
si0-=si1;
l5=si0;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L48;
}
goto L1;
}
L47:;
si0=0U;
si1=l12;
si0-=si1;
l10=si0;
si0=l11;
si1=l16;
si0+=si1;
l22=si0;
si0=l7;
si1=l6;
si2=-1U;
si1^=si2;
si2=l12;
si1+=si2;
l18=si1;
si0+=si1;
l15=si0;
si0=l4;
l21=si0;
L49:;
{
si0=l21;
si1=l6;
si0-=si1;
l9=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L27;
}
sj0=l13;
si1=l7;
si2=l9;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L50;
}
si0=l15;
si1=l21;
si0+=si1;
l1=si0;
si0=l18;
si1=l21;
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
L53:;
{
si0=l10;
si1=l9;
l5=si1;
si0=si0 != si1;
if(si0){
goto L54;
}
si0=l14;
l9=si0;
si0=l11;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 == si1;
if(si0){
goto L51;
}
goto L52;
L54:;
si0=l8;
si1=l5;
si0+=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l5;
si1=-1U;
si0+=si1;
l9=si0;
si0=l22;
si1=l5;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=l5;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L53;
}
goto L52;
L55:;
}
si0=l6;
si1=-1U;
si0^=si1;
si1=l12;
si0+=si1;
si1=l21;
si0+=si1;
si1=l5;
si0+=si1;
l5=si0;
goto L29;
L52:;
si0=1U;
si1=l5;
si0-=si1;
l9=si0;
L51:;
si0=l21;
si1=l9;
si0-=si1;
l9=si0;
L50:;
si0=l9;
si1=l6;
si0=si0 < si1;
l5=si0;
si0=0U;
l3=si0;
si0=l9;
l21=si0;
si0=l5;
if(si0){
goto L1;
}
goto L49;
}
L29:;
si0=l5;
si1=l4;
si2=1276660U;
f594(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l5;
si1=l6;
si0-=si1;
l9=si0;
L27:;
si0=l9;
si1=l4;
si2=1276628U;
f594(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l16;
si1=l6;
si2=1276644U;
f594(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si1=l4;
si2=1276548U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
if(si0){
goto L57;
}
si0=0U;
l9=si0;
goto L56;
L57:;
si0=l6;
si1=3U;
si0&=si1;
l8=si0;
si0=l7;
si1=l4;
si0+=si1;
l5=si0;
si0=l6;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L59;
}
si0=0U;
l9=si0;
goto L58;
L59:;
si0=l6;
si1=-4U;
si0&=si1;
l10=si0;
si0=0U;
l9=si0;
L60:;
{
si0=l9;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=-1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=-2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=-3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=-4U;
si1+=si2;
l5=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
if(si0){
goto L60;
}
}
L58:;
si0=l8;
si0=!(si0);
if(si0){
goto L56;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
L61:;
{
si0=l9;
si1=1U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L61;
}
}
L56:;
si0=l6;
si1=-1U;
si0^=si1;
l22=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l10=si0;
si0=l4;
l5=si0;
L63:;
{
si0=l10;
si1=l9;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l7;
si1=l5;
si2=l11;
si3=l6;
si0=f1326(i,si0,si1,si2,si3);
if(si0){
goto L62;
}
L64:;
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L65;
}
si0=0U;
l8=si0;
goto L4;
L65:;
si0=l5;
si1=l22;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l9;
si1=l21;
si2=l7;
si3=l5;
si4=-1U;
si3+=si4;
l5=si3;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si1*=si2;
si0-=si1;
si1=1U;
si0<<=(si1&31);
si1=l7;
si2=l8;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l9=si0;
goto L63;
L66:;
}
si0=l8;
si1=l5;
si2=1276956U;
f594(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l5;
si1=l6;
si0-=si1;
l9=si0;
si0=1U;
l8=si0;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l1;
si1=l9;
si2=l4;
si3=-1U;
si2+=si3;
si3=l4;
si4=l9;
si3=si3 != si4;
l5=si3;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
si2=0U;
si1=si1 != si2;
si2=l5;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
l3=si0;
L1:;
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1323(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+36U);
si2=0U;
si1=si1 != si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L2;
}
goto L1;
L2:;
si0=1U;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-2U;
si0+=si1;
l7=si0;
si1=2U;
si2=l7;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
default:
goto L1;
}
L5:;
si0=l3;
if(si0){
goto L3;
}
si0=0U;
l5=si0;
goto L1;
L4:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=16U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=l1;
si3=l4;
si4=24U;
si3+=si4;
si4=l2;
si5=l3;
si6=l8;
si7=l6;
f1321(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
goto L1;
L6:;
si0=0U;
l9=si0;
si0=0U;
l7=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
si1=7U;
si0&=si1;
l10=si0;
si0=l6;
si1=8U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=0U;
l7=si0;
si0=l2;
l5=si0;
goto L8;
L9:;
si0=l6;
si1=-8U;
si0&=si1;
l11=si0;
si0=0U;
l7=si0;
si0=l2;
l5=si0;
L10:;
{
si0=l7;
si1=2U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l5;
si2=6U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
si0+=si1;
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
if(si0){
goto L10;
}
}
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
}
L11:;
{
si0=l7;
si1=1U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l7=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L11;
}
}
L7:;
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
L12:;
{
si0=l3;
si1=l9;
si0+=si1;
l5=si0;
si0=l1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si1=l5;
si2=l8;
si3=l6;
si0=f1325(i,si0,si1,si2,si3);
if(si0){
goto L14;
}
L15:;
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=0U;
l5=si0;
goto L1;
L14:;
si0=0U;
si1=l9;
si0-=si1;
l7=si0;
si0=1U;
l5=si0;
goto L1;
L13:;
si0=l7;
si1=l10;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2);
si1*=si2;
si0-=si1;
si1=1U;
si0<<=(si1&31);
si1=l2;
si2=l6;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L12;
}
L3:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
si2=l2;
si3=l3;
f1334(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1324(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l2;
si2=l3;
f1333(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l3;
if(si0){
goto L3;
}
si0=1U;
l7=si0;
si0=0U;
l8=si0;
goto L2;
L3:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
l8=si0;
si0=1U;
l7=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=1U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0+=si1;
l8=si0;
si0=2U;
l7=si0;
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=2U;
l7=si0;
si0=l2;
si1=2U;
si0+=si1;
l10=si0;
si0=l3;
si1=-2U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l12=si0;
si0=l3;
si1=-3U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l11;
si1=-4U;
si0&=si1;
l11=si0;
si0=2U;
l7=si0;
L9:;
{
si0=l8;
si1=2U;
si0<<=(si1&31);
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0+=si1;
si1=2U;
si0<<=(si1&31);
si1=l10;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
si0+=si1;
l8=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l7;
si1=4U;
si0<<=(si1&31);
l7=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l12;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
{
si0=l7;
si1=1U;
si0<<=(si1&31);
l7=si0;
si0=l8;
si1=1U;
si0<<=(si1&31);
si1=l10;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l8=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l3;
switch(si0){
case 0:
goto L2;
case 1:
goto L6;
default:
goto L7;
}
L7:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f1327(i,si0,si1,si2);
si0=0U;
l10=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=255U;
si0&=si1;
l10=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l5;
si1=255U;
si0&=si1;
l12=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=415U;
si1=0U;
si2=l2;
si3=l10;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=1277504U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=251U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
L12:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=33U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l0;
si1=l9;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=33U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l10;
si1=l3;
si2=1277472U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l12;
si1=l3;
si2=1277488U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=44U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=33U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=32U;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1325(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=0U;
l4=si0;
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
si2=-4U;
si1+=si2;
l5=si1;
si0+=si1;
l1=si0;
si0=l5;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l2;
l3=si0;
L4:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L4;
}
}
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l5;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
goto L0;
L2:;
si0=l3;
si0=!(si0);
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0=si0 == si1;
l4=si0;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0=si0 == si1;
l4=si0;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0=si0 == si1;
si1=l3;
si2=2U;
si1=si1 == si2;
si2=l0;
si2=i32_load8_u(&i->m0,(U64)si2+2U);
si3=l2;
si3=i32_load8_u(&i->m0,(U64)si3+2U);
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
L1:;
si0=l4;
L0:;
return si0;
}

U32 f1326(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=0U;
l4=si0;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l3;
si1-=si2;
si0+=si1;
l5=si0;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=l3;
si2=-4U;
si1+=si2;
l0=si1;
si0+=si1;
l1=si0;
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l2;
l3=si0;
L4:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L4;
}
}
L3:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=l0;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
goto L0;
L2:;
si0=l0;
si1=l1;
si0+=si1;
si1=l5;
si0-=si1;
l1=si0;
si1=l3;
si2=l1;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0=si0 == si1;
l4=si0;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=2U;
si0=si0 == si1;
l4=si0;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0=si0 == si1;
si1=l3;
si2=2U;
si1=si1 == si2;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2+2U);
si3=l2;
si3=i32_load8_u(&i->m0,(U64)si3+2U);
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
L1:;
si0=l4;
L0:;
return si0;
}

void f1327(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l2;
if(si0){
goto L2;
}
sj0=0ULL;
l3=sj0;
si0=0U;
l2=si0;
si0=1U;
l4=si0;
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l2;
si1=3U;
si0&=si1;
l6=si0;
si0=l2;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L4;
}
sj0=0ULL;
l3=sj0;
si0=l1;
l5=si0;
goto L3;
L4:;
si0=l2;
si1=-4U;
si0&=si1;
l7=si0;
sj0=0ULL;
l3=sj0;
si0=l1;
l5=si0;
L5:;
{
sj0=1ULL;
si1=l5;
si2=3U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=1ULL;
si2=l5;
si3=2U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj1<<=(sj2&63);
sj2=1ULL;
si3=l5;
si4=1U;
si3+=si4;
sj3=i64_load8_u(&i->m0,(U64)si3);
sj2<<=(sj3&63);
sj3=1ULL;
si4=l5;
sj4=i64_load8_u(&i->m0,(U64)si4);
sj3<<=(sj4&63);
sj4=l3;
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
l3=sj0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l7;
si1=-4U;
si0+=si1;
l7=si0;
if(si0){
goto L5;
}
}
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
{
sj0=1ULL;
si1=l5;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L7;
}
}
L6:;
si0=1U;
l4=si0;
si0=0U;
l5=si0;
si0=l2;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=1U;
l8=si0;
si0=1U;
l9=si0;
si0=0U;
l10=si0;
goto L13;
L14:;
si0=1U;
l11=si0;
si0=0U;
l12=si0;
si0=1U;
l8=si0;
si0=1U;
l6=si0;
si0=0U;
l5=si0;
L15:;
{
si0=l6;
l7=si0;
si0=l5;
si1=l12;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l1;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si2=l6;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l11;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L19;
}
si0=l5;
si1=l7;
si0+=si1;
l6=si0;
si1=l12;
si0-=si1;
l8=si0;
si0=0U;
l5=si0;
goto L16;
L19:;
si0=0U;
si1=l5;
si2=l5;
si3=l8;
si2=si2 == si3;
l6=si2;
si0=si2?si0:si1;
l5=si0;
si0=l8;
si1=0U;
si2=l6;
si0=si2?si0:si1;
si1=l7;
si0+=si1;
l6=si0;
goto L16;
L18:;
si0=l6;
si1=l2;
si2=1277144U;
f594(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1U;
l8=si0;
si0=l7;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
l12=si0;
L16:;
si0=l6;
si1=l5;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L15;
}
}
si0=1U;
l11=si0;
si0=0U;
l10=si0;
si0=1U;
l9=si0;
si0=1U;
l6=si0;
si0=0U;
l5=si0;
L20:;
{
si0=l6;
l7=si0;
si0=l5;
si1=l10;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l1;
si1=l11;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l11=si0;
si1=l1;
si2=l6;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l6=si1;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l11;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l5;
si1=l7;
si0+=si1;
l6=si0;
si1=l10;
si0-=si1;
l9=si0;
si0=0U;
l5=si0;
goto L21;
L23:;
si0=0U;
si1=l5;
si2=l5;
si3=l9;
si2=si2 == si3;
l6=si2;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=0U;
si2=l6;
si0=si2?si0:si1;
si1=l7;
si0+=si1;
l6=si0;
goto L21;
L22:;
si0=1U;
l9=si0;
si0=l7;
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
l10=si0;
L21:;
si0=l6;
si1=l5;
si0+=si1;
l11=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L20;
}
}
si0=l12;
l5=si0;
L13:;
si0=l5;
si1=l10;
si2=l5;
si3=l10;
si2=si2 > si3;
l11=si2;
si0=si2?si0:si1;
l5=si0;
si1=l2;
si2=l5;
si1-=si2;
l6=si1;
si2=l5;
si3=l6;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si0=l5;
si1=1U;
si0<<=(si1&31);
si1=l2;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l7;
l2=si0;
goto L1;
L24:;
si0=l2;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l6;
si1=l8;
si2=l9;
si3=l11;
si1=si3?si1:si2;
l2=si1;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l7;
l2=si0;
goto L1;
L25:;
si0=l1;
si1=l2;
si0+=si1;
l6=si0;
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l6;
si1=l5;
si2=-4U;
si1+=si2;
l10=si1;
si0+=si1;
l11=si0;
si0=1U;
l4=si0;
si0=l10;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L27;
}
si0=l1;
l6=si0;
L28:;
{
si0=l6;
si1=l2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l7;
l2=si0;
goto L1;
L29:;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si1=l2;
si0+=si1;
si1=l11;
si0=si0 < si1;
if(si0){
goto L28;
}
}
L27:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l10;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l7;
l2=si0;
goto L1;
L26:;
si0=l1;
si1=l5;
si0+=si1;
si1=l2;
si0+=si1;
si1=l6;
si0-=si1;
l11=si0;
si1=l5;
si2=l11;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
if(si0){
goto L9;
}
goto L8;
L12:;
si0=l6;
si1=l2;
si2=1277144U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1276812U;
si1=35U;
si2=1277080U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=l6;
si2=1277096U;
f597(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l7;
l2=si0;
goto L1;
L30:;
si0=1U;
l4=si0;
si0=l11;
si1=1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l7;
l2=si0;
goto L1;
L31:;
si0=l11;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l7;
l2=si0;
goto L1;
L32:;
si0=l11;
si1=3U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l7;
l2=si0;
goto L1;
L8:;
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f1328(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l2;
if(si0){
goto L2;
}
sj0=0ULL;
l3=sj0;
si0=0U;
l4=si0;
si0=1U;
l5=si0;
si0=0U;
l6=si0;
goto L1;
L2:;
si0=l2;
si1=3U;
si0&=si1;
l6=si0;
si0=l2;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L4;
}
sj0=0ULL;
l3=sj0;
si0=l1;
l7=si0;
goto L3;
L4:;
si0=l2;
si1=-4U;
si0&=si1;
l5=si0;
sj0=0ULL;
l3=sj0;
si0=l1;
l7=si0;
L5:;
{
sj0=1ULL;
si1=l7;
si2=3U;
si1+=si2;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=1ULL;
si2=l7;
si3=2U;
si2+=si3;
sj2=i64_load8_u(&i->m0,(U64)si2);
sj1<<=(sj2&63);
sj2=1ULL;
si3=l7;
si4=1U;
si3+=si4;
sj3=i64_load8_u(&i->m0,(U64)si3);
sj2<<=(sj3&63);
sj3=1ULL;
si4=l7;
sj4=i64_load8_u(&i->m0,(U64)si4);
sj3<<=(sj4&63);
sj4=l3;
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
l3=sj0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
if(si0){
goto L5;
}
}
L3:;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
L7:;
{
sj0=1ULL;
si1=l7;
sj1=i64_load8_u(&i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l3;
sj0|=sj1;
l3=sj0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L7;
}
}
L6:;
si0=1U;
l7=si0;
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=1U;
l8=si0;
si0=1U;
l9=si0;
si0=1U;
l10=si0;
goto L8;
L9:;
si0=l2;
l8=si0;
si0=1U;
l11=si0;
si0=l2;
si1=-1U;
si0+=si1;
l6=si0;
l7=si0;
si0=0U;
l5=si0;
L11:;
{
si0=l7;
l4=si0;
si0=l8;
si1=l5;
si2=-1U;
si1^=si2;
l7=si1;
si0+=si1;
l10=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si1=l7;
si0+=si1;
l7=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l1;
si1=l7;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=l1;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l10=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l12;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l8;
si1=l7;
si0-=si1;
l11=si0;
si0=0U;
l5=si0;
goto L12;
L15:;
si0=l7;
si1=l2;
si2=1277176U;
f594(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l4;
si1=-1U;
si0+=si1;
l7=si0;
si0=1U;
l11=si0;
si0=0U;
l5=si0;
si0=l4;
l8=si0;
goto L12;
L13:;
si0=0U;
si1=l5;
si2=1U;
si1+=si2;
l7=si1;
si2=l7;
si3=l11;
si2=si2 == si3;
l7=si2;
si0=si2?si0:si1;
l5=si0;
si0=l4;
si1=l11;
si2=0U;
si3=l7;
si1=si3?si1:si2;
si0-=si1;
l7=si0;
L12:;
si0=l5;
si1=l7;
si0=si0 < si1;
if(si0){
goto L11;
}
}
si0=l2;
l10=si0;
si0=1U;
l9=si0;
si0=0U;
l7=si0;
L18:;
{
si0=l6;
l5=si0;
si0=l10;
si1=l7;
si2=-1U;
si1^=si2;
l6=si1;
si0+=si1;
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l5;
si1=l6;
si0+=si1;
l6=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l1;
si1=l6;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=l1;
si2=l4;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l4=si1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l12;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l10;
si1=l6;
si0-=si1;
l9=si0;
si0=0U;
l7=si0;
goto L19;
L21:;
si0=0U;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si2=l7;
si3=l9;
si2=si2 == si3;
l6=si2;
si0=si2?si0:si1;
l7=si0;
si0=l5;
si1=l9;
si2=0U;
si3=l6;
si1=si3?si1:si2;
si0-=si1;
l6=si0;
goto L19;
L20:;
si0=l5;
si1=-1U;
si0+=si1;
l6=si0;
si0=1U;
l9=si0;
si0=0U;
l7=si0;
si0=l5;
l10=si0;
L19:;
si0=l7;
si1=l6;
si0=si0 < si1;
if(si0){
goto L18;
}
}
si0=l11;
l7=si0;
goto L8;
L17:;
si0=l4;
si1=l2;
si2=1277160U;
f594(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l6;
si1=l2;
si2=1277176U;
f594(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l10;
si1=l2;
si2=1277160U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l8;
si1=l10;
si2=l8;
si3=l10;
si2=si2 < si3;
l4=si2;
si0=si2?si0:si1;
l6=si0;
si1=l2;
si2=l6;
si1-=si2;
l10=si1;
si2=l6;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
l12=si0;
si0=1U;
l5=si0;
si0=l10;
si1=1U;
si0<<=(si1&31);
si1=l2;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l12;
l4=si0;
goto L1;
L22:;
si0=l2;
si1=l6;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l6;
si1=l7;
si2=l9;
si3=l4;
si1=si3?si1:si2;
l4=si1;
si0-=si1;
l8=si0;
si0=l6;
si1=l4;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l10;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l12;
l4=si0;
goto L1;
L27:;
si0=l1;
si1=l6;
si0+=si1;
l7=si0;
si0=l10;
si1=4U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l1;
si1=l8;
si0+=si1;
si1=l10;
si2=-4U;
si1+=si2;
l8=si1;
si0+=si1;
l10=si0;
si0=1U;
l5=si0;
si0=l8;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L28;
}
si0=0U;
si1=l4;
si0-=si1;
l1=si0;
si0=l7;
l2=si0;
L29:;
{
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l12;
l4=si0;
goto L1;
L30:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si1=l1;
si0+=si1;
si1=l10;
si0=si0 < si1;
if(si0){
goto L29;
}
}
L28:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=l8;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l12;
l4=si0;
goto L1;
L26:;
si0=l8;
si1=l6;
si2=1277128U;
f593(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1276812U;
si1=35U;
si2=1277112U;
f604(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=0U;
si1=l4;
si0-=si1;
l8=si0;
si0=l1;
si1=l2;
si0+=si1;
si1=l7;
si0-=si1;
l2=si0;
L31:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=1U;
l5=si0;
si0=l7;
si1=l8;
si0+=si1;
l1=si0;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l10;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L31;
}
}
si0=l12;
l4=si0;
goto L1;
L23:;
si0=0U;
l5=si0;
L1:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l3;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f1329(rustpythonInstance*i,U32 l0,U32 l1) {
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
goto L5;
}
si0=l3;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
si0=l0;
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
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
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
goto L3;
L4:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=0U;
l0=si0;
L7:;
{
si0=l2;
si1=l0;
si0+=si1;
si1=127U;
si0+=si1;
si1=48U;
si2=55U;
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
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l3=si0;
si1=128U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=1102828U;
si3=2U;
si4=l2;
si5=l0;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l0;
si5-=si6;
si0=f662(i,si0,si1,si2,si3,si4,si5);
l0=si0;
L3:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}


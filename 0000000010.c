#include "w2c2_base.h"

#include "rustpython.h"

void f1030(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0^=sj1;
l4=sj0;
si0=0U;
l2=si0;
goto L3;
L4:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l4;
f1298(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=1U;
l2=si0;
L3:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
f1299(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L8:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L8;
}
}
si0=l5;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L7;
case 1:
goto L9;
default:
goto L10;
}
L10:;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
L11:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L6;
L12:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L5:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+8U);
f1298(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
sj0=0ULL;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj0-=sj1;
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=0U;
l2=si0;
goto L3;
L4:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l4;
f1205(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=1U;
l2=si0;
L3:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1207(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L8:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L8;
}
}
si0=l5;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L7;
case 1:
goto L9;
default:
goto L10;
}
L10:;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
L11:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L6;
L12:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L5:;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj2=0ULL;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
sj3=i64_load(&i->m0,(U64)si3);
sj2-=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L13:;
si0=0U;
si1=0U;
si2=1190088U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1032(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
sj0=0ULL;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj0-=sj1;
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
sj0=0ULL;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
sj0-=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l1=si0;
sj0=8589934594ULL;
l4=sj0;
goto L2;
L7:;
sj0=0ULL;
sj1=l4;
sj0-=sj1;
l4=sj0;
si0=0U;
l1=si0;
goto L2;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1208(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L10:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L10;
}
}
si0=l5;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L9;
case 1:
goto L11;
default:
goto L12;
}
L12:;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
L13:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L8;
L14:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L5:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l4;
f1206(i,si0,si1,si2,sj3);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=1U;
l1=si0;
goto L2;
L4:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=0ULL;
si4=l1;
sj4=i64_load(&i->m0,(U64)si4+8U);
sj3-=sj4;
f1206(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
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

void f1033(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
sj2=0ULL;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2-=sj3;
sj3=l2;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1300(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
}
si0=l4;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
default:
goto L7;
}
L7:;
si0=l4;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L8:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L9:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1034(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
goto L5;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
sj3=0ULL;
sj4=l4;
sj3-=sj4;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1301(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L9;
}
}
si0=l5;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l5;
si1=l1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L12:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L13:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L3:;
si0=0U;
si1=0U;
si2=1251508U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
f1033(i,si0,si1,sj2);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1035(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
goto L5;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
sj2=0ULL;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
sj2-=sj3;
sj3=0ULL;
sj4=l4;
sj3-=sj4;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si4=i32_load(&i->m0,(U64)si4+12U);
f1302(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=-1U;
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L9;
}
}
si0=l5;
si1=l1;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l5;
si1=l2;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
L12:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L13:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
goto L1;
L3:;
si0=0U;
si1=0U;
si2=1251524U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
sj2=0ULL;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
sj2-=sj3;
sj3=0ULL;
sj4=l4;
sj3-=sj4;
sj2|=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L14:;
si0=0U;
si1=0U;
si2=1251524U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1036(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+8U);
l4=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
sj0=0ULL;
sj1=l4;
sj0-=sj1;
sj1=l2;
sj0^=sj1;
l2=sj0;
si0=!(sj0);
if(si0){
goto L4;
}
sj0=0ULL;
sj1=l2;
sj0-=sj1;
l2=sj0;
si0=0U;
l5=si0;
goto L3;
L6:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1108(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L9:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L9;
}
}
si0=l6;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
default:
goto L11;
}
L11:;
si0=l6;
si1=l1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L12:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l6;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L7;
L13:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
f15271(i,si0);
goto L1;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=16U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
sj0=8589934594ULL;
l2=sj0;
L3:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=8U;
si1=16U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1037(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
sj1-=sj2;
sj2=l2;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L1;
L2:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=l2;
f1110(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L5:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l6;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L5;
}
}
si0=l4;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
default:
goto L7;
}
L7:;
si0=l4;
si1=l1;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L8:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L3;
L9:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
f15271(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1038(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2+8U);
f1036(i,si0,si1,sj2);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1111(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L6:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L6;
}
}
si0=l4;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L5;
case 1:
goto L7;
default:
goto L8;
}
L8:;
si0=l4;
si1=l1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L9:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L10:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L1;
L3:;
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
sj3=0ULL;
si4=l2;
sj4=i64_load(&i->m0,(U64)si4+8U);
sj3-=sj4;
f1109(i,si0,si1,si2,sj3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1039(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l0;
si1=l2;
sj2=0ULL;
si3=l1;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2-=sj3;
f1037(i,si0,si1,sj2);
goto L1;
L2:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l1;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l2;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l2;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
f1112(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L6:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L6;
}
}
si0=l4;
si1=l2;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L5;
case 1:
goto L7;
default:
goto L8;
}
L8:;
si0=l4;
si1=l1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L9:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
goto L4;
L10:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
f15271(i,si0);
goto L1;
L3:;
si0=l0;
si1=l1;
sj2=0ULL;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3+8U);
sj2-=sj3;
f1037(i,si0,si1,sj2);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1040(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
F64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
sd0=f64_load(&i->m0,(U64)si0);
l4=sd0;
sj0=i64_reinterpret_f64(sd0);
l5=sj0;
sj1=9223372036854775807ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
sd1=INFINITY;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L1;
}
sd0=l4;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L2;
}
sd0=l4;
sd1=1;
si0=sd0 < sd1;
if(si0){
goto L1;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l6=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L3;
}
sj0=l6;
si0=!(sj0);
if(si0){
goto L1;
}
L3:;
sj0=4095ULL;
sj1=2047ULL;
sj2=l5;
sj3=4503599627370496ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l5;
sj2=52ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l7=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l7;
sj1=-4503599627370497ULL;
sj2=4503599627370495ULL;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l5;
sj1&=sj2;
sj2=4503599627370496ULL;
sj1|=sj2;
l5=sj1;
sj1=I64_CTZ(sj1);
l8=sj1;
sj0+=sj1;
sj1=-1075ULL;
sj0+=sj1;
l7=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L1;
}
sj0=l5;
sj1=l8;
sj0>>=(sj1&63);
l5=sj0;
si0=l1;
if(si0){
goto L5;
}
sj0=64ULL;
sj1=l6;
sj1=I64_CLZ(sj1);
sj0-=sj1;
l6=sj0;
goto L4;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
sj0=f1204(i,si0,si1);
l6=sj0;
L4:;
sj0=l6;
sj1=l7;
sj2=l5;
sj2=I64_CLZ(sj2);
sj1-=sj2;
sj2=64ULL;
sj1+=sj2;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
sj1=l5;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si0=f1025(i,si0,si1);
si1=255U;
si0&=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
f15271(i,si0);
L6:;
si0=l3;
si0=!(si0);
l3=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
si1=l0;
sj1=i64_load(&i->m0,(U64)si1+8U);
si1=!(sj1);
si0&=si1;
l3=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f1041(rustpythonInstance*i,U32 l0,F64 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sd1=l1;
f64_store(&i->m0,(U64)si0+8U,sd1);
sd0=l1;
sd1=l1;
si0=sd0 != sd1;
if(si0){
goto L5;
}
sd0=l1;
sd1=INFINITY;
si0=sd0 == sd1;
if(si0){
goto L5;
}
sd0=l1;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L4;
}
sd0=l1;
sd1=0;
si0=sd0 < sd1;
if(si0){
goto L6;
}
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l4=sj0;
sj1=9223372036854775807ULL;
sj0&=sj1;
sd0=f64_reinterpret_i64(sj0);
sd1=INFINITY;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L3;
}
sj0=-1ULL;
sj1=4503599627370495ULL;
sj2=l4;
si2=!(sj2);
sj0=si2?sj0:sj1;
sj1=l4;
sj0&=sj1;
l5=sj0;
sj0=4095ULL;
sj1=2047ULL;
sj2=l4;
sj3=4503599627370496ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l4;
sj2=52ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=l5;
sj2=l5;
sj2=I64_CTZ(sj2);
l4=sj2;
sj1>>=(sj2&63);
i64_store(&i->m0,(U64)si0+24U,sj1);
sj0=l4;
sj1=-1074ULL;
sj0+=sj1;
l4=sj0;
goto L9;
L10:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
sj1=l5;
sj2=4503599627370496ULL;
sj1|=sj2;
l5=sj1;
sj2=l5;
sj2=I64_CTZ(sj2);
l6=sj2;
sj1>>=(sj2&63);
l5=sj1;
i64_store(&i->m0,(U64)si0+24U,sj1);
sj0=l4;
sj1=l6;
sj0+=sj1;
sj1=-1075ULL;
sj0+=sj1;
l4=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L8;
}
L9:;
si0=l3;
si1=16U;
si0+=si1;
sj1=0ULL;
sj2=l4;
sj1-=sj2;
si2=l2;
f1291(i,si0,sj1,si2);
goto L7;
L8:;
sj0=l4;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l4;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L11;
}
sj0=l5;
sj1=l4;
sj0<<=(sj1&63);
l6=sj0;
sj1=l4;
sj0>>=(sj1&63);
sj1=l5;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
goto L7;
L11:;
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=4U;
si0|=si1;
si1=l3;
si2=40U;
si1+=si2;
si2=1U;
sj3=l4;
f1227(i,si0,si1,si2,sj3);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
L7:;
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
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l2;
si1=255U;
si0&=si1;
l2=si0;
si1=-3U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l2;
if(si0){
goto L2;
}
L12:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l3;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1190352U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=387U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=1190308U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=1233432U;
si1=31U;
si2=1233464U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=28U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1190160U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=1187348U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=1190308U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1042(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=0U;
l3=si0;
si0=0U;
l4=si0;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l4;
si0=DIV_U(si0,si1);
l6=si0;
si1=l5;
si2=l6;
si3=l4;
si2*=si3;
si1-=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l4=si0;
L3:;
si0=l2;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l3;
si0=DIV_U(si0,si1);
l6=si0;
si1=l5;
si2=l6;
si3=l3;
si2*=si3;
si1-=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l3=si0;
L4:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=l3;
si3=l4;
si4=l3;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+28U,si1);
goto L0;
L2:;
si0=1253568U;
si1=25U;
si2=1253768U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1253568U;
si1=25U;
si2=1253784U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1043(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1044(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1044(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U64 l18=0;
U32 l19=0;
U64 l20=0;
U64 l21=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=80U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0<<=(si1&31);
l10=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l5;
si1=-2U;
si0&=si1;
l11=si0;
si0=l5;
si1=1U;
si0&=si1;
l12=si0;
si0=l5;
si1=-1U;
si0+=si1;
l13=si0;
si0=0U;
l14=si0;
si0=l2;
l15=si0;
L8:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L5;
}
si0=l10;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l9;
sj0*=sj1;
l16=sj0;
si0=l13;
if(si0){
goto L10;
}
sj0=0ULL;
l17=sj0;
si0=0U;
l3=si0;
sj0=0ULL;
l18=sj0;
goto L9;
L10:;
sj0=0ULL;
l18=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l17=sj0;
si0=0U;
l3=si0;
L11:;
{
si0=l8;
si1=16U;
si0+=si1;
si1=l4;
si2=l7;
si1+=si2;
l19=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=l7;
si0+=si1;
l6=si0;
sj1=l17;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l20=sj1;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=32U;
si0+=si1;
si1=l19;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
sj1=0ULL;
sj2=l20;
sj3=l17;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l8;
si3=16U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l21;
sj3=l20;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l20=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l17=sj1;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l20;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l8;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l21;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l11;
si1=l3;
si2=2U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L9:;
si0=l12;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si1=l4;
si2=l3;
si3=3U;
si2<<=(si3&31);
l7=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l16;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=l7;
si0+=si1;
l7=si0;
sj1=l17;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l20=sj1;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l20;
sj2=l17;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l16;
sj2=l20;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l17=sj0;
L12:;
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l15;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L8;
}
L7:;
si0=0U;
si1=0U;
si2=1195176U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=l10;
si2=1194748U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
si1=0U;
si2=1194732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si1=l15;
si2=1193568U;
si3=l8;
si4=56U;
si3+=si4;
si4=1194764U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l5;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L13;
}
si0=1190368U;
si1=35U;
si2=1194716U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=0U;
l7=si0;
si0=l0;
l6=si0;
si0=0U;
l3=si0;
L16:;
{
si0=l2;
si1=l15;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l20;
si0=sj0 < sj1;
l19=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L18;
}
si0=l19;
l3=si0;
goto L17;
L18:;
si0=l19;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l3=si0;
L17:;
si0=l1;
si1=l7;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si1=1U;
si0&=si1;
l10=si0;
si0=l13;
if(si0){
goto L21;
}
si0=0U;
l19=si0;
sj0=0ULL;
l17=sj0;
goto L20;
L21:;
si0=l5;
si1=-2U;
si0&=si1;
l11=si0;
si0=0U;
l3=si0;
si0=l4;
l6=si0;
si0=l0;
l7=si0;
si0=0U;
l19=si0;
L22:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l3;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l6;
sj3=i64_load(&i->m0,(U64)si3);
l20=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l15=si0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l17;
sj3=l20;
si2=sj2 <= sj3;
sj3=l17;
sj4=l20;
si3=sj3 < sj4;
si4=l3;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l3=si2;
sj2=(U64)(si2);
si3=l6;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l17;
si0=sj0 <= sj1;
sj1=l16;
sj2=l17;
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
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
sj0=0ULL;
si1=l3;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L20:;
si0=l10;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=l19;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l6=si0;
sj1=l17;
si2=l4;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L19:;
si0=l8;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L15:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=1U;
si1=l8;
si2=52U;
si1+=si2;
si2=1191456U;
si3=l8;
si4=56U;
si3+=si4;
si4=1194780U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l10;
si1=l3;
si2=1194700U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1045(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 si0,si1,si2,si3,si4,si5;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
f1367(i,si0,si1,si2,si3,si4,si5);
L0:;
}

void f1046(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
f1101(i,si0,si1,si2,si3);
L0:;
}

void f1047(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1048(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1048(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U64 l9=0;
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l5;
si1=9U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l5;
l8=si0;
si0=l5;
si1=13U;
si0=si0 < si1;
if(si0){
goto L15;
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
l9=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l10=si0;
if(si0){
goto L16;
}
si0=0U;
l8=si0;
goto L15;
L16:;
si0=l10;
sj1=l9;
si1=(U32)(sj1);
l11=si1;
si0<<=(si1&31);
l8=si0;
si1=l11;
si0>>=(si1&31);
si1=l10;
si0=si0 != si1;
if(si0){
goto L14;
}
L15:;
si0=l5;
si1=l8;
si0+=si1;
si1=l8;
si2=l8;
si3=1U;
si2>>=(si3&31);
si3=l5;
si2=si2 < si3;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
l12=si0;
if(si0){
goto L18;
}
si0=8U;
l13=si0;
goto L17;
L18:;
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l10;
if(si0){
goto L20;
}
si0=l11;
l13=si0;
goto L19;
L20:;
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l13;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L17;
L21:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l13=si0;
L19:;
si0=l13;
si0=!(si0);
if(si0){
goto L12;
}
L17:;
si0=l12;
si1=l5;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l5;
si1=l3;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=l7;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l13;
si1=l5;
si2=l2;
si3=l5;
si4=l6;
si5=l5;
f1200(i,si0,si1,si2,si3,si4,si5);
si0=l12;
si1=l5;
si0-=si1;
l14=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l13;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si1=l8;
si2=l8;
si3=l13;
si4=l5;
si5=l4;
si6=l5;
si7=l15;
si8=l8;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l16=si7;
si8=l14;
si9=l8;
si8-=si9;
l10=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si1=1U;
si0<<=(si1&31);
l17=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l17;
si1=l8;
si0-=si1;
l18=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l18;
si1=l3;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l18;
si1=l10;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l17;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l18;
si1=1U;
si0&=si1;
l19=si0;
si0=l17;
si1=l8;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
l6=si0;
si0=0U;
l10=si0;
goto L22;
L24:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l8;
si1=3U;
si0<<=(si1&31);
l20=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l18;
si2=-2U;
si1&=si2;
si0-=si1;
l21=si0;
si0=l15;
l10=si0;
si0=l2;
l7=si0;
si0=0U;
l6=si0;
L25:;
{
si0=l10;
si1=l20;
si0+=si1;
l22=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l6;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l22;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l9;
sj3=l23;
si2=sj2 <= sj3;
sj3=l9;
sj4=l23;
si3=sj3 < sj4;
si4=l6;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l6=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l7;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l9;
si0=sj0 <= sj1;
sj1=l24;
sj2=l9;
si1=sj1 < sj2;
si2=l6;
si0=si2?si0:si1;
l6=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l21;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
si0=0U;
si1=l11;
si0-=si1;
l10=si0;
L22:;
si0=l19;
si0=!(si0);
if(si0){
goto L26;
}
si0=l16;
si1=l10;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l15;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l6;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l23;
si0=sj0 <= sj1;
sj1=l9;
sj2=l23;
si1=sj1 < sj2;
si2=l6;
si0=si2?si0:si1;
l6=si0;
L26:;
si0=l17;
si1=l14;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l17;
si1=l8;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l8;
si0=!(si0);
if(si0){
goto L27;
}
si0=l15;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=8U;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l10=si0;
L28:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L27;
}
si0=l6;
si1=l10;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l9;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
goto L28;
}
L27:;
si0=1194940U;
si1=64U;
si2=1195004U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1190368U;
si1=35U;
si2=1194796U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l5;
si1=l3;
si2=1194812U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l5;
si1=l7;
si2=1194828U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1190368U;
si1=35U;
si2=1194844U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1195068U;
si1=28U;
si2=1195096U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l18;
si1=l8;
si2=1194860U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l18;
si1=l3;
si2=1194876U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l17;
si1=l14;
si2=1194892U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1195020U;
si1=32U;
si2=1195052U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l18;
si1=l17;
si2=1194908U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L30;
}
si0=l17;
si1=l3;
si0=si0 > si1;
if(si0){
goto L29;
}
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l5;
si0=!(si0);
if(si0){
goto L31;
}
si0=l15;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l20=si0;
si0=l2;
si1=l10;
si0+=si1;
l21=si0;
si0=l5;
si1=1U;
si0&=si1;
l3=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=0U;
l7=si0;
si0=0U;
l6=si0;
goto L32;
L34:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l5;
si1=-2U;
si0&=si1;
l17=si0;
si0=0U;
l10=si0;
si0=0U;
l7=si0;
si0=0U;
l6=si0;
L35:;
{
si0=l0;
si1=l10;
si0+=si1;
l11=si0;
si1=l21;
si2=l10;
si1+=si2;
l22=si1;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l7;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l20;
si3=l10;
si2+=si3;
l8=si2;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l22;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l9;
sj3=l23;
si2=sj2 <= sj3;
sj3=l9;
sj4=l23;
si3=sj3 < sj4;
si4=l7;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l7=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l9=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l9;
si0=sj0 <= sj1;
sj1=l24;
sj2=l9;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l17;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L32:;
si0=l3;
si0=!(si0);
if(si0){
goto L36;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l21;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
si2=l7;
sj2=(U64)(si2);
sj1-=sj2;
si2=l20;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l23;
si0=sj0 <= sj1;
sj1=l9;
sj2=l23;
si1=sj1 < sj2;
si2=l7;
si0=si2?si0:si1;
l7=si0;
L36:;
si0=l7;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L31;
}
si0=0U;
l10=si0;
L37:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l9=sj0;
sj1=l23;
si0=sj0 < sj1;
l7=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L39;
}
si0=l7;
l10=si0;
goto L38;
L39:;
si0=l7;
sj1=l9;
sj2=1ULL;
sj1+=sj2;
l9=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L38:;
si0=l0;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L37;
}
}
L31:;
si0=l12;
si0=!(si0);
if(si0){
goto L40;
}
si0=l13;
f15271(i,si0);
L40:;
goto L0;
L30:;
si0=l5;
si1=l17;
si2=1194924U;
f675(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l17;
si1=l3;
si2=1194924U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1049(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1048(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1050(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1044(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1051(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1048(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1052(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l7;
si7=l8;
f1044(i,si0,si1,si2,si3,si4,si5,si6,si7);
L0:;
}

void f1053(rustpythonInstance*i,U32 l0) {
L0:;
}

void f1054(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l3;
si2=l4;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
si2=l4;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f1055(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1190956U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l2;
si1=l3;
si2=1196096U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l2;
si2=1190908U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si1=l6;
si2=1196112U;
f675(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=l3;
si2=1196112U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l7;
si2=1190924U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l6;
si1=l0;
si2=1196128U;
f675(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l3;
si2=1196128U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
si2=1190940U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1056(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l1;
si1=l5;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l9=si0;
si1=l6;
si0+=si1;
l10=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l10;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l1;
si1=l6;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l9;
si1=l6;
si0=si0 >= si1;
l11=si0;
if(si0){
goto L29;
}
si0=l6;
si1=l9;
si0=f1359(i,si0,si1);
l12=si0;
goto L28;
L29:;
si0=l9;
si1=l6;
si0=f1359(i,si0,si1);
l12=si0;
L28:;
si0=l12;
if(si0){
goto L31;
}
si0=8U;
l13=si0;
goto L30;
L31:;
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L23;
}
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l15=si0;
si0=l14;
if(si0){
goto L33;
}
si0=l15;
l13=si0;
goto L32;
L33:;
si0=l15;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l15;
si1=l14;
si0=f15277(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l13;
si1=0U;
si2=l14;
si0=f15392(i,si0,si1,si2);
goto L30;
L34:;
si0=l14;
si1=1U;
si0=f15273(i,si0,si1);
l13=si0;
L32:;
si0=l13;
si0=!(si0);
if(si0){
goto L22;
}
L30:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l16=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+16U);
l14=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l9;
si1=l16;
si2=l14;
si1-=si2;
l15=si1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l11;
if(si0){
goto L36;
}
si0=l7;
si1=l10;
si2=l2;
si3=l6;
si4=l15;
si5=l9;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L35;
L36:;
si0=l7;
si1=l10;
si2=l15;
si3=l9;
si4=l2;
si5=l6;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L35:;
si0=l14;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+12U);
l18=si1;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l9;
si1=l14;
si2=l18;
si1-=si2;
l14=si1;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l8;
si1=l10;
si0-=si1;
l19=si0;
si0=l7;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=l17;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l11;
if(si0){
goto L38;
}
si0=l20;
si1=l19;
si2=l2;
si3=l6;
si4=l14;
si5=l9;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L37;
L38:;
si0=l20;
si1=l19;
si2=l14;
si3=l9;
si4=l2;
si5=l6;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L37:;
si0=l10;
si1=l6;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l2;
si1=l7;
si2=l6;
si3=3U;
si2<<=(si3&31);
l21=si2;
si0=f15390(i,si0,si1,si2);
l22=si0;
si0=l1;
si1=l6;
si0-=si1;
l23=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l7;
si1=l21;
si0+=si1;
l2=si0;
si0=l9;
if(si0){
goto L40;
}
si0=0U;
l24=si0;
goto L39;
L40:;
si0=l22;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=0U;
l15=si0;
si0=l9;
l26=si0;
si0=l2;
l8=si0;
L41:;
{
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l28=sj0;
sj1=l27;
si0=sj0 < sj1;
l29=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L43;
}
si0=l29;
l15=si0;
goto L42;
L43:;
si0=l29;
sj1=l28;
sj2=1ULL;
sj1+=sj2;
l28=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L42:;
si0=l14;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l26;
si1=-1U;
si0+=si1;
l26=si0;
if(si0){
goto L41;
}
}
si0=l23;
si1=l9;
si0=si0 == si1;
l14=si0;
si1=l15;
si0&=si1;
l24=si0;
si0=l14;
if(si0){
goto L39;
}
si0=l15;
si1=1U;
si0^=si1;
if(si0){
goto L39;
}
si0=l25;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l24=si0;
sj0=l28;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L39;
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
si1=l22;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
L44:;
{
si0=l14;
si0=!(si0);
l24=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L39;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L44;
}
}
L39:;
si0=l18;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l25=si1;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l18;
si1=l16;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l9;
si1=l18;
si2=l25;
si1-=si2;
l14=si1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l17;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l11;
if(si0){
goto L46;
}
si0=l7;
si1=l10;
si2=l4;
si3=l6;
si4=l14;
si5=l9;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L45;
L46:;
si0=l7;
si1=l10;
si2=l14;
si3=l9;
si4=l4;
si5=l6;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L45:;
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l10;
si0=!(si0);
if(si0){
goto L9;
}
si0=l10;
si1=1U;
si0&=si1;
l18=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=0U;
l15=si0;
si0=0U;
l26=si0;
goto L47;
L48:;
si0=l10;
si1=-2U;
si0&=si1;
l0=si0;
si0=0U;
l15=si0;
si0=l7;
l8=si0;
si0=l22;
l14=si0;
si0=0U;
l26=si0;
L49:;
{
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l15;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l8;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l29=si0;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
l30=sj1;
sj2=l28;
sj3=l27;
si2=sj2 <= sj3;
sj3=l28;
sj4=l27;
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
l28=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l30;
sj1=l28;
si0=sj0 <= sj1;
sj1=l30;
sj2=l28;
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
si1=l26;
si2=2U;
si1+=si2;
l26=si1;
si0=si0 != si1;
if(si0){
goto L49;
}
}
L47:;
si0=l18;
si0=!(si0);
if(si0){
goto L50;
}
si0=l22;
si1=l26;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l15;
sj2=(U64)(si2);
si3=l7;
si4=l14;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 <= sj1;
sj1=l28;
sj2=l27;
si1=sj1 < sj2;
si2=l15;
si0=si2?si0:si1;
l15=si0;
L50:;
si0=l10;
si1=l1;
si0=si0 == si1;
l14=si0;
si1=l15;
si0&=si1;
l8=si0;
si0=l14;
if(si0){
goto L10;
}
si0=l15;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l22;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L9;
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
si1=l22;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
L51:;
{
si0=l8;
if(si0){
goto L52;
}
si0=1U;
l8=si0;
goto L10;
L52:;
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
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
sj0=l28;
si0=!(sj0);
if(si0){
goto L51;
}
goto L9;
}
L27:;
si0=l1;
si1=l3;
si2=1190972U;
f666(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l1;
si1=l5;
si2=1190988U;
f666(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=1190368U;
si1=35U;
si2=1191004U;
f673(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1190368U;
si1=35U;
si2=1191020U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
f53(i);
UNREACHABLE;
L22:;
si0=l15;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L21:;
si0=l14;
si1=l16;
si2=1196144U;
f662(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l9;
si1=l15;
si2=1191036U;
f666(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l18;
si1=l14;
si2=1196128U;
f675(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l9;
si1=l14;
si2=1191052U;
f666(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1190368U;
si1=35U;
si2=1191068U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l25;
si1=l18;
si2=1196112U;
f675(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l18;
si1=l16;
si2=1196112U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l9;
si1=l14;
si2=1191084U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1253593U;
si1=35U;
si2=1254656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1191376U;
si1=29U;
si2=1191408U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l24;
si1=l8;
si2=1U;
si1^=si2;
l14=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l14;
si1=l24;
si0&=si1;
l24=si0;
L9:;
si0=l25;
si1=l16;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=l9;
si1=l25;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l11;
if(si0){
goto L57;
}
si0=l7;
si1=l10;
si2=l4;
si3=l6;
si4=l17;
si5=l9;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L56;
L57:;
si0=l7;
si1=l10;
si2=l17;
si3=l9;
si4=l4;
si5=l6;
si6=l13;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L56:;
si0=l4;
si1=l7;
si2=l21;
si0=f15390(i,si0,si1,si2);
l7=si0;
si0=l9;
if(si0){
goto L59;
}
si0=0U;
l0=si0;
goto L58;
L59:;
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
l29=si0;
si0=0U;
l8=si0;
si0=l9;
l15=si0;
L60:;
{
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l28=sj0;
sj1=l27;
si0=sj0 < sj1;
l26=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L62;
}
si0=l26;
l8=si0;
goto L61;
L62:;
si0=l26;
sj1=l28;
sj2=1ULL;
sj1+=sj2;
l28=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L61:;
si0=l14;
sj1=l28;
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
goto L60;
}
}
si0=l23;
si1=l9;
si0=si0 == si1;
l14=si0;
si1=l8;
si0&=si1;
l0=si0;
si0=l14;
if(si0){
goto L58;
}
si0=l8;
si1=1U;
si0^=si1;
if(si0){
goto L58;
}
si0=l29;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l0=si0;
sj0=l28;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L58;
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
L63:;
{
si0=l14;
si0=!(si0);
l0=si0;
si0=l14;
si0=!(si0);
if(si0){
goto L58;
}
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=-8U;
si0+=si1;
l14=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L63;
}
}
L58:;
si0=l10;
si1=l19;
si0=si0 > si1;
if(si0){
goto L53;
}
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l10;
si1=1U;
si0&=si1;
l9=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=0U;
l8=si0;
si0=0U;
l15=si0;
goto L64;
L65:;
si0=l10;
si1=-2U;
si0&=si1;
l29=si0;
si0=0U;
l8=si0;
si0=l20;
l2=si0;
si0=l7;
l14=si0;
si0=0U;
l15=si0;
L66:;
{
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l8;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l2;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
l26=si0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
l30=sj1;
sj2=l28;
sj3=l27;
si2=sj2 <= sj3;
sj3=l28;
sj4=l27;
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
l28=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l30;
sj1=l28;
si0=sj0 <= sj1;
sj1=l30;
sj2=l28;
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
si0=l29;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L66;
}
}
L64:;
si0=l9;
si0=!(si0);
if(si0){
goto L67;
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
l28=sj1;
si2=l8;
sj2=(U64)(si2);
si3=l20;
si4=l14;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 <= sj1;
sj1=l28;
sj2=l27;
si1=sj1 < sj2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
L67:;
si0=l10;
si1=l1;
si0=si0 == si1;
l14=si0;
si1=l8;
si0&=si1;
l2=si0;
si0=l14;
if(si0){
goto L7;
}
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
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
L68:;
{
si0=l2;
if(si0){
goto L69;
}
si0=1U;
l2=si0;
goto L7;
L69:;
si0=l14;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
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
sj0=l28;
si0=!(sj0);
if(si0){
goto L68;
}
goto L6;
}
L55:;
si0=l25;
si1=l16;
si2=1196096U;
f666(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l9;
si1=l25;
si2=1191100U;
f666(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l10;
si1=l19;
si2=1191116U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1191336U;
si1=24U;
si2=1191360U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=l2;
si2=1U;
si1^=si2;
l14=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l14;
si1=l0;
si0&=si1;
l0=si0;
L6:;
si0=l24;
si1=l0;
si0|=si1;
if(si0){
goto L70;
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
si0=l22;
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
L70:;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l1;
si1=l3;
si2=1191164U;
f663(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=l22;
si1=l1;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
si1=l24;
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
si2=1191180U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1191296U;
si1=24U;
si2=1191320U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l14;
si1=l3;
si2=1191132U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l14;
si1=l5;
si2=1191148U;
f663(i,si0,si1,si2);
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
goto L74;
}
si0=l22;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L75;
}
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L72;
}
si0=l7;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L73;
}
L75:;
si0=l12;
si0=!(si0);
if(si0){
goto L76;
}
si0=l13;
f15271(i,si0);
L76:;
si0=l1;
goto L0;
L74:;
si0=l14;
si1=l3;
si2=1191196U;
f663(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=1191228U;
si1=50U;
si2=1191280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l14;
si1=l5;
si2=1191212U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1057(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U32 l28=0;
U32 l29=0;
U64 l30=0;
U32 l31=0;
U64 l32=0;
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
goto L24;
}
si0=l4;
si1=1679U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l4;
si1=l5;
si0-=si1;
l9=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l7;
si1=l9;
si0-=si1;
l7=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L21;
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
si0=f15390(i,si0,si1,si2);
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
si2=f15390(i,si2,si3,si4);
l6=si2;
si3=l9;
si4=l0;
si5=l6;
si6=l5;
si5+=si6;
si6=l7;
si7=l9;
si6-=si7;
si0=f1058(i,si0,si1,si2,si3,si4,si5,si6);
si0=!(si0);
if(si0){
goto L9;
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
goto L30;
}
si0=l3;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L28;
}
L30:;
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
L32:;
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
goto L31;
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
goto L32;
}
}
si0=l7;
l2=si0;
L31:;
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
L34:;
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
goto L33;
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
goto L34;
}
}
si0=l7;
l9=si0;
L33:;
si0=l2;
si1=l4;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l4;
si1=l9;
si0-=si1;
l12=si0;
si0=l9;
si1=l4;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
l14=si1;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
si1=l13;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l10;
if(si0){
goto L27;
}
si0=0U;
l7=si0;
goto L26;
L29:;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L20;
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
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
l2=si0;
if(si0){
goto L25;
}
si0=0U;
l2=si0;
goto L9;
L28:;
si0=1191228U;
si1=50U;
si2=1192336U;
f673(i,si0,si1,si2);
UNREACHABLE;
L27:;
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
L35:;
{
si0=l2;
si1=l5;
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
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
if(si0){
goto L35;
}
}
si0=l9;
l7=si0;
L26:;
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
goto L16;
}
si0=l9;
si1=l14;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l10;
si1=l9;
si2=l13;
si1-=si2;
l17=si1;
si0=si0 <= si1;
if(si0){
goto L36;
}
si0=l17;
l13=si0;
goto L12;
L36:;
si0=l10;
if(si0){
goto L38;
}
si0=0U;
l6=si0;
goto L37;
L38:;
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
L39:;
{
si0=l2;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L37;
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
goto L39;
}
}
si0=l18;
l6=si0;
L37:;
si0=l8;
si1=l10;
si2=l6;
si1-=si2;
l19=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l18=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l14;
si1=l18;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l10;
si1=l18;
si2=l9;
si1-=si2;
l20=si1;
si0=si0 <= si1;
if(si0){
goto L40;
}
si0=l20;
l13=si0;
goto L12;
L40:;
si0=l10;
si0=!(si0);
if(si0){
goto L42;
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
l23=si0;
si0=0U;
l2=si0;
L44:;
{
si0=l9;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L43;
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
goto L44;
}
}
si0=l23;
l2=si0;
L43:;
si0=l8;
si1=l10;
si2=l2;
si1-=si2;
l24=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=l14;
si2=l18;
si1-=si2;
l25=si1;
si0=si0 <= si1;
if(si0){
goto L45;
}
si0=l25;
l13=si0;
goto L12;
L45:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l15;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si1=-8U;
si0+=si1;
l0=si0;
si0=0U;
l9=si0;
L47:;
{
si0=l0;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L46;
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
goto L47;
}
}
si0=l23;
l9=si0;
L46:;
si0=l8;
si1=l10;
si2=l9;
si1-=si2;
l23=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l7;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l10;
si1=l6;
si0=si0 != si1;
l5=si0;
if(si0){
goto L48;
}
si0=l10;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
L48:;
si0=l5;
if(si0){
goto L11;
}
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l13;
si0=!(si0);
if(si0){
goto L4;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l23;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l14;
si1=l18;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l26;
si2=1191480U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191520U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L42:;
si0=l8;
si1=16U;
si0+=si1;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l10;
si1=l7;
si0=si0 != si1;
if(si0){
goto L1;
}
L41:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=4U;
si1+=si2;
si2=1191456U;
si3=l8;
si4=24U;
si3+=si4;
si4=1192304U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L25:;
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
si0=f1056(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l2=si0;
goto L9;
L24:;
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
si4=1192400U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=1190368U;
si1=35U;
si2=1192352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1190368U;
si1=35U;
si2=1192352U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l5;
si1=l4;
si2=1192368U;
f662(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l5;
si1=l4;
si2=1192384U;
f662(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l11;
si1=l4;
si2=1191424U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l12;
si1=l4;
si2=1191440U;
f666(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l13;
si1=l14;
si2=1196096U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l13;
si1=l9;
si2=1196112U;
f675(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l9;
si1=l14;
si2=1196112U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l9;
si1=l18;
si2=1196128U;
f675(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l18;
si1=l14;
si2=1196128U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l10;
si1=l13;
si2=1192320U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l10;
si1=l2;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=l8;
si1=l11;
si2=l16;
si1-=si2;
l5=si1;
si2=l12;
si3=l24;
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
si4=l23;
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
l6=si0;
si1=13U;
si0=si0 < si1;
if(si0){
goto L73;
}
si0=l6;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l6;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l6;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l27=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l5=si0;
if(si0){
goto L74;
}
si0=0U;
l5=si0;
si0=0U;
l6=si0;
goto L72;
L74:;
si0=l5;
sj1=l27;
si1=(U32)(sj1);
l9=si1;
si0<<=(si1&31);
l6=si0;
si1=l9;
si0>>=(si1&31);
si1=l5;
si0=si0 != si1;
if(si0){
goto L66;
}
L73:;
si0=l6;
si1=1U;
si0<<=(si1&31);
l5=si0;
si0=l6;
si1=1U;
si0>>=(si1&31);
l9=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L71;
}
L72:;
si0=l6;
si1=4U;
si0+=si1;
l9=si0;
goto L70;
L71:;
si0=l9;
si1=l10;
si0=si0 < si1;
if(si0){
goto L75;
}
si0=l6;
si1=l9;
si0+=si1;
si1=4U;
si0+=si1;
l9=si0;
goto L70;
L75:;
si0=l5;
si1=4U;
si0+=si1;
l9=si0;
L70:;
si0=l9;
si1=l5;
si0+=si1;
l28=si0;
if(si0){
goto L77;
}
si0=8U;
l7=si0;
goto L76;
L77:;
si0=l28;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L65;
}
si0=l28;
si1=3U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L65;
}
si0=l28;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l9;
if(si0){
goto L79;
}
si0=l10;
l7=si0;
goto L78;
L79:;
si0=l10;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L80;
}
si0=l10;
si1=l9;
si0=f15277(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l7;
si1=0U;
si2=l9;
si0=f15392(i,si0,si1,si2);
goto L76;
L80:;
si0=l9;
si1=1U;
si0=f15273(i,si0,si1);
l7=si0;
L78:;
si0=l7;
si0=!(si0);
if(si0){
goto L64;
}
L76:;
si0=l28;
si1=l6;
si0=si0 < si1;
if(si0){
goto L63;
}
si0=l28;
si1=l6;
si0-=si1;
l29=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=l5;
si1=l4;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l6;
si1=l4;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l4;
l11=si0;
goto L53;
L69:;
si0=l16;
si1=1U;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l13;
si0=!(si0);
if(si0){
goto L60;
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L59;
}
si0=l23;
si1=1U;
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l14;
si1=l18;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L81;
}
si0=l19;
si1=l17;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l1;
si1=l11;
si2=l3;
si3=l12;
si4=l21;
si5=l19;
si0=f1060(i,si0,si1,si2,si3,si4,si5);
l2=si0;
goto L9;
L81:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l26;
si2=1191480U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191632U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L68:;
si0=1192164U;
si1=33U;
si2=1192200U;
f673(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=l6;
si1=l4;
si2=l6;
si1-=si2;
l18=si1;
si0=si0 < si1;
if(si0){
goto L55;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=0U;
l9=si0;
si0=l4;
l10=si0;
si0=l1;
l5=si0;
L82:;
{
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l30=sj0;
si1=l5;
si2=l14;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l27=sj0;
sj1=l30;
si0=sj0 < sj1;
l0=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L84;
}
si0=l0;
l9=si0;
goto L83;
L84:;
si0=l0;
sj1=l27;
sj2=1ULL;
sj1+=sj2;
l27=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L83:;
si0=l5;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=l10;
si2=-1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L82;
}
}
si0=l6;
si1=l18;
si0=si0 == si1;
l14=si0;
if(si0){
goto L86;
}
si0=l9;
si1=1U;
si0^=si1;
if(si0){
goto L86;
}
si0=l1;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
}
si0=l6;
si1=4U;
si0<<=(si1&31);
si1=l4;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
L87:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L85;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l27;
si0=!(sj0);
if(si0){
goto L87;
}
goto L54;
}
L86:;
si0=l14;
si1=l9;
si0&=si1;
si0=!(si0);
if(si0){
goto L54;
}
L85:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
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
l9=si0;
L89:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L88;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l27;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L54;
}
goto L89;
}
L88:;
si0=1192092U;
si1=55U;
si2=1192148U;
f673(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L65:;
f53(i);
UNREACHABLE;
L64:;
si0=l10;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L63:;
si0=1190368U;
si1=35U;
si2=1191696U;
f673(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=1190368U;
si1=35U;
si2=1191696U;
f673(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=4U;
si1+=si2;
si2=1191460U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191680U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L60:;
si0=0U;
si1=0U;
si2=1191584U;
f663(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l15;
si2=1191480U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191664U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L58:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=1191460U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191648U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L57:;
si0=0U;
si1=0U;
si2=1191600U;
f663(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=l19;
si1=l17;
si2=1191616U;
f666(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l6;
si1=l4;
si0=si0 == si1;
if(si0){
goto L90;
}
si0=l3;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
l0=si0;
si0=0U;
l9=si0;
si0=l3;
l5=si0;
L91:;
{
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l30=sj0;
si1=l5;
si2=l0;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l27=sj0;
sj1=l30;
si0=sj0 < sj1;
l10=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L93;
}
si0=l10;
l9=si0;
goto L92;
L93:;
si0=l10;
sj1=l27;
sj2=1ULL;
sj1+=sj2;
l27=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L92:;
si0=l5;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
if(si0){
goto L91;
}
}
si0=l14;
if(si0){
goto L95;
}
si0=l9;
si1=1U;
si0^=si1;
if(si0){
goto L95;
}
si0=l11;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L90;
}
si0=l6;
si1=4U;
si0<<=(si1&31);
si1=l4;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l9=si0;
si0=l5;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l3;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
L96:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L94;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l27;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L90;
}
goto L96;
}
L95:;
si0=l14;
si1=l9;
si0&=si1;
si0=!(si0);
if(si0){
goto L90;
}
L94:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L90;
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
l9=si0;
L98:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L97;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l27;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L90;
}
goto L98;
}
L97:;
si0=1192020U;
si1=55U;
si2=1192076U;
f673(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l6;
l11=si0;
si0=l6;
si1=l4;
si0=si0 > si1;
if(si0){
goto L52;
}
L53:;
si0=l23;
si1=l25;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=l7;
si1=l6;
si2=l6;
si3=l1;
si4=l11;
si5=l26;
si6=l23;
si7=l7;
si8=l6;
si9=3U;
si8<<=(si9&31);
l5=si8;
si7+=si8;
l25=si7;
si8=l5;
si7+=si8;
l31=si7;
si8=l29;
si9=l6;
si8-=si9;
l29=si8;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l19;
si1=l17;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l25;
si1=l6;
si2=l6;
si3=l3;
si4=l11;
si5=l21;
si6=l19;
si7=l31;
si8=l29;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l6;
si1=l11;
si2=l23;
si1+=si2;
l5=si1;
si0=si0 <= si1;
if(si0){
goto L49;
}
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l6;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
goto L49;
L52:;
si0=l6;
si1=l4;
si2=1191712U;
f666(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l23;
si1=l25;
si2=1191728U;
f666(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l19;
si1=l17;
si2=1191744U;
f666(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l6;
si1=l11;
si2=l19;
si1+=si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L101;
}
si0=l6;
if(si0){
goto L100;
}
si0=1U;
l10=si0;
goto L99;
L101:;
si0=l25;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l6;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L100:;
si0=l6;
si1=1U;
si0&=si1;
l23=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L103;
}
si0=0U;
l9=si0;
si0=0U;
l4=si0;
goto L102;
L103:;
si0=l6;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l6;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l9=si0;
si0=l7;
l5=si0;
si0=0U;
l4=si0;
L104:;
{
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l5;
si4=l18;
si3+=si4;
l10=si3;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l0=si0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l27;
sj3=l30;
si2=sj2 <= sj3;
sj3=l27;
sj4=l30;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
si3=l10;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l32;
sj1=l27;
si0=sj0 <= sj1;
sj1=l32;
sj2=l27;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l14;
si1=l4;
si2=2U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L104;
}
}
L102:;
si0=l23;
si0=!(si0);
if(si0){
goto L105;
}
si0=l7;
si1=l4;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l9;
sj2=(U64)(si2);
si3=l25;
si4=l5;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l30;
si0=sj0 <= sj1;
sj1=l27;
sj2=l30;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L105:;
si0=0U;
l10=si0;
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L99;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L99;
}
si0=l7;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l9=si0;
L107:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L106;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l27;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L99;
}
goto L107;
}
L106:;
si0=1191916U;
si1=54U;
si2=1192004U;
f673(i,si0,si1,si2);
UNREACHABLE;
L99:;
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L113;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l5=si0;
L115:;
{
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L114;
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
goto L115;
}
}
si0=1191856U;
si1=44U;
si2=1191988U;
f673(i,si0,si1,si2);
UNREACHABLE;
L114:;
si0=l24;
si1=l20;
si0=si0 > si1;
if(si0){
goto L112;
}
si0=l25;
si1=l6;
si2=l6;
si3=l1;
si4=l11;
si5=l22;
si6=l24;
si7=l31;
si8=l29;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l2;
si1=l11;
si0=si0 > si1;
if(si0){
goto L111;
}
si0=l1;
si1=l7;
si2=l2;
si3=3U;
si2<<=(si3&31);
l18=si2;
si0=f15390(i,si0,si1,si2);
l14=si0;
si0=l16;
si1=l13;
si0=si0 > si1;
if(si0){
goto L110;
}
si0=l7;
si1=l6;
si2=l6;
si3=l3;
si4=l11;
si5=l15;
si6=l16;
si7=l31;
si8=l29;
f1376(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l6;
si1=l11;
si2=l24;
si1+=si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L109;
}
goto L108;
L113:;
si0=1190368U;
si1=35U;
si2=1191760U;
f673(i,si0,si1,si2);
UNREACHABLE;
L112:;
si0=l24;
si1=l20;
si2=1191776U;
f666(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=l2;
si1=l11;
si2=1191792U;
f666(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l16;
si1=l13;
si2=1191808U;
f666(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l25;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l6;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L108:;
si0=l6;
si1=l11;
si2=l16;
si1+=si2;
l5=si1;
si0=si0 <= si1;
if(si0){
goto L116;
}
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l6;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L116:;
si0=l10;
if(si0){
goto L117;
}
si0=l6;
si1=1U;
si0&=si1;
l13=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L119;
}
si0=0U;
l9=si0;
si0=0U;
l4=si0;
goto L118;
L119:;
si0=l6;
si1=3U;
si0<<=(si1&31);
l0=si0;
si0=l6;
si1=-2U;
si0&=si1;
l15=si0;
si0=0U;
l9=si0;
si0=l7;
l5=si0;
si0=0U;
l4=si0;
L120:;
{
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l5;
si4=l0;
si3+=si4;
l1=si3;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l27;
sj3=l30;
si2=sj2 <= sj3;
sj3=l27;
sj4=l30;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
si3=l1;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l32;
sj1=l27;
si0=sj0 <= sj1;
sj1=l32;
sj2=l27;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l15;
si1=l4;
si2=2U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L120;
}
}
L118:;
si0=l13;
si0=!(si0);
if(si0){
goto L121;
}
si0=l7;
si1=l4;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l4=si0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l9;
sj2=(U64)(si2);
si3=l25;
si4=l5;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l30=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l30;
si0=sj0 <= sj1;
sj1=l27;
sj2=l30;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L121:;
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L117;
}
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L117;
}
si0=l7;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l9=si0;
L123:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L122;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l27;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L117;
}
goto L123;
}
L122:;
si0=1191916U;
si1=54U;
si2=1191972U;
f673(i,si0,si1,si2);
UNREACHABLE;
L117:;
si0=l6;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l12;
si1=3U;
si0<<=(si1&31);
si1=8U;
si0+=si1;
l5=si0;
L125:;
{
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L124;
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
goto L125;
}
}
si0=1191856U;
si1=44U;
si2=1191900U;
f673(i,si0,si1,si2);
UNREACHABLE;
L124:;
si0=l3;
si1=l7;
si2=l18;
si0=f15390(i,si0,si1,si2);
l9=si0;
si0=l12;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L127;
}
si0=l14;
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
L128:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L126;
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
goto L128;
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
si2=1191456U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191840U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L127:;
si0=l12;
si1=l11;
si2=1191824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L126:;
si0=l28;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
f15271(i,si0);
goto L9;
L10:;
si0=l24;
si1=l20;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l3;
si1=l12;
si2=l1;
si3=l11;
si4=l22;
si5=l24;
si0=f1060(i,si0,si1,si2,si3,si4,si5);
l2=si0;
L9:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L8:;
si0=l24;
si1=l20;
si2=1191504U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=0U;
si1=0U;
si2=1191488U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=16U;
si1+=si2;
si2=1191460U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191536U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l15;
si2=1191480U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191552U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1191464U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=4U;
si1+=si2;
si2=1191460U;
si3=l8;
si4=24U;
si3+=si4;
si4=1191568U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1192216U;
si1=56U;
si2=1192272U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=16U;
si1+=si2;
si2=1191456U;
si3=l8;
si4=24U;
si3+=si4;
si4=1192288U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f1058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si0=!(sj0);
si0=!(si0);
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
goto L22;
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
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
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
sj0=l11;
si0=(U32)(sj0);
si1=1U;
si0<<=(si1&31);
l16=si0;
si1=l1;
si2=6U;
si1<<=(si2&31);
si0+=si1;
si1=64U;
si0+=si1;
si1=l10;
si2=7U;
si1<<=(si2&31);
l17=si1;
si0=si0 <= si1;
if(si0){
goto L23;
}
si0=l1;
l12=si0;
goto L20;
L23:;
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=l13;
si1=l10;
si2=1U;
si1+=si2;
l18=si1;
si2=3U;
si1<<=(si2&31);
l19=si1;
si0+=si1;
l20=si0;
si0=l9;
si1=l19;
si0+=si1;
l21=si0;
si0=l1;
si1=l18;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l1;
si1=l18;
si0=si0 < si1;
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
l19=si0;
si0=l21;
l12=si0;
L29:;
{
si0=l19;
si0=!(si0);
if(si0){
goto L28;
}
si0=l19;
si1=-8U;
si0+=si1;
l19=si0;
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
goto L29;
}
}
si0=l20;
l19=si0;
L30:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L28;
}
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L30;
}
}
sj0=63ULL;
l11=sj0;
goto L24;
L28:;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l1;
l12=si0;
goto L25;
L27:;
sj0=l11;
sj1=-1ULL;
sj0+=sj1;
l11=sj0;
si0=l10;
l18=si0;
goto L24;
L26:;
si0=l10;
si1=-1U;
si0^=si1;
si1=3U;
si0<<=(si1&31);
l16=si0;
si0=l1;
l12=si0;
L31:;
{
si0=l12;
l19=si0;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l19;
si1=l15;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=l19;
si2=l13;
si3=l19;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l12=si0;
if(si0){
goto L32;
}
si0=l7;
si1=l19;
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
L32:;
si0=l12;
si1=l19;
si0=si0 <= si1;
if(si0){
goto L33;
}
si0=l12;
l1=si0;
si0=l19;
l12=si0;
goto L6;
L33:;
si0=l12;
si1=6U;
si0<<=(si1&31);
si1=64U;
si0+=si1;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L34;
}
sj0=0ULL;
l11=sj0;
goto L20;
L34:;
si0=l12;
si1=l18;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l12;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l12;
l1=si0;
goto L21;
L36:;
si0=l16;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
l1=si0;
si0=l21;
l19=si0;
L37:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L37;
}
}
si0=l20;
l1=si0;
L38:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L35;
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
goto L38;
}
}
sj0=63ULL;
l11=sj0;
si0=0U;
l16=si0;
si0=l12;
l1=si0;
goto L24;
L35:;
si0=l12;
si1=2U;
si0=si0 > si1;
if(si0){
goto L31;
}
}
L25:;
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
si0=l1;
si1=l15;
si2=l1;
si1-=si2;
si2=6U;
si1<<=(si2&31);
si2=l16;
si1-=si2;
si2=6U;
si1>>=(si2&31);
l19=si1;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l18;
si1=l19;
si0-=si1;
l10=si0;
si0=l1;
si1=l19;
si0-=si1;
l12=si0;
si0=l19;
si1=l14;
si0+=si1;
l14=si0;
si0=l13;
si1=l19;
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
L39:;
si0=l19;
si1=l1;
si2=1194208U;
f662(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1193672U;
si1=23U;
si2=1194240U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l18;
si1=l1;
si2=1194192U;
f662(i,si0,si1,si2);
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
goto L40;
}
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
si1=l7;
si2=12U;
si1+=si2;
si2=1191456U;
si3=l7;
si4=16U;
si3+=si4;
si4=1194144U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L40:;
si0=l14;
si1=-1U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 > si1;
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
l19=si0;
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
sj1=f1229(i,si1,si2,sj3);
i64_store(&i->m0,(U64)si0,sj1);
si0=l19;
si1=l19;
si2=8U;
si1+=si2;
si2=l12;
sj3=l11;
sj1=f1229(i,si1,si2,sj3);
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L42;
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
goto L41;
}
si0=l9;
l12=si0;
goto L8;
L42:;
si0=l12;
si1=l3;
si2=1194020U;
f663(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l19;
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
si2=1191456U;
si3=l7;
si4=16U;
si3+=si4;
si4=1194160U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L16:;
si0=l1;
si1=l3;
si2=1193972U;
f662(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l9;
si1=l3;
si2=1193988U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1190403U;
si1=43U;
si2=1194004U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l9;
l12=si0;
goto L8;
L11:;
si0=1191228U;
si1=50U;
si2=1194316U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
si1=l7;
si2=4U;
si1+=si2;
si2=1191456U;
si3=l7;
si4=16U;
si3+=si4;
si4=1194332U;
f1214(i,si0,si1,si2,si3,si4);
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
si4=1194348U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l8;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L45;
}
si0=l10;
si1=1U;
si0<<=(si1&31);
l8=si0;
L46:;
{
si0=l12;
si1=3U;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l12;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L48;
}
si0=l12;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L47;
}
si0=1193792U;
si1=29U;
si2=1194068U;
f673(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=1193672U;
si1=23U;
si2=1194084U;
f673(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l12;
si1=l3;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l1;
si1=l12;
si2=l19;
si3=l12;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l12=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L46;
}
L45:;
si0=1194100U;
si1=25U;
si2=1194128U;
f673(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l12;
si1=l3;
si2=1194052U;
f666(i,si0,si1,si2);
UNREACHABLE;
L43:;
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
goto L49;
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
si0=f1065(i,sj0,sj1,sj2,sj3,si4);
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
f1068(i,si0,si1,si2,si3);
goto L3;
L49:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
si1=l7;
si2=8U;
si1+=si2;
si2=1191460U;
si3=l7;
si4=16U;
si3+=si4;
si4=1194036U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l1;
si1=l12;
si2=1194176U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1193792U;
si1=29U;
si2=1194224U;
f673(i,si0,si1,si2);
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
si0=f1057(i,si0,si1,si2,si3,si4,si5,si6,si7);
l19=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l19;
l1=si0;
si0=l19;
si1=l3;
si0=si0 > si1;
if(si0){
goto L51;
}
L52:;
si0=l19;
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
goto L50;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l19=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l19;
si1=l1;
si0=si0 > si1;
if(si0){
goto L53;
}
L54:;
{
si0=l19;
l1=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=1U;
l8=si0;
goto L50;
L55:;
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l19=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l19;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L54;
}
}
L53:;
si0=l19;
si1=l1;
si2=1193956U;
f666(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l19;
si1=l3;
si2=1193728U;
f666(i,si0,si1,si2);
UNREACHABLE;
L50:;
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
goto L56;
}
si0=l1;
si1=l12;
si2=l1;
si1-=si2;
si2=1U;
si1+=si2;
l18=si1;
si0-=si1;
l9=si0;
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
si1=-4U;
si0&=si1;
si1=4U;
si0+=si1;
l19=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L62;
}
si0=l9;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l15=si0;
si1=1U;
si0+=si1;
l3=si0;
si1=2U;
si0<<=(si1&31);
l13=si0;
si1=l19;
si0=si0 > si1;
if(si0){
goto L61;
}
si0=l13;
si0=!(si0);
if(si0){
goto L63;
}
si0=l5;
si1=0U;
si2=l3;
si3=5U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L63:;
si0=l15;
si1=l19;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=3U;
si0*=si1;
l13=si0;
si1=l19;
si0=si0 > si1;
if(si0){
goto L59;
}
si0=l13;
si1=l19;
si0=si0 == si1;
if(si0){
goto L58;
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
si1=l19;
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
si1=l18;
si0=si0 < si1;
if(si0){
goto L57;
}
si0=l0;
si1=l18;
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
si6=l19;
si7=3U;
si6<<=(si7&31);
si5+=si6;
l3=si5;
si6=l6;
si7=l19;
si6-=si7;
l19=si6;
si0=f1058(i,si0,si1,si2,si3,si4,si5,si6);
si0=!(si0);
if(si0){
goto L56;
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
goto L65;
}
si0=l12;
si1=l1;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 >= si1;
if(si0){
goto L64;
}
si0=l4;
si1=l7;
si2=16U;
si1+=si2;
si2=l3;
si3=l19;
f1069(i,si0,si1,si2,si3);
si0=1U;
l8=si0;
goto L2;
L65:;
si0=1193908U;
si1=32U;
si2=1193940U;
f673(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=1193856U;
si1=33U;
si2=1193892U;
f673(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=1190368U;
si1=35U;
si2=1193744U;
f673(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l13;
si1=l19;
si2=1196256U;
f666(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l3;
si1=l19;
si2=1196176U;
f666(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l13;
si1=l19;
si2=1196224U;
f662(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=0U;
si1=0U;
si2=1196272U;
f663(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l18;
si1=l1;
si2=1193760U;
f662(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=l1;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L67;
}
si0=l12;
si1=l1;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l19=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l19;
si1=l1;
si0=si0 > si1;
if(si0){
goto L68;
}
L69:;
{
si0=l19;
l1=si0;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L67;
}
si0=l1;
si1=l12;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l19=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l19;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L69;
}
}
L68:;
si0=l19;
si1=l1;
si2=1193776U;
f666(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=1193672U;
si1=23U;
si2=1193840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=1193792U;
si1=29U;
si2=1193824U;
f673(i,si0,si1,si2);
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
si0=1194256U;
si1=42U;
si2=1194300U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1059(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
goto L16;
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
goto L3;
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
goto L17;
}
si0=l2;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L15;
}
L17:;
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
goto L20;
}
si0=0U;
l11=si0;
si0=l3;
l1=si0;
si0=l3;
si1=100U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l4;
si1=l0;
si2=l3;
si3=l2;
si4=l3;
si5=l9;
si6=l5;
si7=l6;
si0=f1057(i,si0,si1,si2,si3,si4,si5,si6,si7);
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
goto L19;
}
si0=l8;
si1=0U;
si0=si0 != si1;
l12=si0;
goto L18;
L20:;
si0=1194256U;
si1=42U;
si2=1194476U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l12=si0;
si0=l1;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l1;
l8=si0;
L21:;
{
si0=l8;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l8;
l1=si0;
goto L6;
L22:;
si0=l0;
si1=l8;
si2=l2;
si3=l8;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
l8=si0;
si0=l1;
si1=l11;
si0=si0 > si1;
if(si0){
goto L21;
}
}
L18:;
si0=l1;
si1=l9;
si2=3U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l1;
si1=l10;
si2=1U;
si1<<=(si2&31);
si2=l1;
si1-=si2;
si2=1U;
si1+=si2;
l11=si1;
si0-=si1;
l13=si0;
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
si1=-4U;
si0&=si1;
si1=4U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L14;
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
goto L13;
}
si0=l15;
si0=!(si0);
if(si0){
goto L23;
}
si0=l5;
si1=0U;
si2=l9;
si3=5U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L23:;
si0=l14;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L12;
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
goto L11;
}
si0=l15;
si1=l8;
si0=si0 == si1;
if(si0){
goto L10;
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
goto L9;
}
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L8;
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
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
l13=si0;
si0=!(si0);
if(si0){
goto L5;
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
goto L7;
}
si0=l12;
si1=l1;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 >= si1;
if(si0){
goto L24;
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
si0=f1056(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l1=si0;
si0=l4;
si1=l7;
si2=8U;
si1+=si2;
si2=l9;
si3=l8;
f1069(i,si0,si1,si2,si3);
si0=1U;
l12=si0;
goto L5;
L24:;
si0=1193856U;
si1=33U;
si2=1194428U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
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
si4=1194508U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L15:;
si0=1191228U;
si1=50U;
si2=1194492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1190368U;
si1=35U;
si2=1194364U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l15;
si1=l8;
si2=1196256U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l9;
si1=l8;
si2=1196176U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l15;
si1=l8;
si2=1196224U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=0U;
si1=0U;
si2=1196272U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l11;
si1=l1;
si2=1194380U;
f675(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l3;
si2=1194380U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1193908U;
si1=32U;
si2=1194444U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si1=l3;
si2=1194460U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L25;
}
si0=l1;
l8=si0;
goto L1;
L25:;
si0=l12;
si1=0U;
si0=si0 != si1;
l11=si0;
L4:;
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l8=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l8;
l1=si0;
L28:;
{
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l2;
si3=l1;
si4=l10;
si5=l4;
si6=l5;
si7=l6;
si0=f1067(i,si0,si1,si2,si3,si4,si5,si6,si7);
l8=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l8;
l1=si0;
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
goto L28;
}
L27:;
si0=0U;
l8=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L3;
}
L26:;
si0=l1;
l8=si0;
L3:;
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l8;
goto L0;
L2:;
si0=l1;
si1=l3;
si2=1194412U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si1=l3;
si2=1194396U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1060(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U64 l16=0;
U64 l17=0;
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
si0=l7;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l10;
if(si0){
goto L13;
}
si0=l11;
l9=si0;
goto L12;
L13:;
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L11;
L14:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l9=si0;
L12:;
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
L11:;
si0=l3;
si1=l5;
si0=f1359(i,si0,si1);
l12=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l11=si0;
si0=l10;
if(si0){
goto L17;
}
si0=l11;
l8=si0;
goto L16;
L17:;
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L15;
L18:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l8=si0;
L16:;
si0=l8;
si0=!(si0);
if(si0){
goto L5;
}
L15:;
si0=l9;
si1=l7;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l8;
si7=l12;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l7;
si1=l1;
si0=si0 > si1;
l5=si0;
si0=!(si0);
if(si0){
goto L21;
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
goto L20;
}
L21:;
si0=l7;
si1=l5;
si0-=si1;
l13=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l13;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l13;
si0=!(si0);
if(si0){
goto L22;
}
si0=l13;
si1=1U;
si0&=si1;
l14=si0;
si0=l7;
si1=-1U;
si2=0U;
si3=l5;
si1=si3?si1:si2;
si0+=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=0U;
l4=si0;
si0=0U;
l2=si0;
goto L23;
L24:;
si0=l13;
si1=-2U;
si0&=si1;
l15=si0;
si0=0U;
l4=si0;
si0=l9;
l10=si0;
si0=l0;
l5=si0;
si0=0U;
l2=si0;
L25:;
{
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l4;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l16;
sj3=l17;
si2=sj2 <= sj3;
sj3=l16;
sj4=l17;
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
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l16;
si0=sj0 <= sj1;
sj1=l18;
sj2=l16;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l15;
si1=l2;
si2=2U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L23:;
si0=l14;
si0=!(si0);
if(si0){
goto L26;
}
si0=l0;
si1=l2;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l4;
sj2=(U64)(si2);
si3=l9;
si4=l5;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l17;
si0=sj0 <= sj1;
sj1=l16;
sj2=l17;
si1=sj1 < sj2;
si2=l4;
si0=si2?si0:si1;
l4=si0;
L26:;
si0=l13;
si1=l1;
si0=si0 == si1;
l5=si0;
if(si0){
goto L27;
}
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
si0=l0;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L22;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l13;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l10=si0;
si0=l5;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
L28:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L19;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L28;
}
goto L22;
}
L27:;
si0=l5;
si1=l4;
si0&=si1;
if(si0){
goto L19;
}
L22:;
si0=l3;
si1=l1;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l10=si0;
si0=l1;
l5=si0;
L30:;
{
si0=l5;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l5;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l4;
l5=si0;
sj0=l16;
si0=!(sj0);
if(si0){
goto L30;
}
}
si0=l4;
si1=1U;
si0+=si1;
l2=si0;
L29:;
si0=l12;
si0=!(si0);
if(si0){
goto L31;
}
si0=l8;
f15271(i,si0);
L31:;
si0=l7;
si0=!(si0);
if(si0){
goto L32;
}
si0=l9;
f15271(i,si0);
L32:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L20:;
si0=1192544U;
si1=61U;
si2=1192608U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1192448U;
si1=80U;
si2=1192528U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l6;
si2=4U;
si1+=si2;
si2=1191456U;
si3=l6;
si4=8U;
si3+=si4;
si4=1192784U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1192732U;
si1=34U;
si2=1192768U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1192680U;
si1=35U;
si2=1192716U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=1192624U;
si1=40U;
si2=1192664U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l13;
si1=l7;
si2=1192416U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1253593U;
si1=35U;
si2=1254656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=-1U;
si0+=si1;
si1=l1;
si2=1192432U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1061(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
goto L5;
}
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0+192U,si1);
si0=l6;
si1=l2;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l6;
si0=!(si0);
if(si0){
goto L1;
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
goto L7;
}
si0=0U;
l10=si0;
sj0=0ULL;
l11=sj0;
goto L6;
L7:;
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
L6:;
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L3;
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L2;
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
L5:;
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
si4=1192864U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
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
si4=1192848U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
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
si4=1192832U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
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
si4=1192816U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=-1U;
si1=0U;
si2=1192800U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1062(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
si0=l9;
si1=l3;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=l12;
si0-=si1;
l13=si0;
si0=l12;
si1=l3;
si0=si0 > si1;
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
si0=1193256U;
si1=48U;
si2=1193304U;
f673(i,si0,si1,si2);
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
si4=1234772U;
f1214(i,si0,si1,si2,si3,si4);
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
l19=si0;
goto L3;
L11:;
si0=1U;
l17=si0;
si0=l13;
l18=si0;
si0=l0;
l19=si0;
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
l19=si0;
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
si4=1193336U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=8U;
si1+=si2;
si2=1191456U;
si3=l8;
si4=24U;
si3+=si4;
si4=1193320U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l11;
si1=l3;
si2=1192880U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l13;
si1=l3;
si2=1192896U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1193384U;
si1=29U;
si2=1193416U;
f673(i,si0,si1,si2);
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
si0=1193384U;
si1=29U;
si2=1193416U;
f673(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l13;
si1=l18;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l18;
si1=1U;
si0&=si1;
l11=si0;
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
si0=1253593U;
si1=35U;
si2=1254656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l18;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l12=si0;
si0=l0;
l9=si0;
si0=l19;
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
si0=l14;
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
si0=l11;
si0=!(si0);
if(si0){
goto L29;
}
si0=l19;
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
si0=l19;
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
si1=l19;
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
si0=1193172U;
si1=68U;
si2=1193240U;
f673(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l13;
if(si0){
goto L35;
}
si0=0U;
l10=si0;
goto L34;
L35:;
si0=l19;
si1=-8U;
si0+=si1;
l9=si0;
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
l12=si0;
si0=0U;
l10=si0;
L36:;
{
si0=l9;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L34;
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
goto L36;
}
}
si0=l12;
l10=si0;
L34:;
si0=l8;
si1=l13;
si2=l10;
si1-=si2;
l14=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l10;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l14;
si0=!(si0);
if(si0){
goto L56;
}
si0=l14;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L55;
}
si0=-1U;
si1=l18;
si2=l14;
si1=si1 != si2;
l1=si1;
si2=l18;
si3=l14;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L53;
case 1:
goto L52;
default:
goto L54;
}
L56:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=12U;
si1+=si2;
si2=1191456U;
si3=l8;
si4=24U;
si3+=si4;
si4=1193156U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L55:;
si0=l18;
si1=l3;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l18;
si1=l14;
si0=si0 < si1;
if(si0){
goto L57;
}
si0=l19;
si1=l14;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l0;
si2=l1;
si1+=si2;
si2=l18;
si3=l14;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=0U;
l9=si0;
si0=l14;
l12=si0;
si0=l19;
l1=si0;
L58:;
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
l2=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L60;
}
si0=l2;
l9=si0;
goto L59;
L60:;
si0=l2;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L59:;
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
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L58;
}
}
si0=l18;
si1=l14;
si0=si0 == si1;
l1=si0;
if(si0){
goto L48;
}
si0=l9;
si1=1U;
si0^=si1;
if(si0){
goto L48;
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
si1=l10;
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
si1=l19;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L61:;
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
goto L61;
}
L57:;
si0=1195944U;
si1=34U;
si2=1195980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L54:;
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
f1063(i,si0,si1,si2,si3,si4,si5);
si0=l18;
l13=si0;
si0=l19;
l11=si0;
goto L37;
L53:;
si0=l8;
si1=l18;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l14;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
if(si0){
goto L64;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l1=si0;
L65:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L63;
}
si0=-1U;
si1=l1;
si2=-8U;
si1+=si2;
l1=si1;
si2=l19;
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
goto L65;
}
goto L62;
}
L64:;
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
si4=1234772U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L63:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
L62:;
si0=l9;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L49;
case 1:
goto L50;
default:
goto L51;
}
L52:;
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
f1063(i,si0,si1,si2,si3,si4,si5);
si0=l14;
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
si0=l14;
l13=si0;
goto L39;
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
f1063(i,si0,si1,si2,si3,si4,si5);
goto L40;
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
f1063(i,si0,si1,si2,si3,si4,si5);
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
l13=si0;
goto L39;
L49:;
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
f1063(i,si0,si1,si2,si3,si4,si5);
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
f1063(i,si0,si1,si2,si3,si4,si5);
goto L40;
L48:;
si0=l1;
si1=l9;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
L47:;
si0=l18;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l11;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L66:;
si0=l18;
si1=l3;
si2=1193140U;
f663(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l14;
si1=l13;
si2=1192912U;
f666(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=1195996U;
si1=36U;
si2=1196032U;
f673(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l14;
si1=l3;
si2=1192944U;
f666(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l18;
si1=l3;
si2=1192960U;
f666(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l18;
si1=l3;
si2=1192928U;
f666(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=1193384U;
si1=29U;
si2=1193416U;
f673(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l18;
l13=si0;
si0=l19;
l11=si0;
goto L38;
L39:;
si0=l0;
l11=si0;
si0=l19;
l0=si0;
L38:;
si0=l18;
l14=si0;
L37:;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l11;
si1=l6;
si2=l7;
si3=l11;
si4=l14;
sj5=l15;
sj1=f1231(i,si1,si2,si3,si4,sj5);
i64_store(&i->m0,(U64)si0,sj1);
goto L74;
L76:;
sj0=l15;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L73;
}
si0=l7;
si0=!(si0);
if(si0){
goto L77;
}
si0=l6;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=l15;
sj1=DIV_U(sj1,sj2);
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
sj1=l16;
sj2=l20;
sj3=l15;
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L74;
L77:;
si0=0U;
si1=0U;
si2=1192976U;
f663(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l6;
si1=l7;
si2=l11;
si3=l14;
si4=l0;
si5=l13;
f1243(i,si0,si1,si2,si3,si4,si5);
L74:;
si0=l14;
si1=l13;
si0=si0 < si1;
if(si0){
goto L72;
}
si0=l14;
si1=l13;
si0-=si1;
l19=si0;
si0=l13;
if(si0){
goto L79;
}
si0=0U;
l9=si0;
goto L78;
L79:;
si0=l11;
si1=-8U;
si0+=si1;
l12=si0;
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
l2=si0;
si0=0U;
l9=si0;
L80:;
{
si0=l12;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L78;
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
goto L80;
}
}
si0=l2;
l9=si0;
L78:;
si0=l19;
si1=1U;
si0+=si1;
l18=si0;
si0=l13;
l2=si0;
si0=l13;
si1=l9;
si0-=si1;
l1=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L67;
}
si0=l4;
si0=!(si0);
if(si0){
goto L71;
}
si0=l13;
si1=l9;
si0=si0 != si1;
if(si0){
goto L81;
}
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l11;
si1=l0;
si2=l13;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l13;
l2=si0;
goto L68;
L81:;
si0=l13;
si1=l3;
si0=si0 > si1;
if(si0){
goto L69;
}
si0=l13;
si1=l9;
si0=si0 < si1;
if(si0){
goto L84;
}
si0=l11;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l0;
si2=l1;
si1+=si2;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=0U;
l12=si0;
si0=l13;
l2=si0;
si0=l11;
l1=si0;
L85:;
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
si0=l12;
si1=255U;
si0&=si1;
if(si0){
goto L87;
}
si0=l10;
l12=si0;
goto L86;
L87:;
si0=l10;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l12=si0;
L86:;
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
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L85;
}
}
si0=l9;
si0=!(si0);
if(si0){
goto L83;
}
si0=l12;
si1=1U;
si0^=si1;
if(si0){
goto L83;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
l2=si0;
sj0=l15;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L68;
}
si0=l11;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=8U;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
L88:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L82;
}
si0=l12;
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
goto L88;
}
}
si0=l13;
l2=si0;
goto L68;
L84:;
si0=1195944U;
si1=34U;
si2=1195980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=l13;
l2=si0;
si0=l9;
si0=!(si0);
si1=l12;
si0&=si1;
si0=!(si0);
if(si0){
goto L68;
}
L82:;
si0=l13;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L89;
}
si0=l11;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=1U;
si0+=si1;
l2=si0;
goto L68;
L89:;
si0=l13;
si1=l3;
si2=1193024U;
f663(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=1259312U;
si1=25U;
si2=1259296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L72:;
si0=l13;
si1=l14;
si2=1192992U;
f666(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=1193384U;
si1=29U;
si2=1193416U;
f673(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l13;
si1=l3;
si2=1193008U;
f666(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=1195996U;
si1=36U;
si2=1196032U;
f673(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l18;
si1=l7;
si0=si0 > si1;
if(si0){
goto L90;
}
si0=l18;
si0=!(si0);
if(si0){
goto L91;
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
goto L67;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
si1=l13;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l0=si0;
si0=l6;
si1=8U;
si0+=si1;
l1=si0;
L92:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L91;
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
goto L67;
}
goto L92;
}
L91:;
si0=1193056U;
si1=65U;
si2=1193124U;
f673(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=l18;
si1=l7;
si2=1193040U;
f666(i,si0,si1,si2);
UNREACHABLE;
L67:;
si0=l18;
si1=l7;
si0=si0 > si1;
if(si0){
goto L94;
}
si0=l18;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
si1=3U;
si0<<=(si1&31);
si1=l13;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
si0=l19;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l0=si0;
L96:;
{
si0=l6;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L95;
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
goto L96;
}
}
si0=l9;
l0=si0;
L95:;
si0=l18;
si1=l0;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l18;
si1=l0;
si0-=si1;
l1=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L93;
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
f1063(i,si0,si1,si2,si3,si4,si5);
goto L1;
L94:;
si0=l18;
si1=l7;
si2=1193352U;
f666(i,si0,si1,si2);
UNREACHABLE;
L93:;
si0=1190368U;
si1=35U;
si2=1193368U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
l2=si0;
L1:;
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f1063(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
L31:;
{
si0=l14;
l8=si0;
si1=l2;
si0+=si1;
l15=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l12;
l15=si0;
si0=l13;
l8=si0;
goto L30;
L32:;
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
f1085(i,si0,si1,si2,si3);
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
goto L30;
}
si0=l6;
si1=192U;
si0+=si1;
si1=l0;
si2=1U;
si3=l10;
f1085(i,si0,si1,si2,si3);
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
goto L31;
}
}
L30:;
si0=l15;
si1=l9;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l8;
if(si0){
goto L34;
}
si0=0U;
l9=si0;
si0=0U;
l14=si0;
goto L33;
L35:;
si0=1196992U;
si1=35U;
si2=1197028U;
f673(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l8;
si1=l2;
si0=si0 >= si1;
l17=si0;
if(si0){
goto L37;
}
si0=l2;
si1=l8;
si0=f1359(i,si0,si1);
l13=si0;
goto L36;
L37:;
si0=l8;
si1=l2;
si0=f1359(i,si0,si1);
l13=si0;
L36:;
si0=l13;
if(si0){
goto L39;
}
si0=8U;
l18=si0;
goto L38;
L39:;
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l11=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L25;
}
si0=l13;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l11;
if(si0){
goto L41;
}
si0=l14;
l18=si0;
goto L40;
L41:;
si0=l14;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L42;
}
si0=l14;
si1=l11;
si0=f15277(i,si0,si1);
l18=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l18;
si1=0U;
si2=l11;
si0=f15392(i,si0,si1,si2);
goto L38;
L42:;
si0=l11;
si1=1U;
si0=f15273(i,si0,si1);
l18=si0;
L40:;
si0=l18;
si0=!(si0);
if(si0){
goto L24;
}
L38:;
si0=l8;
si1=l2;
si0+=si1;
l19=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l6;
si1=144U;
si0+=si1;
si1=l0;
si2=0U;
si3=l10;
f1085(i,si0,si1,si2,si3);
si0=l8;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+148U);
l11=si1;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l4;
si1=l5;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+144U);
si3=l8;
si4=l1;
si5=l2;
si6=l18;
si7=l13;
sj0=f1368(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=1196940U;
si1=35U;
si2=1196976U;
f673(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l6;
si1=184U;
si0+=si1;
si1=l0;
si2=0U;
si3=l10;
f1085(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+188U);
l11=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+184U);
l14=si0;
si0=l19;
si1=l5;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l8;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L44;
}
goto L18;
L45:;
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
si6=l18;
si7=l13;
sj0=f1368(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l6;
si1=152U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1086(i,si0,si1,si2,si3);
si0=l19;
si1=l5;
si2=1196924U;
f666(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l17;
if(si0){
goto L47;
}
si0=l4;
si1=l5;
si2=l1;
si3=l2;
si4=l14;
si5=l8;
si6=l18;
si7=l13;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L46;
L47:;
si0=l4;
si1=l5;
si2=l14;
si3=l8;
si4=l1;
si5=l2;
si6=l18;
si7=l13;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L46:;
si0=0U;
l9=si0;
si0=l6;
si1=176U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1086(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+180U);
si1=l19;
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
si2=l19;
si3=l7;
si2-=si3;
si3=3U;
si2<<=(si3&31);
l22=si2;
si0=f15390(i,si0,si1,si2);
l23=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L48;
}
si0=0U;
l16=si0;
si0=l7;
l9=si0;
si0=l20;
l11=si0;
si0=l4;
l14=si0;
L49:;
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
goto L51;
}
si0=l12;
l16=si0;
goto L50;
L51:;
si0=l12;
sj1=l25;
sj2=1ULL;
sj1+=sj2;
l25=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L50:;
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
goto L49;
}
}
si0=l19;
si1=l7;
si0=si0 == si1;
l11=si0;
si1=l16;
si0&=si1;
l9=si0;
si0=l11;
if(si0){
goto L48;
}
si0=l16;
si1=1U;
si0^=si1;
if(si0){
goto L48;
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
goto L48;
}
si0=l19;
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
L52:;
{
si0=l11;
si0=!(si0);
l9=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L48;
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
goto L52;
}
}
L48:;
si0=l6;
si1=168U;
si0+=si1;
si1=l0;
si2=1U;
si3=l10;
f1085(i,si0,si1,si2,si3);
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
goto L54;
}
si0=l4;
si1=l5;
si2=l1;
si3=l2;
si4=l11;
si5=l8;
si6=l18;
si7=l13;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L53;
L54:;
si0=l4;
si1=l5;
si2=l11;
si3=l8;
si4=l1;
si5=l2;
si6=l18;
si7=l13;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L53:;
si0=l6;
si1=160U;
si0+=si1;
si1=l0;
si2=1U;
si3=l3;
f1086(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+164U);
si1=l19;
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
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l7;
if(si0){
goto L56;
}
si0=0U;
l14=si0;
goto L55;
L56:;
si0=0U;
l8=si0;
si0=l7;
l14=si0;
si0=l12;
l11=si0;
L57:;
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
goto L59;
}
si0=l16;
l8=si0;
goto L58;
L59:;
si0=l16;
sj1=l25;
sj2=1ULL;
sj1+=sj2;
l25=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L58:;
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
goto L57;
}
}
si0=l19;
si1=l7;
si0=si0 == si1;
l11=si0;
si1=l8;
si0&=si1;
l14=si0;
si0=l11;
if(si0){
goto L55;
}
si0=l8;
si1=1U;
si0^=si1;
if(si0){
goto L55;
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
goto L55;
}
si0=l19;
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
L60:;
{
si0=l11;
si0=!(si0);
l14=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L55;
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
goto L60;
}
}
L55:;
si0=l13;
si0=!(si0);
if(si0){
goto L33;
}
si0=l18;
f15271(i,si0);
L33:;
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
si1=120U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1085(i,si0,si1,si2,si3);
si0=l15;
si1=-1U;
si0+=si1;
l11=si0;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+124U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+120U);
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
L29:;
si0=1197060U;
si1=37U;
si2=1197100U;
f673(i,si0,si1,si2);
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
si2=1191456U;
si3=l6;
si4=216U;
si3+=si4;
si4=1197044U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l8;
si1=-1U;
si0+=si1;
si1=l16;
si2=1196768U;
f663(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l8;
si1=-1U;
si0+=si1;
si1=l16;
si2=1196784U;
f663(i,si0,si1,si2);
UNREACHABLE;
L25:;
f53(i);
UNREACHABLE;
L24:;
si0=l14;
si1=l11;
f52(i,si0,si1);
UNREACHABLE;
L23:;
si0=1195996U;
si1=36U;
si2=1196032U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1195996U;
si1=36U;
si2=1196032U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l6;
si1=136U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1086(i,si0,si1,si2,si3);
si0=l15;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+140U);
l11=si1;
si0=si0 < si1;
if(si0){
goto L61;
}
si0=l15;
si1=l11;
si2=1196832U;
f663(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+136U);
si1=l15;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
sj1=l25;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=128U;
si0+=si1;
si1=l0;
si2=1U;
si3=l3;
f1086(i,si0,si1,si2,si3);
si0=l15;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+132U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L62;
}
si0=l15;
si1=l4;
si2=1196848U;
f663(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+128U);
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
si1=112U;
si0+=si1;
si1=l0;
si2=1U;
si3=l3;
f1085(i,si0,si1,si2,si3);
si0=l11;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+116U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L63;
}
si0=l11;
si1=l15;
si2=l6;
si2=i32_load(&i->m0,(U64)si2+112U);
si3=l11;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l15=si0;
goto L16;
L63:;
si0=l11;
si1=l4;
si2=1196816U;
f663(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l11;
si1=l4;
si2=1196800U;
f663(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l8;
si1=l11;
si2=1196908U;
f666(i,si0,si1,si2);
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
goto L66;
case 1:
goto L65;
default:
goto L67;
}
L67:;
si0=1190860U;
si1=14U;
si2=1190876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L66:;
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
l13=si0;
si0=l9;
l11=si0;
goto L64;
L65:;
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
l13=si0;
si0=l15;
l2=si0;
si0=l9;
l4=si0;
L64:;
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
goto L69;
}
sj0=0ULL;
l24=sj0;
goto L68;
L69:;
si0=l7;
si1=1U;
si0&=si1;
l1=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L71;
}
sj0=0ULL;
l24=sj0;
si0=0U;
l8=si0;
sj0=0ULL;
l26=sj0;
goto L70;
L71:;
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
si0=l13;
l11=si0;
sj0=0ULL;
l24=sj0;
L72:;
{
si0=l6;
si1=80U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
sj1=l24;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+80U);
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=96U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
si3=80U;
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
sj2=i64_load(&i->m0,(U64)si2+96U);
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l27;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l6;
si2=96U;
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
goto L72;
}
}
L70:;
si0=l1;
si0=!(si0);
if(si0){
goto L68;
}
si0=l6;
si1=64U;
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
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l13;
si1=l11;
si0+=si1;
l11=si0;
sj1=l24;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+64U);
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
si2=72U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l28;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l24=sj0;
L68:;
si0=l3;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L75;
case 1:
goto L74;
default:
goto L76;
}
L76:;
si0=1190860U;
si1=14U;
si2=1190876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L75:;
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
goto L73;
L74:;
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
L73:;
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
goto L78;
}
sj0=0ULL;
l27=sj0;
goto L77;
L78:;
si0=l7;
si1=1U;
si0&=si1;
l9=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L80;
}
sj0=0ULL;
l27=sj0;
si0=0U;
l8=si0;
sj0=0ULL;
l29=sj0;
goto L79;
L80:;
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
L81:;
{
si0=l6;
si1=32U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l11;
sj1=l27;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l25;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
si3=32U;
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
sj2=i64_load(&i->m0,(U64)si2+48U);
sj1+=sj2;
l26=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l28;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l6;
si2=48U;
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
goto L81;
}
}
L79:;
si0=l9;
si0=!(si0);
if(si0){
goto L77;
}
si0=l6;
si1=16U;
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
sj2=i64_load(&i->m0,(U64)si2+16U);
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
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l28;
sj2=l25;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l27=sj0;
L77:;
si0=l6;
si1=8U;
si0+=si1;
si1=l0;
si2=0U;
si3=l3;
f1086(i,si0,si1,si2,si3);
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
l11=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=l7;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
sj1=l24;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l0;
si2=1U;
si3=l3;
f1086(i,si0,si1,si2,si3);
si0=l7;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
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
goto L82;
}
si0=l6;
si1=240U;
si0+=si1;
i->g0=si0;
goto L0;
L82:;
si0=1196864U;
si1=28U;
si2=1196892U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l12;
si1=l10;
si2=1190732U;
f666(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1190368U;
si1=35U;
si2=1190748U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l12;
si1=l10;
si2=1190764U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1190368U;
si1=35U;
si2=1190780U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l7;
si1=l11;
si2=1196672U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l7;
si1=l4;
si2=1196688U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l12;
si1=l10;
si2=1190796U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1190368U;
si1=35U;
si2=1190812U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l12;
si1=l10;
si2=1190828U;
f662(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1190368U;
si1=35U;
si2=1190844U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=l11;
si2=1196704U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l7;
si1=l4;
si2=1196720U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l7;
si1=l11;
si2=1196736U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=l4;
si2=1196752U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1064(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
goto L7;
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
if(si0){
goto L17;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l1=si0;
goto L16;
L17:;
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
l12=si0;
si0=0U;
l10=si0;
L19:;
{
si0=l11;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
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
goto L19;
}
}
si0=l12;
l10=si0;
L18:;
si0=l2;
si1=-8U;
si0+=si1;
l13=si0;
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
L21:;
{
si0=l13;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L20;
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
goto L21;
}
}
si0=l12;
l11=si0;
L20:;
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=l11;
si0-=si1;
l1=si0;
si0=l11;
si1=l3;
si0=si0 > si1;
if(si0){
goto L5;
}
L16:;
si0=-1U;
si1=l11;
si2=l10;
si1=si1 != si2;
si2=l9;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
default:
goto L13;
}
L14:;
si0=1193256U;
si1=48U;
si2=1193304U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l9;
l14=si0;
si0=l2;
l15=si0;
si0=l1;
l9=si0;
goto L3;
L12:;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l1;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l1=si0;
L25:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L23;
}
si0=-1U;
si1=l1;
si2=-8U;
si1+=si2;
l1=si1;
si2=l2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l1;
si3=l0;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
si1=sj1 != sj2;
sj2=l16;
sj3=l17;
si2=sj2 > sj3;
si0=si2?si0:si1;
l10=si0;
si0=!(si0);
if(si0){
goto L25;
}
goto L22;
}
L24:;
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
si4=1234772U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=-1U;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l10=si0;
L22:;
si0=l9;
l14=si0;
si0=l2;
l15=si0;
si0=l10;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L10;
default:
goto L3;
}
L11:;
si0=l8;
si1=l9;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
l14=si0;
goto L9;
L10:;
si0=l9;
l14=si0;
L9:;
si0=l0;
l15=si0;
si0=l2;
l0=si0;
goto L3;
L8:;
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L4;
}
goto L2;
L7:;
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
si4=1193336U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l9;
si1=l3;
si2=1192880U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l3;
si2=1192896U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l9;
si1=l5;
si2=1190716U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l14;
if(si0){
goto L32;
}
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l15;
l0=si0;
goto L2;
L32:;
si0=l9;
si1=l14;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l14;
si1=1U;
si0&=si1;
l18=si0;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=0U;
l11=si0;
si0=0U;
l13=si0;
goto L33;
L35:;
si0=1253593U;
si1=35U;
si2=1254656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l14;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l11=si0;
si0=l0;
l10=si0;
si0=l15;
l1=si0;
si0=0U;
l13=si0;
L36:;
{
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l11;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l10;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l16;
sj3=l17;
si2=sj2 <= sj3;
sj3=l16;
sj4=l17;
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
l16=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l16;
si0=sj0 <= sj1;
sj1=l19;
sj2=l16;
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
si0=l12;
si1=l13;
si2=2U;
si1+=si2;
l13=si1;
si0=si0 != si1;
if(si0){
goto L36;
}
}
L33:;
si0=l18;
si0=!(si0);
if(si0){
goto L37;
}
si0=l15;
si1=l13;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l11;
sj2=(U64)(si2);
si3=l0;
si4=l1;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l17=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=l17;
si0=sj0 <= sj1;
sj1=l16;
sj2=l17;
si1=sj1 < sj2;
si2=l11;
si0=si2?si0:si1;
l11=si0;
L37:;
si0=l9;
si1=l14;
si0=si0 == si1;
l1=si0;
if(si0){
goto L39;
}
si0=l11;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L39;
}
si0=l15;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l16;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L38;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l14;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l10=si0;
si0=l1;
si1=l15;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L40:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
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
sj0=l16;
si0=!(sj0);
if(si0){
goto L40;
}
goto L38;
}
L39:;
si0=l1;
si1=l11;
si0&=si1;
if(si0){
goto L29;
}
L38:;
si0=l9;
if(si0){
goto L42;
}
si0=0U;
l10=si0;
goto L41;
L42:;
si0=l15;
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
l13=si0;
si0=0U;
l10=si0;
L43:;
{
si0=l11;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L41;
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
goto L43;
}
}
si0=l13;
l10=si0;
L41:;
si0=l8;
si1=l9;
si2=l10;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l10;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l1;
si0=!(si0);
if(si0){
goto L28;
}
si0=-1U;
si1=l14;
si2=l1;
si1=si1 != si2;
l10=si1;
si2=l14;
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
si1=l14;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
if(si0){
goto L53;
}
si0=l14;
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
si2=l15;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si2=l1;
si3=l0;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
si1=sj1 != sj2;
sj2=l16;
sj3=l17;
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
si4=1234772U;
f1214(i,si0,si1,si2,si3,si4);
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
goto L44;
case 1:
goto L47;
default:
goto L55;
}
L55:;
si0=l15;
l10=si0;
si0=l14;
l9=si0;
si0=l14;
l1=si0;
goto L26;
L49:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l14;
si1=l3;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l0;
l10=si0;
si0=l1;
l9=si0;
goto L46;
L56:;
si0=l14;
si1=l3;
si2=1192960U;
f666(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l15;
l10=si0;
si0=l14;
l9=si0;
goto L26;
L47:;
si0=l14;
si1=l3;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l0;
l10=si0;
si0=l14;
l9=si0;
L46:;
si0=l15;
l0=si0;
si0=l14;
l1=si0;
goto L26;
L45:;
si0=l14;
si1=l3;
si2=1192928U;
f666(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l14;
si1=l5;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l14;
l9=si0;
si0=l15;
l0=si0;
goto L2;
L57:;
si0=l14;
si1=l5;
si2=1190716U;
f666(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l9;
si1=l5;
si2=1190716U;
f666(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l1;
si1=l9;
si2=1192912U;
f666(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1193172U;
si1=68U;
si2=1193240U;
f673(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=12U;
si1+=si2;
si2=1191456U;
si3=l8;
si4=24U;
si3+=si4;
si4=1193156U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l1;
si1=l3;
si2=1192944U;
f666(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L62;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=l10;
si1=l6;
si2=l7;
si3=l10;
si4=l1;
sj5=l16;
sj1=f1231(i,si1,si2,si3,si4,sj5);
i64_store(&i->m0,(U64)si0,sj1);
goto L60;
L62:;
si0=l6;
si1=l7;
si2=l10;
si3=l1;
si4=l0;
si5=l9;
f1243(i,si0,si1,si2,si3,si4,si5);
goto L60;
L61:;
sj0=l16;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L59;
}
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l16;
sj1=DIV_U(sj1,sj2);
l19=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
sj1=l17;
sj2=l19;
sj3=l16;
sj2*=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L60:;
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L58;
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
l13=si0;
si0=0U;
l10=si0;
L64:;
{
si0=l11;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L63;
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
goto L64;
}
}
si0=l13;
l10=si0;
L63:;
si0=l9;
si1=l10;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l9;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l9;
si1=l5;
si2=1190716U;
f666(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=1259312U;
si1=25U;
si2=1259296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l9;
si1=l1;
si2=1192992U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l0;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
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

U32 f1065(rustpythonInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4) {
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
f1066(i,si0,sj1,sj2,sj3,sj4);
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
f1066(i,si0,sj1,sj2,sj3,sj4);
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
f1066(i,si0,sj1,sj2,sj3,sj4);
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
f1066(i,si0,sj1,sj2,sj3,sj4);
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
si0=1193432U;
si1=34U;
si2=1193468U;
f673(i,si0,si1,si2);
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
si0=1193500U;
si1=34U;
si2=1193552U;
f673(i,si0,si1,si2);
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
si0=1193432U;
si1=34U;
si2=1193484U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1259312U;
si1=25U;
si2=1259296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1259312U;
si1=25U;
si2=1259296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1193500U;
si1=34U;
si2=1193536U;
f673(i,si0,si1,si2);
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

void f1066(rustpythonInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
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
goto L6;
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
goto L7;
}
si0=l5;
si1=40U;
si0+=si1;
sj1=l6;
sj2=0ULL;
sj3=l4;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L9;
}
sj0=l8;
sj1=l9;
si0=sj0 < sj1;
if(si0){
goto L8;
}
sj0=l7;
sj1=l2;
si0=sj0 > sj1;
if(si0){
goto L8;
}
L9:;
sj0=l7;
l1=sj0;
goto L2;
L8:;
sj0=l3;
sj1=l1;
si0=sj0 > sj1;
if(si0){
goto L10;
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
L10:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l5;
si2=56U;
si1+=si2;
si2=1193568U;
si3=l5;
si4=72U;
si3+=si4;
si4=1197212U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l5;
sj1=l3;
sj1=I64_CLZ(sj1);
l6=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
sj0=l6;
si0=!(sj0);
if(si0){
goto L4;
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
goto L5;
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
f15403(i,si0,sj1,sj2,sj3,sj4);
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
f15404(i,si0,sj1,sj2,sj3,sj4);
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
goto L11;
}
sj0=l8;
sj1=l1;
si0=sj0 != sj1;
if(si0){
goto L12;
}
sj0=l7;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L11;
}
L12:;
sj0=l2;
l4=sj0;
goto L3;
L11:;
sj0=l3;
si0=!(sj0);
if(si0){
goto L13;
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
goto L3;
L13:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l5;
si2=56U;
si1+=si2;
si2=1193568U;
si3=l5;
si4=72U;
si3+=si4;
si4=1197228U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1259312U;
si1=25U;
si2=1259296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1253389U;
si1=25U;
si2=1253548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=1U;
si1=l5;
si2=64U;
si1+=si2;
si2=1193568U;
si3=l5;
si4=72U;
si3+=si4;
si4=1197244U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
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

U32 f1067(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
si0=!(sj0);
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
si4=1193712U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=1193672U;
si1=23U;
si2=1193696U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
si1=l8;
si2=8U;
si1+=si2;
si2=1193568U;
si3=l8;
si4=16U;
si3+=si4;
si4=1193656U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l1;
si1=l3;
si2=1193576U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l12;
si1=2U;
si2=1193592U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l1;
si1=l3;
si2=1193608U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si1=l3;
si2=1193624U;
f663(i,si0,si1,si2);
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
si0=f1065(i,sj0,sj1,sj2,sj3,si4);
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
si0=f1062(i,si0,si1,si2,si3,si4,si5,si6,si7);
l3=si0;
goto L2;
L3:;
si0=l5;
si1=l8;
si2=16U;
si1+=si2;
si2=l6;
si3=l7;
f1068(i,si0,si1,si2,si3);
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
si3=f15390(i,si3,si4,si5);
si4=l3;
si5=l2;
si6=l3;
si0=f1061(i,si0,si1,si2,si3,si4,si5,si6);
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
si2=1193640U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1068(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f15390(i,si0,si1,si2);
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
si0=f1087(i,si0,si1,si2,si3,si4,si5,si6);
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
si0=f15390(i,si0,si1,si2);
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
si2=f1087(i,si2,si3,si4,si5,si6,si7,si8);
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
si0=1196628U;
si1=28U;
si2=1196656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=l3;
si2=1196580U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l3;
si1=l5;
si2=1196096U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l4;
si1=l3;
si2=1196596U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=l5;
si2=1190732U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1190368U;
si1=35U;
si2=1190748U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l2;
si1=l10;
si2=1196128U;
f675(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l10;
si1=l5;
si2=1196128U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l10;
si2=1196612U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1190368U;
si1=35U;
si2=1190812U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f1069(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f1055(i,si0,si1);
if(si0){
goto L15;
}
si0=l1;
si1=l4;
si2=-1U;
si1+=si2;
si0=f1055(i,si0,si1);
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
f1294(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16,si17,si18);
si0=l6;
si1=l0;
si2=l6;
si1=f1055(i,si1,si2);
si0-=si1;
l7=si0;
si0=l7;
si1=l0;
si2=l7;
si1=f1055(i,si1,si2);
si0-=si1;
l7=si0;
si0=l0;
si1=l7;
si2=l0;
si3=l7;
si2=f1055(i,si2,si3);
si1-=si2;
l7=si1;
si0=f1055(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
si0=1196352U;
si1=50U;
si2=1196404U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1193856U;
si1=33U;
si2=1196564U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1196492U;
si1=56U;
si2=1196548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1190368U;
si1=35U;
si2=1190892U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1190368U;
si1=35U;
si2=1190892U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1190368U;
si1=35U;
si2=1190892U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l10;
si1=l11;
si2=1196096U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=l10;
si2=1196288U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l10;
si1=l8;
si2=1196112U;
f675(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l8;
si1=l11;
si2=1196112U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si1=l12;
si2=1196304U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l8;
si1=l12;
si2=1196128U;
f675(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l12;
si1=l11;
si2=1196128U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=l13;
si2=1196320U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l11;
si2=1196336U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1196420U;
si1=56U;
si2=1196476U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l7;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
L0:;
}

U32 f1070(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U64 l3) {
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
sj0=l2;
sj1=l3;
si0=sj0 < sj1;
if(si0){
goto L5;
}
sj0=l2;
sj1=l3;
sj0-=sj1;
l2=sj0;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L4;
}
sj0=l2;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l2;
sj0>>=(sj1&63);
l5=sj0;
sj0=64ULL;
sj1=l2;
sj2=63ULL;
sj1&=sj2;
sj0-=sj1;
l2=sj0;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
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
sj0=i64_load(&i->m0,(U64)si0);
sj1=l2;
sj0<<=(sj1&63);
sj1=l5;
sj0+=sj1;
l5=sj0;
goto L1;
L5:;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj0=l2;
l3=sj0;
goto L1;
L6:;
si0=0U;
si1=0U;
si2=1194684U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1190403U;
si1=43U;
si2=1190568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l1;
si2=1194652U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l1;
si2=1194668U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
sj0=-1ULL;
sj1=-1ULL;
sj2=-1ULL;
sj3=l3;
sj2<<=(sj3&63);
sj3=-1ULL;
sj2^=sj3;
sj3=l5;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj2=l3;
sj3=63ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
sj1=l5;
sj0&=sj1;
l3=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L7;
}
sj0=l3;
si0=(U32)(sj0);
goto L0;
L7:;
si0=1190403U;
si1=43U;
si2=1190568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1071(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=l4;
si0=f1361(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
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
l10=si0;
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
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=0U;
si2=l8;
si0=f15392(i,si0,si1,si2);
goto L1;
L7:;
si0=l8;
si1=1U;
si0=f15273(i,si0,si1);
l10=si0;
L5:;
si0=l10;
if(si0){
goto L1;
}
L4:;
si0=l9;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=8U;
si7=0U;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l6;
si6=l10;
si7=l7;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l10;
f15271(i,si0);
L0:;
}

void f1072(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l4;
si1=43U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=390U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l4;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l5=si0;
goto L3;
L6:;
si0=l4;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l5=si0;
goto L3;
L7:;
si0=l4;
si1=50U;
si0=f1183(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L8;
}
si0=l6;
if(si0){
goto L2;
}
si0=8U;
l7=si0;
goto L1;
L8:;
f53(i);
UNREACHABLE;
L5:;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=8U;
si5=0U;
f1106(i,si0,si1,si2,si3,si4,si5);
goto L0;
L4:;
si0=l4;
si1=1U;
si0<<=(si1&31);
si1=128U;
si0+=si1;
l5=si0;
L3:;
si0=l5;
si1=3U;
si0<<=(si1&31);
l6=si0;
L2:;
si0=l6;
si1=1U;
si0=f15273(i,si0,si1);
l7=si0;
if(si0){
goto L1;
}
si0=8U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
si2=l3;
si3=l4;
si4=l7;
si5=l5;
f1106(i,si0,si1,si2,si3,si4,si5);
si0=l7;
f15271(i,si0);
L0:;
}

void f1073(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=65U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l2;
sj1=6ULL;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
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
goto L4;
}
si0=l7;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
goto L7;
L10:;
si0=l5;
si1=1U;
si0=f15273(i,si0,si1);
l7=si0;
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
L7:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l4;
si2=l2;
si3=63U;
si2&=si3;
l6=si2;
si0=si2?si0:si1;
l8=si0;
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l6;
sj0=(U64)(si0);
l9=sj0;
L11:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj0=64ULL;
l9=sj0;
L16:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1<<=(sj2&63);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-48U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
default:
goto L14;
}
L15:;
si0=l8;
si1=l4;
si2=1195392U;
f663(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
f15271(i,si0);
goto L2;
L13:;
si0=l5;
sj1=l10;
sj2=1ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L12:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l9;
sj1=-1ULL;
sj0+=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L11;
}
L6:;
si0=l3;
si1=l1;
si2=l2;
si3=2U;
f687(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L17:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l5=si0;
L21:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L21;
}
}
si0=l4;
si1=l5;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
default:
goto L18;
}
L20:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
f15271(i,si0);
goto L2;
L19:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l7;
f15271(i,si0);
goto L2;
L18:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=l1;
si3=l4;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1190403U;
si1=43U;
si2=1195376U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1074(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=22U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
sj0=(U64)(si0);
sj1=3ULL;
sj0*=sj1;
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L5;
}
sj0=l4;
si0=(U32)(sj0);
l5=si0;
sj1=6ULL;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l7=si0;
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
l8=si0;
si0=l7;
if(si0){
goto L10;
}
si0=l8;
l9=si0;
goto L9;
L10:;
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l9=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L8;
L11:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l9=si0;
L9:;
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l6;
si1=-1U;
si0+=si1;
l7=si0;
si1=l6;
si2=l5;
si3=63U;
si2&=si3;
l10=si2;
si0=si2?si0:si1;
l8=si0;
si0=l9;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l10;
sj0=(U64)(si0);
l4=sj0;
L12:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l10;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=25U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l10;
si1=-87U;
si0+=si1;
l7=si0;
goto L21;
L22:;
si0=l10;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l10;
si1=-55U;
si0+=si1;
l7=si0;
L21:;
si0=l7;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
l11=sj0;
sj0=l4;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L18;
}
sj0=l4;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L19;
case 1:
goto L17;
case 2:
goto L16;
default:
goto L19;
}
L20:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
f15271(i,si0);
goto L2;
L19:;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l8;
si1=l6;
si2=1195440U;
f663(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3ULL;
sj1<<=(sj2&63);
sj2=l11;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
sj1=-3ULL;
sj0+=sj1;
l4=sj0;
goto L13;
L17:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l11;
sj3=2ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l8;
si1=l6;
si2=1195456U;
f663(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l11;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l8;
si1=l6;
si2=1195472U;
f663(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l9;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj1=l11;
sj2=1ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=63ULL;
l4=sj0;
goto L13;
L15:;
si0=l9;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj1=l11;
sj2=3ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=62ULL;
l4=sj0;
goto L13;
L14:;
si0=l9;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
sj0=61ULL;
l4=sj0;
L13:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
goto L12;
}
L7:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=1190403U;
si1=43U;
si2=1195408U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si1=l1;
si2=l2;
si3=8U;
f687(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L24;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L24:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l6;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=-1U;
l7=si0;
L28:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L27;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si1=l9;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L28;
}
}
si0=l6;
si1=l7;
si0-=si1;
l1=si0;
switch(si0){
case 0:
goto L27;
case 1:
goto L26;
default:
goto L25;
}
L27:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
f15271(i,si0);
goto L2;
L26:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l9;
f15271(i,si0);
goto L2;
L25:;
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
si2=l1;
si3=l6;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1190403U;
si1=43U;
si2=1195424U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1075(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=17U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
sj1=4ULL;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
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
l6=si0;
si0=l5;
if(si0){
goto L11;
}
si0=l6;
l7=si0;
goto L10;
L11:;
si0=l6;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L12;
}
si0=l6;
si1=l5;
si0=f15277(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=0U;
si2=l5;
si0=f15392(i,si0,si1,si2);
goto L9;
L12:;
si0=l5;
si1=1U;
si0=f15273(i,si0,si1);
l7=si0;
L10:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
L9:;
si0=l4;
si1=-1U;
si0+=si1;
l5=si0;
si1=l4;
si2=l2;
si3=15U;
si2&=si3;
l6=si2;
si0=si2?si0:si1;
l8=si0;
si0=l7;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l6;
si1=2U;
si0<<=(si1&31);
sj0=(U64)(si0);
l9=sj0;
L13:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L14;
}
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
sj0=64ULL;
l9=sj0;
L14:;
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4ULL;
sj1<<=(sj2&63);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-48U;
si0+=si1;
l11=si0;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l6;
si1=-97U;
si0+=si1;
si1=255U;
si0&=si1;
si1=25U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l6;
si1=-87U;
si0+=si1;
l11=si0;
goto L16;
L17:;
si0=l6;
si1=-91U;
si0+=si1;
si1=255U;
si0&=si1;
si1=230U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l6;
si1=-55U;
si0+=si1;
l11=si0;
L16:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
sj1=l10;
si2=l11;
sj2=(U64)(si2);
sj3=255ULL;
sj2&=sj3;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=-4ULL;
sj0+=sj1;
l9=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
goto L13;
L15:;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L8:;
si0=l3;
si1=l1;
si2=l2;
si3=16U;
f687(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L18:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l8;
si1=l4;
si2=1195504U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=-1U;
l6=si0;
L21:;
{
si0=l5;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L21;
}
}
si0=l4;
si1=l6;
si0-=si1;
l5=si0;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
default:
goto L22;
}
L22:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=l5;
si3=l4;
si4=l5;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L2;
L20:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L19:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
L3:;
si0=l7;
f15271(i,si0);
L2:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1190403U;
si1=43U;
si2=1195488U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1076(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
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
l6=si0;
si0=l5;
if(si0){
goto L9;
}
si0=l6;
l7=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
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
goto L8;
L10:;
si0=l5;
si0=f15269(i,si0);
l7=si0;
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
sj2=l3;
sj1+=sj2;
l3=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=l3;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L12;
}
si0=l2;
si1=-1U;
si0+=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l6=si0;
si0=0U;
l5=si0;
L13:;
{
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
sj0+=sj1;
l3=sj0;
si0=!(sj0);
l10=si0;
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
si1=l7;
f1193(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L14:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l10;
if(si0){
goto L13;
}
}
L12:;
si0=l5;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l7;
si0-=si1;
si1=l2;
si2=l6;
si1-=si2;
l5=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si1=l7;
si2=l5;
f1196(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L15:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L1;
L11:;
sj0=1ULL;
l3=sj0;
si0=l7;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
l5=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L7:;
f53(i);
UNREACHABLE;
L6:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l3;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l6;
si1=l2;
si2=1195644U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l5;
f1193(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
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
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1077(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U64 l4) {
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=l4;
sj1+=sj2;
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l6=si0;
sj0=l4;
sj1=l5;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l3;
si1=-1U;
si0+=si1;
l7=si0;
si0=l1;
si1=-1U;
si0+=si1;
l8=si0;
si0=l0;
si1=8U;
si0+=si1;
l9=si0;
si0=l2;
si1=8U;
si0+=si1;
l10=si0;
si0=0U;
l6=si0;
sj0=1ULL;
l4=sj0;
L6:;
{
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si1=l6;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
sj0=l5;
si0=!(sj0);
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
si1=l2;
si2=l6;
si1+=si2;
si2=l3;
si3=l9;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
sj0=0ULL;
l4=sj0;
L4:;
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
goto L0;
L3:;
si0=l1;
si1=l1;
si2=1195660U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l9;
si1=l3;
si2=1195676U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1195692U;
si1=34U;
si2=1195728U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1078(rustpythonInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
sj2=l1;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l1;
sj1=l4;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l2=si0;
L4:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l1=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
sj0=l1;
si0=!(sj0);
if(si0){
goto L4;
}
}
L3:;
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
f1193(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
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
goto L0;
L1:;
si0=1195744U;
si1=32U;
si2=1195776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1079(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L13;
}
L14:;
si0=l2;
si1=l4;
si0=si0 < si1;
l6=si0;
if(si0){
goto L1;
}
si0=l2;
if(si0){
goto L12;
}
si0=8U;
l7=si0;
goto L11;
L13:;
si0=0U;
l8=si0;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
sj1=8ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l3=si0;
sj0=0ULL;
l9=sj0;
L16:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=1ULL;
sj0<<=(sj1&63);
sj1=l9;
sj0|=sj1;
l9=sj0;
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
si1=l8;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L17:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=l10;
sj1=63ULL;
sj0>>=(sj1&63);
l9=sj0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
if(si0){
goto L16;
}
}
sj0=l10;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L15;
}
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l5;
si1=l8;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L18:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L15:;
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
goto L2;
L12:;
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
l11=si0;
si0=l8;
if(si0){
goto L20;
}
si0=l11;
l7=si0;
goto L19;
L20:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l11;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L21;
}
si0=l11;
si1=l8;
si0=f15277(i,si0,si1);
l7=si0;
goto L19;
L21:;
si0=l8;
si0=f15269(i,si0);
l7=si0;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
L11:;
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
l11=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
l7=si0;
si0=0U;
l6=si0;
L23:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l9=sj0;
sj1=l10;
si0=sj0 < sj1;
l12=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L25;
}
si0=l12;
l6=si0;
goto L24;
L25:;
si0=l12;
sj1=l9;
sj2=1ULL;
sj1+=sj2;
l9=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L24:;
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l5;
si1=l8;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L26:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si0=!(si0);
if(si0){
goto L8;
}
goto L23;
}
L22:;
si0=0U;
l8=si0;
si0=l2;
l3=si0;
si0=0U;
l6=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L7;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l11;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
L7:;
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l3;
si1=l8;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l1=si1;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l5;
si1=l8;
si2=l1;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L27:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l1;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l8;
si2=l1;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=l4;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L28;
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
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
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
l1=si0;
si0=l3;
si1=8U;
si0+=si1;
l8=si0;
L30:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l9;
si0=!(sj0);
if(si0){
goto L30;
}
goto L3;
}
L29:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L28:;
si0=l4;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l5;
si1=l4;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L31:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
goto L4;
L6:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l8;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l5;
si1=l8;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L32:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
goto L4;
L5:;
si0=l4;
si1=l1;
si2=1195792U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l8;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L3:;
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
si0=1192732U;
si1=34U;
si2=1195808U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1080(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=l5;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l5;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l6=si0;
si0=l2;
l7=si0;
si0=l0;
l8=si0;
si0=0U;
l9=si0;
L12:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l11=sj0;
sj1=l10;
si0=sj0 < sj1;
l12=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L14;
}
si0=l12;
l9=si0;
goto L13;
L14:;
si0=l12;
sj1=l11;
sj2=1ULL;
sj1+=sj2;
l11=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L13:;
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l9;
if(si0){
goto L9;
}
goto L3;
L11:;
si0=l3;
if(si0){
goto L3;
}
goto L2;
L10:;
si0=1195872U;
si1=37U;
si2=1195912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
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
l4=si1;
si0+=si1;
l13=si0;
si1=l2;
si2=l4;
si1+=si2;
l14=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l5;
si1=-1U;
si0^=si1;
l4=si0;
si1=l3;
si0+=si1;
l8=si0;
si0=l4;
si1=l1;
si0+=si1;
l12=si0;
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=8U;
si1+=si2;
l4=si1;
si0+=si1;
l6=si0;
si0=l0;
si1=l4;
si0+=si1;
l7=si0;
si0=0U;
l4=si0;
si0=1U;
l9=si0;
L16:;
{
si0=l8;
si1=l4;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l12;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L16;
}
}
L15:;
si0=l4;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
si1=l3;
si2=l5;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l13;
si1=l6;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l14;
si2=l4;
si1+=si2;
si2=l7;
si3=l6;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L2;
L8:;
si0=1192732U;
si1=34U;
si2=1195928U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=l5;
si0-=si1;
l4=si0;
si1=l4;
si2=1195660U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l6;
si1=l7;
si2=1195676U;
f675(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
si2=l3;
si3=l5;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
L2:;
si0=0U;
l9=si0;
L1:;
si0=l9;
L0:;
return si0;
}

U32 f1081(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
goto L1;
}
si0=0U;
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
sj1=l5;
si0=sj0 < sj1;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l7;
l3=si0;
goto L4;
L5:;
si0=l7;
sj1=l6;
sj2=1ULL;
sj1+=sj2;
l6=sj1;
si1=!(sj1);
si0|=si1;
l3=si0;
L4:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
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
goto L3;
}
}
L2:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L1:;
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
si4=1196048U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f1082(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
si0=l3;
si1=l2;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=l2;
l7=si0;
si0=l4;
l8=si0;
L9:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
l11=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L11;
}
si0=l11;
l6=si0;
goto L10;
L11:;
si0=l11;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L10:;
si0=l8;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
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
si0=l6;
si1=1U;
si0^=si1;
l1=si0;
si0=l3;
si1=l2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
if(si0){
goto L12;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L13:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L13;
}
goto L1;
}
L12:;
si0=l3;
si1=l2;
si0=si0 != si1;
si1=l1;
si0|=si1;
if(si0){
goto L1;
}
goto L7;
L8:;
si0=l2;
si1=l3;
si0-=si1;
l11=si0;
si0=l1;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l8=si0;
si0=l3;
l6=si0;
L14:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
l7=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L16;
}
si0=l7;
l8=si0;
goto L15;
L16:;
si0=l7;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L15:;
si0=l4;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L14;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
l1=si1;
si0-=si1;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l0;
si1=l1;
si2=l11;
f1196(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L17:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=l1;
si2=l11;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=l3;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l10;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l3;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l4=si0;
si0=l8;
si1=8U;
si0+=si1;
l1=si0;
L18:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l10;
si0=!(sj0);
if(si0){
goto L18;
}
goto L1;
}
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l0;
si1=l1;
f1193(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l1=si0;
goto L2;
L6:;
si0=l3;
si1=l4;
si2=1196080U;
f662(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l11;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l0;
si1=0U;
si2=l11;
f1196(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
L20:;
si0=l4;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l11;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l11;
si0+=si1;
l1=si0;
goto L2;
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l6=si0;
si0=l2;
si1=7U;
si0&=si1;
l8=si0;
if(si0){
goto L22;
}
si0=l1;
l4=si0;
goto L21;
L22:;
si0=l1;
l4=si0;
L23:;
{
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L23;
}
}
si0=l4;
si1=-8U;
si0+=si1;
l8=si0;
L21:;
si0=l6;
si1=7U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
L25:;
{
si0=l4;
si1=64U;
si0+=si1;
l4=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L25;
}
}
si0=l4;
si1=-8U;
si0+=si1;
l8=si0;
L24:;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L1;
}
sj0=l10;
sj1=63ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l0;
si1=l2;
f1193(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L26:;
si0=l1;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=1U;
si0+=si1;
l1=si0;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
L0:;
}

U32 f1083(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
si0=l2;
l8=si0;
si0=l4;
l9=si0;
L8:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l11=sj0;
sj1=l10;
si0=sj0 < sj1;
l12=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L10;
}
si0=l12;
l7=si0;
goto L9;
L10:;
si0=l12;
sj1=l11;
sj2=1ULL;
sj1+=sj2;
l11=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L9:;
si0=l9;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L8;
}
}
si0=l3;
si1=l2;
si0=si0 == si1;
l9=si0;
if(si0){
goto L6;
}
si0=l7;
si1=1U;
si0^=si1;
if(si0){
goto L6;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l2;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l6=si0;
si0=l9;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
L11:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L11;
}
goto L1;
}
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
si0=l3;
l8=si0;
si0=l4;
l9=si0;
L12:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l11=sj0;
sj1=l10;
si0=sj0 < sj1;
l12=si0;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L14;
}
si0=l12;
l7=si0;
goto L13;
L14:;
si0=l12;
sj1=l11;
sj2=1ULL;
sj1+=sj2;
l11=sj1;
si1=!(sj1);
si0|=si1;
l7=si0;
L13:;
si0=l9;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L12;
}
}
si0=l2;
si1=l3;
si0=si0 == si1;
l9=si0;
if(si0){
goto L4;
}
si0=l7;
si1=1U;
si0^=si1;
if(si0){
goto L4;
}
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l6=si0;
si0=l9;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
L15:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L15;
}
goto L1;
}
L6:;
si0=l9;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
L5:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l9;
f1193(i,si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
goto L2;
L4:;
si0=l9;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l0;
l1=si0;
goto L2;
L16:;
si0=l0;
si1=l9;
f1193(i,si0,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l0;
l1=si0;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=l3;
si0=si0 < si1;
L0:;
return si0;
}

U32 f1084(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
goto L6;
}
si0=0U;
l5=si0;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
L7:;
{
si0=l2;
si1=l5;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l4;
si2=l5;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l11=sj0;
sj1=l10;
si0=sj0 < sj1;
l12=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L9;
}
si0=l12;
l9=si0;
goto L8;
L9:;
si0=l12;
sj1=l11;
sj2=1ULL;
sj1+=sj2;
l11=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L8:;
si0=l1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l5;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l3;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l12=si0;
sj0=l11;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l0;
si1=8U;
si0+=si1;
l8=si0;
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
goto L4;
}
si0=l8;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
sj0=l11;
si0=!(sj0);
if(si0){
goto L10;
}
goto L4;
}
L6:;
si0=1U;
l12=si0;
si0=0U;
l9=si0;
si0=l6;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l9;
si1=l12;
si0|=si1;
l9=si0;
L3:;
si0=l7;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l9;
goto L0;
L2:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
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
si4=1195856U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f1085(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si2=1196096U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l2;
si2=1196112U;
f675(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si1=l4;
si2=1196112U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l2;
si2=1196128U;
f675(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=l4;
si2=1196128U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l2;
si2=1196144U;
f662(i,si0,si1,si2);
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
si0=1190860U;
si1=14U;
si2=1196160U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1086(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si2=1196176U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l2;
si2=1196192U;
f675(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l2;
si1=l4;
si2=1196192U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l3;
si1=l2;
si2=1196208U;
f675(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=l4;
si2=1196208U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=l2;
si2=1196224U;
f662(i,si0,si1,si2);
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
si0=1190860U;
si1=14U;
si2=1196240U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1087(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
goto L2;
}
si0=l2;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
sj0=0ULL;
l8=sj0;
sj0=0ULL;
l9=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l9=sj0;
si0=l4;
si1=1U;
si0&=si1;
l10=si0;
si0=l4;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L5;
}
si0=0U;
l12=si0;
sj0=0ULL;
l13=sj0;
goto L4;
L5:;
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
L6:;
{
si0=l7;
si1=192U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+192U);
l15=sj1;
sj2=l13;
sj1+=sj2;
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=208U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
sj3=l8;
sj4=l15;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l15=sj1;
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
sj1=l15;
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
goto L6;
}
}
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L7;
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
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l6;
si0+=si1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+176U);
l9=sj1;
sj2=l13;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=184U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l15;
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l13=sj0;
L7:;
si0=l4;
si1=1U;
si0&=si1;
l17=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l15=sj0;
si0=l11;
if(si0){
goto L9;
}
sj0=0ULL;
l8=sj0;
si0=0U;
l12=si0;
sj0=0ULL;
l18=sj0;
goto L8;
L9:;
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
l8=sj0;
L10:;
{
si0=l7;
si1=144U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l15;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
sj1=l8;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l9=sj1;
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
sj3=l15;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=8U;
si0+=si1;
l14=si0;
sj1=0ULL;
sj2=l9;
sj3=l8;
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
sj3=l9;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l8=sj1;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l9=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+160U);
sj1+=sj2;
l16=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
sj1=l8;
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
sj2=l9;
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
goto L10;
}
}
L8:;
si0=l17;
si0=!(si0);
if(si0){
goto L11;
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
sj3=l15;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l1;
si1=l6;
si0+=si1;
l6=si0;
sj1=l8;
si2=l6;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l9=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+128U);
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l9;
sj2=l8;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l7;
si2=136U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l15;
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l8=sj0;
L11:;
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
l9=sj0;
si0=l6;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L13;
}
sj0=0ULL;
l15=sj0;
si0=l5;
l6=si0;
goto L12;
L13:;
si0=l12;
si1=1073741820U;
si0&=si1;
l12=si0;
sj0=0ULL;
l15=sj0;
si0=l5;
l6=si0;
L14:;
{
si0=l7;
si1=64U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+64U);
l16=sj1;
sj2=l15;
sj1+=sj2;
l15=sj1;
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
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
sj3=l15;
sj4=l16;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l15=sj1;
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
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
sj3=l15;
sj4=l18;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l15=sj1;
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
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
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
sj3=l15;
sj4=l16;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l15=sj1;
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
sj1=l15;
sj2=l18;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l15=sj0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L14;
}
}
L12:;
si0=l2;
si0=!(si0);
if(si0){
goto L15;
}
L16:;
{
si0=l7;
si1=48U;
si0+=si1;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+48U);
l16=sj1;
sj2=l15;
sj1+=sj2;
l15=sj1;
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
sj1=l15;
sj2=l16;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l15=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L16;
}
}
L15:;
si0=l4;
si1=1U;
si0&=si1;
l17=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+8U);
l18=sj0;
si0=l11;
if(si0){
goto L18;
}
sj0=0ULL;
l9=sj0;
si0=0U;
l12=si0;
sj0=0ULL;
l19=sj0;
goto L17;
L18:;
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
l9=sj0;
L19:;
{
si0=l7;
si1=16U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l18;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
sj1=l9;
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
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=8U;
si0+=si1;
l14=si0;
sj1=0ULL;
sj2=l16;
sj3=l9;
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
l9=sj1;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l20=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l9;
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
sj2=l9;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l9=sj0;
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
goto L19;
}
}
L17:;
si0=l17;
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
si1=l3;
si2=l12;
si3=3U;
si2<<=(si3&31);
l6=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l18;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=l6;
si0+=si1;
l6=si0;
sj1=l9;
si2=l6;
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
sj2=l9;
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
l9=sj0;
L20:;
sj0=l8;
sj1=l13;
sj0+=sj1;
l8=sj0;
sj0=l9;
sj1=l15;
sj0+=sj1;
l9=sj0;
L3:;
si0=l5;
si1=l4;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l6;
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
si0=1197164U;
si1=30U;
si2=1197196U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1197116U;
si1=31U;
si2=1197148U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1088(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
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
si0=!(sj0);
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
si0=1197864U;
si1=29U;
si2=1197896U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=1U;
si1=l6;
si2=84U;
si1+=si2;
si2=1191456U;
si3=l6;
si4=96U;
si3+=si4;
si4=1197848U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=1U;
si1=l8;
si2=1193568U;
si3=l6;
si4=96U;
si3+=si4;
si4=1197832U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=l9;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l8;
if(si0){
goto L14;
}
si0=l7;
l10=si0;
goto L13;
L14:;
si0=l7;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l7;
si1=l8;
si0=f15277(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l10;
si1=0U;
si2=l8;
si0=f15392(i,si0,si1,si2);
goto L12;
L15:;
si0=l8;
si1=1U;
si0=f15273(i,si0,si1);
l10=si0;
L13:;
si0=l10;
si0=!(si0);
if(si0){
goto L10;
}
L12:;
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
f1243(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l2;
l7=si0;
L17:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L16;
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
goto L17;
}
L16:;
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
si0=f15390(i,si0,si1,si2);
si0=l10;
f15271(i,si0);
goto L7;
L11:;
f53(i);
UNREACHABLE;
L10:;
si0=l7;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L9:;
si0=l5;
si1=l1;
si2=1197816U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l5;
l8=si0;
si0=l5;
si1=330U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l5;
l7=si0;
L27:;
{
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l7;
si1=l5;
si0=si0 > si1;
if(si0){
goto L25;
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
goto L24;
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
goto L23;
}
si0=l16;
si0=!(si0);
if(si0){
goto L28;
}
si0=l10;
si1=0U;
si2=l11;
si3=5U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
L28:;
si0=l15;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L22;
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
goto L21;
}
si0=l16;
si1=l8;
si0=si0 == si1;
if(si0){
goto L20;
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
si0=f1059(i,si0,si1,si2,si3,si4,si5,si6);
l16=si0;
if(si0){
goto L31;
}
si0=l2;
si1=l7;
si2=l4;
si3=l7;
si4=l0;
si5=l1;
si6=l10;
si7=l9;
si0=f1064(i,si0,si1,si2,si3,si4,si5,si6,si7);
l8=si0;
if(si0){
goto L30;
}
si0=l7;
l5=si0;
si0=l10;
f15271(i,si0);
goto L7;
L31:;
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
goto L19;
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
goto L29;
}
si0=l6;
si1=96U;
si0+=si1;
si1=l16;
si2=l13;
si1+=si2;
si2=l2;
si3=l7;
si4=l4;
si5=l7;
si6=l13;
si7=l11;
si8=l8;
si0=f1056(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l8=si0;
L30:;
si0=l8;
l7=si0;
si0=l8;
si1=329U;
si0=si0 > si1;
if(si0){
goto L27;
}
goto L18;
L29:;
}
si0=1197692U;
si1=45U;
si2=1197740U;
f673(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l7;
si1=l3;
si2=1197644U;
f666(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l7;
si1=l5;
si2=1197660U;
f666(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1190368U;
si1=35U;
si2=1197676U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l16;
si1=l8;
si2=1196256U;
f666(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l11;
si1=l8;
si2=1196176U;
f666(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l16;
si1=l8;
si2=1196224U;
f662(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=0U;
si1=0U;
si2=1196272U;
f663(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1197756U;
si1=42U;
si2=1197800U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l8;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l8;
l7=si0;
goto L51;
L52:;
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
L53:;
{
si0=l8;
si1=-1U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L58;
}
si0=l7;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L57;
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
if(si0){
goto L56;
}
sj0=l12;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
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
goto L50;
}
si0=l8;
si1=-3U;
si0+=si1;
l13=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l13;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L47;
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
goto L54;
L58:;
si0=l7;
si1=l3;
si2=1197420U;
f663(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l7;
si1=l5;
si2=1197436U;
f663(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=1U;
si1=l6;
si2=88U;
si1+=si2;
si2=1193568U;
si3=l6;
si4=96U;
si3+=si4;
si4=1197628U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L55:;
si0=l8;
si1=-2U;
si0+=si1;
l14=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L40;
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
L54:;
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
si0=f1065(i,sj0,sj1,sj2,sj3,si4);
if(si0){
goto L60;
}
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l8;
si1=l5;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l2;
si1=l8;
si2=l4;
si3=l8;
si4=l0;
si5=l1;
si6=l11;
si7=l9;
si0=f1064(i,si0,si1,si2,si3,si4,si5,si6,si7);
l7=si0;
if(si0){
goto L59;
}
si0=l8;
l5=si0;
si0=l10;
f15271(i,si0);
goto L7;
L60:;
si0=l8;
si1=l9;
si0=si0 > si1;
if(si0){
goto L43;
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
si1=96U;
si0+=si1;
si1=l11;
si2=l8;
si3=l2;
si4=l8;
si5=l4;
si6=l8;
si0=f1061(i,si0,si1,si2,si3,si4,si5,si6);
l7=si0;
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
L59:;
si0=l7;
l8=si0;
si0=l7;
si1=2U;
si0=si0 > si1;
if(si0){
goto L53;
}
}
L51:;
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
goto L39;
}
goto L38;
L50:;
si0=l14;
si1=l3;
si2=1197452U;
f663(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=l13;
si1=l3;
si2=1197468U;
f663(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l14;
si1=l5;
si2=1197484U;
f663(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l13;
si1=l5;
si2=1197500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l14;
si1=l3;
si2=1197516U;
f663(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l8;
si1=l3;
si2=1197548U;
f666(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l8;
si1=l5;
si2=1197564U;
f666(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l8;
si1=l9;
si2=1197580U;
f666(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l8;
si1=l3;
si2=1197596U;
f666(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l8;
si1=l5;
si2=1197612U;
f666(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l14;
si1=l5;
si2=1197532U;
f663(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l8;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L36;
}
L38:;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=(U32)(sj0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L62;
}
si0=l2;
l11=si0;
si0=l3;
l8=si0;
si0=l4;
l2=si0;
si0=l5;
l3=si0;
goto L61;
L62:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l4;
l11=si0;
si0=l5;
l8=si0;
L61:;
sj0=l12;
si0=(U32)(sj0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L35;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L63;
}
sj0=l17;
sj1=l17;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l20=sj0;
si0=!(sj0);
if(si0){
goto L32;
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
goto L64;
}
sj0=l17;
l12=sj0;
goto L33;
L64:;
L65:;
{
sj0=l17;
sj1=l12;
si0=sj0 < sj1;
if(si0){
goto L67;
}
sj0=l17;
sj1=l12;
sj0-=sj1;
l17=sj0;
sj1=l17;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l17=sj0;
goto L66;
L67:;
sj0=l12;
sj1=l17;
sj0-=sj1;
l12=sj0;
sj1=l12;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l12=sj0;
L66:;
sj0=l17;
sj1=l12;
si0=sj0 == sj1;
if(si0){
goto L33;
}
goto L65;
}
L63:;
si0=l3;
si1=1U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=1U;
si1=1U;
si2=1197308U;
f663(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l8;
si1=l5;
si2=1197276U;
f663(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1191228U;
si1=50U;
si2=1197404U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1197356U;
si1=29U;
si2=1197388U;
f673(i,si0,si1,si2);
UNREACHABLE;
L34:;
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
goto L68;
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
L68:;
si0=l8;
si1=2U;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0+8U);
l20=sj0;
sj0=l17;
sj1=l18;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L69;
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
f15401(i,si0,sj1,sj2,si3);
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
f15401(i,si0,sj1,sj2,si3);
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
goto L72;
}
sj0=l18;
l20=sj0;
sj0=l17;
l12=sj0;
goto L70;
L72:;
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
L73:;
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
goto L75;
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
f15401(i,si0,sj1,sj2,si3);
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
goto L74;
L75:;
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
f15401(i,si0,sj1,sj2,si3);
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0+16U);
l20=sj0;
L74:;
sj0=l18;
sj1=l20;
sj0^=sj1;
sj1=l17;
sj2=l12;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L70;
}
goto L73;
}
L71:;
si0=1U;
si1=1U;
si2=1197324U;
f663(i,si0,si1,si2);
UNREACHABLE;
L70:;
si0=l6;
sj1=l20;
sj2=l12;
sj3=l21;
si3=(U32)(sj3);
f15406(i,si0,sj1,sj2,si3);
si0=l6;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
L69:;
si0=l1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L76;
}
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l20;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l10;
f15271(i,si0);
si0=1U;
si1=2U;
sj2=l20;
si2=!(sj2);
si0=si2?si0:si1;
l5=si0;
goto L7;
L76:;
si0=1U;
si1=l1;
si2=1197340U;
f663(i,si0,si1,si2);
UNREACHABLE;
L33:;
sj0=l12;
sj1=l19;
sj0<<=(sj1&63);
l12=sj0;
L32:;
si0=l1;
si0=!(si0);
if(si0){
goto L77;
}
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l5=si0;
si0=l10;
f15271(i,si0);
goto L7;
L77:;
si0=0U;
si1=0U;
si2=1197292U;
f663(i,si0,si1,si2);
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
si2=1197260U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1089(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U64 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U64 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U64 l24=0;
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=80U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
if(si0){
goto L26;
}
si0=0U;
l9=si0;
goto L25;
L26:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l10=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l9=si0;
si0=l6;
l12=si0;
L28:;
{
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
if(si0){
goto L28;
}
}
si0=l11;
l9=si0;
L27:;
si0=l9;
si1=l7;
si0=si0 > si1;
if(si0){
goto L24;
}
L25:;
si0=l7;
si1=l9;
si0-=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
l15=si0;
if(si0){
goto L30;
}
sj0=0ULL;
l16=sj0;
si0=l13;
l12=si0;
si0=l10;
l17=si0;
goto L29;
L31:;
si0=0U;
si1=0U;
si2=1198212U;
f663(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l12=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l13;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=l12;
if(si0){
goto L34;
}
si0=l6;
l17=si0;
goto L33;
L34:;
si0=l6;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l6;
si1=l12;
si0=f15277(i,si0,si1);
l17=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l17;
si1=0U;
si2=l12;
si0=f15392(i,si0,si1,si2);
goto L32;
L35:;
si0=l12;
si1=1U;
si0=f15273(i,si0,si1);
l17=si0;
L33:;
si0=l17;
si0=!(si0);
if(si0){
goto L23;
}
L32:;
si0=l17;
si1=l13;
si2=l10;
si3=l13;
sj4=l14;
sj4=I64_CTZ(sj4);
l16=sj4;
sj0=f1225(i,si0,si1,si2,si3,sj4);
si0=l13;
si1=-1U;
si0+=si1;
l12=si0;
si1=l13;
si2=l17;
si3=l12;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l12=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L29:;
si0=l9;
if(si0){
goto L37;
}
si0=l12;
l10=si0;
si0=l12;
si1=13U;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l12;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l12;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l12;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l14=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l6=si0;
if(si0){
goto L39;
}
si0=0U;
l10=si0;
goto L38;
L39:;
si0=l6;
sj1=l14;
si1=(U32)(sj1);
l11=si1;
si0<<=(si1&31);
l10=si0;
si1=l11;
si0>>=(si1&31);
si1=l6;
si0=si0 != si1;
if(si0){
goto L22;
}
L38:;
si0=l12;
si1=1U;
si2=3U;
si0=f1303(i,si0,si1,si2);
l11=si0;
si0=l10;
si1=1U;
si0>>=(si1&31);
l6=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l10;
si1=4U;
si0+=si1;
l6=si0;
goto L40;
L41:;
si0=l6;
si1=l11;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l10;
si1=l6;
si0+=si1;
si1=4U;
si0+=si1;
l6=si0;
goto L40;
L42:;
si0=l10;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l6=si0;
L40:;
si0=l6;
si1=l10;
si0+=si1;
l10=si0;
si1=l7;
si2=1U;
si1<<=(si2&31);
l6=si1;
si2=l10;
si3=l6;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
goto L36;
L37:;
si0=l9;
si1=l12;
si2=l9;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
l6=si0;
si0=l10;
si1=13U;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l10;
sj1=1ULL;
sj2=2ULL;
sj3=3ULL;
si4=l10;
si5=97U;
si4=si4 < si5;
sj2=si4?sj2:sj3;
si3=l10;
si4=49U;
si3=si3 < si4;
sj1=si3?sj1:sj2;
l14=sj1;
si2=3U;
si0=f1306(i,si0,sj1,si2);
l11=si0;
if(si0){
goto L44;
}
si0=0U;
l6=si0;
goto L43;
L44:;
si0=l11;
sj1=l14;
si1=(U32)(sj1);
l18=si1;
si0<<=(si1&31);
l6=si0;
si1=l18;
si0>>=(si1&31);
si1=l11;
si0=si0 != si1;
if(si0){
goto L21;
}
L43:;
si0=l10;
si1=1U;
si2=3U;
si0=f1303(i,si0,si1,si2);
l18=si0;
si0=l6;
si1=1U;
si0>>=(si1&31);
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l6;
si1=4U;
si0+=si1;
l10=si0;
goto L45;
L46:;
si0=l11;
si1=l18;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l6;
si1=l11;
si0+=si1;
si1=4U;
si0+=si1;
l10=si0;
goto L45;
L47:;
si0=l6;
si1=1U;
si0<<=(si1&31);
si1=4U;
si0+=si1;
l10=si0;
L45:;
si0=l10;
si1=l6;
si0+=si1;
l6=si0;
si1=l7;
si2=1U;
si1<<=(si2&31);
l10=si1;
si2=l6;
si3=l10;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l10;
si0+=si1;
l6=si0;
L36:;
si0=l6;
if(si0){
goto L49;
}
si0=8U;
l11=si0;
goto L48;
L49:;
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l10;
if(si0){
goto L51;
}
si0=l18;
l11=si0;
goto L50;
L51:;
si0=l18;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L52;
}
si0=l18;
si1=l10;
si0=f15277(i,si0,si1);
l11=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l11;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L48;
L52:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l11=si0;
L50:;
si0=l11;
si0=!(si0);
if(si0){
goto L20;
}
L48:;
si0=l12;
si1=l13;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L56;
}
si0=l5;
switch(si0){
case 0:
goto L55;
case 1:
goto L54;
default:
goto L53;
}
L56:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=16U;
si1+=si2;
si2=1191456U;
si3=l8;
si4=24U;
si3+=si4;
si4=1198180U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L55:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=20U;
si1+=si2;
si2=1191456U;
si3=l8;
si4=24U;
si3+=si4;
si4=1198164U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L54:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 <= sj1;
if(si0){
goto L18;
}
L53:;
si0=l12;
si0=!(si0);
if(si0){
goto L17;
}
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
si0=l12;
si1=l1;
si0=si0 > si1;
if(si0){
goto L16;
}
sj0=1ULL;
l20=sj0;
si0=l5;
sj0=(U64)(si0);
sj1=6ULL;
sj0<<=(sj1&63);
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=l4;
si1+=si2;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CLZ(sj1);
sj0-=sj1;
l14=sj0;
sj1=8ULL;
si0=sj0 < sj1;
if(si0){
goto L57;
}
sj0=2ULL;
l20=sj0;
sj0=l14;
sj1=26ULL;
si0=sj0 < sj1;
if(si0){
goto L57;
}
sj0=3ULL;
l20=sj0;
sj0=l14;
sj1=82ULL;
si0=sj0 < sj1;
if(si0){
goto L57;
}
sj0=4ULL;
l20=sj0;
sj0=l14;
sj1=242ULL;
si0=sj0 < sj1;
if(si0){
goto L57;
}
sj0=5ULL;
l20=sj0;
sj0=l14;
sj1=674ULL;
si0=sj0 < sj1;
if(si0){
goto L57;
}
sj0=6ULL;
l20=sj0;
sj0=l14;
sj1=1794ULL;
si0=sj0 < sj1;
if(si0){
goto L57;
}
sj0=7ULL;
l20=sj0;
sj0=l14;
sj1=4610ULL;
si0=sj0 < sj1;
if(si0){
goto L57;
}
sj0=8ULL;
l20=sj0;
sj0=l14;
sj1=11522ULL;
si0=sj0 < sj1;
if(si0){
goto L57;
}
sj0=10ULL;
sj1=9ULL;
sj2=l14;
sj3=28161ULL;
si2=sj2 > sj3;
sj0=si2?sj0:sj1;
l20=sj0;
L57:;
si0=l8;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l12;
si1=99U;
si0=si0 <= si1;
if(si0){
goto L58;
}
si0=l12;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l12;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l12;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l10;
if(si0){
goto L61;
}
si0=l18;
l21=si0;
goto L60;
L61:;
si0=l18;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L62;
}
si0=l18;
si1=l10;
si0=f15277(i,si0,si1);
l21=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l21;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L59;
L62:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l21=si0;
L60:;
si0=l21;
si0=!(si0);
if(si0){
goto L14;
}
L59:;
si0=l21;
si1=l12;
si2=l17;
si3=l12;
si4=l11;
si5=l6;
f1280(i,si0,si1,si2,si3,si4,si5);
si0=1195192U;
l22=si0;
si0=l12;
l23=si0;
goto L11;
L58:;
sj0=9223372036854775807ULL;
sj1=127ULL;
sj2=l19;
sj3=2ULL;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
sj1=l19;
sj2=1ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l24=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L13;
}
sj0=l24;
si0=(U32)(sj0);
l10=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l8;
sj1=2ULL;
sj2=2ULL;
sj3=l19;
si4=l10;
si5=1246604U;
si4+=si5;
sj4=i64_load8_u(&i->m0,(U64)si4);
l24=sj4;
sj3*=sj4;
sj2-=sj3;
sj3=l24;
sj2*=sj3;
l24=sj2;
sj3=l19;
sj2*=sj3;
sj1-=sj2;
sj2=l24;
sj1*=sj2;
l24=sj1;
sj2=l19;
sj1*=sj2;
sj2=-2ULL;
sj1+=sj2;
sj2=l24;
sj1*=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l8;
si1=24U;
si0+=si1;
l21=si0;
si0=2U;
l23=si0;
si0=1195216U;
l22=si0;
goto L11;
L24:;
si0=l9;
si1=l7;
si2=1198196U;
f662(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l6;
si1=l12;
f52(i,si0,si1);
UNREACHABLE;
L22:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1198692U;
si1=43U;
si2=1198884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l18;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L19:;
si0=l12;
si1=l13;
si2=1198228U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1197912U;
si1=27U;
si2=1197940U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=0U;
si1=0U;
si2=1197956U;
f663(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l12;
si1=l1;
si2=1197972U;
f666(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1198116U;
si1=29U;
si2=1198148U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l18;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L13:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l10;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l12;
sj1=l20;
si1=(U32)(sj1);
si2=-1U;
si1+=si2;
l25=si1;
si0<<=(si1&31);
l26=si0;
if(si0){
goto L74;
}
si0=8U;
l27=si0;
goto L73;
L74:;
si0=l26;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l26;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l26;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l10;
if(si0){
goto L76;
}
si0=l18;
l27=si0;
goto L75;
L76:;
si0=l18;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L77;
}
si0=l18;
si1=l10;
si0=f15277(i,si0,si1);
l27=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l27;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L73;
L77:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l27=si0;
L75:;
si0=l27;
si0=!(si0);
if(si0){
goto L72;
}
L73:;
si0=l8;
si1=l12;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l26;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l8;
si1=l27;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=64U;
si1+=si2;
f1269(i,si0,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+56U);
l28=si0;
if(si0){
goto L78;
}
si0=0U;
si1=0U;
si2=1197988U;
f663(i,si0,si1,si2);
UNREACHABLE;
L78:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
l29=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l30=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0);
l31=si0;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l3;
si1=1U;
si0<<=(si1&31);
si1=2U;
si0+=si1;
l18=si0;
if(si0){
goto L84;
}
si0=8U;
l10=si0;
goto L83;
L84:;
si0=l18;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l32=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l18;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l33=si0;
si0=l32;
if(si0){
goto L86;
}
si0=l33;
l10=si0;
goto L85;
L86:;
si0=l33;
si1=l32;
si0=si0 <= si1;
if(si0){
goto L87;
}
si0=l33;
si1=l32;
si0=f15277(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l10;
si1=0U;
si2=l32;
si0=f15392(i,si0,si1,si2);
goto L83;
L87:;
si0=l32;
si1=1U;
si0=f15273(i,si0,si1);
l10=si0;
L85:;
si0=l10;
si0=!(si0);
if(si0){
goto L71;
}
L83:;
si0=l18;
si1=l3;
si2=1U;
si1+=si2;
l32=si1;
si0=si0 < si1;
if(si0){
goto L70;
}
si0=l32;
si0=!(si0);
if(si0){
goto L69;
}
si0=l10;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l10;
si1=l32;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l18;
si2=l32;
si1-=si2;
si2=l10;
si3=l32;
sj4=l19;
sj0=f1231(i,si0,si1,si2,si3,sj4);
l19=sj0;
si0=l30;
if(si0){
goto L81;
}
si0=0U;
si1=0U;
si2=1195144U;
f663(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=l12;
si1=l3;
si0+=si1;
l18=si0;
if(si0){
goto L89;
}
si0=8U;
l10=si0;
goto L88;
L89:;
si0=l18;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l18;
si1=3U;
si0<<=(si1&31);
l32=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l18;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l33=si0;
si0=l32;
if(si0){
goto L91;
}
si0=l33;
l10=si0;
goto L90;
L91:;
si0=l33;
si1=l32;
si0=si0 <= si1;
if(si0){
goto L92;
}
si0=l33;
si1=l32;
si0=f15277(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l10;
si1=0U;
si2=l32;
si0=f15392(i,si0,si1,si2);
goto L88;
L92:;
si0=l32;
si1=1U;
si0=f15273(i,si0,si1);
l10=si0;
L90:;
si0=l10;
si0=!(si0);
if(si0){
goto L68;
}
L88:;
si0=l18;
si1=l12;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l10;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l31;
si1=l30;
si2=l10;
si3=l18;
si4=l17;
si5=l12;
f1358(i,si0,si1,si2,si3,si4,si5);
si0=l18;
if(si0){
goto L80;
}
goto L79;
L81:;
si0=l31;
sj1=l19;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
si0=!(si0);
if(si0){
goto L79;
}
L80:;
si0=l10;
f15271(i,si0);
L79:;
si0=8U;
l30=si0;
si0=0U;
l10=si0;
si0=1U;
l34=si0;
si0=l29;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si1=43U;
si0=si0 < si1;
if(si0){
goto L93;
}
si0=l18;
si1=390U;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l18;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L94;
}
si0=l18;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l10=si0;
goto L65;
L94:;
si0=l18;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L95;
}
si0=l18;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l10=si0;
goto L65;
L95:;
si0=8U;
l33=si0;
si0=l18;
si1=50U;
si0=f1183(i,si0,si1);
l32=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l32;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l32;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l18;
si0=!(si0);
if(si0){
goto L96;
}
si0=l32;
l10=si0;
goto L64;
L96:;
si0=0U;
l34=si0;
si0=l32;
l10=si0;
L93:;
si0=8U;
l33=si0;
goto L63;
L72:;
si0=l18;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L71:;
si0=l33;
si1=l32;
f52(i,si0,si1);
UNREACHABLE;
L70:;
si0=1190368U;
si1=35U;
si2=1195112U;
f673(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=1U;
si1=0U;
si2=1195128U;
f662(i,si0,si1,si2);
UNREACHABLE;
L68:;
si0=l33;
si1=l32;
f52(i,si0,si1);
UNREACHABLE;
L67:;
si0=l12;
si1=l18;
si2=1195160U;
f662(i,si0,si1,si2);
UNREACHABLE;
L66:;
si0=l18;
si1=1U;
si0<<=(si1&31);
si1=128U;
si0+=si1;
l10=si0;
L65:;
si0=l10;
si1=3U;
si0<<=(si1&31);
l18=si0;
L64:;
si0=0U;
l34=si0;
si0=l18;
si1=1U;
si0=f15273(i,si0,si1);
l33=si0;
if(si0){
goto L63;
}
si0=8U;
si1=l18;
f52(i,si0,si1);
UNREACHABLE;
L63:;
si0=l11;
si1=l6;
si2=l29;
si2=i32_load(&i->m0,(U64)si2);
si3=l29;
si3=i32_load(&i->m0,(U64)si3+4U);
si4=l33;
si5=l10;
f1106(i,si0,si1,si2,si3,si4,si5);
si0=1190368U;
si1=l0;
si2=l12;
si3=l11;
si4=l6;
si5=l17;
si6=l12;
si7=l21;
si8=l23;
si9=l22;
si9=i32_load(&i->m0,(U64)si9+20U);
l22=si9;
TF(i->t0,si9,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l12;
si0=f1361(i,si0);
l32=si0;
si0=!(si0);
if(si0){
goto L101;
}
si0=l32;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l32;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l32;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l10;
if(si0){
goto L103;
}
si0=l18;
l30=si0;
goto L102;
L103:;
si0=l18;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L104;
}
si0=l18;
si1=l10;
si0=f15277(i,si0,si1);
l30=si0;
si0=!(si0);
if(si0){
goto L100;
}
si0=l30;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L101;
L104:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l30=si0;
L102:;
si0=l30;
si0=!(si0);
if(si0){
goto L100;
}
L101:;
si0=l25;
si0=!(si0);
if(si0){
goto L106;
}
si0=1U;
si1=l25;
si0<<=(si1&31);
si1=-1U;
si0+=si1;
l25=si0;
si0=l29;
si1=8U;
si0+=si1;
l10=si0;
si0=l28;
l18=si0;
L107:;
{
si0=l18;
si0=!(si0);
if(si0){
goto L105;
}
si0=l11;
si1=l6;
si2=l10;
si3=-8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l10;
si4=-4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l0;
si5=l12;
si6=l30;
si7=l32;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l18;
si1=1U;
si0=si0 == si1;
if(si0){
goto L99;
}
si0=1190368U;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l10;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l11;
si4=l6;
si5=l17;
si6=l12;
si7=l21;
si8=l23;
si9=l22;
TF(i->t0,si9,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L107;
}
}
L106:;
si0=l4;
si1=l5;
sj2=l14;
sj3=l20;
si0=f1070(i,si0,si1,sj2,sj3);
l10=si0;
si1=l10;
sj1=(U64)(si1);
sj1=I64_CTZ(sj1);
l19=sj1;
si1=(U32)(sj1);
si0>>=(si1&31);
si1=1U;
si0>>=(si1&31);
l10=si0;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L98;
}
si0=l12;
si1=l29;
si2=l10;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l10=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
l18=si1;
si0=si0 != si1;
if(si0){
goto L108;
}
si0=l0;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
si2=l12;
si3=3U;
si2<<=(si3&31);
l31=si2;
si0=f15390(i,si0,si1,si2);
l18=si0;
sj0=l19;
sj1=0ULL;
sj2=l14;
sj3=l20;
sj2-=sj3;
l24=sj2;
sj3=l24;
sj4=l14;
si3=sj3 > sj4;
sj1=si3?sj1:sj2;
sj0+=sj1;
l19=sj0;
si0=!(sj0);
if(si0){
goto L97;
}
si0=390U;
si1=391U;
si2=l12;
si3=100U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si0=392U;
si1=393U;
si2=l12;
si3=20U;
si2=si2 < si3;
l25=si2;
si0=si2?si0:si1;
l35=si0;
si0=394U;
si1=395U;
si2=l25;
si0=si2?si0:si1;
l25=si0;
L109:;
{
sj0=l19;
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
sj1=274877906944ULL;
si0=sj0 >= sj1;
if(si0){
goto L112;
}
sj0=l14;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l0=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L113;
}
si0=l4;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l14;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
if(si0){
goto L110;
}
L113:;
sj0=l19;
sj1=-274877906946ULL;
sj0+=sj1;
l24=sj0;
L114:;
{
si0=1190368U;
si1=l11;
si2=l6;
si3=l18;
si4=l12;
si5=l25;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=1190368U;
si1=l18;
si2=l12;
si3=l11;
si4=l6;
si5=l17;
si6=l12;
si7=l21;
si8=l23;
si9=l10;
TF(i->t0,si9,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
sj0=l14;
l19=sj0;
si0=!(sj0);
if(si0){
goto L97;
}
sj0=l24;
sj1=-274877906945ULL;
si0=sj0 <= sj1;
if(si0){
goto L111;
}
sj0=l19;
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
sj1=6ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l0=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L114;
}
si0=l4;
si1=l0;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l14;
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L114;
}
goto L110;
}
L112:;
si0=1198692U;
si1=43U;
si2=1199188U;
f673(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=1198692U;
si1=43U;
si2=1199188U;
f673(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l4;
si1=l5;
sj2=l19;
sj3=l20;
si0=f1070(i,si0,si1,sj2,sj3);
l0=si0;
sj0=(U64)(si0);
sj0=I64_CTZ(sj0);
l24=sj0;
si0=(U32)(sj0);
l36=si0;
sj0=l19;
sj1=l20;
sj2=l19;
sj3=l20;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l14=sj0;
sj1=l24;
si0=sj0 == sj1;
if(si0){
goto L115;
}
sj0=l14;
sj1=l24;
sj0-=sj1;
l14=sj0;
L116:;
{
si0=1190368U;
si1=l11;
si2=l6;
si3=l18;
si4=l12;
si5=l25;
TF(i->t0,si5,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4);
si0=1190368U;
si1=l18;
si2=l12;
si3=l11;
si4=l6;
si5=l17;
si6=l12;
si7=l21;
si8=l23;
si9=l10;
TF(i->t0,si9,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
sj0=l14;
sj1=-1ULL;
sj0+=sj1;
l14=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L116;
}
}
L115:;
si0=l0;
si1=l36;
si0>>=(si1&31);
si1=1U;
si0>>=(si1&31);
l0=si0;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L117;
}
si0=1190368U;
si1=l11;
si2=l6;
si3=l18;
si4=l12;
si5=l29;
si6=l0;
si7=3U;
si6<<=(si7&31);
si5+=si6;
l0=si5;
si5=i32_load(&i->m0,(U64)si5);
si6=l0;
si6=i32_load(&i->m0,(U64)si6+4U);
si7=l35;
TF(i->t0,si7,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6);
si0=1190368U;
si1=l18;
si2=l12;
si3=l11;
si4=l6;
si5=l17;
si6=l12;
si7=l21;
si8=l23;
si9=l10;
TF(i->t0,si9,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
sj0=l24;
sj1=0ULL;
sj2=l19;
sj3=l20;
sj2-=sj3;
l14=sj2;
sj3=l14;
sj4=l19;
si3=sj3 > sj4;
sj1=si3?sj1:sj2;
sj0+=sj1;
l19=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L109;
}
goto L97;
L117:;
}
si0=l0;
si1=l28;
si2=1198036U;
f663(i,si0,si1,si2);
UNREACHABLE;
L108:;
si0=l12;
si1=l18;
si2=1198020U;
f755(i,si0,si1,si2);
UNREACHABLE;
L105:;
si0=1190368U;
si1=35U;
si2=1198084U;
f673(i,si0,si1,si2);
UNREACHABLE;
L100:;
si0=l18;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L99:;
si0=0U;
si1=0U;
si2=1198100U;
f663(i,si0,si1,si2);
UNREACHABLE;
L98:;
si0=l10;
si1=l28;
si2=1198004U;
f663(i,si0,si1,si2);
UNREACHABLE;
L97:;
si0=l6;
si1=l12;
si0=si0 < si1;
if(si0){
goto L121;
}
si0=l11;
si1=l18;
si2=l31;
si0=f15390(i,si0,si1,si2);
l29=si0;
si0=l6;
si1=l12;
si0-=si1;
l10=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L120;
}
si0=l29;
si1=l12;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=0U;
si2=l31;
si0=f15392(i,si0,si1,si2);
l28=si0;
si0=1190368U;
si1=l18;
si2=l12;
si3=l29;
si4=l6;
si5=l17;
si6=l12;
si7=l21;
si8=l23;
si9=l22;
TF(i->t0,si9,void (*)(rustpythonInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l18;
si1=-8U;
si0+=si1;
l23=si0;
si0=l18;
si1=l10;
si0+=si1;
l36=si0;
L124:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L123;
}
si0=l23;
si1=l10;
si0+=si1;
l11=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si1=l17;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
si0=sj0 == sj1;
if(si0){
goto L124;
}
}
sj0=l14;
sj1=l19;
si0=sj0 > sj1;
if(si0){
goto L118;
}
goto L122;
L123:;
si0=l10;
if(si0){
goto L118;
}
L122:;
si0=l12;
si1=1U;
si0&=si1;
l35=si0;
si0=0U;
l23=si0;
si0=0U;
l25=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L119;
}
si0=l12;
si1=-2U;
si0&=si1;
l22=si0;
si0=0U;
l23=si0;
si0=l17;
l11=si0;
si0=l18;
l10=si0;
si0=0U;
l25=si0;
L125:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l23;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l11;
sj3=i64_load(&i->m0,(U64)si3);
l19=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l0=si0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l14;
sj3=l19;
si2=sj2 <= sj3;
sj3=l14;
sj4=l19;
si3=sj3 < sj4;
si4=l23;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l23=si2;
sj2=(U64)(si2);
si3=l11;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l14=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l14;
si0=sj0 <= sj1;
sj1=l24;
sj2=l14;
si1=sj1 < sj2;
si2=l23;
si0=si2?si0:si1;
l23=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l22;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L125;
}
goto L119;
}
L121:;
si0=1190368U;
si1=35U;
si2=1198052U;
f673(i,si0,si1,si2);
UNREACHABLE;
L120:;
si0=l12;
si1=l10;
si2=1198068U;
f666(i,si0,si1,si2);
UNREACHABLE;
L119:;
si0=l35;
si0=!(si0);
if(si0){
goto L118;
}
si0=l18;
si1=l25;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
si2=l23;
sj2=(U64)(si2);
si3=l17;
si4=l10;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L118:;
si0=l32;
si0=!(si0);
if(si0){
goto L126;
}
si0=l30;
f15271(i,si0);
L126:;
si0=l34;
if(si0){
goto L127;
}
si0=l33;
f15271(i,si0);
L127:;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L128;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+48U);
f15271(i,si0);
L128:;
si0=l26;
si0=!(si0);
if(si0){
goto L129;
}
si0=l27;
f15271(i,si0);
L129:;
si0=l12;
si1=99U;
si0=si0 <= si1;
if(si0){
goto L130;
}
si0=l21;
f15271(i,si0);
L130:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si1=l3;
si0=si0 > si1;
l27=si0;
if(si0){
goto L132;
}
si0=l2;
l32=si0;
goto L131;
L132:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l10=si0;
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
l11=si0;
si0=l10;
if(si0){
goto L136;
}
si0=l11;
l32=si0;
goto L135;
L136:;
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L137;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l32=si0;
si0=!(si0);
if(si0){
goto L133;
}
si0=l32;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L134;
L137:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l32=si0;
L135:;
si0=l32;
si0=!(si0);
if(si0){
goto L133;
}
L134:;
si0=l32;
si1=l2;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l9;
l3=si0;
goto L131;
L133:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L131:;
si0=l6;
si1=l9;
si0=si0 < si1;
if(si0){
goto L142;
}
si0=l32;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L143;
}
si0=l5;
si1=1U;
si0=si0 > si1;
if(si0){
goto L141;
}
si0=l5;
si1=1U;
si0=si0 != si1;
if(si0){
goto L140;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=6143ULL;
sj2=3ULL;
sj3=31ULL;
sj4=7ULL;
sj5=l14;
si5=!(sj5);
sj3=si5?sj3:sj4;
sj4=l14;
sj3&=sj4;
l14=sj3;
sj4=6ULL;
si3=sj3 > sj4;
sj1=si3?sj1:sj2;
sj2=4627ULL;
sj3=l14;
sj4=1ULL;
sj3<<=(sj4&63);
sj2>>=(sj3&63);
sj1&=sj2;
sj0*=sj1;
si1=l9;
si2=6U;
si1<<=(si2&31);
si2=0U;
sj3=l16;
si3=(U32)(sj3);
si4=-64U;
si3+=si4;
sj4=l16;
si4=!(sj4);
si2=si4?si2:si3;
si1+=si2;
sj1=(U64)(si1);
si0=sj0 < sj1;
if(si0){
goto L143;
}
si0=l29;
si1=0U;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
goto L138;
L143:;
si0=l9;
si1=l3;
si0=si0 > si1;
if(si0){
goto L139;
}
si0=l29;
si1=l32;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si1=l9;
si2=l4;
si3=l5;
si4=l29;
si5=l9;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l6;
si6=l9;
si5-=si6;
f1374(i,si0,si1,si2,si3,si4,si5);
goto L138;
L142:;
si0=1190368U;
si1=35U;
si2=1198244U;
f673(i,si0,si1,si2);
UNREACHABLE;
L141:;
si0=l29;
si1=0U;
si2=l9;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
goto L138;
L140:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l8;
si2=12U;
si1+=si2;
si2=1191460U;
si3=l8;
si4=24U;
si3+=si4;
si4=1198260U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L139:;
si0=l9;
si1=l3;
si2=1198276U;
f666(i,si0,si1,si2);
UNREACHABLE;
L138:;
si0=l12;
si1=l9;
si0=si0 < si1;
l2=si0;
if(si0){
goto L145;
}
si0=l17;
l0=si0;
goto L144;
L145:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l10=si0;
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
l11=si0;
si0=l10;
if(si0){
goto L149;
}
si0=l11;
l0=si0;
goto L148;
L149:;
si0=l11;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L150;
}
si0=l11;
si1=l10;
si0=f15277(i,si0,si1);
l0=si0;
si0=!(si0);
if(si0){
goto L146;
}
si0=l0;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L147;
L150:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l0=si0;
L148:;
si0=l0;
si0=!(si0);
if(si0){
goto L146;
}
L147:;
si0=l0;
si1=l17;
si2=l31;
si0=f15390(i,si0,si1,si2);
si0=l9;
l13=si0;
goto L144;
L146:;
si0=l11;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L144:;
si0=l6;
si1=l7;
si2=1U;
si1<<=(si2&31);
l30=si1;
si0=si0 < si1;
if(si0){
goto L155;
}
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L154;
}
si0=l9;
si1=l7;
si0=si0 > si1;
if(si0){
goto L153;
}
si0=l9;
si1=l13;
si0=si0 > si1;
if(si0){
goto L152;
}
si0=l29;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si1=l7;
si2=l0;
si3=l9;
si4=l29;
si5=l30;
si6=3U;
si5<<=(si6&31);
si4+=si5;
l3=si4;
si5=l6;
si6=l30;
si5-=si6;
l4=si5;
f1280(i,si0,si1,si2,si3,si4,si5);
si0=l9;
si1=l12;
si2=l9;
si3=l12;
si2=si2 < si3;
si0=si2?si0:si1;
l22=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L151;
}
si0=l22;
si0=!(si0);
if(si0){
goto L156;
}
si0=l22;
si1=1U;
si0&=si1;
l31=si0;
si0=l22;
si1=1U;
si0=si0 != si1;
if(si0){
goto L158;
}
si0=0U;
l21=si0;
si0=0U;
l23=si0;
goto L157;
L158:;
si0=l22;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l21=si0;
si0=l18;
l11=si0;
si0=l29;
l10=si0;
si0=0U;
l23=si0;
L159:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l21;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l11;
sj3=i64_load(&i->m0,(U64)si3);
l19=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l14;
sj3=l19;
si2=sj2 <= sj3;
sj3=l14;
sj4=l19;
si3=sj3 < sj4;
si4=l21;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l21=si2;
sj2=(U64)(si2);
si3=l11;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l14=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l14;
si0=sj0 <= sj1;
sj1=l24;
sj2=l14;
si1=sj1 < sj2;
si2=l21;
si0=si2?si0:si1;
l21=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l5;
si1=l23;
si2=2U;
si1+=si2;
l23=si1;
si0=si0 != si1;
if(si0){
goto L159;
}
}
L157:;
si0=l31;
si0=!(si0);
if(si0){
goto L160;
}
si0=l29;
si1=l23;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l21;
sj2=(U64)(si2);
si3=l18;
si4=l10;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l19=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l19;
si0=sj0 <= sj1;
sj1=l14;
sj2=l19;
si1=sj1 < sj2;
si2=l21;
si0=si2?si0:si1;
l21=si0;
L160:;
si0=l12;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L156;
}
si0=l21;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L156;
}
si0=l29;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L156;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
si1=l22;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l10;
si1=l29;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
L161:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L156;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L161;
}
}
L156:;
si0=l3;
si1=l4;
si2=l26;
si3=l9;
si4=l29;
si5=l9;
f1200(i,si0,si1,si2,si3,si4,si5);
sj0=l16;
si0=!(sj0);
if(si0){
goto L162;
}
si0=l9;
si1=-1U;
si0+=si1;
l10=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L4;
}
sj0=l16;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L162;
}
si0=l3;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=!(sj0);
if(si0){
goto L162;
}
si0=l10;
sj1=l14;
sj2=-1ULL;
sj3=l16;
sj2<<=(sj3&63);
sj3=-1ULL;
sj2^=sj3;
sj1&=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L162:;
si0=l9;
si1=l12;
si0=si0 >= si1;
l11=si0;
if(si0){
goto L164;
}
si0=l12;
si1=l9;
si0=f1359(i,si0,si1);
l25=si0;
goto L163;
L164:;
si0=l9;
si1=l12;
si0=f1359(i,si0,si1);
l25=si0;
L163:;
si0=l25;
if(si0){
goto L166;
}
si0=8U;
l5=si0;
goto L165;
L166:;
si0=l25;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l25;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l25;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l21=si0;
si0=l10;
if(si0){
goto L168;
}
si0=l21;
l5=si0;
goto L167;
L168:;
si0=l21;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L169;
}
si0=l21;
si1=l10;
si0=f15277(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=0U;
si2=l10;
si0=f15392(i,si0,si1,si2);
goto L165;
L169:;
si0=l10;
si1=1U;
si0=f15273(i,si0,si1);
l5=si0;
L167:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
L165:;
si0=l9;
si1=l4;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l12;
si1=l13;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l11;
if(si0){
goto L171;
}
si0=l29;
si1=l30;
si2=l0;
si3=l12;
si4=l3;
si5=l9;
si6=l5;
si7=l25;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L170;
L171:;
si0=l29;
si1=l30;
si2=l3;
si3=l9;
si4=l0;
si5=l12;
si6=l5;
si7=l25;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L170:;
si0=l1;
si1=l7;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l12;
si1=l7;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l36;
si1=l28;
si2=l7;
si3=l12;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l30=si0;
si0=0U;
l21=si0;
si0=l12;
l23=si0;
si0=l18;
l10=si0;
si0=l29;
l11=si0;
L172:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l19=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l19;
si0=sj0 < sj1;
l9=si0;
si0=l21;
si1=255U;
si0&=si1;
if(si0){
goto L174;
}
si0=l9;
l21=si0;
goto L173;
L174:;
si0=l9;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l21=si0;
L173:;
si0=l10;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l23;
si1=-1U;
si0+=si1;
l23=si0;
if(si0){
goto L172;
}
}
si0=l12;
si1=l7;
si0=si0 == si1;
si1=l21;
si2=1U;
si1^=si2;
si0|=si1;
if(si0){
goto L175;
}
si0=l30;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L175;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l12;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l10=si0;
si0=l12;
si1=l18;
si0+=si1;
si1=8U;
si0+=si1;
l12=si0;
L176:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L175;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L176;
}
}
L175:;
si0=l25;
si0=!(si0);
if(si0){
goto L177;
}
si0=l5;
f15271(i,si0);
L177:;
si0=l2;
if(si0){
goto L3;
}
goto L2;
L155:;
si0=1190368U;
si1=35U;
si2=1198292U;
f673(i,si0,si1,si2);
UNREACHABLE;
L154:;
si0=1190368U;
si1=35U;
si2=1198308U;
f673(i,si0,si1,si2);
UNREACHABLE;
L153:;
si0=l9;
si1=l7;
si2=1198324U;
f666(i,si0,si1,si2);
UNREACHABLE;
L152:;
si0=l9;
si1=l13;
si2=1198340U;
f666(i,si0,si1,si2);
UNREACHABLE;
L151:;
si0=l22;
si1=l1;
si2=1198356U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l21;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l9;
si1=l4;
si2=1198388U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l12;
si1=l13;
si2=1198404U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1195996U;
si1=36U;
si2=1196032U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1195944U;
si1=34U;
si2=1195980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l10;
si1=l4;
si2=1198372U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
f15271(i,si0);
L2:;
si0=l27;
si0=!(si0);
if(si0){
goto L1;
}
si0=l32;
f15271(i,si0);
L1:;
si0=l6;
si0=!(si0);
if(si0){
goto L178;
}
si0=l29;
f15271(i,si0);
L178:;
si0=l15;
si0=!(si0);
if(si0){
goto L179;
}
si0=l17;
f15271(i,si0);
L179:;
si0=l8;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

F64 f1090(rustpythonInstance*i,U32 l0,U32 l1) {
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
f1027(i,si0,si1,si2);
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
f1185(i,si0,sd1,sj2);
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
si1=1198672U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=396U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1198684U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1198612U;
f683(i,si0,si1);
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
si0=1198420U;
si1=46U;
si2=1198612U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1190403U;
si1=43U;
si2=1190568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return sd0;
}

void f1091(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
si1=1198924U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=1198900U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l5;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=l3;
si2=l5;
f675(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l3;
si1=l1;
si2=l5;
f666(i,si0,si1,si2);
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
si0=f15391(i,si0,si1,si2);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1092(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l6;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l1;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=l6;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l5;
si1=l6;
si0-=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l8;
si1=l6;
si0-=si1;
l8=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l8;
si1=l6;
si0-=si1;
l11=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l6;
if(si0){
goto L16;
}
si0=0U;
l12=si0;
goto L15;
L17:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l6;
si1=4U;
si0<<=(si1&31);
l13=si0;
si0=0U;
l5=si0;
si0=l4;
l8=si0;
si0=l0;
l10=si0;
si0=0U;
l12=si0;
L18:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l8;
si2=l13;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l14;
si0=sj0 < sj1;
l16=si0;
si0=l12;
si1=255U;
si0&=si1;
if(si0){
goto L20;
}
si0=l16;
l12=si0;
goto L19;
L20:;
si0=l16;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l12=si0;
L19:;
si0=l1;
si1=l5;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l10;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L15:;
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l17=si0;
si1=l12;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l8;
si0+=si1;
si1=l7;
si2=l1;
si3=l4;
si4=l6;
si5=3U;
si4<<=(si5&31);
l8=si4;
si3+=si4;
l5=si3;
si4=l6;
si5=l5;
si6=l8;
si5+=si6;
si6=l6;
si7=3U;
si6<<=(si7&31);
si5+=si6;
si6=l11;
si1=f1080(i,si1,si2,si3,si4,si5,si6);
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=-8U;
si0+=si1;
l12=si0;
si0=l7;
si1=-8U;
si0+=si1;
l16=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l8=si0;
L23:;
{
si0=l8;
si0=!(si0);
if(si0){
goto L22;
}
si0=l12;
si1=l8;
si0+=si1;
l5=si0;
si0=l16;
si1=l8;
si0+=si1;
l10=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si0=sj0 == sj1;
if(si0){
goto L23;
}
}
sj0=l15;
sj1=l14;
si0=sj0 > sj1;
if(si0){
goto L21;
}
goto L6;
L22:;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
L21:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=1U;
l4=si0;
si0=l1;
si1=1U;
si0&=si1;
l11=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=0U;
l16=si0;
sj0=0ULL;
l15=sj0;
goto L24;
L26:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l1;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l12=si0;
si0=l7;
l8=si0;
si0=l0;
l5=si0;
si0=l2;
l10=si0;
si0=0U;
l16=si0;
L27:;
{
si0=l10;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l15;
sj3=l14;
si2=sj2 <= sj3;
sj3=l15;
sj4=l14;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l15;
si0=sj0 <= sj1;
sj1=l18;
sj2=l15;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L27;
}
}
sj0=0ULL;
si1=l12;
sj1=(U64)(si1);
sj0-=sj1;
l15=sj0;
L24:;
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l7;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l15;
sj1+=sj2;
si2=l0;
si3=l8;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L14:;
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
si4=1199684U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=1198932U;
si1=35U;
si2=1199468U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1198932U;
si1=35U;
si2=1199468U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1198932U;
si1=35U;
si2=1199468U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
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
si4=1199668U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1199616U;
si1=35U;
si2=1199652U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l6;
si1=l1;
si2=1199484U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=1U;
si0&=si1;
l11=si0;
si0=0U;
l4=si0;
sj0=0ULL;
l15=sj0;
si0=0U;
l16=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l1;
si1=-2U;
si0&=si1;
l13=si0;
si0=0U;
l12=si0;
si0=l0;
l8=si0;
si0=l7;
l5=si0;
si0=l2;
l10=si0;
si0=0U;
l16=si0;
L29:;
{
si0=l10;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si2=l12;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l5;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l15;
sj3=l14;
si2=sj2 <= sj3;
sj3=l15;
sj4=l14;
si3=sj3 < sj4;
si4=l12;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l12=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l5;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l15;
si0=sj0 <= sj1;
sj1=l18;
sj2=l15;
si1=sj1 < sj2;
si2=l12;
si0=si2?si0:si1;
l12=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=l16;
si2=2U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L29;
}
}
sj0=0ULL;
si1=l12;
sj1=(U64)(si1);
sj0-=sj1;
l15=sj0;
L28:;
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l16;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
si1=l0;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l15;
sj1+=sj2;
si2=l7;
si3=l8;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=0U;
l8=si0;
L30:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l15=sj0;
sj1=l14;
si0=sj0 < sj1;
l5=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L32;
}
si0=l5;
l8=si0;
goto L31;
L32:;
si0=l5;
sj1=l15;
sj2=1ULL;
sj1+=sj2;
l15=sj1;
si1=!(sj1);
si0|=si1;
l8=si0;
L31:;
si0=l0;
sj1=l15;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L30;
}
}
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
sj1=3ULL;
si0=sj0 > sj1;
if(si0){
goto L3;
}
si0=l6;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 <= sj1;
if(si0){
goto L1;
}
si0=1199516U;
si1=33U;
si2=1199552U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1199568U;
si1=29U;
si2=1199600U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l6;
si1=l3;
si2=1199500U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l9;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f1093(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8) {
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
U64 l21=0;
U32 l22=0;
U64 l23=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l9=si0;
i->g0=si0;
si0=l9;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l6;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l5;
si1=l6;
si0-=si1;
l10=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l10;
si1=l6;
si0-=si1;
l11=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l11;
si1=l6;
si0-=si1;
l12=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l6;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=l8;
si2=-1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l13;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l6;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
l10=si0;
si1=l14;
si0+=si1;
l15=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si1=1U;
si0&=si1;
l16=si0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
l17=si0;
sj0=0ULL;
l18=sj0;
goto L15;
L16:;
si0=l6;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l17=si0;
sj0=0ULL;
l18=sj0;
si0=l15;
l14=si0;
si0=l7;
l20=si0;
L17:;
{
si0=l20;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=8U;
si0+=si1;
si1=l14;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l20;
si1=16U;
si0+=si1;
l20=si0;
sj0=l18;
sj1=62ULL;
sj0>>=(sj1&63);
l18=sj0;
si0=l19;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L17;
}
}
L15:;
si0=l16;
si0=!(si0);
if(si0){
goto L18;
}
si0=l7;
si1=l17;
si2=3U;
si1<<=(si2&31);
l14=si1;
si0+=si1;
si1=l15;
si2=l14;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l18=sj0;
L18:;
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l14=si0;
si0=l7;
l20=si0;
si0=l0;
l17=si0;
si0=0U;
l19=si0;
L19:;
{
si0=l20;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l21;
si0=sj0 < sj1;
l16=si0;
si0=l19;
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
si0=l16;
l19=si0;
goto L20;
L21:;
si0=l16;
sj1=l18;
sj2=1ULL;
sj1+=sj2;
l18=sj1;
si1=!(sj1);
si0|=si1;
l19=si0;
L20:;
si0=l1;
si1=l14;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l17;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si1=8U;
si0+=si1;
l20=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si0=l6;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
}
si0=l19;
if(si0){
goto L7;
}
goto L4;
L14:;
si0=1198932U;
si1=35U;
si2=1199700U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1198932U;
si1=35U;
si2=1199700U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1198932U;
si1=35U;
si2=1199700U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1199896U;
si1=29U;
si2=1199928U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
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
si4=1199880U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1198692U;
si1=43U;
si2=1199716U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l9;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l9;
si2=20U;
si1+=si2;
si2=l9;
si3=12U;
si2+=si3;
si3=l9;
si4=24U;
si3+=si4;
si4=1199864U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
l22=si0;
L4:;
si0=l7;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
sj0=0ULL;
l18=sj0;
si0=l11;
si1=l6;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l15;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l12;
si1=1U;
si0&=si1;
l11=si0;
si0=l6;
si1=-3U;
si0*=si1;
si1=1U;
si2=l5;
si1-=si2;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=0U;
l20=si0;
sj0=0ULL;
l18=sj0;
goto L23;
L24:;
si0=l12;
si1=-2U;
si0&=si1;
l17=si0;
si0=0U;
l20=si0;
sj0=0ULL;
l18=sj0;
si0=l16;
l4=si0;
si0=l7;
l14=si0;
L25:;
{
si0=l14;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
sj0=l18;
sj1=62ULL;
sj0>>=(sj1&63);
l18=sj0;
si0=l17;
si1=l20;
si2=2U;
si1+=si2;
l20=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L23:;
si0=l11;
si0=!(si0);
if(si0){
goto L22;
}
si0=l7;
si1=l20;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l16;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l18=sj0;
L22:;
si0=l19;
si1=0U;
si2=l8;
si0=si2?si0:si1;
l19=si0;
si0=l12;
si1=l6;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l19;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l14=si0;
si0=l6;
l20=si0;
si0=l7;
l4=si0;
L27:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l21;
si0=sj0 < sj1;
l17=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L29;
}
si0=l17;
l14=si0;
goto L28;
L29:;
si0=l17;
sj1=l18;
sj2=1ULL;
sj1+=sj2;
l18=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L28:;
si0=l4;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l20;
si1=-1U;
si0+=si1;
l20=si0;
if(si0){
goto L27;
}
}
si0=l14;
si0=!(si0);
if(si0){
goto L1;
}
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
sj0+=sj1;
l18=sj0;
goto L2;
L26:;
si0=l7;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l12;
si2=1U;
si1+=si2;
l16=si1;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l10;
si2=l4;
si1+=si2;
si2=l6;
si3=l16;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
l12=si0;
si0=0U;
l14=si0;
si0=l7;
l4=si0;
si0=l16;
l20=si0;
L30:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l21;
si0=sj0 < sj1;
l17=si0;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L32;
}
si0=l17;
l14=si0;
goto L31;
L32:;
si0=l17;
sj1=l18;
sj2=1ULL;
sj1+=sj2;
l18=sj1;
si1=!(sj1);
si0|=si1;
l14=si0;
L31:;
si0=l4;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l20;
si1=-1U;
si0+=si1;
l20=si0;
if(si0){
goto L30;
}
}
si0=l16;
si1=l6;
si0=si0 == si1;
l10=si0;
si1=l14;
si0&=si1;
l20=si0;
si0=l10;
if(si0){
goto L33;
}
si0=l14;
si1=1U;
si0^=si1;
if(si0){
goto L33;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l20=si0;
sj0=l18;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L33;
}
si0=l6;
si1=5U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0-=si1;
si1=-16U;
si0+=si1;
l10=si0;
si0=l4;
si1=l6;
si2=24U;
si1*=si2;
si0-=si1;
si1=l7;
si0+=si1;
si1=16U;
si0+=si1;
l4=si0;
L34:;
{
si0=l10;
si0=!(si0);
l20=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L33;
}
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=l18;
si0=!(sj0);
if(si0){
goto L34;
}
}
L33:;
si0=l20;
sj0=(U64)(si0);
l18=sj0;
goto L2;
L3:;
si0=l6;
si1=l1;
si2=1199732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l19;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l14=si0;
si1=1U;
si0+=si1;
l20=si0;
si1=3U;
si0&=si1;
l4=si0;
sj0=0ULL;
l18=sj0;
si0=l7;
l10=si0;
si0=l14;
si1=3U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l20;
si1=1073741820U;
si0&=si1;
l14=si0;
sj0=0ULL;
l18=sj0;
si0=l7;
l10=si0;
L36:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l20=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l20=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l18;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
l20=si0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
sj0=l18;
sj1=63ULL;
sj0>>=(sj1&63);
l18=sj0;
si0=l14;
si1=-4U;
si0+=si1;
l14=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l4;
si0=!(si0);
if(si0){
goto L37;
}
L38:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l21;
sj1=63ULL;
sj0>>=(sj1&63);
l18=sj0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l9;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l0;
si1=-8U;
si0+=si1;
l20=si0;
si0=l7;
si1=-8U;
si0+=si1;
l17=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l10=si0;
L48:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L47;
}
si0=l20;
si1=l10;
si0+=si1;
l4=si0;
si0=l17;
si1=l10;
si0+=si1;
l14=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l14;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si0=sj0 == sj1;
if(si0){
goto L48;
}
}
sj0=l18;
sj1=l21;
si0=sj0 > sj1;
if(si0){
goto L46;
}
goto L44;
L47:;
si0=l10;
si0=!(si0);
if(si0){
goto L44;
}
L46:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=1U;
l16=si0;
si0=l1;
si1=1U;
si0&=si1;
l8=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=0U;
l17=si0;
sj0=0ULL;
l18=sj0;
goto L49;
L51:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L50:;
si0=l1;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l20=si0;
si0=l7;
l10=si0;
si0=l0;
l4=si0;
si0=l2;
l14=si0;
si0=0U;
l17=si0;
L52:;
{
si0=l14;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l20;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l18;
sj3=l21;
si2=sj2 <= sj3;
sj3=l18;
sj4=l21;
si3=sj3 < sj4;
si4=l20;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l20=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l18;
si0=sj0 <= sj1;
sj1=l23;
sj2=l18;
si1=sj1 < sj2;
si2=l20;
si0=si2?si0:si1;
l20=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l19;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L52;
}
}
sj0=0ULL;
si1=l20;
sj1=(U64)(si1);
sj0-=sj1;
l18=sj0;
L49:;
si0=l8;
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
si1=l17;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l7;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l18;
sj1+=sj2;
si2=l0;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L43;
L45:;
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
si4=1234772U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L44:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=l1;
si1=1U;
si0&=si1;
l8=si0;
si0=0U;
l16=si0;
sj0=0ULL;
l18=sj0;
si0=0U;
l17=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=l1;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l20=si0;
si0=l0;
l10=si0;
si0=l7;
l4=si0;
si0=l2;
l14=si0;
si0=0U;
l17=si0;
L54:;
{
si0=l14;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si2=l20;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l18;
sj3=l21;
si2=sj2 <= sj3;
sj3=l18;
sj4=l21;
si3=sj3 < sj4;
si4=l20;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l20=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l18;
si0=sj0 <= sj1;
sj1=l23;
sj2=l18;
si1=sj1 < sj2;
si2=l20;
si0=si2?si0:si1;
l20=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l14;
si1=16U;
si0+=si1;
l14=si0;
si0=l19;
si1=l17;
si2=2U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L54;
}
}
sj0=0ULL;
si1=l20;
sj1=(U64)(si1);
sj0-=sj1;
l18=sj0;
L53:;
si0=l8;
si0=!(si0);
if(si0){
goto L43;
}
si0=l2;
si1=l17;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l0;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l18;
sj1+=sj2;
si2=l7;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L43:;
si0=0U;
l10=si0;
L55:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l18=sj0;
sj1=l21;
si0=sj0 < sj1;
l4=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L57;
}
si0=l4;
l10=si0;
goto L56;
L57:;
si0=l4;
sj1=l18;
sj2=1ULL;
sj1+=sj2;
l18=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L56:;
si0=l0;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L55;
}
}
si0=l22;
sj0=i64_load(&i->m0,(U64)si0);
sj1=14ULL;
si0=sj0 > sj1;
if(si0){
goto L41;
}
si0=l6;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=9ULL;
si0=sj0 <= sj1;
if(si0){
goto L39;
}
si0=1199764U;
si1=33U;
si2=1199800U;
f673(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=1199816U;
si1=29U;
si2=1199848U;
f673(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l6;
si1=l3;
si2=1199748U;
f663(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l9;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l16;
L0:;
return si0;
}

U32 f1094(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
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
U64 l24=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=48U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l7;
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=l10;
si2=24U;
si1+=si2;
f1267(i,si0,si1);
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+8U);
l12=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l4;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l12;
si1=l9;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l12;
si0=!(si0);
if(si0){
goto L7;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+16U);
l9=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+4U);
l14=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l14;
si1=l6;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l14;
si1=l1;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l14;
if(si0){
goto L10;
}
si0=0U;
l15=si0;
goto L9;
L12:;
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
L11:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=0U;
l6=si0;
si0=l0;
l5=si0;
si0=0U;
l15=si0;
L13:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l16;
si0=sj0 < sj1;
l18=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L15;
}
si0=l18;
l15=si0;
goto L14;
L15:;
si0=l18;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L14:;
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l14;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L9:;
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si1=l15;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
l20=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l21=si0;
si0=4U;
l18=si0;
L17:;
{
si0=l18;
si1=l12;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l18;
si1=l12;
si2=1200428U;
f663(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l13;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l14;
si0=!(si0);
if(si0){
goto L19;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
l23=si0;
si0=0U;
l6=si0;
si0=l14;
l5=si0;
si0=l0;
l9=si0;
L21:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l16;
si0=sj0 < sj1;
l15=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L23;
}
si0=l15;
l6=si0;
goto L22;
L23:;
si0=l15;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L22:;
si0=l9;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L21;
}
}
si0=l14;
si1=l1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L25;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L25;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l21;
si1=l22;
si0-=si1;
l11=si0;
si0=l20;
si1=l22;
si0+=si1;
l9=si0;
L26:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L26;
}
goto L19;
}
L25:;
si0=l9;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
L24:;
si0=1200444U;
si1=78U;
si2=1200524U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l18;
si1=2U;
si0+=si1;
l18=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L17;
}
goto L1;
}
L16:;
si0=l7;
si1=l1;
si2=1199976U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=0U;
si1=0U;
si2=1199960U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
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
si4=1200540U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=20U;
si1+=si2;
si2=l10;
si3=l10;
si4=24U;
si3+=si4;
si4=1200556U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l10;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l10;
si1=1198996U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=1198900U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l10;
si1=24U;
si0+=si1;
si1=1199944U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l10;
si2=20U;
si1+=si2;
si2=l10;
si3=l10;
si4=24U;
si3+=si4;
si4=1200572U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1200588U;
si1=28U;
si2=1200616U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l13;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0+8U);
l11=si0;
si0=l10;
si1=l13;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l14=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l14;
si1=l6;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l14;
si1=l1;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l14;
if(si0){
goto L30;
}
si0=0U;
l15=si0;
goto L29;
L32:;
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
L31:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=0U;
l6=si0;
si0=l8;
l5=si0;
si0=0U;
l15=si0;
L33:;
{
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l16;
si0=sj0 < sj1;
l18=si0;
si0=l15;
si1=255U;
si0&=si1;
if(si0){
goto L35;
}
si0=l18;
l15=si0;
goto L34;
L35:;
si0=l18;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l15=si0;
L34:;
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l5;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l14;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L33;
}
}
L29:;
si0=l8;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l15;
sj1=(U64)(si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=6U;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=l8;
si1=8U;
si0+=si1;
l20=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=-8U;
si0+=si1;
l21=si0;
si0=5U;
l18=si0;
L37:;
{
si0=l18;
si1=l12;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l18;
si1=l12;
si2=1200312U;
f663(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l13;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l14;
si0=!(si0);
if(si0){
goto L39;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l14;
si2=3U;
si1<<=(si2&31);
l22=si1;
si0+=si1;
l23=si0;
si0=0U;
l6=si0;
si0=l14;
l5=si0;
si0=l8;
l9=si0;
L41:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l16;
si0=sj0 < sj1;
l15=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L43;
}
si0=l15;
l6=si0;
goto L42;
L43:;
si0=l15;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L42:;
si0=l9;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L41;
}
}
si0=l14;
si1=l1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L45;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L45;
}
si0=l23;
si1=l23;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L39;
}
si0=l21;
si1=l22;
si0-=si1;
l11=si0;
si0=l20;
si1=l22;
si0+=si1;
l9=si0;
L46:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L44;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L46;
}
goto L39;
}
L45:;
si0=l9;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L39;
}
L44:;
si0=1200328U;
si1=82U;
si2=1200412U;
f673(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l18;
si1=2U;
si0+=si1;
l18=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L37;
}
}
L36:;
si0=l12;
si1=l4;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l4;
si1=l12;
si2=1199992U;
f663(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l1;
si1=l1;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l13;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l18=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l18;
si0=!(si0);
if(si0){
goto L47;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l8;
si1=l0;
si2=l4;
si3=1U;
si2&=si3;
si0=si2?si0:si1;
l14=si0;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=0U;
l6=si0;
si0=l18;
l5=si0;
si0=l14;
l9=si0;
L49:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l16;
si0=sj0 < sj1;
l15=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L51;
}
si0=l15;
l6=si0;
goto L50;
L51:;
si0=l15;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L50:;
si0=l9;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L49;
}
}
si0=l18;
si1=l1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L53;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L53;
}
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L47;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l18;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=l14;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
L54:;
{
si0=l11;
si0=!(si0);
if(si0){
goto L52;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L54;
}
goto L47;
}
L53:;
si0=l9;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L47;
}
L52:;
si0=1200144U;
si1=151U;
si2=1200296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l0;
si1=-8U;
si0+=si1;
l5=si0;
si0=l8;
si1=-8U;
si0+=si1;
l15=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l9=si0;
L63:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L62;
}
si0=l5;
si1=l9;
si0+=si1;
l11=si0;
si0=l15;
si1=l9;
si0+=si1;
l6=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
si0=sj0 == sj1;
if(si0){
goto L63;
}
}
sj0=l17;
sj1=l16;
si0=sj0 > sj1;
if(si0){
goto L61;
}
goto L60;
L62:;
si0=l9;
si0=!(si0);
if(si0){
goto L60;
}
L61:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L66;
}
si0=1U;
l14=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L58;
}
si0=l1;
si1=1U;
si0&=si1;
l12=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L65;
}
si0=0U;
l15=si0;
sj0=0ULL;
l17=sj0;
goto L64;
L66:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l1;
si1=-2U;
si0&=si1;
l18=si0;
si0=0U;
l5=si0;
si0=l8;
l9=si0;
si0=l0;
l11=si0;
si0=l2;
l6=si0;
si0=0U;
l15=si0;
L67:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l17;
sj3=l16;
si2=sj2 <= sj3;
sj3=l17;
sj4=l16;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l17;
si0=sj0 <= sj1;
sj1=l24;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l18;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L67;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L64:;
si0=l12;
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si1=l15;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l8;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1+=sj2;
si2=l0;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L59;
L60:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l1;
if(si0){
goto L68;
}
si0=0U;
l14=si0;
goto L58;
L68:;
si0=l1;
si1=1U;
si0&=si1;
l12=si0;
si0=0U;
l14=si0;
sj0=0ULL;
l17=sj0;
si0=0U;
l15=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=l1;
si1=-2U;
si0&=si1;
l18=si0;
si0=0U;
l5=si0;
si0=l0;
l9=si0;
si0=l8;
l11=si0;
si0=l2;
l6=si0;
si0=0U;
l15=si0;
L70:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l16=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l24=sj1;
sj2=l17;
sj3=l16;
si2=sj2 <= sj3;
sj3=l17;
sj4=l16;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l24;
sj1=l17;
si0=sj0 <= sj1;
sj1=l24;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l18;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L69:;
si0=l12;
si0=!(si0);
if(si0){
goto L59;
}
si0=l2;
si1=l15;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l0;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1+=sj2;
si2=l8;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L59:;
si0=l1;
si0=!(si0);
if(si0){
goto L58;
}
si0=0U;
l9=si0;
L71:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l16;
si0=sj0 < sj1;
l11=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L73;
}
si0=l11;
l9=si0;
goto L72;
L73:;
si0=l11;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L72:;
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L71;
}
}
L58:;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
si1=l4;
sj1=(U64)(si1);
l17=sj1;
si0=sj0 > sj1;
if(si0){
goto L56;
}
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L55;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l17;
sj2=1ULL;
sj1>>=(sj2&63);
sj2=1ULL;
sj1+=sj2;
si0=sj0 > sj1;
if(si0){
goto L74;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L75;
}
si0=l13;
f15271(i,si0);
L75:;
si0=l10;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l14;
goto L0;
L74:;
si0=1200024U;
si1=49U;
si2=1200076U;
f673(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=1200092U;
si1=34U;
si2=1200128U;
f673(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=l7;
si1=l3;
si2=1200008U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1095(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
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
U64 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=63U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=l7;
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l10;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l10;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l7;
si0=!(si0);
if(si0){
goto L13;
}
si0=l10;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l10;
si1=8U;
si0+=si1;
si1=l10;
si2=40U;
si1+=si2;
f1267(i,si0,si1);
si0=l10;
si1=l10;
si1=i32_load(&i->m0,(U64)si1+16U);
l12=si1;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l4;
si2=1U;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l12;
si1=l9;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l12;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=-2U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+4U);
l14=si0;
si1=l13;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l15=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
l9=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=-1U;
si0+=si1;
l16=si0;
si1=l14;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l14;
if(si0){
goto L18;
}
si0=0U;
l6=si0;
sj0=0ULL;
l17=sj0;
goto L17;
L18:;
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l13;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l14;
si1=1U;
si0&=si1;
l19=si0;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=0U;
l5=si0;
sj0=0ULL;
l17=sj0;
goto L19;
L20:;
si0=l14;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l17=sj0;
si0=l18;
l9=si0;
si0=l0;
l6=si0;
L21:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
sj0=l22;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l20;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L21;
}
}
L19:;
si0=l19;
si0=!(si0);
if(si0){
goto L22;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l18;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
L22:;
si0=0U;
l6=si0;
si0=l14;
l5=si0;
si0=l0;
l9=si0;
L23:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l20=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L25;
}
si0=l20;
l6=si0;
goto L24;
L25:;
si0=l20;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L24:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L23;
}
}
L17:;
sj0=l17;
si1=l6;
sj1=(U64)(si1);
sj0+=sj1;
l21=sj0;
si0=l14;
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l15;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=l14;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l16;
si1=l18;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l18;
si1=l14;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l16;
si1=l14;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l19=si0;
si1=l15;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si2=l9;
si1+=si2;
l15=si1;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=l21;
sj1+=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l9=si0;
sj0=l21;
sj1=l22;
si0=sj0 >= sj1;
if(si0){
goto L27;
}
si0=l14;
si1=-1U;
si0^=si1;
si1=l18;
si0+=si1;
l5=si0;
si0=l1;
si1=l14;
si0-=si1;
si1=-2U;
si0+=si1;
l20=si0;
si0=l11;
si1=l14;
si2=3U;
si1<<=(si2&31);
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
l11=si0;
si0=l0;
si1=l9;
si0+=si1;
l6=si0;
si0=0U;
l9=si0;
sj0=1ULL;
l21=sj0;
L28:;
{
si0=l5;
si1=l9;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l20;
si1=l9;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l22=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
sj0=l22;
si0=!(sj0);
if(si0){
goto L28;
}
}
L27:;
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
si0=l9;
si1=l18;
si2=l14;
si1-=si2;
l6=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l19;
si1=l11;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l15;
si2=l9;
si1+=si2;
si2=l6;
si3=l11;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
sj0=0ULL;
l21=sj0;
L26:;
sj0=l21;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
l21=sj0;
goto L1;
L16:;
si0=1201072U;
si1=29U;
si2=1201104U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1200996U;
si1=60U;
si2=1201056U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=24U;
si1+=si2;
si2=l10;
si3=8U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1200980U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=l10;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
si1=1198996U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l10;
si1=1198900U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l10;
si1=40U;
si0+=si1;
si1=1200648U;
f683(i,si0,si1);
UNREACHABLE;
L12:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=24U;
si1+=si2;
si2=l10;
si3=8U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1200964U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=36U;
si1+=si2;
si2=l10;
si3=24U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1200948U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l4;
si1=l12;
si2=1200664U;
f663(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1198692U;
si1=43U;
si2=1200680U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l14;
si1=l9;
si2=1200696U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l14;
si1=l16;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si1=l12;
si2=1200696U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l14;
si1=l18;
si2=1200712U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1195692U;
si1=34U;
si2=1195728U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l16;
si1=l14;
si0-=si1;
l9=si0;
si1=l9;
si2=1195660U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l11;
si1=l6;
si2=1195676U;
f675(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l4;
si1=-4U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l1;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l18=si0;
si1=1U;
si0+=si1;
l9=si0;
si1=1073741820U;
si0&=si1;
l19=si0;
si0=l9;
si1=3U;
si0&=si1;
l15=si0;
L31:;
{
sj0=l21;
sj1=2ULL;
sj0<<=(sj1&63);
l17=sj0;
si0=l13;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l20=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L34;
}
si0=l9;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
sj0=0ULL;
l21=sj0;
si0=l0;
l9=si0;
si0=l18;
si1=3U;
si0=si0 < si1;
if(si0){
goto L35;
}
sj0=0ULL;
l21=sj0;
si0=l19;
l6=si0;
si0=l0;
l9=si0;
L36:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L36;
}
}
L35:;
si0=l15;
si0=!(si0);
if(si0){
goto L37;
}
si0=l15;
l6=si0;
L38:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l22;
sj1=62ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L38;
}
}
L37:;
si0=l10;
si1=l16;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l20;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l16;
si1=l20;
si0=si0 != si1;
if(si0){
goto L33;
}
sj0=l21;
sj1=l17;
sj0|=sj1;
l17=sj0;
si0=0U;
l6=si0;
si0=l16;
l5=si0;
si0=l0;
l9=si0;
L39:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l20=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L41;
}
si0=l20;
l6=si0;
goto L40;
L41:;
si0=l20;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L40:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L39;
}
goto L32;
}
L34:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l20;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l20;
if(si0){
goto L33;
}
si0=0U;
l6=si0;
goto L32;
L33:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=36U;
si1+=si2;
si2=l10;
si3=24U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1196048U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L32:;
sj0=l17;
si1=l6;
sj1=(U64)(si1);
sj0+=sj1;
l21=sj0;
si0=l14;
si1=2U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l14;
si1=-2U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L31;
}
}
L30:;
si0=l14;
si1=l12;
si2=1200728U;
f663(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l0;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=l1;
si0=si2?si0:si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-1U;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l4;
si1=-3U;
si0+=si1;
l11=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l13;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l16;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l13;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=l9;
if(si0){
goto L48;
}
sj0=0ULL;
l17=sj0;
goto L47;
L48:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l9;
si1=1U;
si0&=si1;
l18=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=0U;
l5=si0;
sj0=0ULL;
l17=sj0;
goto L49;
L50:;
si0=l9;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l17=sj0;
si0=l15;
l9=si0;
si0=l8;
l11=si0;
L51:;
{
si0=l11;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
sj0=l22;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
si0=l20;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L51;
}
}
L49:;
si0=l18;
si0=!(si0);
if(si0){
goto L47;
}
si0=l8;
si1=l5;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l15;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l17;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l17=sj0;
L47:;
si0=l6;
si1=l16;
si0=si0 > si1;
if(si0){
goto L45;
}
si0=l6;
if(si0){
goto L53;
}
si0=0U;
l5=si0;
goto L52;
L53:;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=0U;
l5=si0;
si0=l8;
l9=si0;
L54:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l20=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L56;
}
si0=l20;
l5=si0;
goto L55;
L56:;
si0=l20;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L55:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L54;
}
}
L52:;
sj0=l17;
si1=l5;
sj1=(U64)(si1);
sj0+=sj1;
l21=sj0;
si0=l4;
si1=4U;
si0=si0 <= si1;
if(si0){
goto L42;
}
si0=l4;
si1=-5U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=l1;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l18=si0;
si1=1U;
si0+=si1;
l9=si0;
si1=1073741820U;
si0&=si1;
l19=si0;
si0=l9;
si1=3U;
si0&=si1;
l15=si0;
L58:;
{
sj0=l21;
sj1=2ULL;
sj0<<=(sj1&63);
l17=sj0;
si0=l13;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=l16;
si0=!(si0);
if(si0){
goto L61;
}
sj0=0ULL;
l21=sj0;
si0=l8;
l9=si0;
si0=l18;
si1=3U;
si0=si0 < si1;
if(si0){
goto L62;
}
sj0=0ULL;
l21=sj0;
si0=l19;
l11=si0;
si0=l8;
l9=si0;
L63:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l6=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l6=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l6=si0;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=62ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l21;
sj1=62ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L63;
}
}
L62:;
si0=l15;
si0=!(si0);
if(si0){
goto L64;
}
si0=l15;
l11=si0;
L65:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=2ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l22;
sj1=62ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L65;
}
}
L64:;
si0=l20;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l10;
si1=l16;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l16;
si1=l5;
si0=si0 != si1;
if(si0){
goto L60;
}
sj0=l21;
sj1=l17;
sj0|=sj1;
l17=sj0;
si0=0U;
l6=si0;
si0=l16;
l5=si0;
si0=l8;
l9=si0;
L66:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l20=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L68;
}
si0=l20;
l6=si0;
goto L67;
L68:;
si0=l20;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L67:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L66;
}
goto L59;
}
L61:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l10;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
if(si0){
goto L60;
}
si0=0U;
l6=si0;
goto L59;
L60:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=36U;
si1+=si2;
si2=l10;
si3=24U;
si2+=si3;
si3=l10;
si4=40U;
si3+=si4;
si4=1196048U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L59:;
sj0=l17;
si1=l6;
sj1=(U64)(si1);
sj0+=sj1;
l21=sj0;
si0=l14;
si1=2U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=l14;
si1=-2U;
si0+=si1;
l14=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L58;
}
}
L57:;
si0=l14;
si1=l12;
si2=1200776U;
f663(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l11;
si1=l12;
si2=1200760U;
f663(i,si0,si1,si2);
UNREACHABLE;
L45:;
si0=l6;
si1=l16;
si2=1200632U;
f666(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l9;
si1=l16;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l9;
si1=l12;
si2=1200744U;
f663(i,si0,si1,si2);
UNREACHABLE;
L42:;
si0=l8;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l8;
si2=l4;
si3=1U;
si2&=si3;
l14=si2;
si0=si2?si0:si1;
l9=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l6=si0;
si1=1U;
si0+=si1;
l5=si0;
si1=3U;
si0&=si1;
l11=si0;
si0=l6;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L70;
}
sj0=0ULL;
l21=sj0;
goto L69;
L70:;
si0=l5;
si1=1073741820U;
si0&=si1;
l6=si0;
sj0=0ULL;
l21=sj0;
L71:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l22;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l5=si0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l17;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l22;
sj1=63ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L71;
}
}
L69:;
si0=l11;
si0=!(si0);
if(si0){
goto L72;
}
L73:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l22;
sj1=63ULL;
sj0>>=(sj1&63);
l21=sj0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
if(si0){
goto L73;
}
}
L72:;
si0=l10;
sj1=l21;
i64_store(&i->m0,(U64)si0+24U,sj1);
sj0=l22;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L76;
}
si0=l0;
si1=-8U;
si0+=si1;
l5=si0;
si0=l8;
si1=-8U;
si0+=si1;
l20=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l9=si0;
L79:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L78;
}
si0=l5;
si1=l9;
si0+=si1;
l11=si0;
si0=l20;
si1=l9;
si0+=si1;
l6=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l22=sj1;
si0=sj0 == sj1;
if(si0){
goto L79;
}
}
sj0=l21;
sj1=l22;
si0=sj0 > sj1;
if(si0){
goto L77;
}
goto L75;
L78:;
si0=l9;
si0=!(si0);
if(si0){
goto L75;
}
L77:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L82;
}
si0=1U;
l15=si0;
si0=l1;
si1=1U;
si0&=si1;
l4=si0;
si0=l16;
if(si0){
goto L81;
}
si0=0U;
l20=si0;
sj0=0ULL;
l21=sj0;
goto L80;
L82:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l1;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l5=si0;
si0=l8;
l9=si0;
si0=l0;
l11=si0;
si0=l2;
l6=si0;
si0=0U;
l20=si0;
L83:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l21;
si0=sj0 <= sj1;
sj1=l17;
sj2=l21;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l16;
si1=l20;
si2=2U;
si1+=si2;
l20=si1;
si0=si0 != si1;
if(si0){
goto L83;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l21=sj0;
L80:;
si0=l4;
si0=!(si0);
if(si0){
goto L74;
}
si0=l2;
si1=l20;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l8;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l21;
sj1+=sj2;
si2=l0;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L74;
L76:;
si0=l10;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l10;
si2=24U;
si1+=si2;
si2=1199328U;
si3=l10;
si4=40U;
si3+=si4;
si4=1200932U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L75:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L86;
}
si0=l1;
si1=1U;
si0&=si1;
l4=si0;
si0=0U;
l15=si0;
si0=l16;
if(si0){
goto L85;
}
sj0=0ULL;
l21=sj0;
si0=0U;
l20=si0;
goto L84;
L86:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l1;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l5=si0;
si0=l0;
l9=si0;
si0=l8;
l11=si0;
si0=l2;
l6=si0;
si0=0U;
l20=si0;
L87:;
{
si0=l6;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
l22=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l21;
sj3=l22;
si2=sj2 <= sj3;
sj3=l21;
sj4=l22;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l21=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l21;
si0=sj0 <= sj1;
sj1=l17;
sj2=l21;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l16;
si1=l20;
si2=2U;
si1+=si2;
l20=si1;
si0=si0 != si1;
if(si0){
goto L87;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l21=sj0;
L84:;
si0=l4;
si0=!(si0);
if(si0){
goto L74;
}
si0=l2;
si1=l20;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l0;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l21;
sj1+=sj2;
si2=l8;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L74:;
si0=0U;
l11=si0;
si0=l1;
l6=si0;
si0=l0;
l9=si0;
L88:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l21=sj0;
sj1=l22;
si0=sj0 < sj1;
l5=si0;
si0=l11;
si1=255U;
si0&=si1;
if(si0){
goto L90;
}
si0=l5;
l11=si0;
goto L89;
L90:;
si0=l5;
sj1=l21;
sj2=1ULL;
sj1+=sj2;
l21=sj1;
si1=!(sj1);
si0|=si1;
l11=si0;
L89:;
si0=l9;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L88;
}
}
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L94;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
si2=l12;
si3=63U;
si2&=si3;
l9=si2;
sj2=(U64)(si2);
l21=sj2;
sj1<<=(sj2&63);
sj2=-1ULL;
sj1^=sj2;
si0=sj0 >= sj1;
if(si0){
goto L93;
}
si0=l9;
si1=63U;
si0=si0 == si1;
if(si0){
goto L92;
}
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L91;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
sj2=l21;
sj1<<=(sj2&63);
sj2=3ULL;
sj1=DIV_U(sj1,sj2);
si0=sj0 < sj1;
if(si0){
goto L92;
}
si0=1200824U;
si1=40U;
si2=1200864U;
f673(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l7;
si1=l1;
si2=1200792U;
f663(i,si0,si1,si2);
UNREACHABLE;
L93:;
si0=1200880U;
si1=36U;
si2=1200916U;
f673(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L95;
}
si0=l13;
f15271(i,si0);
L95:;
si0=l10;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l14;
si1=0U;
si0=si0 != si1;
si1=l15;
si0^=si1;
goto L0;
L91:;
si0=l7;
si1=l3;
si2=1200808U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f1096(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U64 l8,U32 l9,U32 l10) {
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U64 l23=0;
U32 l24=0;
U64 l25=0;
U64 l26=0;
U32 l27=0;
U64 l28=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=48U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l4;
sj0=(U64)(si0);
sj1=l8;
sj0*=sj1;
l12=sj0;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L13;
}
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=l7;
si2=1U;
si1+=si2;
l13=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l13;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=l6;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=l11;
si2=24U;
si1+=si2;
f1267(i,si0,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+8U);
l14=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l4;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l14;
si1=l10;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l14;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l17=si0;
si0=l15;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+16U);
l18=si0;
si0=l11;
sj1=l8;
sj2=1ULL;
sj1<<=(sj2&63);
l19=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l19;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l19;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L18;
}
si0=l10;
si1=l1;
si2=-1U;
si1+=si2;
l20=si1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
si1=l20;
si2=3U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
l22=si0;
sj0=0ULL;
l23=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L15;
}
si0=l10;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
sj1=l19;
sj0-=sj1;
sj1=62ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L16;
L18:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l9;
l13=si0;
L19:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l19;
sj1<<=(sj2&63);
sj2=l26;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L19;
}
}
L16:;
si0=l24;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l19;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L15:;
si0=l22;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
si1=l15;
si1=i32_load(&i->m0,(U64)si1+4U);
l13=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l20;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l13;
si1=l20;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l20;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l18=si0;
si0=l9;
l13=si0;
si0=l20;
l6=si0;
si0=l0;
l5=si0;
L20:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l24=si0;
si0=l18;
si1=255U;
si0&=si1;
if(si0){
goto L22;
}
si0=l24;
l18=si0;
goto L21;
L22:;
si0=l24;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l18=si0;
L21:;
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L20;
}
}
si0=l18;
if(si0){
goto L2;
}
goto L1;
L14:;
si0=1201072U;
si1=29U;
si2=1201348U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1201280U;
si1=50U;
si2=1201332U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=16U;
si1+=si2;
si2=l11;
si3=l11;
si4=24U;
si3+=si4;
si4=1201264U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l11;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=1198996U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l11;
si1=1198900U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=24U;
si0+=si1;
si1=1201120U;
f683(i,si0,si1);
UNREACHABLE;
L10:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=16U;
si1+=si2;
si2=l11;
si3=l11;
si4=24U;
si3+=si4;
si4=1201248U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=12U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=24U;
si3+=si4;
si4=1201232U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l4;
si1=l14;
si2=1201136U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1198692U;
si1=43U;
si2=1201152U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=24U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l10;
si1=l20;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=12U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=24U;
si3+=si4;
si4=1195856U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l20;
si1=l20;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=5U;
si0=si0 < si1;
if(si0){
goto L23;
}
sj0=l8;
sj1=2ULL;
sj0<<=(sj1&63);
l26=sj0;
si0=4U;
l24=si0;
L24:;
{
si0=l24;
si1=l14;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l24;
si1=l14;
si2=1201216U;
f663(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l15;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l11;
sj1=l26;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l26;
si0=!(sj0);
if(si0){
goto L28;
}
sj0=l26;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L32;
}
si0=l10;
si1=l20;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l10;
if(si0){
goto L33;
}
sj0=0ULL;
l23=sj0;
goto L29;
L33:;
si0=l10;
si1=1U;
si0&=si1;
l27=si0;
sj0=0ULL;
sj1=l26;
sj0-=sj1;
sj1=62ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L30;
L32:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l9;
l13=si0;
L34:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l28;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L34;
}
}
L30:;
si0=l27;
si0=!(si0);
if(si0){
goto L29;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L29:;
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si0=!(si0);
if(si0){
goto L26;
}
si0=0U;
l6=si0;
si0=l20;
l5=si0;
si0=l0;
l10=si0;
si0=l9;
l13=si0;
L35:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l18=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L37;
}
si0=l18;
l6=si0;
goto L36;
L37:;
si0=l18;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L36:;
si0=l10;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L35;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L26;
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L26;
L28:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=24U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l10;
si1=l20;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L26:;
sj0=l26;
sj1=l19;
sj0+=sj1;
l26=sj0;
si0=l24;
si1=2U;
si0+=si1;
l24=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L23:;
si0=l15;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+8U);
l18=si0;
si0=l11;
sj1=l8;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l8;
si0=!(sj0);
if(si0){
goto L53;
}
sj0=l8;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L57;
}
si0=l10;
si1=l20;
si0=si0 > si1;
if(si0){
goto L52;
}
si0=l9;
si1=l21;
si0+=si1;
si1=0U;
si2=l1;
si0=si2?si0:si1;
l22=si0;
sj0=0ULL;
l23=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L54;
}
si0=l10;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
sj1=l8;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L55;
L57:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L56:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l9;
l13=si0;
L58:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l26;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L58;
}
}
L55:;
si0=l24;
si0=!(si0);
if(si0){
goto L54;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L54:;
si0=l22;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L61;
}
sj0=l8;
sj1=3ULL;
sj0*=sj1;
l26=sj0;
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l20;
si1=l7;
si0=si0 != si1;
if(si0){
goto L60;
}
si0=3U;
l24=si0;
L62:;
{
si0=l24;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L59;
}
si0=l15;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l11;
sj1=l26;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l26;
si0=!(sj0);
if(si0){
goto L41;
}
sj0=l26;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L45;
}
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l10;
if(si0){
goto L64;
}
sj0=0ULL;
l23=sj0;
goto L63;
L64:;
si0=l10;
si1=1U;
si0&=si1;
l27=si0;
sj0=0ULL;
sj1=l26;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L66;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L65;
L66:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l2;
l13=si0;
L67:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l28;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L67;
}
}
L65:;
si0=l27;
si0=!(si0);
if(si0){
goto L63;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L63:;
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l20;
si0=!(si0);
if(si0){
goto L68;
}
si0=0U;
l6=si0;
si0=l7;
l5=si0;
si0=l9;
l10=si0;
si0=l2;
l13=si0;
L69:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l18=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L71;
}
si0=l18;
l6=si0;
goto L70;
L71:;
si0=l18;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L70:;
si0=l10;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L69;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L68;
}
si0=l22;
si1=l22;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L68:;
sj0=l26;
sj1=l19;
sj0+=sj1;
l26=sj0;
si0=l24;
si1=2U;
si0+=si1;
l24=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L62;
}
}
L61:;
si0=l15;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l16;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l11;
sj1=l12;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l12;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L51;
}
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L50;
}
si0=l10;
if(si0){
goto L73;
}
sj0=0ULL;
l23=sj0;
goto L72;
L73:;
si0=l10;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
sj1=l12;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l25=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L75;
}
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
goto L74;
L75:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l23=sj0;
si0=l18;
l10=si0;
si0=l2;
l13=si0;
L76:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l26;
sj3=l25;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l23;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L76;
}
}
L74:;
si0=l24;
si0=!(si0);
if(si0){
goto L72;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l12;
sj1<<=(sj2&63);
sj2=l23;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l25;
sj0>>=(sj1&63);
l23=sj0;
L72:;
si0=l17;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l2;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=0U;
l6=si0;
si0=l9;
si1=l0;
si2=l4;
si3=1U;
si2&=si3;
si0=si2?si0:si1;
l22=si0;
l10=si0;
si0=l2;
l13=si0;
si0=l17;
si1=1U;
si0+=si1;
l24=si0;
l5=si0;
L77:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l18=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L79;
}
si0=l18;
l6=si0;
goto L78;
L79:;
si0=l18;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L78:;
si0=l10;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L77;
}
}
si0=l24;
si1=l1;
si0=si0 == si1;
si1=l6;
si2=1U;
si1^=si2;
si0|=si1;
if(si0){
goto L80;
}
si0=l22;
si1=l24;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L80;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l17;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-16U;
si0+=si1;
l13=si0;
si0=l10;
si1=l22;
si0+=si1;
si1=16U;
si0+=si1;
l10=si0;
L81:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L80;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l23=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l23;
si0=!(sj0);
if(si0){
goto L81;
}
}
L80:;
si0=l0;
si1=-8U;
si0+=si1;
l5=si0;
si0=l9;
si1=-8U;
si0+=si1;
l18=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l10=si0;
L84:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L83;
}
si0=l5;
si1=l10;
si0+=si1;
l13=si0;
si0=l18;
si1=l10;
si0+=si1;
l6=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l23=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
si0=sj0 == sj1;
if(si0){
goto L84;
}
}
sj0=l23;
sj1=l25;
si0=sj0 > sj1;
if(si0){
goto L82;
}
goto L39;
L83:;
si0=l10;
si0=!(si0);
if(si0){
goto L39;
}
L82:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L87;
}
si0=1U;
l24=si0;
si0=l1;
si1=1U;
si0&=si1;
l22=si0;
si0=l20;
if(si0){
goto L86;
}
si0=0U;
l18=si0;
sj0=0ULL;
l23=sj0;
goto L85;
L87:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=l1;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l5=si0;
si0=l9;
l10=si0;
si0=l0;
l13=si0;
si0=l2;
l6=si0;
si0=0U;
l18=si0;
L88:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l25=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l23;
sj3=l25;
si2=sj2 <= sj3;
sj3=l23;
sj4=l25;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l23;
si0=sj0 <= sj1;
sj1=l26;
sj2=l23;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l20;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L88;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l23=sj0;
L85:;
si0=l22;
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l9;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1+=sj2;
si2=l0;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L38;
L60:;
si0=3U;
l24=si0;
si0=l14;
si1=3U;
si0=si0 > si1;
if(si0){
goto L46;
}
L59:;
si0=l24;
si1=l14;
si2=1201184U;
f663(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=24U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L52:;
si0=l10;
si1=l20;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L51:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=24U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L50:;
si0=l10;
si1=l3;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L49:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l17;
si1=l3;
si2=1201168U;
f663(i,si0,si1,si2);
UNREACHABLE;
L47:;
si0=l22;
si1=l2;
si2=l3;
si3=l15;
si3=i32_load(&i->m0,(U64)si3+24U);
si4=l15;
si5=28U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
sj5=l26;
sj1=f1244(i,si1,si2,si3,si4,sj5);
si2=l22;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
si2=1201200U;
f666(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l15;
si1=28U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l15;
si0=i32_load(&i->m0,(U64)si0+24U);
l18=si0;
si0=l11;
sj1=l26;
i64_store(&i->m0,(U64)si0+16U,sj1);
sj0=l26;
si0=!(sj0);
if(si0){
goto L41;
}
sj0=l26;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L45;
}
si0=l10;
si1=l3;
si0=si0 > si1;
if(si0){
goto L40;
}
sj0=0ULL;
l25=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L42;
}
si0=l10;
si1=1U;
si0&=si1;
l0=si0;
sj0=0ULL;
sj1=l26;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l28=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=0U;
l6=si0;
sj0=0ULL;
l25=sj0;
goto L43;
L45:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l25=sj0;
si0=l18;
l10=si0;
si0=l2;
l13=si0;
L89:;
{
si0=l13;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l25;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l25=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l19;
sj3=l28;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
sj0=l25;
sj1=l28;
sj0>>=(sj1&63);
l25=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L89;
}
}
L43:;
si0=l0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l18;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l19=sj1;
sj2=l26;
sj1<<=(sj2&63);
sj2=l25;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l19;
sj1=l28;
sj0>>=(sj1&63);
l25=sj0;
L42:;
si0=l22;
sj1=l23;
sj2=l25;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=l20;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si1=l11;
si2=12U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=24U;
si3+=si4;
si4=1196048U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L41:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l11;
si2=16U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=24U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L40:;
si0=l10;
si1=l3;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l1;
si1=1U;
si0&=si1;
l22=si0;
si0=0U;
l24=si0;
si0=l20;
if(si0){
goto L91;
}
sj0=0ULL;
l23=sj0;
si0=0U;
l18=si0;
goto L90;
L92:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L91:;
si0=l1;
si1=-2U;
si0&=si1;
l20=si0;
si0=0U;
l5=si0;
si0=l0;
l10=si0;
si0=l9;
l13=si0;
si0=l2;
l6=si0;
si0=0U;
l18=si0;
L93:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l13;
sj2=i64_load(&i->m0,(U64)si2);
l25=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l26=sj1;
sj2=l23;
sj3=l25;
si2=sj2 <= sj3;
sj3=l23;
sj4=l25;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l13;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l23=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l26;
sj1=l23;
si0=sj0 <= sj1;
sj1=l26;
sj2=l23;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l20;
si1=l18;
si2=2U;
si1+=si2;
l18=si1;
si0=si0 != si1;
if(si0){
goto L93;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l23=sj0;
L90:;
si0=l22;
si0=!(si0);
if(si0){
goto L38;
}
si0=l2;
si1=l18;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l0;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l23;
sj1+=sj2;
si2=l9;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L38:;
si0=0U;
l10=si0;
L94:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l25=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l23=sj0;
sj1=l25;
si0=sj0 < sj1;
l13=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L96;
}
si0=l13;
l10=si0;
goto L95;
L96:;
si0=l13;
sj1=l23;
sj2=1ULL;
sj1+=sj2;
l23=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L95:;
si0=l0;
sj1=l23;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L94;
}
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L97;
}
si0=l15;
f15271(i,si0);
L97:;
si0=l11;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l24;
L0:;
return si0;
}

U32 f1097(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U64 l8,U32 l9,U32 l10) {
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U32 l19=0;
U64 l20=0;
U64 l21=0;
U32 l22=0;
U64 l23=0;
U32 l24=0;
U32 l25=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l11=si0;
i->g0=si0;
si0=l11;
sj1=l8;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l8;
si0=!(sj0);
if(si0){
goto L15;
}
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=l7;
si2=1U;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l12;
si1=l1;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l11;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l10;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
si0=l11;
si1=l7;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l11;
si1=l6;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l11;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l11;
si1=16U;
si0+=si1;
si1=l11;
si2=40U;
si1+=si2;
f1267(i,si0,si1);
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1+24U);
l13=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l11;
si1=l4;
si2=1U;
si1+=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l13;
si1=l10;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l13;
si0=!(si0);
if(si0){
goto L7;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
l14=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=l11;
si1=l4;
sj1=(U64)(si1);
l16=sj1;
sj2=l8;
sj1*=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l17;
si0=!(sj0);
if(si0){
goto L9;
}
sj0=l17;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L19;
}
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L8;
}
sj0=0ULL;
l18=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l10;
si1=1U;
si0&=si1;
l19=si0;
sj0=0ULL;
sj1=l17;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l20=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=0U;
l6=si0;
sj0=0ULL;
l18=sj0;
goto L17;
L19:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l18=sj0;
si0=l15;
l10=si0;
si0=l0;
l12=si0;
L20:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l21;
sj3=l20;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l18;
sj1=l20;
sj0>>=(sj1&63);
l18=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
L17:;
si0=l19;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l15;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l18;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l20;
sj0>>=(sj1&63);
l18=sj0;
L16:;
si0=l7;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l14;
si0=i32_load(&i->m0,(U64)si0+8U);
l19=si0;
si0=l11;
sj1=l16;
sj2=-1ULL;
sj1+=sj2;
sj2=l8;
sj1*=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l17;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l17;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L24;
}
si0=l10;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
sj0=0ULL;
l20=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si1=1U;
si0&=si1;
l22=si0;
sj0=0ULL;
sj1=l17;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l21=sj0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=0U;
l6=si0;
sj0=0ULL;
l20=sj0;
goto L22;
L24:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l10;
si1=-2U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
sj0=0ULL;
l20=sj0;
si0=l19;
l10=si0;
si0=l9;
l12=si0;
L25:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l23;
sj3=l21;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l20;
sj1=l21;
sj0>>=(sj1&63);
l20=sj0;
si0=l5;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L22:;
si0=l22;
si0=!(si0);
if(si0){
goto L21;
}
si0=l9;
si1=l6;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l19;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l23=sj1;
sj2=l17;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l23;
sj1=l21;
sj0>>=(sj1&63);
l20=sj0;
L21:;
si0=l9;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L26;
}
si0=l13;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l14;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l22=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l22;
si0=!(si0);
if(si0){
goto L29;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l0;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=0U;
l6=si0;
si0=l22;
l5=si0;
si0=l0;
l10=si0;
L30:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l7=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L32;
}
si0=l7;
l6=si0;
goto L31;
L32:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L31:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L30;
}
}
si0=l22;
si1=l1;
si0=si0 == si1;
l10=si0;
if(si0){
goto L33;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L33;
}
si0=l24;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l22;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
L34:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L27;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L34;
}
goto L29;
}
L33:;
si0=l10;
si1=l6;
si0&=si1;
if(si0){
goto L27;
}
L29:;
si0=l4;
si1=-1U;
si0+=si1;
l25=si0;
goto L1;
L28:;
si0=l4;
si1=l13;
si2=1201444U;
f663(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=1201460U;
si1=91U;
si2=1201552U;
f673(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l13;
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l4;
si1=l13;
si2=1201568U;
f663(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=8U;
si1+=si2;
si2=1199328U;
si3=l11;
si4=40U;
si3+=si4;
si4=1201928U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L14:;
si0=1201884U;
si1=28U;
si2=1201912U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l11;
si2=32U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=40U;
si3+=si4;
si4=1201868U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L12:;
si0=l11;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l11;
si1=1198996U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l11;
si1=1198900U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l11;
si1=40U;
si0+=si1;
si1=1201396U;
f683(i,si0,si1);
UNREACHABLE;
L11:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l11;
si2=32U;
si1+=si2;
si2=l11;
si3=16U;
si2+=si3;
si3=l11;
si4=40U;
si3+=si4;
si4=1201852U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l11;
si2=28U;
si1+=si2;
si2=l11;
si3=32U;
si2+=si3;
si3=l11;
si4=40U;
si3+=si4;
si4=1201836U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=32U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=40U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l10;
si1=l1;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=0U;
si1=0U;
si2=1201412U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=32U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=40U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l10;
si1=l1;
si2=1241652U;
f666(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=l1;
si2=1201428U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l14;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l22=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L36;
}
si0=l22;
si0=!(si0);
if(si0){
goto L35;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l9;
si1=l22;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=0U;
l6=si0;
si0=l22;
l5=si0;
si0=l9;
l10=si0;
L37:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l20;
si0=sj0 < sj1;
l7=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L39;
}
si0=l7;
l6=si0;
goto L38;
L39:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L38:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L37;
}
}
si0=l22;
si1=l1;
si0=si0 == si1;
l10=si0;
if(si0){
goto L41;
}
si0=l6;
si1=1U;
si0^=si1;
if(si0){
goto L41;
}
si0=l24;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L35;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l22;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
L42:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L40;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l17;
si0=!(sj0);
if(si0){
goto L42;
}
goto L35;
}
L41:;
si0=l10;
si1=l6;
si0&=si1;
si0=!(si0);
if(si0){
goto L35;
}
L40:;
si0=1201732U;
si1=87U;
si2=1201820U;
f673(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l4;
si1=-1U;
si0+=si1;
l25=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l25;
si1=l13;
si2=1201584U;
f663(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l14;
si1=l25;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L45;
}
sj0=l8;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L49;
}
si0=l6;
if(si0){
goto L50;
}
si0=0U;
l5=si0;
sj0=0ULL;
l20=sj0;
goto L46;
L50:;
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l6;
si1=1U;
si0&=si1;
l4=si0;
sj0=0ULL;
l20=sj0;
sj0=0ULL;
sj1=l8;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l17=sj0;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L48;
}
si0=0U;
l5=si0;
goto L47;
L49:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=l6;
si1=-2U;
si0&=si1;
l7=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l20=sj0;
si0=l22;
l10=si0;
si0=l2;
l12=si0;
L51:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l18;
sj3=l17;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l20;
sj1=l17;
sj0>>=(sj1&63);
l20=sj0;
si0=l7;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L51;
}
}
L47:;
si0=l4;
si0=!(si0);
if(si0){
goto L52;
}
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l22;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l8;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l17;
sj0>>=(sj1&63);
l20=sj0;
L52:;
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=0U;
l5=si0;
si0=l0;
l10=si0;
si0=l2;
l12=si0;
L53:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l7=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L55;
}
si0=l7;
l5=si0;
goto L54;
L55:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L54:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L53;
}
}
si0=l15;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
L46:;
si0=l15;
sj1=l20;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l18;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L45:;
si0=l6;
si1=l3;
si2=1201364U;
f666(i,si0,si1,si2);
UNREACHABLE;
L44:;
si0=l6;
si1=l1;
si2=1201380U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l25;
si1=3U;
si0=si0 < si1;
if(si0){
goto L56;
}
sj0=l16;
sj1=-2ULL;
sj0+=sj1;
sj1=l8;
sj0*=sj1;
l20=sj0;
si0=2U;
l4=si0;
L57:;
{
si0=l4;
si1=l13;
si0=si0 < si1;
if(si0){
goto L58;
}
si0=l4;
si1=l13;
si2=1201700U;
f663(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=l14;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L64;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l11;
sj1=l20;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l20;
si0=!(sj0);
if(si0){
goto L63;
}
sj0=l20;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L62;
}
si0=l6;
si0=!(si0);
if(si0){
goto L61;
}
si0=l6;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
l21=sj0;
sj0=0ULL;
sj1=l20;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l17=sj0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=l6;
si1=-2U;
si0&=si1;
l7=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l21=sj0;
si0=l22;
l10=si0;
si0=l2;
l12=si0;
L66:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l21=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l18;
sj3=l17;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l21;
sj1=l17;
sj0>>=(sj1&63);
l21=sj0;
si0=l7;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L66;
}
}
L65:;
si0=l24;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l22;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l20;
sj1<<=(sj2&63);
sj2=l21;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l17;
sj0>>=(sj1&63);
l21=sj0;
L67:;
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L60;
}
si0=0U;
l5=si0;
si0=l0;
l10=si0;
si0=l2;
l12=si0;
L68:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l7=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L70;
}
si0=l7;
l5=si0;
goto L69;
L70:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L69:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L68;
}
goto L59;
}
L64:;
si0=l6;
si1=l3;
si2=1201364U;
f666(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=32U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=40U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L62:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=0U;
l5=si0;
sj0=0ULL;
l21=sj0;
goto L59;
L60:;
si0=l6;
si1=l1;
si2=1201380U;
f666(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l15;
sj1=l21;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
si0|=si1;
l10=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L77;
}
si0=l14;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L76;
}
si0=l10;
si0=i32_load(&i->m0,(U64)si0);
l22=si0;
si0=l11;
sj1=l20;
sj2=l8;
sj1-=sj2;
l21=sj1;
i64_store(&i->m0,(U64)si0+32U,sj1);
sj0=l20;
sj1=l8;
si0=sj0 == sj1;
if(si0){
goto L75;
}
sj0=l21;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L74;
}
si0=l6;
si0=!(si0);
if(si0){
goto L73;
}
si0=l6;
si1=1U;
si0&=si1;
l24=si0;
sj0=0ULL;
l20=sj0;
sj0=0ULL;
sj1=l21;
sj0-=sj1;
sj1=63ULL;
sj0&=sj1;
l17=sj0;
si0=0U;
l5=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L78;
}
si0=l6;
si1=-2U;
si0&=si1;
l7=si0;
si0=0U;
l5=si0;
sj0=0ULL;
l20=sj0;
si0=l22;
l10=si0;
si0=l2;
l12=si0;
L79:;
{
si0=l12;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l21;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l21;
sj1<<=(sj2&63);
sj2=l18;
sj3=l17;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
sj0=l20;
sj1=l17;
sj0>>=(sj1&63);
l20=sj0;
si0=l7;
si1=l5;
si2=2U;
si1+=si2;
l5=si1;
si0=si0 != si1;
if(si0){
goto L79;
}
}
L78:;
si0=l24;
si0=!(si0);
if(si0){
goto L80;
}
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l22;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l21;
sj1<<=(sj2&63);
sj2=l20;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l17;
sj0>>=(sj1&63);
l20=sj0;
L80:;
si0=l6;
si1=l1;
si0=si0 > si1;
if(si0){
goto L72;
}
si0=0U;
l5=si0;
si0=l9;
l10=si0;
si0=l2;
l12=si0;
L81:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l7=si0;
si0=l5;
si1=255U;
si0&=si1;
if(si0){
goto L83;
}
si0=l7;
l5=si0;
goto L82;
L83:;
si0=l7;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l5=si0;
L82:;
si0=l10;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l12;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L81;
}
goto L71;
}
L77:;
si0=l10;
si1=l13;
si2=1201716U;
f663(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l6;
si1=l3;
si2=1201364U;
f666(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l11;
si2=32U;
si1+=si2;
si2=1237776U;
si3=l11;
si4=40U;
si3+=si4;
si4=1241684U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L74:;
si0=1237680U;
si1=36U;
si2=1241668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L73:;
si0=0U;
l5=si0;
sj0=0ULL;
l20=sj0;
goto L71;
L72:;
si0=l6;
si1=l1;
si2=1201380U;
f666(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=l19;
sj1=l20;
si2=l5;
sj2=(U64)(si2);
sj1+=sj2;
si2=l19;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l21;
sj1=l8;
sj0-=sj1;
l20=sj0;
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
si1=l25;
si0=si0 < si1;
if(si0){
goto L57;
}
}
L56:;
si0=l0;
si1=-8U;
si0+=si1;
l5=si0;
si0=l9;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
l10=si0;
L91:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L90;
}
si0=l5;
si1=l10;
si0+=si1;
l12=si0;
si0=l7;
si1=l10;
si0+=si1;
l6=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
si0=sj0 == sj1;
if(si0){
goto L91;
}
}
sj0=l17;
sj1=l18;
si0=sj0 > sj1;
if(si0){
goto L89;
}
goto L88;
L90:;
si0=l10;
si0=!(si0);
if(si0){
goto L88;
}
L89:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L94;
}
si0=1U;
l13=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L86;
}
si0=l1;
si1=1U;
si0&=si1;
l3=si0;
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L93;
}
si0=0U;
l7=si0;
sj0=0ULL;
l17=sj0;
goto L92;
L94:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L93:;
si0=l1;
si1=-2U;
si0&=si1;
l4=si0;
si0=0U;
l5=si0;
si0=l9;
l10=si0;
si0=l0;
l12=si0;
si0=l2;
l6=si0;
si0=0U;
l7=si0;
L95:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l17;
sj3=l18;
si2=sj2 <= sj3;
sj3=l17;
sj4=l18;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l17;
si0=sj0 <= sj1;
sj1=l20;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l4;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L95;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L92:;
si0=l3;
si0=!(si0);
if(si0){
goto L87;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l9;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1+=sj2;
si2=l0;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L87;
L88:;
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L84;
}
si0=l1;
if(si0){
goto L96;
}
si0=0U;
l13=si0;
goto L86;
L96:;
si0=l1;
si1=1U;
si0&=si1;
l3=si0;
si0=0U;
l13=si0;
sj0=0ULL;
l17=sj0;
si0=0U;
l7=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L97;
}
si0=l1;
si1=-2U;
si0&=si1;
l4=si0;
si0=0U;
l5=si0;
si0=l0;
l10=si0;
si0=l9;
l12=si0;
si0=l2;
l6=si0;
si0=0U;
l7=si0;
L98:;
{
si0=l6;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
si2=l5;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l12;
sj2=i64_load(&i->m0,(U64)si2);
l18=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l20=sj1;
sj2=l17;
sj3=l18;
si2=sj2 <= sj3;
sj3=l17;
sj4=l18;
si3=sj3 < sj4;
si4=l5;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l5=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l12;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l17=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l20;
sj1=l17;
si0=sj0 <= sj1;
sj1=l20;
sj2=l17;
si1=sj1 < sj2;
si2=l5;
si0=si2?si0:si1;
l5=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l6;
si1=16U;
si0+=si1;
l6=si0;
si0=l4;
si1=l7;
si2=2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L98;
}
}
sj0=0ULL;
si1=l5;
sj1=(U64)(si1);
sj0-=sj1;
l17=sj0;
L97:;
si0=l3;
si0=!(si0);
if(si0){
goto L87;
}
si0=l2;
si1=l7;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l0;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l17;
sj1+=sj2;
si2=l9;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L87:;
si0=l1;
si0=!(si0);
if(si0){
goto L86;
}
si0=0U;
l10=si0;
L99:;
{
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l17=sj0;
sj1=l18;
si0=sj0 < sj1;
l12=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L101;
}
si0=l12;
l10=si0;
goto L100;
L101:;
si0=l12;
sj1=l17;
sj2=1ULL;
sj1+=sj2;
l17=sj1;
si1=!(sj1);
si0|=si1;
l10=si0;
L100:;
si0=l0;
sj1=l17;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L99;
}
}
si0=l10;
if(si0){
goto L85;
}
L86:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L102;
}
si0=l14;
f15271(i,si0);
L102:;
si0=l11;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l13;
goto L0;
L85:;
si0=1201600U;
si1=82U;
si2=1201684U;
f673(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1098(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0+16U,sj1);
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l3;
si1=l1;
si2=8U;
si1+=si2;
sj2=l2;
f1186(i,si0,si1,sj2);
goto L3;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=64U;
sj1=l2;
si1=(U32)(sj1);
si2=255U;
si1&=si2;
si0=DIV_U(si0,si1);
sj0=(U64)(si0);
l5=sj0;
sj1=l2;
sj0*=sj1;
sj1=64ULL;
si0=sj0 == sj1;
if(si0){
goto L6;
}
si0=l3;
si1=88U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
sj1=64ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
sj0=3ULL;
l2=sj0;
goto L5;
L6:;
si0=l3;
si1=88U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=80U;
si0+=si1;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=72U;
si0+=si1;
sj1=64ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=56U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+48U,si1);
sj0=1ULL;
l2=sj0;
L5:;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f1271(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
goto L7;
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
si1=-1U;
si0+=si1;
l1=si0;
si0=0U;
l6=si0;
L9:;
{
si0=l1;
si1=l4;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l4;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l4;
l6=si0;
L7:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l4;
si3=l6;
si2-=si3;
l1=si2;
si3=l4;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+24U);
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si1=l7;
si0+=si1;
l9=si0;
si0=0U;
l1=si0;
si0=l7;
si1=1U;
si0>>=(si1&31);
l10=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l9;
si1=-2U;
si0+=si1;
l11=si0;
si0=0U;
l4=si0;
si0=0U;
si1=l7;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l12=si0;
si0=l8;
l1=si0;
L12:;
{
si0=l1;
si1=1U;
si0+=si1;
l13=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si0=l13;
si1=l11;
si2=l4;
si1+=si2;
l6=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l14;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
l13=si0;
si0=l1;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l6;
si1=l13;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l12;
si1=l4;
si2=-2U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=0U;
si1=l4;
si0-=si1;
l1=si0;
L11:;
si0=l7;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l8;
si1=l1;
si0+=si1;
l4=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=l9;
si2=l10;
si1-=si2;
si2=l10;
si3=l1;
si4=-1U;
si3^=si4;
si2+=si3;
si1+=si2;
l1=si1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
L10:;
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
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l3;
si2=16U;
si1+=si2;
si2=1199328U;
si3=l3;
si4=40U;
si3+=si4;
si4=1202300U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=275U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1202124U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=402U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1202320U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=1202284U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

U64 f1099(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U64 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
sj0=l2;
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
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
l5=sj0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
sj0=l5;
si0=(U32)(sj0);
l6=si0;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
if(si0){
goto L6;
}
si0=1198692U;
si1=43U;
si2=1202960U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
sj1=l3;
si0=sj0 > sj1;
if(si0){
goto L8;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L9;
}
sj0=l3;
sj1=l5;
sj0-=sj1;
sj1=l2;
sj0=REM_U(sj0,sj1);
l3=sj0;
goto L1;
L9:;
si0=1199008U;
si1=57U;
si2=1202928U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
sj0=l2;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=0ULL;
sj1=l2;
sj2=l5;
sj3=l3;
sj2-=sj3;
sj3=l2;
sj2=REM_U(sj2,sj3);
l3=sj2;
sj1-=sj2;
sj2=l3;
si2=!(sj2);
sj0=si2?sj0:sj1;
l3=sj0;
goto L1;
L6:;
sj0=2ULL;
sj1=2ULL;
sj2=2ULL;
si3=l6;
si4=1246604U;
si3+=si4;
sj3=i64_load8_u(&i->m0,(U64)si3);
l5=sj3;
sj4=l2;
sj3*=sj4;
sj2-=sj3;
sj3=l5;
sj2*=sj3;
l5=sj2;
sj3=l2;
sj2*=sj3;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
l5=sj1;
sj2=l2;
sj1*=sj2;
sj0-=sj1;
sj1=l5;
sj0*=sj1;
l5=sj0;
si0=l1;
si1=536870910U;
si0+=si1;
si1=536870911U;
si0&=si1;
l7=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=-8U;
si0+=si1;
l6=si0;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l1;
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l3;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l9;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
L10:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
{
si0=l4;
si1=32U;
si0+=si1;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
sj2=l3;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=16U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l4;
si3=32U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l9;
sj4=l3;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
l3=sj2;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l10;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
sj0=l8;
sj1=l2;
si0=sj0 <= sj1;
if(si0){
goto L13;
}
si0=l4;
sj1=l8;
sj2=l3;
sj1-=sj2;
sj2=l5;
sj1*=sj2;
sj2=0ULL;
sj3=l2;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l8;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l3=sj0;
goto L1;
L13:;
sj0=l3;
sj1=l8;
si0=sj0 >= sj1;
if(si0){
goto L14;
}
sj0=l2;
sj1=l8;
sj0-=sj1;
sj1=l3;
sj0+=sj1;
l3=sj0;
goto L1;
L14:;
sj0=l3;
sj1=l8;
sj0-=sj1;
l3=sj0;
goto L1;
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
si0=l6;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1199008U;
si1=57U;
si2=1202944U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
sj0=l3;
L0:;
return sj0;
}

U32 f1100(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
goto L9;
}
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L8;
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
goto L7;
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
si0=!(sj0);
if(si0){
goto L11;
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
L13:;
{
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L12;
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
goto L13;
}
}
si0=l7;
l8=si0;
L12:;
si0=l8;
si1=l1;
si0=si0 > si1;
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
goto L10;
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
L11:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l5;
si2=1199328U;
si3=l4;
si4=40U;
si3+=si4;
si4=1202864U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=l8;
si1=l3;
si0=si0 > si1;
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
sj0=f1099(i,si0,si1,sj2,sj3);
si0=!(sj0);
l0=si0;
goto L1;
L16:;
si0=l7;
si1=l6;
sj2=l9;
sj0=f1355(i,si0,si1,sj2);
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
sj0=f1355(i,si0,si1,sj2);
si0=!(sj0);
l0=si0;
goto L1;
L17:;
si0=l7;
si1=l6;
sj2=l9;
sj3=0ULL;
sj0=f1099(i,si0,si1,sj2,sj3);
si0=!(sj0);
l0=si0;
goto L1;
L9:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l4;
si2=28U;
si1+=si2;
si2=1202620U;
si3=l4;
si4=40U;
si3+=si4;
si4=1202912U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=1202624U;
si1=32U;
si2=1202896U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=1U;
si1=l5;
si2=1199328U;
si3=l4;
si4=40U;
si3+=si4;
si4=1202880U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=1198932U;
si1=35U;
si2=1202656U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l8;
si1=l3;
si2=1202672U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1202688U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1202704U;
f663(i,si0,si1,si2);
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
goto L35;
}
si0=l15;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l15;
si1=3U;
si0<<=(si1&31);
l14=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L31;
}
si0=l15;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l18=si0;
si0=l14;
if(si0){
goto L37;
}
si0=l18;
l16=si0;
goto L36;
L37:;
si0=l18;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L38;
}
si0=l18;
si1=l14;
si0=f15277(i,si0,si1);
l16=si0;
si0=!(si0);
if(si0){
goto L34;
}
si0=l16;
si1=0U;
si2=l14;
si0=f15392(i,si0,si1,si2);
goto L35;
L38:;
si0=l14;
si1=1U;
si0=f15273(i,si0,si1);
l16=si0;
L36:;
si0=l16;
si0=!(si0);
if(si0){
goto L34;
}
L35:;
si0=l15;
si1=l13;
si0=si0 < si1;
if(si0){
goto L33;
}
sj0=l11;
si0=!(sj0);
l19=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l6;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l16;
si1=l7;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L39;
L40:;
si0=l5;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
l18=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L31;
}
si0=l5;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l20=si0;
si0=l18;
if(si0){
goto L43;
}
si0=l20;
l14=si0;
goto L42;
L43:;
si0=l20;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L44;
}
si0=l20;
si1=l18;
si0=f15277(i,si0,si1);
l14=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l14;
si1=0U;
si2=l18;
si0=f15392(i,si0,si1,si2);
goto L41;
L44:;
si0=l18;
si1=1U;
si0=f15273(i,si0,si1);
l14=si0;
L42:;
si0=l14;
si0=!(si0);
if(si0){
goto L30;
}
L41:;
si0=l4;
si1=l14;
si2=l5;
si3=l2;
si4=l5;
sj5=l11;
sj1=f1225(i,si1,si2,si3,si4,sj5);
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
sj1=f1225(i,si1,si2,si3,si4,sj5);
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
L39:;
si0=l6;
si1=-1U;
si0+=si1;
l18=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l13;
l7=si0;
si0=l16;
si1=l18;
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
goto L45;
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
L45:;
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
goto L46;
}
si0=l0;
si1=211U;
si0=si0 < si1;
if(si0){
goto L46;
}
si0=l5;
si1=7547U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l7;
si2=l5;
si1=f1283(i,si1,si2);
l0=si1;
si2=1U;
f1190(i,si0,si1,si2);
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
f1190(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l18=si0;
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
si4=f15390(i,si4,si5,si6);
l20=si4;
si5=l7;
si6=l2;
si7=l5;
si8=l13;
si9=l0;
si0=f1284(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l18;
si0=!(si0);
if(si0){
goto L48;
}
si0=l20;
f15271(i,si0);
L48:;
si0=l16;
l0=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L19;
}
si0=l13;
f15271(i,si0);
si0=l16;
l0=si0;
goto L19;
L47:;
si0=l1;
si1=l6;
si2=l16;
si3=l7;
si4=l2;
si5=l5;
sj6=0ULL;
si7=l2;
sj7=i64_load(&i->m0,(U64)si7);
sj7=f1276(i,sj7);
sj6-=sj7;
si0=f1282(i,si0,si1,si2,si3,si4,si5,sj6);
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
L46:;
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
si10=1246604U;
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
si0=f1273(i,si0,si1,si2,si3,si4,si5,sj6);
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
L34:;
si0=l18;
si1=l14;
f52(i,si0,si1);
UNREACHABLE;
L33:;
si0=1198932U;
si1=35U;
si2=1202720U;
f673(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=-1U;
si1=l13;
si2=1202736U;
f666(i,si0,si1,si2);
UNREACHABLE;
L31:;
f53(i);
UNREACHABLE;
L30:;
si0=l20;
si1=l18;
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
si2=1199328U;
si3=l4;
si4=40U;
si3+=si4;
si4=1202848U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L28:;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=0U;
si1=l4;
si2=32U;
si1+=si2;
si2=1199328U;
si3=l4;
si4=40U;
si3+=si4;
si4=1202832U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L27:;
si0=l18;
si1=l13;
si2=1202752U;
f663(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=-1U;
si1=l13;
si2=1202768U;
f666(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l5;
si1=l7;
si2=1202784U;
f666(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l0;
si1=l7;
si2=1202800U;
f662(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=1244008U;
si1=43U;
si2=1244208U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1246748U;
si1=25U;
si2=1246776U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l13;
si1=128U;
si2=1246732U;
f663(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l0;
si1=l7;
si2=1202816U;
f662(i,si0,si1,si2);
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
L50:;
{
si0=l5;
l8=si0;
si0=!(si0);
if(si0){
goto L49;
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
goto L50;
}
}
L49:;
si0=l17;
if(si0){
goto L51;
}
si0=l16;
f15271(i,si0);
L51:;
si0=l19;
if(si0){
goto L52;
}
si0=l14;
f15271(i,si0);
L52:;
si0=l8;
si0=!(si0);
l0=si0;
goto L1;
L18:;
si0=l17;
if(si0){
goto L53;
}
si0=l16;
f15271(i,si0);
L53:;
si0=l19;
if(si0){
goto L1;
}
si0=l14;
f15271(i,si0);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1101(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
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
U64 l17=0;
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
U32 l28=0;
U32 l29=0;
U64 l30=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=816U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si1=112U;
si0+=si1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l0;
si1=l4;
si2=112U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+112U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l3;
si1=43U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=0U;
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=0U;
si2=688U;
si0=f15392(i,si0,si1,si2);
si0=l3;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=-2U;
si0+=si1;
l8=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si1=l8;
si2=1203008U;
f666(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1203072U;
si1=42U;
si2=1203116U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l2;
si1=8U;
si0+=si1;
l9=si0;
si0=l3;
si1=-1U;
si0+=si1;
l10=si0;
si1=1U;
si0&=si1;
l11=si0;
si0=l3;
si1=-2U;
si0+=si1;
l12=si0;
if(si0){
goto L14;
}
sj0=0ULL;
l13=sj0;
goto L13;
L14:;
si0=l10;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
l15=si0;
si0=l9;
l16=si0;
sj0=0ULL;
l13=sj0;
L15:;
{
si0=l4;
si1=80U;
si0+=si1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
l17=sj1;
sj2=l13;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=96U;
si0+=si1;
si1=l16;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+96U);
l18=sj1;
si2=l4;
si3=80U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj3=l13;
sj4=l17;
si3=sj3 < sj4;
sj3=(U64)(si3);
sj2+=sj3;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l4;
si1=96U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l13;
sj2=l18;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l13=sj0;
si0=l14;
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
si0=l11;
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si1=64U;
si0+=si1;
si1=l9;
si2=l6;
si3=3U;
si2<<=(si3&31);
l15=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l4;
si1=128U;
si0+=si1;
si1=l15;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+64U);
l5=sj1;
sj2=l13;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l13;
sj2=l5;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l13=sj0;
L16:;
si0=l4;
si1=128U;
si0+=si1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=24U;
si0+=si1;
l19=si0;
si0=l3;
si1=-3U;
si0+=si1;
l20=si0;
si0=l3;
si1=1U;
si0+=si1;
l21=si0;
si0=l7;
si1=-1U;
si0+=si1;
l22=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=24U;
si0+=si1;
l23=si0;
si0=0U;
l11=si0;
si0=l12;
l24=si0;
si0=1U;
l25=si0;
L17:;
{
si0=l25;
l15=si0;
si1=l22;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l15;
si1=l21;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l8;
si1=l15;
si0-=si1;
l16=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l15;
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l15;
si1=1U;
si0+=si1;
l25=si0;
si0=l4;
si1=128U;
si0+=si1;
si1=l15;
si2=3U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
si1=l16;
si0+=si1;
l26=si0;
si1=l15;
si2=-1U;
si1^=si2;
si2=l3;
si1+=si2;
l15=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l27=si0;
si0=l15;
if(si0){
goto L19;
}
sj0=0ULL;
l5=sj0;
goto L18;
L19:;
si0=l2;
si1=l16;
si0+=si1;
l28=si0;
sj0=i64_load(&i->m0,(U64)si0);
l17=sj0;
si0=l12;
si1=l11;
si0-=si1;
si1=1U;
si0&=si1;
l29=si0;
si0=l20;
si1=l11;
si0=si0 != si1;
if(si0){
goto L21;
}
sj0=0ULL;
l5=sj0;
si0=0U;
l6=si0;
sj0=0ULL;
l30=sj0;
goto L20;
L21:;
si0=l24;
si1=-2U;
si0&=si1;
l9=si0;
sj0=0ULL;
l30=sj0;
si0=0U;
l6=si0;
si0=l19;
l16=si0;
si0=l23;
l15=si0;
sj0=0ULL;
l5=sj0;
L22:;
{
si0=l4;
si1=48U;
si0+=si1;
si1=l16;
si2=-8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l17;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=-8U;
si0+=si1;
l14=si0;
sj1=l5;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l13=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+48U);
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l17;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
sj1=0ULL;
sj2=l13;
sj3=l5;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
si2=l4;
si3=48U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
sj2=l18;
sj3=l13;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l13=sj1;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l5=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+32U);
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l5;
sj1=l13;
si0=sj0 < sj1;
sj0=(U64)(si0);
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l18;
sj2=l5;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l5=sj0;
si0=l16;
si1=16U;
si0+=si1;
l16=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l9;
si1=l6;
si2=2U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L20:;
si0=l29;
si0=!(si0);
if(si0){
goto L18;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l28;
si2=8U;
si1+=si2;
si2=l6;
si3=3U;
si2<<=(si3&31);
l15=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=0ULL;
sj3=l17;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l26;
si1=l15;
si0+=si1;
l15=si0;
sj1=l5;
si2=l15;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l13=sj1;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2+16U);
sj1+=sj2;
l17=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l30;
sj1=l13;
sj2=l5;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
sj1=l17;
sj2=l13;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l5=sj0;
L18:;
si0=l27;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l24;
si1=-1U;
si0+=si1;
l24=si0;
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
si0=l23;
si1=16U;
si0+=si1;
l23=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l25;
si1=l10;
si0=si0 != si1;
if(si0){
goto L17;
}
goto L4;
}
L10:;
si0=1198692U;
si1=43U;
si2=1202976U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1U;
si1=l1;
si2=1202992U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l22;
si1=l8;
si2=1203040U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l21;
si1=l3;
si2=1203040U;
f675(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l16;
si2=1203040U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1198692U;
si1=43U;
si2=1203056U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l7;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=8U;
si0+=si1;
l16=si0;
si0=1U;
l14=si0;
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l0;
l15=si0;
L23:;
{
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
si1=2U;
si0+=si1;
l14=si0;
si0=l4;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=0ULL;
sj3=l5;
sj4=0ULL;
f15404(i,si0,sj1,sj2,sj3,sj4);
si0=l15;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l15;
si1=16U;
si0+=si1;
l15=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
if(si0){
goto L23;
}
}
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
l9=si0;
si0=l3;
si1=4U;
si0<<=(si1&31);
si1=-24U;
si0+=si1;
l15=si0;
si1=3U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l6=si0;
si1=2U;
si0&=si1;
l2=si0;
si0=l15;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l4;
si1=128U;
si0+=si1;
l15=si0;
sj0=0ULL;
l5=sj0;
goto L24;
L25:;
si0=l6;
si1=1073741820U;
si0&=si1;
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
l15=si0;
sj0=0ULL;
l5=sj0;
L26:;
{
si0=l15;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l5;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l13;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=16U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l5;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=24U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l5=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l13;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=32U;
si0+=si1;
l15=si0;
sj0=l5;
sj1=63ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L26;
}
}
L24:;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
L28:;
{
si0=l15;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l5;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
sj0=l13;
sj1=63ULL;
sj0>>=(sj1&63);
l5=sj0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L28;
}
}
L27:;
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l5;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
l15=si0;
L29:;
{
si0=l16;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l13;
si0=sj0 < sj1;
l14=si0;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L31;
}
si0=l14;
l6=si0;
goto L30;
L31:;
si0=l14;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
l5=sj1;
si1=!(sj1);
si0|=si1;
l6=si0;
L30:;
si0=l16;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
si0=l16;
si1=8U;
si0+=si1;
l16=si0;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L29;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L3:;
si0=l4;
si1=816U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l7;
si1=l1;
si2=1203024U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l14;
si1=l7;
si2=1202068U;
f663(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1102(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U64 l22=0;
U64 l23=0;
U64 l24=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l3;
si1=1U;
si0<<=(si1&31);
l7=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l3;
si2=l3;
si3=1U;
si2>>=(si3&31);
l8=si2;
si1-=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l9;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l9;
si1=l7;
si2=1203148U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l2;
si1=-8U;
si0+=si1;
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l1=si0;
L17:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l11;
si1=l1;
si0+=si1;
l13=si0;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
sj0=l14;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si0=sj0 == sj1;
if(si0){
goto L17;
}
}
sj0=l14;
sj1=l15;
si0=sj0 > sj1;
if(si0){
goto L13;
}
goto L5;
L15:;
si0=l0;
si1=l9;
si2=-1U;
si1+=si2;
l16=si1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l17=si0;
si0=l2;
si1=l1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l16;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l2;
si1=-8U;
si0+=si1;
l11=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l1=si0;
L20:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l11;
si1=l1;
si0+=si1;
l13=si0;
si0=l12;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
sj0=l14;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
si0=sj0 == sj1;
if(si0){
goto L20;
}
}
sj0=l14;
sj1=l15;
si0=sj0 > sj1;
if(si0){
goto L18;
}
goto L6;
L19:;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
L18:;
si0=0U;
l13=si0;
si0=0U;
l1=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l2;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l13=si0;
L22:;
{
si0=l12;
si1=l1;
si2=l19;
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l16;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=0U;
si1=l11;
si0-=si1;
l1=si0;
L21:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l10;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L23:;
si0=l17;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L14:;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
L13:;
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=0U;
l13=si0;
si0=0U;
l1=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l2;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l13=si0;
L24:;
{
si0=l12;
si1=l1;
si2=l19;
si1+=si2;
l16=si1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l16;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L8;
}
L12:;
si0=l7;
si1=l1;
si2=1203132U;
f666(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1203364U;
si1=28U;
si2=1203392U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
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
si4=1234772U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=0U;
si1=l11;
si0-=si1;
l1=si0;
L7:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l10;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l2;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L6:;
si0=l17;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=l16;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l16;
si1=l8;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=0U;
l13=si0;
si0=0U;
l1=si0;
goto L25;
L27:;
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
L26:;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l2;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l13=si0;
L28:;
{
si0=l12;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
si3=l19;
si2+=si3;
l16=si2;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L28;
}
}
si0=0U;
si1=l11;
si0-=si1;
l1=si0;
L25:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=l15;
si0=sj0 <= sj1;
sj1=l14;
sj2=l15;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
L29:;
si0=l13;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l17;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L5:;
si0=l8;
si1=l7;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=0U;
l13=si0;
si0=0U;
l1=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l19=si0;
si0=0U;
l11=si0;
si0=0U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=2147483646U;
si1&=si2;
si0-=si1;
l20=si0;
si0=l2;
l1=si0;
si0=l0;
l12=si0;
si0=0U;
l13=si0;
L31:;
{
si0=l12;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l13;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l1;
si3=l19;
si2+=si3;
l16=si2;
sj2=i64_load(&i->m0,(U64)si2);
l15=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l13;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l13=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l14=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l13;
si0=si2?si0:si1;
l13=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l20;
si1=l11;
si2=-2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=0U;
si1=l11;
si0-=si1;
l1=si0;
L30:;
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=l2;
si2=l1;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l13;
sj2=(U64)(si2);
sj1-=sj2;
si2=l10;
si3=l1;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l7;
si1=l9;
si2=1U;
si1<<=(si2&31);
l19=si1;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l19;
si1=l5;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L37;
}
si0=l5;
si1=l19;
si0-=si1;
l1=si0;
si0=l4;
si1=l19;
si2=3U;
si1<<=(si2&31);
l13=si1;
si0+=si1;
l12=si0;
si0=l9;
si1=43U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l4;
si1=l19;
si2=l0;
si3=l9;
si4=l12;
si5=l1;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L40;
L41:;
si0=l4;
si1=l19;
si2=l0;
si3=l9;
f1101(i,si0,si1,si2,si3);
L40:;
si0=l3;
si1=-2U;
si0&=si1;
l17=si0;
si0=l0;
si1=l13;
si0+=si1;
l21=si0;
si0=l3;
si1=86U;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l21;
si1=l17;
si2=l10;
si3=l8;
si4=l12;
si5=l1;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L42;
L43:;
si0=l21;
si1=l17;
si2=l10;
si3=l8;
f1101(i,si0,si1,si2,si3);
L42:;
si0=l9;
si1=43U;
si0=si0 < si1;
if(si0){
goto L45;
}
si0=l0;
si1=l19;
si2=l2;
si3=l9;
si4=l12;
si5=l1;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L44;
L45:;
si0=l0;
si1=l19;
si2=l2;
si3=l9;
f1101(i,si0,si1,si2,si3);
L44:;
si0=l17;
si1=l9;
si0=si0 < si1;
if(si0){
goto L36;
}
si0=0U;
l11=si0;
si0=l9;
l16=si0;
si0=l21;
l1=si0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
l13=si0;
L46:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l15;
si0=sj0 < sj1;
l2=si0;
si0=l11;
si1=255U;
si0&=si1;
if(si0){
goto L48;
}
si0=l2;
l11=si0;
goto L47;
L48:;
si0=l2;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l11=si0;
L47:;
si0=l1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L46;
}
}
si0=l3;
si1=4U;
si0<<=(si1&31);
si1=l8;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l20=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l5=si0;
si0=l11;
sj0=(U64)(si0);
l22=sj0;
si0=0U;
l16=si0;
si0=l9;
l13=si0;
si0=l0;
l1=si0;
L49:;
{
si0=l1;
si1=l20;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l15;
si0=sj0 < sj1;
l2=si0;
si0=l16;
si1=255U;
si0&=si1;
if(si0){
goto L51;
}
si0=l2;
l16=si0;
goto L50;
L51:;
si0=l2;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l16=si0;
L50:;
si0=l13;
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si1=l5;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L49;
}
}
si0=l9;
si1=l17;
si2=l9;
si1-=si2;
l5=si1;
si0=si0 < si1;
if(si0){
goto L34;
}
sj0=2ULL;
sj1=1ULL;
si2=l11;
sj0=si2?sj0:sj1;
l23=sj0;
sj0=l22;
l24=sj0;
si0=l17;
si1=l9;
si0=si0 == si1;
if(si0){
goto L52;
}
si0=l21;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l21;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l3;
si1=l8;
si2=3U;
si1*=si2;
si0-=si1;
l2=si0;
si0=0U;
l11=si0;
si0=l21;
l1=si0;
L53:;
{
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l14=sj0;
sj1=l15;
si0=sj0 < sj1;
l20=si0;
si0=l11;
si1=255U;
si0&=si1;
if(si0){
goto L55;
}
si0=l20;
l11=si0;
goto L54;
L55:;
si0=l20;
sj1=l14;
sj2=1ULL;
sj1+=sj2;
l14=sj1;
si1=!(sj1);
si0|=si1;
l11=si0;
L54:;
si0=l1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l13;
si1=8U;
si0+=si1;
l13=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
if(si0){
goto L53;
}
}
si0=l11;
si1=1U;
si0^=si1;
l1=si0;
si0=l9;
si1=l5;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l1;
if(si0){
goto L57;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l22;
l24=sj0;
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L52;
}
si0=l3;
si1=4U;
si0<<=(si1&31);
si1=l8;
si2=5U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l13=si0;
si0=l3;
si1=l8;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L58:;
{
si0=l13;
si0=!(si0);
if(si0){
goto L56;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=-8U;
si0+=si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L58;
}
}
sj0=l22;
l24=sj0;
goto L52;
L57:;
sj0=l22;
l24=sj0;
si0=l9;
si1=l5;
si0=si0 != si1;
si1=l1;
si0|=si1;
if(si0){
goto L52;
}
L56:;
sj0=l23;
l24=sj0;
L52:;
si0=l9;
si1=3U;
si0*=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l7;
si1=l11;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l19;
if(si0){
goto L60;
}
sj0=0ULL;
l14=sj0;
goto L59;
L60:;
si0=0U;
l1=si0;
L61:;
{
si0=l12;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
si2=l1;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l4;
sj3=i64_load(&i->m0,(U64)si3);
l15=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load(&i->m0,(U64)si1);
l18=sj1;
sj2=l14;
sj3=l15;
si2=sj2 <= sj3;
sj3=l14;
sj4=l15;
si3=sj3 < sj4;
si4=l1;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l1=si2;
sj2=(U64)(si2);
si3=l4;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l14=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l18;
sj1=l14;
si0=sj0 <= sj1;
sj1=l18;
sj2=l14;
si1=sj1 < sj2;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l12;
si1=16U;
si0+=si1;
l12=si0;
si0=l19;
si1=-2U;
si0+=si1;
l19=si0;
if(si0){
goto L61;
}
}
sj0=0ULL;
si1=l1;
sj1=(U64)(si1);
sj0-=sj1;
l14=sj0;
L59:;
sj0=l23;
sj1=l22;
si2=l16;
sj0=si2?sj0:sj1;
l18=sj0;
sj0=l24;
sj1=l14;
sj0+=sj1;
l15=sj0;
si0=l17;
si0=!(si0);
if(si0){
goto L2;
}
si0=l21;
si1=l21;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l18;
sj1+=sj2;
l18=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l4=si0;
sj0=l18;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l21;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=8U;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l1=si0;
sj0=1ULL;
l18=sj0;
L62:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l13;
si1=l1;
si0+=si1;
l12=si0;
si1=l12;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L62;
}
goto L1;
}
L39:;
si0=1198932U;
si1=35U;
si2=1203164U;
f673(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=1198932U;
si1=35U;
si2=1203180U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l9;
si1=l19;
si2=1203196U;
f666(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1198932U;
si1=35U;
si2=1203212U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=l9;
si1=l9;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1190368U;
si1=35U;
si2=1196064U;
f673(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=l9;
si1=l11;
si2=1203228U;
f675(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=l11;
si1=l7;
si2=1203228U;
f666(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=l18;
si0=!(sj0);
l4=si0;
L1:;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sj0=l15;
sj1=3ULL;
si0=sj0 < sj1;
if(si0){
goto L68;
}
si0=l7;
si1=l11;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l14;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L64;
}
si0=l8;
si1=24U;
si0*=si1;
l1=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l3;
si1=24U;
si0*=si1;
si1=l1;
si0-=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L69:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L67;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=-1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L69;
}
goto L64;
}
L68:;
si0=l7;
si1=l11;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l14=sj1;
sj2=l15;
sj1+=sj2;
l15=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l15;
sj1=l14;
si0=sj0 >= sj1;
if(si0){
goto L64;
}
si0=l8;
si1=24U;
si0*=si1;
l1=si0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l12=si0;
si0=l3;
si1=24U;
si0*=si1;
si1=l1;
si0-=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
L70:;
{
si0=l12;
si0=!(si0);
if(si0){
goto L65;
}
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
sj0=l14;
si0=!(sj0);
if(si0){
goto L70;
}
goto L64;
}
L67:;
si0=l4;
if(si0){
goto L63;
}
goto L64;
L66:;
sj0=l15;
si0=!(sj0);
if(si0){
goto L64;
}
L65:;
si0=1203284U;
si1=63U;
si2=1203348U;
f673(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L63:;
si0=1203244U;
si1=24U;
si2=1203268U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1103(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U64 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U64 l27=0;
U64 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U64 l32=0;
U32 l33=0;
U64 l34=0;
U64 l35=0;
U64 l36=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj9;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
si1=l3;
si2=l3;
si3=3U;
si2=DIV_U(si2,si3);
l7=si2;
si3=l7;
si4=3U;
si3*=si4;
si4=l3;
si3=si3 != si4;
si2+=si3;
l8=si2;
si3=1U;
si2<<=(si3&31);
l9=si2;
si1-=si2;
l10=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l9;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l8;
si1=l10;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=l8;
si0-=si1;
l11=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l8;
si1=1U;
si0+=si1;
l12=si0;
si1=1U;
si0<<=(si1&31);
l13=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=l13;
si0-=si1;
l7=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l13;
si1=l8;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l12;
si1=l13;
si2=1203440U;
f666(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1203796U;
si1=24U;
si2=1203820U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l8;
si1=l7;
si2=l13;
si1-=si2;
l7=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l14=si0;
si1=l7;
si0+=si1;
l15=si0;
si0=l4;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l16=si0;
si1=l7;
si0+=si1;
l17=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
l19=si0;
si0=l8;
si1=l11;
si2=l8;
si1-=si2;
l20=si1;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l4;
si1=l8;
si2=l15;
si3=l20;
si4=l2;
si5=l8;
si0=f1080(i,si0,si1,si2,si3,si4,si5);
l21=si0;
goto L11;
L12:;
si0=l4;
si1=l8;
si2=l2;
si3=l8;
si4=l15;
si5=l20;
si0=f1080(i,si0,si1,si2,si3,si4,si5);
l21=si0;
L11:;
si0=l19;
si1=l21;
sj1=(U64)(si1);
l22=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=5U;
si0<<=(si1&31);
si1=32U;
si0+=si1;
l23=si0;
si0=0U;
l24=si0;
si0=l8;
l25=si0;
si0=l14;
l26=si0;
si0=l4;
l7=si0;
L13:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l28=sj0;
sj1=l27;
si0=sj0 < sj1;
l29=si0;
si0=l24;
si1=255U;
si0&=si1;
if(si0){
goto L15;
}
si0=l29;
l24=si0;
goto L14;
L15:;
si0=l29;
sj1=l28;
sj2=1ULL;
sj1+=sj2;
l28=sj1;
si1=!(sj1);
si0|=si1;
l24=si0;
L14:;
si0=l7;
si1=l23;
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l25;
si1=-1U;
si0+=si1;
l25=si0;
if(si0){
goto L13;
}
}
si0=l24;
if(si0){
goto L2;
}
goto L1;
L8:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l6;
si2=12U;
si1+=si2;
si2=1202620U;
si3=l6;
si4=24U;
si3+=si4;
si4=1203836U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=1198932U;
si1=35U;
si2=1203408U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1198932U;
si1=35U;
si2=1203408U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1198932U;
si1=35U;
si2=1203424U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1198932U;
si1=35U;
si2=1203424U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=l7;
si2=1203456U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l19;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l16;
si1=l18;
si0+=si1;
l30=si0;
si0=l21;
if(si0){
goto L17;
}
si0=l4;
si1=-8U;
si0+=si1;
l25=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l8;
si1=4U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l26=si0;
L20:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L19;
}
si0=l25;
si1=l7;
si0+=si1;
l24=si0;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
si0=l26;
si1=-8U;
si0+=si1;
l26=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
sj0=l28;
si1=l24;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si0=sj0 == sj1;
if(si0){
goto L20;
}
}
sj0=l28;
sj1=l27;
si0=sj0 > sj1;
if(si0){
goto L18;
}
goto L17;
L19:;
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
L18:;
sj0=0ULL;
l22=sj0;
si0=l8;
si0=!(si0);
if(si0){
goto L16;
}
si0=l8;
si1=1U;
si0&=si1;
l21=si0;
si0=0U;
l26=si0;
si0=0U;
l7=si0;
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=-2U;
si1&=si2;
si0-=si1;
l18=si0;
si0=l4;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=0U;
l7=si0;
si0=0U;
l26=si0;
L22:;
{
si0=l31;
si1=l7;
si0+=si1;
l25=si0;
si1=16U;
si0+=si1;
si1=l14;
si2=l7;
si1+=si2;
l29=si1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l26;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l4;
si3=l7;
si2+=si3;
l23=si2;
sj2=i64_load(&i->m0,(U64)si2);
l27=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=24U;
si0+=si1;
si1=l29;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj3=l27;
si2=sj2 <= sj3;
sj3=l28;
sj4=l27;
si3=sj3 < sj4;
si4=l26;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l26=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l23;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l32;
sj1=l28;
si0=sj0 <= sj1;
sj1=l32;
sj2=l28;
si1=sj1 < sj2;
si2=l26;
si0=si2?si0:si1;
l26=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l18;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L22;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L21:;
si0=l21;
si0=!(si0);
if(si0){
goto L16;
}
si0=l16;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l14;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l26;
sj2=(U64)(si2);
sj1-=sj2;
si2=l4;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L16;
L17:;
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
goto L24;
}
si0=0U;
l26=si0;
si0=0U;
l7=si0;
goto L23;
L24:;
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=-2U;
si1&=si2;
si0-=si1;
l18=si0;
si0=l4;
si1=l8;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=0U;
l7=si0;
si0=0U;
l26=si0;
L25:;
{
si0=l31;
si1=l7;
si0+=si1;
l25=si0;
si1=16U;
si0+=si1;
si1=l4;
si2=l7;
si1+=si2;
l29=si1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l26;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l14;
si3=l7;
si2+=si3;
l23=si2;
sj2=i64_load(&i->m0,(U64)si2);
l27=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l25;
si1=24U;
si0+=si1;
si1=l29;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=l28;
sj3=l27;
si2=sj2 <= sj3;
sj3=l28;
sj4=l27;
si3=sj3 < sj4;
si4=l26;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l26=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l23;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l28=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l32;
sj1=l28;
si0=sj0 <= sj1;
sj1=l32;
sj2=l28;
si1=sj1 < sj2;
si2=l26;
si0=si2?si0:si1;
l26=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l18;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L23:;
si0=l33;
si0=!(si0);
if(si0){
goto L26;
}
si0=l16;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l4;
si2=l7;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l26;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l27=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 <= sj1;
sj1=l28;
sj2=l27;
si1=sj1 < sj2;
si2=l26;
si0=si2?si0:si1;
l26=si0;
L26:;
si0=l26;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l21;
sj0=(U64)(si0);
sj1=-1ULL;
sj0+=sj1;
l22=sj0;
L16:;
si0=l30;
sj1=l22;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=l1;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l6;
si1=l20;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l20;
si1=l10;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l8;
si1=l20;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=0U;
l29=si0;
si0=l11;
si1=l8;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=0U;
l29=si0;
si0=l10;
l23=si0;
si0=l15;
l7=si0;
si0=l17;
l26=si0;
si0=l8;
l24=si0;
si0=l18;
l25=si0;
L34:;
{
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l27=sj0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l28=sj0;
sj1=l27;
si0=sj0 < sj1;
l14=si0;
si0=l29;
si1=255U;
si0&=si1;
if(si0){
goto L36;
}
si0=l14;
l29=si0;
goto L35;
L36:;
si0=l14;
sj1=l28;
sj2=1ULL;
sj1+=sj2;
l28=sj1;
si1=!(sj1);
si0|=si1;
l29=si0;
L35:;
si0=l24;
si0=!(si0);
if(si0){
goto L31;
}
si0=l25;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
si0=l24;
si1=-1U;
si0+=si1;
l24=si0;
si0=l25;
si1=8U;
si0+=si1;
l25=si0;
si0=l23;
si1=-1U;
si0+=si1;
l23=si0;
if(si0){
goto L34;
}
}
L33:;
si0=l29;
sj0=(U64)(si0);
l27=sj0;
si0=l8;
si1=l10;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l18;
si1=l10;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l29=si0;
si1=l17;
si2=l7;
si1+=si2;
l23=si1;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=l27;
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l7=si0;
sj0=l27;
sj1=l28;
si0=sj0 >= sj1;
if(si0){
goto L37;
}
si0=l8;
si1=4U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l4;
si0+=si1;
si1=40U;
si0+=si1;
l26=si0;
si0=l7;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l0;
si0+=si1;
si1=16U;
si0+=si1;
l24=si0;
si0=l3;
si1=l8;
si2=3U;
si1*=si2;
si0-=si1;
si1=1U;
si0+=si1;
l25=si0;
si0=0U;
l7=si0;
sj0=1ULL;
l27=sj0;
L38:;
{
si0=l25;
si1=l7;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l24;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l28=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
si0=l24;
si1=8U;
si0+=si1;
l24=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
sj0=l28;
si0=!(sj0);
if(si0){
goto L38;
}
}
si0=0U;
si1=l7;
si0-=si1;
l7=si0;
L37:;
si0=l7;
si1=1U;
si0+=si1;
l26=si0;
si0=l7;
si1=l8;
si2=l10;
si1-=si2;
l24=si1;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l29;
si1=l26;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
si1=l23;
si2=l7;
si1+=si2;
si2=l24;
si3=l26;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
sj0=0ULL;
l27=sj0;
goto L29;
L32:;
si0=l13;
si1=l1;
si2=1203472U;
f666(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=l8;
si1=l8;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=l26;
si1=l24;
si2=1195676U;
f675(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=l19;
sj0=i64_load(&i->m0,(U64)si0);
l34=sj0;
sj1=l27;
sj0+=sj1;
l28=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L40;
}
sj0=0ULL;
l35=sj0;
goto L39;
L40:;
sj0=l28;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L41;
}
sj0=l28;
sj1=1ULL;
sj0<<=(sj1&63);
l35=sj0;
goto L39;
L41:;
si0=1198692U;
si1=43U;
si2=1203488U;
f673(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l18;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l8;
if(si0){
goto L43;
}
si0=0U;
l24=si0;
goto L42;
L43:;
si0=l8;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l7=si0;
si1=1U;
si0+=si1;
l24=si0;
si1=3U;
si0&=si1;
l26=si0;
si0=l7;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L45;
}
sj0=0ULL;
l28=sj0;
si0=l18;
l7=si0;
goto L44;
L45:;
si0=l24;
si1=1073741820U;
si0&=si1;
l24=si0;
sj0=0ULL;
l28=sj0;
si0=l18;
l7=si0;
L46:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l28;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l27;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l28;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
l25=si0;
si1=l25;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l27;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=32U;
si0+=si1;
l7=si0;
sj0=l28;
sj1=63ULL;
sj0>>=(sj1&63);
l28=sj0;
si0=l24;
si1=-4U;
si0+=si1;
l24=si0;
if(si0){
goto L46;
}
}
L44:;
si0=l26;
si0=!(si0);
if(si0){
goto L47;
}
L48:;
{
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l28;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
sj0=l27;
sj1=63ULL;
sj0>>=(sj1&63);
l28=sj0;
si0=l26;
si1=-1U;
si0+=si1;
l26=si0;
if(si0){
goto L48;
}
}
L47:;
si0=l8;
si1=1U;
si0&=si1;
l3=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L50;
}
si0=0U;
l24=si0;
si0=0U;
l25=si0;
goto L49;
L50:;
si0=l8;
si1=-2U;
si0&=si1;
l23=si0;
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=16U;
si0+=si1;
l7=si0;
si0=0U;
l24=si0;
si0=l2;
l26=si0;
si0=0U;
l25=si0;
L51:;
{
si0=l7;
si1=-8U;
si0+=si1;
l29=si0;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l26;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l36=sj1;
sj2=l27;
sj3=l32;
si2=sj2 <= sj3;
sj3=l27;
sj4=l32;
si3=sj3 < sj4;
si4=l24;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l24=si2;
sj2=(U64)(si2);
si3=l26;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l36;
sj1=l27;
si0=sj0 <= sj1;
sj1=l36;
sj2=l27;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
si0=l26;
si1=16U;
si0+=si1;
l26=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l23;
si1=l25;
si2=2U;
si1+=si2;
l25=si1;
si0=si0 != si1;
if(si0){
goto L51;
}
}
L49:;
sj0=l28;
sj1=l35;
sj0|=sj1;
l35=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L42;
}
si0=l18;
si1=l25;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l26=si0;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
l28=sj1;
si2=l24;
sj2=(U64)(si2);
si3=l2;
si4=l7;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l27=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 <= sj1;
sj1=l28;
sj2=l27;
si1=sj1 < sj2;
si2=l24;
si0=si2?si0:si1;
l24=si0;
L42:;
si0=l14;
sj1=l35;
si2=l24;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l34;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L56;
}
sj0=l22;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L58;
}
si0=l12;
si1=5U;
si0*=si1;
l7=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=l7;
si1=l12;
si2=l8;
si1+=si2;
l29=si1;
si0=si0 >= si1;
if(si0){
goto L57;
}
si0=1198932U;
si1=35U;
si2=1203520U;
f673(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=1203696U;
si1=33U;
si2=1203732U;
f673(i,si0,si1,si2);
UNREACHABLE;
L57:;
si0=l8;
si1=2U;
si0+=si1;
l26=si0;
si1=l7;
si2=l29;
si1-=si2;
l20=si1;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l5;
si1=l7;
si0-=si1;
l3=si0;
si0=l4;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l4;
si1=l29;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=8U;
si0+=si1;
l13=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si0=l8;
si1=43U;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l8;
si1=390U;
si0=si0 < si1;
if(si0){
goto L59;
}
si0=l4;
si1=l9;
si2=l13;
si3=l8;
si4=l31;
si5=l3;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L52;
L59:;
si0=l4;
si1=l9;
si2=l13;
si3=l8;
si4=l31;
si5=l3;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L52;
L56:;
si0=1203748U;
si1=32U;
si2=1203780U;
f673(i,si0,si1,si2);
UNREACHABLE;
L55:;
si0=1198932U;
si1=35U;
si2=1203504U;
f673(i,si0,si1,si2);
UNREACHABLE;
L54:;
si0=l26;
si1=l20;
si2=1203536U;
f666(i,si0,si1,si2);
UNREACHABLE;
L53:;
si0=l4;
si1=l9;
si2=l13;
si3=l8;
f1101(i,si0,si1,si2,si3);
L52:;
si0=l4;
si1=l7;
si0+=si1;
l19=si0;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L61;
}
sj0=0ULL;
l28=sj0;
goto L60;
L61:;
si0=l8;
if(si0){
goto L63;
}
sj0=0ULL;
l28=sj0;
goto L62;
L63:;
si0=l4;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l8;
si1=1U;
si0&=si1;
l11=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L65;
}
sj0=0ULL;
l28=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l35=sj0;
goto L64;
L65:;
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=-2U;
si1&=si2;
si0-=si1;
l23=si0;
si0=l8;
si1=4U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=24U;
si0+=si1;
l26=si0;
sj0=0ULL;
l35=sj0;
si0=l21;
l7=si0;
sj0=0ULL;
l28=sj0;
L66:;
{
si0=l7;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l26;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l25=si0;
sj1=0ULL;
sj2=l27;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l36;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l27=sj1;
si2=l25;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l32;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l26;
si1=16U;
si0+=si1;
l26=si0;
si0=l23;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L66;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L64:;
si0=l11;
si0=!(si0);
if(si0){
goto L62;
}
si0=l21;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l26=si0;
sj1=l28;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l13;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l35;
sj1=l27;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l32;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
L62:;
sj0=l28;
sj1=l22;
sj0+=sj1;
l28=sj0;
L60:;
si0=l19;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=42U;
si0=si0 < si1;
if(si0){
goto L68;
}
si0=l8;
si1=389U;
si0=si0 < si1;
if(si0){
goto L69;
}
si0=l14;
si1=l20;
si2=l18;
si3=l12;
si4=l31;
si5=l3;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L67;
L69:;
si0=l14;
si1=l20;
si2=l18;
si3=l12;
si4=l31;
si5=l3;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L67;
L68:;
si0=l14;
si1=l20;
si2=l18;
si3=l12;
f1101(i,si0,si1,si2,si3);
L67:;
si0=l8;
si1=2U;
si0<<=(si1&31);
l7=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L72;
}
si0=l1;
si1=l7;
si0-=si1;
l24=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si0=l10;
si1=43U;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l10;
si1=390U;
si0=si0 < si1;
if(si0){
goto L73;
}
si0=l26;
si1=l24;
si2=l15;
si3=l10;
si4=l31;
si5=l3;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L70;
L73:;
si0=l26;
si1=l24;
si2=l15;
si3=l10;
si4=l31;
si5=l3;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L70;
L72:;
si0=l7;
si1=l1;
si2=1203552U;
f662(i,si0,si1,si2);
UNREACHABLE;
L71:;
si0=l26;
si1=l24;
si2=l15;
si3=l10;
f1101(i,si0,si1,si2,si3);
L70:;
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L80;
}
si0=l12;
si1=2U;
si0<<=(si1&31);
l7=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L78;
}
si0=l5;
si1=l7;
si0-=si1;
l24=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L77;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L76;
}
si0=l29;
si1=l1;
si2=l9;
si1-=si2;
l25=si1;
si0=si0 <= si1;
if(si0){
goto L79;
}
si0=l29;
si1=l25;
si2=1203632U;
f666(i,si0,si1,si2);
UNREACHABLE;
L80:;
si0=0U;
si1=0U;
si2=1203568U;
f663(i,si0,si1,si2);
UNREACHABLE;
L79:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
l22=sj0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
l23=si0;
si0=l4;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l8;
si1=43U;
si0=si0 < si1;
if(si0){
goto L75;
}
si0=l24;
si1=l12;
si0-=si1;
l26=si0;
si0=l3;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l8;
si1=390U;
si0=si0 < si1;
if(si0){
goto L81;
}
si0=l23;
si1=l9;
si2=l3;
si3=l8;
si4=l24;
si5=l26;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L74;
L81:;
si0=l23;
si1=l9;
si2=l3;
si3=l8;
si4=l24;
si5=l26;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L74;
L78:;
si0=l7;
si1=l5;
si2=1203584U;
f662(i,si0,si1,si2);
UNREACHABLE;
L77:;
si0=1198932U;
si1=35U;
si2=1203600U;
f673(i,si0,si1,si2);
UNREACHABLE;
L76:;
si0=l9;
si1=l1;
si2=1203616U;
f662(i,si0,si1,si2);
UNREACHABLE;
L75:;
si0=l23;
si1=l9;
si2=l3;
si3=l8;
f1101(i,si0,si1,si2,si3);
L74:;
si0=l23;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l28=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L84;
}
sj0=l28;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L82;
case 1:
goto L85;
default:
goto L82;
}
L85:;
sj0=1ULL;
l35=sj0;
si0=l8;
if(si0){
goto L86;
}
sj0=0ULL;
l28=sj0;
goto L83;
L86:;
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L88;
}
sj0=0ULL;
l28=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l34=sj0;
goto L87;
L88:;
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=-2U;
si1&=si2;
si0-=si1;
l9=si0;
si0=l8;
si1=5U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=40U;
si0+=si1;
l26=si0;
sj0=0ULL;
l34=sj0;
si0=l31;
l7=si0;
sj0=0ULL;
l28=sj0;
L89:;
{
si0=l7;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l26;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l25=si0;
sj1=0ULL;
sj2=l27;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l36;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l27=sj1;
si2=l25;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l32;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l26;
si1=16U;
si0+=si1;
l26=si0;
si0=l9;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L89;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L87:;
si0=l13;
si0=!(si0);
if(si0){
goto L83;
}
sj0=1ULL;
l35=sj0;
si0=l31;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l26=si0;
sj1=l28;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l3;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l34;
sj1=l27;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l32;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
goto L83;
L84:;
sj0=l28;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L90;
}
sj0=l28;
sj1=1ULL;
sj0<<=(sj1&63);
l35=sj0;
si0=l8;
if(si0){
goto L91;
}
sj0=0ULL;
l28=sj0;
goto L83;
L91:;
si0=l8;
si1=1U;
si0&=si1;
l13=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L93;
}
sj0=0ULL;
l28=sj0;
si0=0U;
l7=si0;
sj0=0ULL;
l34=sj0;
goto L92;
L93:;
si0=0U;
l24=si0;
si0=0U;
si1=l8;
si2=-2U;
si1&=si2;
si0-=si1;
l9=si0;
si0=l8;
si1=5U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=40U;
si0+=si1;
l26=si0;
sj0=0ULL;
l34=sj0;
si0=l31;
l7=si0;
sj0=0ULL;
l28=sj0;
L94:;
{
si0=l7;
sj1=l28;
si2=l7;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l26;
si3=-8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=2ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l25=si0;
sj1=0ULL;
sj2=l27;
sj3=l28;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l32;
sj3=62ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l36;
sj3=l27;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l27=sj1;
si2=l25;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l28=sj1;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=2ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l28;
sj1=l27;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l32;
sj2=62ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l26;
si1=16U;
si0+=si1;
l26=si0;
si0=l9;
si1=l24;
si2=-2U;
si1+=si2;
l24=si1;
si0=si0 != si1;
if(si0){
goto L94;
}
}
si0=0U;
si1=l24;
si0-=si1;
l7=si0;
L92:;
si0=l13;
si0=!(si0);
if(si0){
goto L83;
}
si0=l31;
si1=l7;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l26=si0;
sj1=l28;
si2=l26;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l27=sj1;
si2=l3;
si3=l7;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj3=2ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l36=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l34;
sj1=l27;
sj2=l28;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l32;
sj2=62ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l36;
sj2=l27;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l28=sj0;
goto L83;
L90:;
si0=1198692U;
si1=43U;
si2=1203648U;
f673(i,si0,si1,si2);
UNREACHABLE;
L83:;
sj0=l35;
sj1=l28;
sj0+=sj1;
l28=sj0;
L82:;
si0=l23;
si1=l18;
si0+=si1;
sj1=l28;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=l5;
si0=si0 > si1;
if(si0){
goto L98;
}
si0=l5;
si1=l29;
si0-=si1;
l26=si0;
si1=l8;
si2=3U;
si1*=si2;
si2=4U;
si1+=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L97;
}
si0=l8;
si1=43U;
si0=si0 < si1;
if(si0){
goto L96;
}
si0=l26;
si1=l7;
si0-=si1;
l26=si0;
si0=l14;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l8;
si1=390U;
si0=si0 < si1;
if(si0){
goto L99;
}
si0=l0;
si1=l1;
si2=l2;
si3=l8;
si4=l24;
si5=l26;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L95;
L99:;
si0=l0;
si1=l1;
si2=l2;
si3=l8;
si4=l24;
si5=l26;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L95;
L98:;
si0=1198932U;
si1=35U;
si2=1203664U;
f673(i,si0,si1,si2);
UNREACHABLE;
L97:;
si0=1198932U;
si1=35U;
si2=1203680U;
f673(i,si0,si1,si2);
UNREACHABLE;
L96:;
si0=l0;
si1=l1;
si2=l2;
si3=l8;
f1101(i,si0,si1,si2,si3);
L95:;
si0=l0;
si1=l1;
si2=l14;
si3=l7;
si4=l4;
si5=l29;
si6=l8;
si7=l10;
si8=1U;
si7<<=(si8&31);
si8=0U;
sj9=l22;
f1369(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,sj9);
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L28:;
si0=1195692U;
si1=34U;
si2=1195840U;
f673(i,si0,si1,si2);
UNREACHABLE;
L27:;
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
si4=1195856U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1104(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14;
U64 sj6,sj7,sj8;
si0=l3;
si1=3U;
si2=3U;
si0=f1303(i,si0,si1,si2);
l6=si0;
si1=7U;
si0*=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l3;
si1=l7;
si0-=si1;
l7=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l7;
si1=1U;
si0<<=(si1&31);
l8=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l6;
si1=3U;
si0*=si1;
l9=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l1;
si1=l9;
si0-=si1;
l7=si0;
si1=l6;
si2=2U;
si1<<=(si2&31);
l10=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l7;
si1=l10;
si0-=si1;
l7=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l7;
si1=l10;
si0-=si1;
l11=si0;
si1=l6;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l11;
si1=l7;
si0-=si1;
l12=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l12;
si1=l7;
si0-=si1;
si1=l7;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l7;
si1=l9;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l14=si0;
si1=l12;
si0+=si1;
l15=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
si1=l12;
si0+=si1;
l16=si0;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=3ULL;
si9=l0;
si10=l7;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=l6;
si0+=si1;
l17=si0;
si1=l6;
si0+=si1;
l12=si0;
si1=1U;
si0<<=(si1&31);
l18=si0;
si1=l5;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l5;
si1=l18;
si0-=si1;
l5=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=l12;
si0-=si1;
l19=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l19;
si1=l12;
si0-=si1;
l5=si0;
si0=l4;
si1=l18;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l18;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L1;
L16:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l18;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L1;
L15:;
si0=1204060U;
si1=28U;
si2=1204088U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1204120U;
si1=32U;
si2=1204152U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1203796U;
si1=24U;
si2=1204104U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1198932U;
si1=35U;
si2=1203852U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1198932U;
si1=35U;
si2=1203868U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1198932U;
si1=35U;
si2=1203868U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1198932U;
si1=35U;
si2=1203884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1198932U;
si1=35U;
si2=1203884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1198932U;
si1=35U;
si2=1203884U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=l9;
si2=1203900U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1198932U;
si1=35U;
si2=1203916U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1198932U;
si1=35U;
si2=1203932U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1198932U;
si1=35U;
si2=1203948U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=l18;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L1:;
si0=l17;
si1=l9;
si0=si0 > si1;
if(si0){
goto L20;
}
si0=l4;
si1=l18;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=3ULL;
sj7=0ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=2ULL;
si9=l0;
si10=l7;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l7;
si1=1089U;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L21;
L23:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
si0=l12;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
goto L21;
L22:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
L21:;
si0=l18;
si1=l12;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=2ULL;
sj7=0ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
si8=l0;
si9=l7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L17;
L24:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L17;
L20:;
si0=l17;
si1=l9;
si2=1203964U;
f666(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1198932U;
si1=35U;
si2=1203980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
si0=l20;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L17:;
si0=l20;
si1=l12;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=1ULL;
sj7=2ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=3ULL;
si9=l0;
si10=l7;
si0=f1096(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
si0=l21;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L25;
L27:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
si0=l21;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L25;
L26:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
si0=l21;
si1=l12;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L25:;
si0=l21;
si1=l19;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=3ULL;
sj7=6ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=1ULL;
si9=l0;
si10=l7;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L30;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L28;
L30:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L28;
L29:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
si0=l13;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L28:;
si0=l13;
si1=l10;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=1ULL;
sj7=0ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
si8=l0;
si9=l7;
si0=f1094(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L33;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L31;
L33:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L31;
L32:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si1=l10;
si2=l16;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L31:;
si0=l14;
si1=l10;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=0ULL;
sj7=0ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l16;
si1=l7;
si2=l15;
si3=l7;
si4=7U;
si5=l2;
si6=l3;
si7=l6;
sj8=2ULL;
si9=l0;
si10=l7;
si0=f1096(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L34;
L36:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L34;
L35:;
si0=l0;
si1=l9;
si2=l15;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L34:;
si0=l11;
si1=l7;
si2=1U;
si1<<=(si2&31);
l16=si1;
si0=si0 < si1;
if(si0){
goto L40;
}
si0=l7;
si1=l11;
si2=l16;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l15;
si1=l16;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=l7;
si1=390U;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l7;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l15;
si1=l16;
si2=l10;
si3=l7;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L37;
L41:;
si0=l15;
si1=l16;
si2=l10;
si3=l7;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L37;
L40:;
si0=1198932U;
si1=35U;
si2=1203996U;
f673(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l7;
si1=l10;
si2=1204012U;
f666(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l15;
si1=l16;
si2=l10;
si3=l7;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L37:;
si0=l15;
si1=l11;
si2=l0;
si3=l17;
si4=0U;
si5=l6;
sj6=2ULL;
sj7=4ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l6;
si1=l3;
si0=si0 > si1;
if(si0){
goto L44;
}
si0=l6;
si1=390U;
si0=si0 < si1;
if(si0){
goto L43;
}
si0=l6;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l0;
si1=l9;
si2=l2;
si3=l6;
si4=l22;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L42;
L45:;
si0=l0;
si1=l9;
si2=l2;
si3=l6;
si4=l22;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L42;
L44:;
si0=l6;
si1=l3;
si2=1204028U;
f666(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=l0;
si1=l9;
si2=l2;
si3=l6;
si4=l22;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L42:;
si0=l12;
si1=l5;
si0=si0 > si1;
if(si0){
goto L46;
}
si0=l0;
si1=l1;
si2=l21;
si3=l12;
si4=l20;
si5=l12;
si6=l18;
si7=l12;
si8=l4;
si9=l12;
si10=l6;
si11=l8;
si12=0U;
si13=l22;
si14=l12;
f1378(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14);
goto L0;
L46:;
si0=l12;
si1=l5;
si2=1204044U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1105(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=0U;
l1=si0;
si0=l0;
si1=43U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si1=390U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l0;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
goto L0;
L3:;
si0=l0;
si1=11700U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=50U;
si0=f1183(i,si0,si1);
goto L0;
L4:;
si0=l0;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l1=si0;
L2:;
si0=l1;
goto L0;
L1:;
si0=l0;
si1=1U;
si0<<=(si1&31);
si1=128U;
si0+=si1;
L0:;
return si0;
}

void f1106(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=43U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=390U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1103(i,si0,si1,si2,si3,si4,si5);
goto L0;
L4:;
si0=l3;
si1=11700U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=50U;
si5=l4;
si6=l5;
f1184(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L5:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1104(i,si0,si1,si2,si3,si4,si5);
goto L0;
L3:;
si0=1204168U;
si1=24U;
si2=1204192U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
f1101(i,si0,si1,si2,si3);
goto L0;
L1:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f1102(i,si0,si1,si2,si3,si4,si5);
L0:;
}

void f1107(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
si0=1U;
l3=si0;
si0=8U;
l4=si0;
si0=8U;
l5=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l6;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l2;
si1=4U;
si0<<=(si1&31);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l6;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l7;
if(si0){
goto L12;
}
si0=l8;
l5=si0;
goto L11;
L12:;
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=0U;
si2=l7;
si0=f15392(i,si0,si1,si2);
goto L10;
L13:;
si0=l7;
si1=1U;
si0=f15273(i,si0,si1);
l5=si0;
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=0U;
l7=si0;
si0=l2;
si1=43U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=390U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l2;
si1=1090U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l2;
si1=3U;
si0*=si1;
si1=64U;
si0+=si1;
l7=si0;
goto L16;
L17:;
si0=l2;
si1=11699U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=15U;
si0*=si1;
si1=3U;
si0>>=(si1&31);
si1=505U;
si0+=si1;
l7=si0;
L16:;
si0=l7;
si1=3U;
si0<<=(si1&31);
l8=si0;
goto L7;
L15:;
si0=l6;
si1=128U;
si0+=si1;
l9=si0;
goto L8;
L14:;
si0=l2;
si1=50U;
si0=f1183(i,si0,si1);
l9=si0;
if(si0){
goto L8;
}
goto L1;
L9:;
si0=l8;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=l9;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l9;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
l7=si0;
L7:;
si0=l8;
if(si0){
goto L4;
}
si0=8U;
si1=l8;
si0=f15277(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
si0=l4;
si1=0U;
si2=l8;
si0=f15392(i,si0,si1,si2);
goto L1;
L6:;
si0=8U;
l4=si0;
si0=0U;
l8=si0;
si0=l9;
l7=si0;
goto L3;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l8;
si1=1U;
si0=f15273(i,si0,si1);
l4=si0;
L3:;
si0=0U;
l3=si0;
si0=l4;
if(si0){
goto L1;
}
L2:;
si0=8U;
si1=l8;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l5;
si1=l6;
si2=l1;
si3=l2;
si4=l4;
si5=l7;
f1106(i,si0,si1,si2,si3,si4,si5);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L18;
}
si0=l4;
f15271(i,si0);
L18:;
L0:;
}

void f1108(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
}
si0=l2;
if(si0){
goto L10;
}
si0=8U;
l5=si0;
si0=0U;
l6=si0;
goto L9;
L10:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L12;
}
si0=l7;
l5=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l5=si0;
goto L11;
L13:;
si0=l6;
si0=f15269(i,si0);
l5=si0;
L11:;
si0=l5;
si0=!(si0);
if(si0){
goto L7;
}
L9:;
si0=l5;
si1=l1;
si2=l6;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l2;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
si0=l5;
if(si0){
goto L15;
}
si0=l7;
l6=si0;
goto L14;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l7;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l7;
si1=l5;
si0=f15277(i,si0,si1);
l6=si0;
goto L14;
L16:;
si0=l5;
si0=f15269(i,si0);
l6=si0;
L14:;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
si0=l2;
si1=-1U;
si0+=si1;
l1=si0;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
sj0=l8;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l1;
sj3=1ULL;
f1323(i,si0,si1,si2,sj3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l4;
si1=1U;
si2=l2;
f1196(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L18:;
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
goto L2;
L17:;
sj0=0ULL;
sj1=l8;
sj0-=sj1;
sj1=l3;
sj0^=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l6;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=-1U;
si0+=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l4;
si1=1U;
si2=l1;
f1196(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L19:;
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l1;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L7:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L6:;
f53(i);
UNREACHABLE;
L5:;
si0=l7;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1204352U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l6;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l1;
sj3=1ULL;
f1076(i,si0,si1,si2,sj3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+24U);
l2=si1;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l4;
si1=1U;
si2=l2;
f1196(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
L20:;
si0=l6;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l4;
si1=l7;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
f15271(i,si0);
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
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1109(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=l3;
sj0^=sj1;
l3=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l4;
si1=l1;
si2=8U;
si1+=si2;
si2=l2;
si3=-1U;
si2+=si3;
sj3=1ULL;
f1076(i,si0,si1,si2,sj3);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 == si1;
if(si0){
goto L5;
}
goto L2;
L7:;
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
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
goto L8;
L10:;
si0=l5;
si0=f15269(i,si0);
l7=si0;
L8:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l1;
si2=l5;
si0=f15390(i,si0,si1,si2);
l1=si0;
sj1=0ULL;
sj2=l3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=1198692U;
si1=43U;
si2=1204368U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l2;
si2=1U;
f1196(i,si0,si1,si2);
goto L2;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=l6;
si1=l5;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si0=f15391(i,si0,si1,si2);
L11:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L1:;
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
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1110(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l1;
si2=l2;
sj3=1ULL;
f1323(i,si0,si1,si2,sj3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
sj1=l3;
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L7:;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l7=si0;
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
l8=si0;
si0=l7;
if(si0){
goto L9;
}
si0=l8;
l6=si0;
goto L8;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=l8;
si1=l7;
si0=f15277(i,si0,si1);
l6=si0;
goto L8;
L10:;
si0=l7;
si0=f15269(i,si0);
l6=si0;
L8:;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si2=l7;
si0=f15390(i,si0,si1,si2);
sj1=0ULL;
sj2=l5;
sj1-=sj2;
sj2=l3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
l1=si0;
L6:;
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=1204416U;
si1=24U;
si2=1204440U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1204400U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1204384U;
f663(i,si0,si1,si2);
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

void f1111(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
goto L7;
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
L9:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L8;
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
goto L9;
}
}
si0=l7;
l8=si0;
L8:;
si0=l4;
if(si0){
goto L6;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L5;
}
goto L1;
L7:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L6:;
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
L11:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L10;
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
goto L11;
}
}
si0=l7;
l9=si0;
L10:;
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
goto L5;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l8;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L24;
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
goto L26;
}
si0=8U;
l6=si0;
goto L25;
L26:;
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l13=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=l10;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l14=si0;
si0=l13;
if(si0){
goto L28;
}
si0=l14;
l6=si0;
goto L27;
L28:;
si0=l14;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l14;
si1=l13;
si0=f15277(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=0U;
si2=l13;
si0=f15392(i,si0,si1,si2);
goto L25;
L29:;
si0=l13;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
L27:;
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
L25:;
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
goto L21;
case 1:
goto L23;
default:
goto L22;
}
L24:;
si0=l4;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l10=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=l4;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l10;
if(si0){
goto L31;
}
si0=l8;
l9=si0;
goto L30;
L31:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l8;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l8;
si1=l10;
si0=f15277(i,si0,si1);
l9=si0;
goto L30;
L32:;
si0=l10;
si0=f15269(i,si0);
l9=si0;
L30:;
si0=l9;
si0=!(si0);
if(si0){
goto L13;
}
si0=l9;
si1=l3;
si2=l10;
si0=f15390(i,si0,si1,si2);
l10=si0;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l2;
si1=l4;
si0-=si1;
l10=si0;
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l5;
si1=l4;
si2=l10;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L33:;
si0=l9;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=l10;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L23:;
si0=l7;
if(si0){
goto L15;
}
si0=l8;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l8;
si1=l4;
si2=1204472U;
f666(i,si0,si1,si2);
UNREACHABLE;
L22:;
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
l10=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=1U;
si0+=si1;
l6=si0;
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l9;
si1=l2;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l10;
si0-=si1;
si1=l1;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l16=si1;
si2=l1;
si3=l6;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l13=si1;
si2=3U;
si1>>=(si2&31);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L34;
}
si0=l5;
si1=l10;
si2=l7;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L34:;
si0=l6;
si1=l9;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si0=l7;
si1=3U;
si0&=si1;
l14=si0;
si0=l7;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=0U;
l6=si0;
goto L36;
L37:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l18=si0;
si0=l17;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=0U;
l6=si0;
si0=0U;
si1=l13;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l20=si0;
si0=0U;
l21=si0;
L38:;
{
si0=l19;
si1=l6;
si0+=si1;
l7=si0;
si1=l18;
si2=l6;
si1+=si2;
l13=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l13;
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
si0=l20;
si1=l21;
si2=-4U;
si1+=si2;
l21=si1;
si0=si0 != si1;
if(si0){
goto L38;
}
}
si0=0U;
si1=l21;
si0-=si1;
l6=si0;
si0=l10;
si1=l21;
si0-=si1;
l10=si0;
L36:;
si0=l14;
si0=!(si0);
if(si0){
goto L35;
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
l6=si0;
si0=l17;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L39:;
{
si0=l7;
si1=l6;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
if(si0){
goto L39;
}
}
L35:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
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
sj0^=sj1;
l15=sj0;
goto L4;
L21:;
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si2=l3;
si3=l9;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
sj0^=sj1;
l15=sj0;
sj1=0ULL;
si0=sj0 != sj1;
l14=si0;
sj0=0ULL;
sj1=l15;
sj0-=sj1;
l15=sj0;
goto L3;
L20:;
si0=l8;
si1=l9;
si0-=si1;
l7=si0;
si0=l3;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L40;
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
L40:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l13;
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
si1=l8;
si2=3U;
si1<<=(si2&31);
l6=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=l6;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l15=sj0;
goto L4;
L19:;
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
goto L18;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
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
l13=si1;
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
l11=si0;
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
l12=si0;
si0=l19;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=0U;
l6=si0;
si0=0U;
si1=l13;
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
si0=l21;
si1=l6;
si0+=si1;
l7=si0;
si1=l12;
si2=l6;
si1+=si2;
l13=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l13;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l13;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l13;
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
si0=l11;
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
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
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
l13=si0;
si0=0U;
si1=l8;
si2=-1U;
si1+=si2;
l11=si1;
si2=l11;
si3=l8;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
sj0=l15;
sj1=0ULL;
si2=l7;
sj0=si2?sj0:sj1;
l15=sj0;
si0=l13;
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
L18:;
f53(i);
UNREACHABLE;
L17:;
si0=l9;
si1=l2;
si2=1204456U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l6;
si1=l9;
si2=1204456U;
f675(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l9;
si1=l8;
si2=1204472U;
f675(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l4;
si1=l2;
si2=1204520U;
f662(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l8;
si1=l10;
f52(i,si0,si1);
UNREACHABLE;
L12:;
si0=l14;
si1=l13;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=1204536U;
si1=30U;
si2=1204568U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1U;
l14=si0;
L3:;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si0=l10;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L58;
}
si0=l5;
si1=l10;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
L58:;
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
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l13;
si1=1U;
si0+=si1;
l10=si0;
si0=l13;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l13;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l11;
si1=l1;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
l8=si1;
si0-=si1;
si1=3U;
si0>>=(si1&31);
l7=si0;
si1=l12;
si2=l3;
si3=l10;
si2+=si3;
l6=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l10=si1;
si2=l7;
si3=l10;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si0=l14;
if(si0){
goto L64;
}
si0=l7;
if(si0){
goto L63;
}
si0=0U;
l10=si0;
goto L62;
L64:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si0-=si1;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L67;
}
si0=l5;
si1=l9;
si2=l7;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
goto L66;
L67:;
si0=l7;
si0=!(si0);
if(si0){
goto L65;
}
L66:;
si0=l7;
si1=1U;
si0&=si1;
l20=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=l7;
si1=1U;
si0=si0 != si1;
if(si0){
goto L69;
}
si0=0U;
l10=si0;
goto L68;
L69:;
si0=0U;
l10=si0;
si0=0U;
si1=l7;
si2=536870910U;
si1&=si2;
si0-=si1;
l12=si0;
si0=l3;
si1=l13;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l21=si0;
si0=l1;
si1=l7;
si0+=si1;
l18=si0;
si0=l16;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=0U;
l7=si0;
L70:;
{
si0=l19;
si1=l10;
si0+=si1;
l13=si0;
si1=l21;
si2=l10;
si1+=si2;
l11=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l18;
si3=l10;
si2+=si3;
l14=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=l11;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l14;
si3=16U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l12;
si1=l7;
si2=-2U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L70;
}
}
si0=0U;
si1=l7;
si0-=si1;
l10=si0;
si0=l9;
si1=l7;
si0-=si1;
l9=si0;
L68:;
si0=l20;
si0=!(si0);
if(si0){
goto L65;
}
si0=l16;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l8;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L65:;
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
l10=si0;
goto L62;
L63:;
si0=0U;
l10=si0;
L71:;
{
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l15=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
l13=si0;
sj0=l15;
si1=l10;
si2=255U;
si1&=si2;
l11=si1;
si1=!(si1);
sj1=(U64)(si1);
sj0+=sj1;
l15=sj0;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L72;
}
si0=l5;
si1=l9;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L72:;
si0=l10;
si1=l13;
si2=l11;
si0=si2?si0:si1;
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
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
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L71;
}
}
L62:;
si0=l2;
si1=l4;
si0=si0 == si1;
if(si0){
goto L59;
}
si0=l2;
si1=l4;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
si2=l2;
si3=l4;
si2=si2 > si3;
l8=si2;
si0=si2?si0:si1;
l6=si0;
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l3;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si0=l10;
si1=255U;
si0&=si1;
if(si0){
goto L73;
}
si0=l6;
si0=!(si0);
if(si0){
goto L59;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
l6=si0;
si0=0U;
l10=si0;
L74:;
{
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
l15=sj0;
sj1=-1ULL;
si0=sj0 != sj1;
l3=si0;
sj0=l15;
si1=l10;
si2=255U;
si1&=si2;
l7=si1;
si1=!(si1);
sj1=(U64)(si1);
sj0+=sj1;
l15=sj0;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l5;
si1=l9;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L75:;
si0=l10;
si1=l3;
si2=l7;
si0=si2?si0:si1;
l10=si0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
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
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L59;
}
goto L74;
}
L73:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l9;
si0-=si1;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L76;
}
si0=l5;
si1=l9;
si2=l6;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L76:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l6;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=l9;
si2=l6;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L59;
L61:;
si0=l10;
si1=l2;
si2=1204488U;
f662(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l10;
si1=l4;
si2=1204504U;
f662(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=0U;
l10=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L79:;
{
si0=l3;
si1=l10;
si0=si0 == si1;
if(si0){
goto L78;
}
si0=l6;
si1=l10;
si0+=si1;
l8=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l8;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L79;
}
goto L77;
}
L78:;
si0=l9;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L80;
}
si0=l5;
si1=l9;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
L80:;
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L77:;
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
si0=1204584U;
si1=30U;
si2=1204616U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1112(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U64 l26=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
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
goto L16;
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
L18:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L17;
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
goto L18;
}
}
si0=l7;
l8=si0;
L17:;
si0=l4;
if(si0){
goto L15;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L14;
}
goto L1;
L16:;
si0=0U;
l8=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L15:;
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
L20:;
{
si0=l3;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
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
goto L20;
}
}
si0=l7;
l9=si0;
L19:;
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
goto L14;
}
si0=l9;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L21;
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
si0=si2?si0:si1;
l13=si0;
if(si0){
goto L24;
}
si0=8U;
l10=si0;
goto L23;
L24:;
si0=l13;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l13;
si1=3U;
si0<<=(si1&31);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l13;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L26;
}
si0=l7;
l10=si0;
goto L25;
L26:;
si0=l7;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l7;
si1=l6;
si0=f15277(i,si0,si1);
l10=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l10;
si1=0U;
si2=l6;
si0=f15392(i,si0,si1,si2);
goto L23;
L27:;
si0=l6;
si1=1U;
si0=f15273(i,si0,si1);
l10=si0;
L25:;
si0=l10;
si0=!(si0);
if(si0){
goto L12;
}
L23:;
si0=l8;
si1=l9;
si2=l8;
si3=l9;
si2=si2 > si3;
l14=si2;
si0=si2?si0:si1;
l15=si0;
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l13;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l9;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l13;
si1=l4;
si2=l2;
si3=l14;
si1=si3?si1:si2;
l16=si1;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
si1=l1;
si2=l14;
si0=si2?si0:si1;
l17=si0;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=l5;
si1=16U;
si0+=si1;
si1=l13;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l18;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l13;
si1=1U;
si0+=si1;
l10=si0;
si0=l15;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l15;
si1=l16;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l6;
si0-=si1;
si1=l17;
si2=l15;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l19=si1;
si2=l17;
si3=l10;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si1-=si2;
l8=si1;
si2=3U;
si1>>=(si2&31);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L28;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
si2=l9;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
L28:;
si0=l2;
si1=l4;
si2=l14;
si0=si2?si0:si1;
l20=si0;
si0=l10;
si1=l15;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l21=si0;
si0=l9;
si1=3U;
si0&=si1;
l22=si0;
si0=l9;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=0U;
l10=si0;
goto L30;
L31:;
si0=l17;
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l23=si0;
si0=l21;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=0U;
l10=si0;
si0=0U;
si1=l8;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0-=si1;
l25=si0;
si0=0U;
l7=si0;
L32:;
{
si0=l24;
si1=l10;
si0+=si1;
l9=si0;
si1=l23;
si2=l10;
si1+=si2;
l8=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
si1=l8;
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
si0=l25;
si1=l7;
si2=-4U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L32;
}
}
si0=0U;
si1=l7;
si0-=si1;
l10=si0;
si0=l6;
si1=l7;
si0-=si1;
l6=si0;
L30:;
si0=l22;
si0=!(si0);
if(si0){
goto L29;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l13;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l17;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si0=l22;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l21;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L33:;
{
si0=l9;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L33;
}
}
L29:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l15;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l15;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
si2=l14;
si0=si2?si0:si1;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0+=sj1;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
sj0^=sj1;
l18=sj0;
si0=l6;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+20U);
si0=si0 != si1;
if(si0){
goto L34;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
L34:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l18;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L22:;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f1324(i,si0,si1,si2,si3,si4);
si0=l5;
si1=8U;
si0+=si1;
l10=si0;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L4;
}
si0=1204760U;
si1=25U;
si2=1204788U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si3=l1;
si4=l2;
f1324(i,si0,si1,si2,si3,si4);
si0=l5;
si1=8U;
si0+=si1;
l10=si0;
si1=l5;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L5;
}
si0=1204760U;
si1=25U;
si2=1204804U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=1204536U;
si1=30U;
si2=1204820U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
f53(i);
UNREACHABLE;
L12:;
si0=l7;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=l10;
si1=l15;
si2=1204648U;
f675(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l15;
si1=l16;
si2=1204648U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l13;
si1=l16;
si2=1204632U;
f663(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l15;
si1=l20;
si2=1204664U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l15;
si1=l16;
si2=1204680U;
f663(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l8;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l18=sj0;
si0=l1;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l26=sj0;
si0=l5;
si1=16U;
si0+=si1;
si1=l13;
f1193(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=0ULL;
sj2=l18;
sj1-=sj2;
sj2=0ULL;
sj3=l26;
sj2-=sj3;
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L5:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l10;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+24U);
si2=1U;
si1+=si2;
l23=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l15;
si1=1U;
si0+=si1;
l10=si0;
si0=l15;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l15;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l23;
si0-=si1;
si1=l11;
si2=l1;
si3=l10;
si4=3U;
si3<<=(si4&31);
l10=si3;
si2+=si3;
l24=si2;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l9=si1;
si2=l12;
si3=l3;
si4=l10;
si3+=si4;
l25=si3;
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
goto L43;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l23;
si2=l9;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l23=si0;
goto L42;
L43:;
si0=l9;
si0=!(si0);
if(si0){
goto L41;
}
L42:;
si0=l9;
si1=1U;
si0&=si1;
l14=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l17=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=0U;
l10=si0;
goto L44;
L45:;
si0=0U;
l10=si0;
si0=0U;
si1=l9;
si2=536870910U;
si1&=si2;
si0-=si1;
l13=si0;
si0=l3;
si1=l15;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l15=si0;
si0=l1;
si1=l9;
si0+=si1;
l11=si0;
si0=l17;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=0U;
l9=si0;
L46:;
{
si0=l12;
si1=l10;
si0+=si1;
l8=si0;
si1=l15;
si2=l10;
si1+=si2;
l6=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l11;
si3=l10;
si2+=si3;
l7=si2;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
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
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l13;
si1=l9;
si2=-2U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L46;
}
}
si0=0U;
si1=l9;
si0-=si1;
l10=si0;
si0=l23;
si1=l9;
si0-=si1;
l23=si0;
L44:;
si0=l14;
si0=!(si0);
if(si0){
goto L41;
}
si0=l17;
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l25;
si2=l10;
si3=3U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l24;
si3=l10;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1^=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l23;
si1=1U;
si0+=si1;
l23=si0;
L41:;
si0=l5;
si1=l23;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=-1U;
si1=l2;
si2=l4;
si1=si1 != si2;
si2=l2;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l10;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L38;
}
si0=l3;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l23;
si0-=si1;
si1=l4;
si2=l2;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l23;
si2=l10;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l23=si0;
L48:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=l10;
si0+=si1;
l10=si0;
goto L36;
L47:;
si0=l2;
si1=l4;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l23;
si0-=si1;
si1=l2;
si2=l4;
si1-=si2;
l10=si1;
si0=si0 >= si1;
if(si0){
goto L49;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l23;
si2=l10;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+24U);
l23=si0;
L49:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l23;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
si0=l23;
si1=l10;
si0+=si1;
l10=si0;
goto L36;
L40:;
si0=l10;
si1=l2;
si2=1204696U;
f662(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l10;
si1=l4;
si2=1204712U;
f662(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l2;
si1=l4;
si2=1204728U;
f662(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l4;
si1=l2;
si2=1204744U;
f662(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
L35:;
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
L2:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1204584U;
si1=30U;
si2=1204836U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1113(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1114(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1115(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1116(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1117(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f720(i,si0,sd1,si2,si3);
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
si0=f723(i,si0,sd1,si2,si3);
goto L0;
L2:;
si0=l1;
sd1=l4;
si2=l2;
si3=0U;
si0=f727(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f1118(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1119(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=129U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=128U;
si2=1103788U;
f662(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=1U;
si2=1103804U;
si3=2U;
si4=l2;
si5=l6;
si4+=si5;
si5=128U;
si4+=si5;
si5=0U;
si6=l6;
si5-=si6;
si0=f733(i,si0,si1,si2,si3,si4,si5);
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

U32 f1120(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f1121(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f1122(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
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
l7=si0;
si0=l1;
l10=si0;
L2:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
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
goto L2;
}
}
si0=l9;
l7=si0;
L1:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l8=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l6=si0;
si0=l3;
l10=si0;
L4:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
if(si0){
goto L4;
}
}
si0=l9;
l6=si0;
L3:;
si0=l7;
si1=l6;
si2=l7;
si3=l6;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l8;
si1=l4;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l2;
si1=l8;
si0-=si1;
l10=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
si1=l8;
si0-=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=l8;
si2=3U;
si1<<=(si2&31);
l7=si1;
si0+=si1;
l2=si0;
sj0=i64_load(&i->m0,(U64)si0);
sj0=I64_CTZ(sj0);
l11=sj0;
si1=l3;
si2=l7;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
sj1=I64_CTZ(sj1);
l12=sj1;
sj2=l11;
sj3=l12;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l13=sj0;
si0=!(sj0);
if(si0){
goto L15;
}
si0=l2;
si1=l10;
sj2=l13;
sj0=f1229(i,si0,si1,sj2);
si0=l4;
si1=l6;
sj2=l13;
sj0=f1229(i,si0,si1,sj2);
si0=l6;
si1=-1U;
si0+=si1;
l7=si0;
si1=l6;
si2=l4;
si3=l7;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l6=si0;
si0=l10;
si1=-1U;
si0+=si1;
l7=si0;
si1=l10;
si2=l2;
si3=l7;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
si2=!(sj2);
si0=si2?si0:si1;
l10=si0;
L15:;
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si0=0U;
l6=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l11;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L17;
}
sj0=l12;
l11=sj0;
goto L5;
L18:;
si0=l10;
if(si0){
goto L20;
}
si0=8U;
l7=si0;
goto L19;
L20:;
si0=l10;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l10;
si1=268435456U;
si0=si0 < si1;
si1=3U;
si0<<=(si1&31);
l1=si0;
si0=l3;
if(si0){
goto L22;
}
si0=l1;
l7=si0;
goto L21;
L22:;
si0=l1;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L23;
}
si0=l1;
si1=l3;
si0=f15277(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=0U;
si2=l3;
si0=f15392(i,si0,si1,si2);
goto L19;
L23:;
si0=l3;
si1=1U;
si0=f15273(i,si0,si1);
l7=si0;
L21:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
L19:;
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l10;
si2=l2;
si3=l10;
si4=l4;
si5=l6;
si0=f1088(i,si0,si1,si2,si3,si4,si5);
l2=si0;
si1=l10;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l2;
l6=si0;
goto L24;
L25:;
si0=l5;
si1=8U;
si0+=si1;
si1=l10;
si2=l2;
si3=l10;
si2-=si3;
l4=si2;
f1196(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+16U);
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l3;
si1=0U;
si2=l2;
si3=l10;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f15392(i,si0,si1,si2);
si0=l2;
si1=l6;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=l7;
si0+=si1;
si1=-8U;
si0+=si1;
l3=si0;
si0=l4;
si1=l6;
si0+=si1;
si1=-1U;
si0+=si1;
l6=si0;
L26:;
si0=l2;
si1=l10;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
L24:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+12U);
l12=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si1=1U;
si0+=si1;
l6=si0;
si0=l2;
si1=3U;
si0<<=(si1&31);
l10=si0;
L28:;
{
sj0=0ULL;
l11=sj0;
si0=l10;
si0=!(si0);
if(si0){
goto L27;
}
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si1=l7;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L28;
}
}
si0=l6;
switch(si0){
case 0:
goto L27;
case 1:
goto L29;
default:
goto L30;
}
L30:;
sj0=l12;
si1=l6;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l12;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
si2=l6;
si3=l2;
si2=si2 > si3;
sj0=si2?sj0:sj1;
l11=sj0;
si0=1U;
l6=si0;
goto L5;
L29:;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
L27:;
si0=0U;
l6=si0;
sj0=l12;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l7;
f15271(i,si0);
L31:;
si0=0U;
l7=si0;
goto L5;
L17:;
sj0=l12;
sj0=I64_CTZ(sj0);
l14=sj0;
sj1=l11;
sj1=I64_CTZ(sj1);
l15=sj1;
sj2=l14;
sj3=l15;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l16=sj0;
sj0=l12;
sj1=l14;
sj0>>=(sj1&63);
l12=sj0;
sj1=l11;
sj2=l15;
sj1>>=(sj2&63);
l11=sj1;
si0=sj0 != sj1;
if(si0){
goto L32;
}
sj0=l12;
l11=sj0;
goto L7;
L32:;
L33:;
{
sj0=l12;
sj1=l11;
si0=sj0 < sj1;
if(si0){
goto L35;
}
sj0=l12;
sj1=l11;
sj0-=sj1;
l12=sj0;
sj1=l12;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l12=sj0;
goto L34;
L35:;
sj0=l11;
sj1=l12;
sj0-=sj1;
l11=sj0;
sj1=l11;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l11=sj0;
L34:;
sj0=l12;
sj1=l11;
si0=sj0 == sj1;
if(si0){
goto L7;
}
goto L33;
}
L16:;
si0=0U;
l6=si0;
si0=l2;
si1=l10;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
sj0=f1123(i,si0,si1,sj2);
l11=sj0;
goto L6;
L14:;
si0=l8;
si1=l2;
si2=1205372U;
f662(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l8;
si1=l4;
si2=1205388U;
f662(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=0U;
si1=0U;
si2=1205404U;
f663(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=0U;
si1=0U;
si2=1205420U;
f663(i,si0,si1,si2);
UNREACHABLE;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=l1;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L8:;
si0=0U;
si1=0U;
si2=1189476U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
sj0=l11;
sj1=l16;
sj0<<=(sj1&63);
l11=sj0;
L6:;
L5:;
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
sj1=l11;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+8U,si1);
sj0=l13;
si1=l8;
sj1=(U64)(si1);
sj2=6ULL;
sj1<<=(sj2&63);
sj0+=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L36;
}
si0=l6;
si0=!(si0);
sj1=l11;
si1=!(sj1);
l10=si1;
si0&=si1;
if(si0){
goto L36;
}
si0=l5;
si1=8U;
si0+=si1;
si1=4U;
si0|=si1;
l7=si0;
si0=l6;
if(si0){
goto L37;
}
si0=l10;
si0=!(si0);
if(si0){
goto L38;
}
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L36;
L38:;
sj0=l12;
sj1=63ULL;
si0=sj0 > sj1;
if(si0){
goto L39;
}
sj0=l11;
sj1=l12;
sj0<<=(sj1&63);
l13=sj0;
sj1=l12;
sj0>>=(sj1&63);
sj1=l11;
si0=sj0 != sj1;
if(si0){
goto L39;
}
si0=l5;
sj1=l13;
i64_store(&i->m0,(U64)si0+16U,sj1);
goto L36;
L39:;
si0=l5;
sj1=l11;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=l5;
si2=24U;
si1+=si2;
si2=1U;
sj3=l12;
f1227(i,si0,si1,si2,sj3);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L36;
L37:;
si0=l7;
sj1=l12;
f1228(i,si0,sj1);
L36:;
si0=l0;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f1123(rustpythonInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L3;
}
sj0=l2;
sj1=l2;
sj1=I64_CTZ(sj1);
l4=sj1;
sj0>>=(sj1&63);
l2=sj0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l1;
si1=100000000U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=l1;
sj2=l2;
sj0=f1364(i,si0,si1,sj2);
l6=sj0;
goto L5;
L6:;
si0=l0;
si1=l1;
sj2=l2;
sj3=0ULL;
sj0=f1099(i,si0,si1,sj2,sj3);
l6=sj0;
L5:;
sj0=l6;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l6;
sj1=l6;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l7=sj0;
sj0=l2;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
sj0=l7;
l2=sj0;
goto L1;
L7:;
sj0=l7;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l2;
sj0=I64_CTZ(sj0);
l6=sj0;
sj1=l7;
sj1=I64_CTZ(sj1);
l8=sj1;
sj2=l6;
sj3=l8;
si2=sj2 < sj3;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=l2;
sj1=l6;
sj0>>=(sj1&63);
l6=sj0;
sj1=l7;
sj2=l8;
sj1>>=(sj2&63);
l2=sj1;
si0=sj0 != sj1;
if(si0){
goto L8;
}
sj0=l6;
l2=sj0;
goto L2;
L8:;
L9:;
{
sj0=l6;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L11;
}
sj0=l6;
sj1=l2;
sj0-=sj1;
l6=sj0;
sj1=l6;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l6=sj0;
goto L10;
L11:;
sj0=l2;
sj1=l6;
sj0-=sj1;
l2=sj0;
sj1=l2;
sj1=I64_CTZ(sj1);
sj0>>=(sj1&63);
l2=sj0;
L10:;
sj0=l6;
sj1=l2;
si0=sj0 == sj1;
if(si0){
goto L2;
}
goto L9;
}
L4:;
si0=1205608U;
si1=30U;
si2=1205640U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l3;
si2=1205440U;
si3=l3;
si4=8U;
si3+=si4;
si4=1205592U;
f1213(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
sj0=l2;
sj1=l9;
sj0<<=(sj1&63);
l2=sj0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
sj0=l2;
sj1=l4;
si1=(U32)(sj1);
l1=si1;
si2=l1;
sj3=l5;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
l3=si3;
si4=l1;
si5=l3;
si4=si4 < si5;
si2=si4?si2:si3;
sj3=l5;
si3=!(sj3);
si1=si3?si1:si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
L0:;
return sj0;
}

void f1124(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U64 l6,U64 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U64 l17=0;
U32 l18=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l5;
si1=l3;
si0+=si1;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
if(si0){
goto L8;
}
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
l9=si0;
si0=l3;
l10=si0;
si0=l2;
l4=si0;
si0=l0;
l11=si0;
L9:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l13=sj0;
sj1=l12;
si0=sj0 < sj1;
l14=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L11;
}
si0=l14;
l9=si0;
goto L10;
L11:;
si0=l14;
sj1=l13;
sj2=1ULL;
sj1+=sj2;
l13=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L10:;
si0=l4;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L9;
}
goto L7;
}
L8:;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0&=si1;
l15=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l3;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l9=si0;
si0=l2;
l4=si0;
si0=l0;
l11=si0;
si0=0U;
l10=si0;
L13:;
{
si0=l4;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l4;
sj2=i64_load(&i->m0,(U64)si2);
l12=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l14=si0;
si1=l11;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l13;
sj3=l12;
si2=sj2 <= sj3;
sj3=l13;
sj4=l12;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l14;
sj2=i64_load(&i->m0,(U64)si2);
l13=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l13;
si0=sj0 <= sj1;
sj1=l17;
sj2=l13;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l16;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
L12:;
si0=l15;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l11=si0;
si1=l0;
si2=l4;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
sj2=(U64)(si2);
sj1-=sj2;
si2=l11;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L7:;
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
sj0>>=(sj1&63);
l13=sj0;
si0=1U;
l4=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=-1U;
si0+=si1;
l11=si0;
si1=1U;
si0&=si1;
l14=si0;
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l11;
si1=-2U;
si0&=si1;
l10=si0;
si0=0U;
l11=si0;
si0=l2;
l4=si0;
L16:;
{
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
l9=si1;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l13;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=l4;
si2=16U;
si1+=si2;
l4=si1;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l12;
sj3=1ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l13;
sj1=1ULL;
sj0>>=(sj1&63);
l13=sj0;
si0=l10;
si1=l11;
si2=2U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
}
si0=l11;
si1=1U;
si0+=si1;
l4=si0;
L15:;
si0=l14;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=-8U;
si0+=si1;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l12=sj1;
sj2=63ULL;
sj1<<=(sj2&63);
sj2=l13;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l12;
sj1=1ULL;
sj0>>=(sj1&63);
l13=sj0;
L14:;
si0=l2;
si1=l3;
si2=-1U;
si1+=si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
si0&=si1;
l15=si0;
si0=l4;
if(si0){
goto L18;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L17;
L18:;
si0=l3;
si1=-2U;
si0&=si1;
l16=si0;
si0=0U;
l9=si0;
si0=l2;
l11=si0;
si0=l0;
l4=si0;
si0=0U;
l10=si0;
L19:;
{
si0=l4;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
l13=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l11;
sj3=i64_load(&i->m0,(U64)si3);
l12=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l14=si0;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
l17=sj1;
sj2=l13;
sj3=l12;
si2=sj2 <= sj3;
sj3=l13;
sj4=l12;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
si3=l11;
si4=8U;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l13=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l17;
sj1=l13;
si0=sj0 <= sj1;
sj1=l17;
sj2=l13;
si1=sj1 < sj2;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l11;
si1=16U;
si0+=si1;
l11=si0;
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si0=l16;
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
si0=l15;
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l11=si0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
si2=l9;
sj2=(U64)(si2);
si3=l2;
si4=l4;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L20:;
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
goto L1;
L6:;
si0=1205816U;
si1=35U;
si2=1206160U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1206284U;
si1=40U;
si2=1206324U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
L3:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=4U;
si1+=si2;
si2=1237756U;
si3=l8;
si4=8U;
si3+=si4;
si4=1241952U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=l3;
sj2=l6;
sj0=f1229(i,si0,si1,sj2);
L1:;
sj0=l7;
si0=!(sj0);
if(si0){
goto L21;
}
si0=l2;
si1=l3;
sj2=l7;
sj0=f1229(i,si0,si1,sj2);
L21:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l1;
si1=l3;
si0-=si1;
l18=si0;
si0=l0;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si0=l2;
si1=l3;
si2=l5;
si1-=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si0=l3;
si1=l5;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l0;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=0U;
l9=si0;
si0=l3;
l10=si0;
si0=l2;
l11=si0;
L31:;
{
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l13=sj0;
sj1=l12;
si0=sj0 < sj1;
l14=si0;
si0=l9;
si1=255U;
si0&=si1;
if(si0){
goto L33;
}
si0=l14;
l9=si0;
goto L32;
L33:;
si0=l14;
sj1=l13;
sj2=1ULL;
sj1+=sj2;
l13=sj1;
si1=!(sj1);
si0|=si1;
l9=si0;
L32:;
si0=l4;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l5;
si1=l10;
si2=-1U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=l9;
if(si0){
goto L29;
}
L30:;
si0=l18;
si1=l5;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l16;
si1=l15;
si2=l5;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L28;
L29:;
si0=l18;
si1=l5;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l5;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l16;
si1=l15;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
sj0=l13;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L34;
}
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si2=8U;
si1+=si2;
l4=si1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1-=si2;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l10=si0;
si0=l3;
si1=-1U;
si0^=si1;
si1=l1;
si0+=si1;
l14=si0;
si0=l0;
si1=l4;
si0+=si1;
l9=si0;
si0=0U;
l4=si0;
L35:;
{
si0=l10;
si1=l4;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l14;
si1=l4;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l9;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l13=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l13;
si0=!(sj0);
if(si0){
goto L35;
}
}
L34:;
si0=l4;
si1=1U;
si0+=si1;
l11=si0;
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l16;
si1=l11;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
si1=l15;
si2=l4;
si1+=si2;
si2=l5;
si3=l11;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
L28:;
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L27:;
si0=1206208U;
si1=57U;
si2=1206268U;
f673(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1205816U;
si1=35U;
si2=1206176U;
f673(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l5;
si1=l18;
si2=1206192U;
f666(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=1195692U;
si1=34U;
si2=1195728U;
f673(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l18;
si1=l18;
si2=1195660U;
f663(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l11;
si1=l5;
si2=1195676U;
f675(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1125(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
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
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si1=-1U;
si0+=si1;
l3=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l2;
si1=l5;
si2=3U;
si1<<=(si2&31);
si2=-8U;
si1+=si2;
l7=si1;
si0+=si1;
l3=si0;
si0=l4;
si1=l7;
si0+=si1;
l8=si0;
si0=l0;
si1=l7;
si0+=si1;
l7=si0;
si0=l5;
l9=si0;
L9:;
{
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l8;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L9;
}
}
si0=0U;
l12=si0;
goto L6;
L8:;
si0=l5;
l9=si0;
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l10=sj0;
si1=l4;
si2=l8;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
si0=sj0 == sj1;
if(si0){
goto L4;
}
L7:;
sj0=l10;
sj1=l11;
si0=sj0 <= sj1;
l12=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si1=1U;
si0&=si1;
l13=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=0U;
l1=si0;
sj0=0ULL;
l10=sj0;
goto L11;
L13:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l9;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l9=si0;
si0=l4;
l3=si0;
si0=l2;
l8=si0;
si0=l0;
l7=si0;
si0=0U;
l1=si0;
L14:;
{
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
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
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l14;
si1=l1;
si2=2U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
sj0=0ULL;
si1=l9;
sj1=(U64)(si1);
sj0-=sj1;
l10=sj0;
L11:;
si0=l13;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l4;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l10;
sj1+=sj2;
si2=l2;
si3=l3;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L6;
L10:;
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
si1=1U;
si0&=si1;
l13=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
l1=si0;
sj0=0ULL;
l10=sj0;
goto L15;
L17:;
si0=1254416U;
si1=34U;
si2=1254536U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l9;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l9=si0;
si0=l2;
l3=si0;
si0=l4;
l8=si0;
si0=l0;
l7=si0;
si0=0U;
l1=si0;
L18:;
{
si0=l7;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
si2=l9;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l8;
sj2=i64_load(&i->m0,(U64)si2);
l11=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l15=sj1;
sj2=l10;
sj3=l11;
si2=sj2 <= sj3;
sj3=l10;
sj4=l11;
si3=sj3 < sj4;
si4=l9;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l9=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l8;
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
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
si0=l8;
si1=16U;
si0+=si1;
l8=si0;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l14;
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
si1=l9;
sj1=(U64)(si1);
sj0-=sj1;
l10=sj0;
L15:;
si0=l13;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l2;
si2=l3;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=l10;
sj1+=sj2;
si2=l4;
si3=l3;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L6:;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l3=si0;
L19:;
{
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
l11=sj0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l10=sj0;
sj1=l11;
si0=sj0 < sj1;
l8=si0;
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L21;
}
si0=l8;
l3=si0;
goto L20;
L21:;
si0=l8;
sj1=l10;
sj2=1ULL;
sj1+=sj2;
l10=sj1;
si1=!(sj1);
si0|=si1;
l3=si0;
L20:;
si0=l2;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L19;
}
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=1206404U;
si1=68U;
si2=1206472U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si1=l6;
si2=4U;
si1+=si2;
si2=l6;
si3=l6;
si4=8U;
si3+=si4;
si4=1206388U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l3;
si1=l1;
si2=1206340U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l9;
si1=l5;
si2=1206356U;
f666(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l9;
si1=l5;
si2=1206372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l12;
L0:;
return si0;
}

void f1126(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si1=340U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si1=345U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L1;
L4:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1128(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L1;
L3:;
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
si4=1206488U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
si5=l5;
si6=l6;
si7=l7;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
L1:;
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1127(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U64 l34=0;
U64 l35=0;
U32 l36=0;
U32 l37=0;
U64 l38=0;
U64 l39=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15,si16;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l3;
si1=2U;
si2=3U;
si0=f1303(i,si0,si1,si2);
l9=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l3;
si1=l9;
si0-=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l10;
si1=l9;
si0-=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l8;
si1=l10;
si2=l9;
si1-=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l11;
si1=l9;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l9;
si1=l5;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l5;
si1=l9;
si0-=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l10;
si1=l9;
si0-=si1;
l10=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l8;
si1=l10;
si2=l9;
si1-=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l12;
si1=l9;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l9;
si1=1U;
si0+=si1;
l13=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l1;
si1=l13;
si0-=si1;
l10=si0;
si1=l13;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l10;
si1=l13;
si0-=si1;
l10=si0;
si1=l9;
si2=1U;
si1<<=(si2&31);
l14=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l13;
si1=l14;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l13;
si1=l10;
si2=l14;
si1-=si2;
l10=si1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l9;
si1=9U;
si0*=si1;
si1=6U;
si0+=si1;
l15=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l15;
si1=l9;
si2=3U;
si1<<=(si2&31);
l16=si1;
si2=5U;
si1|=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l13;
si1=l15;
si2=l10;
si1-=si2;
l17=si1;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l0;
si1=l13;
si2=l0;
si3=l13;
si4=3U;
si3<<=(si4&31);
l17=si3;
si2+=si3;
l18=si2;
si3=l13;
si4=l2;
si5=l3;
si6=l9;
si7=l6;
si8=l10;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l19=si7;
si8=l13;
si0=f1093(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l20=si0;
si0=l18;
si1=l17;
si0+=si1;
l21=si0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l22=si0;
si1=l13;
si2=l21;
si3=l13;
si4=l4;
si5=l5;
si6=l9;
si7=l19;
si8=l13;
si0=f1093(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l23=si0;
si0=l6;
si1=l10;
si2=l0;
si3=l13;
si4=l22;
si5=l13;
si6=l6;
si7=l15;
si8=3U;
si7<<=(si8&31);
si6+=si7;
l24=si6;
si7=l7;
si8=l15;
si7-=si8;
l25=si7;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l15;
si1=l14;
si2=1U;
si1|=si2;
l26=si1;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l6;
si1=l26;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l27=si0;
si1=l15;
si2=l26;
si1-=si2;
si2=l18;
si3=l13;
si4=l21;
si5=l13;
si6=l24;
si7=l25;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l13;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
l29=si1;
si0+=si1;
l30=si0;
si0=l4;
si1=l9;
si2=3U;
si1<<=(si2&31);
l31=si1;
si0+=si1;
l32=si0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l33=si0;
sj0=0ULL;
l34=sj0;
sj0=0ULL;
l35=sj0;
si0=0U;
l19=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
si1=1U;
si0&=si1;
l36=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=0U;
l19=si0;
sj0=0ULL;
l35=sj0;
goto L25;
L26:;
si0=l9;
si1=-2U;
si0&=si1;
l37=si0;
si0=0U;
l19=si0;
sj0=0ULL;
l35=sj0;
si0=l2;
l10=si0;
si0=l0;
l17=si0;
L27:;
{
si0=l17;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l35;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=8U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
si0=l17;
si1=16U;
si0+=si1;
l17=si0;
sj0=l39;
sj1=63ULL;
sj0>>=(sj1&63);
l35=sj0;
si0=l37;
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
si0=l36;
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si1=l19;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l2;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l35;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=63ULL;
sj0>>=(sj1&63);
l35=sj0;
L28:;
si0=0U;
l10=si0;
si0=l9;
l19=si0;
si0=0U;
l17=si0;
L29:;
{
si0=l0;
si1=l10;
si0+=si1;
l37=si0;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l28;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l36=si0;
si0=l17;
si1=255U;
si0&=si1;
if(si0){
goto L31;
}
si0=l36;
l17=si0;
goto L30;
L31:;
si0=l36;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l17=si0;
L30:;
si0=l37;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L29;
}
}
sj0=l35;
si1=l17;
sj1=(U64)(si1);
sj0+=sj1;
sj1=1ULL;
sj0<<=(sj1&63);
l35=sj0;
si0=l9;
if(si0){
goto L32;
}
si0=0U;
l19=si0;
goto L24;
L32:;
si0=l16;
si1=-8U;
si0+=si1;
l10=si0;
si1=3U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l17=si0;
si1=3U;
si0&=si1;
l37=si0;
si0=l10;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L34;
}
sj0=0ULL;
l38=sj0;
si0=l0;
l10=si0;
goto L33;
L34:;
si0=l17;
si1=1073741820U;
si0&=si1;
l17=si0;
sj0=0ULL;
l38=sj0;
si0=l0;
l10=si0;
L35:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l39;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l39;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
sj0=l38;
sj1=63ULL;
sj0>>=(sj1&63);
l38=sj0;
si0=l17;
si1=-4U;
si0+=si1;
l17=si0;
if(si0){
goto L35;
}
}
L33:;
si0=l37;
si0=!(si0);
if(si0){
goto L36;
}
si0=l37;
si1=3U;
si0<<=(si1&31);
l17=si0;
L37:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l39;
sj1=63ULL;
sj0>>=(sj1&63);
l38=sj0;
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
if(si0){
goto L37;
}
}
L36:;
sj0=l38;
sj1=l35;
sj0|=sj1;
l35=sj0;
si0=0U;
l19=si0;
si0=l9;
l37=si0;
si0=l0;
l10=si0;
si0=l30;
l17=si0;
L38:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l36=si0;
si0=l19;
si1=255U;
si0&=si1;
if(si0){
goto L40;
}
si0=l36;
l19=si0;
goto L39;
L40:;
si0=l36;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l19=si0;
L39:;
si0=l10;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si0=l37;
si1=-1U;
si0+=si1;
l37=si0;
if(si0){
goto L38;
}
}
L24:;
si0=l32;
si1=l31;
si0+=si1;
l28=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l37=si0;
si0=l33;
si1=0U;
si2=l13;
si0=si2?si0:si1;
l31=si0;
sj0=l35;
si1=l19;
sj1=(U64)(si1);
sj0+=sj1;
sj1=1ULL;
sj0<<=(sj1&63);
l39=sj0;
si0=l9;
si0=!(si0);
if(si0){
goto L41;
}
si0=l16;
si1=-8U;
si0+=si1;
l10=si0;
si1=3U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l17=si0;
si1=3U;
si0&=si1;
l36=si0;
si0=l10;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L43;
}
sj0=0ULL;
l34=sj0;
si0=l0;
l10=si0;
goto L42;
L43:;
si0=l17;
si1=1073741820U;
si0&=si1;
l17=si0;
sj0=0ULL;
l34=sj0;
si0=l0;
l10=si0;
L44:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l34;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l34=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l34;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l34=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
sj0=l34;
sj1=63ULL;
sj0>>=(sj1&63);
l34=sj0;
si0=l17;
si1=-4U;
si0+=si1;
l17=si0;
if(si0){
goto L44;
}
}
L42:;
si0=l36;
si0=!(si0);
if(si0){
goto L41;
}
si0=l36;
si1=3U;
si0<<=(si1&31);
l17=si0;
L45:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l34;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l38;
sj1=63ULL;
sj0>>=(sj1&63);
l34=sj0;
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
if(si0){
goto L45;
}
}
L41:;
si0=l30;
si1=l29;
si0+=si1;
l30=si0;
si0=l28;
si1=l37;
si0+=si1;
l29=si0;
si0=l31;
sj1=l34;
sj2=l39;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=3U;
si0*=si1;
l19=si0;
si0=l0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l33=si0;
si0=0U;
l10=si0;
si0=0U;
l17=si0;
L46:;
{
si0=l0;
si1=l10;
si0+=si1;
l37=si0;
sj0=i64_load(&i->m0,(U64)si0);
l34=sj0;
si1=l30;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l34;
si0=sj0 < sj1;
l36=si0;
si0=l17;
si1=255U;
si0&=si1;
if(si0){
goto L48;
}
si0=l36;
l17=si0;
goto L47;
L48:;
si0=l36;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l17=si0;
L47:;
si0=l37;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l3;
si1=l19;
si2=1U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L46;
}
}
si0=l17;
si1=1U;
si0^=si1;
l10=si0;
si0=l9;
si1=l11;
si0=si0 == si1;
if(si0){
goto L51;
}
si0=l10;
if(si0){
goto L51;
}
si0=l33;
si1=l33;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L49;
}
si0=l9;
si1=5U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0-=si1;
si1=-8U;
si0+=si1;
l17=si0;
si0=l10;
si1=l9;
si2=24U;
si1*=si2;
si0-=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
L52:;
{
si0=l17;
si0=!(si0);
if(si0){
goto L50;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L52;
}
goto L49;
}
L51:;
si0=l9;
si1=l11;
si0=si0 != si1;
si1=l10;
si0|=si1;
if(si0){
goto L49;
}
L50:;
si0=l31;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L49:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l36=si0;
sj0=0ULL;
l34=sj0;
si0=l9;
if(si0){
goto L54;
}
si0=0U;
l17=si0;
sj0=0ULL;
l35=sj0;
goto L53;
L54:;
si0=l9;
si1=1U;
si0&=si1;
l33=si0;
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L56;
}
si0=0U;
l19=si0;
sj0=0ULL;
l35=sj0;
goto L55;
L56:;
si0=l9;
si1=-2U;
si0&=si1;
l37=si0;
si0=l9;
si1=5U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
si0=0U;
l19=si0;
sj0=0ULL;
l35=sj0;
si0=l4;
l17=si0;
L57:;
{
si0=l10;
si1=-8U;
si0+=si1;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l35;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l17;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=16U;
si0+=si1;
l17=si0;
si0=l10;
si1=16U;
si0+=si1;
l10=si0;
sj0=l39;
sj1=63ULL;
sj0>>=(sj1&63);
l35=sj0;
si0=l37;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L57;
}
}
L55:;
si0=l33;
si0=!(si0);
if(si0){
goto L58;
}
si0=l22;
si1=l19;
si2=3U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l4;
si2=l10;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l35;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=63ULL;
sj0>>=(sj1&63);
l35=sj0;
L58:;
si0=0U;
l17=si0;
si0=l9;
l19=si0;
si0=l22;
l10=si0;
L59:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l37=si0;
si0=l17;
si1=255U;
si0&=si1;
if(si0){
goto L61;
}
si0=l37;
l17=si0;
goto L60;
L61:;
si0=l37;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l17=si0;
L60:;
si0=l10;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l32;
si1=8U;
si0+=si1;
l32=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L59;
}
}
sj0=l35;
si1=l17;
sj1=(U64)(si1);
sj0+=sj1;
sj1=1ULL;
sj0<<=(sj1&63);
l35=sj0;
si0=l9;
if(si0){
goto L62;
}
si0=0U;
l17=si0;
goto L53;
L62:;
si0=l16;
si1=-8U;
si0+=si1;
l10=si0;
si1=3U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l17=si0;
si1=3U;
si0&=si1;
l37=si0;
si0=l10;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L64;
}
sj0=0ULL;
l38=sj0;
si0=l22;
l10=si0;
goto L63;
L64:;
si0=l17;
si1=1073741820U;
si0&=si1;
l17=si0;
sj0=0ULL;
l38=sj0;
si0=l22;
l10=si0;
L65:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l39;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l39;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
sj0=l38;
sj1=63ULL;
sj0>>=(sj1&63);
l38=sj0;
si0=l17;
si1=-4U;
si0+=si1;
l17=si0;
if(si0){
goto L65;
}
}
L63:;
si0=l37;
si0=!(si0);
if(si0){
goto L66;
}
si0=l37;
si1=3U;
si0<<=(si1&31);
l17=si0;
L67:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l39;
sj1=63ULL;
sj0>>=(sj1&63);
l38=sj0;
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
if(si0){
goto L67;
}
}
L66:;
sj0=l38;
sj1=l35;
sj0|=sj1;
l35=sj0;
si0=0U;
l17=si0;
si0=l9;
l19=si0;
si0=l22;
l10=si0;
L68:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l39;
si0=sj0 < sj1;
l37=si0;
si0=l17;
si1=255U;
si0&=si1;
if(si0){
goto L70;
}
si0=l37;
l17=si0;
goto L69;
L70:;
si0=l37;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l17=si0;
L69:;
si0=l10;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l28;
si1=8U;
si0+=si1;
l28=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L68;
}
}
L53:;
si0=l22;
si1=l36;
si0+=si1;
l32=si0;
sj0=l35;
si1=l17;
sj1=(U64)(si1);
sj0+=sj1;
sj1=1ULL;
sj0<<=(sj1&63);
l39=sj0;
si0=l9;
si0=!(si0);
if(si0){
goto L71;
}
si0=l16;
si1=-8U;
si0+=si1;
l10=si0;
si1=3U;
si0>>=(si1&31);
si1=1U;
si0+=si1;
l17=si0;
si1=3U;
si0&=si1;
l37=si0;
si0=l10;
si1=24U;
si0=si0 >= si1;
if(si0){
goto L73;
}
sj0=0ULL;
l34=sj0;
si0=l22;
l10=si0;
goto L72;
L73:;
si0=l17;
si1=1073741820U;
si0&=si1;
l17=si0;
sj0=0ULL;
l34=sj0;
si0=l22;
l10=si0;
L74:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l34;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l34=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=16U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l34;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=24U;
si0+=si1;
l19=si0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
l34=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l38;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=32U;
si0+=si1;
l10=si0;
sj0=l34;
sj1=63ULL;
sj0>>=(sj1&63);
l34=sj0;
si0=l17;
si1=-4U;
si0+=si1;
l17=si0;
if(si0){
goto L74;
}
}
L72:;
si0=l37;
si0=!(si0);
if(si0){
goto L71;
}
si0=l37;
si1=3U;
si0<<=(si1&31);
l17=si0;
L75:;
{
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
l38=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l34;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l38;
sj1=63ULL;
sj0>>=(sj1&63);
l34=sj0;
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
if(si0){
goto L75;
}
}
L71:;
si0=l32;
sj1=l34;
sj2=l39;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=3U;
si0*=si1;
l37=si0;
si0=l22;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
si0=0U;
l19=si0;
si0=l22;
l10=si0;
si0=l29;
l17=si0;
L76:;
{
si0=l10;
sj0=i64_load(&i->m0,(U64)si0);
l34=sj0;
si1=l17;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l38=sj0;
sj1=l34;
si0=sj0 < sj1;
l36=si0;
si0=l19;
si1=255U;
si0&=si1;
if(si0){
goto L78;
}
si0=l36;
l19=si0;
goto L77;
L78:;
si0=l36;
sj1=l38;
sj2=1ULL;
sj1+=sj2;
l38=sj1;
si1=!(sj1);
si0|=si1;
l19=si0;
L77:;
si0=l10;
sj1=l38;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
si0=l17;
si1=8U;
si0+=si1;
l17=si0;
si0=l5;
si1=l37;
si2=1U;
si1+=si2;
l37=si1;
si0=si0 != si1;
if(si0){
goto L76;
}
}
si0=l9;
si1=l12;
si0=si0 == si1;
l10=si0;
if(si0){
goto L79;
}
si0=l19;
si1=1U;
si0^=si1;
if(si0){
goto L79;
}
si0=l28;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l38;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
si0=l9;
si1=5U;
si0<<=(si1&31);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0-=si1;
si1=-8U;
si0+=si1;
l17=si0;
si0=l9;
si1=l5;
si0+=si1;
si1=3U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=24U;
si0+=si1;
l10=si0;
L80:;
{
si0=l17;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si1=l10;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l38=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l17;
si1=-8U;
si0+=si1;
l17=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
sj0=l38;
si0=!(sj0);
if(si0){
goto L80;
}
goto L1;
}
L79:;
si0=l10;
si1=l19;
si0&=si1;
if(si0){
goto L2;
}
goto L1;
L23:;
si0=1205816U;
si1=35U;
si2=1221236U;
f673(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=1205816U;
si1=35U;
si2=1221236U;
f673(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1205816U;
si1=35U;
si2=1221236U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1217732U;
si1=34U;
si2=1221748U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=1217292U;
si3=l8;
si4=8U;
si3+=si4;
si4=1221732U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L18:;
si0=1205816U;
si1=35U;
si2=1221252U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=1205816U;
si1=35U;
si2=1221252U;
f673(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1205816U;
si1=35U;
si2=1221252U;
f673(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=1219012U;
si1=24U;
si2=1221716U;
f673(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1U;
si1=l8;
si2=4U;
si1+=si2;
si2=1217292U;
si3=l8;
si4=8U;
si3+=si4;
si4=1221700U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L13:;
si0=1205816U;
si1=35U;
si2=1221268U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1205816U;
si1=35U;
si2=1221268U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1205816U;
si1=35U;
si2=1221284U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l13;
si1=l14;
si2=1221300U;
f666(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l13;
si1=l10;
si2=1221316U;
f666(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1205816U;
si1=35U;
si2=1221332U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1205816U;
si1=35U;
si2=1221348U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l13;
si1=l17;
si2=1221364U;
f666(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l26;
si1=l15;
si2=1221380U;
f662(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1218956U;
si1=24U;
si2=1221684U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1205851U;
si1=43U;
si2=1221396U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l32;
si1=l32;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l31;
sj0=i64_load(&i->m0,(U64)si0);
sj1=14ULL;
si0=sj0 > sj1;
if(si0){
goto L95;
}
si0=l32;
sj0=i64_load(&i->m0,(U64)si0);
sj1=14ULL;
si0=sj0 > sj1;
if(si0){
goto L86;
}
si0=l15;
si1=l26;
si2=1U;
si1<<=(si2&31);
l19=si1;
si0=si0 < si1;
if(si0){
goto L94;
}
si0=l15;
si1=l19;
si0-=si1;
l37=si0;
si1=l9;
si2=2U;
si1<<=(si2&31);
l17=si1;
si2=3U;
si1|=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L93;
}
si0=l13;
si1=l37;
si2=l10;
si1-=si2;
l37=si1;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l6;
si1=l19;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si1=l10;
si2=l0;
si3=l13;
si4=l22;
si5=l13;
si6=l24;
si7=l25;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l0;
si1=l13;
si2=l18;
si3=l13;
si4=l2;
si5=l3;
si6=l9;
si7=l19;
si8=l10;
si9=3U;
si8<<=(si9&31);
si7+=si8;
l10=si7;
si8=l13;
si0=f1092(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l36=si0;
si0=l22;
si1=l13;
si2=l21;
si3=l13;
si4=l4;
si5=l5;
si6=l9;
si7=l10;
si8=l13;
si0=f1092(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l32=si0;
si0=l15;
si1=l26;
si2=3U;
si1*=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L91;
}
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l15;
si2=l10;
si1-=si2;
si2=l18;
si3=l13;
si4=l21;
si5=l13;
si6=l24;
si7=l25;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l14;
si1=l1;
si0=si0 > si1;
if(si0){
goto L90;
}
si0=l1;
si1=l14;
si0-=si1;
l19=si0;
si1=l14;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 < si1;
if(si0){
goto L89;
}
si0=l13;
si1=l19;
si2=l10;
si1-=si2;
l37=si1;
si0=si0 > si1;
if(si0){
goto L88;
}
si0=l0;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l37=si0;
si1=l10;
si2=l0;
si3=l13;
si4=l37;
si5=l10;
si6=3U;
si5<<=(si6&31);
si4+=si5;
si5=l13;
si6=l24;
si7=l25;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l19;
si1=l17;
si0=si0 < si1;
if(si0){
goto L87;
}
si0=l0;
si1=l14;
si2=l2;
si3=l9;
si4=l4;
si5=l9;
si6=l24;
si7=l25;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l19;
si1=l17;
si0-=si1;
l19=si0;
si0=l37;
si1=l17;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l17=si0;
si0=l11;
si1=l12;
si0=si0 > si1;
if(si0){
goto L97;
}
si0=l17;
si1=l19;
si2=l30;
si3=l11;
si4=l29;
si5=l12;
si6=l24;
si7=l25;
f1362(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L96;
L97:;
si0=l17;
si1=l19;
si2=l30;
si3=l11;
si4=l29;
si5=l12;
si6=l24;
si7=l25;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L96:;
si0=l26;
si1=l7;
si0=si0 > si1;
if(si0){
goto L85;
}
si0=l7;
si1=l26;
si0-=si1;
l17=si0;
si1=l26;
si0=si0 < si1;
if(si0){
goto L84;
}
si0=l17;
si1=l26;
si0-=si1;
l17=si0;
si1=l26;
si0=si0 < si1;
if(si0){
goto L83;
}
si0=l17;
si1=l26;
si0-=si1;
l17=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l26;
si1=l10;
si0=si0 > si1;
if(si0){
goto L81;
}
si0=l0;
si1=l1;
si2=l9;
si3=l12;
si4=l11;
si3+=si4;
si4=l20;
si5=l23;
si4^=si5;
si5=l27;
si6=l26;
si7=l36;
si8=l32;
si7^=si8;
si8=l27;
si9=l26;
si10=3U;
si9<<=(si10&31);
l19=si9;
si8+=si9;
l37=si8;
si9=l19;
si8+=si9;
l19=si8;
si9=l26;
si10=l6;
si11=l26;
si12=l37;
si13=l26;
si14=l19;
si15=l10;
si16=3U;
si15<<=(si16&31);
si14+=si15;
si15=l17;
si16=l10;
si15-=si16;
f1371(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13,si14,si15);
si0=l8;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L95:;
si0=1221636U;
si1=32U;
si2=1221668U;
f673(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l19;
si1=l15;
si2=1221412U;
f662(i,si0,si1,si2);
UNREACHABLE;
L93:;
si0=1205816U;
si1=35U;
si2=1221428U;
f673(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=l13;
si1=l37;
si2=1221444U;
f666(i,si0,si1,si2);
UNREACHABLE;
L91:;
si0=l10;
si1=l15;
si2=1221460U;
f662(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=1205816U;
si1=35U;
si2=1221476U;
f673(i,si0,si1,si2);
UNREACHABLE;
L89:;
si0=1205816U;
si1=35U;
si2=1221492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L88:;
si0=l13;
si1=l37;
si2=1221508U;
f666(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l17;
si1=l19;
si2=1221524U;
f662(i,si0,si1,si2);
UNREACHABLE;
L86:;
si0=1221588U;
si1=32U;
si2=1221620U;
f673(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=1205816U;
si1=35U;
si2=1221540U;
f673(i,si0,si1,si2);
UNREACHABLE;
L84:;
si0=1205816U;
si1=35U;
si2=1221540U;
f673(i,si0,si1,si2);
UNREACHABLE;
L83:;
si0=1205816U;
si1=35U;
si2=1221540U;
f673(i,si0,si1,si2);
UNREACHABLE;
L82:;
si0=1205816U;
si1=35U;
si2=1221556U;
f673(i,si0,si1,si2);
UNREACHABLE;
L81:;
si0=l26;
si1=l10;
si2=1221572U;
f666(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1128(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12;
U64 sj0,sj6,sj7,sj8,sj9;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=42U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si1=3U;
si0*=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l5;
si1=46U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=6U;
si0*=si1;
si1=l5;
si2=17U;
si1*=si2;
si0=si0 >= si1;
if(si0){
goto L3;
}
L6:;
si0=l3;
si1=17U;
si0*=si1;
l8=si0;
si1=l5;
si2=18U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=7U;
l9=si0;
si0=6U;
l10=si0;
si0=l3;
si1=90U;
si0*=si1;
si1=l5;
si2=119U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=5U;
l10=si0;
si0=l3;
si1=85U;
si0*=si1;
si1=l5;
si2=126U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=8U;
l9=si0;
si0=l3;
si1=18U;
si0*=si1;
si1=l5;
si2=34U;
si1*=si2;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=8U;
si1=9U;
si2=l8;
si3=l5;
si4=36U;
si3*=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si0=4U;
l10=si0;
L7:;
si0=l5;
si1=l3;
si2=l10;
si3=l3;
si2*=si3;
si3=l9;
si4=l5;
si3*=si4;
si2=si2 < si3;
l8=si2;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
si1=l10;
si2=l9;
si3=l8;
si1=si3?si1:si2;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l8=si0;
si1=l10;
si2=-1U;
si1+=si2;
l11=si1;
si0*=si1;
l12=si0;
si0=l8;
si1=l9;
si2=-1U;
si1+=si2;
l13=si1;
si0*=si1;
l14=si0;
si0=0U;
l15=si0;
si0=1U;
si1=-1U;
si2=l13;
si3=l11;
si2^=si3;
l16=si2;
si0=si2?si0:si1;
si1=l16;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l14;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l12;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=1U;
l15=si0;
goto L1;
L9:;
si0=l14;
si1=l8;
si0-=si1;
l14=si0;
si0=l9;
si1=-2U;
si0+=si1;
l13=si0;
goto L1;
L8:;
si0=l12;
si1=l8;
si0-=si1;
l12=si0;
si0=l10;
si1=-2U;
si0+=si1;
l11=si0;
goto L1;
L5:;
si0=1217732U;
si1=34U;
si2=1223788U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1223740U;
si1=30U;
si2=1223772U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1223636U;
si1=86U;
si2=1223724U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=5U;
l11=si0;
si0=0U;
l15=si0;
si0=l3;
si1=-1U;
si0+=si1;
si1=6U;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l8=si0;
si1=5U;
si0*=si1;
l12=si0;
l14=si0;
si0=5U;
l13=si0;
L1:;
si0=l8;
si1=3U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l14;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L40;
}
si0=l3;
si1=l14;
si0-=si1;
l17=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l12;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L38;
}
si0=l5;
si1=l12;
si0-=si1;
l18=si0;
si1=l8;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l15;
si1=l17;
si2=l18;
si1+=si2;
l19=si1;
si2=3U;
si1=si1 > si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L26;
}
si0=l8;
si1=3U;
si0*=si1;
l9=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l7;
si1=l9;
si2=1U;
si1+=si2;
l10=si1;
si0-=si1;
l7=si0;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l7;
si1=l10;
si0-=si1;
l16=si0;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L33;
}
si0=l1;
si1=l9;
si0-=si1;
l7=si0;
si1=l8;
si2=2U;
si1<<=(si2&31);
l20=si1;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l7;
si1=l20;
si0-=si1;
l21=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l21;
si1=l8;
si2=1U;
si1+=si2;
l7=si1;
si0-=si1;
l21=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l21;
si1=l7;
si0-=si1;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l16;
si1=l10;
si0-=si1;
l22=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l7;
si1=l8;
si0+=si1;
l23=si0;
si0=l22;
si1=l7;
si0-=si1;
l16=si0;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
l24=si0;
si1=l21;
si0+=si1;
l25=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l21=si0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l27=si0;
si1=l20;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l28=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l30=si0;
si1=l7;
si2=l28;
si3=l7;
si4=l13;
si5=l2;
si6=l3;
si7=l8;
sj8=1ULL;
si9=l0;
si10=l7;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si1=l26;
si2=l7;
si3=l29;
si4=l7;
si5=l11;
si6=l4;
si7=l5;
si8=l8;
sj9=1ULL;
si10=l0;
si11=l7;
si1=f1097(i,si1,si2,si3,si4,si5,si6,si7,si8,sj9,si10,si11);
si0^=si1;
l31=si0;
si0=l8;
si1=338U;
si0=si0 > si1;
if(si0){
goto L43;
}
si0=l0;
si1=l9;
si2=l28;
si3=l7;
si4=l29;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l6;
si1=l10;
si2=l30;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l15;
if(si0){
goto L42;
}
goto L24;
L43:;
si0=l0;
si1=l9;
si2=l28;
si3=l7;
si4=l29;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l6;
si1=l10;
si2=l30;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l15;
si0=!(si0);
if(si0){
goto L24;
}
L42:;
si0=l23;
si1=l9;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l6;
si1=l10;
si2=l0;
si3=l23;
si4=l31;
si5=l8;
sj6=2ULL;
sj7=1ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
goto L23;
L41:;
si0=1223080U;
si1=23U;
si2=1223620U;
f673(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=1223572U;
si1=29U;
si2=1223604U;
f673(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=1219012U;
si1=24U;
si2=1223556U;
f673(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=1223508U;
si1=29U;
si2=1223540U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=1218956U;
si1=24U;
si2=1223492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L36:;
si0=1205816U;
si1=35U;
si2=1223152U;
f673(i,si0,si1,si2);
UNREACHABLE;
L35:;
si0=1205816U;
si1=35U;
si2=1223152U;
f673(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=1205816U;
si1=35U;
si2=1223152U;
f673(i,si0,si1,si2);
UNREACHABLE;
L33:;
si0=1205816U;
si1=35U;
si2=1223168U;
f673(i,si0,si1,si2);
UNREACHABLE;
L32:;
si0=1205816U;
si1=35U;
si2=1223184U;
f673(i,si0,si1,si2);
UNREACHABLE;
L31:;
si0=1205816U;
si1=35U;
si2=1223200U;
f673(i,si0,si1,si2);
UNREACHABLE;
L30:;
si0=1205816U;
si1=35U;
si2=1223200U;
f673(i,si0,si1,si2);
UNREACHABLE;
L29:;
si0=1205816U;
si1=35U;
si2=1223200U;
f673(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=1205816U;
si1=35U;
si2=1223216U;
f673(i,si0,si1,si2);
UNREACHABLE;
L27:;
si0=l7;
si1=l9;
si2=1223232U;
f666(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=1223440U;
si1=35U;
si2=1223476U;
f673(i,si0,si1,si2);
UNREACHABLE;
L25:;
si0=l23;
si1=l9;
si2=1223264U;
f666(i,si0,si1,si2);
UNREACHABLE;
L24:;
si0=l23;
si1=l9;
si0=si0 > si1;
if(si0){
goto L22;
}
si0=l6;
si1=l10;
si2=l0;
si3=l23;
si4=l31;
si5=l8;
sj6=1ULL;
sj7=0ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
L23:;
si0=l30;
si1=l7;
si2=l28;
si3=l7;
si4=l13;
si5=l2;
si6=l3;
si7=l8;
si8=l0;
si9=l7;
si0=f1094(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
l31=si0;
si0=l11;
si1=3U;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l26;
si1=l7;
si2=l29;
si3=l7;
si4=l4;
si5=l5;
si6=l8;
si7=l0;
si8=l7;
si0=f1092(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
l32=si0;
goto L44;
L45:;
si0=l26;
si1=l7;
si2=l29;
si3=l7;
si4=l11;
si5=l4;
si6=l5;
si7=l8;
si8=l0;
si9=l7;
si0=f1094(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
l32=si0;
L44:;
si0=l31;
si1=l32;
si0^=si1;
l31=si0;
si0=l8;
si1=338U;
si0=si0 > si1;
if(si0){
goto L47;
}
si0=l0;
si1=l9;
si2=l28;
si3=l7;
si4=l29;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l24;
si1=l10;
si2=l30;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L46;
L47:;
si0=l0;
si1=l9;
si2=l28;
si3=l7;
si4=l29;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l24;
si1=l10;
si2=l30;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L46:;
si0=l24;
si1=l10;
si2=l0;
si3=l23;
si4=l31;
si5=l8;
sj6=0ULL;
sj7=0ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l30;
si1=l7;
si2=l28;
si3=l7;
si4=l13;
si5=l2;
si6=l3;
si7=l8;
sj8=2ULL;
si9=l0;
si10=l7;
si0=f1096(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
si1=l26;
si2=l7;
si3=l29;
si4=l7;
si5=l11;
si6=l4;
si7=l5;
si8=l8;
sj9=2ULL;
si10=l0;
si11=l7;
si1=f1096(i,si1,si2,si3,si4,si5,si6,si7,si8,sj9,si10,si11);
si0^=si1;
l31=si0;
si0=l8;
si1=338U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=l0;
si1=l9;
si2=l28;
si3=l7;
si4=l29;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l25;
si1=l10;
si2=l30;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L48;
L49:;
si0=l0;
si1=l9;
si2=l28;
si3=l7;
si4=l29;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l25;
si1=l10;
si2=l30;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L48:;
si0=l25;
si1=l10;
si2=l0;
si3=l23;
si4=l31;
si5=l8;
sj6=2ULL;
sj7=4ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l30;
si1=l7;
si2=l28;
si3=l7;
si4=l13;
si5=l2;
si6=l3;
si7=l8;
sj8=2ULL;
si9=l0;
si10=l7;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
l31=si0;
si0=l26;
si1=l7;
si2=l29;
si3=l7;
si4=l11;
si5=l4;
si6=l5;
si7=l8;
sj8=2ULL;
si9=l0;
si10=l7;
si0=f1097(i,si0,si1,si2,si3,si4,si5,si6,si7,sj8,si9,si10);
l32=si0;
si0=l8;
si1=338U;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=l0;
si1=l9;
si2=l28;
si3=l7;
si4=l29;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l27;
si1=l20;
si2=l30;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L50;
L51:;
si0=l0;
si1=l9;
si2=l28;
si3=l7;
si4=l29;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l27;
si1=l20;
si2=l30;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L50:;
si0=l31;
si1=l32;
si0^=si1;
l9=si0;
si0=l15;
if(si0){
goto L53;
}
si0=l27;
si1=l20;
si2=l0;
si3=l23;
si4=l9;
si5=l8;
sj6=2ULL;
sj7=0ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
goto L52;
L53:;
si0=l27;
si1=l20;
si2=l0;
si3=l23;
si4=l9;
si5=l8;
sj6=4ULL;
sj7=2ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
L52:;
si0=l30;
si1=l7;
si2=l28;
si3=l7;
si4=l13;
si5=l2;
si6=l3;
si7=l8;
si8=l0;
si9=l7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
l13=si0;
si0=l26;
si1=l7;
si2=l29;
si3=l7;
si4=l11;
si5=l4;
si6=l5;
si7=l8;
si8=l0;
si9=l7;
si0=f1095(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9);
l11=si0;
si0=l8;
si1=7U;
si0*=si1;
l9=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l1;
si1=l9;
si0-=si1;
l30=si0;
si1=l7;
si2=1U;
si1<<=(si2&31);
l28=si1;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l8;
si1=l30;
si2=l28;
si1-=si2;
l29=si1;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l28;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si1=l28;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si0=l29;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l27=si0;
si0=l8;
si1=338U;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=l0;
si1=l9;
si2=l29;
si3=l7;
si4=l27;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l29;
si1=l28;
si2=l20;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L54;
L55:;
si0=l0;
si1=l9;
si2=l29;
si3=l7;
si4=l27;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l29;
si1=l28;
si2=l20;
si3=l7;
si4=l26;
si5=l7;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L54:;
si0=l23;
si1=l9;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l29;
si1=l30;
si2=l0;
si3=l23;
si4=l13;
si5=l11;
si4^=si5;
si5=l8;
sj6=1ULL;
sj7=2ULL;
f1124(i,si0,si1,si2,si3,si4,si5,sj6,sj7);
si0=l8;
si1=l3;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l8;
si1=l5;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l8;
si1=339U;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l0;
si1=l1;
si2=l2;
si3=l8;
si4=l4;
si5=l8;
si6=l21;
si7=l16;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L56;
L57:;
si0=l0;
si1=l1;
si2=l2;
si3=l8;
si4=l4;
si5=l8;
si6=l21;
si7=l16;
f1127(i,si0,si1,si2,si3,si4,si5,si6,si7);
L56:;
si0=l15;
si0=!(si0);
if(si0){
goto L13;
}
si0=l8;
si1=11U;
si0*=si1;
l7=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l14;
si1=l3;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l12;
si1=l5;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=l7;
si0-=si1;
l5=si0;
si0=l0;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l4;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l2;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l17;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l7;
si1=l5;
si2=l3;
si3=l18;
si4=l9;
si5=l17;
si6=l21;
si7=l16;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l0;
si1=l1;
si2=l25;
si3=l10;
si4=l24;
si5=l10;
si6=l6;
si7=l10;
si8=l8;
si9=l19;
si10=l15;
si11=l26;
si12=l22;
f1377(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12);
goto L0;
L22:;
si0=l23;
si1=l9;
si2=1223248U;
f666(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1205816U;
si1=35U;
si2=1223280U;
f673(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1205816U;
si1=35U;
si2=1223296U;
f673(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l7;
si1=l29;
si2=1223312U;
f666(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1205816U;
si1=35U;
si2=1223328U;
f673(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l23;
si1=l9;
si2=1223344U;
f666(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l8;
si1=l3;
si2=1223360U;
f666(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l8;
si1=l5;
si2=1223376U;
f666(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l7;
si1=l5;
si2=l9;
si3=l17;
si4=l3;
si5=l18;
si6=l21;
si7=l16;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
L13:;
si0=l0;
si1=l1;
si2=l25;
si3=l10;
si4=l24;
si5=l10;
si6=l6;
si7=l10;
si8=l8;
si9=l19;
si10=l15;
si11=l26;
si12=l22;
f1377(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12);
goto L0;
L12:;
si0=l7;
si1=l1;
si2=1223392U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l14;
si1=l3;
si2=1223408U;
f662(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l12;
si1=l5;
si2=1223424U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1129(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U64 l32=0;
U64 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U64 l39=0;
U64 l40=0;
U32 l41=0;
U32 l42=0;
U64 l43=0;
U64 l44=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2,sj3,sj4,sj9;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l3;
si1=3U;
si0=DIV_U(si0,si1);
l9=si0;
si1=1U;
si0+=si1;
l10=si0;
si0=l9;
si1=3U;
si0*=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l10;
l11=si0;
si0=l9;
l10=si0;
goto L15;
L16:;
si0=l9;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=2U;
si0+=si1;
l11=si0;
L15:;
si0=l3;
si1=l10;
si0-=si1;
l12=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l10;
si1=l5;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l10;
si0-=si1;
l9=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l8;
si1=l9;
si2=l10;
si1-=si2;
l13=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l10;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l11;
si1=l1;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l1;
si1=l11;
si0-=si1;
l9=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l9;
si1=l11;
si0-=si1;
si1=l11;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l11;
si1=1U;
si0<<=(si1&31);
l14=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l7;
si1=l14;
si0-=si1;
l9=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l9;
si1=l11;
si0-=si1;
l9=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l9;
si1=l11;
si0-=si1;
l15=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
si1=l14;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l16=si0;
si1=l10;
si2=3U;
si1<<=(si2&31);
l17=si1;
si0+=si1;
l18=si0;
si0=l6;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l20=si0;
si1=l11;
si2=3U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
l22=si0;
si0=l10;
si1=l12;
si2=l10;
si1-=si2;
l23=si1;
si0=si0 >= si1;
l24=si0;
if(si0){
goto L18;
}
si0=l6;
si1=l10;
si2=l18;
si3=l23;
si4=l2;
si5=l10;
si0=f1080(i,si0,si1,si2,si3,si4,si5);
l25=si0;
goto L17;
L19:;
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=1U;
si1=l8;
si2=12U;
si1+=si2;
si2=1217292U;
si3=l8;
si4=24U;
si3+=si4;
si4=1219892U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L18:;
si0=l6;
si1=l10;
si2=l2;
si3=l10;
si4=l18;
si5=l23;
si0=f1080(i,si0,si1,si2,si3,si4,si5);
l25=si0;
L17:;
si0=l22;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l26=si0;
si1=l25;
sj1=(U64)(si1);
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=5U;
si0<<=(si1&31);
l28=si0;
si0=0U;
l29=si0;
si0=l10;
l30=si0;
si0=l16;
l31=si0;
si0=l6;
l9=si0;
L20:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l34=si0;
si0=l29;
si1=255U;
si0&=si1;
if(si0){
goto L22;
}
si0=l34;
l29=si0;
goto L21;
L22:;
si0=l34;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l29=si0;
L21:;
si0=l9;
si1=l28;
si0+=si1;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l30;
si1=-1U;
si0+=si1;
l30=si0;
if(si0){
goto L20;
}
}
si0=l29;
si0=!(si0);
if(si0){
goto L1;
}
si0=l26;
si1=l26;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L14:;
si0=1205816U;
si1=35U;
si2=1219212U;
f673(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=1205816U;
si1=35U;
si2=1219212U;
f673(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=1205816U;
si1=35U;
si2=1219228U;
f673(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1205816U;
si1=35U;
si2=1219228U;
f673(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=1217732U;
si1=34U;
si2=1219908U;
f673(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=1205816U;
si1=35U;
si2=1219244U;
f673(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=1205816U;
si1=35U;
si2=1219244U;
f673(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1205816U;
si1=35U;
si2=1219244U;
f673(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1205816U;
si1=35U;
si2=1219260U;
f673(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1205816U;
si1=35U;
si2=1219276U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1205816U;
si1=35U;
si2=1219276U;
f673(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1205816U;
si1=35U;
si2=1219276U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l10;
si1=l14;
si2=1219292U;
f666(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l11;
si1=3U;
si0<<=(si1&31);
l35=si0;
si0=l25;
si0=!(si0);
if(si0){
goto L25;
}
si0=l19;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l36=si0;
goto L24;
L25:;
si0=l6;
si1=-8U;
si0+=si1;
l30=si0;
si0=l10;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l10;
si1=4U;
si0<<=(si1&31);
si1=l2;
si0+=si1;
si1=-8U;
si0+=si1;
l31=si0;
L28:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L27;
}
si0=l30;
si1=l9;
si0+=si1;
l29=si0;
si0=l31;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
si0=l31;
si1=-8U;
si0+=si1;
l31=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
sj0=l33;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
si0=sj0 == sj1;
if(si0){
goto L28;
}
}
si0=l19;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l36=si0;
sj0=l33;
sj1=l32;
si0=sj0 > sj1;
if(si0){
goto L26;
}
goto L24;
L27:;
si0=l19;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l36=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L24;
}
L26:;
sj0=0ULL;
l27=sj0;
si0=1U;
l37=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L23;
}
si0=l10;
si1=1U;
si0&=si1;
l38=si0;
si0=0U;
l31=si0;
si0=0U;
l29=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l10;
si1=-2U;
si0&=si1;
l25=si0;
si0=0U;
l9=si0;
si0=0U;
l31=si0;
si0=0U;
l29=si0;
L30:;
{
si0=l19;
si1=l9;
si0+=si1;
l30=si0;
si1=l16;
si2=l9;
si1+=si2;
l34=si1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
si2=l31;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l6;
si3=l9;
si2+=si3;
l28=si2;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l30;
si1=8U;
si0+=si1;
si1=l34;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=l33;
sj3=l32;
si2=sj2 <= sj3;
sj3=l33;
sj4=l32;
si3=sj3 < sj4;
si4=l31;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l31=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l28;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l33=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l39;
sj1=l33;
si0=sj0 <= sj1;
sj1=l39;
sj2=l33;
si1=sj1 < sj2;
si2=l31;
si0=si2?si0:si1;
l31=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l25;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L30;
}
}
L29:;
si0=l38;
si0=!(si0);
if(si0){
goto L23;
}
si0=l19;
si1=l29;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l16;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l31;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
goto L23;
L24:;
si0=l10;
if(si0){
goto L31;
}
si0=0U;
l37=si0;
goto L23;
L31:;
si0=l10;
si1=1U;
si0&=si1;
l38=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=0U;
l31=si0;
si0=0U;
l29=si0;
goto L32;
L33:;
si0=l10;
si1=-2U;
si0&=si1;
l25=si0;
si0=0U;
l9=si0;
si0=0U;
l31=si0;
si0=0U;
l29=si0;
L34:;
{
si0=l19;
si1=l9;
si0+=si1;
l30=si0;
si1=l6;
si2=l9;
si1+=si2;
l34=si1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
si2=l31;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l16;
si3=l9;
si2+=si3;
l28=si2;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l30;
si1=8U;
si0+=si1;
si1=l34;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=l33;
sj3=l32;
si2=sj2 <= sj3;
sj3=l33;
sj4=l32;
si3=sj3 < sj4;
si4=l31;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l31=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l28;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l33=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l39;
sj1=l33;
si0=sj0 <= sj1;
sj1=l39;
sj2=l33;
si1=sj1 < sj2;
si2=l31;
si0=si2?si0:si1;
l31=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l25;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L34;
}
}
L32:;
si0=l38;
si0=!(si0);
if(si0){
goto L35;
}
si0=l19;
si1=l29;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l6;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
si2=l31;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l33;
sj1=l32;
si0=sj0 <= sj1;
sj1=l33;
sj2=l32;
si1=sj1 < sj2;
si2=l31;
si0=si2?si0:si1;
l31=si0;
L35:;
sj0=l27;
sj1=-1ULL;
sj0+=sj1;
sj1=l27;
si2=l31;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
l27=sj0;
si0=0U;
l37=si0;
L23:;
si0=l0;
si1=l35;
si0+=si1;
l38=si0;
si0=l36;
sj1=l27;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=l23;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l24;
si0=!(si0);
if(si0){
goto L41;
}
si0=l12;
si1=l10;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=0U;
l9=si0;
si0=l18;
l31=si0;
si0=l22;
l29=si0;
si0=l38;
l30=si0;
si0=0U;
l34=si0;
L48:;
{
si0=l31;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l28=si0;
si0=l34;
si1=255U;
si0&=si1;
if(si0){
goto L50;
}
si0=l28;
l34=si0;
goto L49;
L50:;
si0=l28;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l34=si0;
L49:;
si0=l10;
si1=l9;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l30;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si0=l29;
si1=8U;
si0+=si1;
l29=si0;
si0=l30;
si1=8U;
si0+=si1;
l30=si0;
si0=l23;
si1=l9;
si2=1U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L48;
}
}
si0=l10;
si1=l23;
si0-=si1;
l28=si0;
si0=l22;
si1=l23;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l16=si0;
si0=l38;
si1=l9;
si0+=si1;
l25=si0;
si0=l34;
si0=!(si0);
if(si0){
goto L45;
}
si0=l28;
if(si0){
goto L44;
}
si0=1U;
l30=si0;
goto L42;
L47:;
si0=l10;
si0=!(si0);
if(si0){
goto L43;
}
si0=0U;
l30=si0;
si0=l10;
l34=si0;
si0=l18;
l9=si0;
si0=l22;
l31=si0;
si0=l38;
l29=si0;
L51:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l28=si0;
si0=l30;
si1=255U;
si0&=si1;
if(si0){
goto L53;
}
si0=l28;
l30=si0;
goto L52;
L53:;
si0=l28;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l30=si0;
L52:;
si0=l29;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si0=l29;
si1=8U;
si0+=si1;
l29=si0;
si0=l34;
si1=-1U;
si0+=si1;
l34=si0;
if(si0){
goto L51;
}
goto L42;
}
L46:;
si0=l10;
si1=l23;
si0-=si1;
l28=si0;
si0=l22;
si1=l23;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l16=si0;
si0=l38;
si1=l9;
si0+=si1;
l25=si0;
L45:;
si0=l25;
si1=l16;
si2=l28;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L43;
L44:;
si0=l25;
si1=l16;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l9=si0;
sj0=l33;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L54;
}
si0=l11;
si1=5U;
si0<<=(si1&31);
si1=l3;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l10;
si2=4U;
si1<<=(si2&31);
l29=si1;
si0-=si1;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
l31=si0;
si0=l11;
si1=3U;
si0<<=(si1&31);
si1=l9;
si0+=si1;
si1=l29;
si0-=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l29=si0;
si0=1U;
l30=si0;
si0=l3;
si1=l10;
si2=3U;
si1*=si2;
si0-=si1;
si1=1U;
si0+=si1;
l34=si0;
si0=0U;
l9=si0;
L55:;
{
si0=l34;
si1=l9;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l29;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si0=l29;
si1=8U;
si0+=si1;
l29=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
sj0=l33;
si0=!(sj0);
if(si0){
goto L55;
}
}
si0=0U;
si1=l9;
si0-=si1;
l9=si0;
L54:;
si0=l9;
si1=1U;
si0+=si1;
l31=si0;
si0=l9;
si1=l28;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l25;
si1=l31;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l16;
si2=l9;
si1+=si2;
si2=l28;
si3=l31;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
L43:;
si0=0U;
l30=si0;
L42:;
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
si1=l30;
sj1=(U64)(si1);
sj0+=sj1;
l33=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L57;
}
sj0=0ULL;
l40=sj0;
goto L56;
L57:;
sj0=l33;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L38;
}
sj0=l33;
sj1=1ULL;
sj0<<=(sj1&63);
l40=sj0;
L56:;
si0=l4;
si1=l17;
si0+=si1;
l16=si0;
si0=l10;
si1=3U;
si0<<=(si1&31);
l25=si0;
si0=l38;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l24=si0;
si0=l10;
if(si0){
goto L59;
}
si0=0U;
l29=si0;
goto L58;
L59:;
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l9=si0;
si1=1U;
si0+=si1;
l29=si0;
si1=3U;
si0&=si1;
l31=si0;
si0=l9;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L61;
}
sj0=0ULL;
l33=sj0;
si0=l38;
l9=si0;
goto L60;
L61:;
si0=l29;
si1=1073741820U;
si0&=si1;
l29=si0;
sj0=0ULL;
l33=sj0;
si0=l38;
l9=si0;
L62:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l33;
sj1=63ULL;
sj0>>=(sj1&63);
l33=sj0;
si0=l29;
si1=-4U;
si0+=si1;
l29=si0;
if(si0){
goto L62;
}
}
L60:;
si0=l31;
si0=!(si0);
if(si0){
goto L63;
}
L64:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l32;
sj1=63ULL;
sj0>>=(sj1&63);
l33=sj0;
si0=l31;
si1=-1U;
si0+=si1;
l31=si0;
if(si0){
goto L64;
}
}
L63:;
si0=l10;
si1=1U;
si0&=si1;
l3=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L66;
}
si0=0U;
l29=si0;
si0=0U;
l30=si0;
goto L65;
L66:;
si0=l10;
si1=-2U;
si0&=si1;
l28=si0;
si0=0U;
l29=si0;
si0=l2;
l31=si0;
si0=l38;
l9=si0;
si0=0U;
l30=si0;
L67:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
si2=l29;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l31;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l34=si0;
si1=l34;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l32;
sj3=l39;
si2=sj2 <= sj3;
sj3=l32;
sj4=l39;
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
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l32;
si0=sj0 <= sj1;
sj1=l27;
sj2=l32;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
si0=l31;
si1=16U;
si0+=si1;
l31=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l28;
si1=l30;
si2=2U;
si1+=si2;
l30=si1;
si0=si0 != si1;
if(si0){
goto L67;
}
}
L65:;
sj0=l33;
sj1=l40;
sj0|=sj1;
l40=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L58;
}
si0=l38;
si1=l30;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l31=si0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
si2=l29;
sj2=(U64)(si2);
si3=l2;
si4=l9;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l33;
sj1=l32;
si0=sj0 <= sj1;
sj1=l33;
sj2=l32;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
L58:;
si0=l16;
si1=l25;
si0+=si1;
l12=si0;
si0=l24;
sj1=l40;
si2=l29;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l10;
si1=l13;
si0=si0 >= si1;
l41=si0;
if(si0){
goto L69;
}
si0=l6;
si1=l10;
si2=l12;
si3=l13;
si4=l4;
si5=l10;
si0=f1080(i,si0,si1,si2,si3,si4,si5);
l25=si0;
goto L68;
L69:;
si0=l6;
si1=l10;
si2=l4;
si3=l10;
si4=l12;
si5=l13;
si0=f1080(i,si0,si1,si2,si3,si4,si5);
l25=si0;
L68:;
si0=l3;
si1=l25;
sj1=(U64)(si1);
l40=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si0=!(si0);
if(si0){
goto L70;
}
si0=0U;
l30=si0;
si0=l10;
l34=si0;
si0=l6;
l9=si0;
si0=l16;
l31=si0;
si0=l0;
l29=si0;
L71:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l28=si0;
si0=l30;
si1=255U;
si0&=si1;
if(si0){
goto L73;
}
si0=l28;
l30=si0;
goto L72;
L73:;
si0=l28;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l30=si0;
L72:;
si0=l29;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si0=l29;
si1=8U;
si0+=si1;
l29=si0;
si0=l34;
si1=-1U;
si0+=si1;
l34=si0;
if(si0){
goto L71;
}
}
si0=l30;
si0=!(si0);
if(si0){
goto L70;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L70:;
si0=l20;
si1=l10;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l17=si0;
si0=l25;
if(si0){
goto L37;
}
si0=l6;
si1=-8U;
si0+=si1;
l30=si0;
si0=l10;
si1=4U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-8U;
si0+=si1;
l31=si0;
L76:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L75;
}
si0=l30;
si1=l9;
si0+=si1;
l29=si0;
si0=l31;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
si0=l31;
si1=-8U;
si0+=si1;
l31=si0;
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
sj0=l33;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
si0=sj0 == sj1;
if(si0){
goto L76;
}
}
sj0=l33;
sj1=l32;
si0=sj0 > sj1;
if(si0){
goto L74;
}
goto L37;
L75:;
si0=l9;
si0=!(si0);
if(si0){
goto L37;
}
L74:;
si0=l10;
si0=!(si0);
if(si0){
goto L77;
}
si0=l10;
si1=1U;
si0&=si1;
l42=si0;
si0=0U;
l31=si0;
si0=0U;
l29=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L78;
}
si0=l10;
si1=-2U;
si0&=si1;
l25=si0;
si0=0U;
l9=si0;
si0=0U;
l31=si0;
si0=0U;
l29=si0;
L79:;
{
si0=l20;
si1=l9;
si0+=si1;
l30=si0;
si1=l16;
si2=l9;
si1+=si2;
l34=si1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
si2=l31;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l6;
si3=l9;
si2+=si3;
l28=si2;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l30;
si1=8U;
si0+=si1;
si1=l34;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=l33;
sj3=l32;
si2=sj2 <= sj3;
sj3=l33;
sj4=l32;
si3=sj3 < sj4;
si4=l31;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l31=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l28;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l33=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l39;
sj1=l33;
si0=sj0 <= sj1;
sj1=l39;
sj2=l33;
si1=sj1 < sj2;
si2=l31;
si0=si2?si0:si1;
l31=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l25;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L79;
}
}
L78:;
si0=l42;
si0=!(si0);
if(si0){
goto L77;
}
si0=l20;
si1=l29;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l16;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
si2=l31;
sj2=(U64)(si2);
sj1-=sj2;
si2=l6;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L77:;
sj0=0ULL;
l40=sj0;
si0=l17;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l37;
si1=1U;
si0^=si1;
l37=si0;
goto L36;
L41:;
si0=l23;
si1=l10;
si2=1219308U;
f666(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l10;
si1=l10;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l31;
si1=l28;
si2=1195676U;
f675(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=1205851U;
si1=43U;
si2=1219324U;
f673(i,si0,si1,si2);
UNREACHABLE;
L37:;
si0=l10;
si0=!(si0);
if(si0){
goto L80;
}
si0=l10;
si1=1U;
si0&=si1;
l42=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=0U;
l31=si0;
si0=0U;
l29=si0;
goto L81;
L82:;
si0=l10;
si1=-2U;
si0&=si1;
l25=si0;
si0=0U;
l9=si0;
si0=0U;
l31=si0;
si0=0U;
l29=si0;
L83:;
{
si0=l20;
si1=l9;
si0+=si1;
l30=si0;
si1=l6;
si2=l9;
si1+=si2;
l34=si1;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
si2=l31;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
si2=l16;
si3=l9;
si2+=si3;
l28=si2;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l30;
si1=8U;
si0+=si1;
si1=l34;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l39=sj1;
sj2=l33;
sj3=l32;
si2=sj2 <= sj3;
sj3=l33;
sj4=l32;
si3=sj3 < sj4;
si4=l31;
si5=1U;
si4&=si5;
si2=si4?si2:si3;
l31=si2;
sj2=(U64)(si2);
sj1-=sj2;
si2=l28;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l33=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l39;
sj1=l33;
si0=sj0 <= sj1;
sj1=l39;
sj2=l33;
si1=sj1 < sj2;
si2=l31;
si0=si2?si0:si1;
l31=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l25;
si1=l29;
si2=2U;
si1+=si2;
l29=si1;
si0=si0 != si1;
if(si0){
goto L83;
}
}
L81:;
si0=l42;
si0=!(si0);
if(si0){
goto L84;
}
si0=l20;
si1=l29;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l6;
si2=l9;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
si2=l31;
sj2=(U64)(si2);
sj1-=sj2;
si2=l16;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l32=sj2;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l33;
sj1=l32;
si0=sj0 <= sj1;
sj1=l33;
sj2=l32;
si1=sj1 < sj2;
si2=l31;
si0=si2?si0:si1;
l31=si0;
L84:;
sj0=l40;
sj1=-1ULL;
sj0+=sj1;
sj1=l40;
si2=l31;
si3=1U;
si2&=si3;
sj0=si2?sj0:sj1;
l40=sj0;
L80:;
si0=l17;
sj1=l40;
i64_store(&i->m0,(U64)si0,sj1);
L36:;
si0=l38;
si1=l35;
si0+=si1;
l16=si0;
si0=l10;
si1=l13;
si0=si0 == si1;
l25=si0;
if(si0){
goto L100;
}
si0=l41;
si0=!(si0);
if(si0){
goto L96;
}
si0=l11;
si1=4U;
si0<<=(si1&31);
l28=si0;
si0=0U;
l31=si0;
si0=l12;
l29=si0;
si0=l0;
l9=si0;
si0=0U;
l30=si0;
L101:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l29;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l34=si0;
si0=l30;
si1=255U;
si0&=si1;
if(si0){
goto L103;
}
si0=l34;
l30=si0;
goto L102;
L103:;
si0=l34;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l30=si0;
L102:;
si0=l10;
si1=l31;
si0=si0 == si1;
if(si0){
goto L95;
}
si0=l9;
si1=l28;
si0+=si1;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=8U;
si0+=si1;
l29=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l13;
si1=l31;
si2=1U;
si1+=si2;
l31=si1;
si0=si0 != si1;
if(si0){
goto L101;
}
}
si0=l10;
si1=l13;
si0-=si1;
l41=si0;
si0=l0;
si1=l13;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l28=si0;
si0=l16;
si1=l9;
si0+=si1;
l35=si0;
si0=l30;
if(si0){
goto L99;
}
si0=l35;
si1=l28;
si2=l41;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
goto L98;
L100:;
si0=l10;
si0=!(si0);
if(si0){
goto L98;
}
si0=l11;
si1=4U;
si0<<=(si1&31);
l28=si0;
si0=0U;
l29=si0;
si0=l10;
l30=si0;
si0=l12;
l31=si0;
si0=l0;
l9=si0;
L104:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l34=si0;
si0=l29;
si1=255U;
si0&=si1;
if(si0){
goto L106;
}
si0=l34;
l29=si0;
goto L105;
L106:;
si0=l34;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l29=si0;
L105:;
si0=l9;
si1=l28;
si0+=si1;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l30;
si1=-1U;
si0+=si1;
l30=si0;
if(si0){
goto L104;
}
goto L97;
}
L99:;
si0=1U;
l29=si0;
si0=l25;
if(si0){
goto L97;
}
si0=l35;
si1=l28;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
l9=si0;
sj0=l33;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L107;
}
si0=l5;
si1=3U;
si0<<=(si1&31);
si1=l10;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
l9=si0;
si0=l11;
si1=4U;
si0<<=(si1&31);
l34=si0;
si0=1U;
l29=si0;
si0=l5;
si1=l10;
si2=3U;
si1*=si2;
si0-=si1;
si1=1U;
si0+=si1;
l30=si0;
si0=0U;
l31=si0;
L108:;
{
si0=l30;
si1=l31;
si0=si0 == si1;
if(si0){
goto L97;
}
si0=l9;
si1=l34;
si0+=si1;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1ULL;
sj1+=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l31;
si1=-1U;
si0+=si1;
l31=si0;
sj0=l33;
si0=!(sj0);
if(si0){
goto L108;
}
}
si0=0U;
si1=l31;
si0-=si1;
l9=si0;
L107:;
si0=l9;
si1=1U;
si0+=si1;
l31=si0;
si0=l9;
si1=l41;
si0=si0 >= si1;
if(si0){
goto L94;
}
si0=l35;
si1=l31;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
si1=l28;
si2=l9;
si1+=si2;
si2=l41;
si3=l31;
si2-=si3;
si3=3U;
si2<<=(si3&31);
si0=f15390(i,si0,si1,si2);
L98:;
si0=0U;
l29=si0;
L97:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
si1=l29;
sj1=(U64)(si1);
sj0+=sj1;
l33=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L110;
}
sj0=0ULL;
l43=sj0;
goto L109;
L110:;
sj0=l33;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L93;
}
sj0=l33;
sj1=1ULL;
sj0<<=(sj1&63);
l43=sj0;
L109:;
si0=l16;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l25=si0;
si0=l10;
if(si0){
goto L112;
}
si0=0U;
l29=si0;
goto L111;
L112:;
si0=l10;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
l9=si0;
si1=1U;
si0+=si1;
l29=si0;
si1=3U;
si0&=si1;
l31=si0;
si0=l9;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L114;
}
sj0=0ULL;
l33=sj0;
si0=l16;
l9=si0;
goto L113;
L114:;
si0=l29;
si1=1073741820U;
si0&=si1;
l29=si0;
sj0=0ULL;
l33=sj0;
si0=l16;
l9=si0;
L115:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=16U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=24U;
si0+=si1;
l30=si0;
si1=l30;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l32;
sj3=63ULL;
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=32U;
si0+=si1;
l9=si0;
sj0=l33;
sj1=63ULL;
sj0>>=(sj1&63);
l33=sj0;
si0=l29;
si1=-4U;
si0+=si1;
l29=si0;
if(si0){
goto L115;
}
}
L113:;
si0=l31;
si0=!(si0);
if(si0){
goto L116;
}
L117:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l33;
sj1|=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
sj0=l32;
sj1=63ULL;
sj0>>=(sj1&63);
l33=sj0;
si0=l31;
si1=-1U;
si0+=si1;
l31=si0;
if(si0){
goto L117;
}
}
L116:;
si0=l10;
si1=1U;
si0&=si1;
l5=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L119;
}
si0=0U;
l29=si0;
si0=0U;
l30=si0;
goto L118;
L119:;
si0=l10;
si1=-2U;
si0&=si1;
l28=si0;
si0=0U;
l29=si0;
si0=l4;
l31=si0;
si0=l16;
l9=si0;
si0=0U;
l30=si0;
L120:;
{
si0=l9;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
l32=sj1;
si2=l29;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
si3=l31;
sj3=i64_load(&i->m0,(U64)si3);
l39=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l34=si0;
si1=l34;
sj1=i64_load(&i->m0,(U64)si1);
l27=sj1;
sj2=l32;
sj3=l39;
si2=sj2 <= sj3;
sj3=l32;
sj4=l39;
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
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l27;
sj1=l32;
si0=sj0 <= sj1;
sj1=l27;
sj2=l32;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
si0=l31;
si1=16U;
si0+=si1;
l31=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l28;
si1=l30;
si2=2U;
si1+=si2;
l30=si1;
si0=si0 != si1;
if(si0){
goto L120;
}
}
L118:;
sj0=l33;
sj1=l43;
sj0|=sj1;
l43=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L111;
}
si0=l16;
si1=l30;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l31=si0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
l33=sj1;
si2=l29;
sj2=(U64)(si2);
si3=l4;
si4=l9;
si3+=si4;
sj3=i64_load(&i->m0,(U64)si3);
l32=sj3;
sj2+=sj3;
sj1-=sj2;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l33;
sj1=l32;
si0=sj0 <= sj1;
sj1=l33;
sj2=l32;
si1=sj1 < sj2;
si2=l29;
si0=si2?si0:si1;
l29=si0;
L111:;
si0=l25;
sj1=l43;
si2=l29;
sj2=(U64)(si2);
sj3=1ULL;
sj2&=sj3;
sj1-=sj2;
l33=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l26;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L92;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L91;
}
si0=l36;
sj0=i64_load(&i->m0,(U64)si0);
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L90;
}
sj0=l40;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L89;
}
si0=l24;
sj0=i64_load(&i->m0,(U64)si0);
sj1=6ULL;
si0=sj0 > sj1;
if(si0){
goto L88;
}
sj0=l33;
sj1=6ULL;
si0=sj0 > sj1;
if(si0){
goto L86;
}
si0=l10;
si1=20U;
si0=si0 < si1;
if(si0){
goto L87;
}
si0=l15;
si1=l11;
si0-=si1;
l9=si0;
si0=l22;
si1=l21;
si0+=si1;
l31=si0;
si0=l10;
si1=39U;
si0=si0 < si1;
if(si0){
goto L121;
}
si0=l6;
si1=l14;
si2=l19;
si3=l10;
si4=l20;
si5=l10;
si6=l31;
si7=l9;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L85;
L121:;
si0=l6;
si1=l14;
si2=l19;
si3=l10;
si4=l20;
si5=l10;
si6=l31;
si7=l9;
f1133(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L85;
L96:;
si0=l13;
si1=l10;
si2=1219340U;
f666(i,si0,si1,si2);
UNREACHABLE;
L95:;
si0=l10;
si1=l10;
si2=1195824U;
f663(i,si0,si1,si2);
UNREACHABLE;
L94:;
si0=l31;
si1=l41;
si2=1195676U;
f675(i,si0,si1,si2);
UNREACHABLE;
L93:;
si0=1205851U;
si1=43U;
si2=1219356U;
f673(i,si0,si1,si2);
UNREACHABLE;
L92:;
si0=1219844U;
si1=32U;
si2=1219876U;
f673(i,si0,si1,si2);
UNREACHABLE;
L91:;
si0=1219796U;
si1=32U;
si2=1219828U;
f673(i,si0,si1,si2);
UNREACHABLE;
L90:;
si0=1219744U;
si1=33U;
si2=1219780U;
f673(i,si0,si1,si2);
UNREACHABLE;
L89:;
si0=1219692U;
si1=33U;
si2=1219728U;
f673(i,si0,si1,si2);
UNREACHABLE;
L88:;
si0=1219644U;
si1=32U;
si2=1219676U;
f673(i,si0,si1,si2);
UNREACHABLE;
L87:;
si0=l6;
si1=l14;
si2=l19;
si3=l10;
si4=l20;
si5=l10;
f1367(i,si0,si1,si2,si3,si4,si5);
goto L85;
L86:;
si0=1219596U;
si1=32U;
si2=1219628U;
f673(i,si0,si1,si2);
UNREACHABLE;
L85:;
si0=l10;
si1=1U;
si0<<=(si1&31);
l28=si0;
si1=1U;
si0|=si1;
l34=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L130;
}
si0=l34;
si1=l14;
si0=si0 > si1;
if(si0){
goto L129;
}
si0=l34;
si1=l10;
si0=si0 == si1;
l5=si0;
if(si0){
goto L128;
}
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=l34;
si1=l10;
si2=-1U;
si1^=si2;
si0+=si1;
l25=si0;
si0=l36;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L132;
}
sj0=0ULL;
l39=sj0;
goto L131;
L132:;
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si0=l8;
si1=l25;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l25;
si1=l10;
si0=si0 != si1;
if(si0){
goto L124;
}
si0=0U;
l31=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L133;
}
si0=l10;
l29=si0;
si0=l14;
l9=si0;
L134:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l20;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l30=si0;
si0=l31;
si1=255U;
si0&=si1;
if(si0){
goto L136;
}
si0=l30;
l31=si0;
goto L135;
L136:;
si0=l30;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l31=si0;
L135:;
si0=l9;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l20;
si1=8U;
si0+=si1;
l20=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L134;
}
}
L133:;
sj0=l39;
si1=l31;
sj1=(U64)(si1);
sj0+=sj1;
l39=sj0;
L131:;
si0=l17;
sj0=i64_load(&i->m0,(U64)si0);
si0=!(sj0);
if(si0){
goto L137;
}
si0=l8;
si1=l25;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l25;
si1=l10;
si0=si0 != si1;
if(si0){
goto L123;
}
si0=0U;
l31=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L138;
}
si0=l10;
l29=si0;
si0=l14;
l9=si0;
L139:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l19;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l20=si0;
si0=l31;
si1=255U;
si0&=si1;
if(si0){
goto L141;
}
si0=l20;
l31=si0;
goto L140;
L141:;
si0=l20;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l31=si0;
L140:;
si0=l9;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l19;
si1=8U;
si0+=si1;
l19=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
if(si0){
goto L139;
}
}
L138:;
sj0=l39;
si1=l31;
sj1=(U64)(si1);
sj0+=sj1;
l39=sj0;
L137:;
si0=0U;
si1=l14;
si2=l25;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l5;
si0=si2?si0:si1;
sj1=l39;
i64_store(&i->m0,(U64)si0,sj1);
si0=l34;
si1=l7;
si0=si0 > si1;
if(si0){
goto L127;
}
si0=l7;
si1=l34;
si0-=si1;
l25=si0;
si1=l10;
si2=3U;
si1*=si2;
si2=4U;
si1+=si2;
l9=si1;
si0=si0 < si1;
if(si0){
goto L126;
}
si0=l25;
si1=l9;
si0-=si1;
l29=si0;
si0=l6;
si1=l34;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l11;
si1=20U;
si0=si0 < si1;
if(si0){
goto L125;
}
si0=l11;
si1=39U;
si0=si0 < si1;
if(si0){
goto L142;
}
si0=l14;
si1=l9;
si2=l38;
si3=l11;
si4=l16;
si5=l11;
si6=l19;
si7=l29;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L122;
L142:;
si0=l14;
si1=l9;
si2=l38;
si3=l11;
si4=l16;
si5=l11;
si6=l19;
si7=l29;
f1133(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L122;
L130:;
si0=l10;
si1=l34;
si2=1219372U;
f675(i,si0,si1,si2);
UNREACHABLE;
L129:;
si0=l34;
si1=l14;
si2=1219372U;
f666(i,si0,si1,si2);
UNREACHABLE;
L128:;
si0=1205851U;
si1=43U;
si2=1219388U;
f673(i,si0,si1,si2);
UNREACHABLE;
L127:;
si0=l34;
si1=l7;
si2=1219404U;
f662(i,si0,si1,si2);
UNREACHABLE;
L126:;
si0=1205816U;
si1=35U;
si2=1219420U;
f673(i,si0,si1,si2);
UNREACHABLE;
L125:;
si0=l14;
si1=l9;
si2=l38;
si3=l11;
si4=l16;
si5=l11;
f1367(i,si0,si1,si2,si3,si4,si5);
goto L122;
L124:;
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
si4=1196048U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L123:;
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
si4=1196048U;
f1214(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L122:;
si0=l10;
si1=2U;
si0<<=(si1&31);
l9=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L145;
}
si0=l1;
si1=l9;
si0-=si1;
l20=si0;
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si0=l23;
si1=l13;
si0=si0 > si1;
if(si0){
goto L146;
}
si0=l23;
si1=20U;
si0=si0 < si1;
if(si0){
goto L144;
}
si0=l23;
si1=39U;
si0=si0 < si1;
if(si0){
goto L147;
}
si0=l31;
si1=l20;
si2=l18;
si3=l23;
si4=l12;
si5=l23;
si6=l19;
si7=l29;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L143;
L147:;
si0=l31;
si1=l20;
si2=l18;
si3=l23;
si4=l12;
si5=l23;
si6=l19;
si7=l29;
f1133(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L143;
L146:;
si0=l31;
si1=l20;
si2=l18;
si3=l23;
si4=l12;
si5=l13;
si6=l19;
si7=l29;
sj0=f1360(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L143;
L145:;
si0=l9;
si1=l1;
si2=1219436U;
f662(i,si0,si1,si2);
UNREACHABLE;
L144:;
si0=l31;
si1=l20;
si2=l18;
si3=l23;
si4=l12;
si5=l23;
f1367(i,si0,si1,si2,si3,si4,si5);
L143:;
si0=l9;
si1=l1;
si0=si0 == si1;
if(si0){
goto L154;
}
si0=l11;
si1=2U;
si0<<=(si1&31);
l9=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L152;
}
si0=l7;
si1=l9;
si0-=si1;
l29=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L151;
}
si0=l28;
si1=l1;
si0=si0 > si1;
if(si0){
goto L150;
}
si0=l11;
si1=l28;
si0=si0 <= si1;
if(si0){
goto L153;
}
si0=l11;
si1=l28;
si2=1219516U;
f666(i,si0,si1,si2);
UNREACHABLE;
L154:;
si0=0U;
si1=0U;
si2=1219452U;
f663(i,si0,si1,si2);
UNREACHABLE;
L153:;
si0=l31;
sj0=i64_load(&i->m0,(U64)si0);
l43=sj0;
si0=l29;
si1=l11;
si0-=si1;
l7=si0;
si0=l6;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l31=si0;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l38=si0;
si0=l1;
si1=l28;
si0-=si1;
l9=si0;
si0=l0;
si1=l28;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l29=si0;
si0=l10;
si1=20U;
si0=si0 < si1;
if(si0){
goto L149;
}
si0=l10;
si1=39U;
si0=si0 < si1;
if(si0){
goto L155;
}
si0=l29;
si1=l9;
si2=l31;
si3=l10;
si4=l0;
si5=l10;
si6=l38;
si7=l7;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L148;
L155:;
si0=l29;
si1=l9;
si2=l31;
si3=l10;
si4=l0;
si5=l10;
si6=l38;
si7=l7;
f1133(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L148;
L152:;
si0=l9;
si1=l7;
si2=1219468U;
f662(i,si0,si1,si2);
UNREACHABLE;
L151:;
si0=1205816U;
si1=35U;
si2=1219484U;
f673(i,si0,si1,si2);
UNREACHABLE;
L150:;
si0=1205816U;
si1=35U;
si2=1219500U;
f673(i,si0,si1,si2);
UNREACHABLE;
L149:;
si0=l29;
si1=l9;
si2=l31;
si3=l10;
si4=l0;
si5=l10;
f1367(i,si0,si1,si2,si3,si4,si5);
L148:;
si0=l9;
si1=l10;
si0=si0 < si1;
if(si0){
goto L159;
}
si0=l9;
si1=l10;
si0-=si1;
l16=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L158;
}
si0=l29;
si1=l10;
si2=3U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l11=si0;
si0=l31;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l40=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L160;
}
sj0=l40;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L156;
case 1:
goto L161;
default:
goto L156;
}
L161:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l39=sj0;
si0=l10;
if(si0){
goto L163;
}
si0=0U;
l29=si0;
goto L162;
L163:;
si0=l10;
si1=24U;
si0*=si1;
l28=si0;
si0=0U;
l29=si0;
si0=l10;
l19=si0;
si0=l0;
l9=si0;
L164:;
{
si0=l9;
si1=l28;
si0+=si1;
l20=si0;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l9;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l30=si0;
si0=l29;
si1=255U;
si0&=si1;
if(si0){
goto L166;
}
si0=l30;
l29=si0;
goto L165;
L166:;
si0=l30;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l29=si0;
L165:;
si0=l20;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L164;
}
}
L162:;
sj0=l39;
si1=l29;
sj1=(U64)(si1);
sj0+=sj1;
l40=sj0;
goto L156;
L160:;
sj0=0ULL;
l33=sj0;
sj0=0ULL;
l40=sj0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si0=!(sj0);
if(si0){
goto L167;
}
sj0=l32;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L157;
}
sj0=l32;
sj1=1ULL;
sj0<<=(sj1&63);
l40=sj0;
L167:;
si0=l10;
si0=!(si0);
if(si0){
goto L168;
}
si0=l10;
si1=1U;
si0&=si1;
l28=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L170;
}
sj0=0ULL;
l33=sj0;
si0=0U;
l19=si0;
sj0=0ULL;
l44=sj0;
goto L169;
L170:;
si0=l10;
si1=24U;
si0*=si1;
l20=si0;
si0=l10;
si1=-2U;
si0&=si1;
l30=si0;
sj0=0ULL;
l44=sj0;
si0=0U;
l19=si0;
si0=l0;
l9=si0;
sj0=0ULL;
l33=sj0;
L171:;
{
si0=l9;
si1=l20;
si0+=si1;
l29=si0;
sj1=l33;
si2=l29;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l32=sj1;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l29;
si1=8U;
si0+=si1;
l29=si0;
sj1=0ULL;
sj2=l32;
sj3=l33;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l39;
sj3=63ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l27;
sj3=l32;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l32=sj1;
si2=l29;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l33=sj1;
si2=l9;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l33;
sj1=l32;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l39;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l27;
sj2=l33;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l33=sj0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l30;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L171;
}
}
L169:;
si0=l28;
si0=!(si0);
if(si0){
goto L168;
}
si0=l11;
si1=l19;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l29=si0;
sj1=l33;
si2=l29;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l32=sj1;
si2=l0;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l44;
sj1=l32;
sj2=l33;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l39;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l27;
sj2=l32;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l33=sj0;
L168:;
sj0=l33;
sj1=l40;
sj0+=sj1;
l40=sj0;
goto L156;
L159:;
si0=l10;
si1=l9;
si2=1219532U;
f662(i,si0,si1,si2);
UNREACHABLE;
L158:;
si0=1205816U;
si1=35U;
si2=1219548U;
f673(i,si0,si1,si2);
UNREACHABLE;
L157:;
si0=1205851U;
si1=43U;
si2=1219564U;
f673(i,si0,si1,si2);
UNREACHABLE;
L156:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l33=sj0;
sj1=1ULL;
si0=sj0 > sj1;
if(si0){
goto L173;
}
sj0=l33;
si0=(U32)(sj0);
switch(si0){
case 0:
goto L172;
case 1:
goto L174;
default:
goto L172;
}
L174:;
si0=0U;
l29=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L175;
}
si0=l10;
l19=si0;
si0=l11;
l9=si0;
L176:;
{
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
l32=sj0;
si1=l31;
sj1=i64_load(&i->m0,(U64)si1);
sj0+=sj1;
l33=sj0;
sj1=l32;
si0=sj0 < sj1;
l20=si0;
si0=l29;
si1=255U;
si0&=si1;
if(si0){
goto L178;
}
si0=l20;
l29=si0;
goto L177;
L178:;
si0=l20;
sj1=l33;
sj2=1ULL;
sj1+=sj2;
l33=sj1;
si1=!(sj1);
si0|=si1;
l29=si0;
L177:;
si0=l9;
sj1=l33;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l31;
si1=8U;
si0+=si1;
l31=si0;
si0=l19;
si1=-1U;
si0+=si1;
l19=si0;
if(si0){
goto L176;
}
}
L175:;
sj0=l40;
si1=l29;
sj1=(U64)(si1);
sj0+=sj1;
l40=sj0;
goto L172;
L173:;
si0=l10;
if(si0){
goto L179;
}
sj0=0ULL;
sj1=l40;
sj0+=sj1;
l40=sj0;
goto L172;
L179:;
si0=l10;
si1=1U;
si0&=si1;
l28=si0;
si0=l10;
si1=1U;
si0=si0 != si1;
if(si0){
goto L181;
}
sj0=0ULL;
l33=sj0;
si0=0U;
l19=si0;
sj0=0ULL;
l44=sj0;
goto L180;
L181:;
si0=l10;
si1=-2U;
si0&=si1;
l30=si0;
sj0=0ULL;
l44=sj0;
si0=0U;
l19=si0;
si0=l31;
l29=si0;
si0=l11;
l9=si0;
sj0=0ULL;
l33=sj0;
L182:;
{
si0=l9;
sj1=l33;
si2=l9;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l32=sj1;
si2=l29;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l20=si0;
sj1=0ULL;
sj2=l32;
sj3=l33;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l39;
sj3=63ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj2=l27;
sj3=l32;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
l32=sj1;
si2=l20;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l33=sj1;
si2=l29;
si3=8U;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l33;
sj1=l32;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l39;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l27;
sj2=l33;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l33=sj0;
si0=l29;
si1=16U;
si0+=si1;
l29=si0;
si0=l9;
si1=16U;
si0+=si1;
l9=si0;
si0=l30;
si1=l19;
si2=2U;
si1+=si2;
l19=si1;
si0=si0 != si1;
if(si0){
goto L182;
}
}
L180:;
si0=l28;
si0=!(si0);
if(si0){
goto L183;
}
si0=l11;
si1=l19;
si2=3U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
l29=si0;
sj1=l33;
si2=l29;
sj2=i64_load(&i->m0,(U64)si2);
sj1+=sj2;
l32=sj1;
si2=l31;
si3=l9;
si2+=si3;
sj2=i64_load(&i->m0,(U64)si2);
l39=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l27=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l44;
sj1=l32;
sj2=l33;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l39;
sj2=63ULL;
sj1>>=(sj2&63);
sj0+=sj1;
sj1=l27;
sj2=l32;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l33=sj0;
L183:;
sj0=l33;
sj1=l40;
sj0+=sj1;
l40=sj0;
L172:;
si0=l16;
si1=l10;
si0=si0 != si1;
if(si0){
goto L184;
}
si0=0U;
si1=0U;
si2=1219580U;
f663(i,si0,si1,si2);
UNREACHABLE;
L184:;
si0=l11;
si1=l5;
si0+=si1;
sj1=l40;
i64_store(&i->m0,(U64)si0,sj1);
si0=l10;
si1=20U;
si0=si0 < si1;
if(si0){
goto L186;
}
si0=l10;
si1=39U;
si0=si0 < si1;
if(si0){
goto L187;
}
si0=l0;
si1=l1;
si2=l2;
si3=l10;
si4=l4;
si5=l10;
si6=l38;
si7=l7;
f1129(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L185;
L187:;
si0=l0;
si1=l1;
si2=l2;
si3=l10;
si4=l4;
si5=l10;
si6=l38;
si7=l7;
f1133(i,si0,si1,si2,si3,si4,si5,si6,si7);
goto L185;
L186:;
si0=l0;
si1=l1;
si2=l2;
si3=l10;
si4=l4;
si5=l10;
f1367(i,si0,si1,si2,si3,si4,si5);
L185:;
si0=l0;
si1=l1;
si2=l14;
si3=l25;
si4=l6;
si5=l34;
si6=l10;
si7=l13;
si8=l23;
si7+=si8;
si8=l37;
sj9=l43;
f1369(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,sj9);
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}


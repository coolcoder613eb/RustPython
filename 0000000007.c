#include "w2c2_base.h"

#include "rustpython.h"

U32 f730(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=1103228U;
si2=2U;
si0=f642(i,si0,si1,si2);
L0:;
return si0;
}

U32 f731(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l0=si0;
si1=16U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
si1=32U;
si0&=si1;
if(si0){
goto L4;
}
sj0=l3;
si1=1U;
si2=l1;
si0=f717(i,sj0,si1,si2);
l0=si0;
goto L3;
L5:;
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
sj3=l3;
si3=(U32)(sj3);
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
sj0=l3;
sj1=16ULL;
si0=sj0 < sj1;
l4=si0;
sj0=l3;
sj1=4ULL;
sj0>>=(sj1&63);
l3=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
}
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
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
sj3=l3;
si3=(U32)(sj3);
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
sj0=l3;
sj1=16ULL;
si0=sj0 < sj1;
l4=si0;
sj0=l3;
sj1=4ULL;
sj0>>=(sj1&63);
l3=sj0;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l0;
si1=128U;
si0+=si1;
l4=si0;
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
si0=l4;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=128U;
si2=1102812U;
f593(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f732(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=1117337U;
si2=9U;
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
si1=1117346U;
si2=11U;
si3=l0;
si4=1117300U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=1117357U;
si2=9U;
si3=l2;
si4=4U;
si3+=si4;
si4=1117368U;
si0=f644(i,si0,si1,si2,si3,si4);
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

U32 f733(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=53U;
l3=si0;
si0=53U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1117384U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=52U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1117384U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=52U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=51U;
l2=si0;
si0=1465U;
l5=si0;
goto L7;
L9:;
si0=53U;
si1=53U;
si2=1106408U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1117388U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L6;
L10:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L7:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1117384U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=1465U;
si2=l4;
si3=1465U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1117596U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=1465U;
si2=1106424U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f734(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=35U;
l3=si0;
si0=35U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1119064U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=34U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1119064U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=34U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=33U;
l2=si0;
si0=875U;
l5=si0;
goto L7;
L9:;
si0=35U;
si1=35U;
si2=1106408U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1119068U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L6;
L10:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L7:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1119064U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=875U;
si2=l4;
si3=875U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1119204U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=875U;
si2=1106424U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f735(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=22U;
l3=si0;
si0=22U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1120080U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=21U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1120080U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=21U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=20U;
l2=si0;
si0=315U;
l5=si0;
goto L7;
L9:;
si0=22U;
si1=22U;
si2=1106408U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1120084U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L6;
L10:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L7:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1120080U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=315U;
si2=l4;
si3=315U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1120168U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=315U;
si2=1106424U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f736(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=0U;
l1=si0;
si0=l0;
si1=125951U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=10U;
si0>>=(si1&31);
si1=1121343U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=20U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
si1=1121466U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=55U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=-55U;
si0+=si1;
l1=si0;
si1=20U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=1122232U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=55U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=1122233U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
sj0=(U64)(si0);
l3=sj0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=1121792U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=1U;
si1<<=(si2&31);
si1=(U32)(U32)(I8)(U8)(si1);
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
sj1=(U64)(I64)(I32)(si1);
sj0^=sj1;
l4=sj0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
sj0=l4;
sj1=l3;
sj2=255ULL;
sj1&=sj2;
sj0=I64_ROTL(sj0,sj1);
l3=sj0;
goto L2;
L7:;
sj0=l4;
sj1=l3;
sj0>>=(sj1&63);
l3=sj0;
goto L2;
L6:;
si0=l1;
si1=20U;
si2=1106360U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=21U;
si2=1106376U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=55U;
si2=1106392U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=1121792U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L2:;
sj0=l3;
si1=l0;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

U32 f737(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=39U;
l3=si0;
si0=39U;
l4=si0;
L3:;
{
si0=-1U;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l2;
si1+=si2;
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=1122276U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si1<<=(si2&31);
l3=si1;
si2=l1;
si1=si1 != si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L4:;
si0=l4;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=38U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l1=si0;
si1=1122276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=38U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=37U;
l2=si0;
si0=275U;
l5=si0;
goto L7;
L9:;
si0=39U;
si1=39U;
si2=1106408U;
f594(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l1;
si1=1122280U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L6;
L10:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L7:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1122276U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
L6:;
si0=l5;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=l2;
si0-=si1;
l3=si0;
si0=l4;
si1=275U;
si2=l4;
si3=275U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L13:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=l4;
si2=1122432U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l5;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l5;
l4=si0;
L12:;
si0=l4;
si1=1U;
si0&=si1;
goto L0;
L11:;
si0=l1;
si1=275U;
si2=1106424U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f738(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=0U;
l1=si0;
si0=l0;
si1=127999U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=10U;
si0>>=(si1&31);
si1=1122707U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=17U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si0<<=(si1&31);
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si0|=si1;
si1=1122832U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=43U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=-43U;
si0+=si1;
l1=si0;
si1=24U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0<<=(si1&31);
l1=si0;
si1=1123448U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l2=si0;
si1=43U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=1123449U;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
sj0=(U64)(si0);
l3=sj0;
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=1123104U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l1;
si2=1U;
si1<<=(si2&31);
si1=(U32)(U32)(I8)(U8)(si1);
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
sj1=(U64)(I64)(I32)(si1);
sj0^=sj1;
l4=sj0;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
sj0=l4;
sj1=l3;
sj2=255ULL;
sj1&=sj2;
sj0=I64_ROTL(sj0,sj1);
l3=sj0;
goto L2;
L7:;
sj0=l4;
sj1=l3;
sj0>>=(sj1&63);
l3=sj0;
goto L2;
L6:;
si0=l1;
si1=17U;
si2=1106360U;
f594(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=25U;
si2=1106376U;
f594(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=43U;
si2=1106392U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=1123104U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l3=sj0;
L2:;
sj0=l3;
si1=l0;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

U32 f739(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1148228U;
si2=6U;
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
si1=1148234U;
si2=4U;
si3=l0;
si4=4U;
si3+=si4;
si4=1117300U;
si0=f644(i,si0,si1,si2,si3,si4);
si1=1148238U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1148244U;
si0=f644(i,si0,si1,si2,si3,si4);
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

void f740(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1,sj2;
si0=l0;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
si2=l2;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=-1U;
si0^=si1;
l3=si0;
si0=l2;
si1=64U;
si0=si0 < si1;
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+62U);
si1=2U;
si0<<=(si1&31);
si1=1149348U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+63U);
si2=2U;
si1<<=(si2&31);
si2=1148324U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+61U);
si2=2U;
si1<<=(si2&31);
si2=1150372U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+60U);
si2=2U;
si1<<=(si2&31);
si2=1151396U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+59U);
si2=2U;
si1<<=(si2&31);
si2=1152420U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+58U);
si2=2U;
si1<<=(si2&31);
si2=1153444U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+57U);
si2=2U;
si1<<=(si2&31);
si2=1154468U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+56U);
si2=2U;
si1<<=(si2&31);
si2=1155492U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+55U);
si2=2U;
si1<<=(si2&31);
si2=1156516U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+54U);
si2=2U;
si1<<=(si2&31);
si2=1157540U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+53U);
si2=2U;
si1<<=(si2&31);
si2=1158564U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+52U);
si2=2U;
si1<<=(si2&31);
si2=1159588U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+47U);
si2=2U;
si1<<=(si2&31);
si2=1148324U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+46U);
si3=2U;
si2<<=(si3&31);
si3=1149348U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+45U);
si3=2U;
si2<<=(si3&31);
si3=1150372U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+44U);
si3=2U;
si2<<=(si3&31);
si3=1151396U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+43U);
si3=2U;
si2<<=(si3&31);
si3=1152420U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+42U);
si3=2U;
si2<<=(si3&31);
si3=1153444U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+41U);
si3=2U;
si2<<=(si3&31);
si3=1154468U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+40U);
si3=2U;
si2<<=(si3&31);
si3=1155492U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+39U);
si3=2U;
si2<<=(si3&31);
si3=1156516U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+38U);
si3=2U;
si2<<=(si3&31);
si3=1157540U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+37U);
si3=2U;
si2<<=(si3&31);
si3=1158564U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+36U);
si3=2U;
si2<<=(si3&31);
si3=1159588U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+31U);
si3=2U;
si2<<=(si3&31);
si3=1148324U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+30U);
si4=2U;
si3<<=(si4&31);
si4=1149348U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+29U);
si4=2U;
si3<<=(si4&31);
si4=1150372U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+28U);
si4=2U;
si3<<=(si4&31);
si4=1151396U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+27U);
si4=2U;
si3<<=(si4&31);
si4=1152420U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+26U);
si4=2U;
si3<<=(si4&31);
si4=1153444U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+25U);
si4=2U;
si3<<=(si4&31);
si4=1154468U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+24U);
si4=2U;
si3<<=(si4&31);
si4=1155492U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+23U);
si4=2U;
si3<<=(si4&31);
si4=1156516U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+22U);
si4=2U;
si3<<=(si4&31);
si4=1157540U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+21U);
si4=2U;
si3<<=(si4&31);
si4=1158564U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+20U);
si4=2U;
si3<<=(si4&31);
si4=1159588U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l1;
si4=15U;
si3+=si4;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=2U;
si3<<=(si4&31);
si4=1148324U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l1;
si5=14U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1149348U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=13U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1150372U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=12U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1151396U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=11U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1152420U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=10U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1153444U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=9U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1154468U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=8U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1155492U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=7U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1156516U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=6U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1157540U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=5U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1158564U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l1;
si5=4U;
si4+=si5;
si4=i32_load8_u(&i->m0,(U64)si4);
si5=2U;
si4<<=(si5&31);
si5=1159588U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l3;
si5=24U;
si4>>=(si5&31);
si5=l1;
si6=3U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
si4^=si5;
si5=2U;
si4<<=(si5&31);
si5=1160612U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l3;
si5=16U;
si4>>=(si5&31);
si5=255U;
si4&=si5;
si5=l1;
si6=2U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
si4^=si5;
si5=2U;
si4<<=(si5&31);
si5=1161636U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l3;
si5=8U;
si4>>=(si5&31);
si5=255U;
si4&=si5;
si5=l1;
si6=1U;
si5+=si6;
si5=i32_load8_u(&i->m0,(U64)si5);
si4^=si5;
si5=2U;
si4<<=(si5&31);
si5=1162660U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
si4=l3;
si5=255U;
si4&=si5;
si5=l1;
si5=i32_load8_u(&i->m0,(U64)si5);
si4^=si5;
si5=2U;
si4<<=(si5&31);
si5=1163684U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si3^=si4;
l3=si3;
si4=24U;
si3>>=(si4&31);
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+19U);
si3^=si4;
si4=2U;
si3<<=(si4&31);
si4=1160612U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l3;
si4=16U;
si3>>=(si4&31);
si4=255U;
si3&=si4;
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+18U);
si3^=si4;
si4=2U;
si3<<=(si4&31);
si4=1161636U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l3;
si4=8U;
si3>>=(si4&31);
si4=255U;
si3&=si4;
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+17U);
si3^=si4;
si4=2U;
si3<<=(si4&31);
si4=1162660U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
si3=l3;
si4=255U;
si3&=si4;
si4=l1;
si4=i32_load8_u(&i->m0,(U64)si4+16U);
si3^=si4;
si4=2U;
si3<<=(si4&31);
si4=1163684U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si2^=si3;
l3=si2;
si3=24U;
si2>>=(si3&31);
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+35U);
si2^=si3;
si3=2U;
si2<<=(si3&31);
si3=1160612U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l3;
si3=16U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+34U);
si2^=si3;
si3=2U;
si2<<=(si3&31);
si3=1161636U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l3;
si3=8U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+33U);
si2^=si3;
si3=2U;
si2<<=(si3&31);
si3=1162660U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
si2=l3;
si3=255U;
si2&=si3;
si3=l1;
si3=i32_load8_u(&i->m0,(U64)si3+32U);
si2^=si3;
si3=2U;
si2<<=(si3&31);
si3=1163684U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1^=si2;
l3=si1;
si2=24U;
si1>>=(si2&31);
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+51U);
si1^=si2;
si2=2U;
si1<<=(si2&31);
si2=1160612U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l3;
si2=16U;
si1>>=(si2&31);
si2=255U;
si1&=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+50U);
si1^=si2;
si2=2U;
si1<<=(si2&31);
si2=1161636U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l3;
si2=8U;
si1>>=(si2&31);
si2=255U;
si1&=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+49U);
si1^=si2;
si2=2U;
si1<<=(si2&31);
si2=1162660U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
si1=l3;
si2=255U;
si1&=si2;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2+48U);
si1^=si2;
si2=2U;
si1<<=(si2&31);
si2=1163684U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0^=si1;
l3=si0;
si0=l1;
si1=64U;
si0+=si1;
l1=si0;
si0=l2;
si1=-64U;
si0+=si1;
l2=si0;
si1=63U;
si0=si0 > si1;
if(si0){
goto L2;
}
}
L1:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=3U;
si0&=si1;
l4=si0;
if(si0){
goto L5;
}
si0=l1;
l5=si0;
goto L4;
L5:;
si0=l1;
l5=si0;
L6:;
{
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0^=si1;
si1=255U;
si0&=si1;
si1=2U;
si0<<=(si1&31);
si1=1148324U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si2=8U;
si1>>=(si2&31);
si0^=si1;
l3=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L6;
}
}
L4:;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
L7:;
{
si0=l5;
si1=3U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l5;
si3=1U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=l5;
si3=i32_load8_u(&i->m0,(U64)si3);
si4=l3;
si3^=si4;
si4=255U;
si3&=si4;
si4=2U;
si3<<=(si4&31);
si4=1148324U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si5=8U;
si4>>=(si5&31);
si3^=si4;
l1=si3;
si2^=si3;
si3=255U;
si2&=si3;
si3=2U;
si2<<=(si3&31);
si3=1148324U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si3=l1;
si4=8U;
si3>>=(si4&31);
si2^=si3;
l1=si2;
si1^=si2;
si2=255U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si2=1148324U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=8U;
si2>>=(si3&31);
si1^=si2;
l1=si1;
si0^=si1;
si1=255U;
si0&=si1;
si1=2U;
si0<<=(si1&31);
si1=1148324U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=8U;
si1>>=(si2&31);
si0^=si1;
l3=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L3:;
si0=l0;
si1=l3;
si2=-1U;
si1^=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L0:;
}

void f741(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=432U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=346U;
si0+=si1;
si1=0U;
si2=70U;
si0=f15145(i,si0,si1,si2);
si0=l2;
si1=12U;
si0+=si1;
si1=0U;
si2=256U;
si0=f15145(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=272U;
si0+=si1;
si1=l1;
si2=272U;
si1+=si2;
si2=70U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=342U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=268U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+421U);
i32_store8(&i->m0,(U64)si0+421U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+418U);
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=l1;
si1=425U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=417U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+424U);
l8=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+427U);
l9=si0;
si0=l1;
si0=i32_load16_u(&i->m0,(U64)si0+428U);
l10=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+416U);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+420U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+422U);
l13=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+426U);
l14=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+419U);
l15=si0;
si0=l2;
si1=423U;
si0+=si1;
si1=l1;
si2=423U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=417U;
si0+=si1;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=425U;
si0+=si1;
si1=l4;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l15;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l14;
i32_store8(&i->m0,(U64)si0+426U,si1);
si0=l2;
si1=l13;
i32_store8(&i->m0,(U64)si0+422U,si1);
si0=l2;
si1=l12;
i32_store8(&i->m0,(U64)si0+420U,si1);
si0=l2;
si1=l11;
i32_store8(&i->m0,(U64)si0+416U,si1);
si0=l2;
si1=l15;
i32_store8(&i->m0,(U64)si0+419U,si1);
si0=l2;
si1=l10;
i32_store16(&i->m0,(U64)si0+428U,si1);
si0=l2;
si1=l9;
i32_store8(&i->m0,(U64)si0+427U,si1);
si0=l2;
si1=l8;
i32_store8(&i->m0,(U64)si0+424U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l9;
if(si0){
goto L2;
}
si0=2U;
l1=si0;
goto L1;
L2:;
si0=l3;
si1=l12;
si0+=si1;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=255U;
si0&=si1;
if(si0){
goto L3;
}
si0=3U;
l1=si0;
goto L1;
L3:;
si0=l3;
si1=l1;
si0+=si1;
si1=3U;
i32_store8(&i->m0,(U64)si0,si1);
si0=4U;
l1=si0;
L1:;
si0=l8;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l4;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L4:;
si0=l11;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
default:
goto L8;
}
L8:;
si0=1164820U;
si1=40U;
si2=1164860U;
f604(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l2;
si1=22U;
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
l8=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=25U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l3;
si1=l5;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
l8=si0;
L5:;
si0=l2;
si1=l8;
si2=1U;
si1+=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l16;
si1=202U;
si0*=si1;
l17=si0;
si1=254U;
si0&=si1;
l18=si0;
si0=l17;
si1=8U;
si0>>=(si1&31);
si1=0U;
si0=si0 != si1;
l19=si0;
si0=l2;
si1=13U;
si0+=si1;
l20=si0;
si0=1164810U;
l21=si0;
L9:;
{
si0=l21;
si0=i32_load8_u(&i->m0,(U64)si0);
l22=si0;
si1=202U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l22;
si1=l16;
si0*=si1;
l1=si0;
si1=255U;
si0&=si1;
l23=si0;
si0=0U;
l7=si0;
si0=l1;
si1=8U;
si0>>=(si1&31);
si1=0U;
si0=si0 != si1;
l24=si0;
L14:;
{
si0=l7;
si1=255U;
si0&=si1;
l12=si0;
si1=13U;
si0=si0 == si1;
l25=si0;
si1=l12;
si2=10U;
si1=si1 == si2;
l1=si1;
si0|=si1;
l5=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+417U);
l26=si0;
si1=l12;
si0=si0 == si1;
l14=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+424U);
si2=0U;
si1=si1 != si2;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+425U);
si3=l12;
si2=si2 == si3;
si1&=si2;
l27=si1;
si0|=si1;
l28=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+427U);
l29=si0;
si1=0U;
si0=si0 != si1;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+420U);
si2=l12;
si1=si1 == si2;
si0&=si1;
l30=si0;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+419U);
si2=l12;
si1=si1 == si2;
l10=si1;
si0|=si1;
l31=si0;
si0=l30;
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+426U);
si2=0U;
si1=si1 != si2;
si0&=si1;
l32=si0;
si1=l10;
si0|=si1;
l33=si0;
si0=0U;
si1=6U;
si2=l1;
si0=si2?si0:si1;
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=1U;
si0<<=(si1&31);
l34=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+416U);
l13=si0;
si0=l22;
l11=si0;
L16:;
{
si0=2U;
l9=si0;
si0=0U;
l1=si0;
si0=l4;
l8=si0;
si0=l11;
si1=255U;
si0&=si1;
l15=si0;
switch(si0){
case 0:
goto L25;
case 1:
goto L26;
case 2:
goto L27;
case 3:
goto L28;
case 4:
goto L19;
case 5:
goto L29;
case 6:
goto L15;
case 7:
goto L30;
case 8:
goto L31;
case 9:
goto L23;
default:
goto L32;
}
L32:;
si0=201U;
l8=si0;
si0=l15;
si1=-200U;
si0+=si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L24;
case 2:
goto L18;
default:
goto L17;
}
L31:;
si0=0U;
l1=si0;
si0=0U;
l8=si0;
goto L17;
L30:;
si0=1U;
l8=si0;
goto L17;
L29:;
si0=l33;
if(si0){
goto L20;
}
si0=l5;
l1=si0;
si0=l13;
switch(si0){
case 0:
goto L33;
case 1:
goto L34;
default:
goto L35;
}
L35:;
si0=1165070U;
si1=40U;
si2=1165344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L34:;
si0=l14;
l1=si0;
L33:;
si0=-56U;
si1=2U;
si2=l1;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
goto L17;
L28:;
si0=5U;
si1=3U;
si2=l30;
si0=si2?si0:si1;
l8=si0;
si0=2U;
si1=1U;
si2=l30;
si0=si2?si0:si1;
l9=si0;
si0=l29;
si0=!(si0);
if(si0){
goto L15;
}
si0=l30;
if(si0){
goto L15;
}
si0=4U;
si1=3U;
si2=l2;
si2=i32_load8_u(&i->m0,(U64)si2+422U);
si3=0U;
si2=si2 != si3;
si3=l2;
si3=i32_load8_u(&i->m0,(U64)si3+423U);
si4=255U;
si3&=si4;
si4=l12;
si3=si3 == si4;
si2&=si3;
l1=si2;
si0=si2?si0:si1;
l8=si0;
si0=2U;
si1=1U;
si2=l1;
si0=si2?si0:si1;
l9=si0;
goto L15;
L27:;
si0=l10;
si0=!(si0);
if(si0){
goto L36;
}
si0=7U;
l8=si0;
goto L15;
L36:;
si0=l5;
l1=si0;
si0=l13;
switch(si0){
case 0:
goto L37;
case 1:
goto L38;
default:
goto L39;
}
L39:;
si0=1165070U;
si1=40U;
si2=1165344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L38:;
si0=l14;
l1=si0;
L37:;
si0=-56U;
si1=2U;
si2=l1;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
goto L17;
L26:;
si0=l31;
if(si0){
goto L21;
}
si0=l5;
l1=si0;
si0=l13;
switch(si0){
case 0:
goto L40;
case 1:
goto L41;
default:
goto L42;
}
L42:;
si0=1165070U;
si1=40U;
si2=1165344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L41:;
si0=l14;
l1=si0;
L40:;
si0=-56U;
si1=2U;
si2=l1;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
goto L17;
L25:;
si0=l13;
switch(si0){
case 0:
goto L43;
case 1:
goto L22;
default:
goto L44;
}
L44:;
si0=1165070U;
si1=40U;
si2=1165344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L43:;
si0=0U;
l8=si0;
si0=l12;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L45;
case 2:
goto L45;
case 3:
goto L15;
default:
goto L45;
}
L45:;
si0=l27;
if(si0){
goto L46;
}
si0=1U;
l8=si0;
si0=0U;
l1=si0;
goto L17;
L46:;
si0=6U;
l8=si0;
goto L15;
L24:;
si0=1U;
l1=si0;
si0=l13;
switch(si0){
case 0:
goto L47;
case 1:
goto L48;
default:
goto L49;
}
L49:;
si0=1165070U;
si1=40U;
si2=1165328U;
f604(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=0U;
l1=si0;
L47:;
si0=9U;
si1=8U;
si2=l1;
si0=si2?si0:si1;
si1=8U;
si2=l25;
si0=si2?si0:si1;
l8=si0;
goto L15;
L23:;
si0=0U;
l8=si0;
si0=l34;
l1=si0;
goto L17;
L22:;
si0=1U;
l8=si0;
si0=l28;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
si1=6U;
si2=l26;
si3=l12;
si2=si2 == si3;
si0=si2?si0:si1;
l8=si0;
goto L15;
L21:;
si0=3U;
si1=7U;
si2=l30;
si0=si2?si0:si1;
l8=si0;
goto L15;
L20:;
si0=1U;
si1=2U;
si2=l32;
si0=si2?si0:si1;
l9=si0;
si0=3U;
si1=7U;
si2=l32;
si0=si2?si0:si1;
l8=si0;
goto L15;
L19:;
si0=1U;
l9=si0;
si0=3U;
l8=si0;
goto L15;
L18:;
si0=0U;
l9=si0;
si0=l11;
l8=si0;
goto L15;
L17:;
si0=l8;
l11=si0;
si0=l1;
l9=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L16;
}
}
L15:;
si0=l24;
if(si0){
goto L11;
}
si0=l8;
si1=255U;
si0&=si1;
si1=l16;
si0*=si1;
l8=si0;
si1=8U;
si0>>=(si1&31);
if(si0){
goto L50;
}
si0=l3;
si1=l12;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l23;
si0+=si1;
l1=si0;
si1=69U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=346U;
si0+=si1;
si1=l9;
si2=1U;
si1=si1 == si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=272U;
si0+=si1;
si1=l8;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=256U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L14;
L50:;
}
si0=1164876U;
si1=43U;
si2=1164920U;
f604(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l19;
if(si0){
goto L11;
}
si0=0U;
l8=si0;
L51:;
{
si0=l3;
si1=l8;
si2=254U;
si1&=si2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0+=si1;
l1=si0;
si1=70U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=346U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=272U;
si0+=si1;
si1=l17;
i32_store8(&i->m0,(U64)si0,si1);
si0=l20;
si1=l8;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l18;
si0+=si1;
l1=si0;
si1=69U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=346U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=272U;
si0+=si1;
si1=l17;
i32_store8(&i->m0,(U64)si0,si1);
si0=l8;
si1=2U;
si0+=si1;
l8=si0;
si1=256U;
si0=si0 == si1;
if(si0){
goto L10;
}
goto L51;
}
L12:;
si0=l1;
si1=70U;
si2=1164952U;
f594(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=1164876U;
si1=43U;
si2=1164920U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
si1=1164820U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l2;
si1=345U;
si0+=si1;
si1=l16;
si2=3U;
si1<<=(si2&31);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=344U;
si0+=si1;
si1=l16;
si2=7U;
si1*=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=343U;
si0+=si1;
si1=l16;
si2=3U;
si1*=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=l2;
si1=l16;
si2=1U;
si1<<=(si2&31);
i32_store8(&i->m0,(U64)si0+342U,si1);
si0=l0;
si1=l2;
si2=432U;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=432U;
si0+=si1;
i->g0=si0;
L0:;
}

void f742(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=0U;
l8=si0;
si0=l3;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+429U);
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load16_u(&i->m0,(U64)si0);
si1=l2;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=12565487U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=3U;
l8=si0;
si0=l2;
si1=3U;
si0+=si1;
l2=si0;
si0=l3;
si1=-3U;
si0+=si1;
l3=si0;
L1:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+428U);
if(si0){
goto L11;
}
si0=l3;
if(si0){
goto L16;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+345U);
l9=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+418U);
l10=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=255U;
si0&=si1;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+268U);
l3=si0;
si1=255U;
si0&=si1;
si1=32U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l9;
si1=255U;
si0&=si1;
si1=l3;
si2=3U;
si1<<=(si2&31);
l10=si1;
si2=248U;
si1&=si2;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l3;
si1=255U;
si0&=si1;
si0=!(si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
goto L14;
L16:;
si0=0U;
l10=si0;
si0=l5;
if(si0){
goto L13;
}
goto L4;
L15:;
si0=4U;
l2=si0;
si0=0U;
l10=si0;
si0=l9;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
L14:;
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=0U;
l10=si0;
goto L3;
L13:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=12U;
si0+=si1;
l11=si0;
si0=l1;
si1=344U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l13=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+418U);
l15=si0;
si0=0U;
l16=si0;
si0=l1;
si1=342U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l17=si0;
si0=l1;
si1=343U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l18=si0;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L17:;
{
si0=l11;
si1=l2;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l19=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l15;
si2=255U;
si1&=si2;
si0+=si1;
l15=si0;
si1=70U;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=l1;
sj1=l14;
si2=l19;
si3=10U;
si2=si2 == si3;
sj2=(U64)(si2);
sj1+=sj2;
l14=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l15;
si0+=si1;
l20=si0;
si1=272U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=l20;
si1=346U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L19;
}
goto L18;
L20:;
si0=l15;
si1=70U;
si2=1164936U;
f594(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l4;
si1=l9;
si0+=si1;
si1=l19;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
L18:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l15;
si1=255U;
si0&=si1;
l19=si0;
si1=l12;
si2=255U;
si1&=si2;
l20=si1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l6;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
si2=l13;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=l19;
si1=l20;
si0=si0 != si1;
if(si0){
goto L10;
}
L21:;
si0=l19;
si1=l17;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l19;
si1=l18;
si0=si0 != si1;
if(si0){
goto L22;
}
L23:;
si0=l10;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L22;
}
L24:;
{
si0=l11;
si1=l2;
si2=l10;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
l19=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L22;
}
si0=l4;
si1=l9;
si0+=si1;
si1=l19;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l9;
si1=l5;
si0=si0 < si1;
if(si0){
goto L24;
}
}
L22:;
si0=l10;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l16;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L10;
}
goto L17;
}
L12:;
si0=1164876U;
si1=43U;
si2=1164920U;
f604(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l3;
if(si0){
goto L31;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+421U);
l9=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L30;
}
si0=l9;
si1=-200U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L25;
case 2:
goto L29;
default:
goto L25;
}
L31:;
si0=0U;
l10=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+421U);
l11=si0;
si0=0U;
l16=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l11;
l19=si0;
si0=0U;
l10=si0;
goto L27;
L30:;
si0=1U;
si1=l9;
si0<<=(si1&31);
si1=190U;
si0&=si1;
if(si0){
goto L25;
}
L29:;
si0=l1;
si1=202U;
i32_store8(&i->m0,(U64)si0+421U,si1);
si0=4U;
l2=si0;
si0=0U;
l10=si0;
goto L3;
L28:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+427U);
l18=si0;
si1=0U;
si0=si0 != si1;
l21=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+426U);
si2=0U;
si1=si1 != si2;
si0&=si1;
l22=si0;
si0=l1;
si1=417U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l23=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+416U);
l12=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+419U);
l13=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+420U);
l17=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+424U);
si1=255U;
si0&=si1;
l24=si0;
si0=l1;
si1=425U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l25=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+422U);
si1=255U;
si0&=si1;
l26=si0;
si0=l1;
si1=423U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l27=si0;
si0=0U;
l10=si0;
si0=0U;
l16=si0;
L32:;
{
si0=l2;
si1=l10;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=3U;
l20=si0;
si0=l11;
si1=255U;
si0&=si1;
l19=si0;
switch(si0){
case 0:
goto L53;
case 1:
goto L52;
case 2:
goto L43;
case 3:
goto L51;
case 4:
goto L37;
case 5:
goto L41;
case 6:
goto L50;
case 7:
goto L40;
case 8:
goto L49;
case 9:
goto L48;
default:
goto L54;
}
L54:;
si0=201U;
l11=si0;
si0=l19;
si1=-200U;
si0+=si1;
switch(si0){
case 0:
goto L33;
case 1:
goto L56;
case 2:
goto L55;
default:
goto L33;
}
L56:;
si0=1U;
l19=si0;
si0=l12;
switch(si0){
case 0:
goto L57;
case 1:
goto L58;
default:
goto L59;
}
L59:;
si0=1165070U;
si1=40U;
si2=1165328U;
f604(i,si0,si1,si2);
UNREACHABLE;
L58:;
si0=0U;
l19=si0;
L57:;
si0=9U;
si1=8U;
si2=l19;
si0=si2?si0:si1;
si1=8U;
si2=l15;
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l19=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L34;
L55:;
si0=l6;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=4U;
l2=si0;
si0=202U;
l19=si0;
si0=l9;
l3=si0;
goto L26;
L53:;
si0=l12;
switch(si0){
case 0:
goto L60;
case 1:
goto L42;
default:
goto L61;
}
L61:;
si0=1165070U;
si1=40U;
si2=1165344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=0U;
l19=si0;
si0=l15;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L35;
case 1:
goto L36;
case 2:
goto L36;
case 3:
goto L35;
default:
goto L36;
}
L52:;
si0=l18;
si0=!(si0);
if(si0){
goto L62;
}
si0=3U;
l19=si0;
si0=l17;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
L62:;
si0=7U;
l19=si0;
si0=l13;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l12;
switch(si0){
case 0:
goto L46;
case 1:
goto L45;
default:
goto L47;
}
L51:;
si0=5U;
si1=3U;
si2=l21;
si3=l17;
si4=255U;
si3&=si4;
si4=l15;
si3=si3 == si4;
si2&=si3;
l20=si2;
si0=si2?si0:si1;
l19=si0;
si0=2U;
si1=1U;
si2=l20;
si0=si2?si0:si1;
l11=si0;
si0=l18;
si0=!(si0);
if(si0){
goto L38;
}
si0=l20;
if(si0){
goto L38;
}
si0=3U;
l20=si0;
si0=l26;
si0=!(si0);
if(si0){
goto L37;
}
si0=4U;
l19=si0;
si0=3U;
l20=si0;
si0=l27;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
goto L37;
L50:;
si0=0U;
si1=6U;
si2=l15;
si3=10U;
si2=si2 == si3;
si0=si2?si0:si1;
l19=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L34;
L49:;
si0=0U;
l11=si0;
goto L33;
L48:;
si0=0U;
l19=si0;
si0=l15;
si1=10U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=0U;
l11=si0;
goto L33;
L47:;
si0=1165070U;
si1=40U;
si2=1165344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L46:;
si0=l15;
si1=13U;
si0=si0 == si1;
si1=l15;
si2=10U;
si1=si1 == si2;
si0|=si1;
l11=si0;
goto L44;
L45:;
si0=l23;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
l11=si0;
L44:;
si0=-56U;
si1=2U;
si2=l11;
si0=si2?si0:si1;
l19=si0;
si0=l11;
si1=1U;
si0^=si1;
l11=si0;
goto L38;
L43:;
si0=7U;
l19=si0;
si0=l13;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l12;
switch(si0){
case 0:
goto L65;
case 1:
goto L64;
default:
goto L66;
}
L66:;
si0=1165070U;
si1=40U;
si2=1165344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l15;
si1=13U;
si0=si0 == si1;
si1=l15;
si2=10U;
si1=si1 == si2;
si0|=si1;
l11=si0;
goto L63;
L64:;
si0=l23;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
l11=si0;
L63:;
si0=-56U;
si1=2U;
si2=l11;
si0=si2?si0:si1;
l19=si0;
si0=l11;
si1=1U;
si0^=si1;
l11=si0;
goto L38;
L42:;
si0=0U;
l19=si0;
si0=l23;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 != si1;
if(si0){
goto L36;
}
goto L35;
L41:;
si0=3U;
l20=si0;
si0=l22;
si1=l17;
si2=255U;
si1&=si2;
si2=l15;
si1=si1 == si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L39;
}
goto L37;
L40:;
si0=1U;
l11=si0;
goto L33;
L39:;
si0=7U;
l19=si0;
si0=l13;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l12;
switch(si0){
case 0:
goto L69;
case 1:
goto L68;
default:
goto L70;
}
L70:;
si0=1165070U;
si1=40U;
si2=1165344U;
f604(i,si0,si1,si2);
UNREACHABLE;
L69:;
si0=l15;
si1=13U;
si0=si0 == si1;
si1=l15;
si2=10U;
si1=si1 == si2;
si0|=si1;
l11=si0;
goto L67;
L68:;
si0=l23;
si1=255U;
si0&=si1;
si1=l15;
si0=si0 == si1;
l11=si0;
L67:;
si0=-56U;
si1=2U;
si2=l11;
si0=si2?si0:si1;
l19=si0;
si0=l11;
si1=1U;
si0^=si1;
l11=si0;
L38:;
si0=l19;
l20=si0;
si0=l11;
switch(si0){
case 0:
goto L34;
case 1:
goto L37;
case 2:
goto L35;
default:
goto L34;
}
L37:;
si0=l4;
si1=l9;
si0+=si1;
si1=l15;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l20;
l19=si0;
goto L34;
L36:;
si0=1U;
l11=si0;
si0=l24;
si0=!(si0);
if(si0){
goto L33;
}
si0=6U;
l19=si0;
si0=l25;
si1=l15;
si0=si0 != si1;
if(si0){
goto L33;
}
L35:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
L34:;
si0=l19;
si1=255U;
si0&=si1;
l11=si0;
si1=-7U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L71;
}
si0=l11;
si1=202U;
si0=si0 == si1;
if(si0){
goto L71;
}
si0=l19;
l11=si0;
goto L33;
L71:;
si0=l6;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
si0=7U;
l11=si0;
si0=l19;
si1=7U;
si0=si0 != si1;
if(si0){
goto L27;
}
L33:;
si0=l10;
si1=l3;
si0=si0 < si1;
if(si0){
goto L72;
}
si0=l11;
l19=si0;
goto L27;
L72:;
si0=l9;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L73;
}
si0=l11;
l19=si0;
si0=l16;
si1=l7;
si0=si0 < si1;
if(si0){
goto L32;
}
goto L27;
L73:;
}
si0=l11;
l19=si0;
L27:;
si0=l19;
si1=255U;
si0&=si1;
l4=si0;
si1=-8U;
si0+=si1;
si1=2U;
si0=si0 < si1;
if(si0){
goto L74;
}
si0=4U;
l2=si0;
si0=l4;
si1=202U;
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l9;
l3=si0;
goto L26;
L75:;
si0=l9;
si1=l5;
si0=si0 < si1;
if(si0){
goto L76;
}
si0=1U;
l2=si0;
si0=l10;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L76;
}
si0=l9;
l3=si0;
goto L26;
L76:;
si0=l10;
si1=l3;
si0=si0 < si1;
si1=1U;
si0<<=(si1&31);
si1=0U;
si2=l16;
si3=l7;
si2=si2 >= si3;
si0=si2?si0:si1;
l2=si0;
si0=l9;
l3=si0;
goto L26;
L74:;
si0=0U;
l3=si0;
si0=3U;
l2=si0;
L26:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l19;
i32_store8(&i->m0,(U64)si0+421U,si1);
goto L2;
L25:;
si0=l7;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=8U;
i32_store8(&i->m0,(U64)si0+421U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=0U;
l10=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L10:;
si0=l1;
si1=345U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l15;
si2=255U;
si1&=si2;
si0=si0 > si1;
if(si0){
goto L78;
}
si0=3U;
l2=si0;
si0=0U;
l3=si0;
goto L77;
L78:;
si0=1U;
si1=l16;
si2=l7;
si1=si1 >= si2;
si2=1U;
si1<<=(si2&31);
si2=0U;
si3=l10;
si4=l3;
si3=si3 < si4;
l3=si3;
si1=si3?si1:si2;
l19=si1;
si2=l3;
si0=si2?si0:si1;
si1=l19;
si2=l9;
si3=l5;
si2=si2 >= si3;
si0=si2?si0:si1;
l2=si0;
si0=l9;
si1=l13;
si0+=si1;
l3=si0;
L77:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l15;
i32_store8(&i->m0,(U64)si0+418U,si1);
goto L2;
L9:;
si0=2U;
l2=si0;
goto L3;
L8:;
si0=l7;
if(si0){
goto L6;
}
L7:;
si0=2U;
l2=si0;
si0=0U;
l10=si0;
goto L3;
L6:;
si0=l1;
si1=l10;
i32_store8(&i->m0,(U64)si0+418U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=0U;
l10=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
L5:;
si0=1U;
l16=si0;
si0=3U;
l2=si0;
si0=0U;
l9=si0;
goto L2;
L4:;
si0=1U;
l2=si0;
L3:;
si0=0U;
l9=si0;
si0=0U;
l16=si0;
L2:;
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+429U,si1);
si0=l0;
si1=l16;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f743(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si1=264U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=265U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l7=si0;
si0=0U;
l8=si0;
goto L2;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+275U);
switch(si0){
case 0:
goto L8;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L6;
default:
goto L13;
}
L13:;
si0=1165070U;
si1=40U;
si2=1165180U;
f604(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l2;
l8=si0;
si0=l3;
l7=si0;
si0=l3;
si1=8U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l2;
l9=si0;
si0=l3;
l7=si0;
L14:;
{
si0=l1;
si1=l9;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=1U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=2U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=4U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=5U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=l9;
si2=6U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l9;
si1=8U;
si0+=si1;
l8=si0;
si0=l7;
si1=-8U;
si0+=si1;
l7=si0;
si0=l1;
si1=l9;
si2=7U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
if(si0){
goto L10;
}
si0=l8;
l9=si0;
si0=l7;
si1=8U;
si0=si0 >= si1;
if(si0){
goto L14;
}
goto L10;
}
L11:;
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f686(i,si0,si1,si2);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+12U);
l7=si1;
si2=l6;
si3=16U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l8=si2;
f700(i,si0,si1,si2);
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
si2=l8;
si3=10U;
f616(i,si0,si1,si2,si3);
si0=l1;
si1=265U;
si0+=si1;
si1=l6;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L7;
}
si0=0U;
l7=si0;
goto L4;
L10:;
si0=l10;
if(si0){
goto L8;
}
L9:;
L15:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l1;
si1=l9;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
}
L8:;
si0=l1;
si1=265U;
si0+=si1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
L7:;
si0=l5;
if(si0){
goto L5;
}
si0=0U;
l3=si0;
si0=1U;
l5=si0;
si0=0U;
l1=si0;
goto L1;
L6:;
si0=0U;
l7=si0;
si0=l1;
si1=265U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+277U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+256U);
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
L4:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+264U,si1);
si0=l7;
l8=si0;
L2:;
si0=l7;
si1=255U;
si0&=si1;
if(si0){
goto L17;
}
si0=l4;
si1=l2;
si2=l3;
si3=l5;
si4=l3;
si5=l5;
si4=si4 < si5;
si2=si4?si2:si3;
l7=si2;
si0=f15143(i,si0,si1,si2);
si0=l5;
si1=l3;
si0=si0 < si1;
l5=si0;
si0=l7;
l3=si0;
goto L16;
L17:;
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
si3=l4;
si4=l5;
si5=l1;
si5=i32_load8_u(&i->m0,(U64)si5+277U);
si6=l1;
si6=i32_load8_u(&i->m0,(U64)si6+278U);
si7=l1;
si7=i32_load8_u(&i->m0,(U64)si7+274U);
f744(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l5=si0;
L16:;
si0=l1;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+256U);
si2=l7;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l7;
si1=l8;
si0+=si1;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f744(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L6;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L5;
L6:;
si0=l7;
if(si0){
goto L7;
}
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L8:;
{
si0=l8;
si1=8U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
f1334(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=l7;
si3=l4;
si4=l7;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
l11=si2;
si0=f15143(i,si0,si1,si2);
l12=si0;
si0=l11;
si1=l9;
si0+=si1;
l3=si0;
si0=l11;
si1=l10;
si0+=si1;
l10=si0;
si0=1U;
l13=si0;
si0=l7;
si1=l4;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l11;
si0-=si1;
l7=si0;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l12;
si1=l11;
si0+=si1;
l4=si0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l11;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l11;
si0+=si1;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=2U;
si0+=si1;
l9=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l4;
si1=2U;
si0+=si1;
l3=si0;
si0=l7;
si1=-2U;
si0+=si1;
l4=si0;
si0=l2;
si1=l11;
si2=-1U;
si1^=si2;
si0+=si1;
l2=si0;
if(si0){
goto L8;
}
goto L5;
}
L7:;
si0=0U;
l10=si0;
si0=0U;
l9=si0;
L9:;
{
si0=l8;
si1=l5;
si2=l1;
si3=l2;
f1334(i,si0,si1,si2,si3);
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=l7;
si3=l4;
si4=l7;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
l11=si2;
si0=f15143(i,si0,si1,si2);
l12=si0;
si0=l11;
si1=l9;
si0+=si1;
l3=si0;
si0=l11;
si1=l10;
si0+=si1;
l10=si0;
si0=1U;
l13=si0;
si0=l7;
si1=l4;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l11;
si0-=si1;
l7=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l12;
si1=l11;
si0+=si1;
l4=si0;
si1=l5;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l11;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l11;
si0+=si1;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=2U;
si0+=si1;
l9=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l4;
si1=2U;
si0+=si1;
l3=si0;
si0=l7;
si1=-2U;
si0+=si1;
l4=si0;
si0=l2;
si1=l11;
si2=-1U;
si1^=si2;
si0+=si1;
l2=si0;
if(si0){
goto L9;
}
}
L5:;
si0=0U;
l2=si0;
L4:;
si0=l3;
si1=l1;
si2=l2;
si3=l4;
si4=l2;
si5=l4;
si4=si4 < si5;
si2=si4?si2:si3;
l7=si2;
si0=f15143(i,si0,si1,si2);
si0=l2;
si1=l4;
si0=si0 > si1;
l13=si0;
si0=l7;
si1=l9;
si0+=si1;
l3=si0;
si0=l7;
si1=l10;
si0+=si1;
l10=si0;
L3:;
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l13;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=0U;
si2=1165212U;
f593(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=l2;
si2=1165196U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f745(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l1;
si1=265U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+256U);
l5=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L6;
}
si0=2U;
l4=si0;
si0=l3;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L2;
L6:;
si0=1165110U;
si1=37U;
si2=1165148U;
f604(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+277U);
l6=si1;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-2U;
si0+=si1;
l3=si0;
goto L3;
L4:;
si0=l4;
si1=255U;
si0&=si1;
if(si0){
goto L7;
}
si0=0U;
l4=si0;
goto L3;
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0+265U,si1);
si0=l1;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+277U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=1U;
l4=si0;
L3:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+272U);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
default:
goto L11;
}
L11:;
si0=1165070U;
si1=40U;
si2=1165164U;
f604(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=2U;
l7=si0;
si0=1U;
l6=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=l4;
si0+=si1;
si1=2573U;
i32_store16(&i->m0,(U64)si0,si1);
goto L8;
L9:;
si0=l3;
if(si0){
goto L12;
}
si0=1U;
l6=si0;
goto L1;
L12:;
si0=l2;
si1=l4;
si0+=si1;
si1=l1;
si2=273U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
l7=si0;
L8:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+256U,sj1);
si0=0U;
l6=si0;
si0=l1;
si1=264U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
si0+=si1;
l4=si0;
goto L1;
L2:;
si0=1U;
l6=si0;
si0=0U;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f746(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
L2:;
{
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l2;
l5=si0;
L5:;
{
si0=l3;
si1=-128U;
si0+=si1;
l3=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l5;
si1=8U;
si0+=si1;
l2=si0;
l5=si0;
sj0=l6;
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l6=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
}
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=l6;
sj2=-1ULL;
sj1+=sj2;
sj2=l6;
sj1&=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L4:;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
sj1=l4;
sj2=-1ULL;
sj1+=sj2;
sj2=l4;
sj1&=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
sj0=l4;
l6=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
sj0=l7;
l4=sj0;
si0=l3;
sj1=l6;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=1U;
si1<<=(si2&31);
si2=240U;
si1&=si2;
si0-=si1;
l5=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
f15024(i,si0);
L6:;
si0=l1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
f15024(i,si0);
L7:;
L0:;
}

U32 f747(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U64 l16=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
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
si1=i32_load(&i->m0,(U64)si1+4U);
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
l1=si0;
si1=268435454U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L8;
L10:;
si0=l3;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1170748U;
f614(i,si0,si1);
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
si1=4U;
si0<<=(si1&31);
l9=si0;
si1=l1;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l7=si0;
si1=l9;
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
si0=l7;
if(si0){
goto L12;
}
si0=8U;
l11=si0;
goto L11;
L12:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l7;
si1=7U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=8U;
si1=l7;
si0=f15030(i,si0,si1);
l11=si0;
goto L13;
L14:;
si0=l7;
si0=f15022(i,si0);
l11=si0;
L13:;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
L11:;
si0=l11;
si1=l9;
si0+=si1;
si1=255U;
si2=l10;
si0=f15145(i,si0,si1,si2);
l9=si0;
si0=l1;
si1=-1U;
si0+=si1;
l11=si0;
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l1;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=l4;
si0-=si1;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l6;
if(si0){
goto L15;
}
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L15:;
si0=l12;
si1=-16U;
si0+=si1;
l13=si0;
si0=0U;
l10=si0;
L16:;
{
si0=l12;
si1=l10;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
}
si0=l9;
si1=l11;
si2=l2;
si3=l13;
si4=l10;
si5=4U;
si4<<=(si5&31);
l14=si4;
si3-=si4;
sj2=f773(i,si2,si3);
si2=(U32)(sj2);
l15=si2;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
}
si0=8U;
l1=si0;
L19:;
{
si0=l7;
si1=l1;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=l7;
si2=l11;
si1&=si2;
l7=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
si0=!(sj0);
if(si0){
goto L19;
}
}
L18:;
si0=l9;
sj1=l16;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l7;
si1+=si2;
si2=l11;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L20;
}
si0=l9;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L20:;
si0=l9;
si1=l1;
si0+=si1;
si1=l15;
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l11;
si0&=si1;
si1=l9;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(&i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l1=si0;
si1=8U;
si0+=si1;
si1=l12;
si2=l14;
si1-=si2;
si2=-16U;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
L17:;
si0=l10;
si1=l5;
si0=si0 == si1;
l1=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
if(si0){
goto L3;
}
goto L16;
}
L7:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
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
goto L21;
}
si0=l7;
si1=1U;
si0&=si1;
l10=si0;
si0=l7;
si1=1U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l7;
si1=1073741822U;
si0&=si1;
l9=si0;
si0=0U;
l1=si0;
L23:;
{
si0=l11;
si1=l1;
si0+=si1;
l7=si0;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l16;
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
l16=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l16;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l10;
si0=!(si0);
if(si0){
goto L21;
}
si0=l11;
si1=l1;
si0+=si1;
l1=si0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
l16=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l16;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(&i->m0,(U64)si0,sj1);
L21:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l11;
si1=l6;
si0+=si1;
si1=l11;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L25;
L26:;
si0=l11;
si1=8U;
si0+=si1;
si1=l11;
si2=l6;
si0=f15144(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L24;
}
L25:;
si0=l11;
si1=-16U;
si0+=si1;
l6=si0;
si0=0U;
l1=si0;
L27:;
{
si0=l11;
si1=l1;
l14=si1;
si0+=si1;
l13=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l6;
si1=l14;
si2=4U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
l15=si0;
si0=l11;
si1=l1;
si0-=si1;
si1=-16U;
si0+=si1;
l7=si0;
L30:;
{
si0=l5;
si1=l2;
si2=l15;
sj1=f773(i,si1,si2);
si1=(U32)(sj1);
l12=si1;
si0&=si1;
l10=si0;
l9=si0;
si0=l11;
si1=l10;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L31;
}
si0=8U;
l1=si0;
si0=l10;
l9=si0;
L32:;
{
si0=l9;
si1=l1;
si0+=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l11;
si1=l9;
si2=l5;
si1&=si2;
l9=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
l16=sj0;
si0=!(sj0);
if(si0){
goto L32;
}
}
L31:;
si0=l11;
sj1=l16;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l9;
si1+=si2;
si2=l5;
si1&=si2;
l1=si1;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L33;
}
si0=l11;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l1=si0;
L33:;
si0=l1;
si1=l10;
si0-=si1;
si1=l14;
si2=l10;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l11;
si1=l1;
si0+=si1;
l9=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=l12;
si2=25U;
si1>>=(si2&31);
l12=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l12;
i32_store8(&i->m0,(U64)si0,si1);
si0=l11;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l10;
si1=255U;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+4U);
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+5U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+5U);
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+5U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+6U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+6U);
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+6U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+7U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+7U);
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+8U);
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+9U);
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+10U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+10U);
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+11U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+11U);
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+12U);
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+13U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+13U);
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+13U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+14U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+14U);
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+14U,si1);
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l9=si0;
si0=l7;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+15U);
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l1;
si1=l9;
i32_store8(&i->m0,(U64)si0+15U,si1);
goto L30;
L34:;
}
si0=l13;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(&i->m0,(U64)si0,si1);
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
goto L28;
L29:;
si0=l13;
si1=l12;
si2=25U;
si1>>=(si2&31);
l1=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l14;
si1=-8U;
si0+=si1;
si1=l5;
si0&=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
L28:;
si0=l14;
si1=1U;
si0+=si1;
l1=si0;
si0=l14;
si1=l5;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L24:;
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
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1170656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
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
si1=1170656U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1170664U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=1170748U;
f614(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si1=l6;
si2=4U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
si1=-9U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l12;
si1=l1;
si0-=si1;
f15024(i,si0);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=-2147483647U;
L0:;
return si0;
}

void f748(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f749(rustpythonInstance*i,U32 l0,U32 l1) {
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
f748(i,si0,si1,si2,si3);
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

void f750(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f748(i,si0,si1,si2,si3);
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

void f751(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f748(i,si0,si1,si2,si3);
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

void f752(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=1165567U;
si1=40U;
si2=1165608U;
f604(i,si0,si1,si2);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165360U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165364U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165365U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165369U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165370U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165374U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165375U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165379U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165380U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165384U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165385U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165389U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165390U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165394U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165395U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165399U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165400U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165404U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165405U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165409U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165410U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165414U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165415U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165419U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165420U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165424U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165425U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165429U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165430U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165434U);
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
f751(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165435U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165439U);
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
si1=i32_load(&i->m0,(U64)si1+1165539U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1165542U);
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165546U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1165549U);
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165553U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1165556U);
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165560U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1165563U);
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si0=1165567U;
si1=40U;
si2=1165780U;
f604(i,si0,si1,si2);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165624U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165632U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165633U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165641U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165642U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165650U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165652U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165660U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165662U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165670U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165672U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165680U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165682U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165690U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165691U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(&i->m0,(U64)si1+1165699U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165700U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165708U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165710U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165718U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165720U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165728U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165730U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165738U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165740U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165748U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165750U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165758U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165760U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165768U);
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
f751(i,si0,si1,si2);
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
sj1=i64_load(&i->m0,(U64)si1+1165770U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(&i->m0,(U64)si1+1165778U);
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
si1=i32_load(&i->m0,(U64)si1+1165539U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1165542U);
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165546U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1165549U);
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165553U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1165556U);
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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
si1=i32_load(&i->m0,(U64)si1+1165560U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1165563U);
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
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

void f753(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
{
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f754(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L7;
}
si0=l0;
si1=1165824U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l5;
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
case 2:
goto L11;
case 3:
goto L10;
default:
goto L12;
}
L13:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l6=si0;
goto L9;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14744(i,si0);
l6=si0;
goto L9;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
goto L9;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
L9:;
si0=l6;
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=l5;
si0+=si1;
l2=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
goto L4;
L6:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
f15024(i,si0);
L14:;
si0=l5;
f15024(i,si0);
goto L4;
L5:;
si0=l5;
si1=l3;
si2=1165912U;
f593(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f754(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l6;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si0=l4;
si1=248U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=277U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=1166340U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=277U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l11;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=1166324U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+108U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l4;
sj1=4294967328ULL;
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l4;
sj1=8589934593ULL;
i64_store(&i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=3U;
i32_store8(&i->m0,(U64)si0+76U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
sj1=32ULL;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=3U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l4;
si1=l6;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=112U;
si0+=si1;
si1=1165980U;
si2=l4;
si0=f621(i,si0,si1,si2);
l6=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+112U);
l11=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L12;
}
si0=l11;
si1=4U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=2U;
l11=si0;
si0=1165968U;
l10=si0;
goto L10;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l6=si0;
si0=l11;
si1=4U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l11;
si1=3U;
si0=si0 != si1;
if(si0){
goto L9;
}
L13:;
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
goto L14;
}
si0=l12;
f15024(i,si0);
L14:;
si0=l6;
f15024(i,si0);
goto L9;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+112U);
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
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+116U);
l10=si0;
L10:;
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
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
L8:;
si0=l10;
si0=!(si0);
if(si0){
goto L16;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L15;
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
goto L17;
}
si0=l11;
si1=16U;
si0+=si1;
si1=l6;
si2=l10;
f751(i,si0,si1,si2);
si0=l11;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
L17:;
si0=l11;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l6;
si0+=si1;
si1=l2;
si2=l10;
si0=f15143(i,si0,si1,si2);
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
L16:;
si0=1U;
l6=si0;
si0=l9;
l2=si0;
si0=l8;
if(si0){
goto L3;
}
goto L2;
L15:;
}
si0=1166164U;
si1=16U;
si2=l4;
si3=48U;
si2+=si3;
si3=1166180U;
si4=1166212U;
f641(i,si0,si1,si2,si3,si4);
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

void f755(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
f756(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
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
f15024(i,si0);
L1:;
L0:;
}

void f756(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
i32_store8(&i->m0,(U64)si0+27U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+28U);
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+26U);
l5=si1;
i32_store8(&i->m0,(U64)si0+26U,si1);
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+25U);
l6=si1;
i32_store8(&i->m0,(U64)si0+25U,si1);
si0=l4;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+24U);
l7=si1;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l5;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
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
si2=1166368U;
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
si1=278U;
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
si1=1166340U;
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
i32_store8(&i->m0,(U64)si0+27U,si1);
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
si1=1166320U;
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
si1=152U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=176U;
si0+=si1;
si1=12U;
si0+=si1;
si1=252U;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
l1=si0;
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=1166324U;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=279U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l4;
si1=l4;
si2=176U;
si1+=si2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l4;
si1=l4;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+192U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l4;
si1=192U;
si0+=si1;
si1=1165980U;
si2=l4;
si3=152U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+192U);
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
si0=1165968U;
l8=si0;
goto L9;
L11:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+192U);
l1=si0;
si1=8U;
si0>>=(si1&31);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
l8=si0;
goto L9;
L10:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+196U);
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
f15024(i,si0);
L14:;
si0=l5;
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+8U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+12U);
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
si2=4U;
si1+=si2;
si2=l1;
sj3=l10;
sj4=32ULL;
sj3>>=(sj4&63);
si3=(U32)(sj3);
f760(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
l1=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+25U);
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
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si1=88U;
si0+=si1;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+36U);
si3=l1;
f760(i,si0,si1,si2,si3);
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
si0=i32_load8_u(&i->m0,(U64)si0+27U);
si0=!(si0);
if(si0){
goto L22;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
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
si1=1166348U;
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
si1=132U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=1166352U;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=279U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=l4;
si2=88U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=4U;
l1=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=152U;
si0+=si1;
si1=1165980U;
si2=l4;
si3=120U;
si2+=si3;
si0=f621(i,si0,si1,si2);
l5=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+152U);
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
si0=1165968U;
l7=si0;
si0=2U;
l1=si0;
goto L23;
L25:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+152U);
l1=si0;
si1=8U;
si0>>=(si1&31);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+156U);
l7=si0;
goto L23;
L24:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+156U);
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
f15024(i,si0);
L28:;
si0=l5;
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
si1=16U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
si1=277U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1166324U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=280U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l4;
si1=l3;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=l4;
si2=120U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l4;
si1=152U;
si0+=si1;
si1=1165980U;
si2=l4;
si3=88U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+152U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=l0;
si1=1165968U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L33:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+152U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L32:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+156U);
l0=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+152U);
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
f15024(i,si0);
L35:;
si0=l0;
f15024(i,si0);
goto L1;
L31:;
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l4;
si1=100U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1166340U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=280U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l3;
si2=44U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
si1=l4;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l4;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=1165928U;
si2=l4;
si3=88U;
si2+=si3;
si0=f621(i,si0,si1,si2);
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
si0=1165968U;
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
f15024(i,si0);
L39:;
si0=l3;
f15024(i,si0);
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
si2=88U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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
si2=88U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si1=100U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l4;
si1=1166340U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=277U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l4;
si2=152U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+120U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l4;
si1=120U;
si0+=si1;
si1=1165980U;
si2=l4;
si3=88U;
si2+=si3;
si0=f621(i,si0,si1,si2);
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
si0=2U;
l2=si0;
si0=1165968U;
l3=si0;
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
f15024(i,si0);
L45:;
si0=l2;
f15024(i,si0);
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

void f757(rustpythonInstance*i,U32 l0) {
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

void f758(rustpythonInstance*i,U32 l0) {
L0:;
}

void f759(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
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
f15024(i,si0);
L1:;
L0:;
}

void f760(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
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
si1=24U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=1166312U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=277U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=1165980U;
si2=l4;
si3=12U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si1=1165968U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+40U);
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+44U);
l0=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
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
f15024(i,si0);
L7:;
si0=l0;
f15024(i,si0);
goto L2;
L3:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
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
si1=36U;
si0+=si1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=1166320U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=1099511628032ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=184549376U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=277U;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1166324U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l4;
si1=279U;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=1165980U;
si2=l4;
si3=40U;
si2+=si3;
si0=f621(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=1165968U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L8;
L10:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+80U);
i64_store(&i->m0,(U64)si0,sj1);
goto L8;
L9:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+84U);
l0=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+80U);
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
f15024(i,si0);
L12:;
si0=l0;
f15024(i,si0);
L8:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
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
f15024(i,si0);
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
f15024(i,si0);
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

U32 f761(rustpythonInstance*i,U32 l0) {
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

void f762(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
si0=0U;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
l5=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l5;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l1;
si2=24U;
si1+=si2;
l8=si1;
si0+=si1;
si1=-1U;
si0+=si1;
l9=si0;
si0=l7;
si1=5U;
si0=si0 < si1;
l10=si0;
L4:;
{
si0=l3;
si1=l4;
si0+=si1;
l11=si0;
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=l4;
si0-=si1;
l13=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l11;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l14=si0;
si1=l11;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l14;
si1=l11;
si0-=si1;
l15=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l14=si0;
L11:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l15;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l15;
si1=l13;
si2=-8U;
si1+=si2;
l16=si1;
si0=si0 > si1;
if(si0){
goto L7;
}
goto L8;
L10:;
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=0U;
l14=si0;
L12:;
{
si0=l11;
si1=l14;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l13;
si1=l14;
si2=1U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L6;
}
L9:;
si0=l13;
si1=-8U;
si0+=si1;
l16=si0;
si0=0U;
l15=si0;
L8:;
si0=l12;
si1=16843009U;
si0*=si1;
l14=si0;
L13:;
{
si0=l11;
si1=l15;
si0+=si1;
l17=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
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
goto L7;
}
si0=l17;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l14;
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
goto L7;
}
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si1=l16;
si0=si0 <= si1;
if(si0){
goto L13;
}
}
L7:;
si0=l15;
si1=l13;
si0=si0 == si1;
if(si0){
goto L6;
}
L14:;
{
si0=l11;
si1=l15;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l12;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l15;
l14=si0;
goto L5;
L15:;
si0=l13;
si1=l15;
si2=1U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L6:;
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
goto L3;
L5:;
si0=l1;
si1=l14;
si2=l4;
si1+=si2;
si2=1U;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l7;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=l4;
si2=l7;
si1-=si2;
l14=si1;
si0+=si1;
si1=l8;
si2=l7;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L16;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l14;
si1=l15;
si0-=si1;
l14=si0;
si0=l3;
si1=l15;
si0+=si1;
l2=si0;
goto L1;
L17:;
si0=l7;
si1=4U;
si2=1166468U;
f597(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=l4;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L4;
}
}
L3:;
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+28U);
l15=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l11=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
if(si0){
goto L18;
}
si0=l11;
si1=l15;
si0=si0 == si1;
if(si0){
goto L1;
}
L18:;
si0=l11;
si1=l15;
si0-=si1;
l14=si0;
si0=l3;
si1=l15;
si0+=si1;
l2=si0;
L1:;
si0=l0;
si1=l14;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

U32 f763(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l4;
si1=4U;
si0<<=(si1&31);
l4=si0;
L5:;
{
si0=l7;
si1=l4;
si0+=si1;
l9=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=l9;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l11=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l10;
si1=l6;
si2=l11;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l4;
si1=-16U;
si0+=si1;
l4=si0;
if(si0){
goto L5;
}
goto L3;
}
L4:;
si0=l9;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
if(si0){
goto L7;
}
si0=1U;
l3=si0;
goto L3;
L7:;
si0=l1;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L11;
}
L13:;
si0=l4;
if(si0){
goto L11;
}
si0=1U;
l4=si0;
si0=0U;
l9=si0;
si0=1166388U;
l10=si0;
goto L9;
L12:;
si0=l4;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si2=44U;
si1+=si2;
f64(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
goto L8;
L10:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+44U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
if(si0){
goto L14;
}
si0=1U;
l4=si0;
si0=0U;
l9=si0;
goto L9;
L14:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
si0=l4;
si1=l10;
si2=l9;
si0=f15143(i,si0,si1,si2);
si0=l9;
l10=si0;
L8:;
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=l10;
si0=f768(i,si0,si1,si2);
l3=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
f15024(i,si0);
L3:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L2:;
f53(i);
UNREACHABLE;
L1:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

U32 f764(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=368U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+164U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+160U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+156U,si1);
si0=l3;
sj1=201863462913ULL;
i64_store(&i->m0,(U64)si0+148U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+144U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+140U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+132U,si1);
si0=l3;
si1=47U;
i32_store(&i->m0,(U64)si0+128U,si1);
si0=l3;
si1=88U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
f762(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+92U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+88U);
l1=si0;
si0=l3;
si1=80U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
f762(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+84U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+80U);
l5=si0;
si0=l3;
si1=72U;
si0+=si1;
si1=l3;
si2=128U;
si1+=si2;
f762(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l3;
si1=180U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=1166720U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=277U;
i32_store(&i->m0,(U64)si0+308U,si1);
si0=l3;
si1=l3;
si2=304U;
si1+=si2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=l3;
si2=108U;
si1+=si2;
i32_store(&i->m0,(U64)si0+304U,si1);
si0=l3;
si1=6U;
i32_store(&i->m0,(U64)si0+324U,si1);
si0=l3;
si1=17679618U;
i32_store(&i->m0,(U64)si0+320U,si1);
si0=l3;
si1=168U;
si0+=si1;
si0=f14780(i,si0);
if(si0){
goto L11;
}
si0=l3;
si1=18663156U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l3;
si1=l3;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=352U;
si0+=si1;
si1=l3;
si2=216U;
si1+=si2;
si2=l3;
si3=168U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+352U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L9;
}
L11:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l5=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
si0=0U;
l1=si0;
goto L5;
L10:;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+204U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+200U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+196U,si1);
si0=l3;
sj1=188978561025ULL;
i64_store(&i->m0,(U64)si0+188U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+184U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+180U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+176U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+172U,si1);
si0=l3;
si1=44U;
i32_store(&i->m0,(U64)si0+168U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=168U;
si1+=si2;
f762(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
L12:;
{
si0=l3;
si1=56U;
si0+=si1;
si1=l2;
si2=l1;
f766(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
l2=si1;
i32_store(&i->m0,(U64)si0+212U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+208U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=1U;
i32_store16(&i->m0,(U64)si0+252U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+248U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+244U,si1);
si0=l3;
sj1=261993005057ULL;
i64_store(&i->m0,(U64)si0+236U,sj1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+232U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+228U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+224U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+220U,si1);
si0=l3;
si1=61U;
i32_store(&i->m0,(U64)si0+216U,si1);
si0=l3;
si1=48U;
si0+=si1;
si1=l3;
si2=216U;
si1+=si2;
f762(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l3;
si1=40U;
si0+=si1;
si1=l3;
si2=216U;
si1+=si2;
f762(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+40U);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+44U);
f766(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+36U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+32U);
l8=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=216U;
si1+=si2;
f762(i,si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l1=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
if(si0){
goto L18;
}
si0=l7;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0+260U,si1);
si0=l3;
si1=l8;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l8;
si1=l7;
si0=f880(i,si0,si1);
l1=si0;
si1=6U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l3;
si1=1166752U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+276U,sj1);
si0=l3;
si1=277U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l3;
si1=l3;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l3;
si1=l3;
si2=256U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l3;
si1=6U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l3;
si1=17679618U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l3;
si1=264U;
si0+=si1;
si0=f14780(i,si0);
if(si0){
goto L17;
}
si0=l3;
si1=18663156U;
i32_store(&i->m0,(U64)si0+316U,si1);
si0=l3;
si1=l3;
si2=316U;
si1+=si2;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l3;
si1=304U;
si0+=si1;
si1=l3;
si2=328U;
si1+=si2;
si2=l3;
si3=264U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+304U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+304U);
i64_store(&i->m0,(U64)si0+320U,sj1);
si0=l3;
si1=364U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=295U;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=l3;
si1=l3;
si2=320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l3;
si1=l3;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l3;
si1=328U;
si0+=si1;
si1=17679580U;
si2=2U;
si3=l3;
si4=352U;
si3+=si4;
si4=2U;
f14677(i,si0,si1,si2,si3,si4);
si0=l3;
si1=328U;
si0+=si1;
si1=17679596U;
f614(i,si0,si1);
UNREACHABLE;
L20:;
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=216U;
si1+=si2;
f762(i,si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l1=si0;
L19:;
si0=l1;
si0=!(si0);
if(si0){
goto L16;
}
L18:;
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+268U,si1);
si0=l3;
si1=1166752U;
i32_store(&i->m0,(U64)si0+264U,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+276U,sj1);
si0=l3;
si1=277U;
i32_store(&i->m0,(U64)si0+292U,si1);
si0=l3;
si1=l3;
si2=288U;
si1+=si2;
i32_store(&i->m0,(U64)si0+272U,si1);
si0=l3;
si1=l3;
si2=208U;
si1+=si2;
i32_store(&i->m0,(U64)si0+288U,si1);
si0=l3;
si1=6U;
i32_store(&i->m0,(U64)si0+300U,si1);
si0=l3;
si1=17679618U;
i32_store(&i->m0,(U64)si0+296U,si1);
si0=l3;
si1=264U;
si0+=si1;
si0=f14780(i,si0);
if(si0){
goto L17;
}
si0=l3;
si1=18663156U;
i32_store(&i->m0,(U64)si0+256U,si1);
si0=l3;
si1=l3;
si2=256U;
si1+=si2;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l3;
si1=304U;
si0+=si1;
si1=l3;
si2=328U;
si1+=si2;
si2=l3;
si3=264U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+304U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L8;
}
L17:;
si0=l3;
si1=l3;
si2=168U;
si1+=si2;
f762(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L12;
}
goto L6;
L16:;
si0=0U;
l8=si0;
si0=5U;
l1=si0;
si0=l2;
si1=l6;
si0=f880(i,si0,si1);
l7=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L14;
}
goto L13;
L15:;
si0=5U;
l1=si0;
L14:;
si0=l6;
if(si0){
goto L22;
}
si0=1U;
l8=si0;
goto L21;
L22:;
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l6;
si0=f15022(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L7;
}
L21:;
si0=l8;
si1=l2;
si2=l6;
si0=f15143(i,si0,si1,si2);
si0=l6;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l9=sj0;
si0=l1;
l7=si0;
L13:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+120U);
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l3;
si1=116U;
si0+=si1;
si1=l2;
f749(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
L23:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
sj1=l9;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+124U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+124U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=168U;
si1+=si2;
f762(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L12;
}
goto L6;
}
L9:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+352U);
i64_store(&i->m0,(U64)si0+264U,sj1);
si0=l3;
si1=340U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=295U;
i32_store(&i->m0,(U64)si0+332U,si1);
si0=l3;
si1=l3;
si2=264U;
si1+=si2;
i32_store(&i->m0,(U64)si0+336U,si1);
si0=l3;
si1=l3;
si2=320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+328U,si1);
si0=l3;
si1=216U;
si0+=si1;
si1=17679580U;
si2=2U;
si3=l3;
si4=328U;
si3+=si4;
si4=2U;
f14677(i,si0,si1,si2,si3,si4);
si0=l3;
si1=216U;
si0+=si1;
si1=17679596U;
f614(i,si0,si1);
UNREACHABLE;
L8:;
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+304U);
i64_store(&i->m0,(U64)si0+320U,sj1);
si0=l3;
si1=364U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=295U;
i32_store(&i->m0,(U64)si0+356U,si1);
si0=l3;
si1=l3;
si2=320U;
si1+=si2;
i32_store(&i->m0,(U64)si0+360U,si1);
si0=l3;
si1=l3;
si2=296U;
si1+=si2;
i32_store(&i->m0,(U64)si0+352U,si1);
si0=l3;
si1=328U;
si0+=si1;
si1=17679580U;
si2=2U;
si3=l3;
si4=352U;
si3+=si4;
si4=2U;
f14677(i,si0,si1,si2,si3,si4);
si0=l3;
si1=328U;
si0+=si1;
si1=17679596U;
f614(i,si0,si1);
UNREACHABLE;
L7:;
si0=1U;
si1=l6;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=l5;
if(si0){
goto L25;
}
si0=0U;
l1=si0;
goto L24;
L25:;
si0=l4;
if(si0){
goto L27;
}
si0=1U;
l1=si0;
goto L26;
L27:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l4;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
L26:;
si0=l1;
si1=l5;
si2=l4;
si0=f15143(i,si0,si1,si2);
si0=l4;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l9=sj0;
L24:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+124U);
l2=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+120U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+116U);
l5=si0;
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
l4=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L28;
}
si0=l4;
f15024(i,si0);
L28:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=36U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l5;
l8=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=104U;
si0+=si1;
l8=si0;
si0=l5;
l2=si0;
L29:;
{
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=6U;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l2;
si1=16U;
si0+=si1;
l8=si0;
goto L2;
L30:;
si0=l8;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+96U,sj1);
si0=l0;
si1=l3;
si2=96U;
si1+=si2;
si2=l1;
si0=f775(i,si0,si1,si2);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L29;
}
goto L1;
}
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l4;
si1=l8;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l8;
si0-=si1;
si1=4U;
si0>>=(si1&31);
l1=si0;
si0=l8;
si1=8U;
si0+=si1;
l2=si0;
L31:;
{
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L32;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
f15024(i,si0);
L32:;
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L31;
}
}
L1:;
si0=l6;
si0=!(si0);
if(si0){
goto L33;
}
si0=l5;
f15024(i,si0);
L33:;
si0=l3;
si1=368U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f765(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+44U);
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
if(si0){
goto L4;
}
si0=l2;
si1=12U;
si0+=si1;
si1=0U;
f749(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=4U;
si1<<=(si2&31);
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
goto L3;
L4:;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663248U);
si0=!(sj0);
if(si0){
goto L6;
}
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663264U);
l4=sj0;
si0=0U;
sj0=i64_load(&i->m0,(U64)si0+18663256U);
l5=sj0;
goto L5;
L6:;
si0=l2;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=72U;
si0+=si1;
si1=16U;
si0=wasi_snapshot_preview1__random_get(i,si0,si1);
l6=si0;
if(si0){
goto L1;
}
si0=0U;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+80U);
l4=sj1;
i64_store(&i->m0,(U64)si0+18663264U,sj1);
si0=0U;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+18663248U,sj1);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+72U);
l5=sj0;
L5:;
si0=0U;
l7=si0;
si0=0U;
sj1=l5;
sj2=1ULL;
sj1+=sj2;
i64_store(&i->m0,(U64)si0+18663256U,sj1);
si0=l1;
sj1=l4;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
sj1=l5;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=1166488U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l8=si0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
sj0=i64_load(&i->m0,(U64)si0);
l5=sj0;
si0=l8;
if(si0){
goto L8;
}
si0=1U;
l9=si0;
goto L7;
L8:;
si0=0U;
l7=si0;
si0=l8;
si1=1U;
si0+=si1;
l9=si0;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l8;
si1=l9;
si2=4U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=9U;
si0+=si1;
l8=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l8;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=8U;
l7=si0;
goto L9;
L10:;
L9:;
si0=l6;
si1=l10;
si0-=si1;
l10=si0;
L7:;
si0=l2;
si1=64U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=60U;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l6;
si2=l9;
si1+=si2;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l6;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=l5;
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=12U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f805(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=l2;
si1=l2;
si2=95U;
si1+=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l8;
si1=l6;
si2=l2;
si3=72U;
si2+=si3;
f776(i,si0,si1,si2);
L3:;
si0=l0;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+32U);
l5=sj0;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=l5;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1166496U;
si1=34U;
si2=1166640U;
f801(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l6;
i32_store16(&i->m0,(U64)si0+92U,si1);
si0=17683216U;
si1=18U;
si2=l2;
si3=92U;
si2+=si3;
si3=17683100U;
si4=17683268U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f766(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=1123498U;
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
si1=1123498U;
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
si1=1123498U;
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
si1=1123498U;
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

void f767(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si1=l5;
si2=-1U;
si1+=si2;
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
si1=l5;
si0+=si1;
si1=l8;
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
si2=l7;
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
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
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
si1=l7;
si0+=si1;
l7=si0;
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
si1=l7;
si0+=si1;
l19=si0;
si0=l18;
l9=si0;
L15:;
{
si0=l7;
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
si1=l7;
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
si0=l7;
si1=l10;
si0+=si1;
l7=si0;
si0=l13;
l17=si0;
goto L12;
L13:;
si0=l14;
si1=l7;
si0+=si1;
si1=l9;
si0+=si1;
l7=si0;
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
si0=l5;
si1=l12;
si0=si0 > si1;
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
si0=l13;
l19=si0;
si0=l14;
l17=si0;
si0=l7;
l9=si0;
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
l7=si0;
goto L21;
L24:;
si0=l19;
si1=1U;
si0+=si1;
l19=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l17;
si1=-1U;
si0+=si1;
l17=si0;
if(si0){
goto L22;
}
}
si0=l2;
si1=l7;
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
si0=l7;
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
si0=l7;
si1=l10;
si0+=si1;
l7=si0;
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
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
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
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
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
si1=l7;
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
si0=l7;
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
si1=l10;
si0+=si1;
l7=si0;
si1=l8;
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
si1=l7;
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
si2=1166848U;
f594(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l19;
si1=l3;
si2=1166864U;
f594(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l7;
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
si2=l7;
si1+=si2;
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l3;
si2=1166880U;
f594(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f768(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
if(si0){
goto L3;
}
si0=1U;
l0=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l5;
si4=l4;
f690(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L6;
}
si0=0U;
l1=si0;
si0=l3;
si1=30U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L1;
L11:;
si0=0U;
l0=si0;
si0=l4;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=l1;
si2=l2;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
l0=si0;
goto L2;
L10:;
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
L9:;
si0=l0;
si1=l2;
si0-=si1;
l4=si0;
L8:;
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si1=l2;
si0+=si1;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l4;
si1=31U;
si0&=si1;
l9=si0;
si0=l4;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l4=si0;
goto L14;
L16:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l4;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l4=si0;
goto L14;
L17:;
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
l4=si0;
goto L14;
L15:;
si0=l4;
si1=255U;
si0&=si1;
l4=si0;
L14:;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L12;
}
si0=l4;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=1U;
l1=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=2U;
l1=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=3U;
si1=4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L18:;
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L21;
}
si0=l0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
goto L20;
L21:;
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L20:;
si0=l0;
si1=l2;
si0-=si1;
l0=si0;
L19:;
si0=l0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l5;
si1=l2;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
goto L12;
L13:;
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
L12:;
si0=1U;
l1=si0;
L7:;
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L6:;
si0=l3;
si1=24U;
si0+=si1;
l1=si0;
si0=l3;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+72U);
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l5=si0;
si0=l3;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l5;
si3=l0;
si4=l4;
si5=l2;
si6=0U;
f767(i,si0,si1,si2,si3,si4,si5,si6);
goto L5;
L22:;
si0=l3;
si1=4U;
si0+=si1;
si1=l1;
si2=l5;
si3=l0;
si4=l4;
si5=l2;
si6=1U;
f767(i,si0,si1,si2,si3,si4,si5,si6);
L5:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=0U;
si0=si0 != si1;
l0=si0;
goto L2;
L4:;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=7U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
L24:;
{
si0=l4;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
l0=si0;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
goto L24;
}
L23:;
si0=l1;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l0=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l0;
si1=l1;
si0-=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
si1=l0;
si0-=si1;
l7=si0;
si0=1U;
l0=si0;
si0=l1;
l4=si0;
L28:;
{
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
if(si0){
goto L28;
}
}
si0=l6;
si1=l2;
si2=-8U;
si1+=si2;
l8=si1;
si0=si0 > si1;
if(si0){
goto L25;
}
goto L26;
L27:;
si0=l2;
si1=-8U;
si0+=si1;
l8=si0;
si0=0U;
l6=si0;
L26:;
si0=l5;
si1=16843009U;
si0*=si1;
l0=si0;
L29:;
{
si0=l1;
si1=l6;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0^=si1;
l4=si0;
si1=-1U;
si0^=si1;
si1=l4;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L25;
}
si0=l7;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si0^=si1;
l4=si0;
si1=-1U;
si0^=si1;
si1=l4;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L25;
}
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L29;
}
}
L25:;
si0=0U;
l0=si0;
si0=l6;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=l6;
si0+=si1;
l1=si0;
si0=l6;
si1=-1U;
si0^=si1;
si1=l2;
si0+=si1;
l4=si0;
L30:;
{
si0=l4;
l2=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
l0=si0;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l2;
if(si0){
goto L30;
}
}
L2:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L1:;
si0=l5;
si1=l0;
si2=l2;
si3=l0;
si4=1166896U;
f678(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

void f769(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f770(i,si0);
UNREACHABLE;
L0:;
}

void f770(rustpythonInstance*i,U32 l0) {
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
si1=1167260U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f14817(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f771(rustpythonInstance*i,U32 l0) {
L0:;
}

void f772(rustpythonInstance*i,U32 l0) {
L0:;
}

U64 f773(rustpythonInstance*i,U32 l0,U32 l1) {
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
sj1=i64_load(&i->m0,(U64)si1+8U);
l3=sj1;
i64_store(&i->m0,(U64)si0+48U,sj1);
si0=l2;
si1=l0;
sj1=i64_load(&i->m0,(U64)si1);
l4=sj1;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=l3;
sj2=8387220255154660723ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=l3;
sj2=7237128888997146477ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=l4;
sj2=7816392313619706465ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
sj1=l4;
sj2=8317987319222330741ULL;
sj1^=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
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
f774(i,si0,si1,si2);
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
f774(i,si0,si1,si2);
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
f774(i,si0,si1,si2);
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

void f774(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 f775(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si1=l1;
sj0=f773(i,si0,si1);
l4=sj0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si2=l3;
si0=f747(i,si0,si1,si2);
L1:;
sj0=l4;
sj1=25ULL;
sj0>>=(sj1&63);
l5=sj0;
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l6=sj0;
sj0=l4;
si0=(U32)(sj0);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
L6:;
{
si0=l8;
si1=l3;
si2=l7;
si1&=si2;
l13=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l6;
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
L9:;
{
si0=l8;
sj1=l4;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l13;
si1+=si2;
si2=l7;
si1&=si2;
l15=si1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
l3=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l16=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l10;
si1=l3;
si2=-8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l9;
si1=l16;
si2=l10;
si0=f15142(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L8;
}
L10:;
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L7;
}
goto L9;
}
L8:;
si0=0U;
si1=l15;
si0-=si1;
l3=si0;
goto L3;
L7:;
sj0=l14;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l4=sj0;
si0=1U;
l16=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
l16=si0;
sj0=l4;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l13;
si0+=si1;
si1=l7;
si0&=si1;
l17=si0;
L11:;
sj0=l4;
sj1=l14;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l13;
si1=l11;
si2=8U;
si1+=si2;
l11=si1;
si0+=si1;
l3=si0;
si0=l16;
l12=si0;
goto L6;
}
L5:;
si0=l8;
si1=-16U;
si0+=si1;
l16=si0;
si0=0U;
l10=si0;
si0=0U;
l15=si0;
L12:;
{
si0=l8;
si1=l3;
si2=l7;
si1&=si2;
l3=si1;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
sj1=l6;
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
goto L13;
}
L15:;
{
si0=l16;
sj1=l4;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l3;
si1+=si2;
si2=l7;
si1&=si2;
l13=si1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
sj0=l4;
sj1=-1ULL;
sj0+=sj1;
sj1=l4;
sj0&=sj1;
l4=sj0;
si0=!(sj0);
if(si0){
goto L13;
}
goto L15;
}
L14:;
si0=0U;
si1=l13;
si0-=si1;
l3=si0;
goto L3;
L13:;
sj0=l14;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l4=sj0;
si0=1U;
l13=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
sj0=l4;
sj1=0ULL;
si0=sj0 != sj1;
l13=si0;
sj0=l4;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l3;
si0+=si1;
si1=l7;
si0&=si1;
l17=si0;
L16:;
sj0=l4;
sj1=l14;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l3;
si1=l10;
si2=8U;
si1+=si2;
l10=si1;
si0+=si1;
l3=si0;
si0=l13;
l15=si0;
goto L12;
}
L4:;
si0=l8;
si1=l17;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
}
si0=l8;
si1=l8;
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
l3=si0;
L17:;
si0=l8;
si1=l17;
si0+=si1;
sj1=l5;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l16=si1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l17;
si1=-8U;
si0+=si1;
si1=l7;
si0&=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
si1=l16;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=l3;
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
si0=l8;
si1=l17;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l3=si0;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=6U;
l3=si0;
goto L2;
L3:;
si0=l8;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l7;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
f15024(i,si0);
si0=l3;
goto L0;
L2:;
si0=l3;
L0:;
return si0;
}

void f776(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=4U;
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
si1=44U;
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
l13=si1;
si0+=si1;
l14=si0;
si0=l1;
si1=l12;
si0-=si1;
l15=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l14;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L14;
}
si0=l16;
si1=0U;
si2=l4;
si0=si2?si0:si1;
si1=l14;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 < si1;
if(si0){
goto L13;
}
L14:;
si0=2U;
l17=si0;
si0=l15;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l8;
si1=l13;
si0+=si1;
l13=si0;
si0=2U;
l17=si0;
L15:;
{
si0=l13;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L16;
}
si0=l19;
si1=0U;
si2=l18;
si0=si2?si0:si1;
si1=l16;
si0=si0 < si1;
if(si0){
goto L11;
}
L16:;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l19;
l16=si0;
si0=l18;
l4=si0;
si0=l15;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 == si1;
if(si0){
goto L12;
}
goto L15;
}
L13:;
si0=2U;
l17=si0;
si0=l15;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l8;
si1=l13;
si0+=si1;
l13=si0;
si0=2U;
l17=si0;
L18:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L17;
}
si0=l13;
si0=i32_load(&i->m0,(U64)si0);
l18=si0;
si1=0U;
si2=l13;
si3=-8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l4=si2;
si0=si2?si0:si1;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l18;
l16=si0;
si0=l15;
si1=l17;
si2=1U;
si1+=si2;
l17=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l15;
l17=si0;
L17:;
si0=l17;
si1=l12;
si0+=si1;
l9=si0;
si1=l17;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l17;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l17;
si1=1U;
si0>>=(si1&31);
l16=si0;
si0=l7;
si1=l9;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l14;
l13=si0;
L21:;
{
si0=l13;
sj0=i64_load(&i->m0,(U64)si0);
l20=sj0;
si0=l13;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
l15=si0;
sj0=i64_load(&i->m0,(U64)si0);
l21=sj0;
si0=l15;
si1=l4;
si2=8U;
si1+=si2;
l18=si1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
sj1=l20;
i64_store(&i->m0,(U64)si0,sj1);
si0=l18;
sj1=l21;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-16U;
si0+=si1;
l4=si0;
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
si0=l16;
si1=-1U;
si0+=si1;
l16=si0;
if(si0){
goto L21;
}
goto L10;
}
L20:;
si0=l12;
si1=l9;
si2=1167388U;
f683(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l9;
si1=l1;
si2=1167388U;
f597(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l15;
l17=si0;
L11:;
si0=l17;
si1=l12;
si0+=si1;
l9=si0;
L10:;
si0=l9;
si1=l12;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l9;
si1=l1;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l9;
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
si0=l9;
si1=l12;
si0-=si1;
l4=si0;
goto L22;
L24:;
si0=1167560U;
si1=44U;
si2=1167604U;
f604(i,si0,si1,si2);
UNREACHABLE;
L23:;
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
si0=l14;
si1=l9;
si2=l12;
si1-=si2;
l4=si1;
si2=l17;
si3=1U;
si4=l17;
si5=1U;
si4=si4 > si5;
si2=si4?si2:si3;
f777(i,si0,si1,si2);
L22:;
si0=l10;
si1=l11;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l10;
si1=4U;
si0<<=(si1&31);
l13=si0;
if(si0){
goto L29;
}
si0=4U;
si1=0U;
si0=f15030(i,si0,si1);
l13=si0;
goto L28;
L29:;
si0=l13;
si0=f15022(i,si0);
l13=si0;
L28:;
si0=l13;
si0=!(si0);
if(si0){
goto L26;
}
si0=l10;
si1=1U;
si0<<=(si1&31);
l11=si0;
si0=l13;
si1=l6;
si2=l10;
si3=3U;
si2<<=(si3&31);
si0=f15143(i,si0,si1,si2);
l13=si0;
si0=l6;
f15024(i,si0);
si0=l13;
l6=si0;
L27:;
si0=l6;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si1=l12;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l13;
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
goto L30;
}
L31:;
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
l13=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l13;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l1;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=l10;
si1=3U;
si0<<=(si1&31);
si1=l6;
si0+=si1;
l16=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l17=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L35;
}
si0=l10;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=2U;
l10=si0;
goto L30;
L36:;
si0=l6;
si1=l10;
si2=-3U;
si1+=si2;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si1=l17;
si2=l4;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L34;
}
si0=l10;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=3U;
l10=si0;
goto L30;
L37:;
si0=l16;
si1=-32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l13;
si2=l17;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L34;
}
goto L30;
L35:;
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l6;
si1=l10;
si2=-3U;
si1+=si2;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
L34:;
si0=l13;
si1=l4;
si0=si0 < si1;
if(si0){
goto L32;
}
L33:;
si0=l10;
si1=-2U;
si0+=si1;
l14=si0;
L32:;
si0=l10;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L43;
}
si0=l10;
si1=l14;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 <= si1;
if(si0){
goto L42;
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
goto L41;
}
si0=l17;
si1=l1;
si0=si0 > si1;
if(si0){
goto L40;
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
l13=si0;
si1=l25;
si1=i32_load(&i->m0,(U64)si1);
l19=si1;
si2=4U;
si1<<=(si2&31);
l16=si1;
si0+=si1;
l4=si0;
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
goto L44;
}
si0=l5;
si1=l4;
si2=l17;
si3=4U;
si2<<=(si3&31);
l16=si2;
si0=f15143(i,si0,si1,si2);
l12=si0;
si1=l16;
si0+=si1;
l16=si0;
si0=l19;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L39;
}
si0=l17;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L39;
}
si0=l7;
si1=l15;
si0+=si1;
l17=si0;
L45:;
{
si0=l17;
si1=l4;
si2=l4;
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
l4=si1;
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
si0=l4;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l17;
si1=-16U;
si0+=si1;
l17=si0;
si0=l16;
si1=l12;
si0=si0 <= si1;
if(si0){
goto L39;
}
goto L45;
}
L44:;
si0=l5;
si1=l13;
si2=l16;
si0=f15143(i,si0,si1,si2);
l17=si0;
si1=l16;
si0+=si1;
l16=si0;
si0=l19;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L46;
}
si0=l17;
l17=si0;
goto L38;
L46:;
si0=l18;
si1=l19;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L47;
}
si0=l17;
l17=si0;
goto L38;
L47:;
si0=l0;
si1=l15;
si0+=si1;
l12=si0;
si0=l17;
l17=si0;
L48:;
{
si0=l13;
si1=l4;
si2=l17;
si3=l17;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=0U;
si3=si3 != si4;
si4=l4;
si5=12U;
si4+=si5;
si4=i32_load(&i->m0,(U64)si4);
si5=0U;
si6=l4;
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
si0=l13;
si1=8U;
si0+=si1;
si1=l18;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l13;
si1=16U;
si0+=si1;
l13=si0;
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
goto L38;
}
si0=l4;
si1=l15;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L48;
}
goto L38;
}
L43:;
si0=l3;
si1=36U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1167300U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1167308U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1167404U;
f614(i,si0,si1);
UNREACHABLE;
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
si1=1167300U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=1167308U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=1167420U;
f614(i,si0,si1);
UNREACHABLE;
L41:;
si0=l26;
si1=l17;
si2=1167436U;
f683(i,si0,si1,si2);
UNREACHABLE;
L40:;
si0=l17;
si1=l1;
si2=1167436U;
f597(i,si0,si1,si2);
UNREACHABLE;
L39:;
si0=l4;
l13=si0;
si0=l12;
l17=si0;
L38:;
si0=l13;
si1=l17;
si2=l16;
si3=l17;
si2-=si3;
si0=f15143(i,si0,si1,si2);
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
si2=l10;
si3=l14;
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
goto L31;
}
}
L30:;
si0=l9;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
goto L9;
L26:;
}
si0=1167452U;
si1=43U;
si2=1167528U;
f604(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l12;
si1=l9;
si2=1167544U;
f683(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1167452U;
si1=43U;
si2=1167496U;
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
f777(i,si0,si1,si2);
goto L2;
L3:;
si0=l6;
f15024(i,si0);
si0=l5;
f15024(i,si0);
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1167452U;
si1=43U;
si2=1167512U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f777(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
l3=si0;
L3:;
{
si0=l0;
si1=l2;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=-16U;
si0+=si1;
l5=si0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=0U;
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l7=si2;
si0=si2?si0:si1;
l8=si0;
si1=l5;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=l4;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l10=si0;
si0=l4;
si1=l5;
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
l11=si0;
si0=l3;
l4=si0;
L6:;
{
si0=l4;
si1=16U;
si0+=si1;
l5=si0;
si0=l4;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l5;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=-16U;
si0+=si1;
l4=si0;
si0=l2;
si1=l11;
si2=1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l0;
l5=si0;
L5:;
si0=l5;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l10;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l9;
i32_store(&i->m0,(U64)si0,si1);
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
si0=1167620U;
si1=46U;
si2=1167668U;
f604(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f778(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f779(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f780(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f781(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
si0=f621(i,si0,si1,si2);
L0:;
return si0;
}

U32 f782(rustpythonInstance*i,U32 l0,U32 l1) {
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
i32_store(&i->m0,(U64)si0+8U,si1);
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
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=3U;
l3=si0;
goto L1;
L4:;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+8U,si1);
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
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+8U,si1);
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
i32_store8(&i->m0,(U64)si0+11U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+10U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+8U,si1);
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
f751(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l0=si0;
L6:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
si1=l0;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=l3;
si0=f15143(i,si0,si1,si2);
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
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
si0=1166164U;
si1=16U;
si2=l2;
si3=15U;
si2+=si3;
si3=1166180U;
si4=1166212U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f783(rustpythonInstance*i,U32 l0,U32 l1) {
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
f753(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
f15024(i,si0);
L8:;
si0=l3;
f15024(i,si0);
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

U32 f784(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1167684U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f785(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1167708U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f786(rustpythonInstance*i,U32 l0) {
L0:;
}

void f787(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1167732U;
si3=l5;
si4=12U;
si3+=si4;
si4=1167732U;
si5=l3;
si6=l4;
f637(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f788(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f782(i,si0,si1);
L0:;
return si0;
}

U32 f789(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si0=f783(i,si0,si1);
L0:;
return si0;
}

U32 f790(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1167708U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f791(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1167684U;
si2=l1;
si0=f621(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f792(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f753(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
f15024(i,si0);
L4:;
si0=l4;
f15024(i,si0);
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

U32 f793(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
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
si0=1166164U;
si1=16U;
si2=l3;
si3=15U;
si2+=si3;
si3=1166180U;
si4=1166212U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f794(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f795(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=1167748U;
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

U32 f796(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f751(i,si0,si1,si2);
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
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
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
si0=1166164U;
si1=16U;
si2=l3;
si3=15U;
si2+=si3;
si3=1166180U;
si4=1166212U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f797(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f753(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
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
f15024(i,si0);
L4:;
si0=l4;
f15024(i,si0);
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

void f798(rustpythonInstance*i,U32 l0) {
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l5=si0;
L7:;
{
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=l5;
si2+=si3;
l6=si2;
si3=l2;
si4=l5;
si3-=si4;
l7=si3;
f14777(i,si0,si1,si2,si3);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l8=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
if(si0){
goto L9;
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
si1=l6;
si2=l7;
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L10:;
si0=l8;
switch(si0){
case 0:
goto L14;
case 1:
goto L15;
case 2:
goto L13;
case 3:
goto L12;
default:
goto L14;
}
L15:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l9=si0;
goto L11;
L14:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14744(i,si0);
l9=si0;
goto L11;
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l9=si0;
goto L11;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l9=si0;
L11:;
si0=l9;
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l8;
si1=3U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l8;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
f15024(i,si0);
L16:;
si0=l8;
f15024(i,si0);
goto L8;
L9:;
si0=l8;
si1=l5;
si0+=si1;
l5=si0;
L8:;
si0=l5;
si1=l2;
si0=si0 >= si1;
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
l8=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L17;
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
goto L17;
}
si0=l4;
si1=l6;
si2=l7;
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
L17:;
si0=l8;
si1=255U;
si0&=si1;
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
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
goto L19;
}
si0=l0;
f15024(i,si0);
L19:;
si0=l3;
f15024(i,si0);
goto L2;
L5:;
si0=l5;
si1=l2;
si2=17677444U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=l2;
si2=17677444U;
f597(i,si0,si1,si2);
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
L2:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=l2;
si2=17677444U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f799(rustpythonInstance*i,U32 l0) {
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
si1=18663232U;
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
goto L6;
}
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=18663232U;
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
goto L7;
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
f14773(i,si0,si1,si2,si3);
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
si0=f15144(i,si0,si1,si2);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L15:;
si0=l6;
switch(si0){
case 0:
goto L19;
case 1:
goto L20;
case 2:
goto L18;
case 3:
goto L17;
default:
goto L19;
}
L20:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l9=si0;
goto L16;
L19:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14744(i,si0);
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
f15024(i,si0);
L21:;
si0=l6;
f15024(i,si0);
goto L13;
L14:;
si0=l6;
si1=l5;
si0+=si1;
l5=si0;
L13:;
si0=l5;
si1=l2;
si0=si0 >= si1;
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
si0=f15144(i,si0,si1,si2);
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
f15024(i,si0);
L24:;
si0=l6;
f15024(i,si0);
goto L2;
L7:;
si0=17680532U;
si1=38U;
si2=17680604U;
f634(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l1;
si1=17677000U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=17680376U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=23U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
f14693(i,si0,si1);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=17677444U;
f597(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=l2;
si2=17677444U;
f597(i,si0,si1,si2);
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
L2:;
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=l2;
si2=17677444U;
f597(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f800(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18663152U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l2;
si1=18663120U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l2;
si2=31U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=20U;
si0+=si1;
f14771(i,si0);
L15:;
si0=0U;
si1=3U;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si0=18663120U;
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
si0=18663156U;
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
si0=18663156U;
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
si0=18663156U;
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
si1=i32_load(&i->m0,(U64)si1+13U);
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
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1167759U;
si1=34U;
si2=1167904U;
f801(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f801(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
si0+=si1;
f769(i,si0);
UNREACHABLE;
L0:;
}

void f802(rustpythonInstance*i,U32 l0) {
L0:;
}

void f803(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
f14795(i);
UNREACHABLE;
L1:;
si0=l0;
si1=1167936U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f804(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=8U;
si0=f15022(i,si0);
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
si1=1167936U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
f14795(i);
UNREACHABLE;
L1:;
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f805(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=i32_load(&i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l4=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L7:;
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
goto L7;
}
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
sj1=l4;
sj2=-1ULL;
sj1+=sj2;
sj2=l4;
sj1&=sj2;
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
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
goto L4;
}
L5:;
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
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=6U;
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
si0=l1;
f746(i,si0);
goto L2;
L3:;
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
l8=si0;
si1=-1U;
si2=l8;
si0=si2?si0:si1;
l8=si0;
si1=4U;
si2=l8;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si1=134217727U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l8;
si1=4U;
si0<<=(si1&31);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L10;
}
si0=l9;
if(si0){
goto L9;
}
si0=4U;
l10=si0;
goto L8;
L10:;
f53(i);
UNREACHABLE;
L9:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l9;
si0=f15022(i,si0);
l10=si0;
si0=!(si0);
if(si0){
goto L1;
}
L8:;
si0=l10;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l10;
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l10;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
l11=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+36U);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+32U);
l13=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
si0=1U;
l1=si0;
L12:;
{
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L13;
}
si0=l8;
l6=si0;
L14:;
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
goto L14;
}
}
L13:;
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l14=si0;
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
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l9;
si1=l14;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si2=l3;
si3=1U;
si2+=si3;
l6=si2;
si3=-1U;
si4=l6;
si2=si4?si2:si3;
f750(i,si0,si1,si2);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l10=si0;
goto L15;
L16:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
L17:;
{
sj0=l7;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L18;
}
si0=l8;
l6=si0;
L19:;
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
goto L19;
}
}
L18:;
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
l6=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
f15024(i,si0);
L20:;
sj0=l4;
sj1=l7;
sj0&=sj1;
l7=sj0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L17;
}
goto L11;
}
L15:;
si0=l10;
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
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
if(si0){
goto L12;
}
}
L11:;
si0=l12;
si0=!(si0);
if(si0){
goto L21;
}
si0=l11;
si0=!(si0);
if(si0){
goto L21;
}
si0=l13;
f15024(i,si0);
L21:;
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
L2:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=4U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f806(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=f14767(i);
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

void f807(rustpythonInstance*i,U32 l0) {
L0:;
}

void f808(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si3=12U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f63(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+40U);
switch(si0){
case 0:
goto L5;
case 1:
goto L7;
case 2:
goto L6;
default:
goto L5;
}
L8:;
si0=l0;
si1=l1;
si2=l2;
f14844(i,si0,si1,si2);
goto L1;
L7:;
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1167952U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=310U;
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
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=6U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=17679618U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=24U;
si0+=si1;
si0=f14780(i,si0);
if(si0){
goto L4;
}
si0=l3;
si1=18663156U;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l3;
si1=l3;
si2=76U;
si1+=si2;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=104U;
si1+=si2;
si2=l3;
si3=24U;
si2+=si3;
f14778(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+64U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0+80U,sj1);
si0=l3;
si1=100U;
si0+=si1;
si1=294U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=295U;
i32_store(&i->m0,(U64)si0+92U,si1);
si0=l3;
si1=l3;
si2=80U;
si1+=si2;
i32_store(&i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l3;
si1=104U;
si0+=si1;
si1=17679580U;
si2=2U;
si3=l3;
si4=88U;
si3+=si4;
si4=2U;
f14677(i,si0,si1,si2,si3,si4);
si0=l3;
si1=104U;
si0+=si1;
si1=17679596U;
f614(i,si0,si1);
UNREACHABLE;
L6:;
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
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L9;
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=f14767(i);
si1=1U;
si0^=si1;
l4=si0;
L10:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l3;
si1=116U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1167952U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=310U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=88U;
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
si3=104U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+88U);
l2=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
if(si0){
goto L11;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=f14767(i);
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
goto L4;
L9:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+116U,sj1);
si0=l3;
si1=1166956U;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1166948U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=0U;
si1=l3;
si2=24U;
si1+=si2;
si2=1166912U;
si3=l3;
si4=104U;
si3+=si4;
si4=1167060U;
f787(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l3;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=1167952U;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=310U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=104U;
si0+=si1;
f14781(i,si0);
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l1;
f15024(i,si0);
goto L1;
L3:;
si0=l3;
si1=115U;
si0+=si1;
si1=l3;
si2=26U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+108U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+104U,si1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+24U);
i32_store16(&i->m0,(U64)si0+113U,si1);
si0=1167960U;
si1=43U;
si2=l3;
si3=104U;
si2+=si3;
si3=1168004U;
si4=1168152U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+89U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si2=88U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L12;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18663204U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=f14767(i);
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
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
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
si0=l1;
f15024(i,si0);
L1:;
si0=l3;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f809(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f751(i,si0,si1,si2);
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
f751(i,si0,si1,si2);
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
f751(i,si0,si1,si2);
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
f751(i,si0,si1,si2);
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
f751(i,si0,si1,si2);
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
f751(i,si0,si1,si2);
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
f752(i,si0,si1,si2,si3,si4);
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
f752(i,si0,si1,si2,si3,si4);
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
si2=8U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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
si2=8U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
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

U32 f810(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=l3;
si3=4U;
si2+=si3;
f809(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
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
si0=1168168U;
si1=16U;
si2=l2;
si3=15U;
si2+=si3;
si3=1168184U;
si4=1168216U;
f641(i,si0,si1,si2,si3,si4);
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
si2=1181732U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l4;
si3=1181736U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=f642(i,si0,si1,si2);
l0=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=1168168U;
si1=16U;
si2=l2;
si3=15U;
si2+=si3;
si3=1168184U;
si4=1168200U;
f641(i,si0,si1,si2,si3,si4);
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
f751(i,si0,si1,si2);
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

U32 f811(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=4U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=l3;
si3=4U;
si2+=si3;
f809(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
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
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
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
si0=1168168U;
si1=16U;
si2=l2;
si3=15U;
si2+=si3;
si3=1168184U;
si4=1168216U;
f641(i,si0,si1,si2,si3,si4);
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
si0=f642(i,si0,si1,si2);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L6;
}
si0=1168168U;
si1=16U;
si2=l2;
si3=15U;
si2+=si3;
si3=1168184U;
si4=1168200U;
f641(i,si0,si1,si2,si3,si4);
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
f751(i,si0,si1,si2);
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

void f812(rustpythonInstance*i,U32 l0) {
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
f798(i,si0);
goto L2;
L3:;
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
f799(i,si0);
L2:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
L11:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
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
f15024(i,si0);
L12:;
L0:;
}

void f813(rustpythonInstance*i,U32 l0) {
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
si0=i32_load(&i->m0,(U64)si0+48U);
l2=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
si0=l2;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-1ULL;
sj0^=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
l5=sj0;
si0=l2;
l6=si0;
L3:;
{
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l4;
l7=si0;
L5:;
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
goto L5;
}
}
L4:;
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
l7=si0;
si1=-16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l9;
f15024(i,si0);
L6:;
sj0=l8;
sj1=l5;
sj0&=sj1;
l5=sj0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L3;
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
si0=l2;
si1=l7;
si0-=si1;
si1=-16U;
si0+=si1;
f15024(i,si0);
L1:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l7;
f15024(i,si0);
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si1=2U;
si0=si0 < si1;
if(si0){
goto L8;
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
l3=si1;
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
goto L8;
}
si0=l3;
f15024(i,si0);
L8:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+20U);
l6=si1;
si1=i32_load(&i->m0,(U64)si1);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l7;
f15024(i,si0);
L9:;
L0:;
}

void f814(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f815(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
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
f816(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si0=l0;
si1=48U;
si0+=si1;
si1=l3;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+12U);
si0=f764(i,si0,si1,si2);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
f15024(i,si0);
L1:;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si2=28U;
si1+=si2;
l3=si1;
f816(i,si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L6;
case 2:
goto L7;
default:
goto L4;
}
L7:;
si0=l4;
si1=1167924U;
si2=6U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=1U;
l6=si0;
goto L3;
L6:;
si0=l4;
si1=1167930U;
si2=5U;
si0=f15142(i,si0,si1,si2);
if(si0){
goto L4;
}
si0=2U;
l6=si0;
goto L3;
L5:;
si0=0U;
l6=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=0U;
si1=i32_load(&i->m0,(U64)si1+1167920U);
si0=si0 == si1;
if(si0){
goto L3;
}
L4:;
si0=0U;
l6=si0;
L3:;
si0=l0;
si1=46U;
si0+=si1;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
f15024(i,si0);
L2:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
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
goto L8;
}
si0=l4;
f15024(i,si0);
L8:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
f15024(i,si0);
L9:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=48U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
f15024(i,si0);
L10:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
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
si0=l3;
f15024(i,si0);
L11:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f816(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
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
f14731(i,si0,si1,si2);
si0=0U;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+4U);
l4=si1;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
l5=si2;
si0=si2?si0:si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
sj0=l6;
sj1=4294967295ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L1;
}
si0=l4;
f15024(i,si0);
L1:;
si0=l3;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L7:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
if(si0){
goto L9;
}
si0=1U;
l4=si0;
goto L3;
L9:;
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
if(si0){
goto L3;
}
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L8:;
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
goto L11;
}
si0=1U;
l4=si0;
goto L10;
L11:;
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
L10:;
si0=l4;
si1=l3;
si2=l1;
si0=f15143(i,si0,si1,si2);
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
goto L2;
L6:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L3:;
si0=l4;
si1=l3;
si2=l1;
si0=f15143(i,si0,si1,si2);
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
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f817(rustpythonInstance*i,U32 l0) {
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
f800(i,si0,si1);
si0=l1;
si1=64U;
si0+=si1;
si1=l0;
si2=48U;
si1+=si2;
f765(i,si0,si1);
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
si1=1166228U;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=32U;
si0=f15022(i,si0);
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
si0=1166232U;
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
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=88U;
si0=f15022(i,si0);
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
si0=f15143(i,si0,si1,si2);
l6=si0;
si0=1U;
l5=si0;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658432U);
l0=si1;
si2=1U;
si3=l0;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+18658432U,si1);
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
si0=i32_load(&i->m0,(U64)si0+18658432U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L15;
}
}
L13:;
si0=l6;
f812(i,si0);
si0=l6;
f15024(i,si0);
goto L11;
L12:;
si0=0U;
l5=si0;
si0=0U;
si1=1168232U;
i32_store(&i->m0,(U64)si0+18656608U,si1);
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+18656604U,si1);
si0=0U;
si1=2U;
i32_store(&i->m0,(U64)si0+18658432U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+18658436U,si1);
L11:;
si0=l1;
si1=112U;
si0+=si1;
i->g0=si0;
si0=l5;
goto L0;
L4:;
si0=1168372U;
si1=34U;
si2=1168408U;
f801(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1166256U;
si1=34U;
si2=1166292U;
f801(i,si0,si1,si2);
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

U32 f818(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f15142(i,si0,si1,si2);
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

void f819(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f763(i,si0,si1);
si0=!(si0);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658416U);
if(si0){
goto L7;
}
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+18658428U,si1);
si0=0U;
sj1=-4294967295ULL;
i64_store(&i->m0,(U64)si0+18658416U,sj1);
goto L6;
L7:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658420U);
if(si0){
goto L14;
}
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+18658420U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18658428U);
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
si0=f14843(i,si0);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=32U;
si0=f15022(i,si0);
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
f808(i,si0,si1,si2);
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
f15024(i,si0);
L19:;
si0=l1;
f15024(i,si0);
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
f15024(i,si0);
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
f15024(i,si0);
goto L4;
L13:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si0=f14843(i,si0);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=32U;
si0=f15022(i,si0);
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
si0=i32_load(&i->m0,(U64)si0+18658424U);
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
f15024(i,si0);
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
f15024(i,si0);
L21:;
si0=0U;
si1=l5;
i32_store8(&i->m0,(U64)si0+18658428U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+18658424U,si1);
goto L8;
L12:;
si0=4U;
si1=32U;
f52(i,si0,si1);
UNREACHABLE;
L11:;
si0=1166004U;
si1=24U;
si2=l2;
si3=31U;
si2+=si3;
si3=1166028U;
si4=1166148U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1166164U;
si1=16U;
si2=l2;
si3=31U;
si2+=si3;
si3=1166180U;
si4=1166196U;
f641(i,si0,si1,si2,si3,si4);
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
si2=18658424U;
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
si0=i32_load(&i->m0,(U64)si0+18658424U);
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
f808(i,si0,si1,si2);
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
f15024(i,si0);
L29:;
si0=l1;
f15024(i,si0);
L27:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658424U);
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
si0=1166004U;
si1=24U;
si2=l2;
si3=31U;
si2+=si3;
si3=1166028U;
si4=1166148U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L23:;
si0=1166164U;
si1=16U;
si2=l2;
si3=31U;
si2+=si3;
si3=1166180U;
si4=1166196U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+36U);
si0=f14843(i,si0);
l4=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+40U);
l5=si0;
si0=32U;
si0=f15022(i,si0);
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
f808(i,si0,si1,si2);
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
f15024(i,si0);
L34:;
si0=l1;
f15024(i,si0);
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
si0=i32_load8_u(&i->m0,(U64)si0+18658428U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L35;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18658424U);
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
f15024(i,si0);
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
f15024(i,si0);
L35:;
si0=0U;
si1=l1;
i32_store8(&i->m0,(U64)si0+18658428U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+18658424U,si1);
L5:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+18658420U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+18658420U,si1);
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
si0=1166004U;
si1=24U;
si2=l2;
si3=31U;
si2+=si3;
si3=1166028U;
si4=1166148U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1166164U;
si1=16U;
si2=l2;
si3=31U;
si2+=si3;
si3=1166180U;
si4=1166196U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f820(rustpythonInstance*i,U32 l0) {
L0:;
}

void f821(rustpythonInstance*i) {
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
si1=1168432U;
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
si1=1168424U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=f761(i,si0);
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
si1=1166488U;
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
si1=1166228U;
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
si1=f815(i,si1,si2);
si2=104U;
si0=f15143(i,si0,si1,si2);
si0=l0;
si1=64U;
si0+=si1;
si0=f817(i,si0);
l1=si0;
si0=l0;
si1=64U;
si0+=si1;
f813(i,si0);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=1168446U;
si1=62U;
si2=l0;
si3=64U;
si2+=si3;
si3=1168256U;
si4=1168508U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1167076U;
si1=70U;
si2=l0;
si3=64U;
si2+=si3;
si3=1167148U;
si4=1167244U;
f641(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f822(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1169212U;
si2=6U;
si3=1169218U;
si4=14U;
si5=l0;
si6=16U;
si5+=si6;
si6=1169232U;
si7=1169248U;
si8=8U;
si9=l0;
si10=1169256U;
si11=1169272U;
si12=9U;
si13=l0;
si14=8U;
si13+=si14;
si14=1169256U;
si15=1169281U;
si16=7U;
si17=l2;
si18=12U;
si17+=si18;
si18=1169304U;
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

U32 f823(rustpythonInstance*i,U32 l0,U32 l1) {
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
si0=f846(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f824(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1169320U;
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
si1=1169327U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1169332U;
si0=f644(i,si0,si1,si2,si3,si4);
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

U32 f825(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1169212U;
si2=6U;
si3=1169218U;
si4=14U;
si5=l0;
si6=16U;
si5+=si6;
si6=1169232U;
si7=1169248U;
si8=8U;
si9=l0;
si10=1169256U;
si11=1169272U;
si12=9U;
si13=l0;
si14=8U;
si13+=si14;
si14=1169256U;
si15=1169281U;
si16=7U;
si17=l2;
si18=12U;
si17+=si18;
si18=1169288U;
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

U32 f826(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1169348U;
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
si1=1169327U;
si2=5U;
si3=l2;
si4=4U;
si3+=si4;
si4=1169356U;
si0=f644(i,si0,si1,si2,si3,si4);
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

U32 f827(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f828(rustpythonInstance*i,U32 l0) {
L0:;
}

void f829(rustpythonInstance*i,U32 l0) {
L0:;
}


#include "w2c2_base.h"

#include "rustpython.h"

void f5630(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=268U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-3130377570248458222ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-766526879296463580ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5631(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4566842283283303034ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2661386195423522850ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5632(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5184145869012348911ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5571618655798402945ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5633(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4050155162030272185ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4233016263971513691ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5634(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662608U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5052060429243103242ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3024658512916775759ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17643896U;
si1=36U;
si2=17643948U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5635(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5931764594261734995ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6370977829563918538ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5636(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660556U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660560U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=832729930297974802ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-9053694674594774885ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17337074U;
si1=36U;
si2=17337128U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5637(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660596U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660600U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8739764663575307890ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7318196362420178743ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17337074U;
si1=36U;
si2=17337128U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5638(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-527864875366221210ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2155143486853174264ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5639(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661416U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661420U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=1894952246721167385ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-53790184241700889ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17438136U;
si1=36U;
si2=17438188U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5640(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662832U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662836U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7765768247594440553ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=9143136497202875230ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17654574U;
si1=36U;
si2=17654628U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5641(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=236U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-935510885048731461ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8140359450318595575ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5642(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661388U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661392U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4149316461164810760ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=1751325718485819388ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17438136U;
si1=36U;
si2=17438188U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5643(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6482296362598249607ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7854101280639796739ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5644(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=252U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-196514206920042317ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8563692070758448421ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5645(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661380U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661384U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7157114272340869349ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3975699065939307157ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17438136U;
si1=36U;
si2=17438188U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5646(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=244U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-290511690596932029ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4164662930127135268ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5647(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=296U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-3101122357740621133ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8602203138989373742ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5648(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662928U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662932U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=690260783290823422ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7901694198604913966ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17654574U;
si1=36U;
si2=17654628U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5649(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=272U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-104657993046969555ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7395730724413636963ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5650(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=184U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-4759791341598484124ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-2656750425517402639ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5651(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4041845322443053651ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-3042154333957800101ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5652(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-7528524892399901228ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3498177934775739267ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5653(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660604U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660608U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-8627957548762066348ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5353203821376542323ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17337074U;
si1=36U;
si2=17337128U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5654(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=168U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=5968383067144272154ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=4081176807085765302ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5655(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=4665093314700579932ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=5450899068315262175ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5656(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662976U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18662980U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=2759011374117385739ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=3382213435547346265ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17654574U;
si1=36U;
si2=17654628U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5657(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=256U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7722635161133235666ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-7970982033362411190ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5658(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660564U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660568U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6598898030004911964ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-6128064687285863514ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17337074U;
si1=36U;
si2=17337128U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5659(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661372U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18661376U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2509414258154077150ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=7659864703144350706ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17438136U;
si1=36U;
si2=17438188U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5660(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660588U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+18660592U);
l6=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L7:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6435548688230219501ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=9202728308738849992ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L3;
L8:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l1;
si3=i32_load(&i->m0,(U64)si3+88U);
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L3;
}
L4:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L3:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=17337074U;
si1=36U;
si2=17337128U;
f634(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f5661(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-6645567309311683475ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-8851977905375027358ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5662(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-2295367307525992740ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6911619425446520681ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5663(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=160U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=-5312052885499612470ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-4540282770431510161ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5664(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=312U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=7184362248180433438ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-5536752645709742633ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5665(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l2;
si1=56U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+48U);
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=l4;
si2=4U;
si1+=si2;
si2=l3;
si3=-1U;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si0=f15144(i,si0,si1,si2);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+88U);
l6=si0;
si1=208U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=468U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=460U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L6:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=5U;
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+8U);
sj1=8867842776965570175ULL;
sj0^=sj1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-1891861547007444196ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
l4=si0;
goto L2;
L7:;
si0=l1;
si1=17462072U;
si2=7U;
si3=l6;
si4=476U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=4U;
l2=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=4U;
l2=si0;
si0=l1;
si1=17462079U;
si2=4U;
si3=l6;
si4=504U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l7;
si5=l5;
si0=f11342(i,si0,si1,si2,si3,si4,si5);
l4=si0;
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
goto L2;
}
L3:;
si0=l5;
f5522(i,si0);
si0=4U;
l2=si0;
L2:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f5666(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=52U;
si0+=si1;
si1=l2;
si2=l1;
f13151(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+92U);
l4=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=8U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=20U;
si0+=si1;
l5=si0;
si1=l3;
si2=52U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+93U);
i32_store16(&i->m0,(U64)si0+49U,si1);
si0=l3;
si1=l4;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l6=si0;
si0=l1;
si1=12U;
si0*=si1;
l1=si0;
si0=l3;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
L10:;
{
si0=l6;
si1=l1;
si0+=si1;
l7=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l7;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
L11:;
si0=l5;
si1=l4;
si0*=si1;
l4=si0;
si0=l1;
si1=-12U;
si0+=si1;
l1=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l3;
si1=52U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+52U);
l4=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+56U);
l5=si0;
si0=l4;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L13;
case 3:
goto L14;
case 4:
goto L13;
default:
goto L16;
}
L16:;
si0=l5;
l7=si0;
goto L12;
L15:;
si0=l5;
si1=1U;
si0+=si1;
l7=si0;
goto L12;
L14:;
si0=l5;
si1=4U;
si0+=si1;
l7=si0;
goto L12;
L13:;
si0=l1;
l7=si0;
si0=l6;
l1=si0;
L12:;
si0=l1;
if(si0){
goto L18;
}
si0=1U;
l6=si0;
goto L17;
L18:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=l1;
si0=f15022(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
L17:;
si0=l6;
si1=l7;
si2=l1;
si0=f15143(i,si0,si1,si2);
l7=si0;
si0=l4;
switch(si0){
case 0:
goto L19;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L21;
default:
goto L24;
}
L24:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L19;
L23:;
si0=l5;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L19;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L19;
L22:;
si0=l5;
si1=0U;
si2=l5;
si2=i32_load8_u(&i->m0,(U64)si2);
l4=si2;
si3=l4;
si4=1U;
si3=si3 == si4;
l4=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
if(si0){
goto L19;
}
si0=l5;
si1=0U;
f1361(i,si0,si1);
goto L19;
L21:;
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 != si1;
if(si0){
goto L19;
}
L20:;
si0=l5;
f1354(i,si0);
L19:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
goto L6;
L8:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311898U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311890U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311882U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311874U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311866U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311858U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l5;
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
si3=52U;
si2+=si3;
si0=f11521(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L6:;
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L25;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
f5522(i,si0);
L25:;
si0=l3;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l3;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
f15024(i,si0);
L26:;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
L5:;
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l1;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
f14795(i);
UNREACHABLE;
L0:;
}

void f5667(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=52U;
si0+=si1;
si1=l2;
si2=l1;
f13151(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l1=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+92U);
l6=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=8U;
si0+=si1;
si1=36U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=36U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=28U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=20U;
si0+=si1;
l7=si0;
si1=l5;
si2=52U;
si1+=si2;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=43U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=43U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1+56U);
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l5;
si1=l5;
si1=i32_load16_u(&i->m0,(U64)si1+93U);
i32_store16(&i->m0,(U64)si0+49U,si1);
si0=l5;
si1=l6;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l8=si0;
si0=l1;
si1=12U;
si0*=si1;
l1=si0;
si0=l5;
si1=32U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L9:;
{
si0=l8;
si1=l1;
si0+=si1;
l9=si0;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l9;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
L10:;
si0=l7;
si1=l6;
si0*=si1;
l6=si0;
si0=l1;
si1=-12U;
si0+=si1;
l1=si0;
if(si0){
goto L9;
}
}
L8:;
si0=l5;
si1=52U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2+12U);
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+52U);
l7=si0;
si1=5U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+18657628U);
si0=48U;
si0=f15022(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=40U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311898U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311890U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311882U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311874U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311866U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+17311858U);
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l6=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+88U);
si1=504U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si1=l7;
si1=i32_load(&i->m0,(U64)si1);
l9=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
sj1=206158430256ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l1;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l9;
si1=2147483647U;
si0&=si1;
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l2;
si2=l7;
si3=l5;
si4=52U;
si3+=si4;
si1=f11521(i,si1,si2,si3);
i32_store(&i->m0,(U64)si0+4U,si1);
goto L5;
L6:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l9=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+64U);
l6=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+60U);
l1=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+56U);
l8=si0;
si0=l7;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L12;
case 3:
goto L13;
case 4:
goto L12;
default:
goto L15;
}
L15:;
si0=l8;
l3=si0;
goto L11;
L14:;
si0=l8;
si1=1U;
si0+=si1;
l3=si0;
goto L11;
L13:;
si0=l8;
si1=4U;
si0+=si1;
l3=si0;
goto L11;
L12:;
si0=l1;
l3=si0;
si0=l6;
l1=si0;
L11:;
si0=0U;
l6=si0;
si0=1U;
si1=2U;
si2=4U;
si3=l2;
si4=l3;
si5=l9;
si6=l1;
si7=l9;
si8=l1;
si7=si7 < si8;
si5=si7?si5:si6;
si3=f15142(i,si3,si4,si5);
l2=si3;
si4=l9;
si5=l1;
si4-=si5;
si5=l2;
si3=si5?si3:si4;
l1=si3;
si1=si3?si1:si2;
si2=l1;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=l4;
si0&=si1;
l1=si0;
si0=l7;
switch(si0){
case 0:
goto L16;
case 1:
goto L20;
case 2:
goto L19;
case 3:
goto L18;
default:
goto L21;
}
L21:;
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1);
l7=si1;
si2=-16U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=-14U;
si0&=si1;
si1=18U;
si0=si0 == si1;
if(si0){
goto L17;
}
goto L16;
L20:;
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L16;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L16;
L19:;
si0=l8;
si1=0U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2);
l7=si2;
si3=l7;
si4=1U;
si3=si3 == si4;
l7=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L16;
}
si0=l8;
si1=0U;
f1361(i,si0,si1);
goto L16;
L18:;
si0=l8;
si1=l8;
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
goto L16;
}
L17:;
si0=l8;
f1354(i,si0);
L16:;
si0=l0;
si1=l1;
si2=0U;
si1=si1 != si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
L5:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+12U);
si1=i32_load(&i->m0,(U64)si1+8U);
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
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
goto L22;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
f5522(i,si0);
L22:;
si0=l5;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l5;
si1=40U;
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
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
f15024(i,si0);
goto L1;
L4:;
si0=1U;
si1=48U;
f52(i,si0,si1);
UNREACHABLE;
L3:;
f14795(i);
UNREACHABLE;
L2:;
si0=l0;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f5668(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5669(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5670(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5671(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5672(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
L8:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l3;
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
goto L9;
}
si0=l2;
f15024(i,si0);
L9:;
si0=l3;
f15024(i,si0);
L7:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L10:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L11:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5673(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
l1=si0;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l0;
si2=76U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=0U;
si3=l3;
si4=l2;
si5=l3;
si4=si4 < si5;
si2=si4?si2:si3;
si1-=si2;
l4=si1;
si2=l5;
si1+=si2;
si2=l5;
si3=l3;
si4=l4;
si3-=si4;
l6=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=l4;
si0-=si1;
l2=si0;
si0=l1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L7:;
{
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l4;
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
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L8:;
si0=l3;
si1=4U;
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
si0=l6;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=0U;
si1=l5;
si2=l6;
si1-=si2;
l3=si1;
si2=l3;
si3=l5;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
L9:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L10:;
si0=l1;
si1=4U;
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
L5:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f15024(i,si0);
L11:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5674(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L8:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5675(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5676(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5677(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5678(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=2ULL;
si0=sj0 == sj1;
if(si0){
goto L5;
}
si0=l0;
si1=80U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l3;
f7737(i,si0);
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+84U);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5679(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L8:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=108U;
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
f15024(i,si0);
L0:;
}

void f5680(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+108U);
f5522(i,si0);
L6:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L7:;
si0=l0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+96U);
f5522(i,si0);
L8:;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
f5522(i,si0);
L9:;
si0=l0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+116U);
f5522(i,si0);
L10:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+120U);
switch(si0){
case 0:
goto L11;
case 1:
goto L12;
default:
goto L13;
}
L13:;
si0=l0;
si1=132U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L15:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L18;
}
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L17;
}
goto L16;
L18:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L16;
}
L17:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L16:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l0;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+124U);
f15024(i,si0);
goto L11;
L12:;
si0=l0;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L20;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+128U);
l1=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L19;
}
goto L11;
L20:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+128U);
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
goto L11;
}
L19:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+128U);
f5522(i,si0);
L11:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L21:;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+104U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5681(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5682(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5683(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L5:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l0;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
f15024(i,si0);
L7:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L9:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L10:;
si0=l1;
si1=4U;
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
si0=l0;
si0=i32_load(&i->m0,(U64)si0+84U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
f15024(i,si0);
L8:;
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L11:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L12:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L13:;
si0=l0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L14:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5684(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L7:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L8:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L9:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+84U);
f5522(i,si0);
L10:;
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
f5522(i,si0);
L11:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5685(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L6:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5686(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5687(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5688(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5689(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5690(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
f5522(i,si0);
L5:;
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5691(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=56U;
si0+=si1;
f8793(i,si0);
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
si1=172U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=176U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
si0=l0;
si1=156U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=152U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5692(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5693(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5694(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5695(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L8:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f15024(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5696(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5697(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5698(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5699(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5700(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L7:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L8:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f15024(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5701(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5702(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+100U);
f5522(i,si0);
L5:;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f15024(i,si0);
L6:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=88U;
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
f15024(i,si0);
L0:;
}

void f5703(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L6:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L7:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5704(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5705(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5706(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L6:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L7:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+84U);
f5522(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5707(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L5:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L7:;
{
si0=l1;
f8289(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5708(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L8:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5709(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5710(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L6:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5711(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5712(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+112U);
f5522(i,si0);
L5:;
si0=l0;
si1=120U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=116U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l0;
si1=192U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+192U);
f5522(i,si0);
L7:;
si0=l0;
si1=200U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=196U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5713(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5714(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=128U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=124U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=2U;
si1<<=(si2&31);
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si0-=si1;
f15024(i,si0);
L6:;
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=16U;
si0+=si1;
l1=si0;
L8:;
{
si0=l1;
si1=-8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=-12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+104U);
f15024(i,si0);
L11:;
si0=l0;
si1=144U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=136U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L13:;
{
si0=l1;
f8289(i,si0);
si0=l1;
si1=96U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L13;
}
}
L12:;
si0=l0;
si1=140U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+136U);
f15024(i,si0);
L14:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5715(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f15024(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5716(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5717(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L7:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L8:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5718(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l6=si0;
si0=0U;
l7=si0;
L6:;
{
si0=l6;
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L8:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L9;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L9:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L10:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L11:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L12:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5719(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5720(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=72U;
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
f15024(i,si0);
L0:;
}

void f5721(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si1=56U;
si0+=si1;
f7741(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5722(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L7:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L6:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5723(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L5:;
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=112U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L7:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5724(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L6:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+64U);
f5522(i,si0);
L7:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L8:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5725(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
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
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f5522(i,si0);
L5:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L6:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L7:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
L9:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L10;
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
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L10:;
si0=l1;
si1=4U;
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
si0=l0;
si1=80U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f15024(i,si0);
L11:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5726(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
l3=si1;
si2=1U;
si3=l3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
l2=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
sj1=l5;
si2=1000000000U;
si0=f1360(i,si0,sj1,si2);
L5:;
si0=l2;
si1=-56U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=60U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
l2=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L8;
}
goto L7;
L9:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
L8:;
si0=l2;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+56U);
i32_store(&i->m0,(U64)si0+56U,si1);
L7:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+56U,sj1);
L6:;
si0=l1;
si1=16U;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
L10:;
si0=l1;
si1=0U;
si2=l1;
si2=i32_load8_u(&i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
l3=si3;
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L11;
}
si0=l1;
si1=0U;
f1361(i,si0,si1);
L11:;
si0=l2;
if(si0){
goto L12;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f15024(i,si0);
L12:;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
f5522(i,si0);
L13:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5727(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=64U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
l1=si0;
L6:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L7:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+56U);
f15024(i,si0);
L8:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15024(i,si0);
L9:;
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=96U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
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
goto L13;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L13:;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+88U);
f15024(i,si0);
L10:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5728(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+68U);
f5522(i,si0);
L6:;
si0=l0;
si1=76U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
f5522(i,si0);
L7:;
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+84U);
f5522(i,si0);
L8:;
si0=l0;
si1=92U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+92U);
f5522(i,si0);
L9:;
si0=l0;
f15024(i,si0);
L0:;
}

void f5729(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=40U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
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
si0=i32_load(&i->m0,(U64)si0+40U);
f5522(i,si0);
L1:;
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
si1=4U;
si0+=si1;
l1=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
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
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
f5522(i,si0);
L4:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+52U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
f15024(i,si0);
L2:;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
f5522(i,si0);
L5:;
si0=l0;
f15024(i,si0);
L0:;
}


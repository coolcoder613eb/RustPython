#include "w2c2_base.h"

#include "rustpython.h"

void f15030(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
{
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
si1=l4;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
if(si0){
goto L8;
}
si0=l0;
si1=1988880U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l3;
si1=l5;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=l5;
si0+=si1;
l2=si0;
si0=l3;
si1=l5;
si0-=si1;
l3=si0;
goto L6;
L7:;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si0=f14991(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L2;
}
L6:;
si0=l3;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l5;
si1=l3;
si2=1988892U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15031(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=4U;
si0+=si1;
l5=si0;
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
L5:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L5;
}
}
si0=l7;
l8=si0;
L4:;
si0=l8;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l8;
si1=l3;
si2=1988680U;
f662(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=l8;
si0-=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L7:;
{
si0=2U;
si1=l10;
si2=l9;
si3=l4;
si4=8U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l5=si0;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
if(si0){
goto L11;
}
si0=l0;
si1=1988880U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l10;
si1=4U;
si0+=si1;
l5=si0;
si0=l9;
si1=3U;
si0<<=(si1&31);
l2=si0;
si0=l9;
si1=-1U;
si0+=si1;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=0U;
l8=si0;
si0=0U;
l6=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
l3=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l3;
l6=si0;
si0=l2;
si1=-8U;
si0+=si1;
l2=si0;
if(si0){
goto L12;
}
}
si0=l3;
l6=si0;
si0=l11;
l8=si0;
goto L9;
L10:;
si0=l5;
si1=65535U;
si0&=si1;
l5=si0;
si0=f14991(i,si0);
si1=255U;
si0&=si1;
si1=35U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l9;
si1=l8;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l9;
si1=l8;
si0-=si1;
l3=si0;
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l5=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l5;
l10=si0;
si0=l3;
l9=si0;
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1988736U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1988744U;
f683(i,si0,si1);
UNREACHABLE;
L13:;
si0=l10;
si1=l2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l9=si0;
si1=l7;
si2=l6;
si1-=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l9;
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
l10=si0;
si0=l3;
l9=si0;
goto L8;
L14:;
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1988796U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1988836U;
f683(i,si0,si1);
UNREACHABLE;
L8:;
si0=l9;
if(si0){
goto L7;
}
}
L3:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l8;
si1=l9;
si2=1988680U;
f662(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15032(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
si0+=si1;
l5=si0;
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
L6:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
if(si0){
goto L6;
}
}
si0=l7;
l8=si0;
L5:;
si0=l8;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l8;
si1=l3;
si2=1988680U;
f662(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l8;
si0-=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l8;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
L8:;
{
si0=l9;
si1=3U;
si0&=si1;
l8=si0;
si0=0U;
l3=si0;
si0=0U;
l2=si0;
si0=l9;
si1=-1U;
si0+=si1;
l11=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l10;
si1=28U;
si0+=si1;
l5=si0;
si0=0U;
l3=si0;
si0=l9;
si1=-4U;
si0&=si1;
l2=si0;
l6=si0;
L10:;
{
si0=l5;
si1=-24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
si1=l5;
si2=-16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=l5;
si2=-8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
l3=si0;
si0=l5;
si1=32U;
si0+=si1;
l5=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L10;
}
}
L9:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l10;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
l5=si0;
L12:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l3=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l9;
si1=3U;
si0<<=(si1&31);
l12=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
l5=si1;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
si1=l5;
si2=l3;
f14923(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L13:;
si0=l10;
si1=l12;
si0+=si1;
l7=si0;
si0=l10;
l8=si0;
L14:;
{
si0=l8;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
si0-=si1;
si1=l8;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l1;
si1=l5;
si2=l6;
f14923(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L15:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0+=si1;
si1=l2;
si2=l6;
si0=f15390(i,si0,si1,si2);
si0=l1;
si1=l5;
si2=l6;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l3;
if(si0){
goto L16;
}
si0=l0;
si1=1988880U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L16:;
si0=l10;
si1=4U;
si0+=si1;
l5=si0;
si0=l11;
si1=536870911U;
si0&=si1;
si1=1U;
si0+=si1;
l7=si0;
si0=0U;
l8=si0;
si0=0U;
l6=si0;
L18:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l2;
l6=si0;
si0=l12;
si1=-8U;
si0+=si1;
l12=si0;
if(si0){
goto L18;
}
}
si0=l2;
l6=si0;
si0=l7;
l8=si0;
L17:;
si0=l9;
si1=l8;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
si1=l8;
si2=3U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l5=si0;
si0=l9;
si1=l8;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l3;
si1=l6;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1988736U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1988744U;
f683(i,si0,si1);
UNREACHABLE;
L20:;
si0=l10;
si1=l2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si1=l3;
si2=l6;
si1-=si2;
l6=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l7;
si2=l6;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
L19:;
si0=l5;
l10=si0;
si0=l9;
si1=l8;
si0-=si1;
l9=si0;
if(si0){
goto L8;
}
}
L4:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l8;
si1=l9;
si2=1988680U;
f662(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1988796U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1988836U;
f683(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15033(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=1988908U;
si2=l3;
si3=24U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=1988948U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l0=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=l0;
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
goto L5;
}
si0=l1;
f15271(i,si0);
L5:;
si0=l0;
f15271(i,si0);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15034(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
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
f14923(i,si0,si1,si2);
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

U32 f15035(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f14917(i,si0,si1,si2,si3);
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

U32 f15036(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
l1=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972524U);
switch(si0){
case 0:
goto L2;
case 1:
goto L1;
case 2:
goto L3;
case 3:
goto L4;
default:
goto L5;
}
L5:;
si0=1986256U;
si1=40U;
si2=1989136U;
f673(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=2U;
l1=si0;
goto L1;
L3:;
si0=1U;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=1986876U;
si2=14U;
f14979(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L8;
case 2:
goto L8;
case 3:
goto L9;
default:
goto L8;
}
L10:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=48U;
si0=si0 == si1;
si1=1U;
si0<<=(si1&31);
l1=si0;
goto L8;
L9:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1819047270U;
si0=si0 == si1;
l1=si0;
L8:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
f15271(i,si0);
L11:;
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
goto L6;
L7:;
si0=3U;
l2=si0;
si0=2U;
l1=si0;
L6:;
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+2972524U,si1);
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f15037(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+30U);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=0U;
l1=si0;
si0=0U;
l5=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
if(si0){
goto L3;
}
si0=6U;
l6=si0;
si0=0U;
l5=si0;
si0=l2;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 == si1;
l2=si0;
if(si0){
goto L3;
}
si0=0U;
si1=l0;
si2=8U;
si1+=si2;
si2=l2;
si0=si2?si0:si1;
l0=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L4;
case 3:
goto L7;
case 4:
goto L6;
case 5:
goto L5;
default:
goto L9;
}
L9:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l6=si0;
goto L4;
L8:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l0;
si1=si3?si1:si2;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
goto L4;
L7:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l6=si0;
goto L4;
L6:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l0;
si1=si3?si1:si2;
si0+=si1;
si1=2U;
si0+=si1;
l6=si0;
goto L4;
L5:;
si0=2U;
l6=si0;
L4:;
si0=l3;
si1=l6;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l6;
l5=si0;
L3:;
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l5;
si0+=si1;
l0=si0;
si1=1U;
si0+=si1;
l2=si0;
si1=l4;
si2=l3;
si1+=si2;
si0=si0 == si1;
l5=si0;
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
l0=si1;
si2=46U;
si1=si1 == si2;
si0&=si1;
l1=si0;
si0=l5;
if(si0){
goto L2;
}
si0=l0;
si1=46U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 == si1;
l1=si0;
L2:;
si0=l1;
goto L0;
L1:;
si0=l6;
si1=l3;
si2=1989176U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f15038(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l2=si0;
si1=1U;
si0=si0 != si1;
si1=-1U;
si2=l2;
si0=si2?si0:si1;
l3=si0;
si1=255U;
si0&=si1;
l4=si0;
si0=0U;
l5=si0;
si0=l3;
si1=-1U;
si0=si0 == si1;
l3=si0;
if(si0){
goto L2;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l6=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+30U);
l6=si0;
si0=l3;
if(si0){
goto L3;
}
si0=l4;
if(si0){
goto L1;
}
L3:;
si0=l1;
si0=f15037(i,si0);
l5=si0;
L1:;
si0=0U;
l3=si0;
si0=l2;
if(si0){
goto L4;
}
si0=6U;
l3=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=6U;
si0=si0 == si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l3=si0;
goto L4;
L5:;
si0=0U;
si1=l1;
si2=8U;
si1+=si2;
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L4;
case 3:
goto L8;
case 4:
goto L7;
case 5:
goto L6;
default:
goto L10;
}
L10:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l3=si0;
goto L4;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l2;
si1=si3?si1:si2;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
goto L4;
L8:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=4U;
si0+=si1;
l3=si0;
goto L4;
L7:;
si0=l2;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l2;
si2=16U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
si2=0U;
si3=l2;
si1=si3?si1:si2;
si0+=si1;
si1=2U;
si0+=si1;
l3=si0;
goto L4;
L6:;
si0=2U;
l3=si0;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=l5;
si2=l6;
si3=255U;
si2&=si3;
si1+=si2;
si2=l3;
si1+=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l7;
si0+=si1;
l8=si0;
si0=-1U;
l3=si0;
si0=l7;
l2=si0;
L14:;
{
si0=l4;
si1=l2;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
l5=si0;
goto L13;
L15:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=l4;
si0+=si1;
l6=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l4;
si1=l4;
si2=l3;
si1-=si2;
l7=si1;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=1U;
l5=si0;
si0=l6;
si1=1U;
si0+=si1;
l8=si0;
L13:;
si0=9U;
l3=si0;
si0=l4;
si1=l7;
si0-=si1;
l2=si0;
switch(si0){
case 0:
goto L19;
case 1:
goto L17;
case 2:
goto L18;
default:
goto L16;
}
L19:;
si0=10U;
l3=si0;
goto L16;
L18:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=8U;
si1=9U;
si2=l8;
si2=i32_load8_u(&i->m0,(U64)si2+1U);
si3=46U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
goto L16;
L17:;
si0=l8;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=7U;
si1=10U;
si2=l1;
si3=8U;
si2+=si3;
si2=i32_load8_u(&i->m0,(U64)si2);
si3=255U;
si2&=si3;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L16:;
si0=l0;
si1=l3;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=l5;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L12:;
si0=l7;
si1=l4;
si2=1989192U;
f662(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l7;
si1=l4;
si2=1989208U;
f662(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f15039(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si0=f761(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f15040(rustpythonInstance*i,U32 l0) {
U32 si0;
f14968(i);
si0=l0;
f15041(i,si0);
UNREACHABLE;
L0:;
}

void f15041(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f15345(i,si0);
UNREACHABLE;
L0:;
}

void f15042(rustpythonInstance*i) {
f14972(i);
UNREACHABLE;
L0:;
}

U32 f15043(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=1991896U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=1991936U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f15044(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U64 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=1U;
sj1=1ULL;
si2=l1;
si3=8U;
si2+=si3;
si0=wasi_snapshot_preview1__clock_time_get(i,si0,sj1,si2);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
i32_store16(&i->m0,(U64)si0+6U,si1);
si0=1986890U;
si1=43U;
si2=l1;
si3=6U;
si2+=si3;
si3=1992124U;
si4=1992172U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
l3=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l4=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=l3;
sj2=l4;
sj3=3294967296ULL;
sj2*=sj3;
sj1+=sj2;
i64_store32(&i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15045(rustpythonInstance*i,U32 l0,U64 l1,U32 l2,U64 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l1;
sj1=l3;
sj0+=sj1;
l3=sj0;
sj1=l1;
si0=sj0 < sj1;
if(si0){
goto L2;
}
si0=l4;
si1=l2;
si0+=si1;
l4=si0;
si1=999999999U;
si0=si0 <= si1;
if(si0){
goto L1;
}
sj0=l3;
sj1=1ULL;
sj0+=sj1;
l3=sj0;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l4;
si1=-1000000000U;
si0+=si1;
l4=si0;
goto L1;
L2:;
si0=1989468U;
si1=40U;
si2=1989532U;
f703(i,si0,si1,si2);
UNREACHABLE;
L1:;
sj0=l3;
si1=l4;
si2=1000000000U;
si1=DIV_U(si1,si2);
l2=si1;
sj1=(U64)(si1);
sj0+=sj1;
l1=sj0;
sj1=l3;
si0=sj0 >= sj1;
if(si0){
goto L3;
}
si0=l5;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1986092U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=1986172U;
f683(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
sj1=l1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
si2=-1000000000U;
si1*=si2;
si2=l4;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15046(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=l2;
si0=sj0 < sj1;
if(si0){
goto L3;
}
sj0=l6;
sj1=l2;
sj0-=sj1;
l7=sj0;
si0=l5;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
sj0=l7;
si0=!(sj0);
if(si0){
goto L3;
}
si0=l5;
si1=1000000000U;
si0+=si1;
l5=si0;
sj0=l7;
sj1=-1ULL;
sj0+=sj1;
l7=sj0;
L4:;
sj0=l7;
si1=l5;
si2=l3;
si1-=si2;
l3=si1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l5=si1;
sj1=(U64)(si1);
sj0+=sj1;
l2=sj0;
sj1=l7;
si0=sj0 < sj1;
if(si0){
goto L1;
}
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
si2=-1000000000U;
si1*=si2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=0ULL;
l2=sj0;
goto L2;
L3:;
sj0=l2;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L6;
}
sj0=l2;
sj1=l6;
sj0-=sj1;
l2=sj0;
si0=l5;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L7;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L6;
}
si0=l3;
si1=1000000000U;
si0+=si1;
l3=si0;
sj0=l2;
sj1=-1ULL;
sj0+=sj1;
l2=sj0;
L7:;
sj0=l2;
si1=l3;
si2=l5;
si1-=si2;
l3=si1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l5=si1;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L5;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1105492U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1097428U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1105524U;
f683(i,si0,si1);
UNREACHABLE;
L6:;
si0=1105540U;
si1=35U;
si2=1105576U;
f703(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l5;
si2=-1000000000U;
si1*=si2;
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=1ULL;
l2=sj0;
L2:;
si0=l0;
sj1=l2;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1986092U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1986172U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15047(rustpythonInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=1000000000U;
l5=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
sj1=l2;
sj0+=sj1;
l2=sj0;
sj1=l6;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=l3;
si0+=si1;
l1=si0;
si1=999999999U;
si0=si0 <= si1;
if(si0){
goto L3;
}
sj0=l2;
sj1=1ULL;
sj0+=sj1;
l2=sj0;
si0=!(sj0);
if(si0){
goto L1;
}
si0=l1;
si1=-1000000000U;
si0+=si1;
l1=si0;
L3:;
sj0=l2;
si1=l1;
si2=1000000000U;
si1=DIV_U(si1,si2);
l5=si1;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj1=l2;
si0=sj0 >= sj1;
if(si0){
goto L4;
}
si0=l4;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1986092U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=1986172U;
f683(i,si0,si1);
UNREACHABLE;
L4:;
si0=l5;
si1=-1000000000U;
si0*=si1;
si1=l1;
si0+=si1;
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15048(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+4U);
l2=si1;
si2=l3;
si3=8U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
l1=si2;
f15049(i,si0,si1,si2);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15271(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15049(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=512U;
l4=si0;
si0=512U;
si0=f15269(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=512U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l3;
si2=28U;
si1+=si2;
si2=l3;
si3=24U;
si2+=si3;
si3=512U;
si0=f15334(i,si0,si1,si2,si3);
l5=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=512U;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973140U);
si1=48U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=512U;
l4=si0;
L9:;
{
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=1U;
f14923(i,si0,si1,si2);
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+8U);
l2=si1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l3;
si2=28U;
si1+=si2;
si2=l3;
si3=24U;
si2+=si3;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
l4=si3;
si0=f15334(i,si0,si1,si2,si3);
l5=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2973140U);
si1=48U;
si0=si0 == si1;
if(si0){
goto L9;
}
}
L8:;
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l3;
si1=1991544U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=7282U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=32U;
si1+=si2;
f63(i,si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=64U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=12U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=40U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1991576U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=3ULL;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L3;
L7:;
si0=1U;
si1=512U;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l6=si0;
si0=f15399(i,si0);
l1=si0;
if(si0){
goto L11;
}
si0=1U;
l7=si0;
goto L10;
L11:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=f15269(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
L10:;
si0=l7;
si1=l6;
si2=l1;
si0=f15390(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
f15271(i,si0);
L12:;
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
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

void f15050(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
si2=l2;
f60(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=f15321(i,si0);
l4=si0;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L3:;
si0=l0;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
f15271(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15051(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972528U);
l5=si0;
si0=1U;
l6=si0;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972528U,si1);
si0=l4;
si1=l5;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=f15014(i);
l6=si0;
L2:;
si0=l2;
si1=36U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l4;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1987284U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=7283U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l3;
i32_store8(&i->m0,(U64)si0+47U,si1);
si0=l4;
si1=l4;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l4;
si2=47U;
si1+=si2;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l1;
si2=l4;
si3=8U;
si2+=si3;
si3=l5;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=f15014(i);
if(si0){
goto L3;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972529U,si1);
L3:;
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+2972528U,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=1991652U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f15052(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
f14977(i,si0);
si0=l2;
sj0=i64_load(&i->m0,(U64)si0+12U);
l4=sj0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L1;
}
sj0=l4;
sj1=255ULL;
sj0&=sj1;
sj1=3ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si1=l5;
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
goto L2;
}
si0=l6;
f15271(i,si0);
L2:;
si0=l5;
f15271(i,si0);
L1:;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l7=si0;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=1U;
l1=si0;
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1989636U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l5;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=l3;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1989732U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l5;
si2=l2;
si3=8U;
si2+=si3;
si0=f690(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l0;
si0=!(si0);
if(si0){
goto L3;
}
sj0=l4;
sj1=4294967295ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
goto L3;
L5:;
si0=0U;
l1=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L3;
}
sj0=l4;
sj1=4294967295ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
L4:;
si0=l0;
f15271(i,si0);
L3:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f15053(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f15054(i,si0);
UNREACHABLE;
L0:;
}

void f15054(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L1;
}
L4:;
si0=l3;
if(si0){
goto L1;
}
si0=1986064U;
l2=si0;
si0=0U;
l3=si0;
goto L2;
L3:;
si0=l3;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
L2:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1990352U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l2=si2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l2;
si4=i32_load8_u(&i->m0,(U64)si4+16U);
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=1990372U;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l2=si2;
si2=i32_load(&i->m0,(U64)si2+12U);
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=l2;
si4=i32_load8_u(&i->m0,(U64)si4+16U);
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f15055(rustpythonInstance*i) {
U32 l0=0;
U32 l1=0;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972532U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=1989740U;
si2=14U;
f14979(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+8U);
l4=si2;
f756(i,si0,si1,si2);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=24U;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=8589934592ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
L8:;
si0=0U;
l5=si0;
si0=l4;
if(si0){
goto L6;
}
goto L5;
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
goto L4;
L6:;
si0=l2;
l6=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L9;
case 2:
goto L11;
default:
goto L9;
}
L12:;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L10;
}
goto L5;
L11:;
si0=l2;
l6=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L5;
L10:;
si0=l2;
si1=1U;
si0+=si1;
l6=si0;
L9:;
si0=l4;
si1=9U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=0U;
l7=si0;
L14:;
{
si0=l7;
l1=si0;
si0=l4;
si0=!(si0);
l5=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l1;
sj0=(U64)(si0);
sj1=10ULL;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l7;
si1=l10;
si2=l7;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
l9=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l7;
l10=si0;
si0=l9;
sj1=l8;
si1=(U32)(sj1);
l11=si1;
si0+=si1;
l7=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L14;
}
goto L5;
}
L13:;
si0=0U;
l1=si0;
L15:;
{
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
l5=si0;
si0=l7;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L16;
}
goto L5;
L16:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=l1;
si2=10U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L15;
}
}
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
f15271(i,si0);
L17:;
si0=l5;
if(si0){
goto L3;
}
L4:;
si0=4096U;
l1=si0;
L3:;
si0=0U;
si1=l1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2972532U,si1);
goto L1;
L2:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
L1:;
si0=l0;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f15056(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967021U);
if(si0){
goto L1;
}
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=4U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+44U,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1989936U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1989008U;
si2=l2;
si3=32U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l1=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=4U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l1=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
L4:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L5;
}
si0=l4;
f15271(i,si0);
L5:;
si0=l3;
f15271(i,si0);
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l1;
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
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L7;
}
si0=l4;
f15271(i,si0);
L7:;
si0=l3;
f15271(i,si0);
L2:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1989968U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=3U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=1990008U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15057(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=1U;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972568U);
si1=1U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=f15036(i);
si1=255U;
si0&=si1;
l2=si0;
L1:;
si0=l1;
si1=l2;
i32_store8(&i->m0,(U64)si0+35U,si1);
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=12U;
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=12U;
si2+=si3;
l0=si2;
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l1;
sj0=i64_load(&i->m0,(U64)si0+16U);
sj1=-4493808902380553279ULL;
sj0^=sj1;
si1=l1;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=-163230743173927068ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si2=l0;
si2=i32_load(&i->m0,(U64)si2);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=1990052U;
l0=si0;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
sj1=-3988785156179279576ULL;
sj0^=sj1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
sj2=6146099213658827405ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L3;
L4:;
si0=l2;
si1=4U;
si0+=si1;
l0=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L2:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=f14975(i);
l0=si0;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L6;
}
si0=9U;
l3=si0;
si0=1990064U;
l2=si0;
goto L5;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si1=-1U;
si0+=si1;
l3=si0;
L5:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l1;
si1=l1;
si2=35U;
si1+=si2;
i32_store(&i->m0,(U64)si0+68U,si1);
si0=l1;
si1=l1;
si2=36U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l1;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l1;
si2=48U;
si1+=si2;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972441U);
si0=!(si0);
if(si0){
goto L8;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972441U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972588U);
if(si0){
goto L9;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972588U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972592U,si1);
goto L8;
L9:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972592U);
l2=si0;
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+2972592U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l3;
i32_store8(&i->m0,(U64)si0+79U,si1);
si0=l3;
if(si0){
goto L10;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
si0=f15014(i);
l3=si0;
si0=l1;
si1=56U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=1990076U;
f15058(i,si0,si1,si2);
si0=l3;
if(si0){
goto L12;
}
goto L11;
L13:;
si0=l1;
si1=56U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=1990076U;
f15058(i,si0,si1,si2);
L12:;
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
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0+9U,si1);
L11:;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972441U,si1);
si0=l2;
si1=0U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972588U);
if(si0){
goto L14;
}
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+2972592U,si1);
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972588U,si1);
goto L7;
L14:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972592U);
l3=si0;
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+2972592U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
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
goto L7;
}
si0=l3;
f14962(i,si0);
goto L7;
L10:;
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+92U,sj1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+88U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+84U,si1);
si0=l1;
si1=1991652U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l1;
si1=79U;
si0+=si1;
si1=l1;
si2=80U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L8:;
si0=l1;
si1=56U;
si0+=si1;
si1=l1;
si2=104U;
si1+=si2;
si2=1990116U;
f15058(i,si0,si1,si2);
L7:;
si0=l0;
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
goto L15;
}
si0=l0;
f14961(i,si0);
L15:;
si0=l1;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15058(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=7284U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=298U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=1990184U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=298U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=4U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l3;
si3=16U;
si2+=si3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
l4=si3;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l5=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l5;
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
goto L3;
}
si0=l7;
f15271(i,si0);
L3:;
si0=l5;
f15271(i,si0);
L1:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0);
l0=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
default:
goto L7;
}
L7:;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=0U;
f15051(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
L8:;
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
goto L9;
}
si0=l2;
f15271(i,si0);
L9:;
si0=l1;
f15271(i,si0);
goto L4;
L6:;
si0=l3;
si1=40U;
si0+=si1;
si1=l1;
si2=l2;
si3=1U;
f15051(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+44U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
L10:;
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
goto L11;
}
si0=l2;
f15271(i,si0);
L11:;
si0=l1;
f15271(i,si0);
goto L4;
L5:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2966968U);
l0=si0;
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+2966968U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=52U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1990296U;
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1986064U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l3;
si3=40U;
si2+=si3;
si3=l4;
TF(i->t0,si3,void (*)(rustpythonInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l1=si0;
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l0=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
L12:;
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
goto L13;
}
si0=l2;
f15271(i,si0);
L13:;
si0=l1;
f15271(i,si0);
L4:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15059(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
if(si0){
goto L1;
}
si0=1985880U;
si1=43U;
si2=1990304U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
f15053(i,si0);
UNREACHABLE;
L0:;
}

void f15060(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=1985976U;
si2=l4;
si0=f690(i,si0,si1,si2);
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+32U);
l6=sj1;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=8U;
si0+=si1;
l4=si0;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj0=i64_load(&i->m0,(U64)si0);
l6=sj0;
si0=l1;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l2;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=12U;
si0=f15269(i,si0);
l1=si0;
if(si0){
goto L2;
}
si0=4U;
si1=12U;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1990320U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15061(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l2;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=28U;
si0+=si1;
si1=1985976U;
si2=l1;
si0=f690(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(&i->m0,(U64)si1+16U);
l5=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=l5;
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=1990320U;
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

void f15062(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=8U;
si0=f15269(i,si0);
l1=si0;
if(si0){
goto L1;
}
si0=4U;
si1=8U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1990336U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f15063(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1990336U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f15064(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972556U);
l6=si1;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2972556U,si1);
si0=l6;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972572U);
if(si0){
goto L6;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2972572U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972568U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2972568U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1990392U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972540U);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
si1=l6;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2972540U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972548U);
l6=si0;
si0=l5;
si1=l0;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l6;
if(si0){
goto L4;
}
si0=l5;
si1=16U;
si0+=si1;
f15057(i,si0);
goto L3;
L7:;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l5;
si1=1990392U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l4;
i32_store8(&i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
si1=7285U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=4U;
i32_store8(&i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l5;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l5;
si1=2U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=1990460U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=1989008U;
si2=l5;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l4=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l6=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L9:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l6;
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
goto L10;
}
si0=l4;
f15271(i,si0);
L10:;
si0=l6;
f15271(i,si0);
f14972(i);
UNREACHABLE;
L8:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+44U);
l5=si0;
si0=l6;
si1=4U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L11:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L12;
}
si0=l4;
f15271(i,si0);
L12:;
si0=l5;
f15271(i,si0);
f14972(i);
UNREACHABLE;
L6:;
si0=l5;
si1=4U;
i32_store8(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l5;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+68U,sj1);
si0=l5;
si1=1986064U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=1990528U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=1989008U;
si2=l5;
si3=56U;
si2+=si3;
si0=f690(i,si0,si1,si2);
l4=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l6=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L13;
}
si0=l6;
si1=4U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+16U);
l5=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l6;
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
goto L15;
}
si0=l4;
f15271(i,si0);
L15:;
si0=l6;
f15271(i,si0);
f14972(i);
UNREACHABLE;
L13:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l6;
si1=4U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l6;
si1=3U;
si0=si0 != si1;
if(si0){
goto L5;
}
L16:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
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
goto L17;
}
si0=l4;
f15271(i,si0);
L17:;
si0=l5;
f15271(i,si0);
L5:;
f14972(i);
UNREACHABLE;
L4:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972548U);
si1=l5;
si2=16U;
si1+=si2;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+2972552U);
si2=i32_load(&i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
L3:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+2972540U);
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+2972540U,si1);
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+2972572U,si1);
si0=l4;
if(si0){
goto L1;
}
si0=l5;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=1990584U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=1986064U;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=l5;
si3=56U;
si2+=si3;
f14971(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+44U);
f14937(i,si0,si1);
f14972(i);
UNREACHABLE;
L2:;
si0=l5;
si1=68U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l5;
si1=1991780U;
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=l5;
si3=56U;
si2+=si3;
f14971(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(&i->m0,(U64)si0+40U);
si1=l5;
si1=i32_load(&i->m0,(U64)si1+44U);
f14937(i,si0,si1);
f14972(i);
UNREACHABLE;
L1:;
si0=l5;
si1=l5;
f15065(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15065(rustpythonInstance*i,U32 l0,U32 l1) {
UNREACHABLE;
L0:;
}

U32 f15066(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1990603U;
si2=10U;
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
si2=1990613U;
si3=10U;
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
si2=1986048U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
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

U32 f15067(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1992936U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si3=1992772U;
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

U32 f15068(rustpythonInstance*i,U32 l0,U32 l1) {
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
si2=1991231U;
si3=15U;
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
si2=1991248U;
si0=f716(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
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

void f15069(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si7,si8,si9;
U64 sj0,sj1,sj5,sj6;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+32U);
l6=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l4;
si0=i32_load16_u(&i->m0,(U64)si0+38U);
l7=si0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
sj0=16386ULL;
sj1=0ULL;
si2=l4;
si2=i32_load8_u(&i->m0,(U64)si2+40U);
sj0=si2?sj0:sj1;
l8=sj0;
sj1=4194625ULL;
sj0|=sj1;
sj1=l8;
si2=l4;
si2=i32_load8_u(&i->m0,(U64)si2+41U);
si3=l4;
si3=i32_load8_u(&i->m0,(U64)si3+42U);
si2|=si3;
sj0=si2?sj0:sj1;
sj1=262651580ULL;
sj0|=sj1;
l9=sj0;
l8=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+8U);
l9=sj0;
l8=sj0;
si0=l4;
sj0=i64_load(&i->m0,(U64)si0+16U);
si0=!(sj0);
if(si0){
goto L4;
}
L5:;
si0=l4;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l8=sj0;
L4:;
si0=l1;
si1=l6;
si2=l3;
si3=l2;
si4=l7;
sj5=l9;
sj6=l8;
si7=l4;
si7=i32_load16_u(&i->m0,(U64)si7+36U);
si8=l5;
si9=8U;
si8+=si9;
si0=wasi_snapshot_preview1__path_open(i,si0,si1,si2,si3,si4,sj5,sj6,si7,si8);
l4=si0;
if(si0){
goto L7;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+8U);
l4=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L7:;
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=3U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=1989068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
f14943(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15070(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=47U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
sj1=1ULL;
i64_store(&i->m0,(U64)si0+40U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=1U;
l4=si0;
si0=l3;
si1=1U;
i32_store8(&i->m0,(U64)si0+48U,si1);
si0=l3;
si1=2U;
i32_store16(&i->m0,(U64)si0+46U,si1);
si0=l3;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=8U;
si3+=si4;
f14990(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+56U);
l5=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+60U);
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L7;
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
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
L7:;
si0=l4;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l4=si0;
si0=128U;
si1=1U;
si0=f15273(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=24U;
si0=f15269(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l5;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+32U,sj1);
si0=l0;
sj1=549755814016ULL;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l0;
si1=l6;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l0;
si1=11U;
si0+=si1;
si1=l3;
si1=i32_load8_u(&i->m0,(U64)si1+59U);
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=9U;
si0+=si1;
si1=l3;
si1=i32_load16_u(&i->m0,(U64)si1+57U);
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+60U);
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=2ULL;
i64_store(&i->m0,(U64)si0,sj1);
L5:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
f53(i);
UNREACHABLE;
L3:;
si0=1U;
si1=l2;
f52(i,si0,si1);
UNREACHABLE;
L2:;
si0=1U;
si1=128U;
f52(i,si0,si1);
UNREACHABLE;
L1:;
si0=4U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15071(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=400U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L3;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l3;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l3;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
sj1=l4;
si1=(U32)(sj1);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
f756(i,si0,si1,si2);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l6;
si2=l3;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=wasi_snapshot_preview1__path_unlink_file(i,si0,si1,si2);
l2=si0;
if(si0){
goto L8;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L6;
}
goto L4;
L8:;
si0=l0;
si1=l2;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l0;
si1=1989068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l5;
f15271(i,si0);
goto L4;
L5:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15072(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=400U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l5;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l5;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+4U);
l6=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=l4;
si1=383U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=400U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l4;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L8;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l5;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L5;
L8:;
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L5;
L7:;
si0=l5;
si1=l3;
si2=l4;
f15048(i,si0,si1,si2);
goto L5;
L6:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L5:;
sj0=l8;
si0=(U32)(sj0);
l4=si0;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+4U);
l6=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l7;
f756(i,si0,si1,si2);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
sj0=l6;
si0=(U32)(sj0);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L11;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l10;
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
if(si0){
goto L10;
}
L13:;
si0=l0;
si1=1989068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
f15271(i,si0);
L14:;
si0=l4;
if(si0){
goto L9;
}
goto L4;
L12:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
if(si0){
goto L9;
}
goto L4;
L11:;
si0=l0;
si1=1989068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
f15271(i,si0);
L15:;
si0=l4;
if(si0){
goto L9;
}
goto L4;
L10:;
si0=l1;
si1=l11;
si2=l12;
si3=l9;
si4=l10;
si5=l5;
si6=24U;
si5+=si6;
si5=i32_load(&i->m0,(U64)si5);
si0=wasi_snapshot_preview1__path_rename(i,si0,si1,si2,si3,si4,si5);
l1=si0;
if(si0){
goto L17;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L16;
L17:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L16:;
si0=l7;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
f15271(i,si0);
L18:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l2;
f15271(i,si0);
L4:;
si0=l5;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15073(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=400U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L3;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l3;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l3;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
sj1=l4;
si1=(U32)(sj1);
l5=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+12U);
f756(i,si0,si1,si2);
sj0=l4;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l6;
si2=l3;
si3=24U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si0=wasi_snapshot_preview1__path_remove_directory(i,si0,si1,si2);
l2=si0;
if(si0){
goto L8;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L6;
}
goto L4;
L8:;
si0=l0;
si1=l2;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
if(si0){
goto L6;
}
goto L4;
L7:;
si0=l0;
si1=1989068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l5;
f15271(i,si0);
goto L4;
L5:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15074(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l3;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=400U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L3;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l3;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l3;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l3;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+4U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l0;
si1=l2;
sj2=l4;
si2=(U32)(sj2);
l1=si2;
si3=l3;
si3=i32_load(&i->m0,(U64)si3+12U);
f15075(i,si0,si1,si2,si3);
sj0=l4;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l1;
f15271(i,si0);
goto L4;
L5:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+4U,sj1);
L4:;
si0=l3;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15075(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f756(i,si0,si1,si2);
si0=1989068U;
sj0=(U64)(si0);
l5=sj0;
sj0=2ULL;
l6=sj0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=0U;
si2=l7;
si3=l4;
si4=16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l4;
si5=8U;
si4+=si5;
si0=wasi_snapshot_preview1__path_filestat_get(i,si0,si1,si2,si3,si4);
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=65535U;
si0&=si1;
sj0=(U64)(si0);
l5=sj0;
sj0=0ULL;
l6=sj0;
L3:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+40U);
l7=si0;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f756(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l9=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=1U;
si0+=si1;
l3=si0;
si1=-1U;
si2=l3;
si0=si2?si0:si1;
si1=1U;
si2=l8;
si3=7U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l3;
si1=1U;
si0=f15273(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l9;
si2=l8;
si3=l2;
si4=l3;
si5=l4;
si6=76U;
si5+=si6;
si0=wasi_snapshot_preview1__path_readlink(i,si0,si1,si2,si3,si4,si5);
l7=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
f15271(i,si0);
goto L1;
L7:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l7=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L10;
}
L11:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si1=l3;
si0-=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l3;
f14923(i,si0,si1,si2);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+16U);
l7=si0;
goto L14;
L15:;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
l7=si0;
L14:;
si0=l2;
si1=l7;
si0+=si1;
si1=0U;
si2=l3;
si0=f15392(i,si0,si1,si2);
si0=l7;
si1=l3;
si0+=si1;
l3=si0;
goto L12;
L13:;
si0=0U;
l3=si0;
L12:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l9;
si2=l8;
si3=l2;
si4=l3;
si5=l4;
si6=76U;
si5+=si6;
si0=wasi_snapshot_preview1__path_readlink(i,si0,si1,si2,si3,si4,si5);
l7=si0;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+76U);
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L11;
}
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
L10:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l7;
if(si0){
goto L18;
}
si0=l2;
f15271(i,si0);
si0=1U;
l3=si0;
goto L17;
L18:;
si0=l2;
si1=l3;
si2=1U;
si3=l7;
si0=f33(i,si0,si1,si2,si3);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
L17:;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
L16:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=7U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=5U;
si0+=si1;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=65535U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
f15271(i,si0);
goto L1;
L8:;
si0=1U;
si1=l7;
f52(i,si0,si1);
UNREACHABLE;
L6:;
si0=1U;
si1=l3;
f52(i,si0,si1);
UNREACHABLE;
L5:;
f53(i);
UNREACHABLE;
L4:;
si0=l0;
sj1=8589934592ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=1989068U;
i32_store(&i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15076(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=416U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=400U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l5;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l5;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+4U);
l6=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=l4;
si1=383U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si0=f15390(i,si0,si1,si2);
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l5;
si1=400U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l4;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+400U);
if(si0){
goto L8;
}
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+404U);
si2=l5;
si3=408U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L5;
L8:;
si0=l5;
si1=-1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L5;
L7:;
si0=l5;
si1=l3;
si2=l4;
f15048(i,si0,si1,si2);
goto L5;
L6:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
goto L4;
L5:;
sj0=l8;
si0=(U32)(sj0);
l4=si0;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
si0=l5;
sj0=i64_load(&i->m0,(U64)si0+4U);
l6=sj0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+12U);
l10=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
si2=l7;
f756(i,si0,si1,si2);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l7=si0;
sj0=l6;
si0=(U32)(sj0);
l3=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L11;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l11=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l5;
si1=24U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l10;
f756(i,si0,si1,si2);
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(&i->m0,(U64)si0+20U);
l10=si0;
if(si0){
goto L10;
}
L13:;
si0=l0;
si1=1989068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
f15271(i,si0);
L14:;
si0=l4;
if(si0){
goto L9;
}
goto L4;
L12:;
si0=l0;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l4;
if(si0){
goto L9;
}
goto L4;
L11:;
si0=l0;
si1=1989068U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L15;
}
si0=l3;
f15271(i,si0);
L15:;
si0=l4;
if(si0){
goto L9;
}
goto L4;
L10:;
si0=l1;
si1=0U;
si2=l11;
si3=l12;
si4=l9;
si5=l10;
si6=l5;
si7=24U;
si6+=si7;
si6=i32_load(&i->m0,(U64)si6);
si0=wasi_snapshot_preview1__path_link(i,si0,si1,si2,si3,si4,si5,si6);
l1=si0;
if(si0){
goto L17;
}
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L16;
L17:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L16:;
si0=l7;
si0=!(si0);
if(si0){
goto L18;
}
si0=l3;
f15271(i,si0);
L18:;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l2;
f15271(i,si0);
L4:;
si0=l5;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15077(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=464U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=383U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l3;
si1=l1;
si2=l2;
si0=f15390(i,si0,si1,si2);
l1=si0;
si1=l2;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=384U;
si0+=si1;
si1=l1;
si2=l2;
si3=1U;
si2+=si3;
f702(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+384U);
if(si0){
goto L3;
}
si0=l1;
si1=400U;
si0+=si1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+388U);
si2=l1;
si3=392U;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
f15049(i,si0,si1,si2);
goto L1;
L3:;
si0=l1;
si1=-1U;
i32_store(&i->m0,(U64)si0+400U,si1);
si0=l1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+1989608U);
i64_store(&i->m0,(U64)si0+404U,sj1);
goto L1;
L2:;
si0=l3;
si1=400U;
si0+=si1;
si1=l1;
si2=l2;
f15048(i,si0,si1,si2);
L1:;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+404U);
l4=sj0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+400U);
l1=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
sj1=l4;
si1=(U32)(sj1);
l2=si1;
si2=l3;
si2=i32_load(&i->m0,(U64)si2+412U);
f756(i,si0,si1,si2);
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=0U;
si2=l5;
si3=l3;
si4=8U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si0=wasi_snapshot_preview1__path_filestat_get(i,si0,si1,si2,si3,si4);
l1=si0;
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l3;
si1=456U;
si0+=si1;
si1=l3;
si2=60U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=448U;
si0+=si1;
si1=l3;
si2=52U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l6=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=440U;
si0+=si1;
si1=l3;
si2=44U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l7=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=432U;
si0+=si1;
si1=l3;
si2=36U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l8=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=424U;
si0+=si1;
si1=l3;
si2=28U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l9=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=416U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l10=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=408U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
l11=sj1;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sj1=i64_load(&i->m0,(U64)si1+4U);
l12=sj1;
i64_store(&i->m0,(U64)si0+400U,sj1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l12;
i64_store(&i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=20U;
si0+=si1;
sj1=l11;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
sj1=l10;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=36U;
si0+=si1;
sj1=l9;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=44U;
si0+=si1;
sj1=l8;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=52U;
si0+=si1;
sj1=l7;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=60U;
si0+=si1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=68U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L9:;
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L6;
L8:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L4;
L7:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=1989068U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
L5:;
sj0=l4;
sj1=4294967296ULL;
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=l2;
f15271(i,si0);
L4:;
si0=l3;
si1=464U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15078(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=2U;
si1=l4;
si2=1U;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=l3;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15079(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=2U;
si1=l2;
si2=l3;
si3=l4;
si4=12U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l3=si0;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=l3;
si2=65535U;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(&i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15080(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void f15081(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

void f15082(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2972504U);
l2=si0;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L3;
default:
goto L1;
}
L4:;
si0=0U;
si1=2U;
i32_store8(&i->m0,(U64)si0+2972504U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=l2;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=4294967296ULL;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=0U;
si1=3U;
i32_store8(&i->m0,(U64)si0+2972504U,si1);
L3:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1985880U;
si1=43U;
si2=1989364U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1992436U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1986064U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=1989348U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15083(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+2972536U);
l2=si2;
si3=7286U;
si4=l2;
si2=si4?si2:si3;
TF(i->t0,si2,void (*)(rustpythonInstance*,U32,U32))(i,si0,si1);
f15042(i);
UNREACHABLE;
L0:;
}

void f15084(rustpythonInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=l0;
f15083(i,si0,si1);
UNREACHABLE;
L0:;
}

F64 f15085(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F64 l5=0;
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
F64 l16=0;
F64 l17=0;
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
F64 sd0,sd1,sd2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=l1;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L2;
}
sd0=1;
l5=sd0;
goto L1;
L2:;
si0=l1;
si1=16U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=l1;
si0=f734(i,si0,si1);
l6=si0;
goto L3;
L4:;
si0=l1;
if(si0){
goto L5;
}
si0=0U;
l6=si0;
goto L3;
L5:;
si0=l1;
si1=3U;
si0&=si1;
l7=si0;
si0=l1;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=0U;
l6=si0;
si0=0U;
l8=si0;
goto L6;
L7:;
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+3U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
si0=l1;
si1=-4U;
si0&=si1;
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+4U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+5U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+6U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+7U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
si0=l8;
si1=8U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+8U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+9U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+10U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l0;
si1=i32_load8_s(&i->m0,(U64)si1+11U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l8;
si0+=si1;
l8=si0;
L8:;
{
si0=l6;
si1=l8;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L8;
}
}
L3:;
si0=l3;
si1=16U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l2;
si1=l3;
si0=f734(i,si0,si1);
l9=si0;
goto L9;
L10:;
si0=l3;
if(si0){
goto L11;
}
sd0=0;
l5=sd0;
goto L1;
L11:;
si0=l3;
si1=3U;
si0&=si1;
l7=si0;
si0=l3;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=0U;
l9=si0;
si0=0U;
l8=si0;
goto L12;
L13:;
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
l9=si0;
si0=l3;
si1=-4U;
si0&=si1;
l8=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l9;
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
l9=si0;
si0=l8;
si1=8U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l9;
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
l9=si0;
L12:;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=l8;
si0+=si1;
l8=si0;
L14:;
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
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L14;
}
}
L9:;
sd0=0;
l5=sd0;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=1U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l9;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
L15:;
si0=l9;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l9;
si0=f15269(i,si0);
l8=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=l1;
si0+=si1;
l10=si0;
si0=l2;
si1=l3;
si0+=si1;
l11=si0;
si0=l6;
si1=l9;
si2=l6;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0>>=(si1&31);
l1=si0;
si1=-1U;
si0+=si1;
l12=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
l7=si0;
si0=0U;
l8=si0;
L19:;
{
si0=l8;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l4;
si1=l8;
f15088(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l8;
si0+=si1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L19;
}
}
si0=0U;
l13=si0;
si0=0U;
si1=l1;
si0-=si1;
l14=si0;
si0=l9;
si1=-1U;
si0+=si1;
l15=si0;
sd0=0;
l16=sd0;
sd0=0;
l17=sd0;
si0=0U;
l18=si0;
L21:;
{
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l20=si0;
L22:;
{
si0=l13;
l8=si0;
si0=l0;
si1=l10;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L27;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l7;
si1=255U;
si0&=si1;
l21=si0;
goto L26;
L27:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l1=si0;
si0=l7;
si1=31U;
si0&=si1;
l13=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l1;
si0|=si1;
l21=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L26;
L28:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l1=si0;
si0=l0;
si1=3U;
si0+=si1;
l22=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l1;
si1=l13;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l21=si0;
si0=l22;
l0=si0;
goto L26;
L29:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l22;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=63U;
si1&=si2;
si0|=si1;
si1=l13;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l21=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
L26:;
si0=l8;
si1=l12;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l15;
si1=l12;
si2=l8;
si1+=si2;
l7=si1;
si2=l15;
si3=l7;
si2=si2 < si3;
si0=si2?si0:si1;
l23=si0;
si0=0U;
l24=si0;
goto L23;
L25:;
sd0=0;
l5=sd0;
sd0=l16;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L30;
}
sd0=l16;
si1=l6;
sd1=(F64)(si1);
sd0/=sd1;
sd1=l16;
si2=l9;
sd2=(F64)(si2);
sd1/=sd2;
sd0+=sd1;
sd1=l16;
sd2=l17;
sd1-=sd2;
sd2=l16;
sd1/=sd2;
sd0+=sd1;
sd1=0.33333333333333331;
sd0*=sd1;
l5=sd0;
L30:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
goto L1;
L24:;
si0=l14;
si1=l8;
si2=1U;
si1+=si2;
l13=si1;
si0+=si1;
l24=si0;
si1=l15;
si2=l12;
si3=l8;
si2+=si3;
l7=si2;
si3=l15;
si4=l7;
si3=si3 < si4;
si1=si3?si1:si2;
l23=si1;
si0=si0 > si1;
if(si0){
goto L22;
}
L23:;
si0=l8;
si1=1U;
si0+=si1;
l13=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L22;
}
si0=0U;
l7=si0;
si0=l2;
l1=si0;
L31:;
{
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0);
l22=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L33;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l22;
si1=255U;
si0&=si1;
l22=si0;
goto L32;
L33:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l25=si0;
si0=l22;
si1=31U;
si0&=si1;
l26=si0;
si0=l22;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l26;
si1=6U;
si0<<=(si1&31);
si1=l25;
si0|=si1;
l22=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L32;
L34:;
si0=l25;
si1=6U;
si0<<=(si1&31);
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l25=si0;
si0=l1;
si1=3U;
si0+=si1;
l27=si0;
si0=l22;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L35;
}
si0=l25;
si1=l26;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l22=si0;
si0=l27;
l1=si0;
goto L32;
L35:;
si0=l25;
si1=6U;
si0<<=(si1&31);
si1=l27;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=63U;
si1&=si2;
si0|=si1;
si1=l26;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l22=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
L32:;
si0=l24;
si1=l7;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l7;
si1=l23;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l21;
si1=l22;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=l7;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l19;
si1=l7;
si0+=si1;
l22=si0;
si0=i32_load8_u(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L36;
}
L37:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=l11;
si0=si0 == si1;
if(si0){
goto L22;
}
goto L31;
L36:;
}
}
si0=l22;
si1=1U;
i32_store8(&i->m0,(U64)si0,si1);
sd0=l17;
sd1=1;
sd0+=sd1;
sd1=l17;
si2=l7;
si3=l18;
si2=si2 < si3;
sd0=si2?sd0:sd1;
l17=sd0;
si0=l8;
si1=1U;
si0+=si1;
l13=si0;
sd0=l16;
sd1=1;
sd0+=sd1;
l16=sd0;
si0=l7;
l18=si0;
goto L21;
}
L18:;
f53(i);
UNREACHABLE;
L17:;
si0=1U;
si1=l9;
f52(i,si0,si1);
UNREACHABLE;
L16:;
si0=l7;
si1=l20;
si2=1993196U;
f663(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
sd0=l5;
L0:;
return sd0;
}

F64 f15086(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
F64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
F64 sd0,sd1,sd2,sd3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
sd0=f15085(i,si0,si1,si2,si3);
l4=sd0;
si0=l1;
if(si0){
goto L2;
}
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si0+=si1;
l6=si0;
si0=l0;
si1=l1;
si0+=si1;
l7=si0;
si0=0U;
l5=si0;
L3:;
{
si0=l0;
si0=i32_load8_s(&i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
l1=si0;
goto L4;
L5:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l3=si0;
si0=l1;
si1=31U;
si0&=si1;
l8=si0;
si0=l1;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l3;
si0|=si1;
l1=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L4;
L6:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l3=si0;
si0=l1;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l3;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l1=si0;
si0=l0;
si1=3U;
si0+=si1;
l0=si0;
goto L4;
L7:;
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l0;
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
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
L4:;
si0=l2;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
goto L8;
L9:;
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l3;
si1=31U;
si0&=si1;
l9=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l3=si0;
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
goto L8;
L10:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
si0=l2;
si1=3U;
si0+=si1;
l2=si0;
goto L8;
L11:;
si0=l8;
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
goto L1;
}
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
L8:;
si0=l1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L1:;
sd0=l4;
sd1=1;
sd2=l4;
sd1-=sd2;
si2=l5;
sd2=(F64)(si2);
sd3=0.10000000000000001;
sd2*=sd3;
sd1*=sd2;
sd0+=sd1;
l4=sd0;
sd1=1;
sd2=l4;
sd3=1;
si2=sd2 <= sd3;
sd0=si2?sd0:sd1;
L0:;
return sd0;
}

void f15087(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=l1;
si1=8U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L7;
}
L10:;
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
goto L12;
}
si0=l1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L11;
}
L12:;
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
L11:;
si0=l5;
si1=l2;
si0=f15274(i,si0,si1);
l3=si0;
goto L6;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
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
goto L7;
}
L13:;
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

void f15088(rustpythonInstance*i,U32 l0,U32 l1) {
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
f15087(i,si0,si1,si2,si3);
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

void f15089(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
si0=l1;
si1=4U;
si0+=si1;
l5=si0;
L3:;
{
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l2;
si3=l3;
f15020(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
goto L4;
L5:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L8;
}
si0=l7;
si1=-1U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=-12U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=2U;
si1=l4;
si2=16U;
si1+=si2;
si2=1U;
si3=l4;
si4=28U;
si3+=si4;
si0=wasi_snapshot_preview1__fd_write(i,si0,si1,si2,si3);
l6=si0;
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+28U);
l6=si0;
sj0=4ULL;
l8=sj0;
goto L9;
L10:;
sj0=0ULL;
l8=sj0;
si0=l6;
si1=65535U;
si0&=si1;
l6=si0;
si1=8U;
si0=si0 == si1;
if(si0){
goto L7;
}
L9:;
si0=l4;
si1=l6;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l8;
sj1|=sj2;
i64_store(&i->m0,(U64)si0+8U,sj1);
sj0=l8;
si0=(U32)(sj0);
l6=si0;
goto L6;
L8:;
si0=1988380U;
si1=16U;
si2=l4;
si3=16U;
si2+=si3;
si3=1988396U;
si4=1988504U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=4U;
l6=si0;
si0=l4;
si1=4U;
i32_store8(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
L6:;
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L4:;
si0=l6;
si1=255U;
si0&=si1;
l7=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
if(si0){
goto L13;
}
si0=l0;
si1=1993240U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L14:;
si0=l7;
switch(si0){
case 0:
goto L20;
case 1:
goto L19;
case 2:
goto L18;
case 3:
goto L16;
default:
goto L20;
}
L20:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=f14991(i,si0);
si1=255U;
si0&=si1;
l6=si0;
goto L17;
L19:;
si0=l4;
si0=i32_load8_u(&i->m0,(U64)si0+9U);
l6=si0;
goto L17;
L18:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l6=si0;
L17:;
si0=l6;
si1=255U;
si0&=si1;
si1=35U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l7;
si1=3U;
si0=si0 < si1;
if(si0){
goto L11;
}
goto L12;
L16:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
si0=i32_load8_u(&i->m0,(U64)si0+8U);
si1=35U;
si0=si0 == si1;
if(si0){
goto L12;
}
L15:;
si0=l0;
si1=l4;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L13:;
si0=l3;
si1=l7;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l2;
si1=l7;
si0+=si1;
l2=si0;
si0=l3;
si1=l7;
si0-=si1;
l3=si0;
goto L11;
L21:;
si0=l7;
si1=l3;
si2=1993328U;
f662(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si0=i32_load(&i->m0,(U64)si0);
l9=si0;
si1=l7;
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
goto L22;
}
si0=l9;
f15271(i,si0);
L22:;
si0=l7;
f15271(i,si0);
L11:;
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
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15090(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=1U;
l2=si0;
si0=l0;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L1;
case 2:
goto L3;
case 3:
goto L2;
default:
goto L1;
}
L3:;
si0=l1;
si1=1993344U;
si2=4U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l0=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
si1=1651340644U;
si0=si0 == si1;
l0=si0;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
f15271(i,si0);
L5:;
si0=l0;
if(si0){
goto L2;
}
si0=l1;
si1=1993348U;
si2=8U;
f14979(i,si0,si1,si2);
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
f15271(i,si0);
L6:;
si0=l2;
si0=!(si0);
l2=si0;
goto L1;
L2:;
si0=0U;
l2=si0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f15091(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
case 2:
goto L5;
case 3:
goto L5;
default:
goto L13;
}
L13:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+28U);
l7=si0;
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l7;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l7;
if(si0){
goto L9;
}
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L11;
L14:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L11;
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=i32_load(&i->m0,(U64)si0);
si1=2972584U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
l7=si0;
si0=l6;
si1=1U;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l7;
i32_store8(&i->m0,(U64)si0+23U,si1);
si0=l7;
if(si0){
goto L7;
}
si0=l6;
si1=1U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=2972584U;
i32_store(&i->m0,(U64)si0,si1);
goto L11;
L15:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+4U,si1);
L11:;
si0=l3;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+37U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=l1;
si2=i32_load(&i->m0,(U64)si2+24U);
si3=l1;
si4=32U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
f15089(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l6=si0;
si1=4U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=1993512U;
si3=1U;
f15089(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+25U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1986064U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1991652U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=23U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f14942(i,si0,si1);
UNREACHABLE;
L8:;
si0=1989380U;
si1=38U;
si2=1989452U;
f703(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+36U,sj1);
si0=l3;
si1=1986064U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1991652U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=23U;
si0+=si1;
si1=l3;
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
si0=1993356U;
si1=38U;
si2=1993496U;
f15095(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+25U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L17;
}
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l4;
f15089(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+25U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L17:;
si0=l3;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2+4U);
si3=l4;
f15089(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0+24U);
l6=si0;
si1=4U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l0;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+25U);
i32_store(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L16:;
si0=l0;
si1=4U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
i32_store8(&i->m0,(U64)si0+37U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L19;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=28U;
si0+=si1;
l1=si0;
goto L18;
L19:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
L18:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l6;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
if(si0){
goto L21;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=28U;
si0+=si1;
l1=si0;
goto L20;
L21:;
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
if(si0){
goto L1;
}
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
L20:;
si0=l1;
si1=0U;
i32_store8(&i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15092(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f15093(rustpythonInstance*i,U32 l0) {
U32 si0;
si0=l0;
f15094(i,si0);
UNREACHABLE;
L0:;
}

void f15094(rustpythonInstance*i,U32 l0) {
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
si1=1993516U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+8U);
si4=1U;
f15064(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f15095(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
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
f15093(i,si0);
UNREACHABLE;
L0:;
}

void f15096(rustpythonInstance*i,U32 l0) {
L0:;
}

void f15097(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1993536U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f15098(rustpythonInstance*i,U32 l0,U32 l1) {
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
si1=1993536U;
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

void f15099(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
sj1=4ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0);
l5=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L12;
}
si0=l5;
si1=255U;
si0&=si1;
l6=si0;
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si1=l2;
si0-=si1;
l8=si0;
goto L9;
L12:;
si0=l2;
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
goto L13;
}
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l7;
si0|=si1;
l6=si0;
si0=l2;
si1=2U;
si0+=si1;
l7=si0;
si1=l2;
si0-=si1;
l8=si0;
goto L9;
L13:;
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l9=si0;
si0=l2;
si1=3U;
si0+=si1;
l7=si0;
si0=l5;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l9;
si1=l6;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l7;
si1=l2;
si0-=si1;
l8=si0;
goto L9;
L14:;
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1);
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
goto L10;
}
L11:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=24U;
si0=f15269(i,si0);
l5=si0;
if(si0){
goto L8;
}
si0=4U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L10:;
si0=4U;
l8=si0;
si0=l2;
si1=4U;
si0+=si1;
l7=si0;
L9:;
si0=l7;
si1=l2;
si2=l3;
si1+=si2;
l10=si1;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l7;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L17;
}
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
si0=l9;
si1=255U;
si0&=si1;
l9=si0;
goto L16;
L17:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l9;
si1=31U;
si0&=si1;
l11=si0;
si0=l9;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l11;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l9=si0;
si0=l7;
si1=2U;
si0+=si1;
l5=si0;
goto L16;
L18:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l12=si0;
si0=l7;
si1=3U;
si0+=si1;
l5=si0;
si0=l9;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l12;
si1=l11;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
goto L16;
L19:;
si0=l12;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
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
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l7;
si1=4U;
si0+=si1;
l5=si0;
L16:;
si0=l5;
si1=l10;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
l5=si0;
goto L4;
L15:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2967020U);
si0=24U;
si0=f15269(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L6;
}
L8:;
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1993552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1993552U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l8;
si1=l7;
si0-=si1;
si1=l5;
si0+=si1;
l7=si0;
L20:;
{
si0=l7;
l11=si0;
si0=l9;
l12=si0;
si0=l5;
l7=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L22;
}
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
si0=l9;
si1=255U;
si0&=si1;
l9=si0;
goto L21;
L22:;
si0=l7;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l5=si0;
si0=l9;
si1=31U;
si0&=si1;
l13=si0;
si0=l9;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l13;
si1=6U;
si0<<=(si1&31);
si1=l5;
si0|=si1;
l9=si0;
si0=l7;
si1=2U;
si0+=si1;
l5=si0;
goto L21;
L23:;
si0=l5;
si1=6U;
si0<<=(si1&31);
si1=l7;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l14=si0;
si0=l7;
si1=3U;
si0+=si1;
l5=si0;
si0=l9;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L24;
}
si0=l14;
si1=l13;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
goto L21;
L24:;
si0=l14;
si1=6U;
si0<<=(si1&31);
si1=l5;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=63U;
si1&=si2;
si0|=si1;
si1=l13;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=4U;
si0+=si1;
l5=si0;
L21:;
si0=1U;
l13=si0;
si0=l6;
si1=-33U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L25;
}
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l6;
si0=f803(i,si0);
if(si0){
goto L25;
}
si0=l6;
si0=f807(i,si0);
l13=si0;
goto L25;
L26:;
si0=l6;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
l13=si0;
L25:;
si0=l13;
si0=!(si0);
if(si0){
goto L27;
}
si0=l12;
si1=45U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=l9;
si1=2097119U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=l9;
si1=128U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l9;
si0=f803(i,si0);
if(si0){
goto L28;
}
si0=l9;
si0=f807(i,si0);
si0=!(si0);
if(si0){
goto L27;
}
goto L28;
L29:;
si0=l9;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L27;
}
L28:;
si0=l8;
si1=1U;
si0+=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L30;
}
si0=l13;
si1=l3;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=l13;
si1=l3;
si0=si0 == si1;
if(si0){
goto L30;
}
goto L2;
L31:;
si0=l2;
si1=l13;
si0+=si1;
si0=i32_load8_s(&i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
L30:;
si0=l3;
si1=l13;
si0-=si1;
l8=si0;
si0=l2;
si1=l13;
si0+=si1;
l14=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l4;
si1=l6;
f15101(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l6=si0;
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l6;
si2=24U;
si1*=si2;
si0+=si1;
l6=si0;
si1=l8;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l14;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=1993552U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l13;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+8U,si1);
L27:;
si0=l11;
si1=l7;
si0-=si1;
si1=l5;
si0+=si1;
l7=si0;
si0=l12;
l6=si0;
si0=l11;
l8=si0;
si0=l5;
si1=l10;
si0=si0 != si1;
if(si0){
goto L20;
}
goto L5;
}
L6:;
si0=4U;
si1=24U;
f52(i,si0,si1);
UNREACHABLE;
L5:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L3;
}
L4:;
si0=l4;
si1=l5;
f15101(i,si0,si1);
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L3:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si2=24U;
si1*=si2;
si0+=si1;
l5=si0;
si1=0U;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1993552U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1993552U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
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
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=l3;
si2=0U;
si3=l13;
si4=1993628U;
f737(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f15100(rustpythonInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f15101(rustpythonInstance*i,U32 l0,U32 l1) {
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
f15100(i,si0,si1,si2,si3);
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

U32 f15102(rustpythonInstance*i,U32 l0,U32 l1) {
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

U32 f15103(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L2:;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L1:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1993900U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1993688U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=1994008U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f15104(rustpythonInstance*i,U32 l0) {
U32 si0,si1;
U64 sj1;
si0=l0;
sj1=4ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store16(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
L0:;
}

void f15105(rustpythonInstance*i,U32 l0) {
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

void f15106(rustpythonInstance*i,U32 l0) {
L0:;
}

void f15107(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=1993644U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
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
si0=0U;
si1=l2;
si2=1993808U;
si3=l2;
si4=4U;
si3+=si4;
si4=1993808U;
si5=l2;
si6=8U;
si5+=si6;
si6=1993792U;
f709(i,si0,si1,si2,si3,si4,si5,si6);
UNREACHABLE;
L0:;
}

U32 f15108(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=1993824U;
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

void f15109(rustpythonInstance*i) {
U32 l0=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=2966972U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=2966972U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l0;
si2=24U;
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=2966996U;
si1=l0;
si2=8U;
si1+=si2;
si2=1993836U;
f1427(i,si0,si1,si2);
si0=l0;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15110(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+28U);
l2=si0;
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
TF(i->t0,si1,void (*)(rustpythonInstance*,U32))(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
f15271(i,si0);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L2:;
si0=l3;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+8U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=1U;
goto L0;
L1:;
si0=l1;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1993900U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=1993688U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=1994008U;
f683(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f15111(rustpythonInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966996U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
f15109(i);
L1:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2966976U);
l3=si0;
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2966976U,si1);
si0=l2;
si1=l3;
i32_store8(&i->m0,(U64)si0+7U,si1);
si0=l3;
if(si0){
goto L7;
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=f15014(i);
si1=1U;
si0^=si1;
l4=si0;
L8:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+2966977U);
if(si0){
goto L9;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966988U);
l5=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=0U;
si1=l5;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+2966988U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966980U);
l6=si0;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l3;
if(si0){
goto L11;
}
si0=l7;
l8=si0;
goto L2;
L11:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=0U;
l9=si0;
si0=0U;
si1=l3;
si2=-2U;
si1+=si2;
l10=si1;
si2=l10;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l11=si0;
si0=1U;
l10=si0;
L13:;
{
si0=l6;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l10;
si3=l6;
si4=l10;
si5=2U;
si4<<=(si5&31);
si3+=si4;
l3=si3;
si4=4U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si4=i32_load(&i->m0,(U64)si4);
si3=si3 <= si4;
si2+=si3;
l3=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l12=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
l9=si0;
si0=l3;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l10=si0;
si1=l11;
si0=si0 <= si1;
if(si0){
goto L13;
}
}
si0=l10;
si1=l5;
si2=-2U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
l9=si0;
goto L5;
L14:;
si0=l12;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
if(si0){
goto L4;
}
si0=0U;
l9=si0;
goto L3;
L12:;
si0=0U;
l9=si0;
si0=1U;
l10=si0;
si0=l3;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L3;
L10:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2966992U);
l8=si0;
si1=1U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+2966992U,si1);
goto L2;
L9:;
si0=l2;
si1=l4;
i32_store8(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=2966976U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=1994172U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1994216U;
si4=1994232U;
f712(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L7:;
si0=l2;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=1993688U;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1993680U;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=7U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
f15107(i,si0,si1);
UNREACHABLE;
L6:;
si0=1994024U;
si1=21U;
si2=1994156U;
f703(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l10;
si3=2U;
si2<<=(si3&31);
si1+=si2;
l3=si1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
l3=si0;
L4:;
L15:;
{
si0=l6;
si1=l3;
si2=-1U;
si1+=si2;
l10=si1;
si2=1U;
si1>>=(si2&31);
l9=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l3;
l9=si0;
goto L3;
L16:;
si0=l6;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
si0=l9;
l3=si0;
si0=l10;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L15;
}
}
L3:;
si0=l6;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=l4;
if(si0){
goto L17;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+2972556U);
si1=2147483647U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=f15014(i);
if(si0){
goto L17;
}
si0=0U;
si1=1U;
i32_store8(&i->m0,(U64)si0+2966977U,si1);
L17:;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
si1=0U;
i32_store8(&i->m0,(U64)si0+2966976U,si1);
si0=l1;
si1=l8;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=32U;
si2=l8;
si2=I32_CLZ(si2);
l6=si2;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
si2=0U;
si3=31U;
si4=l6;
si3-=si4;
l6=si3;
si4=l6;
si5=l3;
si4=si4 > si5;
si2=si4?si2:si3;
si1<<=(si2&31);
l3=si1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l3;
si2=l8;
si1^=si2;
si2=0U;
si3=l8;
si1=si3?si1:si2;
l3=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f15112(rustpythonInstance*i,U32 l0,U32 l1) {
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
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
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
si1=65535U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l3=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L2;
}
L3:;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
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
si1=65535U;
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

U32 f15113(rustpythonInstance*i,U32 l0,U32 l1) {
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
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f787(i,sj0,si1,si2);
l0=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
l3=si0;
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
si1=65535U;
si0&=si1;
l4=si0;
si1=4U;
si0>>=(si1&31);
l3=si0;
si0=l4;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L5;
}
goto L2;
}
L3:;
si0=l0;
si0=i32_load16_u(&i->m0,(U64)si0);
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
si1=65535U;
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

void f15114(rustpythonInstance*i,U32 l0) {
L0:;
}

void f15115(rustpythonInstance*i,U32 l0) {
L0:;
}

U32 f15116(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
l0=si0;
si0=l2;
l4=si0;
L6:;
{
si0=-1U;
si1=l3;
si2=l2;
si3=1U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
l5=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l1;
si1=si1 != si2;
si2=l2;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L7;
L8:;
si0=l2;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0+=si1;
l0=si0;
L7:;
si0=l4;
si1=l0;
si0-=si1;
l2=si0;
si0=l4;
si1=l0;
si0=si0 > si1;
if(si0){
goto L6;
}
goto L4;
}
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=0U;
l0=si0;
si0=l2;
l4=si0;
L9:;
{
si0=l6;
si1=l2;
si2=1U;
si1>>=(si2&31);
si2=l0;
si1+=si2;
l3=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=-1U;
si1=l5;
si2=l1;
si1=si1 > si2;
si2=l2;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
l4=si0;
goto L10;
L11:;
si0=l2;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0+=si1;
l0=si0;
L10:;
si0=l4;
si1=l0;
si0-=si1;
l2=si0;
si0=l4;
si1=l0;
si0=si0 > si1;
if(si0){
goto L9;
}
}
L4:;
si0=0U;
goto L0;
L3:;
si0=1U;
goto L0;
L2:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1U;
L0:;
return si0;
}

void f15117(rustpythonInstance*i,U32 l0) {
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
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+12U);
l1=si0;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=l1;
si2=0U;
si1=si1 != si2;
si0-=si1;
l3=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=3U;
si0<<=(si1&31);
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
si0=0U;
l7=si0;
L2:;
{
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l7;
si1=1U;
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
si0=l5;
l0=si0;
si0=l4;
l10=si0;
si0=l2;
l11=si0;
L3:;
{
si0=l10;
l12=si0;
si0=l11;
si0=!(si0);
if(si0){
goto L6;
}
si0=l12;
si1=1U;
si0+=si1;
l10=si0;
si0=l0;
si1=0U;
si2=l6;
si3=l12;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l13=si0;
si1=-4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=255U;
si0&=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=0U;
si2=l6;
si3=l10;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
si2=3U;
si1<<=(si2&31);
si0-=si1;
l14=si0;
si1=4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l12;
si1=l15;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=1997212U;
si1=20U;
si2=1997340U;
f703(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l13;
si1=-8U;
si0+=si1;
l12=si0;
sj0=i64_load(&i->m0,(U64)si0);
l16=sj0;
si0=l12;
si1=l14;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=l14;
sj1=l16;
i64_store(&i->m0,(U64)si0,sj1);
si0=1U;
l9=si0;
L4:;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l7;
si1=l11;
si2=-1U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l8;
l7=si0;
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

U32 f15118(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=9U;
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=0U;
l0=si0;
si0=l3;
l5=si0;
L5:;
{
si0=-1U;
si1=l4;
si2=l3;
si3=1U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
l3=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l1;
si1=si1 != si2;
si2=l6;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
l5=si0;
goto L6;
L7:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0+=si1;
l0=si0;
L6:;
si0=l5;
si1=l0;
si0-=si1;
l3=si0;
si0=l5;
si1=l0;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L2;
}
L4:;
si0=l4;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
goto L0;
L3:;
si0=9U;
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l0=si0;
si0=l3;
l5=si0;
L8:;
{
si0=l7;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l0;
si1+=si2;
l6=si1;
si2=12U;
si1*=si2;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=-1U;
si1=l4;
si2=l1;
si1=si1 > si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
l5=si0;
goto L10;
L11:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
si1=1U;
si0+=si1;
l0=si0;
L10:;
si0=l5;
si1=l0;
si0-=si1;
l3=si0;
si0=l5;
si1=l0;
si0=si0 > si1;
if(si0){
goto L8;
}
goto L2;
L9:;
}
si0=l7;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l2=si0;
L2:;
si0=l2;
goto L0;
L1:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f15119(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L5;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
l0=si0;
si0=l2;
l4=si0;
L6:;
{
si0=-1U;
si1=l3;
si2=l2;
si3=1U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
l5=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l1;
si1=si1 != si2;
si2=l2;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
l4=si0;
goto L7;
L8:;
si0=l2;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si1=1U;
si0+=si1;
l0=si0;
L7:;
si0=l4;
si1=l0;
si0-=si1;
l2=si0;
si0=l4;
si1=l0;
si0=si0 > si1;
if(si0){
goto L6;
}
goto L4;
}
L5:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=0U;
l0=si0;
si0=l2;
l4=si0;
L9:;
{
si0=l6;
si1=l2;
si2=1U;
si1>>=(si2&31);
si2=l0;
si1+=si2;
l3=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=-1U;
si1=l5;
si2=l1;
si1=si1 > si2;
si2=l2;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
l4=si0;
goto L10;
L11:;
si0=l2;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l3;
si1=1U;
si0+=si1;
l0=si0;
L10:;
si0=l4;
si1=l0;
si0-=si1;
l2=si0;
si0=l4;
si1=l0;
si0=si0 > si1;
if(si0){
goto L9;
}
}
L4:;
si0=0U;
goto L0;
L3:;
si0=1U;
goto L0;
L2:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1U;
L0:;
return si0;
}

U32 f15120(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L2;
}
si0=0U;
goto L0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=0U;
l0=si0;
si0=l2;
l4=si0;
L4:;
{
si0=-1U;
si1=l3;
si2=l2;
si3=1U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
l2=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l1;
si1=si1 != si2;
si2=l5;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
l4=si0;
goto L5;
L6:;
si0=l5;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=1U;
si0+=si1;
l0=si0;
L5:;
si0=l4;
si1=l0;
si0-=si1;
l2=si0;
si0=l4;
si1=l0;
si0=si0 > si1;
if(si0){
goto L4;
}
}
si0=0U;
goto L0;
L3:;
si0=l3;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
goto L0;
L1:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
if(si0){
goto L7;
}
si0=0U;
goto L0;
L7:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l6=si0;
si0=0U;
l0=si0;
si0=l2;
l4=si0;
L10:;
{
si0=l6;
si1=l2;
si2=1U;
si1>>=(si2&31);
si2=l0;
si1+=si2;
l5=si1;
si2=12U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si1=l2;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=-1U;
si1=l3;
si2=l1;
si1=si1 > si2;
si2=l2;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
l4=si0;
goto L11;
L12:;
si0=l2;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
si1=1U;
si0+=si1;
l0=si0;
L11:;
si0=l4;
si1=l0;
si0-=si1;
l2=si0;
si0=l4;
si1=l0;
si0=si0 > si1;
if(si0){
goto L10;
}
}
si0=0U;
goto L0;
L9:;
si0=l6;
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
goto L0;
L8:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f15121(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L5:;
{
si0=-1U;
si1=l4;
si2=l3;
si3=1U;
si2>>=(si3&31);
si3=l1;
si2+=si3;
l3=si2;
si3=12U;
si2*=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l2;
si1=si1 != si2;
si2=l6;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
l5=si0;
goto L6;
L7:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
L6:;
si0=l5;
si1=l1;
si0-=si1;
l3=si0;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
}
si0=0U;
l2=si0;
goto L1;
L4:;
si0=l4;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L3:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L10:;
{
si0=l7;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
l6=si1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=-1U;
si1=l4;
si2=l2;
si1=si1 > si2;
si2=l3;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l6;
l5=si0;
goto L11;
L12:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
L11:;
si0=l5;
si1=l1;
si0-=si1;
l3=si0;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L10;
}
}
si0=0U;
l2=si0;
goto L1;
L9:;
si0=l7;
si1=l6;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
goto L1;
L8:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
l1=si0;
si0=0U;
l2=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f15122(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L9:;
{
si0=-1U;
si1=l4;
si2=l3;
si3=1U;
si2>>=(si3&31);
si3=l1;
si2+=si3;
l3=si2;
si3=4U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l2;
si1=si1 != si2;
si2=l6;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
l5=si0;
goto L10;
L11:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
L10:;
si0=l5;
si1=l1;
si0-=si1;
l3=si0;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L9;
}
goto L6;
}
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L12:;
{
si0=l7;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
l6=si1;
si2=20U;
si1*=si2;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=-1U;
si1=l4;
si2=l2;
si1=si1 > si2;
si2=l3;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
l5=si0;
goto L13;
L14:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
L13:;
si0=l5;
si1=l1;
si0-=si1;
l3=si0;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
goto L4;
}
L7:;
si0=l4;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l1=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
L6:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l7;
si1=l6;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+8U);
l1=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
L4:;
si0=l0;
si1=2U;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
goto L0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
L0:;
}

U32 f15123(rustpythonInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=1114112U;
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=0U;
l0=si0;
si0=l3;
l5=si0;
L5:;
{
si0=-1U;
si1=l4;
si2=l3;
si3=1U;
si2>>=(si3&31);
si3=l0;
si2+=si3;
l3=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l1;
si1=si1 != si2;
si2=l6;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
l5=si0;
goto L6;
L7:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=1U;
si0+=si1;
l0=si0;
L6:;
si0=l5;
si1=l0;
si0-=si1;
l3=si0;
si0=l5;
si1=l0;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L2;
}
L4:;
si0=l4;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+4U);
goto L0;
L3:;
si0=1114112U;
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l0=si0;
si0=l3;
l5=si0;
L8:;
{
si0=l7;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l0;
si1+=si2;
l6=si1;
si2=12U;
si1*=si2;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=-1U;
si1=l4;
si2=l1;
si1=si1 > si2;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
l5=si0;
goto L10;
L11:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
si1=1U;
si0+=si1;
l0=si0;
L10:;
si0=l5;
si1=l0;
si0-=si1;
l3=si0;
si0=l5;
si1=l0;
si0=si0 > si1;
if(si0){
goto L8;
}
goto L2;
L9:;
}
si0=l7;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
L2:;
si0=l2;
goto L0;
L1:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f15124(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L8;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L9:;
{
si0=-1U;
si1=l4;
si2=l3;
si3=1U;
si2>>=(si3&31);
si3=l1;
si2+=si3;
l3=si2;
si3=4U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l6=si1;
si2=l2;
si1=si1 != si2;
si2=l6;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
l5=si0;
goto L10;
L11:;
si0=l6;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si1=1U;
si0+=si1;
l1=si0;
L10:;
si0=l5;
si1=l1;
si0-=si1;
l3=si0;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L9;
}
goto L6;
}
L8:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l1=si0;
si0=l3;
l5=si0;
L12:;
{
si0=l7;
si1=l3;
si2=1U;
si1>>=(si2&31);
si2=l1;
si1+=si2;
l6=si1;
si2=20U;
si1*=si2;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=-1U;
si1=l4;
si2=l2;
si1=si1 > si2;
si2=l3;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l6;
l5=si0;
goto L13;
L14:;
si0=l3;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=1U;
si0+=si1;
l1=si0;
L13:;
si0=l5;
si1=l1;
si0-=si1;
l3=si0;
si0=l5;
si1=l1;
si0=si0 > si1;
if(si0){
goto L12;
}
goto L4;
}
L7:;
si0=l4;
si1=l3;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0+4U);
l1=si0;
si1=17U;
si0=si0 != si1;
if(si0){
goto L1;
}
L6:;
si0=l0;
si1=17U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l7;
si1=l6;
si2=20U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load8_u(&i->m0,(U64)si0+8U);
l1=si0;
si1=17U;
si0=si0 != si1;
if(si0){
goto L2;
}
L4:;
si0=l0;
si1=17U;
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=1996348U;
si1=37U;
si2=1996492U;
f673(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
l1=si1;
si1=i32_load16_u(&i->m0,(U64)si1+1U);
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=3U;
si0+=si1;
si1=l1;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
l1=si1;
si1=i32_load16_u(&i->m0,(U64)si1+1U);
i32_store16(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=3U;
si0+=si1;
si1=l1;
si2=3U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
L0:;
}

U32 f15125(rustpythonInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l0;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l0;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l0;
si1=12U;
si0>>=(si1&31);
si1=-16U;
si0+=si1;
l1=si0;
si1=255U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=2210216U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=6U;
si0<<=(si1&31);
si1=l0;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si0|=si1;
l1=si0;
si1=64U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=0U;
l0=si0;
si0=l1;
si1=2208872U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si2=2208812U;
f663(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l0;
si1=6U;
si0>>=(si1&31);
si1=2209192U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l1=si0;
si1=2U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=2208848U;
si0+=si1;
l1=si0;
goto L2;
L6:;
si0=l1;
si1=256U;
si2=2208780U;
f663(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l1;
si1=64U;
si2=2208796U;
f663(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=3U;
si2=2208828U;
f663(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=3U;
si0>>=(si1&31);
si1=536870904U;
si0&=si1;
si1=2208968U;
si0+=si1;
l1=si0;
L2:;
si0=l1;
sj0=i64_load(&i->m0,(U64)si0);
si1=l0;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
l0=si0;
L1:;
si0=l0;
L0:;
return si0;
}

U32 f15126(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=7U;
si0&=si1;
l4=si0;
si0=l0;
sj0=i64_load(&i->m0,(U64)si0+16U);
l5=sj0;
sj1=8387220255154660723ULL;
sj0^=sj1;
l6=sj0;
sj0=l5;
sj1=7237128888997146499ULL;
sj0^=sj1;
l5=sj0;
si0=0U;
l7=si0;
sj0=8317987319222330741ULL;
l8=sj0;
si0=l2;
si1=-8U;
si0&=si1;
l9=si0;
if(si0){
goto L4;
}
sj0=7816392313619706465ULL;
l10=sj0;
si0=0U;
l11=si0;
goto L3;
L4:;
si0=0U;
l11=si0;
sj0=7816392313619706465ULL;
l10=sj0;
L5:;
{
si0=l1;
si1=l11;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l12=sj0;
sj1=l6;
sj0^=sj1;
l6=sj0;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj1=l8;
sj2=l5;
sj1+=sj2;
l8=sj1;
sj2=l5;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
l5=sj1;
sj0+=sj1;
l13=sj0;
sj1=l5;
sj2=17ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l5=sj0;
sj0=l10;
sj1=l6;
sj2=16ULL;
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l6=sj0;
sj1=21ULL;
sj0=I64_ROTL(sj0,sj1);
sj1=l6;
sj2=l8;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l6=sj0;
sj0=l13;
sj1=32ULL;
sj0=I64_ROTL(sj0,sj1);
l10=sj0;
sj0=l8;
sj1=l12;
sj0^=sj1;
l8=sj0;
si0=l11;
si1=8U;
si0+=si1;
l11=si0;
si1=l9;
si0=si0 < si1;
if(si0){
goto L5;
}
}
si0=l9;
si1=-1U;
si0+=si1;
si1=-8U;
si0&=si1;
si1=8U;
si0+=si1;
l11=si0;
L3:;
sj0=0ULL;
l12=sj0;
si0=l4;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l1;
si1=l11;
si0+=si1;
sj0=i64_load32_u(&i->m0,(U64)si0);
l12=sj0;
si0=4U;
l7=si0;
L6:;
si0=l7;
si1=1U;
si0|=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l7;
si2=l11;
si1+=si2;
si0+=si1;
sj0=i64_load16_u(&i->m0,(U64)si0);
si1=l7;
si2=3U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
si0=l7;
si1=2U;
si0|=si1;
l7=si0;
L7:;
si0=l7;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l1;
si1=l7;
si2=l11;
si1+=si2;
si0+=si1;
sj0=i64_load8_u(&i->m0,(U64)si0);
si1=l7;
si2=3U;
si1<<=(si2&31);
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l12=sj0;
L8:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
sj2=l12;
si3=l2;
sj3=(U64)(si3);
sj4=56ULL;
sj3<<=(sj4&63);
sj2|=sj3;
l12=sj2;
sj3=l6;
sj2^=sj3;
l6=sj2;
sj3=16ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l6;
sj4=l10;
sj3+=sj4;
l6=sj3;
sj2^=sj3;
l10=sj2;
sj3=l8;
sj4=l5;
sj3+=sj4;
l8=sj3;
sj4=32ULL;
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l13=sj2;
sj3=l12;
sj2^=sj3;
sj3=l6;
sj4=l8;
sj5=l5;
sj6=13ULL;
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l5=sj4;
sj3+=sj4;
l6=sj3;
sj4=l5;
sj5=17ULL;
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l5=sj3;
sj2+=sj3;
l8=sj2;
sj3=l5;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l5=sj2;
sj3=l10;
sj4=21ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l13;
sj3^=sj4;
l10=sj3;
sj4=l6;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=238ULL;
sj4^=sj5;
sj3+=sj4;
l6=sj3;
sj2+=sj3;
l12=sj2;
sj3=l5;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l5=sj2;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l5;
sj4=l10;
sj5=16ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=l6;
sj4^=sj5;
l6=sj4;
sj5=l8;
sj6=32ULL;
sj5=I64_ROTL(sj5,sj6);
sj4+=sj5;
l8=sj4;
sj3+=sj4;
l5=sj3;
sj2^=sj3;
l10=sj2;
sj3=17ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l10;
sj4=l6;
sj5=21ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=l8;
sj4^=sj5;
l6=sj4;
sj5=l12;
sj6=32ULL;
sj5=I64_ROTL(sj5,sj6);
sj4+=sj5;
l8=sj4;
sj3+=sj4;
l10=sj3;
sj2^=sj3;
l12=sj2;
sj3=13ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l12;
sj4=l6;
sj5=16ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=l8;
sj4^=sj5;
l6=sj4;
sj5=l5;
sj6=32ULL;
sj5=I64_ROTL(sj5,sj6);
sj4+=sj5;
l5=sj4;
sj3+=sj4;
l8=sj3;
sj2^=sj3;
l12=sj2;
sj3=l6;
sj4=21ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l5;
sj3^=sj4;
l5=sj3;
sj4=l10;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l6=sj3;
sj2+=sj3;
l10=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
l13=sj2;
sj3=l5;
sj4=16ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l6;
sj3^=sj4;
l6=sj3;
sj4=21ULL;
sj3=I64_ROTL(sj3,sj4);
l14=sj3;
sj2^=sj3;
sj3=l12;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l10;
sj3^=sj4;
l5=sj3;
sj2^=sj3;
l10=sj2;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l3;
si2=REM_U(si2,si3);
si3=3U;
si2<<=(si3&31);
si1+=si2;
l9=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
sj2=l5;
sj3=221ULL;
sj2^=sj3;
l12=sj2;
sj3=l6;
sj4=l8;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l6=sj3;
sj2+=sj3;
l8=sj2;
sj3=32ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l14;
sj4=l6;
sj3^=sj4;
l6=sj3;
sj4=16ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l6;
sj5=l13;
sj4+=sj5;
l6=sj4;
sj3^=sj4;
l13=sj3;
sj2+=sj3;
l14=sj2;
sj3=l13;
sj4=21ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l13=sj2;
sj3=16ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l13;
sj4=l12;
sj5=13ULL;
sj4<<=(sj5&63);
sj5=l5;
sj6=51ULL;
sj5>>=(sj6&63);
sj4|=sj5;
sj5=l8;
sj4^=sj5;
l5=sj4;
sj5=l6;
sj4+=sj5;
l6=sj4;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l8=sj3;
sj2^=sj3;
l12=sj2;
sj3=21ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l12;
sj4=l6;
sj5=l5;
sj6=17ULL;
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l5=sj4;
sj5=l14;
sj4+=sj5;
l6=sj4;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l12=sj3;
sj2^=sj3;
l13=sj2;
sj3=16ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l13;
sj4=l5;
sj5=13ULL;
sj4=I64_ROTL(sj4,sj5);
sj5=l6;
sj4^=sj5;
l5=sj4;
sj5=l8;
sj4+=sj5;
l6=sj4;
sj5=32ULL;
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l8=sj3;
sj2^=sj3;
sj3=21ULL;
sj2=I64_ROTL(sj2,sj3);
sj3=l5;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l6;
sj3^=sj4;
l5=sj3;
sj4=13ULL;
sj3=I64_ROTL(sj3,sj4);
sj4=l5;
sj5=l12;
sj4+=sj5;
sj3^=sj4;
l5=sj3;
sj4=17ULL;
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
sj3=l5;
sj4=l8;
sj3+=sj4;
l5=sj3;
sj4=32ULL;
sj3>>=(sj4&63);
sj2^=sj3;
sj3=l5;
sj2^=sj3;
si2=(U32)(sj2);
si1+=si2;
si2=l9;
si2=i32_load(&i->m0,(U64)si2);
sj3=l10;
si3=(U32)(sj3);
si2*=si3;
si1+=si2;
si2=l11;
si1=REM_U(si1,si2);
l9=si1;
si2=12U;
si1*=si2;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l11;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si2=l2;
si0=f15389(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l7;
si1=l9;
si2=12U;
si1*=si2;
si0+=si1;
si1=8U;
si0+=si1;
goto L0;
L2:;
si0=0U;
goto L0;
L1:;
si0=2233920U;
si1=57U;
si2=2233980U;
f673(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f15127(rustpythonInstance*i,U32 l0,U32 l1) {
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

void f15128(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1;
si0=l2;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si1=1U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-65U;
si0+=si1;
l5=si0;
si1=7U;
si0<<=(si1&31);
si1=l5;
si2=254U;
si1&=si2;
si2=1U;
si1>>=(si2&31);
si0|=si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L26;
case 2:
goto L19;
case 3:
goto L26;
case 4:
goto L22;
case 5:
goto L26;
case 6:
goto L26;
case 7:
goto L24;
case 8:
goto L26;
case 9:
goto L26;
case 10:
goto L23;
case 11:
goto L17;
case 12:
goto L20;
default:
goto L26;
}
L26:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L1;
L25:;
si0=l4;
si0=!(si0);
if(si0){
goto L27;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=69U;
si0=si0 == si1;
if(si0){
goto L21;
}
L27:;
si0=l0;
sj1=1ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L24:;
si0=l4;
si0=!(si0);
if(si0){
goto L28;
}
si0=l3;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=69U;
si0=si0 == si1;
if(si0){
goto L18;
}
L28:;
si0=l0;
sj1=34359738369ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L23:;
si0=l0;
sj1=55834574849ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L22:;
si0=l0;
sj1=85899345921ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L21:;
si0=l0;
sj1=4294967297ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-2U;
si0+=si1;
l2=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L1;
L20:;
si0=l4;
if(si0){
goto L12;
}
goto L11;
L19:;
si0=l4;
if(si0){
goto L16;
}
goto L15;
L18:;
si0=l0;
sj1=47244640257ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-2U;
si0+=si1;
l2=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L1;
L17:;
si0=l4;
si0=!(si0);
if(si0){
goto L35;
}
si0=l1;
si1=2U;
si0+=si1;
l6=si0;
si0=l2;
si1=-2U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=-65U;
si0+=si1;
switch(si0){
case 0:
goto L34;
case 1:
goto L35;
case 2:
goto L35;
case 3:
goto L35;
case 4:
goto L33;
case 5:
goto L35;
case 6:
goto L35;
case 7:
goto L35;
case 8:
goto L32;
default:
goto L35;
}
L35:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L34:;
si0=l5;
si0=!(si0);
if(si0){
goto L36;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=69U;
si0=si0 == si1;
if(si0){
goto L30;
}
L36:;
si0=l0;
sj1=38654705665ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L31;
L33:;
si0=l5;
si0=!(si0);
if(si0){
goto L37;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=79U;
si0=si0 == si1;
if(si0){
goto L29;
}
L37:;
si0=l0;
sj1=64424509441ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L31;
L32:;
si0=l0;
sj1=68719476737ULL;
i64_store(&i->m0,(U64)si0,sj1);
L31:;
si0=l6;
l1=si0;
si0=l5;
l2=si0;
goto L1;
L30:;
si0=l0;
sj1=42949672961ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-3U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L1;
L29:;
si0=l0;
sj1=60129542145ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-3U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L1;
L16:;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l5=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
si0=l2;
si1=-2U;
si0+=si1;
l2=si0;
si0=l5;
si1=-79U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L15;
case 2:
goto L15;
case 3:
goto L15;
case 4:
goto L15;
case 5:
goto L15;
case 6:
goto L13;
default:
goto L15;
}
L15:;
si0=l0;
sj1=21474836481ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L2;
L14:;
si0=l0;
sj1=17179869185ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L13:;
si0=l0;
sj1=77309411329ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L1;
L12:;
si0=l1;
si1=2U;
si0+=si1;
l6=si0;
si0=l2;
si1=-2U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=-65U;
si0+=si1;
l7=si0;
si1=7U;
si0<<=(si1&31);
si1=l7;
si2=254U;
si1&=si2;
si2=1U;
si1>>=(si2&31);
si0|=si1;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L11;
case 2:
goto L9;
case 3:
goto L11;
case 4:
goto L6;
case 5:
goto L11;
case 6:
goto L11;
case 7:
goto L8;
case 8:
goto L11;
case 9:
goto L11;
case 10:
goto L7;
default:
goto L11;
}
L11:;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l5;
si0=!(si0);
if(si0){
goto L38;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=69U;
si0=si0 == si1;
if(si0){
goto L5;
}
L38:;
si0=l0;
sj1=8589934593ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L9:;
si0=l5;
si0=!(si0);
if(si0){
goto L39;
}
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=79U;
si0=si0 == si1;
if(si0){
goto L4;
}
L39:;
si0=l0;
sj1=30064771073ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L8:;
si0=l0;
sj1=51539607553ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L7:;
si0=l0;
sj1=73014444033ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L6:;
si0=l0;
sj1=81604378625ULL;
i64_store(&i->m0,(U64)si0,sj1);
goto L3;
L5:;
si0=l0;
sj1=12884901889ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-3U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L1;
L4:;
si0=l0;
sj1=25769803777ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l2;
si1=-3U;
si0+=si1;
l2=si0;
si0=l1;
si1=3U;
si0+=si1;
l1=si0;
goto L1;
L3:;
si0=l6;
l1=si0;
si0=l5;
l2=si0;
goto L1;
L2:;
si0=l3;
l1=si0;
si0=l4;
l2=si0;
L1:;
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

void f15129(rustpythonInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1;
si0=l2;
if(si0){
goto L2;
}
si0=0U;
l3=si0;
si0=l1;
l4=si0;
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=0U;
l3=si0;
si0=l1;
l4=si0;
si0=l2;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=-66U;
si0+=si1;
switch(si0){
case 0:
goto L26;
case 1:
goto L22;
case 2:
goto L29;
case 3:
goto L1;
case 4:
goto L1;
case 5:
goto L31;
case 6:
goto L18;
case 7:
goto L1;
case 8:
goto L23;
case 9:
goto L21;
case 10:
goto L28;
case 11:
goto L27;
case 12:
goto L30;
case 13:
goto L1;
case 14:
goto L19;
case 15:
goto L1;
case 16:
goto L1;
case 17:
goto L25;
case 18:
goto L20;
default:
goto L1;
}
L31:;
si0=l7;
if(si0){
goto L17;
}
si0=1U;
l3=si0;
goto L24;
L30:;
si0=4U;
l3=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=2U;
si0+=si1;
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l2=si0;
si0=l6;
l4=si0;
si0=l7;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=-71U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L15;
case 2:
goto L1;
case 3:
goto L16;
default:
goto L1;
}
L29:;
si0=7U;
l3=si0;
goto L3;
L28:;
si0=8U;
l3=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
si0=l1;
si1=2U;
si0+=si1;
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l2=si0;
si0=l6;
l4=si0;
si0=l7;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=-66U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L1;
case 2:
goto L1;
case 3:
goto L1;
case 4:
goto L1;
case 5:
goto L13;
case 6:
goto L7;
case 7:
goto L1;
case 8:
goto L1;
case 9:
goto L1;
case 10:
goto L1;
case 11:
goto L12;
case 12:
goto L1;
case 13:
goto L1;
case 14:
goto L8;
case 15:
goto L1;
case 16:
goto L1;
case 17:
goto L10;
case 18:
goto L9;
default:
goto L1;
}
L27:;
si0=16U;
l3=si0;
goto L3;
L26:;
si0=17U;
l3=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
si0=l6;
l4=si0;
si0=l7;
l5=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=83U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si1=-2U;
si0+=si1;
l5=si0;
si0=l1;
si1=2U;
si0+=si1;
l4=si0;
si0=18U;
l3=si0;
goto L1;
L25:;
si0=19U;
l3=si0;
si0=l7;
if(si0){
goto L6;
}
L24:;
si0=l6;
l4=si0;
si0=0U;
l5=si0;
goto L1;
L23:;
si0=22U;
l3=si0;
goto L3;
L22:;
si0=23U;
l3=si0;
goto L3;
L21:;
si0=24U;
l3=si0;
goto L3;
L20:;
si0=25U;
l3=si0;
goto L3;
L19:;
si0=26U;
l3=si0;
goto L3;
L18:;
si0=27U;
l3=si0;
goto L3;
L17:;
si0=l1;
si1=2U;
si0+=si1;
l8=si0;
si0=l2;
si1=-2U;
si0+=si1;
l2=si0;
si0=1U;
l3=si0;
si0=l6;
l4=si0;
si0=l7;
l5=si0;
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=-71U;
si0+=si1;
switch(si0){
case 0:
goto L34;
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
goto L33;
default:
goto L1;
}
L34:;
si0=2U;
l3=si0;
goto L32;
L33:;
si0=3U;
l3=si0;
L32:;
si0=l8;
l4=si0;
si0=l2;
l5=si0;
goto L1;
L16:;
si0=5U;
l3=si0;
goto L4;
L15:;
si0=6U;
l3=si0;
goto L4;
L14:;
si0=21U;
l3=si0;
goto L4;
L13:;
si0=9U;
l3=si0;
goto L5;
L12:;
si0=10U;
l3=si0;
goto L5;
L11:;
si0=11U;
l3=si0;
goto L5;
L10:;
si0=12U;
l3=si0;
goto L5;
L9:;
si0=13U;
l3=si0;
goto L5;
L8:;
si0=14U;
l3=si0;
goto L5;
L7:;
si0=15U;
l3=si0;
goto L5;
L6:;
si0=l6;
l4=si0;
si0=l7;
l5=si0;
si0=l6;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=83U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si1=-2U;
si0+=si1;
l5=si0;
si0=l1;
si1=2U;
si0+=si1;
l4=si0;
si0=20U;
l3=si0;
goto L1;
L5:;
si0=l8;
l4=si0;
si0=l2;
l5=si0;
goto L1;
L4:;
si0=l8;
l4=si0;
si0=l2;
l5=si0;
goto L1;
L3:;
si0=l6;
l4=si0;
si0=l7;
l5=si0;
L1:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
L0:;
}

